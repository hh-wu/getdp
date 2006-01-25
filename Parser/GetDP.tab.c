/* A Bison parser, made by GNU Bison 1.875b.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

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
     tTimeStep = 467,
     tHarmonicToTime = 468,
     tFormat = 469,
     tHeader = 470,
     tFooter = 471,
     tSkin = 472,
     tSmoothing = 473,
     tTarget = 474,
     tSort = 475,
     tIso = 476,
     tNoNewLine = 477,
     tDecomposeInSimplex = 478,
     tChangeOfValues = 479,
     tTimeLegend = 480,
     tFrequencyLegend = 481,
     tEigenvalueLegend = 482,
     tEvaluationPoints = 483,
     tStore = 484,
     tLastTimeStepOnly = 485,
     tStr = 486,
     tDate = 487,
     tDEF = 488,
     tOR = 489,
     tAND = 490,
     tAPPROXEQUAL = 491,
     tNOTEQUAL = 492,
     tEQUAL = 493,
     tGREATERGREATER = 494,
     tLESSLESS = 495,
     tGREATEROREQUAL = 496,
     tLESSOREQUAL = 497,
     tCROSSPRODUCT = 498,
     UNARYPREC = 499,
     tSHOW = 500
   };
#endif
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
#define tTimeStep 467
#define tHarmonicToTime 468
#define tFormat 469
#define tHeader 470
#define tFooter 471
#define tSkin 472
#define tSmoothing 473
#define tTarget 474
#define tSort 475
#define tIso 476
#define tNoNewLine 477
#define tDecomposeInSimplex 478
#define tChangeOfValues 479
#define tTimeLegend 480
#define tFrequencyLegend 481
#define tEigenvalueLegend 482
#define tEvaluationPoints 483
#define tStore 484
#define tLastTimeStepOnly 485
#define tStr 486
#define tDate 487
#define tDEF 488
#define tOR 489
#define tAND 490
#define tAPPROXEQUAL 491
#define tNOTEQUAL 492
#define tEQUAL 493
#define tGREATERGREATER 494
#define tLESSLESS 495
#define tGREATEROREQUAL 496
#define tLESSOREQUAL 497
#define tCROSSPRODUCT 498
#define UNARYPREC 499
#define tSHOW 500




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.96 2006-01-25 14:31:26 dular Exp $ */
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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

void  hack_endfor(void) ;

void Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				int (*fcmp)(const void *a, const void *b)) ;
int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) ;
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

int      Nbr_Index, Flag_MultipleIndex, Save_Nbr_Index ;
List_T  * ListOfInitialList0_L, * InitialList0_L ;
List_T  * ListOfInitialList2_L, * InitialList2_L ;
List_T  * ListOfInitialList_L, * ListOfInitialSuppList_L ;
List_T  * ListOfDefineSystem, * ListOfListOfFormulation ;
List_T  * ListOfConstraintPerRegion, * ListOfRegionIndex, * ListOfSubRegionIndex ;
List_T  * ListOfFormulation ;
List_T  * ListOfBasisFunction, * ListOfSupportIndex, * ListOfEntityIndex ;
List_T  * ListOfConstraintInFS, * ListOfConstraintIndex ;
List_T  * ListOfDefineQuantity, * ListOfFunctionSpaceIndex, * ListOfEquationTerm ;

List_T  * ListOfInt_Lnew ;
int     * ListOfInt_P ;

char    * Save_Name, tmpstr[1024] ;

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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 190 "GetDP.y"
typedef union YYSTYPE {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 762 "GetDP.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 774 "GetDP.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6983

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  268
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  195
/* YYNRULES -- Number of rules. */
#define YYNRULES  749
/* YYNRULES -- Number of states. */
#define YYNSTATES  2041

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   500

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   252,     2,   260,   261,   250,     2,     2,
     255,   256,   248,   246,   265,   247,   259,   249,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     240,     2,   241,   234,   266,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   257,     2,   258,   254,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   263,     2,   264,   267,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   235,
     236,   237,   238,   239,   242,   243,   244,   245,   251,   253,
     262
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     7,     8,     9,    13,    18,    23,
      28,    33,    38,    43,    48,    53,    58,    63,    65,    67,
      70,    72,    75,    79,    83,    87,    91,    95,    99,   102,
     105,   109,   113,   117,   121,   125,   129,   133,   137,   141,
     145,   149,   150,   153,   154,   155,   159,   164,   170,   171,
     178,   184,   186,   192,   194,   196,   197,   198,   217,   218,
     219,   227,   230,   232,   235,   237,   239,   241,   243,   244,
     248,   253,   255,   257,   261,   262,   266,   271,   273,   277,
     281,   287,   289,   293,   294,   298,   305,   306,   308,   313,
     314,   317,   321,   322,   325,   331,   338,   346,   348,   350,
     351,   355,   360,   365,   366,   369,   370,   374,   376,   380,
     381,   384,   386,   387,   388,   396,   400,   404,   411,   415,
     419,   423,   427,   431,   435,   439,   443,   447,   451,   455,
     459,   463,   467,   470,   473,   476,   480,   482,   486,   489,
     491,   494,   495,   501,   502,   510,   511,   523,   533,   538,
     543,   544,   552,   559,   562,   565,   568,   571,   575,   578,
     582,   586,   589,   593,   595,   599,   600,   604,   611,   612,
     617,   618,   621,   625,   630,   631,   636,   637,   640,   644,
     648,   653,   654,   659,   660,   663,   667,   671,   676,   677,
     682,   683,   686,   690,   694,   699,   700,   705,   706,   709,
     713,   717,   721,   725,   729,   733,   734,   737,   741,   743,
     745,   746,   749,   753,   758,   762,   767,   773,   774,   779,
     782,   783,   786,   790,   794,   798,   802,   806,   810,   818,
     822,   826,   830,   834,   838,   846,   854,   862,   863,   866,
     870,   872,   874,   875,   878,   882,   887,   891,   896,   901,
     906,   911,   912,   917,   918,   921,   925,   929,   934,   939,
     947,   951,   955,   959,   963,   964,   965,   966,   985,   986,
     991,   992,   995,   999,  1003,  1007,  1009,  1013,  1014,  1018,
    1020,  1024,  1025,  1029,  1030,  1035,  1036,  1039,  1043,  1047,
    1051,  1052,  1057,  1058,  1061,  1065,  1069,  1073,  1078,  1079,
    1082,  1086,  1088,  1090,  1091,  1094,  1098,  1103,  1107,  1112,
    1117,  1118,  1123,  1126,  1127,  1130,  1134,  1138,  1142,  1146,
    1150,  1151,  1157,  1158,  1166,  1170,  1171,  1177,  1181,  1185,
    1189,  1193,  1197,  1198,  1202,  1203,  1206,  1209,  1212,  1217,
    1222,  1227,  1232,  1233,  1236,  1240,  1244,  1248,  1249,  1252,
    1256,  1260,  1264,  1268,  1269,  1272,  1273,  1274,  1284,  1288,
    1292,  1296,  1299,  1303,  1309,  1310,  1313,  1317,  1318,  1319,
    1329,  1330,  1332,  1334,  1336,  1338,  1340,  1342,  1344,  1349,
    1353,  1354,  1357,  1361,  1363,  1365,  1366,  1369,  1373,  1378,
    1383,  1384,  1390,  1392,  1393,  1398,  1401,  1402,  1405,  1409,
    1413,  1417,  1421,  1425,  1429,  1433,  1437,  1439,  1442,  1446,
    1447,  1451,  1453,  1457,  1458,  1462,  1463,  1466,  1470,  1474,
    1479,  1484,  1489,  1494,  1500,  1506,  1509,  1517,  1529,  1537,
    1551,  1563,  1573,  1581,  1589,  1597,  1607,  1617,  1627,  1639,
    1651,  1663,  1669,  1687,  1701,  1717,  1729,  1743,  1744,  1752,
    1753,  1761,  1769,  1781,  1787,  1793,  1803,  1813,  1823,  1829,
    1835,  1847,  1857,  1872,  1887,  1895,  1908,  1919,  1927,  1935,
    1943,  1945,  1947,  1949,  1950,  1953,  1957,  1961,  1964,  1965,
    1968,  1972,  1976,  1980,  1984,  1989,  1990,  1993,  1997,  2001,
    2005,  2009,  2013,  2018,  2019,  2022,  2026,  2030,  2034,  2038,
    2043,  2044,  2047,  2051,  2055,  2059,  2063,  2067,  2072,  2077,
    2082,  2083,  2088,  2089,  2092,  2096,  2100,  2104,  2108,  2112,
    2116,  2117,  2120,  2124,  2126,  2128,  2129,  2132,  2136,  2141,
    2146,  2150,  2155,  2156,  2161,  2164,  2167,  2168,  2171,  2175,
    2180,  2181,  2187,  2193,  2194,  2197,  2198,  2205,  2209,  2210,
    2215,  2219,  2223,  2224,  2227,  2231,  2233,  2235,  2236,  2239,
    2243,  2247,  2251,  2255,  2260,  2261,  2270,  2271,  2272,  2276,
    2284,  2292,  2301,  2313,  2320,  2321,  2332,  2334,  2338,  2345,
    2347,  2349,  2351,  2353,  2354,  2358,  2360,  2363,  2366,  2379,
    2382,  2398,  2403,  2416,  2434,  2457,  2470,  2471,  2474,  2478,
    2483,  2488,  2492,  2495,  2498,  2502,  2506,  2510,  2514,  2518,
    2522,  2526,  2530,  2534,  2538,  2542,  2546,  2552,  2555,  2558,
    2562,  2572,  2576,  2579,  2589,  2592,  2602,  2605,  2615,  2621,
    2625,  2628,  2629,  2632,  2639,  2648,  2657,  2668,  2670,  2675,
    2677,  2683,  2688,  2693,  2701,  2706,  2714,  2720,  2728,  2734,
    2743,  2744,  2748,  2754,  2760,  2762,  2764,  2766,  2768,  2770,
    2772,  2774,  2776,  2778,  2780,  2782,  2784,  2786,  2788,  2790,
    2792,  2794,  2796,  2798,  2800,  2802,  2804,  2808,  2811,  2814,
    2818,  2822,  2826,  2830,  2834,  2838,  2842,  2846,  2850,  2854,
    2858,  2862,  2866,  2870,  2875,  2880,  2885,  2890,  2895,  2900,
    2905,  2910,  2915,  2920,  2927,  2932,  2937,  2942,  2947,  2952,
    2957,  2964,  2971,  2978,  2984,  2987,  2989,  2991,  2993,  2995,
    2997,  2999,  3001,  3003,  3004,  3006,  3008,  3012,  3014,  3016,
    3020,  3024,  3028,  3034,  3038,  3043,  3048,  3055,  3064,  3073,
    3079,  3085,  3087,  3089,  3091,  3093,  3095,  3100,  3107,  3109
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     269,     0,    -1,    -1,   270,   271,    -1,    -1,    -1,   271,
     272,   273,    -1,    62,   263,   276,   264,    -1,    99,   263,
     299,   264,    -1,    68,   263,   334,   264,    -1,    81,   263,
     319,   264,    -1,    83,   263,   325,   264,    -1,    95,   263,
     341,   264,    -1,   111,   263,   364,   264,    -1,   132,   263,
     391,   264,    -1,   187,   263,   421,   264,    -1,   189,   263,
     433,   264,    -1,   437,    -1,   451,    -1,    22,   461,    -1,
     274,    -1,    19,     7,    -1,    19,   194,     7,    -1,    19,
      21,     7,    -1,    19,    36,     7,    -1,    19,    20,     7,
      -1,    19,    19,     7,    -1,    19,     5,     7,    -1,    20,
       7,    -1,    21,     7,    -1,    21,    62,     7,    -1,    21,
      99,     7,    -1,    21,    68,     7,    -1,    21,    81,     7,
      -1,    21,    83,     7,    -1,    21,    95,     7,    -1,    21,
     111,     7,    -1,    21,   132,     7,    -1,    21,   187,     7,
      -1,    21,   189,     7,    -1,    21,     3,     7,    -1,    -1,
     275,   441,    -1,    -1,    -1,   276,   277,   278,    -1,   460,
     233,   283,     7,    -1,     5,   298,   233,   283,     7,    -1,
      -1,     5,   296,   233,   279,   283,     7,    -1,    63,   257,
     294,   258,     7,    -1,   280,    -1,   460,   246,   233,   283,
       7,    -1,   451,    -1,   450,    -1,    -1,    -1,   460,   257,
     454,   258,   233,    66,   281,   257,   260,   291,   282,   265,
     260,   291,   265,   454,   258,     7,    -1,    -1,    -1,   287,
     257,   284,   288,   285,   289,   258,    -1,   260,   291,    -1,
     283,    -1,   460,   297,    -1,    69,    -1,     5,    -1,   291,
      -1,    64,    -1,    -1,   295,   290,   291,    -1,   295,    65,
     460,   297,    -1,     5,    -1,   293,    -1,   263,   292,   264,
      -1,    -1,   292,   295,   293,    -1,   292,   295,   247,   293,
      -1,     3,    -1,   266,   457,   266,    -1,     3,     8,   454,
      -1,     3,     8,     3,     8,   454,    -1,   460,    -1,     5,
     263,   264,    -1,    -1,   294,   295,     5,    -1,   294,   295,
       5,   263,   454,   264,    -1,    -1,   265,    -1,   263,   260,
     454,   264,    -1,    -1,   263,   264,    -1,   263,     3,   264,
      -1,    -1,   299,   300,    -1,    67,   257,   301,   258,     7,
      -1,     5,   257,   258,   233,   302,     7,    -1,     5,   257,
     286,   258,   233,   302,     7,    -1,   451,    -1,   450,    -1,
      -1,   301,   295,     5,    -1,    23,   257,   454,   258,    -1,
      99,   257,     5,   258,    -1,    -1,   303,   306,    -1,    -1,
     263,   305,   264,    -1,   302,    -1,   305,   265,   302,    -1,
      -1,   307,   308,    -1,   311,    -1,    -1,    -1,   308,   234,
     309,   308,     8,   310,   308,    -1,   308,   248,   308,    -1,
     308,   251,   308,    -1,    58,   257,   308,   265,   308,   258,
      -1,   308,   249,   308,    -1,   308,   246,   308,    -1,   308,
     247,   308,    -1,   308,   250,   308,    -1,   308,   254,   308,
      -1,   308,   240,   308,    -1,   308,   241,   308,    -1,   308,
     245,   308,    -1,   308,   244,   308,    -1,   308,   239,   308,
      -1,   308,   238,   308,    -1,   308,   237,   308,    -1,   308,
     236,   308,    -1,   308,   235,   308,    -1,   247,   308,    -1,
     246,   308,    -1,   252,   308,    -1,   255,   308,   256,    -1,
     455,    -1,   453,   316,   318,    -1,     5,   390,    -1,   390,
      -1,   390,   316,    -1,    -1,   122,   312,   257,   306,   258,
      -1,    -1,   129,   313,   257,   306,   265,     3,   258,    -1,
      -1,    60,   257,     5,   257,   314,   306,   258,   258,   263,
     454,   264,    -1,    61,   257,     5,   258,   263,   454,   265,
     454,   264,    -1,    55,   257,   390,   258,    -1,    57,   257,
     390,   258,    -1,    -1,    56,   315,   257,   306,   265,   286,
     258,    -1,   240,     5,   241,   257,   306,   258,    -1,   261,
       5,    -1,   261,   212,    -1,   261,   143,    -1,   261,     3,
      -1,   311,   260,     3,    -1,   260,     3,    -1,   311,   262,
     454,    -1,   257,   259,   258,    -1,   257,   258,    -1,   257,
     317,   258,    -1,   308,    -1,   317,   265,   308,    -1,    -1,
     263,   457,   264,    -1,   263,    69,   257,   286,   258,   264,
      -1,    -1,   319,   263,   320,   264,    -1,    -1,   320,   321,
      -1,    96,     5,     7,    -1,    82,   263,   322,   264,    -1,
      -1,   322,   263,   323,   264,    -1,    -1,   323,   324,    -1,
      69,   286,     7,    -1,    69,    64,     7,    -1,    81,     5,
     318,     7,    -1,    -1,   325,   263,   326,   264,    -1,    -1,
     326,   327,    -1,    96,     5,     7,    -1,    88,   302,     7,
      -1,    82,   263,   328,   264,    -1,    -1,   328,   263,   329,
     264,    -1,    -1,   329,   330,    -1,    86,     5,     7,    -1,
      87,     5,     7,    -1,    82,   263,   331,   264,    -1,    -1,
     331,   263,   332,   264,    -1,    -1,   332,   333,    -1,    89,
       5,     7,    -1,    90,   454,     7,    -1,    91,   454,     7,
      -1,    92,   454,     7,    -1,    93,   454,     7,    -1,    94,
     454,     7,    -1,    -1,   334,   335,    -1,   263,   336,   264,
      -1,   451,    -1,   450,    -1,    -1,   336,   337,    -1,    96,
     460,     7,    -1,    96,   460,   296,     7,    -1,    86,     5,
       7,    -1,    82,   263,   338,   264,    -1,    82,     5,   263,
     338,   264,    -1,    -1,   338,   263,   339,   264,    -1,   338,
     450,    -1,    -1,   339,   340,    -1,    86,     5,     7,    -1,
      69,   286,     7,    -1,    70,   286,     7,    -1,    76,   302,
       7,    -1,    75,   302,     7,    -1,    80,   460,     7,    -1,
      77,   263,   455,   295,   455,   264,     7,    -1,    71,   286,
       7,    -1,    72,   286,     7,    -1,    99,   302,     7,    -1,
      74,   302,     7,    -1,    73,   302,     7,    -1,    99,   257,
     302,   265,   302,   258,     7,    -1,    74,   257,   302,   265,
     302,   258,     7,    -1,    73,   257,   302,   265,   302,   258,
       7,    -1,    -1,   341,   342,    -1,   263,   343,   264,    -1,
     451,    -1,   450,    -1,    -1,   343,   344,    -1,    96,   460,
       7,    -1,    96,     5,   296,     7,    -1,    86,     5,     7,
      -1,    97,   263,   345,   264,    -1,   105,   263,   351,   264,
      -1,   107,   263,   358,   264,    -1,    68,   263,   361,   264,
      -1,    -1,   345,   263,   346,   264,    -1,    -1,   346,   347,
      -1,    96,     5,     7,    -1,    98,     5,     7,    -1,    98,
       5,   296,     7,    -1,    99,     5,   348,     7,    -1,   100,
     263,     5,   295,     5,   264,     7,    -1,   101,   304,     7,
      -1,   102,   304,     7,    -1,   103,   286,     7,    -1,   104,
     286,     7,    -1,    -1,    -1,    -1,   263,   112,     5,     7,
     111,     5,   296,     7,   349,    62,   286,     7,   350,   132,
       5,   297,     7,   264,    -1,    -1,   351,   263,   352,   264,
      -1,    -1,   352,   353,    -1,    96,     5,     7,    -1,   106,
     354,     7,    -1,    98,   356,     7,    -1,     5,    -1,   263,
     355,   264,    -1,    -1,   355,   295,     5,    -1,     5,    -1,
     263,   357,   264,    -1,    -1,   357,   295,     5,    -1,    -1,
     358,   263,   359,   264,    -1,    -1,   359,   360,    -1,    96,
     460,     7,    -1,    86,     5,     7,    -1,    98,     5,     7,
      -1,    -1,   361,   263,   362,   264,    -1,    -1,   362,   363,
      -1,    98,     5,     7,    -1,   108,   287,     7,    -1,   109,
     290,     7,    -1,   110,   460,   297,     7,    -1,    -1,   364,
     365,    -1,   263,   366,   264,    -1,   451,    -1,   450,    -1,
      -1,   366,   367,    -1,    96,   460,     7,    -1,    96,     5,
     296,     7,    -1,    86,     5,     7,    -1,   112,   263,   368,
     264,    -1,   116,   263,   375,   264,    -1,    -1,   368,   263,
     369,   264,    -1,   368,   450,    -1,    -1,   369,   370,    -1,
      96,   460,     7,    -1,    86,   107,     7,    -1,    86,   117,
       7,    -1,    86,     5,     7,    -1,   186,   456,     7,    -1,
      -1,   113,   460,   371,   374,     7,    -1,    -1,   113,     5,
     263,   264,   372,   374,     7,    -1,   114,     3,     7,    -1,
      -1,   257,   373,   306,   258,     7,    -1,   130,   286,     7,
      -1,    83,     5,     7,    -1,    84,     5,     7,    -1,    81,
       5,     7,    -1,   115,     3,     7,    -1,    -1,   257,   460,
     258,    -1,    -1,   375,   376,    -1,   375,   451,    -1,   375,
     450,    -1,   117,   263,   381,   264,    -1,   118,   263,   381,
     264,    -1,   119,   263,   385,   264,    -1,   120,   263,   377,
     264,    -1,    -1,   377,   378,    -1,    86,     5,     7,    -1,
     110,     5,     7,    -1,   263,   379,   264,    -1,    -1,   379,
     380,    -1,    78,   390,     7,    -1,    79,   390,     7,    -1,
     116,   390,     7,    -1,   130,   286,     7,    -1,    -1,   381,
     382,    -1,    -1,    -1,   389,   257,   383,   306,   384,   265,
     306,   258,     7,    -1,   130,   286,     7,    -1,    81,     5,
       7,    -1,    83,     5,     7,    -1,   131,     7,    -1,    84,
       5,     7,    -1,    85,   257,     3,   258,     7,    -1,    -1,
     385,   386,    -1,   130,   286,     7,    -1,    -1,    -1,   389,
     257,   387,   306,   388,   265,   390,   258,     7,    -1,    -1,
     122,    -1,   123,    -1,   124,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   263,     5,   460,   264,    -1,   263,
     460,   264,    -1,    -1,   391,   392,    -1,   263,   393,   264,
      -1,   451,    -1,   450,    -1,    -1,   393,   394,    -1,    96,
     460,     7,    -1,    96,     5,   296,     7,    -1,   133,   263,
     396,   264,    -1,    -1,   140,   395,   263,   403,   264,    -1,
     450,    -1,    -1,   396,   263,   397,   264,    -1,   396,   450,
      -1,    -1,   397,   398,    -1,    96,   460,     7,    -1,    86,
       5,     7,    -1,   134,   399,     7,    -1,   135,   461,     7,
      -1,   138,   401,     7,    -1,   139,   460,     7,    -1,   136,
     456,     7,    -1,   137,   461,     7,    -1,   450,    -1,   460,
     297,    -1,   263,   400,   264,    -1,    -1,   400,   295,   460,
      -1,   460,    -1,   263,   402,   264,    -1,    -1,   402,   295,
     460,    -1,    -1,   403,   404,    -1,     5,   460,     7,    -1,
     142,   302,     7,    -1,   155,   263,   410,   264,    -1,   159,
     263,   412,   264,    -1,   162,   263,   414,   264,    -1,   165,
     263,   416,   264,    -1,     5,   257,   460,   258,     7,    -1,
     142,   257,   302,   258,     7,    -1,   153,     7,    -1,    15,
     257,   302,   258,   263,   403,   264,    -1,    15,   257,   302,
     258,   263,   403,   264,    16,   263,   403,   264,    -1,   144,
     257,   460,   265,   302,   258,     7,    -1,   171,   257,   460,
     265,   302,   265,   302,   265,   302,   265,   302,   258,     7,
      -1,   171,   257,   460,   265,   302,   265,   302,   265,   302,
     258,     7,    -1,   171,   257,   460,   265,   302,   265,   302,
     258,     7,    -1,   172,   257,   460,   265,   456,   258,     7,
      -1,   173,   257,   460,   265,   456,   258,     7,    -1,   151,
     257,   460,   265,   302,   258,     7,    -1,   152,   257,   460,
     265,   286,   265,   460,   258,     7,    -1,   145,   257,   460,
     265,   460,   265,   456,   258,     7,    -1,   146,   257,   460,
     265,   460,   265,   454,   258,     7,    -1,   147,   257,   460,
     265,   454,   265,   456,   265,   454,   258,     7,    -1,   148,
     257,   460,   265,   454,   265,   454,   265,   454,   258,     7,
      -1,   149,   257,   460,   265,   454,   265,   454,   265,   454,
     258,     7,    -1,   154,   257,   302,   258,     7,    -1,   150,
     257,   460,   265,   460,   265,   460,   265,   454,   265,   456,
     265,   454,   265,   454,   258,     7,    -1,   155,   257,   454,
     265,   454,   265,   302,   265,   302,   258,   263,   403,   264,
      -1,   159,   257,   454,   265,   454,   265,   302,   265,   454,
     265,   454,   258,   263,   403,   264,    -1,   162,   257,   454,
     265,   454,   265,   302,   258,   263,   403,   264,    -1,   162,
     257,   454,   265,   454,   265,   302,   265,   454,   258,   263,
     403,   264,    -1,    -1,   194,   405,   257,   407,   408,   258,
       7,    -1,    -1,   197,   406,   257,   407,   408,   258,     7,
      -1,   168,   257,   286,   265,   302,   258,     7,    -1,   168,
     257,   286,   265,   302,   265,   454,   265,   302,   258,     7,
      -1,   189,   257,   460,   258,     7,    -1,   170,   257,   461,
     258,     7,    -1,   174,   257,   460,   265,   456,   265,   454,
     258,     7,    -1,   175,   257,   460,   265,   454,   265,   461,
     258,     7,    -1,   176,   257,   460,   265,   456,   265,   461,
     258,     7,    -1,   177,   263,   460,   264,     7,    -1,   178,
     263,   460,   264,     7,    -1,   184,   263,   460,   265,   286,
     265,   461,   265,   302,   264,     7,    -1,   184,   263,   460,
     265,   286,   265,   461,   264,     7,    -1,   179,   257,   460,
     265,   460,   265,   454,   265,   454,   258,   263,   403,   264,
       7,    -1,   180,   257,   460,   265,   460,   265,   454,   265,
     454,   258,   263,   403,   264,     7,    -1,   181,   257,   460,
     265,   454,   258,     7,    -1,   185,   263,     5,   265,     5,
     265,   135,   461,   265,     4,   264,     7,    -1,   185,   263,
       5,   265,     5,   265,   135,   461,   264,     7,    -1,   185,
     263,     5,   265,     5,   264,     7,    -1,   182,   257,   460,
     265,   460,   258,     7,    -1,   183,   257,   460,   265,   460,
     258,     7,    -1,   450,    -1,   304,    -1,   460,    -1,    -1,
     408,   409,    -1,   265,   209,   461,    -1,   265,   212,   456,
      -1,   265,   456,    -1,    -1,   410,   411,    -1,   156,   454,
       7,    -1,   157,   454,     7,    -1,   143,   302,     7,    -1,
     158,   302,     7,    -1,   140,   263,   403,   264,    -1,    -1,
     412,   413,    -1,   156,   454,     7,    -1,   157,   454,     7,
      -1,   143,   302,     7,    -1,   160,   454,     7,    -1,   161,
     454,     7,    -1,   140,   263,   403,   264,    -1,    -1,   414,
     415,    -1,   163,   454,     7,    -1,    88,   454,     7,    -1,
     164,   302,     7,    -1,    18,   454,     7,    -1,   140,   263,
     403,   264,    -1,    -1,   416,   417,    -1,   163,   454,     7,
      -1,   166,   454,     7,    -1,    88,   454,     7,    -1,    18,
     454,     7,    -1,   133,   460,     7,    -1,   167,   263,   418,
     264,    -1,   140,   263,   403,   264,    -1,   141,   263,   403,
     264,    -1,    -1,   418,   263,   419,   264,    -1,    -1,   419,
     420,    -1,    86,     5,     7,    -1,   112,     5,     7,    -1,
     130,   286,     7,    -1,    88,   454,     7,    -1,    99,   302,
       7,    -1,    18,     5,     7,    -1,    -1,   421,   422,    -1,
     263,   423,   264,    -1,   451,    -1,   450,    -1,    -1,   423,
     424,    -1,    96,   460,     7,    -1,    96,     5,   296,     7,
      -1,   134,   460,   297,     7,    -1,   188,   460,     7,    -1,
     112,   263,   425,   264,    -1,    -1,   425,   263,   426,   264,
      -1,   425,   451,    -1,   425,   450,    -1,    -1,   426,   427,
      -1,    96,   460,     7,    -1,    75,   263,   428,   264,    -1,
      -1,   428,   117,   263,   429,   264,    -1,   428,     5,   263,
     429,   264,    -1,    -1,   429,   430,    -1,    -1,   389,   257,
     431,   306,   258,     7,    -1,    86,     5,     7,    -1,    -1,
     130,   432,   286,     7,    -1,    81,     5,     7,    -1,    83,
       5,     7,    -1,    -1,   433,   434,    -1,   263,   435,   264,
      -1,   451,    -1,   450,    -1,    -1,   435,   436,    -1,    96,
     460,     7,    -1,   190,   460,     7,    -1,   214,     5,     7,
      -1,   192,   461,     7,    -1,   140,   263,   439,   264,    -1,
      -1,   189,   460,   191,   460,   438,   263,   439,   264,    -1,
      -1,    -1,   439,   440,   441,    -1,   193,   257,   443,   446,
     447,   258,     7,    -1,   194,   257,   443,   446,   447,   258,
       7,    -1,   194,   257,     6,   265,   302,   447,   258,     7,
      -1,   194,   257,     6,   265,   231,   257,   461,   258,   447,
     258,     7,    -1,   196,   257,     6,   447,   258,     7,    -1,
      -1,   195,   257,   286,   442,   265,   130,   286,   447,   258,
       7,    -1,   450,    -1,   460,   445,   265,    -1,   460,   445,
     444,     5,   445,   265,    -1,   248,    -1,   249,    -1,   246,
      -1,   247,    -1,    -1,   257,   286,   258,    -1,   199,    -1,
     200,   286,    -1,   201,   286,    -1,   203,   263,   263,   457,
     264,   263,   457,   264,   263,   457,   264,   264,    -1,   202,
     286,    -1,   202,   263,   302,   265,   302,   265,   302,   264,
     263,   456,   265,   456,   265,   456,   264,    -1,   204,   263,
     457,   264,    -1,   205,   263,   263,   457,   264,   263,   457,
     264,   264,   263,   454,   264,    -1,   206,   263,   263,   457,
     264,   263,   457,   264,   263,   457,   264,   264,   263,   454,
     265,   454,   264,    -1,   207,   263,   263,   457,   264,   263,
     457,   264,   263,   457,   264,   263,   457,   264,   264,   263,
     454,   265,   454,   265,   454,   264,    -1,   200,   286,   208,
       5,   263,   454,   265,   454,   264,   263,   454,   264,    -1,
      -1,   447,   448,    -1,   265,   209,   461,    -1,   265,   209,
     241,   461,    -1,   265,   209,   242,   461,    -1,   265,   210,
     454,    -1,   265,   217,    -1,   265,   218,    -1,   265,   213,
     454,    -1,   265,   214,     5,    -1,   265,   215,   449,    -1,
     265,   216,   449,    -1,   265,   214,   449,    -1,   265,   211,
     454,    -1,   265,   212,   456,    -1,   265,   198,     5,    -1,
     265,   220,     5,    -1,   265,   219,   454,    -1,   265,    75,
     456,    -1,   265,   221,   454,    -1,   265,   221,   263,   457,
     264,    -1,   265,   222,    -1,   265,   223,    -1,   265,   136,
     456,    -1,   265,   168,   263,   302,   265,   302,   265,   302,
     264,    -1,   265,   224,   304,    -1,   265,   225,    -1,   265,
     225,   263,   454,   265,   454,   265,   454,   264,    -1,   265,
     226,    -1,   265,   226,   263,   454,   265,   454,   265,   454,
     264,    -1,   265,   227,    -1,   265,   227,   263,   454,   265,
     454,   265,   454,   264,    -1,   265,   228,   263,   457,   264,
      -1,   265,   229,     3,    -1,   265,   230,    -1,    -1,   449,
       6,    -1,    13,   255,   454,     8,   454,   256,    -1,    13,
     255,   454,     8,   454,     8,   454,   256,    -1,    13,     5,
     130,   263,   454,     8,   454,   264,    -1,    13,     5,   130,
     263,   454,     8,   454,     8,   454,   264,    -1,    14,    -1,
      15,   255,   454,   256,    -1,    17,    -1,    29,   257,   452,
     258,     7,    -1,   460,   233,   456,     7,    -1,   460,   233,
       6,     7,    -1,   460,   233,   231,   257,   461,   258,     7,
      -1,   460,   233,   462,     7,    -1,   460,   233,    28,   257,
     461,   258,     7,    -1,    11,   255,     6,   256,     7,    -1,
      11,   255,     6,   265,   457,   256,     7,    -1,    12,   255,
     460,   256,     7,    -1,    12,   255,   460,   256,   257,   454,
     258,     7,    -1,    -1,   452,   295,     5,    -1,   452,   295,
       5,   233,   454,    -1,   452,   295,     5,   233,     6,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,
     460,    -1,   455,    -1,   255,   454,   256,    -1,   247,   454,
      -1,   252,   454,    -1,   454,   247,   454,    -1,   454,   246,
     454,    -1,   454,   248,   454,    -1,   454,   249,   454,    -1,
     454,   250,   454,    -1,   454,   254,   454,    -1,   454,   240,
     454,    -1,   454,   241,   454,    -1,   454,   245,   454,    -1,
     454,   244,   454,    -1,   454,   239,   454,    -1,   454,   238,
     454,    -1,   454,   236,   454,    -1,   454,   235,   454,    -1,
      35,   257,   454,   258,    -1,    36,   257,   454,   258,    -1,
      37,   257,   454,   258,    -1,    38,   257,   454,   258,    -1,
      39,   257,   454,   258,    -1,    40,   257,   454,   258,    -1,
      41,   257,   454,   258,    -1,    42,   257,   454,   258,    -1,
      43,   257,   454,   258,    -1,    44,   257,   454,   258,    -1,
      45,   257,   454,   265,   454,   258,    -1,    46,   257,   454,
     258,    -1,    47,   257,   454,   258,    -1,    48,   257,   454,
     258,    -1,    49,   257,   454,   258,    -1,    50,   257,   454,
     258,    -1,    51,   257,   454,   258,    -1,    52,   257,   454,
     265,   454,   258,    -1,    53,   257,   454,   265,   454,   258,
      -1,    54,   257,   454,   265,   454,   258,    -1,   454,   234,
     454,     8,   454,    -1,   454,   260,    -1,     4,    -1,     3,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,   460,    -1,    -1,   454,    -1,   458,    -1,   263,   457,
     264,    -1,   454,    -1,   458,    -1,   457,   265,   454,    -1,
     457,   265,   458,    -1,   454,     8,   454,    -1,   454,     8,
     454,     8,   454,    -1,     5,   263,   264,    -1,     5,   263,
     457,   264,    -1,    24,   257,     5,   258,    -1,    25,   257,
       5,   265,     5,   258,    -1,    26,   257,   454,   265,   454,
     265,   454,   258,    -1,    27,   257,   454,   265,   454,   265,
     454,   258,    -1,     5,   267,   263,   454,   264,    -1,   459,
     267,   263,   454,   264,    -1,     5,    -1,   459,    -1,     6,
      -1,   460,    -1,   462,    -1,    10,   255,   461,   256,    -1,
      10,   255,   461,   265,   457,   256,    -1,   232,    -1,     9,
     257,   461,   265,   461,   258,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   346,   346,   346,   419,   423,   422,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   441,   443,   445,
     450,   460,   462,   464,   466,   468,   470,   472,   474,   476,
     478,   480,   482,   484,   486,   488,   490,   492,   494,   496,
     498,   501,   501,   523,   526,   526,   532,   534,   540,   539,
     544,   546,   548,   551,   553,   559,   569,   558,   586,   591,
     585,   611,   622,   627,   664,   667,   680,   681,   698,   700,
     703,   754,   767,   791,   799,   811,   829,   852,   856,   868,
     877,   891,   925,   945,   949,   959,   976,   976,   981,   987,
     988,   995,  1004,  1007,  1012,  1014,  1034,  1078,  1080,  1084,
    1087,  1107,  1113,  1120,  1120,  1130,  1134,  1140,  1143,  1150,
    1150,  1163,  1166,  1179,  1165,  1207,  1213,  1219,  1225,  1231,
    1237,  1243,  1249,  1255,  1261,  1267,  1273,  1279,  1285,  1291,
    1297,  1303,  1310,  1316,  1318,  1329,  1331,  1337,  1411,  1445,
    1454,  1467,  1466,  1481,  1480,  1495,  1494,  1510,  1522,  1528,
    1535,  1534,  1565,  1591,  1604,  1610,  1617,  1623,  1630,  1637,
    1649,  1650,  1651,  1656,  1657,  1663,  1665,  1668,  1685,  1689,
    1697,  1699,  1705,  1710,  1718,  1720,  1728,  1731,  1737,  1740,
    1743,  1782,  1787,  1795,  1801,  1807,  1814,  1817,  1825,  1827,
    1835,  1840,  1846,  1856,  1866,  1874,  1876,  1884,  1893,  1899,
    1947,  1950,  1953,  1956,  1959,  1971,  1975,  1980,  2000,  2002,
    2008,  2015,  2021,  2027,  2034,  2043,  2046,  2069,  2083,  2103,
    2113,  2120,  2126,  2136,  2161,  2186,  2191,  2199,  2207,  2216,
    2234,  2243,  2251,  2259,  2269,  2279,  2289,  2310,  2315,  2320,
    2341,  2343,  2350,  2356,  2362,  2368,  2375,  2384,  2387,  2390,
    2393,  2401,  2416,  2466,  2480,  2486,  2489,  2494,  2499,  2513,
    2533,  2538,  2543,  2567,  2622,  2628,  2632,  2626,  2705,  2710,
    2720,  2724,  2730,  2737,  2740,  2747,  2763,  2770,  2772,  2791,
    2803,  2811,  2815,  2831,  2836,  2847,  2852,  2858,  2865,  2876,
    2891,  2905,  2980,  2989,  2995,  3028,  3031,  3034,  3081,  3085,
    3090,  3110,  3112,  3119,  3124,  3130,  3136,  3143,  3153,  3155,
    3162,  3175,  3189,  3196,  3212,  3218,  3221,  3225,  3228,  3238,
    3243,  3242,  3283,  3282,  3347,  3353,  3352,  3669,  3674,  3683,
    3692,  3701,  3706,  3709,  3750,  3764,  3788,  3793,  3802,  3805,
    3808,  3811,  3823,  3828,  3833,  3843,  3853,  3868,  3874,  3879,
    3881,  3883,  3885,  3894,  3912,  3919,  3927,  3918,  4051,  4075,
    4084,  4093,  4098,  4107,  4119,  4133,  4147,  4172,  4180,  4171,
    4252,  4253,  4254,  4255,  4256,  4257,  4258,  4259,  4265,  4286,
    4311,  4315,  4320,  4339,  4341,  4348,  4353,  4359,  4366,  4373,
    4377,  4376,  4381,  4387,  4401,  4416,  4427,  4440,  4446,  4449,
    4458,  4461,  4466,  4471,  4476,  4481,  4486,  4492,  4529,  4537,
    4539,  4551,  4561,  4568,  4570,  4583,  4590,  4603,  4625,  4632,
    4638,  4644,  4650,  4658,  4680,  4687,  4693,  4704,  4715,  4728,
    4743,  4758,  4773,  4793,  4814,  4826,  4846,  4863,  4882,  4903,
    4917,  4931,  4938,  4972,  4985,  4999,  5012,  5026,  5025,  5035,
    5034,  5043,  5054,  5066,  5076,  5084,  5097,  5110,  5124,  5134,
    5144,  5158,  5172,  5190,  5209,  5220,  5235,  5250,  5265,  5280,
    5295,  5306,  5311,  5322,  5327,  5331,  5334,  5344,  5360,  5369,
    5375,  5379,  5383,  5387,  5392,  5404,  5414,  5420,  5424,  5428,
    5432,  5436,  5441,  5453,  5462,  5467,  5471,  5475,  5479,  5483,
    5495,  5507,  5512,  5516,  5520,  5524,  5529,  5539,  5545,  5551,
    5562,  5564,  5570,  5582,  5587,  5597,  5626,  5629,  5632,  5640,
    5658,  5664,  5669,  5688,  5690,  5695,  5704,  5708,  5715,  5723,
    5769,  5774,  5781,  5783,  5786,  5788,  5795,  5800,  5805,  5808,
    5815,  5819,  5825,  5840,  5849,  5854,  5853,  5888,  5899,  5899,
    5905,  5914,  5932,  5938,  5943,  5946,  5948,  5953,  5960,  5964,
    5971,  5983,  5994,  5999,  6006,  6005,  6033,  6036,  6035,  6052,
    6057,  6062,  6071,  6080,  6090,  6089,  6100,  6109,  6121,  6145,
    6146,  6147,  6148,  6154,  6155,  6161,  6167,  6174,  6181,  6205,
    6212,  6224,  6237,  6257,  6283,  6316,  6338,  6368,  6372,  6379,
    6386,  6393,  6397,  6401,  6405,  6409,  6419,  6424,  6429,  6449,
    6456,  6466,  6475,  6484,  6491,  6499,  6503,  6512,  6516,  6520,
    6528,  6534,  6538,  6546,  6553,  6561,  6568,  6576,  6583,  6591,
    6595,  6605,  6610,  6660,  6675,  6691,  6710,  6730,  6773,  6777,
    6790,  6792,  6807,  6813,  6819,  6825,  6836,  6841,  6853,  6863,
    6879,  6882,  6888,  6894,  6906,  6907,  6908,  6909,  6910,  6911,
    6912,  6913,  6914,  6915,  6916,  6917,  6918,  6919,  6920,  6921,
    6922,  6923,  6924,  6925,  6926,  6930,  6931,  6932,  6933,  6934,
    6935,  6936,  6937,  6938,  6939,  6940,  6941,  6942,  6943,  6944,
    6945,  6946,  6947,  6948,  6949,  6950,  6951,  6952,  6953,  6954,
    6955,  6956,  6957,  6958,  6959,  6960,  6961,  6962,  6963,  6964,
    6965,  6966,  6967,  6968,  6969,  6974,  6975,  6976,  6977,  6978,
    6979,  6980,  6981,  7000,  7002,  7008,  7011,  7018,  7024,  7027,
    7030,  7042,  7048,  7059,  7075,  7097,  7112,  7150,  7158,  7170,
    7178,  7189,  7192,  7199,  7202,  7217,  7222,  7227,  7246,  7256
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT", "tFLOAT", "tSTRING", "tBIGSTR", 
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead", "tFor", 
  "tEndFor", "tIf", "tElse", "tEndIf", "tFlag", "tHelp", "tCpu", "tCheck", 
  "tInclude", "tConstant", "tList", "tListAlt", "tLinSpace", "tLogSpace", 
  "tListFromFile", "tDefineConstant", "tPi", "t0D", "t1D", "t2D", "t3D", 
  "tExp", "tLog", "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos", 
  "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", 
  "tCeil", "tFmod", "tModulo", "tHypot", "tSolidAngle", "tTrace", 
  "tOrder", "tCrossProduct", "tDofValue", "tMHTransform", "tMHJacNL", 
  "tGroup", "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", 
  "tDefineFunction", "tConstraint", "tRegion", "tSubRegion", "tRegionRef", 
  "tSubRegionRef", "tFilter", "tCoefficient", "tValue", "tTimeFunction", 
  "tBranch", "tNode", "tLoop", "tNameOfResolution", "tJacobian", "tCase", 
  "tIntegration", "tFMMIntegration", "tMatrix", "tType", "tSubType", 
  "tCriterion", "tGeoElement", "tNumberOfPoints", "tMaxNumberOfPoints", 
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
  "tSaveSolutionExtendedMH", "tSaveSolutionMHtoTime", 
  "tInit_MovingBand2D", "tMesh_MovingBand2D", "tGenerate_MH_Moving", 
  "tGenerate_MH_Moving_Separate", "tAdd_MH_Moving", "tGenerateGroup", 
  "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh", "tDummyFrequency", 
  "tPostProcessing", "tNameOfSystem", "tPostOperation", 
  "tNameOfPostProcessing", "tUsingPost", "tAppend", "tPlot", "tPrint", 
  "tPrintGroup", "tEcho", "tWrite", "tAdapt", "tOnGlobal", "tOnRegion", 
  "tOnElementsOf", "tOnGrid", "tOnSection", "tOnPoint", "tOnLine", 
  "tOnPlane", "tOnBox", "tWithArgument", "tFile", "tDepth", "tDimension", 
  "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader", "tFooter", 
  "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", "tNoNewLine", 
  "tDecomposeInSimplex", "tChangeOfValues", "tTimeLegend", 
  "tFrequencyLegend", "tEigenvalueLegend", "tEvaluationPoints", "tStore", 
  "tLastTimeStepOnly", "tStr", "tDate", "tDEF", "'?'", "tOR", "tAND", 
  "tAPPROXEQUAL", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATERGREATER", 
  "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", 
  "'~'", "$accept", "Stats", "@1", "ProblemDefinitions", "@2", 
  "ProblemDefinition", "Interactive", "@3", "Groups", "@4", "Group", "@5", 
  "MovingBand2DGroup", "@6", "@7", "ReducedGroupRHS", "@8", "@9", 
  "GroupRHS", "FunctionForGroup", "ListOfRegionOrAll", "SuppListOfRegion", 
  "SuppListTypeForGroup", "ListOfRegion", "RecursiveListOfRegion", 
  "IRegion", "DefineGroups", "Comma", "DefineDimension", "MultipleIndex", 
  "Index", "Functions", "Function", "DefineFunctions", "Expression", 
  "@10", "ListOfExpression", "RecursiveListOfExpression", 
  "WholeQuantityExpression", "@11", "WholeQuantity", "@12", "@13", 
  "WholeQuantity_Single", "@14", "@15", "@16", "@17", 
  "ArgumentsForFunction", "RecursiveListOfQuantity", 
  "ParametersForFunction", "JacobianMethods", "JacobianMethod", 
  "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod", 
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase", 
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase", 
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint", 
  "ConstraintTerm", "ConstraintCases", "ConstraintCase", 
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace", 
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction", 
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@18", "@19", 
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction", 
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef", 
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@20", 
  "@21", "@22", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@23", 
  "@24", "GlobalTerm", "GlobalTermTerm", "@25", "@26", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@27", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@28", "@29", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@30", "@31", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@32", 
  "PostSubOperations", "@33", "PostSubOperation", "@34", 
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport", 
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", "Loop", 
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", 
  "OneFExpr", "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", 
  "StringIndex", "String__Index", "CharExpr", "StrCat", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
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
     485,   486,   487,   488,    63,   489,   490,   491,   492,   493,
      60,    62,   494,   495,   496,   497,    43,    45,    42,    47,
      37,   498,    33,   499,    94,    40,    41,    91,    93,    46,
      35,    36,   500,   123,   125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   268,   270,   269,   271,   272,   271,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   275,   274,   276,   277,   276,   278,   278,   279,   278,
     278,   278,   278,   278,   278,   281,   282,   280,   284,   285,
     283,   283,   286,   286,   287,   287,   288,   288,   289,   289,
     289,   290,   291,   291,   292,   292,   292,   293,   293,   293,
     293,   293,   293,   294,   294,   294,   295,   295,   296,   297,
     297,   298,   299,   299,   300,   300,   300,   300,   300,   301,
     301,   302,   302,   303,   302,   304,   304,   305,   305,   307,
     306,   308,   309,   310,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   311,   311,   311,   311,   311,
     311,   312,   311,   313,   311,   314,   311,   311,   311,   311,
     315,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     316,   316,   316,   317,   317,   318,   318,   318,   319,   319,
     320,   320,   321,   321,   322,   322,   323,   323,   324,   324,
     324,   325,   325,   326,   326,   327,   327,   327,   328,   328,
     329,   329,   330,   330,   330,   331,   331,   332,   332,   333,
     333,   333,   333,   333,   333,   334,   334,   335,   335,   335,
     336,   336,   337,   337,   337,   337,   337,   338,   338,   338,
     339,   339,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   341,   341,   342,
     342,   342,   343,   343,   344,   344,   344,   344,   344,   344,
     344,   345,   345,   346,   346,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   348,   349,   350,   348,   351,   351,
     352,   352,   353,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   360,   360,   360,
     361,   361,   362,   362,   363,   363,   363,   363,   364,   364,
     365,   365,   365,   366,   366,   367,   367,   367,   367,   367,
     368,   368,   368,   369,   369,   370,   370,   370,   370,   370,
     371,   370,   372,   370,   370,   373,   370,   370,   370,   370,
     370,   370,   374,   374,   375,   375,   375,   375,   376,   376,
     376,   376,   377,   377,   378,   378,   378,   379,   379,   380,
     380,   380,   380,   381,   381,   383,   384,   382,   382,   382,
     382,   382,   382,   382,   385,   385,   386,   387,   388,   386,
     389,   389,   389,   389,   389,   389,   389,   389,   390,   390,
     391,   391,   392,   392,   392,   393,   393,   394,   394,   394,
     395,   394,   394,   396,   396,   396,   397,   397,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   399,   399,   400,
     400,   401,   401,   402,   402,   403,   403,   404,   404,   404,
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
     421,   421,   422,   422,   422,   423,   423,   424,   424,   424,
     424,   424,   425,   425,   425,   425,   426,   426,   427,   427,
     428,   428,   428,   429,   429,   431,   430,   430,   432,   430,
     430,   430,   433,   433,   434,   434,   434,   435,   435,   436,
     436,   436,   436,   436,   438,   437,   439,   440,   439,   441,
     441,   441,   441,   441,   442,   441,   441,   443,   443,   444,
     444,   444,   444,   445,   445,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   447,   447,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   449,   449,   450,   450,   450,   450,   450,   450,   450,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     452,   452,   452,   452,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   456,   456,   456,   457,   457,   457,
     457,   458,   458,   458,   458,   458,   458,   458,   458,   459,
     459,   460,   460,   461,   461,   461,   461,   461,   461,   462
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     0,     0,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     1,     2,
       1,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     2,     0,     0,     3,     4,     5,     0,     6,
       5,     1,     5,     1,     1,     0,     0,    18,     0,     0,
       7,     2,     1,     2,     1,     1,     1,     1,     0,     3,
       4,     1,     1,     3,     0,     3,     4,     1,     3,     3,
       5,     1,     3,     0,     3,     6,     0,     1,     4,     0,
       2,     3,     0,     2,     5,     6,     7,     1,     1,     0,
       3,     4,     4,     0,     2,     0,     3,     1,     3,     0,
       2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
       2,     0,     5,     0,     7,     0,    11,     9,     4,     4,
       0,     7,     6,     2,     2,     2,     2,     3,     2,     3,
       3,     2,     3,     1,     3,     0,     3,     6,     0,     4,
       0,     2,     3,     4,     0,     4,     0,     2,     3,     3,
       4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
       0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     0,     2,     3,     1,     1,
       0,     2,     3,     4,     3,     4,     5,     0,     4,     2,
       0,     2,     3,     3,     3,     3,     3,     3,     7,     3,
       3,     3,     3,     3,     7,     7,     7,     0,     2,     3,
       1,     1,     0,     2,     3,     4,     3,     4,     4,     4,
       4,     0,     4,     0,     2,     3,     3,     4,     4,     7,
       3,     3,     3,     3,     0,     0,     0,    18,     0,     4,
       0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
       3,     0,     3,     0,     4,     0,     2,     3,     3,     3,
       0,     4,     0,     2,     3,     3,     3,     4,     0,     2,
       3,     1,     1,     0,     2,     3,     4,     3,     4,     4,
       0,     4,     2,     0,     2,     3,     3,     3,     3,     3,
       0,     5,     0,     7,     3,     0,     5,     3,     3,     3,
       3,     3,     0,     3,     0,     2,     2,     2,     4,     4,
       4,     4,     0,     2,     3,     3,     3,     0,     2,     3,
       3,     3,     3,     0,     2,     0,     0,     9,     3,     3,
       3,     2,     3,     5,     0,     2,     3,     0,     0,     9,
       0,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     4,
       0,     5,     1,     0,     4,     2,     0,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     3,     0,
       3,     1,     3,     0,     3,     0,     2,     3,     3,     4,
       4,     4,     4,     5,     5,     2,     7,    11,     7,    13,
      11,     9,     7,     7,     7,     9,     9,     9,    11,    11,
      11,     5,    17,    13,    15,    11,    13,     0,     7,     0,
       7,     7,    11,     5,     5,     9,     9,     9,     5,     5,
      11,     9,    14,    14,     7,    12,    10,     7,     7,     7,
       1,     1,     1,     0,     2,     3,     3,     2,     0,     2,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     3,     4,     0,     2,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     3,     4,     4,     4,
       0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     4,
       3,     4,     0,     4,     2,     2,     0,     2,     3,     4,
       0,     5,     5,     0,     2,     0,     6,     3,     0,     4,
       3,     3,     0,     2,     3,     1,     1,     0,     2,     3,
       3,     3,     3,     4,     0,     8,     0,     0,     3,     7,
       7,     8,    11,     6,     0,    10,     1,     3,     6,     1,
       1,     1,     1,     0,     3,     1,     2,     2,    12,     2,
      15,     4,    12,    17,    22,    12,     0,     2,     3,     4,
       4,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     2,     2,     3,
       9,     3,     2,     9,     2,     9,     2,     9,     5,     3,
       2,     0,     2,     6,     8,     8,    10,     1,     4,     1,
       5,     4,     4,     7,     4,     7,     5,     7,     5,     8,
       0,     3,     5,     5,     1,     1,     1,     1,     1,     1,
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
static const unsigned short yydefact[] =
{
       2,     0,     4,     1,     5,    41,   741,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   742,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   743,     0,     0,   748,   744,    19,
     745,   650,    43,   205,   168,   181,   237,    92,   298,   380,
     520,   552,     0,     0,   637,     0,   639,     0,     0,     0,
       0,    42,   576,     0,   723,     0,     0,     0,    27,    26,
      25,    23,    24,    22,    40,    30,    32,    33,    34,    35,
      31,    36,    37,    38,    39,     0,     0,    86,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   716,   715,   741,
       0,     0,     0,     0,     0,     0,   717,   718,   719,   720,
     721,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   724,   675,     0,   725,
     722,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     7,     0,   210,     9,   206,   209,   208,   170,    10,
     183,    11,   242,    12,   238,   241,   240,   741,     0,     8,
      93,    98,    97,   303,    13,   299,   302,   301,   385,    14,
     381,   384,   383,   525,    15,   521,   524,   523,   557,    16,
     553,   556,   555,   564,     0,     0,     0,     0,   583,     0,
       0,   741,    64,     0,    62,   574,     0,    89,   596,     0,
       0,   642,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,   678,
       0,   727,     0,   728,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     714,   641,   644,   739,   646,     0,   648,     0,     0,   746,
       0,   640,   651,   741,     0,    45,    51,    54,    53,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,   638,   585,     0,     0,     0,     0,     0,
       0,     0,     0,   596,     0,     0,   103,   596,    77,   741,
      74,     0,    61,    72,    81,     0,    58,     0,    63,     0,
     740,   733,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   676,
     726,     0,   731,     0,   692,   691,   690,   689,   685,   686,
     688,   687,   680,   679,   681,   682,   683,   684,     0,     0,
       0,     0,     0,     0,     0,     0,    83,   723,     0,     0,
       0,     0,     0,   207,   211,     0,     0,   169,   171,     0,
     103,     0,   182,   184,     0,     0,     0,     0,     0,     0,
     239,   243,     0,     0,    86,     0,     0,     0,     0,   300,
     304,     0,     0,   390,   382,   386,   392,     0,     0,     0,
       0,   522,   526,     0,     0,     0,     0,     0,   554,   558,
     566,     0,     0,   586,   587,   103,   589,     0,     0,     0,
       0,     0,     0,     0,   581,   582,   579,   580,   577,     0,
       0,     0,     0,   596,   109,     0,     0,     0,    86,     0,
       0,     0,    90,     0,     0,   597,   734,   735,     0,     0,
       0,     0,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,     0,   704,   705,   706,   707,   708,   709,     0,
       0,     0,     0,   729,   730,     0,     0,   647,     0,   749,
     747,   653,   652,     0,     0,    48,     0,    86,   741,     0,
       0,     0,     0,   217,     0,     0,   174,     0,   188,     0,
       0,   290,     0,   741,     0,   251,   268,   283,   103,     0,
       0,     0,     0,   741,     0,   310,   334,   741,     0,   393,
       0,   741,     0,   532,    89,     0,     0,   566,     0,     0,
       0,   567,     0,     0,   633,     0,     0,     0,     0,     0,
       0,     0,     0,   584,   583,     0,     0,     0,     0,   104,
       0,     0,   716,    79,    82,    73,     0,    78,     0,    67,
      59,    66,   573,   723,   723,     0,     0,     0,     0,     0,
     723,     0,   631,   631,   631,   602,   603,     0,     0,     0,
     617,   618,   105,   622,   624,   626,     0,     0,   630,     0,
       0,     0,   645,     0,     0,     0,     0,   643,   732,   713,
     649,    91,     0,     0,    65,     0,     0,     0,    46,     0,
       0,   217,     0,   214,   212,     0,     0,     0,   172,     0,
     186,   185,     0,   246,     0,   244,     0,     0,     0,     0,
     103,    94,   100,   307,     0,   305,     0,     0,     0,   387,
       0,   415,     0,   527,     0,     0,   530,   559,   567,   560,
     562,   561,   565,     0,     0,     0,     0,   103,     0,   591,
       0,     0,     0,   569,     0,     0,     0,     0,     0,   741,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
       0,   150,     0,     0,     0,     0,   141,   143,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   139,     0,
     136,   722,   570,     0,     0,    75,   596,    86,   614,   619,
     103,   611,     0,     0,   598,   601,   609,   610,   604,   605,
     608,   606,   607,   613,   612,     0,   615,   103,   621,     0,
       0,     0,     0,   629,   736,     0,     0,   703,   710,   711,
     712,    88,     0,    47,    50,    84,    52,     0,     0,   220,
     215,   219,   213,   176,   173,   190,   187,   292,   250,   245,
     253,   247,   270,   248,   285,   249,    95,     0,   306,   313,
     308,   312,     0,     0,     0,     0,   309,   335,   337,   336,
     388,   396,   389,   395,     0,   528,   536,   531,   535,   534,
     529,   563,   568,     0,   635,   634,     0,     0,     0,     0,
       0,     0,   578,   101,   102,   596,   571,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,   132,   134,
       0,   158,   156,   153,   155,   154,   741,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   140,   165,
      80,    76,     0,     0,     0,     0,   599,   600,   632,     0,
     107,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      55,   216,     0,     0,     0,     0,     0,     0,     0,    96,
       0,   353,   353,   364,   342,     0,     0,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   449,   391,   416,   470,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,   109,   109,     0,   135,     0,   379,     0,   131,
     130,   129,   128,   127,   123,   124,   126,   125,   119,   120,
     115,   118,   121,   116,   122,   157,   159,   161,     0,   163,
       0,     0,   137,     0,    60,    71,     0,     0,   103,   616,
     106,   103,     0,     0,     0,   628,   737,   738,     0,     0,
       0,     0,     0,     0,   103,   103,   103,   103,     0,     0,
       0,   103,   218,   221,     0,     0,   175,   177,     0,     0,
       0,   189,   191,     0,     0,     0,     0,   291,   293,     0,
       0,     0,     0,   105,   105,     0,     0,   252,   254,     0,
       0,     0,   269,   271,     0,     0,     0,   284,   286,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   723,   325,
     311,   314,   370,   370,   370,     0,     0,     0,     0,     0,
     723,     0,     0,     0,   394,   397,   406,     0,     0,   103,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   425,   103,     0,   478,     0,   485,     0,   493,   500,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   533,   537,   636,     0,     0,     0,     0,     0,
       0,     0,   148,     0,   149,     0,   145,     0,     0,     0,
     109,   378,     0,   160,   162,     0,     0,     0,   575,    89,
      69,     0,   108,     0,     0,     0,    85,     0,     0,     0,
       0,     0,   103,     0,   103,     0,     0,     0,     0,     0,
       0,   103,     0,     0,     0,   165,   195,     0,     0,     0,
       0,     0,    89,     0,     0,   264,     0,     0,     0,     0,
       0,     0,   279,   281,     0,   275,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   741,   320,
       0,     0,     0,     0,   109,     0,     0,     0,     0,   371,
     372,   373,   374,   375,   376,   377,     0,     0,   338,   354,
       0,   339,     0,   340,   365,     0,     0,     0,   347,   341,
     343,     0,     0,   409,     0,    89,     0,     0,     0,   413,
       0,   411,     0,     0,   417,     0,     0,   418,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   105,   540,     0,     0,     0,     0,
       0,     0,     0,   572,     0,     0,   109,     0,   142,     0,
       0,   113,   164,     0,   166,    70,   103,     0,     0,     0,
       0,   223,   224,   229,   230,     0,   233,     0,   232,   226,
     225,    86,   227,   222,     0,   231,   179,   178,     0,     0,
     192,   193,   294,   295,   296,     0,   255,   256,     0,     0,
       0,    86,   260,   261,   262,   263,   272,    86,   274,    86,
     273,   288,   287,   289,   330,   328,   329,   318,   316,   317,
     315,     0,   332,   324,   331,   327,   319,     0,     0,     0,
       0,     0,     0,   361,   355,     0,   367,     0,     0,     0,
     399,   398,    86,   400,   407,   401,   404,   405,    86,   402,
     403,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,   103,     0,     0,     0,     0,   103,     0,     0,   103,
     419,   479,     0,     0,   103,     0,     0,     0,     0,   420,
     486,     0,     0,     0,     0,     0,   103,   421,   494,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   501,   103,
       0,   103,   723,   723,   723,     0,   723,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   471,   473,   472,
     473,     0,   538,     0,   723,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,    56,   103,   103,     0,   103,   180,   197,   194,   297,
     257,     0,   258,     0,   280,     0,   276,     0,   322,     0,
       0,     0,   359,   360,   362,     0,   358,   109,   366,   109,
     344,   345,     0,     0,     0,     0,   346,   348,   408,     0,
     412,     0,   423,   415,   424,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   441,     0,   415,     0,     0,     0,
       0,     0,   415,     0,     0,     0,     0,     0,     0,     0,
       0,   415,     0,     0,     0,     0,     0,   415,   415,     0,
       0,   510,     0,   454,     0,     0,     0,     0,     0,     0,
     458,   459,     0,     0,     0,     0,     0,     0,     0,   453,
       0,     0,     0,     0,   539,     0,     0,     0,     0,     0,
       0,   151,     0,     0,   144,   114,     0,   620,   623,   625,
     627,     0,     0,     0,     0,     0,     0,     0,     0,   282,
     278,   332,     0,   321,   326,     0,   356,   368,     0,     0,
       0,     0,   410,   414,     0,     0,   723,     0,   723,     0,
       0,     0,     0,     0,   103,     0,   482,   480,   481,   483,
     103,     0,   489,   487,   488,   490,   491,   103,   498,   496,
       0,   495,   497,   505,   504,   506,     0,     0,   502,   503,
       0,     0,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   723,   474,
       0,   543,   543,     0,   723,     0,     0,     0,     0,     0,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   198,     0,     0,     0,   333,   363,
       0,     0,   349,   350,   351,   352,   426,   428,     0,     0,
       0,     0,     0,     0,   434,     0,     0,   484,     0,   492,
       0,   499,   508,   509,   512,   507,   451,     0,     0,   432,
     433,     0,     0,     0,     0,     0,   464,   468,   469,     0,
     467,     0,   448,     0,   723,   477,   450,   370,   370,   595,
       0,   588,   592,     0,     0,     0,   147,     0,   236,   235,
     228,   234,     0,     0,     0,     0,     0,     0,     0,   259,
     323,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,     0,     0,     0,   103,     0,   103,     0,
       0,     0,     0,     0,     0,   103,     0,   475,   476,     0,
       0,     0,   548,   542,     0,   544,   541,   723,     0,     0,
       0,     0,   199,   200,   201,   202,   203,   204,     0,     0,
       0,   415,   436,   437,     0,     0,     0,     0,   435,     0,
       0,   415,     0,     0,     0,     0,   103,     0,     0,   511,
     513,     0,   431,     0,   455,   456,   457,     0,     0,   461,
       0,     0,     0,     0,     0,     0,     0,   545,     0,     0,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
     723,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,     0,   466,     0,   550,
     551,   547,     0,   109,   590,     0,     0,     0,   265,   357,
     369,   427,   438,   439,   440,     0,   415,     0,   445,   415,
     519,   514,   517,   518,   515,   516,   452,   430,     0,   415,
     415,   460,     0,   549,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   465,     0,   593,     0,
      57,     0,     0,   443,   415,   446,   429,     0,     0,   546,
       0,     0,     0,     0,   462,   463,     0,   266,     0,   444,
       0,     0,     0,     0,     0,   442,   594,    89,     0,     0,
     267
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   108,   182,
     305,   653,   306,  1049,  1661,   234,   491,   767,   235,   236,
     610,   913,  1037,   342,   488,   343,   537,   180,   404,   348,
     405,   113,   200,   434,   483,   484,  1517,   921,   599,   600,
     756,  1008,  1535,   757,   874,   875,  1356,   869,   908,  1030,
    1032,   110,   311,   418,   667,   933,  1067,   111,   312,   423,
     669,   934,  1072,  1389,  1666,  1764,   109,   185,   310,   414,
     662,   932,  1063,   112,   194,   313,   431,   676,   936,  1088,
    1400,  1998,  2031,   677,   937,  1093,  1247,  1409,  1244,  1407,
     678,   938,  1098,   672,   935,  1078,   114,   205,   316,   440,
     686,   940,  1111,  1422,  1671,  1264,  1560,   687,   837,  1115,
    1290,  1439,  1577,  1112,  1279,  1567,  1770,  1114,  1284,  1569,
    1771,  1280,   758,   115,   210,   317,   445,   570,   690,   945,
    1125,  1294,  1442,  1300,  1448,   844,   985,  1168,  1169,  1518,
    1640,  1739,  1319,  1471,  1321,  1480,  1323,  1488,  1324,  1498,
    1720,  1855,  1910,   116,   215,   318,   452,   694,   987,  1173,
    1521,  1817,  1875,  1963,  1926,   117,   220,   319,   459,    27,
     320,   581,   703,    81,   345,   227,   479,   335,   333,   349,
     495,   780,   986,    28,   107,   759,   271,   167,   168,   272,
     273,    29,   170,    59,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1445
static const short yypact[] =
{
   -1445,    31, -1445, -1445,   116,  4556,  -170,  -121,  -118,   473,
     138,  1294,    93,   -91,   -80,   -40,   -13,    36,    78,   136,
     151,   154,   164,    33, -1445, -1445,   497, -1445, -1445,   -62,
     205,   180,   298,   451,   492, -1445,   517,   526,   529,   559,
     572, -1445,   584, -1445,   586,   589,   604,   631,   633,   639,
     641,   661,   671,   674, -1445,    92,   449, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445,   438,    35, -1445,   459, -1445,   437,   460,   462,
     485, -1445, -1445,   495,  2332,  4362,  -151,   549, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445,    93,    93,  -116,   488,   234,
     -26,   125,   259,   301,   323,   380,   391,   447,   451,   679,
    4362,  4362,   451,   420,    25,   765,  4362, -1445, -1445,  -185,
     808,   564,   585,   602,   608,   620, -1445, -1445, -1445, -1445,
   -1445,   623,   626,   644,   649,   677,   681,   683,   692,   699,
     729,   736,   757,   759,   761,   770,   773,   784,   785,   786,
     793,   794,  4362,  4362,  4362,  4057,  4238, -1445,   824, -1445,
   -1445,   826,  1400,   947,  4057,    85,   705,   -70,   966, -1445,
     979, -1445,  1080, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445,  -119,   796, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445,   743,  4266,  1914,  1416,   798,   791,
    1416,   -69, -1445,    17, -1445, -1445,   800,   795, -1445,  5302,
    1892, -1445,  1055,  1056,  4362,  4362,    93,  4362,  4362,  4362,
    4362,  4362,  4362,  4362,  4362,  4362,  4362,  4362,  4362,  4362,
    4362,  4362,  4362,  4362,  4362,  4362,  4362,    93,   -54,   -54,
    5680,  4238,   189, -1445,  4362,  4362,  4362,  4362,  4362,  4362,
    4362,  4362,  4362,  4362,  4362,  4362,  4362,  4362,  4362,  4362,
   -1445, -1445, -1445, -1445, -1445,   -29, -1445,  4362,    93, -1445,
    4057, -1445,   829,   308,   806, -1445, -1445, -1445, -1445,  -111,
     304,   383,   353,   508,    86, -1445,   443,   344,   476,   350,
     803,  4362,  4362, -1445, -1445,    25,    25,    37,   804,   805,
     809,   810,   811, -1445,    25,   385,   134, -1445,  1061,   374,
   -1445,  4057, -1445, -1445, -1445,   812, -1445,   814, -1445,    -4,
   -1445, -1445,   252,   817,   818,  1456,  1579,   828,  5703,  5730,
    5757,  5784,  5811,  5838,  5865,  5892,  5919,  5946,  3236,  5973,
    6000,  6027,  6054,  6081,  6108,  4348,  4543,  4566,   838, -1445,
   -1445,  4057,  4293,  4461,  1252,  1638,  1288,  1288,   622,   622,
     622,   622,   302,   302,   -54,   -54,   -54,   -54,  1069,  6135,
     842,   -12,  4310,    87,   849,   854, -1445,  2501,   868,  4362,
      38,  1098,   451, -1445, -1445,   847,  1099, -1445, -1445,   848,
      41,  1110, -1445, -1445,   857,  1118,  1119,   863,   874,   875,
   -1445, -1445,   906,   882,    97,  1136,  1137,   881,   898, -1445,
   -1445,  1158,   901, -1445, -1445, -1445, -1445,  1160,   904,   451,
     451, -1445, -1445,   451,   905,   451,    93,  1164, -1445, -1445,
   -1445,  4488,  2931,   962, -1445,    41, -1445,   909,  4057,   910,
     911,   913,   158,   920, -1445, -1445, -1445, -1445, -1445,  1174,
     924,   926,   927, -1445, -1445,   216,  4414,   921,   342,   431,
    1081,    29, -1445,  1179,  4546, -1445, -1445, -1445,  1207,  4362,
    4362,  1206, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445,  4362, -1445, -1445, -1445, -1445, -1445, -1445,  4362,
    4362,  4362,  1208,  4238, -1445,  4362,  4362, -1445,  1209, -1445,
   -1445, -1445,  2914,   950,  4362, -1445,    90,   296,   -64,  1210,
      90,  6162,   971, -1445,  1228,    42, -1445,  1229, -1445,  1230,
    1231, -1445,  1233,   432,  1235, -1445, -1445, -1445,    41,  1010,
    1237,  1240,  1239,   432,  1244, -1445, -1445,   432,  1249, -1445,
     994,   432,  1262, -1445,   795,  1266,  1269, -1445,  1271,  1275,
    1280,  1003,  4362,  4362, -1445,  1283,  1031,  4057,   354,  4057,
    4057,  4057,  1291, -1445,   798,  4362,  1297,    93,   316, -1445,
    2211,  1296,  1298,  2914, -1445, -1445,    20, -1445,    25, -1445,
   -1445, -1445, -1445,  2945,  2945,  1044,  1303,   538,  4362,  4362,
    2945,  4362,  1304, -1445, -1445, -1445, -1445,  4362,  1313,  2884,
   -1445, -1445,  1057,  1058,  1059,  1060,  1063,  1321, -1445,  1070,
    4589,  4612, -1445,  6189,  6216,  6243,  6270, -1445,  2914,  2914,
   -1445, -1445,  5329,    90, -1445,  1326,  1327,  1330, -1445,  1329,
    1104, -1445,   155, -1445, -1445,  1087,  1333,   468, -1445,   510,
   -1445, -1445,   531, -1445,  1341, -1445,   540,   544,   550,  1343,
      41, -1445, -1445, -1445,  1345, -1445,   165,    43,  1356, -1445,
     242, -1445,  1357, -1445,   458,  1359, -1445, -1445,  1103, -1445,
   -1445, -1445, -1445,   497,   552,  6297,  1106,    41,   553, -1445,
     555,   574,   576, -1445,  1107,  6320,  1116,  1120,  1372,   453,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
    1123, -1445,  1124,  1135,  1138,  1139, -1445, -1445,  1392,  2211,
    2211,  2211,  2211,  1395,   279,  1394,  2829,   -58,  1143,  1143,
   -1445,  1144, -1445,  4362,    21, -1445, -1445,   319, -1445, -1445,
      41, -1445,    93,    93, -1445,  2914,  2914, -1445,  2914, -1445,
    1404,  1404,  1404,  2914, -1445,  4057,  2914,    41, -1445,  4362,
    4362,  4362,  4057, -1445, -1445,  4362,  4362, -1445, -1445, -1445,
   -1445, -1445,  1417, -1445, -1445,  1162, -1445,  1361,   264, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445,  1422, -1445, -1445,
   -1445, -1445,  1170,  1171,  1172,  1173, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445,  2864, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445,  4362, -1445, -1445,  4362,  1166,  1175,  1176,
    1177,  1182, -1445, -1445, -1445, -1445, -1445, -1445,  1183,  1180,
    1183,  2211,  1437,  1442,  1191,  1192,  1211,  1200,  1200,  1200,
    2656, -1445, -1445, -1445, -1445, -1445,    22,  1194, -1445,  2211,
    2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,
    2211,  2211,  2211,  2211,  2211,  1457,  4362,  1977, -1445,  1196,
    2914, -1445,   332,  1203,    71,  1197, -1445, -1445, -1445,   614,
   -1445,   647,  4635,  4658,  4681,   656,  6347,  6374, -1445,  4362,
   -1445, -1445,   774,    -6,   439,   410,   726,    27,    89, -1445,
    1246, -1445, -1445, -1445, -1445,   487,    91,   -31,    51,  1214,
    1215,  1216,  1217,  1218,  1219,  1220,  1222,  1223,  1459,  1225,
       3,   306,   388,  1204,  1227,  1232,  1238,  1254,  1256,  1257,
    1258,  1259,  1224,  1268,  1263,  1264,  1265,  1284,  1286,  1277,
    1281,  1289, -1445, -1445, -1445, -1445, -1445,    96,  5356,  4704,
      41,  4057,  4057,  4057,  4057,   351,  1236, -1445,  1261,  3798,
    1290,  1267, -1445, -1445,  1292, -1445,  1221, -1445,  2211,  2247,
    2446,  1660,  1660,  1660,   515,   515,   515,   515,   613,   613,
    1200,  1200,  1200,  1200,  1200, -1445, -1445, -1445,  1293,  2829,
     362,  3770, -1445,  1510, -1445, -1445,   451,    17,    41, -1445,
   -1445,    41,  4362,  4362,  4362, -1445, -1445, -1445,  5383,  1295,
      25,    25,    25,    25,   141,   153,    41,    41,  1287,   451,
    1518,   211, -1445, -1445,    57,  1548, -1445, -1445,  1305,  1550,
    1551, -1445, -1445,  1554,    72,  1555,   451, -1445, -1445,  1556,
    1561,  1562,  1306,  1057,  1057,    25,    25, -1445, -1445,  1570,
      39,    40, -1445, -1445,  1572,   451,  1573, -1445, -1445,  1574,
    1575,  1576,    74,   451,  1580,  1587,  1588,    25,  2945, -1445,
   -1445, -1445,   841,  1260,   820,   397,  1594,   451,    56,    93,
    2945,    93,    60,   451, -1445, -1445, -1445,   451,  1593,    41,
      41,  1597,   451,   451,   451,   451,   451,   451,   451,   451,
     451, -1445,    41,  4362, -1445,  4362, -1445,  4362, -1445, -1445,
      25,    93,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,  1596,   451,  1349,  1350,
    1346,   451, -1445, -1445, -1445,  4362,  1347,   663,   666,   668,
     687,  1603, -1445,  1363, -1445,  2211, -1445,  1366,  1354,  1365,
   -1445, -1445,  4135, -1445, -1445,  2211,  1367,   697, -1445,   795,
   -1445,  1377, -1445,  4727,  4750,  4773, -1445,  1353,  1624,  1630,
    1636,  1645,    41,  1646,    41,  1649,  1650,  1651,   751,  1652,
    1656,    41,  1659,  1661,  1662,  1196, -1445,  1663,  1664,  1665,
    1666,  1667,   795,  1668,    64,  1413,  1672,  1675,  1676,  1677,
    1680,  1682, -1445, -1445,  1686, -1445, -1445,  1691,  1692,  1701,
    1705,  1706,  1707,  1708,  1710,  1711,  1712,  1717,   490, -1445,
    1718,  1719,  1720,  1721, -1445,  1725,  1727,  1732,  1481, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445,    25,  1734, -1445, -1445,
    1485, -1445,    25, -1445, -1445,  1486,  1739,  1743, -1445, -1445,
   -1445,  1755,  1756, -1445,  1757,   795,  1760,  1761,  1762, -1445,
    1763, -1445,  1768,  1522, -1445,  1523,  1531, -1445,  1525,  1526,
    1528,  1530,  1534,  1536,  1537,  1539,  1540,  1545,  4796,   442,
    4819,   496,  4842,   394,   102,  1542,  1552,  1544,  1546,  1547,
    1565,  1566,  1567,  1532,  1557,  1569,  1577,  1578,  1581,  1582,
    1583,  1584,  1595,    68,    68, -1445,  1828,  5410,  1589,  1599,
    1607,  1600,  1609, -1445,    25,  6725, -1445,  4362, -1445,  1834,
    1617, -1445,  2829,    25, -1445, -1445,    41,  4362,  4362,  4362,
      17, -1445, -1445, -1445, -1445,  1586, -1445,  1616, -1445, -1445,
   -1445,  1625, -1445, -1445,  1626, -1445, -1445, -1445,  1833,   712,
   -1445, -1445, -1445, -1445, -1445,  1882, -1445, -1445,  1886,  1729,
    1887,  1625, -1445, -1445, -1445, -1445, -1445,   713, -1445,   716,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445,  1635,  1655, -1445, -1445, -1445, -1445,  1644,  1906,  1908,
    1913,  1952,  1949, -1445, -1445,  1957, -1445,  1958,  1959,   285,
   -1445, -1445,   718, -1445, -1445, -1445, -1445, -1445,   724, -1445,
   -1445,  1961,  1709,  1962,    41,   451,   451,  4362,  4362,  4362,
     451,    41,    25,  1963,  4362,  1714,    41,  4362,  4362,    41,
   -1445, -1445,  4362,  1715,    41,  4362,  4362,  4362,  4362, -1445,
   -1445,  4362,  4362,  4362,  1716,  4362,    41, -1445, -1445,  4362,
    4362,   451,  1722,  1726,  4362,  4362,  1728, -1445, -1445,    41,
    1964,    41,  2945,  2945,  2945,  4362,  2945,  1967,  1968,   451,
     451,  4362,   451,   451,    25,  1971,  1976, -1445, -1445, -1445,
   -1445,    30, -1445,  1730,  2945,  4057,  1731,  4057,  4057,  1737,
   -1445,  1738,  4865,  1740, -1445,  2211,  1741,  1733,  5437,  5464,
    5491, -1445,    41,    41,   751,    41, -1445, -1445, -1445, -1445,
   -1445,  1979, -1445,  1987, -1445,  1995, -1445,  1996, -1445,   451,
    1997,  1998, -1445, -1445, -1445,  1744, -1445, -1445, -1445, -1445,
   -1445, -1445,  1183,  1183,  1183,    25, -1445, -1445, -1445,   451,
   -1445,   451, -1445, -1445, -1445,  1745,  1771,  1774,  4888,  4911,
    4934,  1775,  1783,  1777, -1445,  4957, -1445,  2044,   489,   669,
    2053,  4980, -1445,  2054,  1014,  1045,  1168,  1348,  5003,  1511,
    1538, -1445,  1620,  2055,  1713,  1809,  2058, -1445, -1445,  1943,
    2039, -1445,   384, -1445,  1801,  1810,  1812,  1802,  5026,  1806,
   -1445, -1445,  1807,  1808,  6401,  1816,  1817,  1811,   727, -1445,
     404,   414,  1814,  1818, -1445,  4362,  1815,   740,  4362,   744,
     746, -1445,  1821,  4362, -1445,  2829,  1819, -1445, -1445, -1445,
   -1445,  1823,  1824,  1826,  1822,  1836,   594,  2085,  1831, -1445,
   -1445,  1655,  1838, -1445, -1445,  2090, -1445, -1445,  2093,  2094,
    2095,  2096, -1445, -1445,  2940,  2097,  2945,  4362,  2945,  4362,
    4362,   451,  2098,   451,    41,  3127, -1445, -1445, -1445, -1445,
      41,  3181, -1445, -1445, -1445, -1445, -1445,    41, -1445, -1445,
    3235, -1445, -1445, -1445, -1445, -1445,  3420,  3474, -1445, -1445,
     749,  2100,  4362,    41,  2101,  2102,  4362,    93,    93,  4362,
    4362,  2104,  2105,  2106,    93,  2107,  1980,  2109,  2611, -1445,
    2110, -1445, -1445,  5518,  2945,  1854,  5545,  1856,  1858,  1859,
    5572, -1445,  1864,  2119,  2120,  2121,  2122,  2125,  4362,  4362,
    4362,  4362,  4362, -1445, -1445,  2020,  2126,  2127, -1445, -1445,
    1867,  1870, -1445, -1445, -1445, -1445,  2124, -1445,  1878,  6428,
    1872,  5049,  5072,  1873, -1445,  1883,  1877, -1445,  1880, -1445,
     415, -1445, -1445, -1445, -1445, -1445, -1445,  5095,   450, -1445,
   -1445,  6455,  1885,  1888,  5118,  5141, -1445, -1445, -1445,   758,
   -1445,    93, -1445,    93,  2945, -1445, -1445,   872,  1189, -1445,
    1900, -1445, -1445,  1894,  4057,  4362, -1445,    17, -1445, -1445,
   -1445, -1445,  2144,  2474,  2591,  2997,  3208,  3276,  2166, -1445,
   -1445, -1445,  1183,  1909,  2168,  2169,  4362,  4362,  4362,  4362,
    2173,    41,  4362,  1910,  4362,   325,    41,  2178,    41,  2179,
    2187,  2188,  4362,  4362,  2189,    41,   769, -1445, -1445,  2193,
    2194,  2195, -1445, -1445,  1944, -1445, -1445,  2945,  4362,   771,
    5599,  1937, -1445, -1445, -1445, -1445, -1445, -1445,  1941,  1947,
    1948, -1445, -1445, -1445,  6482,  6509,  6536,  5164, -1445,  1950,
    5187, -1445,  6563,  2202,  2204,  4362,    41,  2205,    25, -1445,
   -1445,  1953, -1445,   483, -1445, -1445, -1445,  6590,  6617, -1445,
    1954,  2206,  2208,  2212,  2213,  2214,    25, -1445,  1966,  5210,
    1969, -1445,  4362,  2215,  2218,  2219,  3528,  2220,  2221,  2224,
    2945,  2007,  4362,  3713,  2013,  2227,  2232,  3501,  2274,  2275,
    2283,  2284,  2285,    41,  2031,  2032,  2289, -1445,  2033, -1445,
   -1445, -1445,  2291, -1445, -1445,  4362,  2037,  6644, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445,  2038, -1445,  6671, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,  2046, -1445,
   -1445, -1445,  2295, -1445,  2047,  5626,  4362,  2299,  2245,  4362,
    3767,  2045,  3821,  2302,  4006,  4060, -1445,  2303, -1445,  5233,
   -1445,    25,  5256, -1445, -1445, -1445, -1445,  2307,  2308, -1445,
    4362,  2309,  4362,  4114, -1445, -1445,  5279, -1445,  6698, -1445,
    4362,  2185,  2312,  5653,  2315, -1445, -1445,   795,  2314,  2059,
   -1445
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445,   -51, -1445, -1445,  -275,  1248,
   -1445, -1445,  1250,  -470, -1445,  -570, -1445,  -422,  -534,  -569,
   -1445, -1445, -1445, -1445,   624, -1445,  -617, -1445,  -989, -1445,
    -682, -1445, -1445, -1445, -1445, -1445, -1445, -1445,  1568, -1445,
    1101, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
    1669, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445,   657, -1445, -1445, -1445,
   -1445, -1445, -1445,  1387, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1105,  -717, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1444, -1445, -1445, -1445,   988,
     819, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445,   592, -1445, -1445, -1445, -1445, -1445, -1445, -1445, -1445,
   -1445,  1765, -1445,  1640, -1445,  2222, -1445,  1750,  2116,  -327,
   -1445,   416,    15,   -28, -1445, -1445,   944,  -520,  -567,  -157,
     -83, -1445,    -5,  -102,   -68
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -675
static const short yytable[] =
{
      30,   169,   867,   176,   177,   695,   472,    58,  1183,  1285,
     485,   666,   561,  1188,  1189,   788,   171,   295,    72,   674,
     338,   611,   339,   338,   338,   339,   339,     6,    87,   684,
     231,     3,   338,   688,   339,  1642,   765,   692,     6,   433,
     119,    82,   231,   542,  1242,  1245,   768,   769,     6,   664,
     463,   464,   466,   777,     7,     8,    73,    74,    75,   473,
      76,     6,   231,  1064,   480,     6,   606,   877,   878,   879,
     880,  1397,    13,     6,   480,  1065,  1035,   654,   240,  1254,
     760,   187,    31,   352,   196,   202,   207,   212,   217,   222,
     533,   231,   296,   609,   232,   654,     6,    31,     6,    54,
      58,    58,    55,    56,    30,   173,   232,    30,    30,    30,
      30,    30,    30,   223,   174,   657,    -3,   228,   228,   237,
    1489,  1223,   407,  1089,   186,  1090,   232,   195,   201,   206,
     211,   216,   221,  1091,    32,   408,  1036,    33,   314,  1684,
     481,   232,   178,   401,   357,    41,   409,  1643,    31,   179,
     481,   996,  1695,   998,   308,   232,   598,   480,  1701,   232,
     832,   833,   834,   835,   480,   378,    61,  1710,    73,    74,
      75,  1170,    76,  1716,  1717,  1094,   480,   309,    73,    74,
      75,  1255,    76,    62,   489,  1095,   299,  1096,   -65,   999,
    1490,  1256,  1171,   -65,   911,   300,   400,   307,    31,   240,
     289,  1360,   905,    31,   906,    83,   290,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,    63,   121,  1029,  1129,   398,   344,   760,
     760,   760,   760,   481,   480,  1491,   381,   188,   189,     6,
     481,    58,  1492,  1493,   530,     7,     8,    73,    74,    75,
      64,    76,   481,   381,   493,    73,    74,    75,  1066,    76,
    1143,   494,    58,    13,     6,  1494,  1144,   764,  1495,  1496,
       7,     8,    73,    74,    75,  1427,    76,    73,    74,    75,
     340,    76,   882,   341,   883,   233,   341,   341,    13,    31,
     120,  1092,   340,    58,  1644,   341,    71,   233,   524,    65,
     465,   543,  1243,  1246,    86,   665,   197,   836,  1130,   237,
     481,   588,     7,     8,    73,    74,    75,   233,    76,  1293,
     237,   237,   237,  1299,   169,    57,  1192,   665,     6,   237,
      13,   787,   446,   766,     7,     8,    73,    74,    75,   171,
      76,    66,   297,  1903,   432,   914,   233,   534,  1127,   105,
     233,   760,    13,  1097,   579,   560,   539,    73,    74,    75,
    1172,    76,   179,  1572,  1573,   482,  1497,  1531,   198,   760,
     760,   760,   760,   760,   760,   760,   760,   760,   760,   760,
     760,   760,   760,   760,   760,     6,   410,   760,   190,   191,
     411,     7,     8,    73,    74,    75,     6,    76,  1212,    67,
     412,  1574,     7,     8,    73,    74,    75,   545,    76,    13,
    1214,  1904,  1482,  1905,    68,  1575,   592,    69,   809,   810,
      13,   554,   884,   494,  1906,     6,   229,    70,   829,   830,
     708,   564,   710,   711,   712,   419,   568,  1907,    84,   912,
     441,   420,   572,    85,   574,   575,   453,  1936,   576,   421,
     578,    58,     6,   380,   381,  1908,     6,  1943,     7,     8,
      73,    74,    75,     6,    76,   415,  1237,  1238,  1221,     7,
       8,    73,    74,    75,   601,    76,    13,   442,    34,   416,
      35,   494,  1483,  1286,   443,   655,   344,    13,   760,   659,
     454,   885,    36,    37,    38,   717,  1697,   183,   184,    88,
      73,    74,    75,  1355,    76,   841,   842,  1287,  1073,    39,
      73,    74,    75,  1362,    76,   774,   496,   381,  1074,  1075,
    1076,  1068,   192,   193,    89,  1069,  1070,   809,   931,   435,
     169,   169,  2000,    90,  1484,  2002,    91,   169,   995,   436,
     455,  1263,   456,     6,    54,  2004,  2005,    55,    56,  1576,
     286,   287,   288,  1297,   656,   437,   289,  1485,  1486,   438,
     853,   179,   290,  1145,   457,   199,    92,  1200,   413,  1146,
    2023,   403,   447,  1116,   718,    31,   424,   -68,  1676,    93,
    1677,   494,  1465,  1117,   179,  1466,   203,   204,   448,  1909,
    1033,    94,    58,    95,   425,   761,    96,   494,  1467,  1468,
    1469,   344,   802,   237,   426,   427,   605,   179,   444,  1181,
     449,    97,    58,   428,   458,   429,   494,   422,   709,   381,
    1194,  1118,  1119,  1120,  1121,  1122,  1123,  1195,   919,   118,
    1365,   474,   475,   476,   477,   925,  1473,   487,    98,  1474,
      99,    31,  1721,   208,   209,  1147,   100,   417,   101,  1722,
     478,  1148,  1475,  1476,   213,   214,  1477,  1478,  1487,   839,
    1288,  1289,  1737,  1395,   450,   760,   849,    40,   102,  1738,
     916,   917,  1740,  1853,  1077,   760,  1698,   811,   103,  1738,
    1854,   104,    30,  1757,  1758,  1759,  1760,  1761,  1762,    30,
      77,    78,    79,    80,   122,   665,   381,   607,  1381,    31,
    1398,   831,   838,  1071,   106,   843,  1470,   439,  1857,   848,
     218,   219,  1874,  1874,   121,  1858,   755,   123,    82,   124,
      31,   846,   847,   275,   276,   277,  1444,   278,   279,   280,
     281,   813,   814,   282,   283,   284,   285,   286,   287,   288,
     451,  1952,   125,   289,   761,   761,   761,   761,  1953,   290,
     887,  1124,   181,  1421,   127,   128,     6,    31,   126,   344,
    1479,   898,   899,   900,   901,   902,   903,    58,    58,   904,
      57,   238,   430,   815,   816,  1208,  1209,  1210,  1211,   772,
     773,   136,   137,   138,   139,   140,   275,   276,   277,  1224,
     278,   279,   280,   281,   817,   818,   282,   283,   284,   285,
     286,   287,   288,   820,   821,   175,   289,   822,   823,   224,
    1239,  1240,   290,   824,   825,   241,   854,   858,   381,   859,
     381,   242,  1079,   811,  1080,  1081,  1082,  1083,  1084,  1085,
    1086,   291,  1262,   292,  1177,  1178,  1179,  1180,   860,   381,
     861,   381,   243,  1050,  1051,  1052,  1053,  1054,  1055,  1056,
    1057,  1058,  1889,  1655,  1059,  1678,  1679,  1680,  1763,   244,
    1060,   900,   901,   902,   903,   245,   761,   904,   284,   285,
     286,   287,   288,  1061,  1197,  1325,   289,   246,  1039,   381,
     247,  1006,   290,   248,   761,   761,   761,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,   761,   761,
    1541,   249,   761,   275,   276,   277,   250,   278,   279,   280,
     281,  1040,  1041,   282,   283,   284,   285,   286,   287,   288,
    1045,   381,  1265,   289,  1266,  1267,  1268,  1349,   381,   290,
    1350,   381,  1351,   381,   251,  1625,  1626,  1627,   252,  1629,
     253,  1128,  1269,  1270,  1271,  1272,  1273,  1274,  1275,   254,
    1282,  1352,   381,  1869,   294,  1870,   255,  1646,  1871,  1544,
    1126,  1364,   381,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
     298,  1276,  1277,   301,  1994,  1547,  1548,  1554,   179,  1553,
    1556,   179,  1578,   179,   302,  1555,   256,  1557,  1580,   179,
    1087,  1735,  1736,   257,  1269,  1270,  1271,  1272,  1273,  1274,
    1275,  1432,  1872,   761,  1745,   381,   321,  1435,  1747,   381,
    1748,   381,  1794,  1795,   258,   760,   259,  1296,   260,  1298,
    1579,  1703,  1864,  1865,  1664,   169,  1581,   261,   166,   172,
     262,  1199,   344,  1921,  1922,  1930,   381,   169,  1062,   781,
     782,   263,   264,   265,   549,   237,   237,   237,   237,  1326,
     266,   267,  1704,   315,  1219,   334,   336,   346,   347,   237,
     353,   354,   402,   406,   225,   226,   460,   467,   468,   486,
     239,  1232,   469,   470,   471,   497,   527,   490,   492,  1529,
     237,   237,   535,   498,  1283,   303,   501,   536,  1536,   586,
    1249,     7,     8,    73,    74,    75,   522,    76,  1257,  1259,
     529,   540,   237,   544,   547,  1278,   268,   269,   270,    13,
     546,   548,  1292,  1295,    58,   550,    58,  1301,  1302,  1778,
     551,  1780,  1303,   552,   553,  1890,   555,  1308,  1309,  1310,
    1311,  1312,  1313,  1314,  1315,  1316,  1873,   556,   557,   558,
     559,   562,   563,   304,   565,   237,    58,  1327,  1328,  1329,
    1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,
    1340,   566,  1342,   567,   569,   571,  1346,   573,   577,   580,
     585,  1815,   587,   589,   590,  1705,   591,  1820,   593,   594,
     761,   595,   679,   596,   597,   604,   612,  1593,   355,   356,
     761,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   608,   639,   642,   651,   647,   650,   658,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   661,   663,   668,   670,   671,  1637,
     673,   399,   675,   680,   681,   682,   683,  1868,   275,   276,
     277,   685,   278,   279,   280,   281,   689,   691,   282,   283,
     284,   285,   286,   287,   288,   461,   462,   702,   289,   693,
    1869,   237,  1870,   696,   290,  1871,   697,   237,   699,   275,
     276,   277,   700,   278,   279,   280,   281,   701,   706,   282,
     283,   284,   285,   286,   287,   288,   707,    42,   713,   289,
    1681,    43,   716,   762,   827,   290,   763,   770,   771,   779,
    1928,  1269,  1270,  1271,  1272,  1273,  1274,  1275,   784,  1872,
     787,   789,   790,   791,   793,   523,   792,  1099,   794,  1100,
    1101,   857,  1102,   803,   804,   805,   806,   807,  1519,  1519,
     812,  1265,  1103,  1266,  1267,  1268,   532,   534,   819,   237,
     826,   166,   828,   541,  1933,  1706,    44,  1881,   237,  1104,
    1105,  1106,    45,   840,   845,   344,   850,   851,  1647,   856,
    1649,  1650,   862,  1975,   864,    46,  1107,    47,   865,   866,
     868,   870,  1269,  1270,  1271,  1272,  1273,  1274,  1275,    48,
    1276,  1277,   871,    49,   915,   872,   873,   876,   881,   886,
     907,  -674,   275,   276,   277,    50,   278,   279,   280,   281,
     918,   920,   282,   283,   284,   285,   286,   287,   288,   169,
     169,   169,   289,   169,   928,   929,    51,   930,   290,   939,
     603,   990,  1108,   941,   942,   943,   944,   997,   991,   992,
     993,   169,  1000,   640,   641,   994,   755,  1001,  1002,  1003,
    1586,  1587,  1004,  1876,   904,  1591,   643,   237,  1007,  1031,
    1025,  1034,  1038,   644,   645,   646,  1141,  1149,  2038,   648,
     649,  1132,  1133,  1134,  1135,  1136,  1137,  1138,   652,  1139,
    1140,    52,  1142,    53,  1150,  1191,  1616,  1158,   277,  1151,
     278,   279,   280,   281,  1182,  1152,   282,   283,   284,   285,
     286,   287,   288,  1109,  1632,  1633,   289,  1635,  1636,   237,
    1110,  1153,   290,  1154,  1155,  1156,  1157,  1198,  1708,  1184,
    1160,  1161,  1162,  1220,  1281,  1187,   704,   705,   280,   281,
     761,  1159,   282,   283,   284,   285,   286,   287,   288,   715,
    1165,  1163,   289,  1164,  1166,  1709,  1167,  1186,   290,  1190,
    1218,  1193,  1207,  1225,  1672,  1227,  1228,   166,   166,  1229,
    1035,  1233,   775,   776,   166,   778,  1234,  1235,  1226,  1236,
     237,   783,  1131,   786,  1682,  1241,  1683,  1248,  1250,  1251,
    1252,  1253,   275,   276,   277,  1258,   278,   279,   280,   281,
    1260,  1261,   282,   283,   284,   285,   286,   287,   288,  1291,
    1304,  1341,   289,   169,  1307,   169,  1343,  1344,   290,  1345,
    1353,  1348,  1358,  1370,  1176,   324,   325,   326,   327,   328,
     329,   330,   331,   332,  1363,  1802,  1803,  1711,  1354,  1357,
    1359,  1371,  1809,  1950,   275,   276,   277,  1372,   278,   279,
     280,   281,  1366,  1373,   282,   283,   284,   285,   286,   287,
     288,  1962,  1374,  1376,   289,   169,  1378,  1379,  1380,  1382,
     290,   169,  1201,  1383,   293,  1202,  1385,  1879,  1386,  1387,
    1390,  1391,  1392,  1393,  1394,  1396,  1399,  1401,  1213,  1215,
    1216,  1217,  1402,  1403,  1404,  1222,  1783,  1405,  1785,  1406,
     275,   276,   277,  1408,   278,   279,   280,   281,  1410,  1411,
     282,   283,   284,   285,   286,   287,   288,   910,  1412,  1866,
     289,  1867,  1413,  1414,  1415,  1416,   290,  1417,  1418,  1419,
    1713,   499,    58,    58,  1420,  1423,  1424,  1425,  1426,    58,
    1428,   169,  1429,   922,   923,   924,  2021,  1430,  1431,   926,
     927,  1433,  1434,  1436,  1437,   275,   276,   277,  1438,   278,
     279,   280,   281,  1305,  1306,   282,   283,   284,   285,   286,
     287,   288,  1440,  1441,  1443,   289,  1317,  1445,  1446,  1447,
    1449,   290,   275,   276,   277,  1450,   278,   279,   280,   281,
    1451,  1452,   282,   283,   284,   285,   286,   287,   288,  1453,
    1454,  1455,   289,  1456,   169,  1457,  1507,   988,   290,  1458,
     989,  1459,  1460,  1463,  1461,  1462,    58,  1499,    58,  1501,
    1500,  1502,  1503,   275,   276,   277,  1714,   278,   279,   280,
     281,  1508,   344,   282,   283,   284,   285,   286,   287,   288,
    1504,  1505,  1506,   289,  1509,  1522,  1375,  1533,  1377,   290,
    1546,  1551,  1510,  1511,   500,  1384,  1512,  1513,  1514,  1515,
    1026,  1542,  1524,  1516,   275,   276,   277,   169,   278,   279,
     280,   281,  1525,  1527,   282,   283,   284,   285,   286,   287,
     288,  1526,  1528,  1048,   289,  1534,   278,   279,   280,   281,
     290,  1543,   282,   283,   284,   285,   286,   287,   288,  1549,
     179,  1545,   289,  1550,  1552,   127,   128,   129,   290,  1558,
     894,   895,  1561,   237,   896,   897,   898,   899,   900,   901,
     902,   903,  1559,  1562,   904,  1563,   131,   132,   133,   134,
    1564,   237,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   275,   276,   277,
    1718,   278,   279,   280,   281,  1565,  1566,   282,   283,   284,
     285,   286,   287,   288,  1568,  1570,  1571,   289,  1582,  1584,
    1594,  1623,  1583,   290,  1630,  1631,  1638,  1596,  1602,  1611,
     127,   128,   719,  1639,  1667,  1617,  1203,  1204,  1205,  1618,
    1537,  1621,  1668,  1645,  1648,  1651,  1652,  1657,  1654,  1656,
    1669,  1670,  1675,  1685,  1673,  1674,   237,   136,   137,   138,
     139,   140,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,  1686,   744,   745,  1687,
    1691,  1692,  1693,   275,   276,   277,  1719,   278,   279,   280,
     281,  1696,   166,   282,   283,   284,   285,   286,   287,   288,
    1699,  1702,  1712,   289,   166,  1715,  1723,  1726,  1724,   290,
    1725,  1728,  1729,  1730,  1732,  1733,  1734,  1741,  1585,  1749,
    1744,  1742,  1753,  1751,  1754,  1592,  1755,  1318,  1752,  1320,
    1597,  1322,  1765,  1600,  1756,  1766,  1768,  1769,  1603,   746,
    1772,  1773,  1774,  1775,  1777,  1784,   747,  1796,  1799,  1800,
    1613,  1806,  1807,  1808,  1810,  1811,  1812,  1816,  1821,  1347,
    1823,  1824,  1825,  1622,  1827,  1624,  1828,  1829,  1830,  1831,
    1832,  1838,  1841,  1839,  1840,  1842,  1844,  1846,  1849,   162,
    1843,  1850,  1851,  1860,   163,  1852,  1861,   164,   275,   276,
     277,  1882,   278,   279,   280,   281,   351,  1878,   282,   283,
     284,   285,   286,   287,   288,  1877,  1662,  1663,   289,  1665,
     323,  1888,  1891,  1901,   290,  1892,  1893,   275,   276,   277,
    1898,   278,   279,   280,   281,  1912,  1914,   282,   283,   284,
     285,   286,   287,   288,  1915,  1916,  1919,   289,  1923,  1924,
    1925,  1927,  1932,   290,   665,  1934,  1935,  1945,  1941,  1946,
    1949,  1951,  1958,  1957,   127,   128,   719,   748,  1956,  1959,
    1960,  1961,  1968,   749,   750,  1969,  1970,  1972,  1973,   751,
    1964,  1974,   752,  1966,  1980,  1027,  1028,   753,   754,  1981,
     755,   136,   137,   138,   139,   140,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
    1976,   744,   745,   275,   276,   277,  1979,   278,   279,   280,
     281,  1983,  1984,   282,   283,   284,   285,   286,   287,   288,
    1985,  1986,  1987,   289,  1989,  1990,  1991,  1992,  1993,   290,
    1996,  1532,  2006,  1999,  2003,  2007,  2010,  2011,  2014,  2016,
    2019,  1538,  1539,  1540,  2024,  2025,  2027,  2034,  1786,  2035,
    2037,  2039,  1230,  2040,  1788,  1231,  1388,   909,  1767,  1113,
     808,  1790,  1520,   746,  1818,   127,   128,   129,   130,  1641,
     747,    55,   698,   852,   714,   230,   337,  1798,     0,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,   134,
     135,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1588,  1589,  1590,     0,     0,     0,     0,  1595,     0,
       0,  1598,  1599,     0,     0,     0,  1601,     0,     0,  1604,
    1605,  1606,  1607,     0,     0,  1608,  1609,  1610,     0,  1612,
       0,     0,     0,  1614,  1615,     0,     0,     0,  1619,  1620,
       0,     0,     0,     0,     0,     0,   166,   166,   166,  1628,
     166,   748,     0,     0,     0,  1634,     0,   749,   750,     0,
       0,     0,     0,   751,     0,     0,   752,     0,   166,     0,
       0,   753,   754,     0,   755,  1899,     0,     0,     0,     0,
    1911,  1883,  1913,   890,   891,   892,   893,   894,   895,  1920,
       0,   896,   897,   898,   899,   900,   901,   902,   903,     0,
       0,   904,     0,     0,   127,   128,   538,   130,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   131,   132,   133,   134,   135,
    1948,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,     0,     0,     0,     0,
     232,     0,     0,     0,     0,     0,     0,  1988,     0,   162,
       0,     0,     0,     0,   163,     0,     0,   164,     0,  1743,
       0,     0,  1746,     0,     0,   165,     0,  1750,  1884,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,   128,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,  1779,   166,  1781,  1782,   131,   132,   133,   134,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,  1797,     0,     0,     0,
    1801,     0,     0,  1804,  1805,     0,     0,     0,     0,     0,
       0,     0,   166,   891,   892,   893,   894,   895,   166,     0,
     896,   897,   898,   899,   900,   901,   902,   903,     0,     0,
     904,     0,  1833,  1834,  1835,  1836,  1837,     0,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,     0,   161,     0,   290,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,   163,     0,     0,   164,     0,   166,     0,
       0,   233,     0,     0,   165,     0,     0,     0,     0,  1880,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1894,  1895,  1896,  1897,     0,     0,  1900,     0,  1902,     0,
       0,     0,     0,     0,     0,     0,  1917,  1918,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1813,   166,  1929,  1814,     0,   275,   276,   277,     0,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,     0,  1947,
       0,   290,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,   163,     0,     0,   164,     0,     0,   946,
       0,     0,     0,     0,   165,     0,  1967,    73,    74,   947,
       0,    76,     0,     0,   166,     0,  1977,   127,   128,     6,
     888,   889,   890,   891,   892,   893,   894,   895,     0,     0,
     896,   897,   898,   899,   900,   901,   902,   903,     0,  1995,
     904,     0,  1005,     0,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   583,
    2009,     0,     0,  2012,     0,   946,     0,     0,   127,   128,
     129,     0,     0,    73,    74,   947,     0,    76,     0,     0,
       0,     0,     0,     0,  2026,     0,  2028,     0,     0,   131,
     132,   133,   134,     0,  2033,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,  1885,     0,   948,     0,   949,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
       0,     0,     0,   961,     0,     0,   962,     0,     0,   963,
       0,     0,   964,     0,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
       0,     0,     0,   981,     0,     0,     0,     0,   982,     0,
       0,   983,     0,   888,   889,   890,   891,   892,   893,   894,
     895,     0,     0,   896,   897,   898,   899,   900,   901,   902,
     903,     0,   948,   904,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,     0,     0,     0,   961,
       0,     0,   962,     0,     0,   963,     0,     0,   964,     0,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,     0,     0,   984,   981,
       0,   162,   946,     0,   982,     0,   163,   983,     0,   164,
      73,    74,   947,     0,    76,     0,     0,   785,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
     284,   285,   286,   287,   288,   275,   276,   277,   289,   278,
     279,   280,   281,     0,   290,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,   946,   584,     0,     0,
       0,   290,   162,     0,    73,    74,   947,   163,    76,     0,
     164,     0,     0,     0,  1776,     0,     0,     0,   165,     0,
       0,     0,     0,     0,     0,  1886,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   275,   276,   277,     0,   278,   279,   280,   281,     0,
     946,   282,   283,   284,   285,   286,   287,   288,    73,    74,
     947,   289,    76,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   948,
       0,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,  1887,     0,     0,   961,     0,     0,   962,
       0,     0,   963,     0,     0,   964,     0,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,     0,     0,     0,   981,     0,     0,     0,
       0,   982,     0,   948,   983,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,     0,     0,     0,
     961,     0,     0,   962,     0,     0,   963,     0,     0,   964,
       0,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,     0,     0,     0,
     981,     0,     0,     0,     0,   982,     0,   948,   983,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,  1787,     0,     0,   961,     0,     0,   962,     0,     0,
     963,     0,     0,   964,     0,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,     0,     0,     0,   981,   946,     0,     0,     0,   982,
       0,     0,   983,    73,    74,   947,     0,    76,     0,     0,
       0,     0,   275,   276,   277,  1789,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,     0,     0,   290,     0,
     275,   276,   277,     0,   278,   279,   280,   281,     0,   946,
     282,   283,   284,   285,   286,   287,   288,    73,    74,   947,
     289,    76,     0,     0,     0,     0,   290,     0,     0,  1791,
       0,   512,     0,     0,     0,     0,     0,     0,  1982,     0,
     275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,   946,     0,     0,   290,     0,     0,     0,
       0,    73,    74,   947,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   948,     0,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,     0,     0,     0,   961,
       0,     0,   962,     0,     0,   963,     0,     0,   964,     0,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,     0,     0,     0,   981,
       0,     0,     0,     0,   982,     0,   948,   983,   949,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
       0,     0,     0,   961,     0,     0,   962,     0,     0,   963,
       0,     0,   964,     0,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
       0,     0,     0,   981,     0,     0,     0,     0,   982,     0,
     948,   983,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,  1792,     0,     0,   961,     0,     0,
     962,     0,     0,   963,     0,     0,   964,     0,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,     0,     0,     0,   981,   946,     0,
       0,     0,   982,     0,     0,   983,    73,    74,   947,     0,
      76,     0,     0,     0,     0,   275,   276,   277,  1793,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,     0,     0,
       0,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   946,   127,   128,   129,     0,     0,     0,     0,
      73,    74,   947,     0,    76,     0,     0,     0,     0,     0,
       0,     0,  1971,     0,   131,   132,   133,   134,     0,     0,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,   946,     0,     0,     0,
       0,     0,     0,     0,    73,    74,   947,     0,    76,  1196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   948,     0,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   958,   959,   960,     0,
       0,     0,   961,     0,     0,   962,     0,     0,   963,     0,
       0,   964,     0,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,     0,
       0,     0,   981,     0,     0,     0,     0,   982,     0,   948,
     983,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,     0,     0,     0,   961,     0,     0,   962,
       0,     0,   963,     0,     0,   964,     0,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,     0,     0,     0,   981,     0,     0,     0,
       0,   982,     0,   948,   983,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,  1978,     0,     0,
     961,     0,     0,   962,     0,     0,   963,     0,     0,   964,
       0,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,     0,     0,     0,
     981,   946,     0,     0,     0,   982,     0,   162,   983,    73,
      74,   947,   163,    76,     0,   164,     0,     0,     0,     0,
       0,  2013,   888,   889,   890,   891,   892,   893,   894,   895,
       0,     0,   896,   897,   898,   899,   900,   901,   902,   903,
       0,     0,   904,     0,     0,     0,     0,     0,     0,     0,
     127,   128,   129,  1185,     0,   946,     0,     0,     0,     0,
       0,     0,     0,    73,    74,   947,     0,    76,     0,     0,
       0,   131,   132,   133,   134,  2015,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,     0,     0,   946,
       0,     0,     0,     0,     0,     0,     0,    73,    74,   947,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1361,     0,     0,     0,     0,   948,     0,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   960,     0,     0,     0,   961,     0,     0,   962,     0,
       0,   963,     0,     0,   964,     0,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,     0,     0,     0,   981,     0,     0,     0,     0,
     982,     0,   948,   983,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,     0,     0,     0,   961,
       0,     0,   962,     0,     0,   963,     0,     0,   964,     0,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   274,     0,     0,   981,
       0,     0,     0,     0,   982,     0,   948,   983,   949,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
    2017,     0,     0,   961,   322,     0,   962,     0,     0,   963,
       0,     0,   964,     0,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
       0,   525,     0,   981,   162,     0,     0,     0,   982,   163,
       0,   983,   164,   127,   128,     6,   531,     0,     0,     0,
       0,     0,     0,     0,  2018,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   127,   128,     6,     0,   888,
     889,   890,   891,   892,   893,   894,   895,     0,  2029,   896,
     897,   898,   899,   900,   901,   902,   903,     0,     0,   904,
       0,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   602,   128,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   526,
       0,     0,   275,   276,   277,     0,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,   582,     0,   290,     0,
     275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,     0,     0,     0,   290,   275,   276,   277,
       0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
       0,     0,     0,   290,     0,     0,     0,   162,     0,     0,
       0,     6,   163,     0,     0,   164,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,     0,
       0,     0,   275,   276,   277,    13,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,     0,     0,   290,   162,
       0,     0,     0,   519,   163,     0,     0,   164,    14,     0,
       0,   613,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    19,     0,     0,     0,     0,
       0,   162,     0,     0,     0,     0,   163,    20,     0,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   614,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,   275,   276,   277,     0,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,   615,   289,     0,     0,     0,     0,
       0,   290,   275,   276,   277,     0,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,    22,   616,    23,     0,     0,   290,     0,
       0,     0,     0,     0,     0,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   275,   276,   277,
       0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
     275,   276,   277,   290,   278,   279,   280,   281,   520,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,   275,   276,   277,   290,   278,   279,   280,
     281,   521,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,   275,   276,   277,   290,
     278,   279,   280,   281,   795,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,   275,
     276,   277,   290,   278,   279,   280,   281,   796,     0,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,   289,
       0,     0,   275,   276,   277,   290,   278,   279,   280,   281,
    1042,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,   275,   276,   277,   290,   278,
     279,   280,   281,  1043,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,   275,   276,
     277,   290,   278,   279,   280,   281,  1044,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,   275,   276,   277,   290,   278,   279,   280,   281,  1175,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,   275,   276,   277,   290,   278,   279,
     280,   281,  1367,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,   275,   276,   277,
     290,   278,   279,   280,   281,  1368,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
     275,   276,   277,   290,   278,   279,   280,   281,  1369,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,   275,   276,   277,   290,   278,   279,   280,
     281,  1464,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,   275,   276,   277,   290,
     278,   279,   280,   281,  1472,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,   275,
     276,   277,   290,   278,   279,   280,   281,  1481,     0,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,   289,
       0,     0,   275,   276,   277,   290,   278,   279,   280,   281,
    1653,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,   275,   276,   277,   290,   278,
     279,   280,   281,  1688,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,   275,   276,
     277,   290,   278,   279,   280,   281,  1689,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,   275,   276,   277,   290,   278,   279,   280,   281,  1690,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,   275,   276,   277,   290,   278,   279,
     280,   281,  1694,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,   275,   276,   277,
     290,   278,   279,   280,   281,  1700,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
     275,   276,   277,   290,   278,   279,   280,   281,  1707,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,   275,   276,   277,   290,   278,   279,   280,
     281,  1727,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,   275,   276,   277,   290,
     278,   279,   280,   281,  1847,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,   275,
     276,   277,   290,   278,   279,   280,   281,  1848,     0,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,   289,
       0,     0,   275,   276,   277,   290,   278,   279,   280,   281,
    1856,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,   275,   276,   277,   290,   278,
     279,   280,   281,  1862,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,   275,   276,
     277,   290,   278,   279,   280,   281,  1863,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,   275,   276,   277,   290,   278,   279,   280,   281,  1940,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,   275,   276,   277,   290,   278,   279,
     280,   281,  1942,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,   275,   276,   277,
     290,   278,   279,   280,   281,  1965,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
     275,   276,   277,   290,   278,   279,   280,   281,  2020,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,   275,   276,   277,   290,   278,   279,   280,
     281,  2022,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,   275,   276,   277,   290,
     278,   279,   280,   281,  2030,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,     0,
       0,     0,   290,   275,   276,   277,   350,   278,   279,   280,
     281,     0,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,     0,     0,     0,   290,
     275,   276,   277,   801,   278,   279,   280,   281,     0,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,     0,     0,     0,   290,   275,   276,   277,
    1174,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
       0,     0,     0,   290,   275,   276,   277,  1206,   278,   279,
     280,   281,     0,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,     0,     0,     0,
     290,   275,   276,   277,  1523,   278,   279,   280,   281,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,     0,     0,     0,   290,   275,   276,
     277,  1658,   278,   279,   280,   281,     0,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,     0,     0,     0,   290,   275,   276,   277,  1659,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,     0,     0,
       0,   290,   275,   276,   277,  1660,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,     0,     0,   290,   275,
     276,   277,  1819,   278,   279,   280,   281,     0,     0,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,   289,
       0,     0,     0,     0,     0,   290,   275,   276,   277,  1822,
     278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,     0,
       0,     0,   290,   275,   276,   277,  1826,   278,   279,   280,
     281,     0,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,     0,     0,     0,   290,
     275,   276,   277,  1931,   278,   279,   280,   281,     0,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,     0,     0,     0,   290,   275,   276,   277,
    2008,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
       0,     0,     0,   290,   275,   276,   277,  2036,   278,   279,
     280,   281,     0,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,   379,   275,   276,   277,
     290,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
       0,   502,     0,   290,   275,   276,   277,     0,   278,   279,
     280,   281,     0,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,     0,   503,     0,
     290,   275,   276,   277,     0,   278,   279,   280,   281,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,     0,   504,     0,   290,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,     0,   505,     0,   290,   275,   276,   277,     0,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,     0,   506,
       0,   290,   275,   276,   277,     0,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,   507,     0,   290,   275,
     276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,   289,
       0,     0,     0,   508,     0,   290,   275,   276,   277,     0,
     278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,     0,
     509,     0,   290,   275,   276,   277,     0,   278,   279,   280,
     281,     0,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,     0,   510,     0,   290,
     275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,     0,   511,     0,   290,   275,   276,   277,
       0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
       0,   513,     0,   290,   275,   276,   277,     0,   278,   279,
     280,   281,     0,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,     0,   514,     0,
     290,   275,   276,   277,     0,   278,   279,   280,   281,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,     0,   515,     0,   290,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,     0,   516,     0,   290,   275,   276,   277,     0,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,     0,   517,
       0,   290,   275,   276,   277,     0,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,   518,     0,   290,   275,
     276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,   289,
       0,     0,     0,   528,     0,   290,   275,   276,   277,     0,
     278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,     0,
     660,     0,   290,   275,   276,   277,     0,   278,   279,   280,
     281,     0,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,     0,   797,     0,   290,
     275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,     0,   798,     0,   290,   275,   276,   277,
       0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
       0,   799,     0,   290,   275,   276,   277,     0,   278,   279,
     280,   281,     0,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,     0,   800,     0,
     290,   275,   276,   277,     0,   278,   279,   280,   281,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,   855,   275,   276,   277,   290,   278,   279,
     280,   281,     0,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,     0,   863,     0,
     290,   275,   276,   277,     0,   278,   279,   280,   281,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,     0,  1046,     0,   290,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,     0,  1047,     0,   290,   275,   276,   277,     0,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,     0,  1731,
       0,   290,   275,   276,   277,     0,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,  1845,     0,   290,   275,
     276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
     283,   284,   285,   286,   287,   288,     0,     0,     0,   289,
       0,     0,     0,  1859,     0,   290,   275,   276,   277,     0,
     278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
     286,   287,   288,     0,     0,     0,   289,     0,     0,     0,
    1937,     0,   290,   275,   276,   277,     0,   278,   279,   280,
     281,     0,     0,   282,   283,   284,   285,   286,   287,   288,
       0,     0,     0,   289,     0,     0,     0,  1938,     0,   290,
     275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
     282,   283,   284,   285,   286,   287,   288,     0,     0,     0,
     289,     0,     0,     0,  1939,     0,   290,   275,   276,   277,
       0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,   289,     0,     0,
       0,  1944,     0,   290,   275,   276,   277,     0,   278,   279,
     280,   281,     0,     0,   282,   283,   284,   285,   286,   287,
     288,     0,     0,     0,   289,     0,     0,     0,  1954,     0,
     290,   275,   276,   277,     0,   278,   279,   280,   281,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
       0,   289,     0,     0,     0,  1955,     0,   290,   275,   276,
     277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
     284,   285,   286,   287,   288,     0,     0,     0,   289,     0,
       0,     0,  1997,     0,   290,   275,   276,   277,     0,   278,
     279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,   289,     0,     0,     0,  2001,
       0,   290,   275,   276,   277,     0,   278,   279,   280,   281,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,     0,   289,     0,     0,     0,  2032,     0,   290,   888,
     889,   890,   891,   892,   893,   894,   895,     0,     0,   896,
     897,   898,   899,   900,   901,   902,   903,     0,     0,   904,
       0,     0,     0,  1530
};

static const short yycheck[] =
{
       5,    84,   719,   105,   106,   574,   333,    12,   997,  1114,
     337,   545,   434,  1002,  1003,   632,    84,   174,    23,   553,
       3,   491,     5,     3,     3,     5,     5,     5,    33,   563,
       5,     0,     3,   567,     5,     5,   606,   571,     5,   314,
       5,    26,     5,     5,     5,     5,   613,   614,     5,     7,
     325,   326,   327,   620,    11,    12,    13,    14,    15,   334,
      17,     5,     5,    69,    23,     5,   488,   749,   750,   751,
     752,     7,    29,     5,    23,    81,     5,     5,   263,     5,
     600,   109,   267,   240,   112,   113,   114,   115,   116,   117,
       3,     5,     7,    64,    69,     5,     5,   267,     5,     6,
     105,   106,     9,    10,   109,   256,    69,   112,   113,   114,
     115,   116,   117,   118,   265,   537,     0,   122,   123,   124,
      18,    64,   233,    96,   109,    98,    69,   112,   113,   114,
     115,   116,   117,   106,   255,   246,    65,   255,   257,  1583,
      99,    69,   258,   300,   246,     7,   257,   117,   267,   265,
      99,   868,  1596,   870,   182,    69,   483,    23,  1602,    69,
     117,   118,   119,   120,    23,   267,   257,  1611,    13,    14,
      15,    75,    17,  1617,  1618,    86,    23,   182,    13,    14,
      15,   107,    17,   263,   341,    96,   256,    98,   257,   871,
      88,   117,    96,   257,   764,   265,   298,   182,   267,   263,
     254,  1190,   260,   267,   262,   267,   260,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
     902,   903,   904,   263,   255,   907,   257,   256,   233,   749,
     750,   751,   752,    99,    23,   133,   265,   263,   264,     5,
      99,   246,   140,   141,   256,    11,    12,    13,    14,    15,
     263,    17,    99,   265,   258,    13,    14,    15,   264,    17,
     257,   265,   267,    29,     5,   163,   263,   247,   166,   167,
      11,    12,    13,    14,    15,  1264,    17,    13,    14,    15,
     263,    17,     3,   266,     5,   260,   266,   266,    29,   267,
     255,   264,   263,   298,   264,   266,   263,   260,   381,   263,
     263,   263,   263,   263,     6,   263,     5,   264,   257,   314,
      99,   468,    11,    12,    13,    14,    15,   260,    17,   263,
     325,   326,   327,   263,   407,   232,  1008,   263,     5,   334,
      29,   263,   317,   608,    11,    12,    13,    14,    15,   407,
      17,   263,   257,    18,   258,   767,   260,   260,   257,   257,
     260,   871,    29,   264,   456,   258,   407,    13,    14,    15,
     264,    17,   265,    78,    79,   231,   264,  1356,    67,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,     5,    82,   907,   263,   264,
      86,    11,    12,    13,    14,    15,     5,    17,   257,   263,
      96,   116,    11,    12,    13,    14,    15,   412,    17,    29,
     257,    86,    18,    88,   263,   130,   258,   263,   263,   264,
      29,   426,   143,   265,    99,     5,     6,   263,   263,   264,
     587,   436,   589,   590,   591,    82,   441,   112,   233,   766,
      96,    88,   447,   263,   449,   450,    96,  1891,   453,    96,
     455,   456,     5,   264,   265,   130,     5,  1901,    11,    12,
      13,    14,    15,     5,    17,    82,  1083,  1084,   257,    11,
      12,    13,    14,    15,   258,    17,    29,   133,     5,    96,
       7,   265,    88,    86,   140,   536,   491,    29,  1008,   540,
     140,   212,    19,    20,    21,   597,     7,   263,   264,     7,
      13,    14,    15,  1185,    17,   263,   264,   110,    98,    36,
      13,    14,    15,  1195,    17,   617,   264,   265,   108,   109,
     110,    82,   263,   264,     7,    86,    87,   263,   264,    86,
     613,   614,  1976,     7,   140,  1979,     7,   620,   865,    96,
     190,  1108,   192,     5,     6,  1989,  1990,     9,    10,   264,
     248,   249,   250,  1120,   258,   112,   254,   163,   164,   116,
       8,   265,   260,   257,   214,   264,     7,  1037,   264,   263,
    2014,   263,    96,    86,   258,   267,    68,   258,  1567,     7,
    1569,   265,   140,    96,   265,   143,   263,   264,   112,   264,
     258,     7,   597,     7,    86,   600,     7,   265,   156,   157,
     158,   606,   653,   608,    96,    97,   264,   265,   264,   258,
     134,     7,   617,   105,   264,   107,   265,   264,   264,   265,
     258,   134,   135,   136,   137,   138,   139,   265,   785,   191,
    1199,   246,   247,   248,   249,   792,   140,   263,     7,   143,
       7,   267,   258,   263,   264,   257,     7,   264,     7,   265,
     265,   263,   156,   157,   263,   264,   160,   161,   264,   687,
     263,   264,   258,  1232,   188,  1185,   694,   194,     7,   265,
     772,   773,   258,   258,   264,  1195,     7,   662,     7,   265,
     265,     7,   687,    89,    90,    91,    92,    93,    94,   694,
     193,   194,   195,   196,   257,   263,   265,   266,  1218,   267,
    1234,   686,   687,   264,   255,   690,   264,   264,   258,   694,
     263,   264,  1817,  1818,   255,   265,   263,   257,   703,   257,
     267,   263,   264,   234,   235,   236,  1295,   238,   239,   240,
     241,   263,   264,   244,   245,   246,   247,   248,   249,   250,
     264,   258,   257,   254,   749,   750,   751,   752,   265,   260,
     755,   264,   264,   263,     3,     4,     5,   267,   263,   764,
     264,   246,   247,   248,   249,   250,   251,   772,   773,   254,
     232,     6,   264,   263,   264,  1050,  1051,  1052,  1053,   241,
     242,    30,    31,    32,    33,    34,   234,   235,   236,  1064,
     238,   239,   240,   241,   263,   264,   244,   245,   246,   247,
     248,   249,   250,   263,   264,   256,   254,   263,   264,   130,
    1085,  1086,   260,   263,   264,     7,   264,   264,   265,   264,
     265,   257,    96,   808,    98,    99,   100,   101,   102,   103,
     104,     7,  1107,     7,   991,   992,   993,   994,   264,   265,
     264,   265,   257,    69,    70,    71,    72,    73,    74,    75,
      76,    77,  1841,  1535,    80,  1572,  1573,  1574,   264,   257,
      86,   248,   249,   250,   251,   257,   871,   254,   246,   247,
     248,   249,   250,    99,  1031,  1150,   254,   257,   264,   265,
     257,   886,   260,   257,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
    1370,   257,   907,   234,   235,   236,   257,   238,   239,   240,
     241,   264,   265,   244,   245,   246,   247,   248,   249,   250,
     264,   265,    81,   254,    83,    84,    85,   264,   265,   260,
     264,   265,   264,   265,   257,  1502,  1503,  1504,   257,  1506,
     257,   946,   122,   123,   124,   125,   126,   127,   128,   257,
     130,   264,   265,    81,     7,    83,   257,  1524,    86,  1381,
     945,   264,   265,   122,   123,   124,   125,   126,   127,   128,
     265,   130,   131,     7,  1963,   263,   264,   264,   265,  1401,
     264,   265,   264,   265,     5,  1407,   257,  1409,   264,   265,
     264,   264,   265,   257,   122,   123,   124,   125,   126,   127,
     128,  1276,   130,  1008,   264,   265,   263,  1282,   264,   265,
     264,   265,   263,   264,   257,  1535,   257,  1119,   257,  1121,
    1442,     7,   264,   265,  1544,  1108,  1448,   257,    84,    85,
     257,  1036,  1037,   264,   265,   264,   265,  1120,   264,   623,
     624,   257,   257,   257,   420,  1050,  1051,  1052,  1053,  1151,
     257,   257,     7,   257,  1059,   257,   265,   257,   263,  1064,
       5,     5,   233,   257,   120,   121,   263,   263,   263,     8,
     126,  1076,   263,   263,   263,   258,     7,   265,   264,  1354,
    1085,  1086,   233,   265,   264,     5,   258,   233,  1363,   465,
    1095,    11,    12,    13,    14,    15,   258,    17,  1103,  1104,
     258,   233,  1107,     5,     5,   264,   162,   163,   164,    29,
     263,   263,  1117,  1118,  1119,     5,  1121,  1122,  1123,  1686,
     263,  1688,  1127,     5,     5,  1842,   263,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,  1139,  1140,   264,   263,   263,   233,
     258,     5,     5,    63,   263,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,   263,  1167,     5,   263,     5,  1171,   263,   263,     5,
     208,  1738,   263,   263,   263,     7,   263,  1744,   258,     5,
    1185,   257,   558,   257,   257,   264,     7,  1462,   244,   245,
    1195,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   130,     5,     7,   264,     7,     7,     7,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   263,     7,     7,     7,     7,  1514,
       7,   297,     7,   233,     7,     5,     7,  1814,   234,   235,
     236,     7,   238,   239,   240,   241,     7,   263,   244,   245,
     246,   247,   248,   249,   250,   321,   322,   264,   254,     7,
      81,  1276,    83,     7,   260,    86,     7,  1282,     7,   234,
     235,   236,     7,   238,   239,   240,   241,     7,     5,   244,
     245,   246,   247,   248,   249,   250,   265,     3,     7,   254,
    1575,     7,     5,     7,   680,   260,     8,   263,     5,     5,
    1877,   122,   123,   124,   125,   126,   127,   128,     5,   130,
     263,   263,   263,   263,     3,   381,   263,    81,   258,    83,
      84,   707,    86,     7,     7,     5,     7,   233,  1343,  1344,
       7,    81,    96,    83,    84,    85,   402,   260,     7,  1354,
       7,   407,     7,   409,  1888,     7,    62,  1827,  1363,   113,
     114,   115,    68,     7,     7,  1370,     7,   264,  1525,   263,
    1527,  1528,   265,  1940,   258,    81,   130,    83,   258,     7,
     257,   257,   122,   123,   124,   125,   126,   127,   128,    95,
     130,   131,   257,    99,   770,   257,   257,     5,     3,     5,
     257,   257,   234,   235,   236,   111,   238,   239,   240,   241,
       6,   787,   244,   245,   246,   247,   248,   249,   250,  1502,
    1503,  1504,   254,  1506,     7,   263,   132,    66,   260,     7,
     486,   265,   186,   263,   263,   263,   263,   257,   263,   263,
     263,  1524,     5,   499,   500,   263,   263,     5,   257,   257,
    1455,  1456,   241,   264,   254,  1460,   512,  1462,   264,   263,
       3,   258,   265,   519,   520,   521,     7,   263,  2037,   525,
     526,   257,   257,   257,   257,   257,   257,   257,   534,   257,
     257,   187,   257,   189,   257,   264,  1491,   263,   236,   257,
     238,   239,   240,   241,   258,   257,   244,   245,   246,   247,
     248,   249,   250,   257,  1509,  1510,   254,  1512,  1513,  1514,
     264,   257,   260,   257,   257,   257,   257,     7,     7,   258,
     257,   257,   257,     5,   264,   258,   582,   583,   240,   241,
    1535,   263,   244,   245,   246,   247,   248,   249,   250,   595,
     263,   257,   254,   257,   263,     7,   257,   257,   260,   257,
     263,   258,   257,     5,  1559,     5,     5,   613,   614,     5,
       5,     5,   618,   619,   620,   621,     5,     5,   263,   263,
    1575,   627,   948,   629,  1579,     5,  1581,     5,     5,     5,
       5,     5,   234,   235,   236,     5,   238,   239,   240,   241,
       3,     3,   244,   245,   246,   247,   248,   249,   250,     5,
       7,     5,   254,  1686,     7,  1688,   257,   257,   260,   263,
       7,   264,   258,   260,   990,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   257,  1727,  1728,     7,   265,   263,
     265,     7,  1734,  1908,   234,   235,   236,     7,   238,   239,
     240,   241,   265,     7,   244,   245,   246,   247,   248,   249,
     250,  1926,     7,     7,   254,  1738,     7,     7,     7,     7,
     260,  1744,  1038,     7,   264,  1041,     7,  1824,     7,     7,
       7,     7,     7,     7,     7,     7,   263,     5,  1054,  1055,
    1056,  1057,     7,     7,     7,  1061,  1691,     7,  1693,     7,
     234,   235,   236,     7,   238,   239,   240,   241,     7,     7,
     244,   245,   246,   247,   248,   249,   250,   763,     7,  1811,
     254,  1813,     7,     7,     7,     7,   260,     7,     7,     7,
       7,   265,  1727,  1728,     7,     7,     7,     7,     7,  1734,
       5,  1814,     5,   789,   790,   791,  2011,     5,   257,   795,
     796,     7,   257,   257,     5,   234,   235,   236,     5,   238,
     239,   240,   241,  1129,  1130,   244,   245,   246,   247,   248,
     249,   250,     7,     7,     7,   254,  1142,     7,     7,     7,
       7,   260,   234,   235,   236,     7,   238,   239,   240,   241,
     258,   258,   244,   245,   246,   247,   248,   249,   250,   258,
     265,   265,   254,   265,  1877,   265,   264,   853,   260,   265,
     856,   265,   265,   258,   265,   265,  1811,   265,  1813,   265,
     258,   265,   265,   234,   235,   236,     7,   238,   239,   240,
     241,   264,  1827,   244,   245,   246,   247,   248,   249,   250,
     265,   265,   265,   254,   265,     7,  1212,     3,  1214,   260,
       7,   112,   265,   265,   265,  1221,   265,   265,   265,   265,
     906,   265,   263,   258,   234,   235,   236,  1940,   238,   239,
     240,   241,   263,   263,   244,   245,   246,   247,   248,   249,
     250,   264,   263,   929,   254,   258,   238,   239,   240,   241,
     260,   265,   244,   245,   246,   247,   248,   249,   250,     7,
     265,   265,   254,     7,     7,     3,     4,     5,   260,   264,
     240,   241,   258,  1908,   244,   245,   246,   247,   248,   249,
     250,   251,   257,     7,   254,     7,    24,    25,    26,    27,
       7,  1926,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   234,   235,   236,
       7,   238,   239,   240,   241,     3,     7,   244,   245,   246,
     247,   248,   249,   250,     7,     7,     7,   254,     7,     7,
       7,     7,   263,   260,     7,     7,     5,   263,   263,   263,
       3,     4,     5,     7,     5,   263,  1042,  1043,  1044,   263,
    1366,   263,     5,   263,   263,   258,   258,   264,   258,   258,
       5,     5,   258,   258,     7,     7,  2011,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,   265,    60,    61,   265,
     265,   258,   265,   234,   235,   236,     7,   238,   239,   240,
     241,     7,  1108,   244,   245,   246,   247,   248,   249,   250,
       7,     7,     7,   254,  1120,     7,   265,   265,   258,   260,
     258,   265,   265,   265,   258,   258,   265,   263,  1454,   258,
     265,   263,   258,   264,   258,  1461,   264,  1143,   265,  1145,
    1466,  1147,     7,  1469,   258,   264,   258,     7,  1474,   122,
       7,     7,     7,     7,     7,     7,   129,     7,     7,     7,
    1486,     7,     7,     7,     7,   135,     7,     7,   264,  1175,
     264,   263,   263,  1499,   260,  1501,     7,     7,     7,     7,
       5,   111,   265,     7,     7,   265,   258,   265,   265,   247,
      16,   258,   265,   258,   252,   265,   258,   255,   234,   235,
     236,     7,   238,   239,   240,   241,   264,   263,   244,   245,
     246,   247,   248,   249,   250,   265,  1542,  1543,   254,  1545,
     256,     5,   263,   263,   260,     7,     7,   234,   235,   236,
       7,   238,   239,   240,   241,     7,     7,   244,   245,   246,
     247,   248,   249,   250,     7,     7,     7,   254,     5,     5,
       5,   257,   265,   260,   263,   258,   258,     5,   258,     5,
       5,   258,     4,     7,     3,     4,     5,   240,   264,     7,
       7,     7,     7,   246,   247,     7,     7,     7,     7,   252,
     264,     7,   255,   264,     7,   258,   259,   260,   261,     7,
     263,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
     263,    60,    61,   234,   235,   236,   263,   238,   239,   240,
     241,     7,     7,   244,   245,   246,   247,   248,   249,   250,
       7,     7,     7,   254,   263,   263,     7,   264,     7,   260,
     263,  1357,     7,   265,   258,   258,     7,    62,   263,     7,
       7,  1367,  1368,  1369,     7,     7,     7,   132,  1694,     7,
       5,     7,  1074,   264,  1700,  1075,  1225,   759,  1671,   942,
     661,  1707,  1344,   122,  1742,     3,     4,     5,     6,  1520,
     129,     9,   577,   703,   594,   123,   230,  1723,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1457,  1458,  1459,    -1,    -1,    -1,    -1,  1464,    -1,
      -1,  1467,  1468,    -1,    -1,    -1,  1472,    -1,    -1,  1475,
    1476,  1477,  1478,    -1,    -1,  1481,  1482,  1483,    -1,  1485,
      -1,    -1,    -1,  1489,  1490,    -1,    -1,    -1,  1494,  1495,
      -1,    -1,    -1,    -1,    -1,    -1,  1502,  1503,  1504,  1505,
    1506,   240,    -1,    -1,    -1,  1511,    -1,   246,   247,    -1,
      -1,    -1,    -1,   252,    -1,    -1,   255,    -1,  1524,    -1,
      -1,   260,   261,    -1,   263,  1851,    -1,    -1,    -1,    -1,
    1856,     7,  1858,   236,   237,   238,   239,   240,   241,  1865,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,   254,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
    1906,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,  1953,    -1,   247,
      -1,    -1,    -1,    -1,   252,    -1,    -1,   255,    -1,  1645,
      -1,    -1,  1648,    -1,    -1,   263,    -1,  1653,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1686,  1687,  1688,  1689,  1690,    24,    25,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,  1722,    -1,    -1,    -1,
    1726,    -1,    -1,  1729,  1730,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1738,   237,   238,   239,   240,   241,  1744,    -1,
     244,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
     254,    -1,  1758,  1759,  1760,  1761,  1762,    -1,   234,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   231,    -1,   260,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   252,    -1,    -1,   255,    -1,  1814,    -1,
      -1,   260,    -1,    -1,   263,    -1,    -1,    -1,    -1,  1825,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1846,  1847,  1848,  1849,    -1,    -1,  1852,    -1,  1854,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1862,  1863,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,  1877,  1878,   212,    -1,   234,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,  1905,
      -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   252,    -1,    -1,   255,    -1,    -1,     5,
      -1,    -1,    -1,    -1,   263,    -1,  1932,    13,    14,    15,
      -1,    17,    -1,    -1,  1940,    -1,  1942,     3,     4,     5,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,   251,    -1,  1965,
     254,    -1,   256,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     8,
    1996,    -1,    -1,  1999,    -1,     5,    -1,    -1,     3,     4,
       5,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,  2020,    -1,  2022,    -1,    -1,    24,
      25,    26,    27,    -1,  2030,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,     7,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,
      -1,   197,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
     251,    -1,   142,   254,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,    -1,   264,   189,
      -1,   247,     5,    -1,   194,    -1,   252,   197,    -1,   255,
      13,    14,    15,    -1,    17,    -1,    -1,   263,   234,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,   234,   235,   236,   254,   238,
     239,   240,   241,    -1,   260,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,     5,   256,    -1,    -1,
      -1,   260,   247,    -1,    13,    14,    15,   252,    17,    -1,
     255,    -1,    -1,    -1,   264,    -1,    -1,    -1,   263,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,   235,   236,    -1,   238,   239,   240,   241,    -1,
       5,   244,   245,   246,   247,   248,   249,   250,    13,    14,
      15,   254,    17,    -1,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,     7,    -1,    -1,   159,    -1,    -1,   162,
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
     155,   264,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,   194,
      -1,    -1,   197,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,   234,   235,   236,   264,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
     234,   235,   236,    -1,   238,   239,   240,   241,    -1,     5,
     244,   245,   246,   247,   248,   249,   250,    13,    14,    15,
     254,    17,    -1,    -1,    -1,    -1,   260,    -1,    -1,   264,
      -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
     234,   235,   236,    -1,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,     5,    -1,    -1,   260,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     152,   153,   154,   155,   264,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,   189,     5,    -1,
      -1,    -1,   194,    -1,    -1,   197,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,   234,   235,   236,   264,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     3,     4,     5,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   264,    -1,    24,    25,    26,    27,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     149,   150,   151,   152,   153,   154,   155,   264,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,     5,    -1,    -1,    -1,   194,    -1,   247,   197,    13,
      14,    15,   252,    17,    -1,   255,    -1,    -1,    -1,    -1,
      -1,   264,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,   265,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    24,    25,    26,    27,   264,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
     194,    -1,   142,   197,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,     8,    -1,    -1,   189,
      -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     264,    -1,    -1,   159,     8,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,     8,    -1,   189,   247,    -1,    -1,    -1,   194,   252,
      -1,   197,   255,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     3,     4,     5,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   264,   244,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,   254,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     8,
      -1,    -1,   234,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,     8,    -1,   260,    -1,
     234,   235,   236,    -1,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,   260,   234,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,    -1,    -1,   247,    -1,    -1,
      -1,     5,   252,    -1,    -1,   255,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,   234,   235,   236,    29,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,   247,
      -1,    -1,    -1,   265,   252,    -1,    -1,   255,    62,    -1,
      -1,    75,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,   252,   111,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,   234,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,   168,   254,    -1,    -1,    -1,    -1,
      -1,   260,   234,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,   187,   198,   189,    -1,    -1,   260,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   234,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
     234,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,   234,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,   234,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,   234,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,   234,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,   234,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,   234,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,   234,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,   234,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,   234,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
     234,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,   234,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,   234,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,   234,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,   234,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,   234,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,   234,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,   234,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,   234,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,   234,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
     234,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,   234,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,   234,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,   234,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,   234,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,   234,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,   234,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,   234,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,   234,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,   234,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
     234,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,   234,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,   234,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,   260,   234,   235,   236,   264,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,
     234,   235,   236,   264,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,   260,   234,   235,   236,
     264,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,   234,   235,   236,   264,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     260,   234,   235,   236,   264,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,   234,   235,
     236,   264,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,   234,   235,   236,   264,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,   234,   235,   236,   264,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,   234,
     235,   236,   264,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   260,   234,   235,   236,   264,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,   260,   234,   235,   236,   264,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,
     234,   235,   236,   264,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,   260,   234,   235,   236,
     264,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,   234,   235,   236,   264,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,   256,   234,   235,   236,
     260,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   234,   235,   236,    -1,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
     260,   234,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   258,    -1,   260,   234,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   234,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,    -1,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     258,    -1,   260,   234,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     234,   235,   236,    -1,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   234,   235,   236,    -1,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
     260,   234,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   258,    -1,   260,   234,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   234,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,    -1,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     258,    -1,   260,   234,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     234,   235,   236,    -1,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   234,   235,   236,    -1,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
     260,   234,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,   256,   234,   235,   236,   260,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
     260,   234,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   258,    -1,   260,   234,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   234,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,    -1,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     258,    -1,   260,   234,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     234,   235,   236,    -1,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   234,   235,   236,    -1,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
     260,   234,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   258,    -1,   260,   234,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   234,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,   254,
      -1,    -1,    -1,   258
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   269,   270,     0,   271,   272,     5,    11,    12,    19,
      20,    21,    22,    29,    62,    68,    81,    83,    95,    99,
     111,   132,   187,   189,   273,   274,   275,   437,   451,   459,
     460,   267,   255,   255,     5,     7,    19,    20,    21,    36,
     194,     7,     3,     7,    62,    68,    81,    83,    95,    99,
     111,   132,   187,   189,     6,     9,    10,   232,   460,   461,
     462,   257,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   460,    13,    14,    15,    17,   193,   194,   195,
     196,   441,   450,   267,   233,   263,     6,   460,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   257,   255,   452,   276,   334,
     319,   325,   341,   299,   364,   391,   421,   433,   191,     5,
     255,   255,   257,   257,   257,   257,   263,     3,     4,     5,
       6,    24,    25,    26,    27,    28,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   231,   247,   252,   255,   263,   454,   455,   456,   458,
     460,   462,   454,   256,   265,   256,   461,   461,   258,   265,
     295,   264,   277,   263,   264,   335,   450,   451,   263,   264,
     263,   264,   263,   264,   342,   450,   451,     5,    67,   264,
     300,   450,   451,   263,   264,   365,   450,   451,   263,   264,
     392,   450,   451,   263,   264,   422,   450,   451,   263,   264,
     434,   450,   451,   460,   130,   454,   454,   443,   460,     6,
     443,     5,    69,   260,   283,   286,   287,   460,     6,   454,
     263,     7,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   454,   454,
     454,   454,   457,   458,     8,   234,   235,   236,   238,   239,
     240,   241,   244,   245,   246,   247,   248,   249,   250,   254,
     260,     7,     7,   264,     7,   457,     7,   257,   265,   256,
     265,     7,     5,     5,    63,   278,   280,   450,   451,   460,
     336,   320,   326,   343,   257,   257,   366,   393,   423,   435,
     438,   263,     8,   256,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   446,   257,   445,   265,   446,     3,     5,
     263,   266,   291,   293,   460,   442,   257,   263,   297,   447,
     264,   264,   457,     5,     5,   454,   454,   461,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   461,   256,
     264,   265,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   256,   454,
     461,   457,   233,   263,   296,   298,   257,   233,   246,   257,
      82,    86,    96,   264,   337,    82,    96,   264,   321,    82,
      88,    96,   264,   327,    68,    86,    96,    97,   105,   107,
     264,   344,   258,   286,   301,    86,    96,   112,   116,   264,
     367,    96,   133,   140,   264,   394,   450,    96,   112,   134,
     188,   264,   424,    96,   140,   190,   192,   214,   264,   436,
     263,   454,   454,   286,   286,   263,   286,   263,   263,   263,
     263,   263,   447,   286,   246,   247,   248,   249,   265,   444,
      23,    99,   231,   302,   303,   447,     8,   263,   292,   457,
     265,   284,   264,   258,   265,   448,   264,   258,   265,   265,
     265,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   265,   258,   258,   258,   258,   258,   258,   265,
     265,   265,   258,   454,   458,     8,     8,     7,   258,   258,
     256,     6,   454,     3,   260,   233,   233,   294,     5,   283,
     233,   454,     5,   263,     5,   460,   263,     5,   263,   302,
       5,   263,     5,     5,   460,   263,   263,   263,   233,   258,
     258,   295,     5,     5,   460,   263,   263,     5,   460,   263,
     395,     5,   460,   263,   460,   460,   460,   263,   460,   461,
       5,   439,     8,     8,   256,   208,   302,   263,   457,   263,
     263,   263,   258,   258,     5,   257,   257,   257,   447,   306,
     307,   258,     3,   454,   264,   264,   295,   266,   130,    64,
     288,   291,     7,    75,   136,   168,   198,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,     5,
     454,   454,     7,   454,   454,   454,   454,     7,   454,   454,
       7,   264,   454,   279,     5,   283,   258,   295,     7,   283,
     258,   263,   338,     7,     7,   263,   296,   322,     7,   328,
       7,     7,   361,     7,   296,     7,   345,   351,   358,   302,
     233,     7,     5,     7,   296,     7,   368,   375,   296,     7,
     396,   263,   296,     7,   425,   297,     7,     7,   439,     7,
       7,     7,   264,   440,   454,   454,     5,   265,   457,   264,
     457,   457,   457,     7,   445,   454,     5,   461,   258,     5,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    60,    61,   122,   129,   240,   246,
     247,   252,   255,   260,   261,   263,   308,   311,   390,   453,
     455,   460,     7,     8,   247,   293,   286,   285,   456,   456,
     263,     5,   241,   242,   461,   454,   454,   456,   454,     5,
     449,   449,   449,   454,     5,   263,   454,   263,   304,   263,
     263,   263,   263,     3,   258,   265,   265,   258,   258,   258,
     258,   264,   283,     7,     7,     5,     7,   233,   338,   263,
     264,   450,     7,   263,   264,   263,   264,   263,   264,     7,
     263,   264,   263,   264,   263,   264,     7,   302,     7,   263,
     264,   450,   117,   118,   119,   120,   264,   376,   450,   451,
       7,   263,   264,   450,   403,     7,   263,   264,   450,   451,
       7,   264,   441,     8,   264,   256,   263,   302,   264,   264,
     264,   264,   265,   258,   258,   258,     7,   390,   257,   315,
     257,   257,   257,   257,   312,   313,     5,   308,   308,   308,
     308,     3,     3,     5,   143,   212,     5,   460,   234,   235,
     236,   237,   238,   239,   240,   241,   244,   245,   246,   247,
     248,   249,   250,   251,   254,   260,   262,   257,   316,   316,
     454,   293,   447,   289,   295,   302,   461,   461,     6,   457,
     302,   305,   454,   454,   454,   457,   454,   454,     7,   263,
      66,   264,   339,   323,   329,   362,   346,   352,   359,     7,
     369,   263,   263,   263,   263,   397,     5,    15,   142,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   159,   162,   165,   168,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   189,   194,   197,   264,   404,   450,   426,   454,   454,
     265,   263,   263,   263,   263,   447,   390,   257,   390,   308,
       5,     5,   257,   257,   241,   256,   460,   264,   309,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,     3,   454,   258,   259,   308,
     317,   263,   318,   258,   258,     5,    65,   290,   265,   264,
     264,   265,   265,   265,   265,   264,   258,   258,   454,   281,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    80,
      86,    99,   264,   340,    69,    81,   264,   324,    82,    86,
      87,   264,   330,    98,   108,   109,   110,   264,   363,    96,
      98,    99,   100,   101,   102,   103,   104,   264,   347,    96,
      98,   106,   264,   353,    86,    96,    98,   264,   360,    81,
      83,    84,    86,    96,   113,   114,   115,   130,   186,   257,
     264,   370,   381,   381,   385,   377,    86,    96,   134,   135,
     136,   137,   138,   139,   264,   398,   450,   257,   460,   257,
     257,   302,   257,   257,   257,   257,   257,   257,   257,   257,
     257,     7,   257,   257,   263,   257,   263,   257,   263,   263,
     257,   257,   257,   257,   257,   257,   257,   257,   263,   263,
     257,   257,   257,   257,   257,   263,   263,   257,   405,   406,
      75,    96,   264,   427,   264,   265,   302,   457,   457,   457,
     457,   258,   258,   306,   258,   265,   257,   258,   306,   306,
     257,   264,   308,   258,   258,   265,    69,   457,     7,   460,
     291,   302,   302,   454,   454,   454,   264,   257,   286,   286,
     286,   286,   257,   302,   257,   302,   302,   302,   263,   460,
       5,   257,   302,    64,   286,     5,   263,     5,     5,     5,
     287,   290,   460,     5,     5,     5,   263,   304,   304,   286,
     286,     5,     5,   263,   356,     5,   263,   354,     5,   460,
       5,     5,     5,     5,     5,   107,   117,   460,     5,   460,
       3,     3,   286,   456,   373,    81,    83,    84,    85,   122,
     123,   124,   125,   126,   127,   128,   130,   131,   264,   382,
     389,   264,   130,   264,   386,   389,    86,   110,   263,   264,
     378,     5,   460,   263,   399,   460,   461,   456,   461,   263,
     401,   460,   460,   460,     7,   302,   302,     7,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   302,   454,   410,
     454,   412,   454,   414,   416,   286,   461,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,     5,   460,   257,   257,   263,   460,   454,   264,   264,
     264,   264,   264,     7,   265,   308,   314,   263,   258,   265,
     306,     8,   308,   257,   264,   297,   265,   265,   265,   265,
     260,     7,     7,     7,     7,   302,     7,   302,     7,     7,
       7,   455,     7,     7,   302,     7,     7,     7,   318,   331,
       7,     7,     7,     7,     7,   297,     7,     7,   296,   263,
     348,     5,     7,     7,     7,     7,     7,   357,     7,   355,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,   263,   371,     7,     7,     7,     7,   306,     5,     5,
       5,   257,   286,     7,   257,   286,   257,     5,     5,   379,
       7,     7,   400,     7,   297,     7,     7,     7,   402,     7,
       7,   258,   258,   258,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   258,   265,   140,   143,   156,   157,   158,
     264,   411,   265,   140,   143,   156,   157,   160,   161,   264,
     413,   265,    18,    88,   140,   163,   164,   264,   415,    18,
      88,   133,   140,   141,   163,   166,   167,   264,   417,   265,
     258,   265,   265,   265,   265,   265,   265,   264,   264,   265,
     265,   265,   265,   265,   265,   265,   258,   304,   407,   460,
     407,   428,     7,   264,   263,   263,   264,   263,   263,   286,
     258,   306,   454,     3,   258,   310,   286,   302,   454,   454,
     454,   291,   265,   265,   295,   265,     7,   263,   264,     7,
       7,   112,     7,   295,   264,   295,   264,   295,   264,   257,
     374,   258,     7,     7,     7,     3,     7,   383,     7,   387,
       7,     7,    78,    79,   116,   130,   264,   380,   264,   295,
     264,   295,     7,   263,     7,   302,   460,   460,   454,   454,
     454,   460,   302,   286,     7,   454,   263,   302,   454,   454,
     302,   454,   263,   302,   454,   454,   454,   454,   454,   454,
     454,   263,   454,   302,   454,   454,   460,   263,   263,   454,
     454,   263,   302,     7,   302,   456,   456,   456,   454,   456,
       7,     7,   460,   460,   454,   460,   460,   286,     5,     7,
     408,   408,     5,   117,   264,   263,   456,   457,   263,   457,
     457,   258,   258,   265,   258,   308,   258,   264,   264,   264,
     264,   282,   302,   302,   455,   302,   332,     5,     5,     5,
       5,   372,   460,     7,     7,   258,   306,   306,   390,   390,
     390,   286,   460,   460,   403,   258,   265,   265,   265,   265,
     265,   265,   258,   265,   265,   403,     7,     7,     7,     7,
     265,   403,     7,     7,     7,     7,     7,   265,     7,     7,
     403,     7,     7,     7,     7,     7,   403,   403,     7,     7,
     418,   258,   265,   265,   258,   258,   265,   265,   265,   265,
     265,   258,   258,   258,   265,   264,   265,   258,   265,   409,
     258,   263,   263,   454,   265,   264,   454,   264,   264,   258,
     454,   264,   265,   258,   258,   264,   258,    89,    90,    91,
      92,    93,    94,   264,   333,     7,   264,   374,   258,     7,
     384,   388,     7,     7,     7,     7,   264,     7,   456,   454,
     456,   454,   454,   460,     7,   460,   302,   264,   302,   264,
     302,   264,   264,   264,   263,   264,     7,   454,   302,     7,
       7,   454,   461,   461,   454,   454,     7,     7,     7,   461,
       7,   135,     7,   209,   212,   456,     7,   429,   429,   264,
     456,   264,   264,   264,   263,   263,   264,   260,     7,     7,
       7,     7,     5,   454,   454,   454,   454,   454,   111,     7,
       7,   265,   265,    16,   258,   258,   265,   265,   265,   265,
     258,   265,   265,   258,   265,   419,   265,   258,   265,   258,
     258,   258,   265,   265,   264,   265,   461,   461,   456,    81,
      83,    86,   130,   264,   389,   430,   264,   265,   263,   457,
     454,   291,     7,     7,     7,     7,     7,     7,     5,   306,
     390,   263,     7,     7,   454,   454,   454,   454,     7,   302,
     454,   263,   454,    18,    86,    88,    99,   112,   130,   264,
     420,   302,     7,   302,     7,     7,     7,   454,   454,     7,
     302,   264,   265,     5,     5,     5,   432,   257,   456,   454,
     264,   264,   265,   296,   258,   258,   403,   258,   258,   258,
     265,   258,   265,   403,   258,     5,     5,   454,   302,     5,
     286,   258,   258,   265,   258,   258,   264,     7,     4,     7,
       7,     7,   286,   431,   264,   265,   264,   454,     7,     7,
       7,   264,     7,     7,     7,   456,   263,   454,   264,   263,
       7,     7,     7,     7,     7,     7,     7,     7,   302,   263,
     263,     7,   264,     7,   306,   454,   263,   258,   349,   265,
     403,   258,   403,   258,   403,   403,     7,   258,   264,   454,
       7,    62,   454,   264,   263,   264,     7,   264,   264,     7,
     265,   286,   265,   403,     7,     7,   454,     7,   454,   264,
     265,   350,   258,   454,   132,     7,   264,     5,   297,     7,
     264
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 346 "GetDP.y"
    { if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfPointer_L = List_Create(10, 10, sizeof(void *)) ;
	ListOfPointer2_L= List_Create(10, 10, sizeof(void *)) ;
	ListOfChar_L    = List_Create(128, 128, sizeof(char)) ;

	ListOfInitialList0_L    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialList_L     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialSuppList_L = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineSystem      = List_Create(5,5, sizeof(List_T *)) ;
	ListOfListOfFormulation = List_Create(5,5, sizeof(List_T *)) ;

	ListOfConstraintPerRegion = List_Create(5,5, sizeof(List_T *)) ;
	ListOfRegionIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfSubRegionIndex    = List_Create(5,5, sizeof(int)) ;

	ListOfFormulation       = List_Create(5,5, sizeof(int)) ;

	ListOfBasisFunction     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfSupportIndex      = List_Create(5,5, sizeof(int)) ;
	ListOfEntityIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfConstraintInFS    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfConstraintIndex   = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineQuantity    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfFunctionSpaceIndex= List_Create(5,5, sizeof(int *)) ;
	ListOfEquationTerm      = List_Create(5,5, sizeof(List_T *)) ;
      }
    ;}
    break;

  case 3:
#line 380 "GetDP.y"
    { if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfInitialList0_L) ;

	List_Delete(ListOfInitialList_L) ;
	List_Delete(ListOfInitialSuppList_L) ;

	List_Delete(ListOfDefineSystem) ;
	List_Delete(ListOfListOfFormulation) ;

	List_Delete(ListOfConstraintPerRegion) ;
	List_Delete(ListOfRegionIndex) ;
	List_Delete(ListOfSubRegionIndex) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfSupportIndex) ;
	List_Delete(ListOfEntityIndex) ;
	List_Delete(ListOfConstraintInFS) ;
	List_Delete(ListOfConstraintIndex) ;

	List_Delete(ListOfDefineQuantity) ;
	List_Delete(ListOfFunctionSpaceIndex) ;
	List_Delete(ListOfEquationTerm) ;
      }
    ;}
    break;

  case 5:
#line 423 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;}
    break;

  case 19:
#line 446 "GetDP.y"
    {            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 461 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 463 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 465 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 467 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 469 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 471 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 473 "GetDP.y"
    { Help(yyvsp[-1].c); ;}
    break;

  case 28:
#line 475 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 477 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 479 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 481 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 483 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 485 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 487 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 489 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 491 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 493 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 495 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 497 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 499 "GetDP.y"
    { Print_Object(yyvsp[-1].i, &Problem_S); ;}
    break;

  case 41:
#line 501 "GetDP.y"
    {
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 42:
#line 509 "GetDP.y"
    {
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;}
    break;

  case 44:
#line 526 "GetDP.y"
    { Nbr_Index = 0 ; ;}
    break;

  case 46:
#line 533 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;}
    break;

  case 47:
#line 535 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;}
    break;

  case 48:
#line 540 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ; ;}
    break;

  case 49:
#line 542 "GetDP.y"
    { Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;}
    break;

  case 52:
#line 549 "GetDP.y"
    { Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;}
    break;

  case 55:
#line 559 "GetDP.y"
    { 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)yyvsp[-3].d ;
      List_Add(Group_S.InitialList, &i) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;}
    break;

  case 56:
#line 569 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;}
    break;

  case 57:
#line 576 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;}
    break;

  case 58:
#line 586 "GetDP.y"
    {
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;}
    break;

  case 59:
#line 591 "GetDP.y"
    {
      Group_S.FunctionType = yyvsp[-3].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      if (!Nbr_Index)  Group_S.InitialList = yyvsp[0].l ;
      else             Group_S.InitialList = yyvsp[0].l ;

      ListOfInitialList2_L = ListOfInitialSuppList_L ;  /* Init pour SuppListOfRegion */
    ;}
    break;

  case 60:
#line 603 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 61:
#line 612 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 62:
#line 623 "GetDP.y"
    {
      yyval.i = yyvsp[0].i ;
    ;}
    break;

  case 63:
#line 628 "GetDP.y"
    {
      if (!Flag_MultipleIndex) {
	if ( !strcmp(yyvsp[-1].c, "All") ) {
	  yyval.i = -3;
	}
	else if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) < 0 ) {
	  yyval.i = -2 ; vyyerror("Unknown Group: %s", yyvsp[-1].c) ;
	}
	else {
	  List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
	}
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				    fcmp_Group_Name)) < 0 ) {
	    yyval.i = -2 ; vyyerror("Unknown Group: %s {%d}", yyvsp[-1].c, k+1) ;
	  }
	  else {
	    if (k == 0) {
	      List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
	    }
	  }
	  List_Add(ListOfInt_L, &i) ;
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 64:
#line 665 "GetDP.y"
    { yyval.i = REGION ; ;}
    break;

  case 65:
#line 668 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 66:
#line 680 "GetDP.y"
    { yyval.l = yyvsp[0].l ; ;}
    break;

  case 67:
#line 682 "GetDP.y"
    { 
      if (!Nbr_Index)
	yyval.l = NULL ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	InitialList2_L = NULL ;
	for (k = 0 ; k < Nbr_Index ; k++)
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
      }
    ;}
    break;

  case 68:
#line 698 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;}
    break;

  case 69:
#line 701 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;}
    break;

  case 70:
#line 704 "GetDP.y"
    {
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) >= 0 ) {
	  if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	       ELEMENTLIST ) {
	    if (!Nbr_Index) {
	      yyval.l = List_Create( 1, 5, sizeof(int)) ;
	      List_Add(yyval.l, &i) ;
	    }
	    else {
	      List_Reset(ListOfInitialList2_L) ;
	      for (k = 0 ; k < Nbr_Index ; k++) {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	  }
	  else  vyyerror("Not a Support of Element Type: %s", yyvsp[-1].c) ;
	}
	else  vyyerror("Unknown Region for Support: %s", yyvsp[-1].c) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name))
	       >= 0 ) {
	    if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type ==
		 ELEMENTLIST ) {
	      if (!Nbr_Index)
		vyyerror("Multiple Group out of context: %s {}", yyvsp[-1].c) ;
	      else {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	    else  vyyerror("Not a Support of Element Type: %s", yyvsp[-1].c) ;
	  }
	  else  vyyerror("Unknown Region for Support: %s {%d}", yyvsp[-1].c, k+1) ;
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 71:
#line 755 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 72:
#line 768 "GetDP.y"
    {
      if (!Nbr_Index) {
	yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  InitialList2_L =
	    List_Create(((List_Nbr(InitialList0_L) > 0)? List_Nbr(yyvsp[0].l) : 1), 5,
			sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    ;}
    break;

  case 73:
#line 792 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 74:
#line 799 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create( 5, 5, sizeof(int)) ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  InitialList2_L = List_Create( 5, 5, sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	}
      }
    ;}
    break;

  case 75:
#line 812 "GetDP.y"
    { yyval.l = yyvsp[-2].l ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    ;}
    break;

  case 76:
#line 830 "GetDP.y"
    { yyval.l = yyvsp[-3].l ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Suppress(InitialList2_L,
			  (int *)List_Pointer(InitialList0_L, i), fcmp_int) ;
	}
      }
    ;}
    break;

  case 77:
#line 853 "GetDP.y"
    { Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 78:
#line 857 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;}
    break;

  case 79:
#line 869 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 80:
#line 878 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || (yyvsp[-4].i<yyvsp[-2].i && (int)yyvsp[0].d<0) || (yyvsp[-4].i>yyvsp[-2].i && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, yyvsp[-2].i, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; ((int)yyvsp[0].d>0)?(j<=yyvsp[-2].i):(j>=yyvsp[-2].i) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 81:
#line 892 "GetDP.y"
    {
      Flag_MultipleIndex = 0 ;
      if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	/* Si ce n'est pas un nom de groupe, est-ce un nom de constante ? : */
	Constant_S.Name = yyvsp[0].c ;
	if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	  vyyerror("Unknown Constant: %s", yyvsp[0].c) ;
	  i = 0 ;
	  List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	}
	else
	  if (Constant_S.Type == VAR_FLOAT) {
	    i = (int)Constant_S.Value.Float ;
	    List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	  }
	  else if (Constant_S.Type == VAR_LISTOFFLOAT) {
	    List_Reset(yyval.l = ListOfInt_L) ;
	    for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ; j = (int)d ;
	      List_Add(ListOfInt_L, &j) ;
	    }
	  }
	  else {
	    vyyerror("Unknown type of Constant: %s", yyvsp[0].c) ;
	    i = 0 ;
	    List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	  }
      }
      else   /* Si c'est un nom de groupe : */
	yyval.l = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 82:
#line 926 "GetDP.y"
    {
      Flag_MultipleIndex = 1 ;
      List_Reset(ListOfInitialList0_L) ;
      yyval.l = ListOfInitialList0_L ;
      for (k = 1 ; k <= Nbr_Index ; k++) {
	sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name)) < 0 ) {
	  vyyerror("Unknown Group: %s {%d}", yyvsp[-2].c, k) ;  break ;
	}
	else
	  List_Add(ListOfInitialList0_L, 
		   &(((struct Group *)
		      List_Pointer(Problem_S.Group, i))->InitialList)) ;
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 84:
#line 950 "GetDP.y"
    { if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;}
    break;

  case 85:
#line 960 "GetDP.y"
    { 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(tmpstr, "%s_%d_", yyvsp[-3].c, k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = ListDummy_L ;
	  Add_Group(&Group_S, yyvsp[-3].c, 2, k+1) ;
	}
      }
      Free(yyvsp[-3].c) ;
    ;}
    break;

  case 88:
#line 982 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 89:
#line 987 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 90:
#line 988 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 91:
#line 995 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].i ; ;}
    break;

  case 95:
#line 1015 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[-5].c, fcmp_Expression_Name)) >= 0 ) {
	if (((struct Expression *)List_Pointer(Problem_S.Expression, i))->Type ==
	    UNDEFINED_EXP) {
	  Free(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name) ;
	  List_Read (Problem_S.Expression, yyvsp[-1].i, &Expression_S) ;
	  List_Write(Problem_S.Expression,  i, &Expression_S) ;
	  ((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name = yyvsp[-5].c ;
	  List_Pop(Problem_S.Expression) ;
	}
	else  { vyyerror("Redefinition of Function: %s", yyvsp[-5].c) ; }
      }
      else {  /* new identifier */
	Free(((struct Expression *)List_Pointer(Problem_S.Expression, yyvsp[-1].i))->Name) ;
	((struct Expression *)List_Pointer(Problem_S.Expression, yyvsp[-1].i))->Name = yyvsp[-5].c ;
      }
    ;}
    break;

  case 96:
#line 1035 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[-6].c, fcmp_Expression_Name)) < 0 ) {
	/* Si le nom n'existe pas : */
	i = List_Nbr(Problem_S.Expression) ;
	Expression_S.Type = PIECEWISEFUNCTION ;
	Expression_S.Case.PieceWiseFunction.ExpressionPerRegion =
	  List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	Expression_S.Case.PieceWiseFunction.NumLastRegion = -1 ;
	Add_Expression(&Expression_S, yyvsp[-6].c, 0) ;
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
	  vyyerror("Not piece-wise Expression: %s", yyvsp[-6].c) ;
	Free(yyvsp[-6].c) ;
      }

      if (yyvsp[-4].i >= 0 || yyvsp[-4].i == -1) {
	ExpressionPerRegion_S.ExpressionIndex = yyvsp[-1].i ;
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
	if (yyvsp[-4].i == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group right hand side") ;
    ;}
    break;

  case 100:
#line 1088 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;}
    break;

  case 101:
#line 1108 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 102:
#line 1114 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;}
    break;

  case 103:
#line 1120 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 104:
#line 1123 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 105:
#line 1130 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1141 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 108:
#line 1144 "GetDP.y"
    { List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 109:
#line 1150 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1154 "GetDP.y"
    { yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1166 "GetDP.y"
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
#line 1179 "GetDP.y"
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
#line 1193 "GetDP.y"
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
#line 1208 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1214 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1220 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1226 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1232 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1238 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1244 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1250 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1256 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1262 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1268 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1274 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1280 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1286 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1292 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1298 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1304 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1311 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1319 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1332 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1338 "GetDP.y"
    {

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-2].c,fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = yyvsp[-1].i ;
	if (yyvsp[-1].i < 0)  vyyerror("Uncompatible argument for Function: %s", yyvsp[-2].c) ;
      }

      /* Built in functions */

      else { 
	Get_Function2NbrForString(F_Function, yyvsp[-2].c, &FlagError,
				  &WholeQuantity_S.Case.Function.Fct,
				  &WholeQuantity_S.Case.Function.NbrParameters,
				  &WholeQuantity_S.Case.Function.NbrArguments) ;
	WholeQuantity_S.Case.Function.Active = NULL ;
	if (!FlagError) {

	  /* arguments */
	  if (yyvsp[-1].i >= 0) {
	    if (yyvsp[-1].i == WholeQuantity_S.Case.Function.NbrArguments) {
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	    }
	    else if (WholeQuantity_S.Case.Function.NbrArguments == -1  ||
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
	      /* && ($2)%2 == 0)) { */
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	      WholeQuantity_S.Case.Function.NbrArguments = yyvsp[-1].i ;
	    }
	    else {
	      vyyerror("Wrong number of arguments for Function '%s' (%d instead of %d)", 
		       yyvsp[-2].c, yyvsp[-1].i, WholeQuantity_S.Case.Function.NbrArguments) ;
	    }
	  }
	  else {
	    WholeQuantity_S.Type = WQ_EXTERNBUILTINFUNCTION ;
	  }

	  /* parameters */
	  if (WholeQuantity_S.Case.Function.NbrParameters >= 0 &&
	      WholeQuantity_S.Case.Function.NbrParameters != List_Nbr(yyvsp[0].l)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     yyvsp[-2].c, List_Nbr(yyvsp[0].l), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 && List_Nbr(yyvsp[0].l)%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
		     yyvsp[-2].c, List_Nbr(yyvsp[0].l)) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr(yyvsp[0].l) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read(yyvsp[0].l, i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }

	}

	else {
	  vyyerror("Unknown Function: %s", yyvsp[-2].c) ;
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 138:
#line 1412 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of discrete Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(QuantityFromFS_Type) ;
      }
      Free(yyvsp[-1].c) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;

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
#line 1446 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1455 "GetDP.y"
    { 
      if(yyvsp[0].i!=1 && yyvsp[0].i!=3 && yyvsp[0].i!=4)
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[-1].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 141:
#line 1467 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1469 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 143:
#line 1481 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1483 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = yyvsp[-1].i ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 145:
#line 1495 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1497 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", yyvsp[-8].c) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = yyvsp[-5].l ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 147:
#line 1511 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-6].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", yyvsp[-6].c) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)yyvsp[-3].d ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 148:
#line 1523 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1529 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1535 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1537 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", yyvsp[-1].i) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[x, ConnectedTo y]'");

      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = -1 ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity){
	for(i=0 ; i<List_Nbr(yyvsp[-3].l) ; i++){
	  WholeQuantity_P = (struct WholeQuantity*)List_Pointer(yyvsp[-3].l, i) ;
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
#line 1566 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = yyvsp[-1].l ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-4].c,
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp(yyvsp[-4].c, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else if (!strcmp(yyvsp[-4].c, "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2 ;
	else
	  vyyerror("Unknown Cast: %s", yyvsp[-4].c) ;
      }
      else {
	WholeQuantity_S.Case.Cast.NbrHar = 0 ;
	WholeQuantity_S.Case.Cast.FunctionSpaceIndexForType =
	  ((struct DefineQuantity *)List_Pointer(Formulation_S.DefineQuantity, i))
	    ->FunctionSpaceIndex ;
      }
      Free(yyvsp[-4].c) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 153:
#line 1592 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError){
	vyyerror("Unknown current value: $%s", yyvsp[0].c);
	Get_Valid_SXP(Current_Value);
      }
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 154:
#line 1605 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1611 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1618 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1624 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1631 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1638 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1649 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 161:
#line 1650 "GetDP.y"
    { yyval.i = 0 ; ;}
    break;

  case 162:
#line 1651 "GetDP.y"
    { yyval.i = yyvsp[-1].i ; ;}
    break;

  case 163:
#line 1656 "GetDP.y"
    { yyval.i = 1 ; ;}
    break;

  case 164:
#line 1657 "GetDP.y"
    { yyval.i = yyvsp[-2].i + 1 ; ;}
    break;

  case 165:
#line 1663 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 166:
#line 1666 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 167:
#line 1669 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;}
    break;

  case 168:
#line 1685 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 169:
#line 1690 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 170:
#line 1697 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 172:
#line 1706 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;}
    break;

  case 173:
#line 1711 "GetDP.y"
    { JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;}
    break;

  case 174:
#line 1718 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 175:
#line 1721 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;}
    break;

  case 176:
#line 1728 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 178:
#line 1738 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;}
    break;

  case 179:
#line 1741 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 180:
#line 1744 "GetDP.y"
    { JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, yyvsp[-2].c, &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (JacobianCase_S.NbrParameters == -2 && (List_Nbr(yyvsp[-1].l))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   yyvsp[-2].c, List_Nbr(yyvsp[-1].l)) ;
	if (JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr(yyvsp[-1].l);
	if (List_Nbr(yyvsp[-1].l) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read(yyvsp[-1].l, i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   yyvsp[-2].c, List_Nbr(yyvsp[-1].l), JacobianCase_S.NbrParameters) ;
      }
      else{
	vyyerror("Unknown type of Jacobian: %s", yyvsp[-2].c);
	Get_Valid_SXD1N(Jacobian_Type);
      }
      Free(yyvsp[-2].c);
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 181:
#line 1782 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 182:
#line 1788 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 183:
#line 1795 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 185:
#line 1808 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 186:
#line 1815 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;}
    break;

  case 187:
#line 1818 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;}
    break;

  case 188:
#line 1825 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 189:
#line 1828 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;}
    break;

  case 190:
#line 1835 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 192:
#line 1847 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 193:
#line 1857 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 194:
#line 1867 "GetDP.y"
    { IntegrationCase_S.Case = yyvsp[-1].l ; ;}
    break;

  case 195:
#line 1874 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 196:
#line 1877 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;}
    break;

  case 197:
#line 1884 "GetDP.y"
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
#line 1900 "GetDP.y"
    { QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Element: %s", yyvsp[-1].c);
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

      if (FlagError)  vyyerror("Bad type of Integration method for Element: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 200:
#line 1948 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 201:
#line 1951 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 202:
#line 1954 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 203:
#line 1957 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 204:
#line 1960 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;}
    break;

  case 205:
#line 1971 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 207:
#line 1981 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Constraint, &Constraint_S) ;
      else {
	Save_Name = strsave(Constraint_S.Name) ;  Free(Constraint_S.Name) ;
	if (List_Nbr(ListOfConstraintPerRegion))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				       tmpstr, fcmp_Constraint_Name) ;
	    Constraint_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfConstraintPerRegion, k,
		      &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Problem_S.Constraint, &Constraint_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 210:
#line 2008 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 212:
#line 2022 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;}
    break;

  case 213:
#line 2028 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 tmpstr, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;}
    break;

  case 214:
#line 2035 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 215:
#line 2044 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;}
    break;

  case 216:
#line 2047 "GetDP.y"
    {
      if (!Nbr_Index) {
	if (!Constraint_S.MultiConstraintPerRegion)
	  Constraint_S.MultiConstraintPerRegion =
	    List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

	MultiConstraintPerRegion_S.Name = yyvsp[-3].c ;
	MultiConstraintPerRegion_S.ConstraintPerRegion = yyvsp[-1].l ;
	MultiConstraintPerRegion_S.Active = NULL ;

	List_Add(Constraint_S.MultiConstraintPerRegion, 
		 &MultiConstraintPerRegion_S) ;
      }
      else
	vyyerror("Multiple Constraint not allowed for Case Constraint") ;
    ;}
    break;

  case 217:
#line 2069 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
      else {
	List_Reset(ListOfConstraintPerRegion) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Constraint_S.ConstraintPerRegion =
	    List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
	  List_Add(ListOfConstraintPerRegion, &Constraint_S.ConstraintPerRegion) ;
	}
	yyval.l = Constraint_S.ConstraintPerRegion ;
      }
    ;}
    break;

  case 218:
#line 2084 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
      else {
	if (List_Nbr(ListOfRegionIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfRegionIndex, k, &ConstraintPerRegion_S.RegionIndex) ;
	    if (List_Nbr(ListOfSubRegionIndex))
	      List_Read
		(ListOfSubRegionIndex, k, &ConstraintPerRegion_S.SubRegionIndex) ;

	    List_Read
	      (ListOfConstraintPerRegion, k, &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Constraint_S.ConstraintPerRegion, &ConstraintPerRegion_S) ;
	  }
	yyval.l = Constraint_S.ConstraintPerRegion ;
      }
    ;}
    break;

  case 219:
#line 2104 "GetDP.y"
    { 
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 220:
#line 2113 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 222:
#line 2127 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 223:
#line 2137 "GetDP.y"
    { 
      if (!Nbr_Index){
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
      }
      else {
	List_Reset(ListOfRegionIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "CO_Region", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 224:
#line 2162 "GetDP.y"
    { 
      if (!Nbr_Index)
	ConstraintPerRegion_S.SubRegionIndex =
	  Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSubRegionIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "CO_SubRegion", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 225:
#line 2187 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 226:
#line 2192 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 227:
#line 2200 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2208 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2217 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.RegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
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
#line 2235 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2244 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2252 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2260 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2270 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2280 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2290 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2310 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 239:
#line 2321 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
      else {
	Save_Name = strsave(FunctionSpace_S.Name) ;  Free(FunctionSpace_S.Name) ;
	if (List_Nbr(ListOfBasisFunction))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				       tmpstr, fcmp_FunctionSpace_Name) ;
	    FunctionSpace_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfBasisFunction , k, &FunctionSpace_S.BasisFunction) ;
	    if (List_Nbr(ListOfConstraintInFS))
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	    List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 242:
#line 2350 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 244:
#line 2363 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;}
    break;

  case 245:
#line 2369 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 tmpstr, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;}
    break;

  case 246:
#line 2376 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 247:
#line 2385 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;}
    break;

  case 248:
#line 2388 "GetDP.y"
    { FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;}
    break;

  case 249:
#line 2391 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;}
    break;

  case 250:
#line 2394 "GetDP.y"
    { FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;}
    break;

  case 251:
#line 2401 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = Current_BasisFunction_L =
	  List_Create(6, 6, sizeof (struct BasisFunction)) ;
      else {
	List_Reset(ListOfBasisFunction) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.BasisFunction =
	    List_Create(6, 6, sizeof (struct BasisFunction)) ;
	  List_Add(ListOfBasisFunction, &FunctionSpace_S.BasisFunction) ;
	}
	yyval.l = Current_BasisFunction_L = FunctionSpace_S.BasisFunction ;
      }
    ;}
    break;

  case 252:
#line 2417 "GetDP.y"
    {
      if (!Nbr_Index) {
	if ( (i = List_ISearchSeq(yyvsp[-3].l, BasisFunction_S.Name, 
				  fcmp_BasisFunction_Name)) < 0 ) {
	  /*
	  BasisFunction_S.Num = Num_BasisFunction++ ;
	  */
	  BasisFunction_S.Num = Num_BasisFunction ;
	  Num_BasisFunction += (BasisFunction_S.SubFunction)?
	    List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	}
	else  /* BasisFunction definie par morceaux => meme Num */
	  BasisFunction_S.Num = ((struct BasisFunction *)List_Pointer(yyvsp[-3].l, i))->Num ;
	
	List_Add(yyval.l = yyvsp[-3].l, &BasisFunction_S) ;
      }
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfSupportIndex, k, &BasisFunction_S.SupportIndex) ;
	    List_Read(ListOfEntityIndex , k, &BasisFunction_S.EntityIndex ) ;
	    List_Read(ListOfBasisFunction, k, &FunctionSpace_S.BasisFunction) ;

	    if ( (i = List_ISearchSeq(FunctionSpace_S.BasisFunction,
				      BasisFunction_S.Name, 
				      fcmp_BasisFunction_Name)) < 0 ) {
	      /*
	      BasisFunction_S.Num = Num_BasisFunction++ ;
	      */
	      BasisFunction_S.Num = Num_BasisFunction ;
	      Num_BasisFunction += (BasisFunction_S.SubFunction)?
		List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	    }
	    else  /* BasisFunction definie par morceaux => meme Num */
	      BasisFunction_S.Num =
		((struct BasisFunction *)
		 List_Pointer(FunctionSpace_S.BasisFunction, i))->Num ;

	    List_Add(FunctionSpace_S.BasisFunction, &BasisFunction_S) ;
	  }
	yyval.l = FunctionSpace_S.BasisFunction ;
      }
    ;}
    break;

  case 253:
#line 2466 "GetDP.y"
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
#line 2487 "GetDP.y"
    { BasisFunction_S.Name = yyvsp[-1].c ; ;}
    break;

  case 256:
#line 2490 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 257:
#line 2495 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;}
    break;

  case 258:
#line 2500 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError){
	vyyerror("Unknown Function for BasisFunction: %s", yyvsp[-2].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 259:
#line 2514 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-4].c, &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", yyvsp[-4].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-4].c) ;
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", yyvsp[-2].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 260:
#line 2534 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 261:
#line 2539 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 262:
#line 2544 "GetDP.y"
    {
      if (!Nbr_Index)
	BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "BF_Support", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 263:
#line 2568 "GetDP.y"
    {
      if (!Nbr_Index) {
	if (yyvsp[-1].i >= 0) {
	  BasisFunction_S.EntityIndex = yyvsp[-1].i ;
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	}
	else if (yyvsp[-1].i == -1) {
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	  BasisFunction_S.EntityIndex = Add_Group(&Group_S, "BF_Entity", 1, 0) ;
	}
	else  vyyerror("Bad Group right hand side") ;

	if (BasisFunction_S.GlobalBasisFunction) {
	  if (Group_S.FunctionType == GLOBAL) {
	    if (List_Nbr(BasisFunction_S.GlobalBasisFunction) ==
		List_Nbr(Group_S.InitialList)) {
	      for (k = 0 ; k < List_Nbr(Group_S.InitialList) ; k++)
		if (*((int*)List_Pointer(Group_S.InitialList, k)) !=
		    *((int*)List_Pointer(BasisFunction_S.GlobalBasisFunction, k))) {
		  vyyerror("Bad correspondance between Group and Entity") ;
		  break ;
		}
	    }
	    else if (List_Nbr(Group_S.InitialList) != 0 ||
		     GlobalBasisFunction_S.EntityIndex != -1)
	      vyyerror("Bad correspondance between Group and Entity") ;
	  }
	  else  vyyerror("Bad correspondance between Group and Entity") ;
	}
      }
      else {
	List_Reset(ListOfEntityIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "BF_Entity", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 265:
#line 2628 "GetDP.y"
    { 
      Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; 
    ;}
    break;

  case 266:
#line 2632 "GetDP.y"
    {
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;}
    break;

  case 267:
#line 2640 "GetDP.y"
    {
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", yyvsp[-12].c) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {

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

	sprintf(tmpstr, "%s_%d_", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) < 0)
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;
	else {
	  GlobalBasisFunction_S.FormulationIndex = i ;

	  sprintf(tmpstr, "%s_%d_", yyvsp[-3].c, k+1) ;
	  if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				   fcmp_Resolution_Name)) < 0)
	    vyyerror("Unknown Resolution: %s {%d}", yyvsp[-3].c, k+1) ;
	  else {
	    GlobalBasisFunction_S.ResolutionIndex = i ;

	    GlobalBasisFunction_S.DefineQuantityIndex = -1 ;
	    GlobalBasisFunction_S.QuantityStorage = NULL ;
	    List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
	  }
	}
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {
	List_Read(BasisFunction_S.GlobalBasisFunction, k, &GlobalBasisFunction_S) ;
	List_Read(Problem_S.Formulation,
		  GlobalBasisFunction_S.FormulationIndex, &Formulation_S) ;
	if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-15].c, 
				 fcmp_DefineQuantity_Name)) < 0) {
	  vyyerror("Unknown Quantity '%s' in Formulation '%s'", yyvsp[-15].c,
		   Formulation_S.Name) ;
	  break ;
	}
	else {
	  GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  List_Write(BasisFunction_S.GlobalBasisFunction, k,
		     &GlobalBasisFunction_S) ;
	}
      }

      Free(yyvsp[-15].c) ; Free(yyvsp[-12].c) ; Free(yyvsp[-3].c) ;
    ;}
    break;

  case 268:
#line 2705 "GetDP.y"
    { 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 269:
#line 2711 "GetDP.y"
    { 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;}
    break;

  case 270:
#line 2720 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 272:
#line 2731 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 273:
#line 2738 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 274:
#line 2741 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 275:
#line 2748 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", yyvsp[0].c) ;
      else {
	List_Add(yyval.l, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   yyvsp[0].c, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add(yyval.l, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 276:
#line 2764 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 277:
#line 2770 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 278:
#line 2773 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", yyvsp[0].c) ;
      else {
	List_Add(yyvsp[-2].l, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   yyvsp[0].c, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add(yyvsp[-2].l, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 279:
#line 2792 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyval.l, &i) ; j = i+1 ;
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 280:
#line 2804 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 281:
#line 2811 "GetDP.y"
    { 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 282:
#line 2816 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyvsp[-2].l, &i) ; j = i+1 ;
      }
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 283:
#line 2831 "GetDP.y"
    { 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 284:
#line 2837 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;}
    break;

  case 285:
#line 2847 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 287:
#line 2859 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 288:
#line 2866 "GetDP.y"
    { 
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 289:
#line 2877 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 290:
#line 2891 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
      else {
	List_Reset(ListOfConstraintInFS) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.Constraint =
	    List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
	  List_Add(ListOfConstraintInFS, &FunctionSpace_S.Constraint) ;
	}
	yyval.l = FunctionSpace_S.Constraint ;
      }
    ;}
    break;

  case 291:
#line 2906 "GetDP.y"
    {
      Group_S.FunctionType = Type_Function ;
      Group_S.SuppListType = Type_SuppList ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }

      if (!Nbr_Index && Constraint_Index >= 0) {
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
	    
	    List_Add(yyval.l = yyvsp[-3].l, &ConstraintInFS_S) ;
	  }
	}
      }

      else if (Nbr_Index && List_Nbr(ListOfConstraintIndex)) {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  List_Read(ListOfConstraintIndex, k, &Constraint_Index) ;
	  /* same as above... */
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
	      /* ... same */
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	      List_Add(FunctionSpace_S.Constraint, &ConstraintInFS_S) ;
	    }
	  }
	}
      }

    ;}
    break;

  case 292:
#line 2980 "GetDP.y"
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
#line 2996 "GetDP.y"
    { if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) {
	if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, yyvsp[-1].c,
				 fcmp_GlobalQuantity_Name)) < 0)
	  vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
	else {
	  ConstraintInFS_S.QuantityType   = GLOBALQUANTITY ;
	  ConstraintInFS_S.ReferenceIndex = i ;
	}
      }
      else {
	ConstraintInFS_S.QuantityType   = LOCALQUANTITY ;
	ConstraintInFS_S.ReferenceIndex = i ;
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 295:
#line 3029 "GetDP.y"
    { Type_Function = yyvsp[-1].i ; ;}
    break;

  case 296:
#line 3032 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; ;}
    break;

  case 297:
#line 3035 "GetDP.y"
    {
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex) {
	  Constraint_Index =
	    List_ISearchSeq(Problem_S.Constraint, yyvsp[-2].c, fcmp_Constraint_Name) ;
	}
	else {
	  vyyerror("Multiple Constraint out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfConstraintIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-2].c,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Constraint, tmpstr,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s {%d}", tmpstr, k+1) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	}
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 298:
#line 3081 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 300:
#line 3091 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Formulation, &Formulation_S) ;
      else {
	Save_Name = strsave(Formulation_S.Name) ;  Free(Formulation_S.Name) ;
	if (List_Nbr(ListOfDefineQuantity))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    Formulation_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Read(ListOfEquationTerm  , k, &Formulation_S.Equation      ) ;
	    List_Add(Problem_S.Formulation, &Formulation_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 303:
#line 3119 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 305:
#line 3131 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;}
    break;

  case 306:
#line 3137 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 tmpstr, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;}
    break;

  case 307:
#line 3144 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 309:
#line 3156 "GetDP.y"
    { Formulation_S.Equation = yyvsp[-1].l ; ;}
    break;

  case 310:
#line 3162 "GetDP.y"
    {
      if (!Nbr_Index)
	Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
      else {
	List_Reset(ListOfDefineQuantity) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.DefineQuantity =
	    List_Create(6, 6, sizeof (struct DefineQuantity)) ;
	  List_Add(ListOfDefineQuantity, &Formulation_S.DefineQuantity) ;
	}
      }
    ;}
    break;

  case 311:
#line 3176 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
      else {
	if (List_Nbr(ListOfFunctionSpaceIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfFunctionSpaceIndex, k, &DefineQuantity_S.FunctionSpaceIndex) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
	  }
      }
    ;}
    break;

  case 313:
#line 3196 "GetDP.y"
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

  case 315:
#line 3219 "GetDP.y"
    { DefineQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 316:
#line 3222 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 317:
#line 3226 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 318:
#line 3229 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 319:
#line 3239 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;}
    break;

  case 320:
#line 3243 "GetDP.y"
    {
      if (!Nbr_Index) {
	if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
				 fcmp_FunctionSpace_Name)) < 0)
	  vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
	else
	  DefineQuantity_S.FunctionSpaceIndex = i ;
      }
      else{ 
	vyyerror("Multiple Formulation out of context: %s {}", yyvsp[0].c) ;
      }
    ;}
    break;

  case 321:
#line 3256 "GetDP.y"
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

  case 322:
#line 3283 "GetDP.y"
    {
      Flag_MultipleIndex = 1 ;

      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				   fcmp_FunctionSpace_Name)) < 0)
	    vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	  else
	    DefineQuantity_S.FunctionSpaceIndex = i ;
	}
	else{ 
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfFunctionSpaceIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, tmpstr,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s {%d}", tmpstr, k+1) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	}
      }
    ;}
    break;

  case 323:
#line 3324 "GetDP.y"
    { /* attention : doit disparaitre. */
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
      Free(yyvsp[-5].c) ;
    ;}
    break;

  case 324:
#line 3348 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;}
    break;

  case 325:
#line 3353 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 326:
#line 3359 "GetDP.y"
    { 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = yyvsp[-2].l ;
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
#line 3670 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;}
    break;

  case 328:
#line 3675 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 329:
#line 3684 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 330:
#line 3693 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 331:
#line 3702 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;}
    break;

  case 333:
#line 3710 "GetDP.y"
    {
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == LOCALQUANTITY) {
	  if ((i = List_ISearchSeq
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, yyvsp[-1].c,
		fcmp_SubSpace_Name)) < 0)
	    vyyerror("Unknown SubSpace: %s", yyvsp[-1].c) ;
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
				   yyvsp[-1].c, fcmp_GlobalQuantity_Name)) < 0) {
	    vyyerror("Unknown GlobalQuantity: %s", yyvsp[-1].c) ;
	  }
	  else {
	    DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	    List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 334:
#line 3750 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
      else {
	List_Reset(ListOfEquationTerm) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.Equation =
	    List_Create(6, 6, sizeof (struct EquationTerm)) ;
	  List_Add(ListOfEquationTerm, &Formulation_S.Equation) ;
	}
	yyval.l = Formulation_S.Equation ;
      }
    ;}
    break;

  case 335:
#line 3765 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (EquationTerm_S.Type == GALERKIN || EquationTerm_S.Type == DERHAM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.LocalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALTERM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.GlobalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALEQUATION)  /* Attention: Pas fait ! */
	      vyyerror("Multiple GlobalEquation not yet implemented in parser ...") ; 

	    List_Read(ListOfEquationTerm, k, &Formulation_S.Equation) ;

	    List_Add(Formulation_S.Equation, &EquationTerm_S) ;
	  }
	yyval.l = Formulation_S.Equation ;
      }
    ;}
    break;

  case 336:
#line 3789 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 337:
#line 3794 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 338:
#line 3803 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 339:
#line 3806 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 340:
#line 3809 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 341:
#line 3812 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 342:
#line 3823 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 344:
#line 3834 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 345:
#line 3844 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 346:
#line 3854 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 347:
#line 3868 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 349:
#line 3880 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;}
    break;

  case 350:
#line 3882 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;}
    break;

  case 351:
#line 3884 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;}
    break;

  case 352:
#line 3886 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;}
    break;

  case 353:
#line 3894 "GetDP.y"
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
#line 3919 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 356:
#line 3927 "GetDP.y"
    { EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = yyvsp[0].l ;

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
#line 4006 "GetDP.y"
    { 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer(yyvsp[-2].l, 0) ;

      if (List_Nbr(yyvsp[-2].l) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing Quantity in Equation");
      }
      else if (List_Nbr(yyvsp[-2].l) == 3 &&
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
#line 4052 "GetDP.y"
    {
      if (!Nbr_Index)
	EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 359:
#line 4076 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 360:
#line 4085 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 361:
#line 4094 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 362:
#line 4099 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 363:
#line 4108 "GetDP.y"
    { if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;}
    break;

  case 364:
#line 4119 "GetDP.y"
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
#line 4148 "GetDP.y"
    {
      if (!Nbr_Index)
	EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 367:
#line 4172 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 368:
#line 4180 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = yyvsp[0].l ;

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
#line 4235 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = yyvsp[-2].t.Int1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = yyvsp[-2].t.Int2 ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;}
    break;

  case 370:
#line 4252 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 371:
#line 4253 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 372:
#line 4254 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 373:
#line 4255 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 374:
#line 4256 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 375:
#line 4257 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 376:
#line 4258 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 377:
#line 4259 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 378:
#line 4266 "GetDP.y"
    { yyval.t.Int1 = Get_DefineForString(Operator_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown Operator for discrete Quantity: %s", yyvsp[-2].c);
	Get_Valid_SXD(Operator_Type);
      }
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      yyval.t.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = yyval.t.Int1 ;
      Quantity_Index = yyval.t.Int2 ;

      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 379:
#line 4287 "GetDP.y"
    { yyval.t.Int1 = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      yyval.t.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = yyval.t.Int1 ;
      Quantity_Index = yyval.t.Int2 ;

      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 380:
#line 4311 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 382:
#line 4321 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Resolution, &Resolution_S) ;
      else {
	Save_Name = strsave(Resolution_S.Name) ;  Free(Resolution_S.Name) ;
	if (List_Nbr(ListOfDefineSystem))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				       tmpstr, fcmp_Resolution_Name) ;
	    Resolution_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Problem_S.Resolution, &Resolution_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 385:
#line 4348 "GetDP.y"
    { Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 387:
#line 4360 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 388:
#line 4367 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 tmpstr, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;}
    break;

  case 389:
#line 4374 "GetDP.y"
    { Resolution_S.DefineSystem = yyvsp[-1].l ; ;}
    break;

  case 390:
#line 4377 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 391:
#line 4379 "GetDP.y"
    { Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;}
    break;

  case 393:
#line 4387 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
      else {
	List_Reset(ListOfDefineSystem) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Resolution_S.DefineSystem =
	    List_Create(6, 6, sizeof (struct DefineSystem)) ;
	  List_Add(ListOfDefineSystem, &Resolution_S.DefineSystem) ;
	}
	yyval.l = Current_System_L = Resolution_S.DefineSystem ;
      }
    ;}
    break;

  case 394:
#line 4402 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
      else {
	if (List_Nbr(ListOfListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfListOfFormulation, k, &DefineSystem_S.FormulationIndex) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Resolution_S.DefineSystem, &DefineSystem_S) ;
	  }
	yyval.l = Current_System_L = Resolution_S.DefineSystem ;
      }
    ;}
    break;

  case 395:
#line 4417 "GetDP.y"
    {
       yyval.l = yyvsp[-1].l ;
     ;}
    break;

  case 396:
#line 4427 "GetDP.y"
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

  case 398:
#line 4447 "GetDP.y"
    { DefineSystem_S.Name = yyvsp[-1].c ; ;}
    break;

  case 399:
#line 4450 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 400:
#line 4459 "GetDP.y"
    { DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;}
    break;

  case 401:
#line 4462 "GetDP.y"
    {
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;}
    break;

  case 402:
#line 4467 "GetDP.y"
    { 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;}
    break;

  case 403:
#line 4472 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;}
    break;

  case 404:
#line 4477 "GetDP.y"
    { DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 405:
#line 4482 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;}
    break;

  case 407:
#line 4493 "GetDP.y"
    {
      if (!Nbr_Index) {
	yyval.l = List_Create(1, 1, sizeof(int)) ;
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c, fcmp_Formulation_Name)) < 0)
	    vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
	  else  List_Add(yyval.l, &i) ;
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-1].c) ;
	}
      }
      else {
	List_Reset(ListOfListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  DefineSystem_S.FormulationIndex = List_Create(1, 1, sizeof(int)) ;
	  List_Add(ListOfListOfFormulation, &DefineSystem_S.FormulationIndex) ;

	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-1].c, k+1) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 408:
#line 4530 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 409:
#line 4537 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 410:
#line 4540 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 411:
#line 4552 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 412:
#line 4562 "GetDP.y"
    { yyval.l = yyvsp[-1].l ;  ;}
    break;

  case 413:
#line 4568 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 414:
#line 4571 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 415:
#line 4583 "GetDP.y"
    { 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 416:
#line 4591 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 417:
#line 4604 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", yyvsp[-2].c);
	Get_Valid_SXD(Operation_Type);
      }
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;}
    break;

  case 418:
#line 4626 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 419:
#line 4633 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 420:
#line 4639 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 421:
#line 4645 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 422:
#line 4651 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 423:
#line 4659 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-4].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", yyvsp[-4].c);
	Get_Valid_SXD(Operation_Type);
      }
      Free(yyvsp[-4].c) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-2].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;
    ;}
    break;

  case 424:
#line 4681 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 425:
#line 4688 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 426:
#line 4694 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-4].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-1].l ;
      Operation_P->Case.Test.Operation_False = NULL ;
    ;}
    break;

  case 427:
#line 4705 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-8].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-5].l ;
      Operation_P->Case.Test.Operation_False = yyvsp[-1].l ;
    ;}
    break;

  case 428:
#line 4716 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 429:
#line 4729 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-8].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-6].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = yyvsp[-2].i;      
    ;}
    break;

  case 430:
#line 4744 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-6].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 431:
#line 4759 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-4].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.Precision = -1;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 432:
#line 4774 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;}
    break;

  case 433:
#line 4794 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLYJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;}
    break;

  case 434:
#line 4815 "GetDP.y"
    { Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 435:
#line 4827 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
    Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex =
	Num_Group(&Group_S, "OP_UpdateCst", yyvsp[-4].i) ;
      Operation_P->Case.UpdateConstraint.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-2].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 436:
#line 4847 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = yyvsp[-2].l;
    ;}
    break;

  case 437:
#line 4864 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = yyvsp[-2].d;
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    ;}
    break;

  case 438:
#line 4883 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)yyvsp[-6].d ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr(yyvsp[-4].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[-4].l) ; i++) {
	List_Read(yyvsp[-4].l, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete(yyvsp[-4].l);
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;}
    break;

  case 439:
#line 4904 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)yyvsp[-6].d ;
      Operation_P->Case.EigenSolve.Shift_r = yyvsp[-4].d ;
      Operation_P->Case.EigenSolve.Shift_i = yyvsp[-2].d ;
    ;}
    break;

  case 440:
#line 4918 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVEJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)yyvsp[-6].d ;
      Operation_P->Case.EigenSolve.Shift_r = yyvsp[-4].d ;
      Operation_P->Case.EigenSolve.Shift_i = yyvsp[-2].d ;
    ;}
    break;

  case 441:
#line 4932 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;}
    break;

  case 442:
#line 4940 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PERTURBATION ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-14].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-14].c) ;
      Free(yyvsp[-14].c) ;
      Operation_P->DefineSystemIndex = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-12].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-12].c) ;
      Free(yyvsp[-12].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i ;
      Operation_P->Case.Perturbation.Size = (int)yyvsp[-8].d ;
      Operation_P->Case.Perturbation.Save = 
	List_Create(List_Nbr(yyvsp[-6].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[-6].l) ; i++) {
	List_Read(yyvsp[-6].l, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete(yyvsp[-6].l);
      Operation_P->Case.Perturbation.Shift = yyvsp[-4].d ;
      Operation_P->Case.Perturbation.PertFreq = (int)yyvsp[-2].d ;
    ;}
    break;

  case 443:
#line 4974 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
      Operation_P->Case.TimeLoopTheta.Time0 = yyvsp[-10].d ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-8].d ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-6].i ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-4].i ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 444:
#line 4987 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
      Operation_P->Case.TimeLoopNewmark.Time0 = yyvsp[-12].d ; 
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-10].d ; 
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-8].i ; 
      Operation_P->Case.TimeLoopNewmark.Beta = yyvsp[-6].d ; 
      Operation_P->Case.TimeLoopNewmark.Gamma = yyvsp[-4].d ; 
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 445:
#line 5001 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-6].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-4].i ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 446:
#line 5014 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-10].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-6].i ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-4].d ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 447:
#line 5026 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 449:
#line 5035 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 451:
#line 5044 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    ;}
    break;

  case 452:
#line 5055 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-8].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-6].i ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)yyvsp[-4].d ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = yyvsp[-2].i ; 
    ;}
    break;

  case 453:
#line 5067 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;}
    break;

  case 454:
#line 5077 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;}
    break;

  case 455:
#line 5085 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)yyvsp[-2].d ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = yyvsp[-4].l ; 
    ;}
    break;

  case 456:
#line 5098 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)yyvsp[-4].d ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = yyvsp[-2].c ;
    ;}
    break;

  case 457:
#line 5111 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionMHtoTime.Time = yyvsp[-4].l ;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = yyvsp[-2].c ;
    ;}
    break;

  case 458:
#line 5125 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 459:
#line 5135 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 460:
#line 5145 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-6].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-4].c ;
      Operation_P->Case.SaveMesh.ExprIndex = yyvsp[-2].i ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 461:
#line 5159 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-4].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-2].c ;
      Operation_P->Case.SaveMesh.ExprIndex = -1 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 462:
#line 5173 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving.Operation = yyvsp[-2].l ;
    ;}
    break;

  case 463:
#line 5192 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = yyvsp[-2].l ;
    ;}
    break;

  case 464:
#line 5210 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = yyvsp[-2].d ;
    ;}
    break;

  case 465:
#line 5221 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-9].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-7].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-4].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = yyvsp[-2].d ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 466:
#line 5236 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-7].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-7].c) ;
      Free(yyvsp[-7].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-5].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 467:
#line 5251 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 468:
#line 5266 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 469:
#line 5281 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 470:
#line 5296 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 471:
#line 5307 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 472:
#line 5312 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 473:
#line 5322 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 475:
#line 5332 "GetDP.y"
    { Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;}
    break;

  case 476:
#line 5335 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 477:
#line 5345 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 478:
#line 5360 "GetDP.y"
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
#line 5376 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;}
    break;

  case 481:
#line 5380 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 482:
#line 5384 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 483:
#line 5388 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;}
    break;

  case 484:
#line 5393 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 485:
#line 5404 "GetDP.y"
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
#line 5421 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;}
    break;

  case 488:
#line 5425 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 489:
#line 5429 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 490:
#line 5433 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;}
    break;

  case 491:
#line 5437 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;}
    break;

  case 492:
#line 5442 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 493:
#line 5453 "GetDP.y"
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
#line 5468 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 496:
#line 5472 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;}
    break;

  case 497:
#line 5476 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;}
    break;

  case 498:
#line 5480 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 499:
#line 5484 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 500:
#line 5495 "GetDP.y"
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
#line 5513 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 503:
#line 5517 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;}
    break;

  case 504:
#line 5521 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;}
    break;

  case 505:
#line 5525 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 506:
#line 5530 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 507:
#line 5540 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;}
    break;

  case 508:
#line 5546 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 509:
#line 5552 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;}
    break;

  case 510:
#line 5562 "GetDP.y"
    { yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 511:
#line 5565 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;}
    break;

  case 512:
#line 5570 "GetDP.y"
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
#line 5588 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 515:
#line 5598 "GetDP.y"
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

	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
				   fcmp_DefineQuantity_Name)) >= 0)
	    break ;
	}
	if (j<List_Nbr(ListOfInt_Lnew)) {
	  ChangeOfState_S.FormulationIndex = ListOfInt_P[j] ;
	  ChangeOfState_S.QuantityIndex = i ;
	}
	else
	  vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 516:
#line 5627 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;}
    break;

  case 517:
#line 5630 "GetDP.y"
    { ChangeOfState_S.Criterion = yyvsp[-1].d ; ;}
    break;

  case 518:
#line 5633 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;}
    break;

  case 519:
#line 5641 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 520:
#line 5658 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 522:
#line 5670 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
      else {
	Save_Name = strsave(PostProcessing_S.Name) ;  Free(PostProcessing_S.Name) ;
	if (List_Nbr(ListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    PostProcessing_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfFormulation, k, &PostProcessing_S.FormulationIndex) ;
	    List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 525:
#line 5695 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 527:
#line 5709 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 528:
#line 5716 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 tmpstr, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;}
    break;

  case 529:
#line 5724 "GetDP.y"
    { 
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-2].c,
				   fcmp_Formulation_Name)) < 0){
	    vyyerror("Unknown Formulation: %s", yyvsp[-2].c) ;
	  }
	  else {
	    PostProcessing_S.FormulationIndex = i ;
	    List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  }
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-2].c,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-2].c, k+1) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	}
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 530:
#line 5770 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;}
    break;

  case 531:
#line 5775 "GetDP.y"
    { PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;}
    break;

  case 532:
#line 5781 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 533:
#line 5784 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;}
    break;

  case 534:
#line 5787 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 535:
#line 5789 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 536:
#line 5795 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 538:
#line 5806 "GetDP.y"
    { PostQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 539:
#line 5809 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;}
    break;

  case 540:
#line 5815 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 541:
#line 5820 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 542:
#line 5826 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, yyvsp[-3].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", yyvsp[-3].c);
	Get_Valid_SXD(PostQuantityTerm_EvaluationType);
      }
      Free(yyvsp[-3].c) ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 543:
#line 5840 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 545:
#line 5854 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 546:
#line 5861 "GetDP.y"
    { PostQuantityTerm_S.WholeQuantity = yyvsp[-2].l ;

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

  case 547:
#line 5889 "GetDP.y"
    { /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError){
       vyyerror("Unknown type of Operation: %s", yyvsp[-1].c);
       Get_Valid_SXD(DefineQuantity_Type);
     }
     Free(yyvsp[-1].c) ;
   ;}
    break;

  case 548:
#line 5899 "GetDP.y"
    { Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;}
    break;

  case 549:
#line 5900 "GetDP.y"
    { 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;}
    break;

  case 550:
#line 5906 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 551:
#line 5915 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 552:
#line 5932 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 554:
#line 5944 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 557:
#line 5953 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 559:
#line 5965 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 560:
#line 5972 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[-1].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[-1].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 561:
#line 5984 "GetDP.y"
    { 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[-1].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 562:
#line 5995 "GetDP.y"
    { 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;}
    break;

  case 563:
#line 6000 "GetDP.y"
    { PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;}
    break;

  case 564:
#line 6006 "GetDP.y"
    {
      PostOperation_S.PostProcessingIndex = -1 ;
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[0].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[0].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
	if (!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation)) ;
	PostOperation_S.Name = yyvsp[-2].c ;
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 565:
#line 6023 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 566:
#line 6033 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 567:
#line 6036 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 568:
#line 6040 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 569:
#line 6053 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 570:
#line 6058 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 571:
#line 6063 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 6072 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 573:
#line 6081 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 574:
#line 6090 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 575:
#line 6096 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;}
    break;

  case 576:
#line 6101 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 577:
#line 6110 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-1].i ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 578:
#line 6122 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-5].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-5].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-4].i ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;
      PostSubOperation_S.PostQuantitySupport[1] = yyvsp[-1].i ;

      if ((yyvsp[-4].i<0 && yyvsp[-1].i<0) || (yyvsp[-4].i>=0 && yyvsp[-1].i>=0)) {
	vyyerror("Postprocessing Quantities '%s' and '%s' of same type (%s)", 
		 yyvsp[-5].c, yyvsp[-2].c, (yyvsp[-4].i>0)? "with Support":"without Support") ;
      }      
      Free(yyvsp[-5].c) ; Free(yyvsp[-2].c) ;
    ;}
    break;

  case 579:
#line 6145 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 580:
#line 6146 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 581:
#line 6147 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 582:
#line 6148 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 583:
#line 6154 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 584:
#line 6156 "GetDP.y"
    { yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;}
    break;

  case 585:
#line 6162 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 586:
#line 6168 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;}
    break;

  case 587:
#line 6175 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;}
    break;

  case 588:
#line 6184 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      if(List_Nbr(yyvsp[-8].l)!=3 || List_Nbr(yyvsp[-5].l)!=3 || List_Nbr(yyvsp[-2].l)!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-8].l), List_Nbr(yyvsp[-5].l), List_Nbr(yyvsp[-2].l));
      else{
	List_Read(yyvsp[-8].l, 0, &PostSubOperation_S.Case.OnSection.x[0]);
	List_Read(yyvsp[-8].l, 1, &PostSubOperation_S.Case.OnSection.y[0]);
	List_Read(yyvsp[-8].l, 2, &PostSubOperation_S.Case.OnSection.z[0]);
	List_Read(yyvsp[-5].l, 0, &PostSubOperation_S.Case.OnSection.x[1]);
	List_Read(yyvsp[-5].l, 1, &PostSubOperation_S.Case.OnSection.y[1]);
	List_Read(yyvsp[-5].l, 2, &PostSubOperation_S.Case.OnSection.z[1]);
	List_Read(yyvsp[-2].l, 0, &PostSubOperation_S.Case.OnSection.x[2]);
	List_Read(yyvsp[-2].l, 1, &PostSubOperation_S.Case.OnSection.y[2]);
	List_Read(yyvsp[-2].l, 2, &PostSubOperation_S.Case.OnSection.z[2]);
      }
      List_Delete(yyvsp[-8].l);
      List_Delete(yyvsp[-5].l);
      List_Delete(yyvsp[-2].l);
    ;}
    break;

  case 589:
#line 6206 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;}
    break;

  case 590:
#line 6214 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = yyvsp[-12].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = yyvsp[-10].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = yyvsp[-8].i ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = yyvsp[-5].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = yyvsp[-3].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = yyvsp[-1].l ;
    ;}
    break;

  case 591:
#line 6225 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      if(List_Nbr(yyvsp[-1].l)!=3)
	vyyerror("Expected {3} coordinates, got {%d}", List_Nbr(yyvsp[-1].l));
      else{
	List_Read(yyvsp[-1].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-1].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-1].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 592:
#line 6239 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      if(List_Nbr(yyvsp[-8].l)!=3 || List_Nbr(yyvsp[-5].l)!=3)
	vyyerror("Expected {3}{3} coordinates, got {%d}{%d}", 
		 List_Nbr(yyvsp[-8].l), List_Nbr(yyvsp[-5].l));
      else{
	List_Read(yyvsp[-8].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-8].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-8].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-5].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-5].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-5].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-8].l);
      List_Delete(yyvsp[-5].l);
    ;}
    break;

  case 593:
#line 6260 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      if(List_Nbr(yyvsp[-13].l)!=3 || List_Nbr(yyvsp[-10].l)!=3 || List_Nbr(yyvsp[-7].l)!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-13].l), List_Nbr(yyvsp[-10].l), List_Nbr(yyvsp[-7].l));
      else{
	List_Read(yyvsp[-13].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-13].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-13].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-10].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-10].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-10].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read(yyvsp[-7].l, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(yyvsp[-7].l, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(yyvsp[-7].l, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-13].l);
      List_Delete(yyvsp[-10].l);
      List_Delete(yyvsp[-7].l);
    ;}
    break;

  case 594:
#line 6287 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      if(List_Nbr(yyvsp[-18].l)!=3 || List_Nbr(yyvsp[-15].l)!=3 || List_Nbr(yyvsp[-12].l)!=3 || List_Nbr(yyvsp[-9].l)!=3)
	vyyerror("Expected {3}{3}{3}{3} coordinates, got {%d}{%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-18].l), List_Nbr(yyvsp[-15].l), List_Nbr(yyvsp[-12].l), List_Nbr(yyvsp[-9].l));
      else{
	List_Read(yyvsp[-18].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-18].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-18].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-15].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-15].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-15].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read(yyvsp[-12].l, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(yyvsp[-12].l, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(yyvsp[-12].l, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
	List_Read(yyvsp[-9].l, 0, &PostSubOperation_S.Case.OnGrid.x[3]);
	List_Read(yyvsp[-9].l, 1, &PostSubOperation_S.Case.OnGrid.y[3]);
	List_Read(yyvsp[-9].l, 2, &PostSubOperation_S.Case.OnGrid.z[3]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-18].l);
      List_Delete(yyvsp[-15].l);
      List_Delete(yyvsp[-12].l);
      List_Delete(yyvsp[-9].l);
    ;}
    break;

  case 595:
#line 6318 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", yyvsp[-10].i) ;

      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = yyvsp[-6].d ;
      PostSubOperation_S.Case.WithArgument.x[1] = yyvsp[-4].d ;
      PostSubOperation_S.Case.WithArgument.n = (int)yyvsp[-1].d ;
    ;}
    break;

  case 596:
#line 6338 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
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
#line 6373 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;}
    break;

  case 599:
#line 6380 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;}
    break;

  case 600:
#line 6387 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 601:
#line 6394 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;}
    break;

  case 602:
#line 6398 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 603:
#line 6402 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 604:
#line 6406 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;}
    break;

  case 605:
#line 6410 "GetDP.y"
    { 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 606:
#line 6420 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 607:
#line 6425 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 608:
#line 6430 "GetDP.y"
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
#line 6450 "GetDP.y"
    { 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 610:
#line 6457 "GetDP.y"
    { 
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 611:
#line 6467 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 612:
#line 6476 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 613:
#line 6485 "GetDP.y"
    { 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 614:
#line 6492 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 615:
#line 6500 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;}
    break;

  case 616:
#line 6504 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 617:
#line 6513 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 618:
#line 6517 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 619:
#line 6521 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 620:
#line 6529 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;}
    break;

  case 621:
#line 6535 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 622:
#line 6539 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 623:
#line 6547 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 624:
#line 6554 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 625:
#line 6562 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 626:
#line 6569 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 627:
#line 6577 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 628:
#line 6584 "GetDP.y"
    { 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;}
    break;

  case 629:
#line 6592 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;}
    break;

  case 630:
#line 6596 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 631:
#line 6605 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 632:
#line 6611 "GetDP.y"
    {
      i = 0 ;
      do{
	if(yyvsp[0].c[i] == '%'){ 
	  i++ ; j=i ;
	  do{
	    if(yyvsp[0].c[i] == '+'  || yyvsp[0].c[i] == '-'  || yyvsp[0].c[i] == '*'  || yyvsp[0].c[i] == '%'  ||
	       yyvsp[0].c[i] == '>'  || yyvsp[0].c[i] == '<'  || yyvsp[0].c[i] == '|'  || yyvsp[0].c[i] == '&'  ||
	       yyvsp[0].c[i] == '$'  || yyvsp[0].c[i] == '\'' || yyvsp[0].c[i] == '\\' || yyvsp[0].c[i] == '/'  || 
	       yyvsp[0].c[i] == '{'  ||	yyvsp[0].c[i] == '}'  || yyvsp[0].c[i] == '('  || yyvsp[0].c[i] == ')'  ||
	       yyvsp[0].c[i] == '['  || yyvsp[0].c[i] == ']'  || yyvsp[0].c[i] == '!'  || yyvsp[0].c[i] == ','  ||
	       yyvsp[0].c[i] == '^'  || yyvsp[0].c[i] == '.'  || yyvsp[0].c[i] == ';'  || yyvsp[0].c[i] == '~'  || 
	       yyvsp[0].c[i] == ' '  || yyvsp[0].c[i] == '\n' || yyvsp[0].c[i] == '\t' || yyvsp[0].c[i] == '#'  ||
               yyvsp[0].c[i] == '`'  || yyvsp[0].c[i] == ':'  ){
              break ;
            }
	    i++ ;
	  } while(i<(int)strlen(yyvsp[0].c)) ;
	  strncpy(tmpstr, &yyvsp[0].c[j], i-j); 
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
	  List_Add(ListOfChar_L, &yyvsp[0].c[i]);
	  i++ ;
	}
      } while (i<(int)strlen(yyvsp[0].c)) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 633:
#line 6661 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;}
    break;

  case 634:
#line 6676 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;}
    break;

  case 635:
#line 6692 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-6].c ;      
      Constant_S.Name = yyvsp[-6].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-3].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;}
    break;

  case 636:
#line 6711 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-8].c ;      
      Constant_S.Name = yyvsp[-8].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-5].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;}
    break;

  case 637:
#line 6731 "GetDP.y"
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
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	  /* There is a problem with line numbers when EndFor is
	     directly followed by '\n' (i.e., mostly on Unix since
	     there is usually a '\t' on Windows). After a For body
	     that is executed more than once, the line number is too
	     large by one. This can cause problems with Includes
	     afterwards. I didn't have time to investigate further
	     (one hack is to add something after EndFor on the same
	     line; the real solution is to change the way we deal with
	     includes and replace the line number stuff with
	     fgetpos/fsetpos), so I've added the following temporary
	     hack: */
	  hack_endfor();
	}
      }
    ;}
    break;

  case 638:
#line 6774 "GetDP.y"
    {
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;}
    break;

  case 639:
#line 6778 "GetDP.y"
    {
    ;}
    break;

  case 641:
#line 6793 "GetDP.y"
    {
      Constant_S.Name = yyvsp[-3].c ; 
      if(List_Nbr(yyvsp[-1].l) == 1){
	Constant_S.Type = VAR_FLOAT ;
	List_Read(yyvsp[-1].l, 0, &Constant_S.Value.Float) ;
	List_Delete(yyvsp[-1].l);
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT ;
	Constant_S.Value.ListOfFloat = yyvsp[-1].l;
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 642:
#line 6808 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 643:
#line 6814 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 644:
#line 6820 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 645:
#line 6826 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 646:
#line 6837 "GetDP.y"
    {
      Msg(DIRECT, yyvsp[-2].c);
    ;}
    break;

  case 647:
#line 6842 "GetDP.y"
    {
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstr);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstr);
      List_Delete(yyvsp[-2].l);
    ;}
    break;

  case 648:
#line 6854 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6864 "GetDP.y"
    {
      Msg(INFO2, "[<return>=%g] ? ",yyvsp[-2].d);
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = yyvsp[-2].d;
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-5].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6883 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 652:
#line 6889 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 653:
#line 6895 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 654:
#line 6906 "GetDP.y"
    { yyval.c = "Exp";    ;}
    break;

  case 655:
#line 6907 "GetDP.y"
    { yyval.c = "Log";    ;}
    break;

  case 656:
#line 6908 "GetDP.y"
    { yyval.c = "Log10";  ;}
    break;

  case 657:
#line 6909 "GetDP.y"
    { yyval.c = "Sqrt";   ;}
    break;

  case 658:
#line 6910 "GetDP.y"
    { yyval.c = "Sin";    ;}
    break;

  case 659:
#line 6911 "GetDP.y"
    { yyval.c = "Asin";   ;}
    break;

  case 660:
#line 6912 "GetDP.y"
    { yyval.c = "Cos";    ;}
    break;

  case 661:
#line 6913 "GetDP.y"
    { yyval.c = "Acos";   ;}
    break;

  case 662:
#line 6914 "GetDP.y"
    { yyval.c = "Tan";    ;}
    break;

  case 663:
#line 6915 "GetDP.y"
    { yyval.c = "Atan";   ;}
    break;

  case 664:
#line 6916 "GetDP.y"
    { yyval.c = "Atan2";  ;}
    break;

  case 665:
#line 6917 "GetDP.y"
    { yyval.c = "Sinh";   ;}
    break;

  case 666:
#line 6918 "GetDP.y"
    { yyval.c = "Cosh";   ;}
    break;

  case 667:
#line 6919 "GetDP.y"
    { yyval.c = "Tanh";   ;}
    break;

  case 668:
#line 6920 "GetDP.y"
    { yyval.c = "Fabs";   ;}
    break;

  case 669:
#line 6921 "GetDP.y"
    { yyval.c = "Floor";  ;}
    break;

  case 670:
#line 6922 "GetDP.y"
    { yyval.c = "Ceil";   ;}
    break;

  case 671:
#line 6923 "GetDP.y"
    { yyval.c = "Fmod";   ;}
    break;

  case 672:
#line 6924 "GetDP.y"
    { yyval.c = "Modulo"; ;}
    break;

  case 673:
#line 6925 "GetDP.y"
    { yyval.c = "Hypot";  ;}
    break;

  case 674:
#line 6926 "GetDP.y"
    { yyval.c = yyvsp[0].c;       ;}
    break;

  case 675:
#line 6930 "GetDP.y"
    { yyval.d = yyvsp[0].d ;          ;}
    break;

  case 676:
#line 6931 "GetDP.y"
    { yyval.d = yyvsp[-1].d ;          ;}
    break;

  case 677:
#line 6932 "GetDP.y"
    { yyval.d = -yyvsp[0].d ;         ;}
    break;

  case 678:
#line 6933 "GetDP.y"
    { yyval.d = !yyvsp[0].d ;         ;}
    break;

  case 679:
#line 6934 "GetDP.y"
    { yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;}
    break;

  case 680:
#line 6935 "GetDP.y"
    { yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;}
    break;

  case 681:
#line 6936 "GetDP.y"
    { yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;}
    break;

  case 682:
#line 6937 "GetDP.y"
    { yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;}
    break;

  case 683:
#line 6938 "GetDP.y"
    { yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;}
    break;

  case 684:
#line 6939 "GetDP.y"
    { yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;}
    break;

  case 685:
#line 6940 "GetDP.y"
    { yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;}
    break;

  case 686:
#line 6941 "GetDP.y"
    { yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;}
    break;

  case 687:
#line 6942 "GetDP.y"
    { yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;}
    break;

  case 688:
#line 6943 "GetDP.y"
    { yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;}
    break;

  case 689:
#line 6944 "GetDP.y"
    { yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;}
    break;

  case 690:
#line 6945 "GetDP.y"
    { yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;}
    break;

  case 691:
#line 6946 "GetDP.y"
    { yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;}
    break;

  case 692:
#line 6947 "GetDP.y"
    { yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;}
    break;

  case 693:
#line 6948 "GetDP.y"
    { yyval.d = exp(yyvsp[-1].d);      ;}
    break;

  case 694:
#line 6949 "GetDP.y"
    { yyval.d = log(yyvsp[-1].d);      ;}
    break;

  case 695:
#line 6950 "GetDP.y"
    { yyval.d = log10(yyvsp[-1].d);    ;}
    break;

  case 696:
#line 6951 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-1].d);     ;}
    break;

  case 697:
#line 6952 "GetDP.y"
    { yyval.d = sin(yyvsp[-1].d);      ;}
    break;

  case 698:
#line 6953 "GetDP.y"
    { yyval.d = asin(yyvsp[-1].d);     ;}
    break;

  case 699:
#line 6954 "GetDP.y"
    { yyval.d = cos(yyvsp[-1].d);      ;}
    break;

  case 700:
#line 6955 "GetDP.y"
    { yyval.d = acos(yyvsp[-1].d);     ;}
    break;

  case 701:
#line 6956 "GetDP.y"
    { yyval.d = tan(yyvsp[-1].d);      ;}
    break;

  case 702:
#line 6957 "GetDP.y"
    { yyval.d = atan(yyvsp[-1].d);     ;}
    break;

  case 703:
#line 6958 "GetDP.y"
    { yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;}
    break;

  case 704:
#line 6959 "GetDP.y"
    { yyval.d = sinh(yyvsp[-1].d);     ;}
    break;

  case 705:
#line 6960 "GetDP.y"
    { yyval.d = cosh(yyvsp[-1].d);     ;}
    break;

  case 706:
#line 6961 "GetDP.y"
    { yyval.d = tanh(yyvsp[-1].d);     ;}
    break;

  case 707:
#line 6962 "GetDP.y"
    { yyval.d = fabs(yyvsp[-1].d);     ;}
    break;

  case 708:
#line 6963 "GetDP.y"
    { yyval.d = floor(yyvsp[-1].d);    ;}
    break;

  case 709:
#line 6964 "GetDP.y"
    { yyval.d = ceil(yyvsp[-1].d);     ;}
    break;

  case 710:
#line 6965 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 711:
#line 6966 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 712:
#line 6967 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;}
    break;

  case 713:
#line 6968 "GetDP.y"
    { yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;}
    break;

  case 714:
#line 6969 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;}
    break;

  case 715:
#line 6974 "GetDP.y"
    { yyval.d = yyvsp[0].d ; ;}
    break;

  case 716:
#line 6975 "GetDP.y"
    { yyval.d = (double)yyvsp[0].i ; ;}
    break;

  case 717:
#line 6976 "GetDP.y"
    { yyval.d = 3.1415926535897932 ; ;}
    break;

  case 718:
#line 6977 "GetDP.y"
    { yyval.d = (double)_0D ; ;}
    break;

  case 719:
#line 6978 "GetDP.y"
    { yyval.d = (double)_1D ; ;}
    break;

  case 720:
#line 6979 "GetDP.y"
    { yyval.d = (double)_2D ; ;}
    break;

  case 721:
#line 6980 "GetDP.y"
    { yyval.d = (double)_3D ; ;}
    break;

  case 722:
#line 6982 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.d = 0. ;
      }
      else  {
	if (Constant_S.Type == VAR_FLOAT)
	  yyval.d = Constant_S.Value.Float ;
	else {
	  vyyerror("Single value Constant needed: %s", yyvsp[0].c) ;  yyval.d = 0. ;
	}
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 723:
#line 7000 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 724:
#line 7003 "GetDP.y"
    { 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 725:
#line 7009 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 726:
#line 7012 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 727:
#line 7019 "GetDP.y"
    { 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 728:
#line 7025 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 729:
#line 7028 "GetDP.y"
    { List_Add(yyval.l, &(yyvsp[0].d)) ; ;}
    break;

  case 730:
#line 7031 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 731:
#line 7043 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;}
    break;

  case 732:
#line 7049 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      if(!yyvsp[0].d || (yyvsp[-4].d<yyvsp[-2].d && yyvsp[0].d<0) || (yyvsp[-4].d>yyvsp[-2].d && yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", yyvsp[-4].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(yyval.l, &(yyvsp[-4].d)) ;
      }
      else
	for(d=yyvsp[-4].d ; (yyvsp[0].d>0)?(d<=yyvsp[-2].d):(d>=yyvsp[-2].d) ; d+=yyvsp[0].d) 
	  List_Add(yyval.l, &d) ;
    ;}
    break;

  case 733:
#line 7060 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1) ; */
	  List_Add(yyval.l, &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;}
    break;

  case 734:
#line 7076 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-3].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-3].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-3].c) ;
	else
	  for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	    if(i < List_Nbr(Constant_S.Value.ListOfFloat)){
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	      List_Add(yyval.l, &d) ;
	    }
	    else{
	      d = 0.;
	      List_Add(yyval.l, &d) ;
	    }
	  }
    ;}
    break;

  case 735:
#line 7098 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-1].c) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;}
    break;

  case 736:
#line 7113 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant1_S.Name = yyvsp[-3].c ; Constant2_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[-3].c) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", yyvsp[-3].c) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", yyvsp[-1].c) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 yyvsp[-3].c, List_Nbr(Constant1_S.Value.ListOfFloat),
			 yyvsp[-1].c, List_Nbr(Constant2_S.Value.ListOfFloat)) ;
	      }
	      else {
		for(i=0 ; i<List_Nbr(Constant1_S.Value.ListOfFloat) ; i++) {
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d) ;
		  List_Add(yyval.l, &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add(yyval.l, &d) ;
		}
	      }
	    }
	}
    ;}
    break;

  case 737:
#line 7151 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 738:
#line 7159 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 739:
#line 7171 "GetDP.y"
    { 
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;}
    break;

  case 740:
#line 7179 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;}
    break;

  case 741:
#line 7190 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 742:
#line 7193 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 743:
#line 7200 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 744:
#line 7203 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.c = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  yyval.c = Constant_S.Value.Char ;
	else {
	  vyyerror("String Constant needed: %s", yyvsp[0].c) ;  yyval.c = NULL ;
	}
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 745:
#line 7218 "GetDP.y"
    {
      yyval.c = yyvsp[0].c ;
    ;}
    break;

  case 746:
#line 7223 "GetDP.y"
    {
      yyval.c = yyvsp[-1].c;
    ;}
    break;

  case 747:
#line 7228 "GetDP.y"
    {
      i = Print_ListOfDouble(yyvsp[-3].c,yyvsp[-1].l,tmpstr);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	yyval.c = yyvsp[-3].c;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	yyval.c = yyvsp[-3].c;
      }
      else{
	yyval.c = (char*)Malloc((strlen(tmpstr)+1)*sizeof(char));
	strcpy(yyval.c, tmpstr);
	Free(yyvsp[-3].c);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 748:
#line 7247 "GetDP.y"
    {
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;}
    break;

  case 749:
#line 7257 "GetDP.y"
    {
      if (yyvsp[-3].c != NULL && yyvsp[-1].c != NULL) {
	yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
	strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  yyval.c = NULL ;
      }
    ;}
    break;


    }

/* Line 999 of yacc.c.  */
#line 12094 "GetDP.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 7268 "GetDP.y"



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
    sprintf(tmpstr, "%s_%d_", Name, Num_Index) ;
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
    sprintf(tmpstr, "%s_%d_", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(tmpstr, "%s_%d_%d_", Name, Num_Index1,Num_Index2) ;

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


int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) {
  int k, Num ;

  List_Reset(ListOfInt_L) ;

  for (k = 0 ; k < Nbr_Index ; k++) {
    List_Read(ListOfInitialList_L, k, &Group_P->InitialList) ;
    if (Group_P->SuppListType != SUPPLIST_NONE)
      List_Read(ListOfInitialSuppList_L, k, &Group_P->InitialSuppList) ;
    Num = Add_Group(Group_P, Name, Flag_Plus, k+1) ;
    List_Add(ListOfInt_L, &Num) ;
  }
  return (Num-Nbr_Index+1) ;
}

/*  A d d _ E x p r e s s i o n   */

int  Add_Expression(struct Expression * Expression_P,
		    char * Name, int Flag_Plus) {
  int  i ;

  if (!Problem_S.Expression)
    Problem_S.Expression = List_Create(50, 50, sizeof (struct Expression) ) ;

  if (Flag_Plus) {
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strsave(tmpstr) ;
  }
  else  Expression_P->Name = Name ;

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


