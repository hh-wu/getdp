/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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

/* $Id: GetDP.tab.c,v 1.108 2007-01-24 09:41:55 bouta Exp $ */
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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 183 "GetDP.y"
typedef union YYSTYPE {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 766 "GetDP.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 778 "GetDP.tab.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6926

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  269
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  191
/* YYNRULES -- Number of rules. */
#define YYNRULES  755
/* YYNRULES -- Number of states. */
#define YYNSTATES  2045

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   501

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short int yytranslate[] =
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
static const unsigned short int yyprhs[] =
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
     360,   364,   369,   374,   375,   378,   382,   383,   387,   389,
     393,   394,   397,   399,   400,   401,   409,   413,   417,   424,
     428,   432,   436,   440,   444,   448,   452,   456,   460,   464,
     468,   472,   476,   480,   483,   486,   489,   493,   495,   499,
     502,   504,   507,   508,   514,   515,   523,   524,   536,   546,
     551,   556,   557,   565,   572,   575,   578,   581,   584,   588,
     591,   595,   599,   602,   606,   608,   612,   613,   617,   624,
     625,   630,   631,   634,   638,   643,   644,   649,   650,   653,
     657,   661,   666,   667,   672,   673,   676,   680,   684,   689,
     690,   695,   696,   699,   703,   707,   712,   713,   718,   719,
     722,   726,   730,   734,   738,   742,   746,   747,   750,   754,
     756,   758,   759,   762,   766,   771,   775,   780,   786,   787,
     792,   795,   796,   799,   803,   807,   811,   815,   819,   823,
     831,   835,   839,   843,   847,   851,   859,   867,   875,   876,
     879,   883,   885,   887,   888,   891,   894,   898,   903,   907,
     912,   917,   922,   927,   928,   933,   936,   937,   940,   944,
     948,   953,   958,   966,   970,   974,   978,   982,   983,   984,
     985,  1004,  1005,  1010,  1011,  1014,  1018,  1022,  1026,  1028,
    1032,  1033,  1037,  1039,  1043,  1044,  1048,  1049,  1054,  1057,
    1058,  1061,  1065,  1069,  1073,  1074,  1079,  1082,  1083,  1086,
    1090,  1094,  1098,  1102,  1103,  1106,  1110,  1112,  1114,  1115,
    1118,  1122,  1127,  1131,  1136,  1141,  1142,  1147,  1150,  1151,
    1154,  1158,  1162,  1166,  1170,  1174,  1175,  1181,  1185,  1186,
    1192,  1196,  1200,  1204,  1208,  1212,  1213,  1217,  1218,  1221,
    1224,  1227,  1232,  1237,  1242,  1247,  1248,  1251,  1255,  1259,
    1263,  1264,  1267,  1271,  1275,  1279,  1283,  1284,  1287,  1288,
    1289,  1299,  1303,  1307,  1311,  1314,  1318,  1324,  1325,  1328,
    1332,  1333,  1334,  1344,  1345,  1347,  1349,  1351,  1353,  1355,
    1357,  1359,  1364,  1368,  1369,  1372,  1376,  1378,  1380,  1381,
    1384,  1388,  1393,  1398,  1399,  1405,  1407,  1408,  1413,  1416,
    1419,  1420,  1423,  1427,  1431,  1435,  1439,  1443,  1447,  1451,
    1455,  1457,  1459,  1463,  1464,  1468,  1470,  1474,  1475,  1479,
    1480,  1483,  1487,  1491,  1496,  1501,  1506,  1511,  1517,  1523,
    1526,  1534,  1546,  1554,  1568,  1580,  1590,  1598,  1606,  1614,
    1624,  1634,  1644,  1656,  1668,  1680,  1686,  1704,  1718,  1734,
    1746,  1760,  1761,  1769,  1770,  1778,  1786,  1798,  1804,  1810,
    1820,  1830,  1840,  1846,  1852,  1864,  1874,  1889,  1904,  1912,
    1925,  1936,  1944,  1952,  1960,  1962,  1964,  1966,  1967,  1970,
    1974,  1978,  1981,  1982,  1985,  1989,  1993,  1997,  2001,  2006,
    2007,  2010,  2014,  2018,  2022,  2026,  2030,  2035,  2036,  2039,
    2043,  2047,  2051,  2055,  2060,  2061,  2064,  2068,  2072,  2076,
    2080,  2084,  2089,  2094,  2099,  2100,  2105,  2106,  2109,  2113,
    2117,  2121,  2125,  2129,  2133,  2134,  2137,  2141,  2143,  2145,
    2146,  2149,  2153,  2158,  2162,  2166,  2171,  2172,  2177,  2180,
    2183,  2184,  2187,  2191,  2196,  2197,  2203,  2209,  2210,  2213,
    2214,  2221,  2225,  2229,  2233,  2237,  2238,  2241,  2245,  2247,
    2249,  2250,  2253,  2257,  2261,  2265,  2269,  2274,  2275,  2284,
    2285,  2286,  2290,  2298,  2306,  2315,  2327,  2334,  2335,  2346,
    2348,  2352,  2359,  2361,  2363,  2365,  2367,  2368,  2372,  2374,
    2377,  2380,  2393,  2396,  2412,  2417,  2430,  2448,  2471,  2484,
    2485,  2488,  2492,  2497,  2502,  2506,  2509,  2512,  2516,  2520,
    2524,  2528,  2532,  2535,  2539,  2543,  2547,  2551,  2555,  2559,
    2563,  2569,  2572,  2575,  2579,  2589,  2593,  2596,  2606,  2609,
    2619,  2622,  2632,  2638,  2642,  2645,  2646,  2649,  2656,  2665,
    2674,  2685,  2687,  2692,  2694,  2700,  2705,  2710,  2718,  2723,
    2731,  2737,  2741,  2745,  2753,  2759,  2768,  2769,  2773,  2779,
    2785,  2787,  2789,  2791,  2793,  2795,  2797,  2799,  2801,  2803,
    2805,  2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,  2823,
    2825,  2827,  2829,  2833,  2836,  2839,  2843,  2847,  2851,  2855,
    2859,  2863,  2867,  2871,  2875,  2879,  2883,  2887,  2891,  2895,
    2900,  2905,  2910,  2915,  2920,  2925,  2930,  2935,  2940,  2945,
    2952,  2957,  2962,  2967,  2972,  2977,  2982,  2989,  2996,  3003,
    3009,  3012,  3014,  3016,  3018,  3020,  3022,  3024,  3026,  3028,
    3029,  3031,  3033,  3037,  3039,  3041,  3045,  3049,  3053,  3059,
    3063,  3068,  3073,  3080,  3089,  3098,  3104,  3110,  3112,  3114,
    3116,  3118,  3120,  3125,  3132,  3134
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
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
       5,   258,   259,   234,   301,     7,    -1,     5,   258,   284,
     259,   234,   301,     7,    -1,   448,    -1,   447,    -1,    -1,
     300,   294,     5,    -1,    23,   258,   451,   259,    -1,    99,
     258,     5,   259,    -1,    -1,   302,   305,    -1,   249,   249,
     249,    -1,    -1,   264,   304,   265,    -1,   301,    -1,   304,
     266,   301,    -1,    -1,   306,   307,    -1,   310,    -1,    -1,
      -1,   307,   235,   308,   307,     8,   309,   307,    -1,   307,
     249,   307,    -1,   307,   252,   307,    -1,    58,   258,   307,
     266,   307,   259,    -1,   307,   250,   307,    -1,   307,   247,
     307,    -1,   307,   248,   307,    -1,   307,   251,   307,    -1,
     307,   255,   307,    -1,   307,   241,   307,    -1,   307,   242,
     307,    -1,   307,   246,   307,    -1,   307,   245,   307,    -1,
     307,   240,   307,    -1,   307,   239,   307,    -1,   307,   238,
     307,    -1,   307,   237,   307,    -1,   307,   236,   307,    -1,
     248,   307,    -1,   247,   307,    -1,   253,   307,    -1,   256,
     307,   257,    -1,   452,    -1,   450,   315,   317,    -1,     5,
     388,    -1,   388,    -1,   388,   315,    -1,    -1,   122,   311,
     258,   305,   259,    -1,    -1,   129,   312,   258,   305,   266,
       3,   259,    -1,    -1,    60,   258,     5,   258,   313,   305,
     259,   259,   264,   451,   265,    -1,    61,   258,     5,   259,
     264,   451,   266,   451,   265,    -1,    55,   258,   388,   259,
      -1,    57,   258,   388,   259,    -1,    -1,    56,   314,   258,
     305,   266,   284,   259,    -1,   241,     5,   242,   258,   305,
     259,    -1,   262,     5,    -1,   262,   213,    -1,   262,   143,
      -1,   262,     3,    -1,   310,   261,     3,    -1,   261,     3,
      -1,   310,   263,   451,    -1,   258,   260,   259,    -1,   258,
     259,    -1,   258,   316,   259,    -1,   307,    -1,   316,   266,
     307,    -1,    -1,   264,   454,   265,    -1,   264,    69,   258,
     284,   259,   265,    -1,    -1,   318,   264,   319,   265,    -1,
      -1,   319,   320,    -1,    96,     5,     7,    -1,    82,   264,
     321,   265,    -1,    -1,   321,   264,   322,   265,    -1,    -1,
     322,   323,    -1,    69,   284,     7,    -1,    69,    64,     7,
      -1,    81,     5,   317,     7,    -1,    -1,   324,   264,   325,
     265,    -1,    -1,   325,   326,    -1,    96,     5,     7,    -1,
      88,   301,     7,    -1,    82,   264,   327,   265,    -1,    -1,
     327,   264,   328,   265,    -1,    -1,   328,   329,    -1,    86,
       5,     7,    -1,    87,     5,     7,    -1,    82,   264,   330,
     265,    -1,    -1,   330,   264,   331,   265,    -1,    -1,   331,
     332,    -1,    89,     5,     7,    -1,    90,   451,     7,    -1,
      91,   451,     7,    -1,    92,   451,     7,    -1,    93,   451,
       7,    -1,    94,   451,     7,    -1,    -1,   333,   334,    -1,
     264,   335,   265,    -1,   448,    -1,   447,    -1,    -1,   335,
     336,    -1,    96,   457,     7,    -1,    96,     5,   295,     7,
      -1,    86,     5,     7,    -1,    82,   264,   337,   265,    -1,
      82,     5,   264,   337,   265,    -1,    -1,   337,   264,   338,
     265,    -1,   337,   447,    -1,    -1,   338,   339,    -1,    86,
       5,     7,    -1,    69,   284,     7,    -1,    70,   284,     7,
      -1,    76,   301,     7,    -1,    75,   301,     7,    -1,    80,
     457,     7,    -1,    77,   264,   452,   294,   452,   265,     7,
      -1,    71,   284,     7,    -1,    72,   284,     7,    -1,    99,
     301,     7,    -1,    74,   301,     7,    -1,    73,   301,     7,
      -1,    99,   258,   301,   266,   301,   259,     7,    -1,    74,
     258,   301,   266,   301,   259,     7,    -1,    73,   258,   301,
     266,   301,   259,     7,    -1,    -1,   340,   341,    -1,   264,
     342,   265,    -1,   448,    -1,   447,    -1,    -1,   342,   343,
      -1,   342,   447,    -1,    96,   457,     7,    -1,    96,     5,
     295,     7,    -1,    86,     5,     7,    -1,    97,   264,   344,
     265,    -1,   105,   264,   350,   265,    -1,   107,   264,   357,
     265,    -1,    68,   264,   360,   265,    -1,    -1,   344,   264,
     345,   265,    -1,   344,   447,    -1,    -1,   345,   346,    -1,
      96,     5,     7,    -1,    98,     5,     7,    -1,    98,     5,
     295,     7,    -1,    99,     5,   347,     7,    -1,   100,   264,
       5,   294,     5,   265,     7,    -1,   101,   303,     7,    -1,
     102,   303,     7,    -1,   103,   284,     7,    -1,   104,   284,
       7,    -1,    -1,    -1,    -1,   264,   112,     5,     7,   111,
       5,   295,     7,   348,    62,   285,     7,   349,   132,     5,
     296,     7,   265,    -1,    -1,   350,   264,   351,   265,    -1,
      -1,   351,   352,    -1,    96,     5,     7,    -1,   106,   353,
       7,    -1,    98,   355,     7,    -1,     5,    -1,   264,   354,
     265,    -1,    -1,   354,   294,     5,    -1,     5,    -1,   264,
     356,   265,    -1,    -1,   356,   294,     5,    -1,    -1,   357,
     264,   358,   265,    -1,   357,   447,    -1,    -1,   358,   359,
      -1,    96,   457,     7,    -1,    86,     5,     7,    -1,    98,
       5,     7,    -1,    -1,   360,   264,   361,   265,    -1,   360,
     447,    -1,    -1,   361,   362,    -1,    98,     5,     7,    -1,
     108,   286,     7,    -1,   109,   289,     7,    -1,   110,   457,
       7,    -1,    -1,   363,   364,    -1,   264,   365,   265,    -1,
     448,    -1,   447,    -1,    -1,   365,   366,    -1,    96,   457,
       7,    -1,    96,     5,   295,     7,    -1,    86,     5,     7,
      -1,   112,   264,   367,   265,    -1,   116,   264,   373,   265,
      -1,    -1,   367,   264,   368,   265,    -1,   367,   447,    -1,
      -1,   368,   369,    -1,    96,   457,     7,    -1,    86,   107,
       7,    -1,    86,   117,     7,    -1,    86,     5,     7,    -1,
     186,   453,     7,    -1,    -1,   113,   457,   370,   372,     7,
      -1,   114,     3,     7,    -1,    -1,   258,   371,   305,   259,
       7,    -1,   130,   284,     7,    -1,    83,     5,     7,    -1,
      84,     5,     7,    -1,    81,     5,     7,    -1,   115,     3,
       7,    -1,    -1,   258,   457,   259,    -1,    -1,   373,   374,
      -1,   373,   448,    -1,   373,   447,    -1,   117,   264,   379,
     265,    -1,   118,   264,   379,   265,    -1,   119,   264,   383,
     265,    -1,   120,   264,   375,   265,    -1,    -1,   375,   376,
      -1,    86,     5,     7,    -1,   110,     5,     7,    -1,   264,
     377,   265,    -1,    -1,   377,   378,    -1,    78,   388,     7,
      -1,    79,   388,     7,    -1,   116,   388,     7,    -1,   130,
     284,     7,    -1,    -1,   379,   380,    -1,    -1,    -1,   387,
     258,   381,   305,   382,   266,   305,   259,     7,    -1,   130,
     284,     7,    -1,    81,     5,     7,    -1,    83,     5,     7,
      -1,   131,     7,    -1,    84,     5,     7,    -1,    85,   258,
       3,   259,     7,    -1,    -1,   383,   384,    -1,   130,   284,
       7,    -1,    -1,    -1,   387,   258,   385,   305,   386,   266,
     388,   259,     7,    -1,    -1,   122,    -1,   123,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,   264,
       5,   457,   265,    -1,   264,   457,   265,    -1,    -1,   389,
     390,    -1,   264,   391,   265,    -1,   448,    -1,   447,    -1,
      -1,   391,   392,    -1,    96,   457,     7,    -1,    96,     5,
     295,     7,    -1,   133,   264,   394,   265,    -1,    -1,   140,
     393,   264,   401,   265,    -1,   447,    -1,    -1,   394,   264,
     395,   265,    -1,   394,   447,    -1,   394,   448,    -1,    -1,
     395,   396,    -1,    96,   457,     7,    -1,    86,     5,     7,
      -1,   134,   397,     7,    -1,   135,   458,     7,    -1,   138,
     399,     7,    -1,   139,   457,     7,    -1,   136,   453,     7,
      -1,   137,   458,     7,    -1,   447,    -1,   457,    -1,   264,
     398,   265,    -1,    -1,   398,   294,   457,    -1,   457,    -1,
     264,   400,   265,    -1,    -1,   400,   294,   457,    -1,    -1,
     401,   402,    -1,     5,   457,     7,    -1,   142,   301,     7,
      -1,   155,   264,   408,   265,    -1,   159,   264,   410,   265,
      -1,   162,   264,   412,   265,    -1,   165,   264,   414,   265,
      -1,     5,   258,   457,   259,     7,    -1,   142,   258,   301,
     259,     7,    -1,   153,     7,    -1,    15,   258,   301,   259,
     264,   401,   265,    -1,    15,   258,   301,   259,   264,   401,
     265,    16,   264,   401,   265,    -1,   144,   258,   457,   266,
     301,   259,     7,    -1,   171,   258,   457,   266,   301,   266,
     301,   266,   301,   266,   301,   259,     7,    -1,   171,   258,
     457,   266,   301,   266,   301,   266,   301,   259,     7,    -1,
     171,   258,   457,   266,   301,   266,   301,   259,     7,    -1,
     172,   258,   457,   266,   453,   259,     7,    -1,   173,   258,
     457,   266,   453,   259,     7,    -1,   151,   258,   457,   266,
     301,   259,     7,    -1,   152,   258,   457,   266,   284,   266,
     457,   259,     7,    -1,   145,   258,   457,   266,   457,   266,
     453,   259,     7,    -1,   146,   258,   457,   266,   457,   266,
     451,   259,     7,    -1,   147,   258,   457,   266,   451,   266,
     453,   266,   451,   259,     7,    -1,   148,   258,   457,   266,
     451,   266,   451,   266,   451,   259,     7,    -1,   149,   258,
     457,   266,   451,   266,   451,   266,   451,   259,     7,    -1,
     154,   258,   301,   259,     7,    -1,   150,   258,   457,   266,
     457,   266,   457,   266,   451,   266,   453,   266,   451,   266,
     451,   259,     7,    -1,   155,   258,   451,   266,   451,   266,
     301,   266,   301,   259,   264,   401,   265,    -1,   159,   258,
     451,   266,   451,   266,   301,   266,   451,   266,   451,   259,
     264,   401,   265,    -1,   162,   258,   451,   266,   451,   266,
     301,   259,   264,   401,   265,    -1,   162,   258,   451,   266,
     451,   266,   301,   266,   451,   259,   264,   401,   265,    -1,
      -1,   194,   403,   258,   405,   406,   259,     7,    -1,    -1,
     197,   404,   258,   405,   406,   259,     7,    -1,   168,   258,
     284,   266,   301,   259,     7,    -1,   168,   258,   284,   266,
     301,   266,   451,   266,   301,   259,     7,    -1,   189,   258,
     457,   259,     7,    -1,   170,   258,   458,   259,     7,    -1,
     174,   258,   457,   266,   453,   266,   451,   259,     7,    -1,
     175,   258,   457,   266,   451,   266,   458,   259,     7,    -1,
     176,   258,   457,   266,   453,   266,   458,   259,     7,    -1,
     177,   264,   457,   265,     7,    -1,   178,   264,   457,   265,
       7,    -1,   184,   264,   457,   266,   284,   266,   458,   266,
     301,   265,     7,    -1,   184,   264,   457,   266,   284,   266,
     458,   265,     7,    -1,   179,   258,   457,   266,   457,   266,
     451,   266,   451,   259,   264,   401,   265,     7,    -1,   180,
     258,   457,   266,   457,   266,   451,   266,   451,   259,   264,
     401,   265,     7,    -1,   181,   258,   457,   266,   451,   259,
       7,    -1,   185,   264,     5,   266,     5,   266,   135,   458,
     266,     4,   265,     7,    -1,   185,   264,     5,   266,     5,
     266,   135,   458,   265,     7,    -1,   185,   264,     5,   266,
       5,   265,     7,    -1,   182,   258,   457,   266,   457,   259,
       7,    -1,   183,   258,   457,   266,   457,   259,     7,    -1,
     447,    -1,   303,    -1,   457,    -1,    -1,   406,   407,    -1,
     266,   209,   458,    -1,   266,   213,   453,    -1,   266,   453,
      -1,    -1,   408,   409,    -1,   156,   451,     7,    -1,   157,
     451,     7,    -1,   143,   301,     7,    -1,   158,   301,     7,
      -1,   140,   264,   401,   265,    -1,    -1,   410,   411,    -1,
     156,   451,     7,    -1,   157,   451,     7,    -1,   143,   301,
       7,    -1,   160,   451,     7,    -1,   161,   451,     7,    -1,
     140,   264,   401,   265,    -1,    -1,   412,   413,    -1,   163,
     451,     7,    -1,    88,   451,     7,    -1,   164,   301,     7,
      -1,    18,   451,     7,    -1,   140,   264,   401,   265,    -1,
      -1,   414,   415,    -1,   163,   451,     7,    -1,   166,   451,
       7,    -1,    88,   451,     7,    -1,    18,   451,     7,    -1,
     133,   457,     7,    -1,   167,   264,   416,   265,    -1,   140,
     264,   401,   265,    -1,   141,   264,   401,   265,    -1,    -1,
     416,   264,   417,   265,    -1,    -1,   417,   418,    -1,    86,
       5,     7,    -1,   112,     5,     7,    -1,   130,   284,     7,
      -1,    88,   451,     7,    -1,    99,   301,     7,    -1,    18,
       5,     7,    -1,    -1,   419,   420,    -1,   264,   421,   265,
      -1,   448,    -1,   447,    -1,    -1,   421,   422,    -1,    96,
     457,     7,    -1,    96,     5,   295,     7,    -1,   134,   457,
       7,    -1,   188,   457,     7,    -1,   112,   264,   423,   265,
      -1,    -1,   423,   264,   424,   265,    -1,   423,   448,    -1,
     423,   447,    -1,    -1,   424,   425,    -1,    96,   457,     7,
      -1,    75,   264,   426,   265,    -1,    -1,   426,   117,   264,
     427,   265,    -1,   426,     5,   264,   427,   265,    -1,    -1,
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
static const unsigned short int yyrline[] =
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
     964,   984,   990,   997,   997,  1004,  1012,  1016,  1022,  1025,
    1032,  1032,  1045,  1048,  1061,  1047,  1089,  1095,  1101,  1107,
    1113,  1119,  1125,  1131,  1137,  1143,  1149,  1155,  1161,  1167,
    1173,  1179,  1185,  1192,  1198,  1200,  1211,  1213,  1219,  1293,
    1327,  1336,  1349,  1348,  1363,  1362,  1377,  1376,  1392,  1404,
    1410,  1417,  1416,  1447,  1473,  1486,  1492,  1499,  1505,  1512,
    1519,  1531,  1532,  1533,  1538,  1539,  1545,  1547,  1550,  1566,
    1570,  1578,  1580,  1586,  1591,  1599,  1601,  1609,  1612,  1618,
    1621,  1624,  1663,  1668,  1676,  1682,  1688,  1695,  1698,  1706,
    1708,  1716,  1721,  1727,  1737,  1747,  1755,  1757,  1765,  1774,
    1780,  1828,  1831,  1834,  1837,  1840,  1852,  1856,  1861,  1866,
    1868,  1874,  1880,  1886,  1893,  1901,  1910,  1913,  1932,  1936,
    1941,  1951,  1958,  1964,  1974,  1979,  1985,  1990,  1998,  2006,
    2015,  2033,  2042,  2050,  2058,  2068,  2078,  2088,  2109,  2114,
    2119,  2124,  2126,  2133,  2138,  2140,  2146,  2153,  2161,  2170,
    2173,  2176,  2179,  2187,  2192,  2209,  2219,  2233,  2239,  2242,
    2247,  2252,  2266,  2286,  2291,  2296,  2301,  2330,  2336,  2340,
    2334,  2414,  2419,  2429,  2433,  2439,  2446,  2449,  2456,  2472,
    2479,  2481,  2500,  2512,  2520,  2524,  2540,  2545,  2551,  2561,
    2566,  2572,  2579,  2590,  2605,  2609,  2646,  2656,  2665,  2671,
    2704,  2707,  2710,  2726,  2730,  2735,  2740,  2742,  2749,  2753,
    2759,  2766,  2774,  2784,  2786,  2793,  2797,  2802,  2809,  2825,
    2831,  2834,  2838,  2841,  2851,  2856,  2855,  2887,  2893,  2892,
    3209,  3214,  3223,  3232,  3241,  3246,  3249,  3290,  3294,  3299,
    3304,  3313,  3316,  3319,  3322,  3334,  3339,  3344,  3354,  3364,
    3379,  3385,  3390,  3392,  3394,  3396,  3405,  3423,  3430,  3438,
    3429,  3570,  3575,  3584,  3593,  3598,  3607,  3619,  3633,  3647,
    3653,  3661,  3652,  3733,  3734,  3735,  3736,  3737,  3738,  3739,
    3740,  3746,  3767,  3792,  3796,  3801,  3806,  3808,  3815,  3820,
    3826,  3833,  3841,  3845,  3844,  3849,  3855,  3859,  3864,  3869,
    3879,  3892,  3898,  3901,  3910,  3913,  3918,  3923,  3928,  3933,
    3938,  3944,  3953,  3961,  3963,  3975,  3985,  3992,  3994,  4007,
    4014,  4027,  4049,  4056,  4062,  4068,  4074,  4082,  4104,  4111,
    4117,  4128,  4139,  4152,  4167,  4182,  4197,  4217,  4238,  4250,
    4270,  4287,  4306,  4327,  4341,  4355,  4362,  4396,  4409,  4423,
    4436,  4450,  4449,  4459,  4458,  4467,  4478,  4490,  4500,  4508,
    4521,  4534,  4548,  4558,  4568,  4582,  4596,  4614,  4633,  4644,
    4659,  4674,  4689,  4704,  4719,  4730,  4735,  4746,  4751,  4755,
    4758,  4768,  4785,  4794,  4800,  4804,  4808,  4812,  4817,  4829,
    4839,  4845,  4849,  4853,  4857,  4861,  4866,  4878,  4887,  4892,
    4896,  4900,  4904,  4908,  4920,  4932,  4937,  4941,  4945,  4949,
    4954,  4964,  4970,  4976,  4987,  4989,  4995,  5007,  5012,  5022,
    5051,  5054,  5057,  5065,  5083,  5089,  5094,  5099,  5101,  5106,
    5114,  5118,  5125,  5133,  5146,  5151,  5158,  5160,  5163,  5165,
    5172,  5177,  5182,  5185,  5192,  5196,  5202,  5217,  5226,  5231,
    5230,  5265,  5276,  5281,  5290,  5308,  5314,  5319,  5322,  5324,
    5329,  5336,  5340,  5347,  5359,  5370,  5375,  5382,  5381,  5409,
    5412,  5411,  5428,  5433,  5438,  5447,  5456,  5466,  5465,  5476,
    5485,  5497,  5521,  5522,  5523,  5524,  5530,  5531,  5537,  5543,
    5550,  5557,  5581,  5588,  5600,  5613,  5633,  5659,  5692,  5714,
    5745,  5749,  5756,  5763,  5770,  5774,  5778,  5782,  5786,  5796,
    5801,  5806,  5826,  5830,  5837,  5847,  5856,  5865,  5872,  5880,
    5884,  5893,  5897,  5901,  5909,  5915,  5919,  5927,  5934,  5942,
    5949,  5957,  5964,  5972,  5976,  5986,  5991,  6041,  6056,  6072,
    6092,  6112,  6150,  6154,  6167,  6169,  6184,  6190,  6196,  6202,
    6216,  6221,  6237,  6242,  6254,  6264,  6280,  6283,  6289,  6295,
    6307,  6308,  6309,  6310,  6311,  6312,  6313,  6314,  6315,  6316,
    6317,  6318,  6319,  6320,  6321,  6322,  6323,  6324,  6325,  6326,
    6327,  6331,  6332,  6333,  6334,  6335,  6336,  6337,  6338,  6339,
    6340,  6341,  6342,  6343,  6344,  6345,  6346,  6347,  6348,  6349,
    6350,  6351,  6352,  6353,  6354,  6355,  6356,  6357,  6358,  6359,
    6360,  6361,  6362,  6363,  6364,  6365,  6366,  6367,  6368,  6370,
    6372,  6377,  6378,  6379,  6380,  6381,  6382,  6383,  6384,  6403,
    6405,  6411,  6414,  6421,  6427,  6430,  6433,  6445,  6451,  6462,
    6478,  6500,  6515,  6553,  6561,  6573,  6581,  6592,  6595,  6602,
    6605,  6620,  6625,  6630,  6649,  6659
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
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
static const unsigned short int yytoknum[] =
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
static const unsigned short int yyr1[] =
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
     300,   301,   301,   302,   301,   301,   303,   303,   304,   304,
     306,   305,   307,   308,   309,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   310,   310,   310,   310,
     310,   310,   311,   310,   312,   310,   313,   310,   310,   310,
     310,   314,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   315,   315,   315,   316,   316,   317,   317,   317,   318,
     318,   319,   319,   320,   320,   321,   321,   322,   322,   323,
     323,   323,   324,   324,   325,   325,   326,   326,   326,   327,
     327,   328,   328,   329,   329,   329,   330,   330,   331,   331,
     332,   332,   332,   332,   332,   332,   333,   333,   334,   334,
     334,   335,   335,   336,   336,   336,   336,   336,   337,   337,
     337,   338,   338,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   340,   340,
     341,   341,   341,   342,   342,   342,   343,   343,   343,   343,
     343,   343,   343,   344,   344,   344,   345,   345,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   347,   348,   349,
     347,   350,   350,   351,   351,   352,   352,   352,   353,   353,
     354,   354,   355,   355,   356,   356,   357,   357,   357,   358,
     358,   359,   359,   359,   360,   360,   360,   361,   361,   362,
     362,   362,   362,   363,   363,   364,   364,   364,   365,   365,
     366,   366,   366,   366,   366,   367,   367,   367,   368,   368,
     369,   369,   369,   369,   369,   370,   369,   369,   371,   369,
     369,   369,   369,   369,   369,   372,   372,   373,   373,   373,
     373,   374,   374,   374,   374,   375,   375,   376,   376,   376,
     377,   377,   378,   378,   378,   378,   379,   379,   381,   382,
     380,   380,   380,   380,   380,   380,   380,   383,   383,   384,
     385,   386,   384,   387,   387,   387,   387,   387,   387,   387,
     387,   388,   388,   389,   389,   390,   390,   390,   391,   391,
     392,   392,   392,   393,   392,   392,   394,   394,   394,   394,
     395,   395,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   397,   397,   398,   398,   399,   399,   400,   400,   401,
     401,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   403,   402,   404,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   405,   405,   406,   406,   407,
     407,   407,   408,   408,   409,   409,   409,   409,   409,   410,
     410,   411,   411,   411,   411,   411,   411,   412,   412,   413,
     413,   413,   413,   413,   414,   414,   415,   415,   415,   415,
     415,   415,   415,   415,   416,   416,   417,   417,   418,   418,
     418,   418,   418,   418,   419,   419,   420,   420,   420,   421,
     421,   422,   422,   422,   422,   422,   423,   423,   423,   423,
     424,   424,   425,   425,   426,   426,   426,   427,   427,   429,
     428,   428,   428,   428,   428,   430,   430,   431,   431,   431,
     432,   432,   433,   433,   433,   433,   433,   435,   434,   436,
     437,   436,   438,   438,   438,   438,   438,   439,   438,   438,
     440,   440,   441,   441,   441,   441,   442,   442,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   444,
     444,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   446,   446,   447,   447,   447,
     447,   447,   447,   447,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   449,   449,   449,   449,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   452,   452,   452,   452,   452,   452,   452,   452,   453,
     453,   453,   453,   454,   454,   454,   454,   455,   455,   455,
     455,   455,   455,   455,   455,   456,   456,   457,   457,   458,
     458,   458,   458,   458,   458,   459
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
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
       3,     4,     4,     0,     2,     3,     0,     3,     1,     3,
       0,     2,     1,     0,     0,     7,     3,     3,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     3,     1,     3,     2,
       1,     2,     0,     5,     0,     7,     0,    11,     9,     4,
       4,     0,     7,     6,     2,     2,     2,     2,     3,     2,
       3,     3,     2,     3,     1,     3,     0,     3,     6,     0,
       4,     0,     2,     3,     4,     0,     4,     0,     2,     3,
       3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
       4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
       3,     3,     3,     3,     3,     3,     0,     2,     3,     1,
       1,     0,     2,     3,     4,     3,     4,     5,     0,     4,
       2,     0,     2,     3,     3,     3,     3,     3,     3,     7,
       3,     3,     3,     3,     3,     7,     7,     7,     0,     2,
       3,     1,     1,     0,     2,     2,     3,     4,     3,     4,
       4,     4,     4,     0,     4,     2,     0,     2,     3,     3,
       4,     4,     7,     3,     3,     3,     3,     0,     0,     0,
      18,     0,     4,     0,     2,     3,     3,     3,     1,     3,
       0,     3,     1,     3,     0,     3,     0,     4,     2,     0,
       2,     3,     3,     3,     0,     4,     2,     0,     2,     3,
       3,     3,     3,     0,     2,     3,     1,     1,     0,     2,
       3,     4,     3,     4,     4,     0,     4,     2,     0,     2,
       3,     3,     3,     3,     3,     0,     5,     3,     0,     5,
       3,     3,     3,     3,     3,     0,     3,     0,     2,     2,
       2,     4,     4,     4,     4,     0,     2,     3,     3,     3,
       0,     2,     3,     3,     3,     3,     0,     2,     0,     0,
       9,     3,     3,     3,     2,     3,     5,     0,     2,     3,
       0,     0,     9,     0,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     0,     2,     3,     1,     1,     0,     2,
       3,     4,     4,     0,     5,     1,     0,     4,     2,     2,
       0,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     0,     3,     1,     3,     0,     3,     0,
       2,     3,     3,     4,     4,     4,     4,     5,     5,     2,
       7,    11,     7,    13,    11,     9,     7,     7,     7,     9,
       9,     9,    11,    11,    11,     5,    17,    13,    15,    11,
      13,     0,     7,     0,     7,     7,    11,     5,     5,     9,
       9,     9,     5,     5,    11,     9,    14,    14,     7,    12,
      10,     7,     7,     7,     1,     1,     1,     0,     2,     3,
       3,     2,     0,     2,     3,     3,     3,     3,     4,     0,
       2,     3,     3,     3,     3,     3,     4,     0,     2,     3,
       3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
       3,     4,     4,     4,     0,     4,     0,     2,     3,     3,
       3,     3,     3,     3,     0,     2,     3,     1,     1,     0,
       2,     3,     4,     3,     3,     4,     0,     4,     2,     2,
       0,     2,     3,     4,     0,     5,     5,     0,     2,     0,
       6,     3,     3,     3,     3,     0,     2,     3,     1,     1,
       0,     2,     3,     3,     3,     3,     4,     0,     8,     0,
       0,     3,     7,     7,     8,    11,     6,     0,    10,     1,
       3,     6,     1,     1,     1,     1,     0,     3,     1,     2,
       2,    12,     2,    15,     4,    12,    17,    22,    12,     0,
       2,     3,     4,     4,     3,     2,     2,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       5,     2,     2,     3,     9,     3,     2,     9,     2,     9,
       2,     9,     5,     3,     2,     0,     2,     6,     8,     8,
      10,     1,     4,     1,     5,     4,     4,     7,     4,     7,
       5,     3,     3,     7,     5,     8,     0,     3,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
       4,     4,     4,     4,     4,     4,     6,     6,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     3,     1,     1,     3,     3,     3,     5,     3,
       4,     4,     6,     8,     8,     5,     5,     1,     1,     1,
       1,     1,     4,     6,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     4,     1,     5,    41,   747,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   748,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,    28,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   749,     0,     0,   754,
     750,    19,   751,   656,    43,   206,   169,   182,   238,    92,
     303,   383,   524,   555,     0,     0,   641,     0,   643,     0,
       0,     0,     0,    42,   579,     0,   729,     0,     0,   652,
     651,     0,    27,    26,    25,    23,    24,    22,    40,    30,
      32,    33,    34,    35,    31,    36,    37,    38,    39,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   722,   721,   747,     0,     0,     0,     0,     0,     0,
     723,   724,   725,   726,   727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,   681,     0,   731,   728,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,   747,     0,     7,    44,    49,
      52,    51,     0,   211,     9,   207,   210,   209,   171,    10,
     184,    11,   243,    12,   239,   242,   241,   747,     0,     8,
      93,    98,    97,   308,    13,   304,   307,   306,   388,    14,
     384,   387,   386,   529,    15,   525,   528,   527,   560,    16,
     556,   559,   558,   567,     0,     0,     0,     0,   586,     0,
       0,   747,    62,     0,    59,   577,     0,    60,   599,     0,
       0,   646,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   683,   684,
       0,   733,     0,   734,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     720,   645,   648,   745,   650,     0,   654,     0,     0,   752,
       0,   644,   657,     0,     0,     0,    83,   729,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,   642,   588,     0,     0,     0,     0,     0,
       0,     0,     0,   599,     0,     0,   103,   599,    75,     0,
      72,     0,    58,    70,    82,     0,     0,     0,   746,   739,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   682,   732,     0,
     737,     0,   698,   697,   696,   695,   691,   692,   694,   693,
     686,   685,   687,   688,   689,   690,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,   747,     0,     0,     0,
       0,     0,     0,   208,   212,     0,     0,   170,   172,     0,
     103,     0,   183,   185,     0,     0,     0,     0,     0,     0,
     240,   244,   245,     0,     0,    86,     0,     0,     0,     0,
     305,   309,     0,     0,   393,   385,   389,   395,     0,     0,
       0,     0,   526,   530,     0,     0,     0,     0,     0,   557,
     561,   569,     0,     0,   589,   590,   103,   592,     0,     0,
       0,     0,     0,     0,     0,   584,   585,   582,   583,   580,
       0,     0,     0,     0,     0,   599,   110,     0,     0,     0,
      86,     0,     0,    65,    56,    64,     0,     0,   600,   740,
     741,     0,     0,     0,     0,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,     0,   710,   711,   712,   713,
     714,   715,     0,     0,     0,     0,   735,   736,     0,     0,
     653,     0,   755,   753,   659,   658,     0,    91,    63,     0,
       0,     0,     0,    45,     0,     0,     0,   218,     0,   747,
       0,   175,     0,   189,     0,     0,   294,     0,   747,     0,
     253,   271,   286,   103,     0,     0,     0,     0,   747,     0,
     315,   337,   747,     0,   396,     0,   747,     0,   536,     0,
       0,     0,   569,     0,     0,     0,   570,     0,     0,   637,
       0,     0,     0,     0,     0,     0,     0,     0,   587,   586,
       0,     0,     0,     0,     0,   104,     0,     0,    78,    76,
      71,     0,    77,     0,    86,   576,   729,   729,     0,     0,
       0,     0,     0,   612,   729,     0,   635,   635,   635,   605,
     606,     0,     0,     0,   621,   622,   106,   626,   628,   630,
       0,     0,   634,     0,     0,     0,   649,     0,     0,     0,
       0,   647,   738,   719,   655,    88,    47,    46,    48,    84,
      50,     0,   218,     0,   215,     0,     0,   213,     0,   173,
       0,   187,   186,     0,   248,     0,   246,     0,     0,     0,
       0,   103,    94,   100,   312,     0,   310,     0,     0,     0,
     390,     0,   419,     0,   531,     0,   533,   534,   562,   570,
     563,   565,   564,   568,     0,     0,     0,     0,   103,     0,
     594,     0,     0,     0,   572,     0,     0,     0,     0,   105,
       0,   747,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,     0,   151,     0,     0,     0,     0,   142,   144,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
     140,     0,   137,   728,   573,     0,     0,     0,    73,   599,
       0,     0,   618,   623,   103,   615,     0,     0,   601,   604,
     613,   614,   607,   608,   611,   609,   610,   617,   616,     0,
     619,   103,   625,     0,     0,     0,     0,   633,   742,     0,
       0,   709,   716,   717,   718,     0,    53,     0,   221,   216,
     220,   214,   177,   174,   191,   188,   297,   252,   296,   247,
     256,   249,   255,   273,   250,   289,   251,   288,    95,     0,
     311,   318,   313,   317,     0,     0,     0,     0,   314,   338,
     340,   339,   391,   400,   392,   398,   399,     0,   532,   540,
     535,   539,   538,   566,   571,     0,   639,   638,     0,     0,
       0,     0,     0,     0,   581,   101,   102,   599,   574,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
     133,   135,     0,   159,   157,   154,   156,   155,   747,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,   166,    80,    79,    74,     0,    57,    69,     0,     0,
       0,   602,   603,   636,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,     0,     0,
       0,     0,     0,    96,     0,   356,   356,   367,   345,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   451,   453,   394,   420,
     474,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,   110,   110,     0,   136,
       0,   382,     0,   132,   131,   130,   129,   128,   124,   125,
     127,   126,   120,   121,   116,   119,   122,   117,   123,   158,
     160,   162,     0,   164,     0,     0,   138,     0,     0,    68,
      67,   103,   620,   107,   103,     0,     0,     0,   632,   743,
     744,    85,     0,     0,     0,     0,     0,   103,   103,   103,
     103,     0,     0,     0,   103,   219,   222,     0,     0,   176,
     178,     0,     0,     0,   190,   192,     0,     0,     0,     0,
     295,   298,     0,     0,     0,     0,   106,   106,     0,     0,
     254,   257,     0,     0,     0,   272,   274,     0,     0,     0,
     287,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   729,   328,   316,   319,   373,   373,   373,     0,     0,
       0,     0,     0,   729,     0,     0,     0,   397,   401,   410,
       0,     0,   103,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   429,   103,     0,   482,     0,   489,
       0,   497,   504,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   537,   541,   640,     0,     0,
       0,     0,     0,     0,     0,   149,     0,   150,     0,   146,
       0,     0,     0,   110,   381,     0,   161,   163,     0,     0,
       0,    81,   578,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,   103,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,   166,   196,     0,     0,
       0,     0,     0,     0,     0,     0,   267,     0,     0,     0,
       0,     0,     0,   282,   284,     0,   278,   280,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   325,
       0,     0,     0,     0,   110,     0,     0,     0,     0,   374,
     375,   376,   377,   378,   379,   380,     0,     0,   341,   357,
       0,   342,     0,   343,   368,     0,     0,     0,   350,   344,
     346,     0,     0,   413,     0,   411,     0,     0,     0,   417,
       0,   415,     0,     0,   421,     0,     0,   422,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   106,   544,     0,     0,     0,     0,
       0,     0,     0,   575,     0,     0,   110,     0,   143,     0,
       0,   114,   165,     0,   167,   103,     0,     0,     0,    54,
     224,   225,   230,   231,     0,   234,     0,   233,   227,   226,
      86,   228,   223,     0,   232,   180,   179,     0,     0,   193,
     194,   299,   300,   301,   302,   258,   259,     0,     0,     0,
      86,   263,   264,   265,   266,   275,    86,   277,    86,   276,
     292,   291,   293,   333,   331,   332,   323,   321,   322,   320,
     335,   327,   334,   330,   324,     0,     0,     0,     0,     0,
       0,   364,   358,     0,   370,     0,     0,     0,   403,   402,
      86,   404,   405,   408,   409,    86,   406,   407,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,   103,     0,
       0,     0,     0,   103,     0,     0,   103,   423,   483,     0,
       0,   103,     0,     0,     0,     0,   424,   490,     0,     0,
       0,     0,     0,   103,   425,   498,     0,     0,     0,     0,
       0,     0,     0,     0,   426,   505,   103,     0,   103,   729,
     729,   729,     0,   729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   475,   477,   476,   477,     0,   542,
       0,   729,     0,     0,     0,     0,     0,   118,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,     0,   103,
     103,     0,   103,   181,   198,   195,   260,     0,   261,     0,
     283,     0,   279,     0,     0,     0,     0,   362,   363,   365,
       0,   361,   110,   369,   110,   347,   348,     0,     0,     0,
       0,   349,   351,   412,     0,   416,     0,   427,   419,   428,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,   419,     0,     0,     0,     0,     0,   419,     0,     0,
       0,     0,     0,     0,     0,     0,   419,     0,     0,     0,
       0,     0,   419,   419,     0,     0,   514,     0,   458,     0,
       0,     0,     0,     0,     0,   462,   463,     0,     0,     0,
       0,     0,     0,     0,   457,     0,     0,     0,     0,   543,
       0,     0,     0,     0,     0,     0,   152,     0,     0,   145,
     115,     0,   624,   627,   629,   631,     0,     0,     0,     0,
       0,     0,     0,     0,   285,   281,     0,   326,   329,     0,
     359,   371,     0,     0,     0,     0,   414,   418,     0,     0,
     729,     0,   729,     0,     0,     0,     0,     0,   103,     0,
     486,   484,   485,   487,   103,     0,   493,   491,   492,   494,
     495,   103,   502,   500,     0,   499,   501,   509,   508,   510,
       0,     0,   506,   507,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   729,   478,     0,   547,   547,     0,   729,     0,
       0,     0,     0,     0,     0,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   199,     0,
       0,   336,   366,     0,     0,   352,   353,   354,   355,   430,
     432,     0,     0,     0,     0,     0,     0,   438,     0,     0,
     488,     0,   496,     0,   503,   512,   513,   516,   511,   455,
       0,     0,   436,   437,     0,     0,     0,     0,     0,   468,
     472,   473,     0,   471,     0,   452,     0,   729,   481,   454,
     373,   373,   598,     0,   591,   595,     0,     0,     0,   148,
       0,   237,   236,   229,   235,     0,     0,     0,     0,     0,
       0,     0,   262,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,     0,     0,   103,     0,
     103,     0,     0,     0,     0,     0,     0,   103,     0,   479,
     480,     0,     0,     0,     0,   546,     0,   548,   545,   729,
       0,     0,     0,     0,   200,   201,   202,   203,   204,   205,
       0,     0,     0,   419,   440,   441,     0,     0,     0,     0,
     439,     0,     0,   419,     0,     0,     0,     0,   103,     0,
       0,   515,   517,     0,   435,     0,   459,   460,   461,     0,
       0,   465,     0,     0,     0,     0,     0,     0,     0,   549,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
       0,     0,   729,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,     0,     0,     0,   470,
       0,   553,   554,   551,   552,   110,   593,     0,     0,     0,
     268,   360,   372,   431,   442,   443,   444,     0,   419,     0,
     449,   419,   523,   518,   521,   522,   519,   520,   456,   434,
       0,   419,   419,   464,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,   469,     0,   596,
       0,     0,     0,   447,   419,   450,   433,     0,     0,   550,
       0,     0,    89,     0,     0,   466,   467,     0,   269,     0,
      61,     0,   448,     0,     0,    90,     0,     0,     0,   446,
     597,    89,     0,     0,   270
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   112,   188,
     189,   944,  1548,   244,   624,   245,  2021,   246,   504,   780,
     929,   352,   500,   353,   415,   184,   314,  2030,   315,   117,
     210,   445,   495,   496,  1524,   936,   615,   616,   768,  1022,
    1542,   769,   886,   887,  1366,   881,   920,  1044,  1046,   114,
     321,   428,   678,   947,  1080,   115,   322,   433,   680,   948,
    1085,  1398,  1671,  1768,   113,   195,   320,   424,   673,   946,
    1076,   116,   204,   323,   441,   687,   950,  1101,  1409,  1999,
    2034,   688,   951,  1106,  1258,  1418,  1255,  1416,   689,   952,
    1111,   683,   949,  1091,   118,   215,   326,   451,   697,   954,
    1124,  1430,  1274,  1565,   698,   849,  1128,  1300,  1447,  1582,
    1125,  1289,  1572,  1773,  1127,  1294,  1574,  1774,  1290,   770,
     119,   220,   327,   456,   585,   701,   959,  1138,  1304,  1450,
    1310,  1455,   857,   999,  1181,  1182,  1525,  1645,  1743,  1329,
    1478,  1331,  1487,  1333,  1495,  1334,  1505,  1724,  1857,  1912,
     120,   225,   328,   463,   705,  1001,  1186,  1528,  1820,  1877,
    1965,   121,   230,   329,   470,    27,   330,   596,   714,    83,
     355,   237,   490,   345,   343,   357,   508,   794,  1000,    28,
     111,   771,   281,   171,   172,   282,   283,    29,   174,    61,
      62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1583
static const short int yypact[] =
{
   -1583,    71, -1583, -1583,   103,  4386,  -112,   104,   -91,   834,
     196,  2013,   130,   -52,   -12,    -9,    12,    20,    44,    46,
      53,    56,    90,    42, -1583, -1583,   534, -1583, -1583,   -57,
     157,   125,   361,   259,   390,   438,   453, -1583,   456,   548,
     558,   563,   585, -1583,   591, -1583,   596,   605,   619,   629,
     631,   637,   664,   676,   687,   690, -1583,   331,   198, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583,   326,    82, -1583,   338, -1583,   419,
     445,   468,   507, -1583, -1583,   359,  2503,  4242,    13, -1583,
   -1583,   520, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,   130,
     130,   -41,   114,    50,   -76,   150,   158,   179,   228,   248,
     344,   363,   438,   653,  4242,  4242,   438,   501,    51,   787,
    4242, -1583, -1583,  -111,   788,   539,   555,   586,   590,   598,
   -1583, -1583, -1583, -1583, -1583,   601,   608,   613,   615,   617,
     655,   659,   663,   675,   681,   705,   707,   726,   735,   741,
     746,   754,   758,   772,   779,   780,  4242,  4242,  4242,  4137,
    3395, -1583,   800, -1583, -1583,   808,  5077,   870,  4137,    92,
     574,    52,   872, -1583,   890,   237,   782, -1583, -1583, -1583,
   -1583, -1583,   135, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583,  -229,   783, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583,   733,  3412,  5509,  1091,   791,   756,
    1091,   -53, -1583,    73, -1583, -1583,   792, -1583, -1583,  5104,
     616, -1583,  1031,  1041,  4242,  4242,   130,  4242,  4242,  4242,
    4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,
    4242,  4242,  4242,  4242,  4242,  4242,  4242,   130,  -155,  -155,
    5532,  3395,   272, -1583,  4242,  4242,  4242,  4242,  4242,  4242,
    4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,
   -1583, -1583, -1583, -1583, -1583,   105, -1583,  4242,   130, -1583,
    4137, -1583,   819,  1339,   820,   821, -1583,  2451,   822,  4242,
     304,   316,   602,   738,    22, -1583,   764,   549,   778,   833,
     798,  4242,  4242, -1583, -1583,    51,    51,    21,   804,   805,
     807,   811,   812, -1583,    51,   238,   121, -1583,  1056,  4242,
   -1583,  4137, -1583, -1583, -1583,   799,    77,   -40, -1583, -1583,
     288,   818,   814,  1653,  3476,   824,  5555,  5582,  5609,  5636,
    5663,  5690,  5717,  5744,  5771,  5798,  3777,  5825,  5852,  5879,
    5906,  5933,  5960,  4123,  4308,  4341,   826, -1583, -1583,  4137,
    3444,  3688,  2477,  2374,  1277,  1277,  1303,  1303,  1303,  1303,
     633,   633,  -155,  -155,  -155,  -155,  1080,  5987,   837,   154,
    4190,  4242,  5131,    55,    55,   167,  -183,  1085,    55,  6014,
      49,  1092,  1095, -1583, -1583,   838,  1099, -1583, -1583,   842,
     159,  1102, -1583, -1583,   844,  1104,  1105,   849,   852,   854,
   -1583, -1583, -1583,   885,   862,   182,  1117,  1119,   868,   875,
   -1583, -1583,  1131,   886, -1583, -1583, -1583, -1583,  1144,   888,
     438,   438, -1583, -1583,   438,   889,   438,   130,  1149, -1583,
   -1583, -1583,  4078,  3151,   947, -1583,   159, -1583,   892,  4137,
     910,   923,   924,   244,   930, -1583, -1583, -1583, -1583, -1583,
    1185,   934,   943,   963,   976, -1583, -1583,   260,  4242,  6041,
     302,   481,  1097, -1583, -1583, -1583,  1221,  4311, -1583, -1583,
   -1583,  1224,  4242,  4242,  1225, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583,  4242, -1583, -1583, -1583, -1583,
   -1583, -1583,  4242,  4242,  4242,  1226,  3395, -1583,  4242,  4242,
   -1583,  1228, -1583, -1583, -1583,  6600,  5158, -1583, -1583,  1229,
    1230,  1231,  1235, -1583,  1232,   997,   980, -1583,  1238,   252,
    1239, -1583,  1240, -1583,  1241,  1242, -1583,  1246,   252,  1247,
   -1583, -1583, -1583,   159,  1021,  1251,  1262,  1261,   252,  1275,
   -1583, -1583,   252,  1276, -1583,  1016,   252,  1279, -1583,  1292,
    1301,  1302, -1583,  1304,  1306,  1307,  1019,  4242,  4242, -1583,
    1305,  1050,  4137,   503,  4137,  4137,  4137,  1311, -1583,   791,
    4242,  1317,   130,  1078,   269, -1583,  1997,  1321,  4106,  1330,
   -1583,     8, -1583,    51,   277, -1583,  2607,  2607,  1076,  1336,
     207,  4242,  4242, -1583,  2607,  4242,  1341, -1583, -1583, -1583,
   -1583,  4242,  1345,  2117, -1583, -1583,  1088,  1089,  1090,  1096,
    1098,  1353, -1583,  1107,  4364,  4387, -1583,  6064,  6091,  6118,
    6145, -1583,  6600,  6600, -1583, -1583, -1583, -1583, -1583,  1100,
   -1583,  1295, -1583,   137, -1583,  1106,  1356, -1583,   525, -1583,
     540, -1583, -1583,   370, -1583,  1393, -1583,   573,   546,   582,
    1394,   159, -1583, -1583, -1583,  1400, -1583,   587,    81,  1405,
   -1583,   485, -1583,  1414, -1583,   510, -1583, -1583, -1583,  1157,
   -1583, -1583, -1583, -1583,   534,  1024,  6172,  1159,   159,   552,
   -1583,   557,   561,   567, -1583,  1160,  6195,  1166,  1173, -1583,
    1426,   311, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583,  1176, -1583,  1177,  1178,  1179,  1180, -1583, -1583,
    1434,  1997,  1997,  1997,  1997,  1440,   245,  1443,  6652,  -131,
    1201,  1201, -1583,  1203, -1583,  4242,  4242,    67, -1583, -1583,
    1204,    69, -1583, -1583,   159, -1583,   130,   130, -1583,  6600,
    6600, -1583,  6600, -1583,  1459,  1459,  1459,  6600, -1583,  4137,
    6600,   159, -1583,  4242,  4242,  4242,  4137, -1583, -1583,  4242,
    4242, -1583, -1583, -1583, -1583,  4242, -1583,   661, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,  1460,
   -1583, -1583, -1583, -1583,  1208,  1213,  1222,  1223, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583,  2728, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583,  4242, -1583, -1583,  4242,  1233,
    1227,  1236,  1237,  1243, -1583, -1583, -1583, -1583, -1583, -1583,
    1244,  1248,  1244,  1997,  1483,  1485,  1252,  1255,  1250,  1254,
    1254,  1254,  4013, -1583, -1583, -1583, -1583, -1583,     5,  1256,
   -1583,  1997,  1997,  1997,  1997,  1997,  1997,  1997,  1997,  1997,
    1997,  1997,  1997,  1997,  1997,  1997,  1997,  1493,  4242,  1726,
   -1583,  1253,  6600,  4184, -1583,   325, -1583, -1583,   438,    73,
    1280, -1583, -1583, -1583,   621, -1583,   626,  4410,  4433,  4456,
     650,  6222,  6249,  5185,  1289, -1583,  1605,   141,    99,   693,
    1082,   138,   151, -1583,  2102, -1583, -1583, -1583, -1583,   422,
      64,   233,   155,  1290,  1298,  1299,  1308,  1314,  1316,  1319,
    1320,  1324,  1491,  1331,   -97,   160,   187,  1296,  1333,  1335,
    1343,  1344,  1346,  1348,  1351,  1361,  1347,  1357,  1364,  1365,
    1366,  1367,  1368,  1363,  1370,  1371, -1583, -1583, -1583, -1583,
   -1583,    87,  5212,  4479,   159,  4137,  4137,  4137,  4137,   365,
    1310, -1583,  1329,  2534,  1378,  1338, -1583, -1583,  1380, -1583,
    1297, -1583,  1997,  6671,  4211,  2445,  2445,  2445,  1147,  1147,
    1147,  1147,   739,   739,  1254,  1254,  1254,  1254,  1254, -1583,
   -1583, -1583,  1340,  6652,   373,  3951, -1583,  4242,  1498, -1583,
   -1583,   159, -1583, -1583,   159,  4242,  4242,  4242, -1583, -1583,
   -1583, -1583,  1379,    51,    51,    51,    51,   172,   282,   159,
     159,  1375,   438,  1492,   518, -1583, -1583,   133,  1558, -1583,
   -1583,  1385,  1560,  1589, -1583, -1583,  1623,    32,  1639,   438,
   -1583, -1583,  1657,  1658,  1659,  1401,  1088,  1088,    51,    51,
   -1583, -1583,  1663,    72,    78, -1583, -1583,  1664,   438,  1665,
   -1583, -1583,  1667,  1668,  1678,    97,   438,   438,  1681,  1683,
      51,  2607, -1583, -1583, -1583,  2193,  2440,  1072,   309,  1682,
     438,    79,   130,  2607,   130,    83,   438, -1583, -1583, -1583,
     438,  1686,   159,   159,  1687,   438,   438,   438,   438,   438,
     438,   438,   438,   438, -1583,   159,  4242, -1583,  4242, -1583,
    4242, -1583, -1583,    51,   130,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,  1684,
     438,  1430,  1437,  1435,   438, -1583, -1583, -1583,  4242,  1449,
     666,   670,   672,   678,  1698, -1583,  1451, -1583,  1997, -1583,
    1454,  1462,  1453, -1583, -1583,  1553, -1583, -1583,  1997,  1465,
     688,  6600, -1583,  1458, -1583,  4502,  4525,  4548,    73,  1713,
    1718,  1721,  1725,   159,  1727,   159,  1729,  1730,  1731,  1273,
    1733,  1735,   159,  1736,  1737,  1738,  1253, -1583,  1739,  1740,
    1742,  1743,  1745,  1746,  1747,    14,  1521,  1791,  1799,  1800,
    1803,  1805,  1806, -1583, -1583,  1808, -1583, -1583,  1809,  1810,
    1811,  1812,  1813,  1814,  1815,  1822,  1827,  1828,  1836, -1583,
    1838,  1840,  1842,  1843, -1583,  1846,  1848,  1849,  1598, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583,    51,  1850, -1583, -1583,
    1600, -1583,    51, -1583, -1583,  1601,  1859,  1873, -1583, -1583,
   -1583,  1872,  1875, -1583,  1876, -1583,  1877,  1878,  1879, -1583,
    1889, -1583,  1890,  1621, -1583,  1647,  1648, -1583,  1643,  1644,
    1649,  1650,  1651,  1654,  1661,  1662,  1672,  1666,  4571,     2,
    4594,   977,  4617,   317,   801,  1674,  1675,  1676,  1679,  1680,
    1685,  1688,  1689,  1696,  1697,  1700,  1702,  1703,  1704,  1705,
    1706,  1709,  1691,    84,    84, -1583,  1916,  5239,  1660,  1669,
    1699,  1677,  1712, -1583,    51,  6627, -1583,  4242, -1583,  1944,
    1693, -1583,  6652,    51, -1583,   159,  4242,  4242,  4242, -1583,
   -1583, -1583, -1583, -1583,  1714, -1583,  1715, -1583, -1583, -1583,
    1717, -1583, -1583,  1728, -1583, -1583, -1583,  1946,   692, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583,  1956,  1881,  1984,
    1717, -1583, -1583, -1583, -1583, -1583,   696, -1583,   704, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
    1741, -1583, -1583, -1583, -1583,  1744,  1988,  1989,  1991,  2001,
    1998, -1583, -1583,  2000, -1583,  2003,  2004,   416, -1583, -1583,
     709, -1583, -1583, -1583, -1583,   712, -1583, -1583,  2005,  1749,
    2007,   159,   438,   438,  4242,  4242,  4242,   438,   159,    51,
    2008,  4242,  1753,   159,  4242,  4242,   159, -1583, -1583,  4242,
    1754,   159,  4242,  4242,  4242,  4242, -1583, -1583,  4242,  4242,
    4242,  1755,  4242,   159, -1583, -1583,  4242,  4242,   438,  1757,
    1759,  4242,  4242,  1761, -1583, -1583,   159,  2019,   159,  2607,
    2607,  2607,  4242,  2607,  2049,  2052,   438,   438,  4242,   438,
     438,    51,  2055,  2054, -1583, -1583, -1583, -1583,    63, -1583,
    1798,  2607,  4137,  1807,  4137,  4137,  1804, -1583,  1821,  4640,
    1830, -1583,  1997,  1831,  1802,  5266,  5293,  5320,  1825,   159,
     159,  1273,   159, -1583, -1583, -1583, -1583,  2059, -1583,  2064,
   -1583,  2065, -1583,  2088,   438,  2092,  2094, -1583, -1583, -1583,
    1845, -1583, -1583, -1583, -1583, -1583, -1583,  1244,  1244,  1244,
      51, -1583, -1583, -1583,   438, -1583,   438, -1583, -1583, -1583,
    1847,  1829,  1841,  4663,  4686,  4709,  1844,  1852,  1851, -1583,
    4732, -1583,  2095,   969,  1084,  2106,  4755, -1583,  2107,  1169,
    1205,  1234,  1294,  4778,  1406,  1461, -1583,  1591,  2108,  1626,
    1837,  2109, -1583, -1583,  2096,  2171, -1583,   413, -1583,  1857,
    1866,  1868,  1862,  4801,  1863, -1583, -1583,  1864,  1865,  6276,
    1874,  1883,  1869,   717, -1583,   414,   429,  1854,  1870, -1583,
    4242,  1880,   730,  4242,   736,   740, -1583,  1884,  4242, -1583,
    6652,  1867, -1583, -1583, -1583, -1583,  1911,  1885,  1915,  1871,
    1917,   858,  2168,  1914, -1583, -1583,  1923, -1583, -1583,  2177,
   -1583, -1583,  2180,  2183,  2184,  2185, -1583, -1583,  2782,  2186,
    2607,  4242,  2607,  4242,  4242,   438,  2187,   438,   159,  2836,
   -1583, -1583, -1583, -1583,   159,  3021, -1583, -1583, -1583, -1583,
   -1583,   159, -1583, -1583,  3075, -1583, -1583, -1583, -1583, -1583,
    3129,  3314, -1583, -1583,   745,  2189,  4242,   159,  2190,  2192,
    4242,   130,   130,  4242,  4242,  2194,  2196,  2197,   130,  2198,
    1974,  2199,  2555, -1583,  2200, -1583, -1583,  5347,  2607,  1943,
    5374,  1953,  1955,  1957,  5401, -1583,    73,  2215,  2216,  2217,
    2218,  2221,  4242,  4242,  4242,  4242,  4242, -1583, -1583,  1897,
    2222, -1583, -1583,  1962,  1964, -1583, -1583, -1583, -1583,  2219,
   -1583,  1972,  6303,  1967,  4824,  4847,  1968, -1583,  1977,  1971,
   -1583,  1973, -1583,   433, -1583, -1583, -1583, -1583, -1583, -1583,
    4870,   504, -1583, -1583,  6330,  1981,  1982,  4893,  4916, -1583,
   -1583, -1583,   753, -1583,   130, -1583,   130,  2607, -1583, -1583,
    1490,  2313, -1583,  1976, -1583, -1583,  1983,  4137,  4242, -1583,
    1980, -1583, -1583, -1583, -1583,  2241,  2427,  2809,  2826,  2858,
    2890,  2244, -1583, -1583,  1244,  1987,  2245,  2247,  4242,  4242,
    4242,  4242,  2248,   159,  4242,  1992,  4242,   912,   159,  2250,
     159,  2253,  2255,  2256,  4242,  4242,  2258,   159,   755, -1583,
   -1583,  2261,  2262,  2263,    51, -1583,  2011, -1583, -1583,  2607,
    4242,   761,  5428,  4242, -1583, -1583, -1583, -1583, -1583, -1583,
    2006,  2012,  2014, -1583, -1583, -1583,  6357,  6384,  6411,  4939,
   -1583,  2020,  4962, -1583,  6438,  2267,  2275,  4242,   159,  2276,
      51, -1583, -1583,  2023, -1583,   514, -1583, -1583, -1583,  6465,
    6492, -1583,  2018,  2277,  2281,  2279,  2280,  2282,  2283, -1583,
    2026,  4985,  2027, -1583,  6519,  2286,  2287,  2292,  3368,  2293,
    2295,  2297,  2607,  2041,  4242,  3422,  2042,  2300,  2301,  3107,
    2302,  2303,  2306,  2307,  2315,   159,  2061,  2070,  2321, -1583,
    2074, -1583, -1583, -1583, -1583, -1583, -1583,  4242,  2076,  2322,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583,  2082, -1583,  6546,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
    2090, -1583, -1583, -1583,  2343,  2093,  5455,  4242, -1583,  2291,
    4242,  3607,  2091,  3661,  2349,  3715,  3900, -1583,  2351, -1583,
    5008,   438,  5031, -1583, -1583, -1583, -1583,  2352,  2354, -1583,
    4242,  2355,  2099,  4242,  3954, -1583, -1583,  5054, -1583,  2101,
   -1583,  6573, -1583,  4242,  2232, -1583,  2361,  5482,  2366, -1583,
   -1583,  2099,  2365,  2110, -1583
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583,   192, -1583,  -278, -1583,  1291, -1583, -1583,
    1300,  -353, -1583,  -503, -1583,  -403,  -554,   336, -1583, -1583,
   -1583, -1583,   516, -1583,  -613, -1583,  -994, -1583,  -615, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583,  1608, -1583,  1146, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,  1708, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
    1428, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1096,  -716,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1582, -1583, -1583, -1583,  1032,   860, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583, -1583,   639, -1583,
   -1583, -1583, -1583, -1583, -1583, -1583, -1583,  1801, -1583,  1690,
   -1583,  2265, -1583,  1781,  2155,  -327, -1583,   397,   111,   -68,
   -1583, -1583,   447,  -437,  -591,  -177,   -82, -1583,    -5,  -101,
     -48
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -681
static const short int yytable[] =
{
      30,   305,    34,   505,   173,   676,  1688,    60,   180,   181,
       6,   348,   552,     6,   685,   879,   483,  1196,    74,  1699,
     497,  1406,  1201,  1202,   695,  1705,   241,   241,   699,   324,
      91,  1295,   703,   802,  1714,   782,   783,   548,   175,    31,
    1720,  1721,   576,   791,   191,   197,   444,     6,   206,   212,
     217,   222,   227,   232,   556,     6,   241,   474,   475,   477,
     548,     7,     8,    75,    76,    77,   484,    78,  1647,     6,
     348,     3,     6,   360,   927,   -63,   348,  1253,     6,    13,
     348,   250,     6,  1256,     6,    31,     6,   123,     6,     6,
     242,   242,     7,     8,    75,    76,    77,   621,    78,   306,
     299,   242,  1265,    -3,    60,    60,   300,   192,    30,     6,
      13,    30,    30,    30,    30,    30,    30,   233,   778,   185,
     242,   238,   238,   247,   242,     7,     8,    75,    76,    77,
     917,    78,   918,   409,   928,     6,    56,    84,   241,    57,
      58,   503,  1472,    13,   491,  1473,   889,   890,   891,   892,
      75,    76,    77,   250,    78,   365,    31,    31,  1474,  1475,
    1476,  1156,  1183,     6,  1010,    35,  1012,  1157,   614,     7,
       8,    75,    76,    77,   501,    78,   386,   186,   491,   772,
    1648,  1081,   491,  1184,   207,  1082,  1083,    13,   198,   199,
       7,     8,    75,    76,    77,   491,    78,  1234,   844,   845,
     846,   847,   242,    43,  1266,   -63,    63,   408,    13,  1370,
    1077,    85,     6,    56,  1267,    31,    57,    58,   182,   506,
     492,   781,  1078,   190,   196,   183,   507,   205,   211,   216,
     221,   226,   231,     6,  1102,   173,  1103,  1107,   354,     7,
       8,    75,    76,    77,  1104,    78,   208,  1108,   894,  1109,
     895,    60,    64,     6,   492,    65,   777,    13,   492,     7,
       8,    75,    76,    77,   349,    78,    89,  1477,  1013,   175,
     177,   492,    60,    31,   924,   351,    66,    13,   675,   178,
    1435,   443,   243,   243,    67,   476,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,   603,    60,  1043,   491,    73,   537,    68,   309,
      69,  1938,   243,   557,   193,   194,   243,    70,   310,   247,
      71,  1945,  1140,   349,   772,   772,   772,   772,  1649,   349,
     247,   247,   247,   349,   351,  1489,  1254,   350,   124,   247,
     351,   350,  1257,  1303,   351,   779,   848,  1309,   801,     6,
     307,   354,  1185,   493,    72,     7,     8,    75,    76,    77,
      32,    78,   406,    59,  1084,    33,   594,    88,     6,   317,
     494,   389,  1538,    13,     7,     8,    75,    76,    77,   187,
      78,   492,   318,    75,    76,    77,   420,    78,   896,    87,
     421,    86,    13,   319,   243,  1296,  2001,    90,   425,  2003,
     422,   818,   819,  1105,   494,  1490,  1079,  1205,   494,  2005,
    2006,   543,   426,  1143,   200,   201,  1110,   560,  1158,  1297,
     389,   494,   202,   203,  1159,   719,   551,   721,   722,   723,
    1223,   569,  2024,   183,   442,    75,    76,    77,   457,    78,
      59,   575,   579,     6,   209,  1160,   772,   583,   183,   786,
     787,  1161,   925,   587,   110,   589,   590,  1491,   897,   591,
      92,   593,    60,    93,   772,   772,   772,   772,   772,   772,
     772,   772,   772,   772,   772,   772,   772,   772,   772,   772,
    1492,  1493,   772,  1248,  1249,   485,   486,   487,   488,   125,
       6,  1142,   213,   214,  1577,  1578,     7,     8,    75,    76,
      77,   313,    78,   607,   489,    31,     6,   239,  1129,   417,
     507,   728,   218,   219,    13,     6,   675,   122,  1130,   617,
      31,     7,     8,    75,    76,    77,   507,    78,   730,   788,
    1273,   494,  1579,   170,   176,   507,   -66,   388,   389,    13,
    1225,   491,  1307,   183,   173,   173,  1580,    75,    76,    77,
    1009,    78,   173,   509,   389,    94,  1131,  1132,  1133,  1134,
    1135,  1136,    75,    76,    77,    95,    78,   620,   183,   423,
      96,   235,   236,  1298,  1299,   767,  1050,   249,  1680,    31,
    1681,   427,  1494,  1365,  1048,   772,    75,    76,    77,   109,
      78,   507,    97,  1372,   125,    75,    76,    77,    98,    78,
      75,    76,    77,    99,    78,   549,   550,    60,   223,   224,
     554,   773,   100,   278,   279,   280,   354,   492,   247,   131,
     132,   133,   934,   130,  1194,    60,   101,   228,   229,   940,
     851,   507,  1207,   856,   826,   827,   102,   862,   103,  1208,
     135,   136,   137,   138,   104,   452,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   105,  1725,  1741,    75,    76,    77,   126,    78,  1726,
    1742,  1581,   453,   106,   429,   931,   932,  1137,  1744,   454,
     430,  1407,  1855,    30,   107,  1742,    30,   108,   431,  1856,
      30,   363,   364,   127,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,  1876,  1876,   128,    79,    80,    81,
      82,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   389,   622,   853,
     854,    75,    76,    77,   407,    78,   773,   773,   773,   773,
     412,   772,   899,  1859,   170,   129,   419,   494,   720,   389,
    1860,   772,   354,  1954,   859,   860,  1232,   179,   472,   473,
    1955,    60,    60,   234,   820,  1219,  1220,  1221,  1222,   822,
     823,  1086,  1390,   248,   828,   251,   499,   252,   832,  1235,
     837,  1087,  1088,  1089,   824,   825,   434,   301,   843,   850,
     833,   834,   855,   253,   455,   302,   861,   870,   389,  1496,
    1250,  1251,   871,   389,   435,    84,   872,   389,  1190,  1191,
    1192,  1193,   873,   389,   436,   437,   536,   830,   831,    36,
     308,    37,  1272,   438,   254,   439,   835,   836,   255,  1891,
     446,   841,   842,    38,    39,    40,   256,   545,   546,   257,
     447,  1682,  1683,  1684,   166,  1379,   258,   432,  1210,   167,
      41,   259,   168,   260,   458,   261,   448,   304,   773,   311,
     449,   359,   296,   297,   298,  1335,  1052,   389,   299,  1497,
     459,  1053,  1054,  1020,   300,   312,   773,   773,   773,   773,
     773,   773,   773,   773,   773,   773,   773,   773,   773,   773,
     773,   773,   460,   262,   773,  1058,   389,   263,  1630,  1631,
    1632,   264,  1634,  1049,   354,   818,   945,  1660,   820,   464,
    1905,  1359,   389,   265,  1498,  1360,   389,  1361,   389,   266,
    1651,  1499,  1500,  1362,   389,   618,   564,  1761,  1762,  1763,
    1764,  1765,  1766,  1374,   389,  1141,  1554,  1555,  1090,   654,
     655,  1560,   183,   267,  1501,   268,   461,  1502,  1503,  1562,
     183,  1995,   657,   465,  1583,   183,  1701,  1585,   183,   658,
     659,   660,  1739,  1740,   269,   662,   663,  1551,   912,   913,
     914,   915,   601,   270,   916,  1749,   389,   331,  1906,   271,
    1907,  1751,   389,   440,   272,  1752,   389,  1559,  1440,  1797,
    1798,  1908,   273,  1561,  1443,  1563,   274,   773,  1866,  1867,
    1923,  1924,   346,   466,  1909,   467,  1932,   389,    42,   450,
     275,  1306,   865,  1308,   795,   796,   361,   276,   277,   173,
     316,   325,  1910,   462,   715,   716,   362,  1584,   468,   344,
     356,   173,  1586,   410,   413,   414,   418,   726,   247,   247,
     247,   247,   471,  1336,   498,   502,  1504,  1230,   478,   479,
    1139,   480,   247,   170,   170,   481,   482,   510,   789,   790,
     511,   170,   792,   514,  1243,   535,  1536,   540,   797,   690,
     800,  1702,   553,   247,   247,  1543,   542,   558,   469,  1781,
     559,  1783,   561,  1260,   562,   772,   563,   565,   566,   567,
     568,  1268,  1269,   570,  1669,   247,   571,  1480,   572,   573,
    1481,   574,   577,  1767,   578,  1302,  1305,    60,  1892,    60,
    1311,  1312,   580,  1482,  1483,  1313,   582,  1484,  1485,   581,
    1318,  1319,  1320,  1321,  1322,  1323,  1324,  1325,  1326,   586,
     584,  1818,   588,   592,   595,   600,   602,  1823,   247,    60,
    1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,
    1347,  1348,  1349,  1350,   604,  1352,  1707,  1911,  1092,  1356,
    1093,  1094,  1095,  1096,  1097,  1098,  1099,   605,   606,   608,
     609,  1598,   610,   773,  1279,  1280,  1281,  1282,  1283,  1284,
    1285,   611,  1292,   773,   285,   286,   287,   839,   288,   289,
     290,   291,  1708,   354,   292,   293,   294,   295,   296,   297,
     298,   612,   922,   923,   299,   613,  1870,   623,   625,   653,
     300,   671,   656,   661,   869,   664,   666,   667,   668,   670,
     669,  1709,  1486,  1642,   672,   674,   677,   679,   681,   682,
     937,   938,   939,   684,   686,   691,   941,   942,   692,   285,
     286,   287,   943,   288,   289,   290,   291,   693,   694,   292,
     293,   294,   295,   296,   297,   298,   131,   132,     6,   299,
     702,   247,   696,   700,   713,   300,   704,   247,  1930,   866,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   706,
     930,  1710,  1685,   140,   141,   142,   143,   144,   707,   708,
     717,   710,  1002,   711,   712,  1003,   718,   935,   724,   285,
     286,   287,   727,   288,   289,   290,   291,   729,   774,   292,
     293,   294,   295,   296,   297,   298,  1935,  1293,   776,   299,
     784,   785,   131,   132,     6,   300,   793,  1100,  1526,  1526,
     798,  1977,   801,   803,   804,  1652,   807,  1654,  1655,   247,
     805,   816,   806,   821,   815,  1040,   808,   411,   247,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   910,   911,   912,   913,   914,   915,
     829,   838,   916,  1830,   285,   286,   287,   840,   288,   289,
     290,   291,   852,  1712,   292,   293,   294,   295,   296,   297,
     298,   858,   863,   868,   299,   876,   874,   173,   173,   173,
     300,   173,   877,   878,   880,   882,   883,   884,   885,   888,
     285,   286,   287,   893,   288,   289,   290,   291,   898,   173,
     292,   293,   294,   295,   296,   297,   298,  1591,  1592,   919,
     299,  -680,  1596,   926,   247,   933,   300,   953,  1713,   285,
     286,   287,   955,   288,   289,   290,   291,   956,  1144,   292,
     293,   294,   295,   296,   297,   298,   957,   958,  1014,   299,
    1015,  1005,  1018,  1621,  1211,   300,  1039,  1231,  1154,  1004,
    1006,  1007,  1215,  1216,  1217,  1212,  1011,  1008,   767,   916,
    1016,  1637,  1638,  1017,  1640,  1641,   247,  1045,   290,   291,
    1189,  1021,   292,   293,   294,   295,   296,   297,   298,   285,
     286,   287,   299,   288,   289,   290,   291,   773,   300,   292,
     293,   294,   295,   296,   297,   298,  1051,  1062,  1145,   299,
     294,   295,   296,   297,   298,   300,  1146,  1147,   299,  1676,
    1162,  1371,  1204,  1236,   300,  1238,  1148,  1213,   170,  1195,
    1214,  1871,  1149,  1872,  1150,   247,  1873,  1151,  1152,  1686,
     170,  1687,  1153,  1224,  1226,  1227,  1228,   166,  1197,  1155,
    1233,  1163,   167,  1164,  1239,   168,  1928,  1200,  1715,  1206,
     411,  1165,  1166,  1328,  1167,  1330,  1168,  1332,   173,  1169,
     173,  1171,  1279,  1280,  1281,  1282,  1283,  1284,  1285,  1170,
    1874,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1240,  1180,
    1805,  1806,  1952,  1717,  1179,  1357,  1199,  1812,  1203,  1229,
    1218,   285,   286,   287,   927,   288,   289,   290,   291,  1237,
    1881,   292,   293,   294,   295,   296,   297,   298,  1315,  1316,
     173,   299,  1244,  1245,  1246,  1247,   173,   300,  1252,  1259,
    1261,  1327,  1262,  1263,  1063,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1264,  1270,  1072,  1271,  1301,  1353,  1351,
    1786,  1073,  1788,  1314,  1317,  1354,   285,   286,   287,  1355,
     288,   289,   290,   291,  1074,  1363,   292,   293,   294,   295,
     296,   297,   298,  1868,  1358,  1869,   299,  1364,  1367,  1369,
    1380,  1368,   300,  1373,  1375,  1381,    60,    60,  1382,   131,
     132,   731,  1383,    60,  1385,   173,  1387,  1388,  1389,  1384,
    1391,  1386,  1392,  1394,  1395,  1396,  1399,  1400,  1393,  1401,
    1402,   354,  1403,  1404,  1405,  1875,   140,   141,   142,   143,
     144,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,  1408,   756,   757,   900,   901,
     902,   903,   904,   905,   906,   907,  1410,   173,   908,   909,
     910,   911,   912,   913,   914,   915,  1411,  1412,   916,    60,
    1413,    60,  1414,  1415,  1539,  1417,  1419,  1420,  1421,  1422,
    1423,  1424,  1425,  1545,  1546,  1547,   285,   286,   287,  1426,
     288,   289,   290,   291,  1427,  1428,   292,   293,   294,   295,
     296,   297,   298,  1429,  1718,  1431,   299,  1432,   758,  1433,
    1434,  1436,   300,  1437,  1438,   759,  1439,  1441,  1442,  1444,
     173,   285,   286,   287,  1445,   288,   289,   290,   291,   247,
    1075,   292,   293,   294,   295,   296,   297,   298,  1446,  1448,
    1458,   299,  1449,  1451,  1452,  1453,  1454,   300,   285,   286,
     287,  1544,   288,   289,   290,   291,  1456,  1457,   292,   293,
     294,   295,   296,   297,   298,   247,  1459,  1460,   299,  1461,
    1462,  1593,  1594,  1595,   300,  1463,  1464,  1465,  1600,   512,
    1466,  1603,  1604,  1529,  1531,  1470,  1606,  1467,  1468,  1609,
    1610,  1611,  1612,  1532,  1507,  1613,  1614,  1615,  1469,  1617,
    1506,  1534,  1508,  1619,  1620,  1509,  1510,  1540,  1624,  1625,
    1523,  1511,  1541,  1553,  1512,  1513,   170,   170,   170,  1633,
     170,  1514,  1515,  1556,  1533,  1639,  1516,   760,  1517,  1518,
    1519,  1520,  1521,   761,   762,  1522,  1535,  1590,   170,   763,
    1549,  1550,   764,   183,  1597,  1041,  1042,   765,   766,  1602,
     767,  1558,  1605,  1557,  1552,  1567,  1568,  1608,  1569,  1564,
     131,   132,   731,  1566,  1570,  1571,  2022,  1573,  1841,  1618,
    1575,  1576,  1587,  1588,  1589,  1599,    44,  1601,  1607,  1616,
      45,  1622,  1627,  1623,  1629,  1626,  1628,   140,   141,   142,
     143,   144,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,  1635,   756,   757,  1636,
    1643,  1644,  1650,  1656,  1672,  1667,  1668,  1662,  1670,  1673,
    1674,  1653,   285,   286,   287,    46,   288,   289,   290,   291,
    1657,    47,   292,   293,   294,   295,   296,   297,   298,  1659,
    1661,  1666,   299,  1675,    48,  1690,    49,  1747,   300,  1677,
    1750,  1678,  1700,  1722,  1679,  1754,  1689,  1691,    50,  1814,
    1695,  1696,    51,  1703,  1706,  1716,  1719,  1697,  1745,   758,
     131,   132,     6,  1727,    52,  1728,   759,  1729,  1730,  1732,
    1733,  1734,  1755,  1736,  1746,  1738,  1759,   170,  1782,   170,
    1784,  1785,  1737,  1753,  1757,    53,  1748,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,  1756,  1800,  1758,  1769,  1760,  1804,  1723,  1770,
    1807,  1808,  1771,  1112,  1772,  1113,  1114,  1775,  1115,   170,
    1776,  1777,  1778,  1780,  1787,   170,  1799,  1802,  1116,  1803,
      54,  1809,    55,  1810,  1811,  1813,  1815,  1819,  1824,  1836,
    1837,  1838,  1839,  1840,  1789,  1117,  1118,  1119,  1826,  1827,
    1791,  1828,  1831,  1832,  1833,  1834,  1835,  1793,  1843,  1842,
    1844,  1846,  1120,  1848,  1851,  1845,  1852,  1853,   760,  1854,
    1862,  1863,  1879,  1801,   761,   762,  1883,  1880,  1884,  1890,
     763,  1893,  1894,   764,  1895,  1900,  1903,  1914,   765,   766,
    1916,   767,  1917,  1918,   170,  1921,  1925,  1926,  1927,  1929,
     675,  1936,  1947,  1937,  1275,  1882,  1276,  1277,  1278,  1943,
    1948,  1951,  1953,  1958,  1959,  1960,  1961,  1962,  1121,  1963,
    1964,  1966,  1968,  1970,  1971,  1896,  1897,  1898,  1899,  1972,
    1974,  1902,  1975,  1904,  1976,  1978,  1981,  1982,  1983,  1985,
    1986,  1919,  1920,  1987,  1988,  1279,  1280,  1281,  1282,  1283,
    1284,  1285,  1989,  1286,  1287,  1991,   170,  1931,  1993,  1998,
    1934,   285,   286,   287,  1992,   288,   289,   290,   291,  1994,
    1997,   292,   293,   294,   295,   296,   297,   298,  2000,  2004,
    2007,   299,  2008,  2011,  1949,  2014,  2016,   300,  2019,  2025,
    1122,  2026,  2028,  2029,  2038,   166,  2035,  1123,  2039,  1901,
     167,  2041,  2043,   168,  1913,  2044,  1915,  2042,  1241,   921,
     817,   799,  1397,  1922,  1126,  1821,  1527,  1646,  1242,   170,
     725,  1979,   240,   709,  1871,   347,  1872,     0,     0,  1873,
       0,     0,     0,     0,   864,     0,   285,   286,   287,     0,
     288,   289,   290,   291,  1996,     0,   292,   293,   294,   295,
     296,   297,   298,     0,  1950,     0,   299,     0,     0,     0,
       0,     0,   300,     0,  1885,  1279,  1280,  1281,  1282,  1283,
    1284,  1285,     0,  1874,  2010,     0,     0,  2012,     0,     0,
       0,     0,     0,     0,   131,   132,   416,   134,  1288,     0,
      57,     0,     0,     0,     0,     0,     0,  2027,     0,     0,
    2031,  1990,     0,     0,     0,   135,   136,   137,   138,   139,
    2037,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   131,   132,   133,   134,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
     242,  1275,     0,  1276,  1277,  1278,     0,   135,   136,   137,
     138,   139,     0,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   131,   132,
     133,     0,  1279,  1280,  1281,  1282,  1283,  1284,  1285,     0,
    1286,  1287,     0,     0,     0,     0,     0,     0,  1878,   135,
     136,   137,   138,     0,     0,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     131,   132,   133,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,   135,   136,   137,   138,   300,     0,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,   165,     0,     0,   906,   907,   300,     0,
     908,   909,   910,   911,   912,   913,   914,   915,     0,   166,
     916,     0,     0,     0,   167,  1291,     0,   168,     0,     0,
       0,     0,   243,     0,   287,   169,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,   960,     0,   165,     0,     0,   300,     0,
       0,    75,    76,   961,     0,    78,     0,     0,     0,     0,
       0,   166,     0,     0,     0,     0,   167,     0,     0,   168,
       0,     0,     0,     0,  1816,     0,     0,   169,  1817,   900,
     901,   902,   903,   904,   905,   906,   907,     0,     0,   908,
     909,   910,   911,   912,   913,   914,   915,   960,     0,   916,
       0,     0,     0,     0,     0,    75,    76,   961,     0,    78,
    1198,     0,     0,   166,     0,     0,     0,     0,   167,     0,
       0,   168,     0,     0,     0,     0,  1886,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1887,     0,     0,     0,     0,     0,     0,
       0,   960,     0,     0,     0,     0,     0,     0,     0,    75,
      76,   961,     0,    78,     0,   166,     0,     0,     0,     0,
     167,     0,     0,   168,     0,  1888,     0,     0,     0,     0,
     962,   169,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,     0,     0,     0,   975,     0,     0,
     976,     0,     0,   977,     0,     0,   978,  1889,   979,   980,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,     0,     0,     0,   995,     0,     0,
       0,     0,   996,     0,   962,   997,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,     0,     0,
       0,   975,     0,     0,   976,     0,     0,   977,     0,     0,
     978,     0,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,     0,     0,
       0,   995,     0,     0,     0,     0,   996,     0,   962,   997,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,     0,   998,     0,   975,     0,     0,   976,     0,
       0,   977,     0,     0,   978,     0,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,     0,     0,     0,   995,   960,     0,     0,     0,
     996,     0,     0,   997,    75,    76,   961,     0,    78,     0,
       0,     0,     0,     0,   285,   286,   287,  1779,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,   285,   286,   287,   299,   288,   289,   290,   291,     0,
     300,   292,   293,   294,   295,   296,   297,   298,     0,     0,
     960,   299,     0,     0,     0,     0,     0,   300,    75,    76,
     961,     0,    78,   285,   286,   287,     0,   288,   289,   290,
     291,  1790,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,  1984,     0,     0,     0,     0,   300,
       0,     0,     0,     0,     0,   285,   286,   287,     0,   288,
     289,   290,   291,     0,   960,   292,   293,   294,   295,   296,
     297,   298,    75,    76,   961,   299,    78,     0,     0,     0,
       0,   300,     0,     0,     0,     0,     0,     0,     0,   598,
       0,     0,     0,   962,     0,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,     0,     0,     0,
     975,     0,     0,   976,     0,     0,   977,     0,     0,   978,
       0,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,   962,   997,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,     0,     0,     0,   975,     0,     0,   976,     0,     0,
     977,     0,     0,   978,     0,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,     0,     0,     0,   995,     0,     0,     0,     0,   996,
       0,   962,   997,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,     0,  1792,     0,   975,     0,
       0,   976,     0,     0,   977,     0,     0,   978,     0,   979,
     980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,     0,     0,     0,   995,   960,
       0,     0,     0,   996,     0,     0,   997,    75,    76,   961,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
    1794,     0,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,     0,
       0,     0,     0,   960,     0,     0,     0,     0,     0,     0,
       0,    75,    76,   961,     0,    78,   285,   286,   287,     0,
     288,   289,   290,   291,  1795,     0,   292,   293,   294,   295,
     296,   297,   298,   284,     0,     0,   299,     0,   599,     0,
       0,     0,   300,     0,     0,     0,     0,     0,     0,     0,
     332,     0,     0,     0,     0,     0,     0,   960,     0,     0,
       0,     0,     0,     0,     0,    75,    76,   961,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   538,     0,     0,     0,   962,     0,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
       0,     0,     0,   975,     0,     0,   976,     0,     0,   977,
       0,     0,   978,     0,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
       0,     0,     0,   995,     0,     0,     0,     0,   996,     0,
     962,   997,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,     0,     0,     0,   975,     0,     0,
     976,     0,     0,   977,     0,     0,   978,     0,   979,   980,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,     0,     0,     0,   995,     0,     0,
       0,     0,   996,     0,   962,   997,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,     0,  1796,
       0,   975,     0,     0,   976,     0,     0,   977,     0,     0,
     978,     0,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,     0,     0,
       0,   995,   960,     0,     0,     0,   996,     0,     0,   997,
      75,    76,   961,     0,    78,     0,     0,     0,     0,     0,
     285,   286,   287,  1973,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,   285,   286,   287,
     299,   288,   289,   290,   291,     0,   300,   292,   293,   294,
     295,   296,   297,   298,     0,     0,   960,   299,     0,     0,
       0,     0,     0,   300,    75,    76,   961,     0,    78,   285,
     286,   287,     0,   288,   289,   290,   291,  1980,     0,   292,
     293,   294,   295,   296,   297,   298,   539,     0,     0,   299,
       0,     0,     0,     0,     0,   300,     0,     0,     0,     0,
       0,   285,   286,   287,     0,   288,   289,   290,   291,     0,
     960,   292,   293,   294,   295,   296,   297,   298,    75,    76,
     961,   299,    78,     0,     0,     0,     0,   300,     0,     0,
       0,     0,   513,     0,     0,     0,     0,     0,     0,   962,
       0,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,     0,     0,     0,   975,     0,     0,   976,
       0,     0,   977,     0,     0,   978,     0,   979,   980,   981,
     982,   983,   984,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   994,     0,     0,     0,   995,     0,     0,     0,
       0,   996,     0,   962,   997,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,     0,     0,     0,
     975,     0,     0,   976,     0,     0,   977,     0,     0,   978,
       0,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,   962,   997,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,     0,  2013,     0,   975,     0,     0,   976,     0,     0,
     977,     0,     0,   978,     0,   979,   980,   981,   982,   983,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,     0,     0,     0,   995,   960,     0,     0,     0,   996,
       0,     0,   997,    75,    76,   961,     0,    78,     0,     0,
       0,     0,     0,   285,   286,   287,  2015,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
       0,     0,     0,     0,   131,   132,   133,     0,     0,   960,
       0,     0,     0,     0,     0,     0,     0,    75,    76,   961,
       0,    78,     0,     0,     0,   135,   136,   137,   138,     0,
    2017,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,     0,     0,
       0,     0,   285,   286,   287,     0,   288,   289,   290,   291,
    1209,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,     0,
       0,     0,   962,   525,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,     0,     0,     0,   975,
       0,     0,   976,     0,     0,   977,     0,     0,   978,     0,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   597,     0,     0,   995,
       0,     0,     0,     0,   996,     0,   962,   997,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
       0,     0,     0,   975,   775,     0,   976,     0,     0,   977,
       0,     0,   978,     0,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     131,   132,   133,   995,     0,     0,     0,     0,   996,     0,
       0,   997,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,   138,  2018,     0,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,  1047,   131,   132,     6,   544,     0,     0,   166,
       0,     0,     0,     0,   167,     0,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2032,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   131,   132,     6,   900,   901,
     902,   903,   904,   905,   906,   907,     0,     0,   908,   909,
     910,   911,   912,   913,   914,   915,     0,     0,   916,     0,
    1019,     0,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
       0,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,   285,   286,
     287,   299,   288,   289,   290,   291,     0,   300,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,     0,     0,   300,   166,   626,     0,     0,   532,
     167,     6,     0,   168,     0,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,   166,   299,
       0,     0,     0,   167,     0,   300,   168,   627,    14,   903,
     904,   905,   906,   907,    15,     0,   908,   909,   910,   911,
     912,   913,   914,   915,     0,     0,   916,    16,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   628,
       0,    18,     0,     0,     0,    19,     0,     0,     0,     0,
     166,     0,     0,     0,     0,   167,     0,    20,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   629,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
       0,     0,     0,    22,   533,    23,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,   285,
     286,   287,   300,   288,   289,   290,   291,   534,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,   285,   286,   287,   300,   288,   289,   290,   291,
     809,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,   285,   286,   287,   300,   288,
     289,   290,   291,   810,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,   285,   286,
     287,   300,   288,   289,   290,   291,  1055,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,   285,   286,   287,   300,   288,   289,   290,   291,  1056,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,   285,   286,   287,   300,   288,   289,
     290,   291,  1057,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,   285,   286,   287,
     300,   288,   289,   290,   291,  1188,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
     285,   286,   287,   300,   288,   289,   290,   291,  1376,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,   285,   286,   287,   300,   288,   289,   290,
     291,  1377,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,   285,   286,   287,   300,
     288,   289,   290,   291,  1378,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,   285,
     286,   287,   300,   288,   289,   290,   291,  1471,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,   285,   286,   287,   300,   288,   289,   290,   291,
    1479,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,   285,   286,   287,   300,   288,
     289,   290,   291,  1488,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,   285,   286,
     287,   300,   288,   289,   290,   291,  1658,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,   285,   286,   287,   300,   288,   289,   290,   291,  1692,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,   285,   286,   287,   300,   288,   289,
     290,   291,  1693,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,   285,   286,   287,
     300,   288,   289,   290,   291,  1694,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
     285,   286,   287,   300,   288,   289,   290,   291,  1698,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,   285,   286,   287,   300,   288,   289,   290,
     291,  1704,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,   285,   286,   287,   300,
     288,   289,   290,   291,  1711,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,   285,
     286,   287,   300,   288,   289,   290,   291,  1731,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,   285,   286,   287,   300,   288,   289,   290,   291,
    1849,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,   285,   286,   287,   300,   288,
     289,   290,   291,  1850,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,   285,   286,
     287,   300,   288,   289,   290,   291,  1858,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,   285,   286,   287,   300,   288,   289,   290,   291,  1864,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,   285,   286,   287,   300,   288,   289,
     290,   291,  1865,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,   285,   286,   287,
     300,   288,   289,   290,   291,  1942,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
     285,   286,   287,   300,   288,   289,   290,   291,  1944,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,   285,   286,   287,   300,   288,   289,   290,
     291,  1967,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,   285,   286,   287,   300,
     288,   289,   290,   291,  2020,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,   285,
     286,   287,   300,   288,   289,   290,   291,  2023,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,   285,   286,   287,   300,   288,   289,   290,   291,
    2033,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,   285,
     286,   287,   303,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,     0,     0,   300,   285,   286,   287,   358,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
       0,     0,   300,   285,   286,   287,   547,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
     285,   286,   287,   665,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,     0,     0,   300,   285,   286,   287,
    1061,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,     0,     0,   300,   285,   286,   287,  1187,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,     0,     0,
     300,   285,   286,   287,  1530,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,     0,     0,   300,   285,   286,
     287,  1663,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,     0,     0,   300,   285,   286,   287,  1664,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,     0,
       0,   300,   285,   286,   287,  1665,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   300,   285,
     286,   287,  1822,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,     0,     0,   300,   285,   286,   287,  1825,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
       0,     0,   300,   285,   286,   287,  1829,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,     0,     0,   300,
     285,   286,   287,  1933,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,     0,     0,   300,   285,   286,   287,
    2009,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,     0,     0,   300,   285,   286,   287,  2040,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,   333,   285,   286,   287,
     300,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,   387,
     285,   286,   287,   300,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,   515,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,   516,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,   517,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,   518,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,   519,     0,   300,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,   520,
       0,   300,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,   521,     0,   300,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,   522,     0,   300,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
     523,     0,   300,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,   524,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,   526,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,   527,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,   528,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,   529,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,   530,     0,   300,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,   531,
       0,   300,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,   541,     0,   300,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,   555,     0,   300,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,   619,   285,
     286,   287,   300,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,   811,     0,   300,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
     812,     0,   300,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,   813,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,   814,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,   867,
     285,   286,   287,   300,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,   875,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,  1059,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,  1060,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,  1735,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,  1847,     0,   300,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,  1861,
       0,   300,   285,   286,   287,     0,   288,   289,   290,   291,
       0,     0,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   299,     0,     0,     0,  1939,     0,   300,   285,
     286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   299,
       0,     0,     0,  1940,     0,   300,   285,   286,   287,     0,
     288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   299,     0,     0,     0,
    1941,     0,   300,   285,   286,   287,     0,   288,   289,   290,
     291,     0,     0,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   299,     0,     0,     0,  1946,     0,   300,
     285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     299,     0,     0,     0,  1956,     0,   300,   285,   286,   287,
       0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   299,     0,     0,
       0,  1957,     0,   300,   285,   286,   287,     0,   288,   289,
     290,   291,     0,     0,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   299,     0,     0,     0,  1969,     0,
     300,   285,   286,   287,     0,   288,   289,   290,   291,     0,
       0,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,   299,     0,     0,     0,  2002,     0,   300,   285,   286,
     287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,   299,     0,
       0,     0,  2036,     0,   300,   285,   286,   287,     0,   288,
     289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,   299,     0,     0,     0,     0,
       0,   300,   900,   901,   902,   903,   904,   905,   906,   907,
       0,     0,   908,   909,   910,   911,   912,   913,   914,   915,
       0,     0,   916,     0,     0,     0,  1537,   900,   901,   902,
     903,   904,   905,   906,   907,     0,     0,   908,   909,   910,
     911,   912,   913,   914,   915,     0,     0,   916,   902,   903,
     904,   905,   906,   907,     0,     0,   908,   909,   910,   911,
     912,   913,   914,   915,     0,     0,   916
};

static const short int yycheck[] =
{
       5,   178,     7,   356,    86,   559,  1588,    12,   109,   110,
       5,     3,   415,     5,   568,   731,   343,  1011,    23,  1601,
     347,     7,  1016,  1017,   578,  1607,     5,     5,   582,   258,
      35,  1127,   586,   646,  1616,   626,   627,     5,    86,   268,
    1622,  1623,   445,   634,   112,   113,   324,     5,   116,   117,
     118,   119,   120,   121,     5,     5,     5,   335,   336,   337,
       5,    11,    12,    13,    14,    15,   344,    17,     5,     5,
       3,     0,     5,   250,     5,   258,     3,     5,     5,    29,
       3,   264,     5,     5,     5,   268,     5,     5,     5,     5,
      69,    69,    11,    12,    13,    14,    15,   500,    17,     7,
     255,    69,     5,     0,   109,   110,   261,   112,   113,     5,
      29,   116,   117,   118,   119,   120,   121,   122,   621,     5,
      69,   126,   127,   128,    69,    11,    12,    13,    14,    15,
     261,    17,   263,   310,    65,     5,     6,    26,     5,     9,
      10,    64,   140,    29,    23,   143,   761,   762,   763,   764,
      13,    14,    15,   264,    17,   256,   268,   268,   156,   157,
     158,   258,    75,     5,   880,   256,   882,   264,   495,    11,
      12,    13,    14,    15,   351,    17,   277,    63,    23,   616,
     117,    82,    23,    96,     5,    86,    87,    29,   264,   265,
      11,    12,    13,    14,    15,    23,    17,    64,   117,   118,
     119,   120,    69,     7,   107,   258,   258,   308,    29,  1203,
      69,   268,     5,     6,   117,   268,     9,    10,   259,   259,
      99,   624,    81,   112,   113,   266,   266,   116,   117,   118,
     119,   120,   121,     5,    96,   317,    98,    86,   243,    11,
      12,    13,    14,    15,   106,    17,    67,    96,     3,    98,
       5,   256,   264,     5,    99,   264,   248,    29,    99,    11,
      12,    13,    14,    15,   256,    17,     7,   265,   883,   317,
     257,    99,   277,   268,   777,   267,   264,    29,   264,   266,
    1274,   259,   261,   261,   264,   264,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   479,   308,   919,    23,   264,   389,   264,   257,
     264,  1893,   261,   264,   264,   265,   261,   264,   266,   324,
     264,  1903,   258,   256,   761,   762,   763,   764,   265,   256,
     335,   336,   337,   256,   267,    18,   264,   264,   256,   344,
     267,   264,   264,   264,   267,   623,   265,   264,   264,     5,
     258,   356,   265,   232,   264,    11,    12,    13,    14,    15,
     256,    17,   257,   233,   265,   261,   467,     6,     5,   234,
     249,   266,  1366,    29,    11,    12,    13,    14,    15,   265,
      17,    99,   247,    13,    14,    15,    82,    17,   143,   264,
      86,   234,    29,   258,   261,    86,  1978,     7,    82,  1981,
      96,   264,   265,   265,   249,    88,   265,  1022,   249,  1991,
    1992,   257,    96,   258,   264,   265,   265,   422,   258,   110,
     266,   249,   264,   265,   264,   602,   259,   604,   605,   606,
     258,   436,  2014,   266,   323,    13,    14,    15,   327,    17,
     233,   259,   447,     5,   265,   258,   883,   452,   266,   242,
     243,   264,   779,   458,   256,   460,   461,   140,   213,   464,
       7,   466,   467,     7,   901,   902,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     163,   164,   919,  1096,  1097,   247,   248,   249,   250,   256,
       5,   258,   264,   265,    78,    79,    11,    12,    13,    14,
      15,   264,    17,   259,   266,   268,     5,     6,    86,   317,
     266,   612,   264,   265,    29,     5,   264,   191,    96,   259,
     268,    11,    12,    13,    14,    15,   266,    17,   259,   630,
    1121,   249,   116,    86,    87,   266,   259,   265,   266,    29,
     258,    23,  1133,   266,   626,   627,   130,    13,    14,    15,
     877,    17,   634,   265,   266,     7,   134,   135,   136,   137,
     138,   139,    13,    14,    15,     7,    17,   265,   266,   265,
       7,   124,   125,   264,   265,   264,   929,   130,  1572,   268,
    1574,   265,   265,  1198,   259,  1022,    13,    14,    15,   258,
      17,   266,     7,  1208,   256,    13,    14,    15,     7,    17,
      13,    14,    15,     7,    17,   413,   414,   612,   264,   265,
     418,   616,     7,   166,   167,   168,   621,    99,   623,     3,
       4,     5,   799,   264,   259,   630,     7,   264,   265,   806,
     698,   266,   259,   701,   264,   265,     7,   705,     7,   266,
      24,    25,    26,    27,     7,    96,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     7,   259,   259,    13,    14,    15,   258,    17,   266,
     266,   265,   133,     7,    82,   786,   787,   265,   259,   140,
      88,  1245,   259,   698,     7,   266,   701,     7,    96,   266,
     705,   254,   255,   258,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,  1820,  1821,   258,   193,   194,   195,
     196,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   266,   267,   264,
     265,    13,    14,    15,   307,    17,   761,   762,   763,   764,
     313,  1198,   767,   259,   317,   258,   319,   249,   265,   266,
     266,  1208,   777,   259,   264,   265,   258,   257,   331,   332,
     266,   786,   787,   130,   673,  1063,  1064,  1065,  1066,   264,
     265,    98,  1229,     6,   683,     7,   349,   258,   687,  1077,
     689,   108,   109,   110,   264,   265,    68,     7,   697,   698,
     264,   265,   701,   258,   265,     7,   705,   265,   266,    18,
    1098,  1099,   265,   266,    86,   714,   265,   266,  1005,  1006,
    1007,  1008,   265,   266,    96,    97,   389,   264,   265,     5,
     266,     7,  1120,   105,   258,   107,   264,   265,   258,  1843,
      86,   264,   265,    19,    20,    21,   258,   410,   411,   258,
      96,  1577,  1578,  1579,   248,  1218,   258,   265,  1045,   253,
      36,   258,   256,   258,    96,   258,   112,     7,   883,     7,
     116,   265,   249,   250,   251,  1163,   265,   266,   255,    88,
     112,   265,   266,   898,   261,     5,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   134,   258,   919,   265,   266,   258,  1509,  1510,
    1511,   258,  1513,   928,   929,   264,   265,  1542,   817,    96,
      18,   265,   266,   258,   133,   265,   266,   265,   266,   258,
    1531,   140,   141,   265,   266,   498,   430,    89,    90,    91,
      92,    93,    94,   265,   266,   960,   264,   265,   265,   512,
     513,   265,   266,   258,   163,   258,   188,   166,   167,   265,
     266,  1965,   525,   140,   265,   266,     7,   265,   266,   532,
     533,   534,   265,   266,   258,   538,   539,  1390,   249,   250,
     251,   252,   476,   258,   255,   265,   266,   264,    86,   258,
      88,   265,   266,   265,   258,   265,   266,  1410,  1286,   264,
     265,    99,   258,  1416,  1292,  1418,   258,  1022,   265,   266,
     265,   266,   266,   190,   112,   192,   265,   266,   194,   265,
     258,  1132,     8,  1134,   637,   638,     5,   258,   258,  1121,
     258,   258,   130,   265,   597,   598,     5,  1450,   215,   258,
     258,  1133,  1455,   234,   234,   234,   234,   610,  1063,  1064,
    1065,  1066,   264,  1164,     8,   266,   265,  1072,   264,   264,
     959,   264,  1077,   626,   627,   264,   264,   259,   631,   632,
     266,   634,   635,   259,  1089,   259,  1364,     7,   641,   573,
     643,     7,     7,  1098,  1099,  1373,   259,     5,   265,  1690,
       5,  1692,   264,  1108,     5,  1542,   264,     5,   264,     5,
       5,  1116,  1117,   264,  1551,  1120,   264,   140,   264,   234,
     143,   259,     5,   265,     5,  1130,  1131,  1132,  1844,  1134,
    1135,  1136,   264,   156,   157,  1140,     5,   160,   161,   264,
    1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,     5,
     264,  1742,   264,   264,     5,   208,   264,  1748,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,   264,  1180,     7,   265,    96,  1184,
      98,    99,   100,   101,   102,   103,   104,   264,   264,   259,
       5,  1469,   258,  1198,   122,   123,   124,   125,   126,   127,
     128,   258,   130,  1208,   235,   236,   237,   691,   239,   240,
     241,   242,     7,  1218,   245,   246,   247,   248,   249,   250,
     251,   258,   775,   776,   255,   249,  1817,   130,     7,     5,
     261,   234,     7,     7,   718,     7,     7,     7,     7,     7,
       5,     7,   265,  1521,   264,     7,     7,     7,     7,     7,
     803,   804,   805,     7,     7,   234,   809,   810,     7,   235,
     236,   237,   815,   239,   240,   241,   242,     5,     7,   245,
     246,   247,   248,   249,   250,   251,     3,     4,     5,   255,
     264,  1286,     7,     7,   265,   261,     7,  1292,  1879,   265,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     7,
     784,     7,  1580,    30,    31,    32,    33,    34,     7,     7,
       5,     7,   865,     7,     7,   868,   266,   801,     7,   235,
     236,   237,     5,   239,   240,   241,   242,   249,     7,   245,
     246,   247,   248,   249,   250,   251,  1890,   265,     8,   255,
     264,     5,     3,     4,     5,   261,     5,   265,  1353,  1354,
       5,  1942,   264,   264,   264,  1532,     3,  1534,  1535,  1364,
     264,    66,   264,     7,   264,   918,   259,   261,  1373,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   247,   248,   249,   250,   251,   252,
       7,     7,   255,  1756,   235,   236,   237,     7,   239,   240,
     241,   242,     7,     7,   245,   246,   247,   248,   249,   250,
     251,     7,   265,   264,   255,   259,   266,  1509,  1510,  1511,
     261,  1513,   259,     7,   258,   258,   258,   258,   258,     5,
     235,   236,   237,     3,   239,   240,   241,   242,     5,  1531,
     245,   246,   247,   248,   249,   250,   251,  1462,  1463,   258,
     255,   258,  1467,   259,  1469,     6,   261,     7,     7,   235,
     236,   237,   264,   239,   240,   241,   242,   264,   962,   245,
     246,   247,   248,   249,   250,   251,   264,   264,     5,   255,
       5,   264,   242,  1498,  1047,   261,     3,     5,     7,   266,
     264,   264,  1055,  1056,  1057,     7,   258,   264,   264,   255,
     258,  1516,  1517,   258,  1519,  1520,  1521,   264,   241,   242,
    1004,   265,   245,   246,   247,   248,   249,   250,   251,   235,
     236,   237,   255,   239,   240,   241,   242,  1542,   261,   245,
     246,   247,   248,   249,   250,   251,   266,   258,   258,   255,
     247,   248,   249,   250,   251,   261,   258,   258,   255,  1564,
     264,     8,   265,     5,   261,     5,   258,  1051,  1121,   259,
    1054,    81,   258,    83,   258,  1580,    86,   258,   258,  1584,
    1133,  1586,   258,  1067,  1068,  1069,  1070,   248,   259,   258,
    1074,   258,   253,   258,     5,   256,  1874,   259,     7,   259,
     261,   258,   258,  1156,   258,  1158,   258,  1160,  1690,   258,
    1692,   264,   122,   123,   124,   125,   126,   127,   128,   258,
     130,   264,   258,   258,   258,   258,   258,   264,     5,   258,
    1731,  1732,  1910,     7,   264,  1188,   258,  1738,   258,   264,
     261,   235,   236,   237,     5,   239,   240,   241,   242,   264,
    1827,   245,   246,   247,   248,   249,   250,   251,  1142,  1143,
    1742,   255,     5,     5,     5,   264,  1748,   261,     5,     5,
       5,  1155,     5,     5,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     5,     3,    80,     3,     5,   258,     5,
    1695,    86,  1697,     7,     7,   258,   235,   236,   237,   264,
     239,   240,   241,   242,    99,     7,   245,   246,   247,   248,
     249,   250,   251,  1814,   265,  1816,   255,   266,   264,   266,
       7,   259,   261,   258,   266,     7,  1731,  1732,     7,     3,
       4,     5,     7,  1738,     7,  1817,     7,     7,     7,  1223,
       7,  1225,     7,     7,     7,     7,     7,     7,  1232,     7,
       7,  1756,     7,     7,     7,   265,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,   264,    60,    61,   235,   236,
     237,   238,   239,   240,   241,   242,     5,  1879,   245,   246,
     247,   248,   249,   250,   251,   252,     7,     7,   255,  1814,
       7,  1816,     7,     7,  1367,     7,     7,     7,     7,     7,
       7,     7,     7,  1376,  1377,  1378,   235,   236,   237,     7,
     239,   240,   241,   242,     7,     7,   245,   246,   247,   248,
     249,   250,   251,     7,     7,     7,   255,     7,   122,     7,
       7,     5,   261,     5,     5,   129,   258,     7,   258,   258,
    1942,   235,   236,   237,     5,   239,   240,   241,   242,  1874,
     265,   245,   246,   247,   248,   249,   250,   251,     5,     7,
     259,   255,     7,     7,     7,     7,     7,   261,   235,   236,
     237,  1375,   239,   240,   241,   242,     7,     7,   245,   246,
     247,   248,   249,   250,   251,  1910,   259,   259,   255,   266,
     266,  1464,  1465,  1466,   261,   266,   266,   266,  1471,   266,
     266,  1474,  1475,     7,   264,   259,  1479,   266,   266,  1482,
    1483,  1484,  1485,   264,   259,  1488,  1489,  1490,   266,  1492,
     266,   264,   266,  1496,  1497,   266,   266,     3,  1501,  1502,
     259,   266,   259,     7,   266,   266,  1509,  1510,  1511,  1512,
    1513,   265,   265,     7,   265,  1518,   266,   241,   266,   266,
     266,   266,   266,   247,   248,   266,   264,  1461,  1531,   253,
     266,   266,   256,   266,  1468,   259,   260,   261,   262,  1473,
     264,     7,  1476,   112,   266,     7,     7,  1481,     7,   258,
       3,     4,     5,   259,     3,     7,  2011,     7,   111,  1493,
       7,     7,     7,   264,     7,     7,     3,   264,   264,   264,
       7,   264,  1506,   264,  1508,   264,     7,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     7,    60,    61,     7,
       5,     7,   264,   259,     5,  1549,  1550,   265,  1552,     5,
       5,   264,   235,   236,   237,    62,   239,   240,   241,   242,
     259,    68,   245,   246,   247,   248,   249,   250,   251,   259,
     259,   266,   255,     5,    81,   266,    83,  1650,   261,     7,
    1653,     7,     7,     7,   259,  1658,   259,   266,    95,   135,
     266,   259,    99,     7,     7,     7,     7,   266,   264,   122,
       3,     4,     5,   266,   111,   259,   129,   259,   266,   266,
     266,   266,   265,   259,   264,   266,   265,  1690,  1691,  1692,
    1693,  1694,   259,   259,   259,   132,   266,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   261,  1726,   259,     7,   259,  1730,     7,   265,
    1733,  1734,   259,    81,     7,    83,    84,     7,    86,  1742,
       7,     7,     7,     7,     7,  1748,     7,     7,    96,     7,
     187,     7,   189,     7,     7,     7,     7,     7,   265,  1762,
    1763,  1764,  1765,  1766,  1698,   113,   114,   115,   265,   264,
    1704,   264,     7,     7,     7,     7,     5,  1711,   266,     7,
     266,   259,   130,   266,   266,    16,   259,   266,   241,   266,
     259,   259,   266,  1727,   247,   248,   266,   264,     7,     5,
     253,   264,     7,   256,     7,     7,   264,     7,   261,   262,
       7,   264,     7,     7,  1817,     7,     5,     5,     5,   258,
     264,   259,     5,   259,    81,  1828,    83,    84,    85,   259,
       5,     5,   259,   265,     7,     4,     7,     7,   186,     7,
       7,   265,   265,     7,     7,  1848,  1849,  1850,  1851,     7,
       7,  1854,     7,  1856,     7,   264,   264,     7,     7,     7,
       7,  1864,  1865,     7,     7,   122,   123,   124,   125,   126,
     127,   128,     7,   130,   131,   264,  1879,  1880,     7,     7,
    1883,   235,   236,   237,   264,   239,   240,   241,   242,   265,
     264,   245,   246,   247,   248,   249,   250,   251,   266,   259,
       7,   255,   259,    62,  1907,   264,     7,   261,     7,     7,
     258,     7,     7,   264,   132,   248,   265,   265,     7,  1853,
     253,     5,     7,   256,  1858,   265,  1860,  2041,  1087,   771,
     672,   264,  1236,  1867,   956,  1746,  1354,  1527,  1088,  1942,
     609,  1944,   127,   592,    81,   240,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,   714,    -1,   235,   236,   237,    -1,
     239,   240,   241,   242,  1967,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,  1908,    -1,   255,    -1,    -1,    -1,
      -1,    -1,   261,    -1,     7,   122,   123,   124,   125,   126,
     127,   128,    -1,   130,  1997,    -1,    -1,  2000,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,   265,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,  2020,    -1,    -1,
    2023,  1955,    -1,    -1,    -1,    24,    25,    26,    27,    28,
    2033,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    81,    -1,    83,    84,    85,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     3,     4,
       5,    -1,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,    -1,    -1,   265,    24,
      25,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       3,     4,     5,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    24,    25,    26,    27,   261,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   235,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,   232,    -1,    -1,   241,   242,   261,    -1,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,   248,
     255,    -1,    -1,    -1,   253,   265,    -1,   256,    -1,    -1,
      -1,    -1,   261,    -1,   237,   264,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,     5,    -1,   232,    -1,    -1,   261,    -1,
      -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,   248,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,    -1,   209,    -1,    -1,   264,   213,   235,
     236,   237,   238,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,   252,     5,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
     266,    -1,    -1,   248,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,    -1,     7,    -1,    -1,   264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,   248,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,     7,    -1,    -1,    -1,    -1,
     142,   264,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,     7,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
      -1,    -1,   194,    -1,   142,   197,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,   265,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,
     194,    -1,    -1,   197,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,   235,   236,   237,   265,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,   235,   236,   237,   255,   239,   240,   241,   242,    -1,
     261,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
       5,   255,    -1,    -1,    -1,    -1,    -1,   261,    13,    14,
      15,    -1,    17,   235,   236,   237,    -1,   239,   240,   241,
     242,   265,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,     7,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,    -1,    -1,   235,   236,   237,    -1,   239,
     240,   241,   242,    -1,     5,   245,   246,   247,   248,   249,
     250,   251,    13,    14,    15,   255,    17,    -1,    -1,    -1,
      -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,
      -1,   142,   197,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   265,    -1,   159,    -1,
      -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    -1,   189,     5,
      -1,    -1,    -1,   194,    -1,    -1,   197,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,   235,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,   235,   236,   237,    -1,
     239,   240,   241,   242,   265,    -1,   245,   246,   247,   248,
     249,   250,   251,     8,    -1,    -1,   255,    -1,   257,    -1,
      -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,
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
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
     235,   236,   237,   265,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,   235,   236,   237,
     255,   239,   240,   241,   242,    -1,   261,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,     5,   255,    -1,    -1,
      -1,    -1,    -1,   261,    13,    14,    15,    -1,    17,   235,
     236,   237,    -1,   239,   240,   241,   242,   265,    -1,   245,
     246,   247,   248,   249,   250,   251,     8,    -1,    -1,   255,
      -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,
      -1,   235,   236,   237,    -1,   239,   240,   241,   242,    -1,
       5,   245,   246,   247,   248,   249,   250,   251,    13,    14,
      15,   255,    17,    -1,    -1,    -1,    -1,   261,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,   142,
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
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    24,    25,    26,    27,    -1,
     265,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,   235,   236,   237,    -1,   239,   240,   241,   242,
      69,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,   142,   266,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,     8,    -1,    -1,   189,
      -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,     8,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
       3,     4,     5,   189,    -1,    -1,    -1,    -1,   194,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,   265,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     8,     3,     4,     5,     6,    -1,    -1,   248,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     3,     4,     5,   235,   236,
     237,   238,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,   255,    -1,
     257,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
      -1,   235,   236,   237,    -1,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,   235,   236,
     237,   255,   239,   240,   241,   242,    -1,   261,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261,   248,    75,    -1,    -1,   266,
     253,     5,    -1,   256,    -1,    -1,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,   235,
     236,   237,    -1,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,   248,   255,
      -1,    -1,    -1,   253,    -1,   261,   256,   136,    62,   238,
     239,   240,   241,   242,    68,    -1,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,   255,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    95,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,   253,    -1,   111,   256,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   235,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   187,   266,   189,   235,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
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
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,   261,   235,   236,   237,   265,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,   257,   235,   236,   237,
     261,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,
     235,   236,   237,   261,   239,   240,   241,   242,    -1,    -1,
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
      -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,   235,
     236,   237,   261,   239,   240,   241,   242,    -1,    -1,   245,
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
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,
     235,   236,   237,   261,   239,   240,   241,   242,    -1,    -1,
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
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      -1,   261,   235,   236,   237,   238,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,   255,    -1,    -1,    -1,   259,   235,   236,   237,
     238,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,   255,   237,   238,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,   255
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
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
     264,   265,   264,   265,   341,   447,   448,     5,    67,   265,
     299,   447,   448,   264,   265,   364,   447,   448,   264,   265,
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
     265,   343,   447,   259,   284,   300,    86,    96,   112,   116,
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
     264,   264,   264,   234,   259,   259,   294,     5,     5,   457,
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
     301,   234,     7,     5,     7,   295,     7,   367,   373,   295,
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
     264,   265,   447,   264,   265,   264,   265,   447,     7,   301,
       7,   264,   265,   447,   117,   118,   119,   120,   265,   374,
     447,   448,     7,   264,   265,   447,   448,   401,     7,   264,
     265,   447,   448,   265,   438,     8,   265,   257,   264,   301,
     265,   265,   265,   265,   266,   259,   259,   259,     7,   388,
     258,   314,   258,   258,   258,   258,   311,   312,     5,   307,
     307,   307,   307,     3,     3,     5,   143,   213,     5,   457,
     235,   236,   237,   238,   239,   240,   241,   242,   245,   246,
     247,   248,   249,   250,   251,   252,   255,   261,   263,   258,
     315,   315,   451,   451,   292,   444,   259,     5,    65,   289,
     301,   458,   458,     6,   454,   301,   304,   451,   451,   451,
     454,   451,   451,   451,   280,   265,   338,   322,   328,   361,
     345,   351,   358,     7,   368,   264,   264,   264,   264,   395,
       5,    15,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   159,   162,   165,   168,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   189,   194,   197,   265,   402,
     447,   424,   451,   451,   266,   264,   264,   264,   264,   444,
     388,   258,   388,   307,     5,     5,   258,   258,   242,   257,
     457,   265,   308,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,     3,
     451,   259,   260,   307,   316,   264,   317,     8,   259,   457,
     290,   266,   265,   265,   266,   266,   266,   266,   265,   259,
     259,   265,   258,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    80,    86,    99,   265,   339,    69,    81,   265,
     323,    82,    86,    87,   265,   329,    98,   108,   109,   110,
     265,   362,    96,    98,    99,   100,   101,   102,   103,   104,
     265,   346,    96,    98,   106,   265,   352,    86,    96,    98,
     265,   359,    81,    83,    84,    86,    96,   113,   114,   115,
     130,   186,   258,   265,   369,   379,   379,   383,   375,    86,
      96,   134,   135,   136,   137,   138,   139,   265,   396,   447,
     258,   457,   258,   258,   301,   258,   258,   258,   258,   258,
     258,   258,   258,   258,     7,   258,   258,   264,   258,   264,
     258,   264,   264,   258,   258,   258,   258,   258,   258,   258,
     258,   264,   264,   258,   258,   258,   258,   258,   264,   264,
     258,   403,   404,    75,    96,   265,   425,   265,   266,   301,
     454,   454,   454,   454,   259,   259,   305,   259,   266,   258,
     259,   305,   305,   258,   265,   307,   259,   259,   266,    69,
     454,   451,     7,   301,   301,   451,   451,   451,   261,   284,
     284,   284,   284,   258,   301,   258,   301,   301,   301,   264,
     457,     5,   258,   301,    64,   284,     5,   264,     5,     5,
       5,   286,   289,   457,     5,     5,     5,   264,   303,   303,
     284,   284,     5,     5,   264,   355,     5,   264,   353,     5,
     457,     5,     5,     5,     5,     5,   107,   117,   457,   457,
       3,     3,   284,   453,   371,    81,    83,    84,    85,   122,
     123,   124,   125,   126,   127,   128,   130,   131,   265,   380,
     387,   265,   130,   265,   384,   387,    86,   110,   264,   265,
     376,     5,   457,   264,   397,   457,   458,   453,   458,   264,
     399,   457,   457,   457,     7,   301,   301,     7,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   301,   451,   408,
     451,   410,   451,   412,   414,   284,   458,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,     5,   457,   258,   258,   264,   457,   451,   265,   265,
     265,   265,   265,     7,   266,   307,   313,   264,   259,   266,
     305,     8,   307,   258,   265,   266,   266,   266,   266,   290,
       7,     7,     7,     7,   301,     7,   301,     7,     7,     7,
     452,     7,     7,   301,     7,     7,     7,   317,   330,     7,
       7,     7,     7,     7,     7,     7,     7,   295,   264,   347,
       5,     7,     7,     7,     7,     7,   356,     7,   354,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     370,     7,     7,     7,     7,   305,     5,     5,     5,   258,
     284,     7,   258,   284,   258,     5,     5,   377,     7,     7,
     398,     7,     7,     7,     7,   400,     7,     7,   259,   259,
     259,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     259,   266,   140,   143,   156,   157,   158,   265,   409,   266,
     140,   143,   156,   157,   160,   161,   265,   411,   266,    18,
      88,   140,   163,   164,   265,   413,    18,    88,   133,   140,
     141,   163,   166,   167,   265,   415,   266,   259,   266,   266,
     266,   266,   266,   266,   265,   265,   266,   266,   266,   266,
     266,   266,   266,   259,   303,   405,   457,   405,   426,     7,
     265,   264,   264,   265,   264,   264,   284,   259,   305,   451,
       3,   259,   309,   284,   301,   451,   451,   451,   281,   266,
     266,   294,   266,     7,   264,   265,     7,   112,     7,   294,
     265,   294,   265,   294,   258,   372,   259,     7,     7,     7,
       3,     7,   381,     7,   385,     7,     7,    78,    79,   116,
     130,   265,   378,   265,   294,   265,   294,     7,   264,     7,
     301,   457,   457,   451,   451,   451,   457,   301,   284,     7,
     451,   264,   301,   451,   451,   301,   451,   264,   301,   451,
     451,   451,   451,   451,   451,   451,   264,   451,   301,   451,
     451,   457,   264,   264,   451,   451,   264,   301,     7,   301,
     453,   453,   453,   451,   453,     7,     7,   457,   457,   451,
     457,   457,   284,     5,     7,   406,   406,     5,   117,   265,
     264,   453,   454,   264,   454,   454,   259,   259,   266,   259,
     307,   259,   265,   265,   265,   265,   266,   301,   301,   452,
     301,   331,     5,     5,     5,     5,   457,     7,     7,   259,
     305,   305,   388,   388,   388,   284,   457,   457,   401,   259,
     266,   266,   266,   266,   266,   266,   259,   266,   266,   401,
       7,     7,     7,     7,   266,   401,     7,     7,     7,     7,
       7,   266,     7,     7,   401,     7,     7,     7,     7,     7,
     401,   401,     7,     7,   416,   259,   266,   266,   259,   259,
     266,   266,   266,   266,   266,   259,   259,   259,   266,   265,
     266,   259,   266,   407,   259,   264,   264,   451,   266,   265,
     451,   265,   265,   259,   451,   265,   261,   259,   259,   265,
     259,    89,    90,    91,    92,    93,    94,   265,   332,     7,
     265,   259,     7,   382,   386,     7,     7,     7,     7,   265,
       7,   453,   451,   453,   451,   451,   457,     7,   457,   301,
     265,   301,   265,   301,   265,   265,   265,   264,   265,     7,
     451,   301,     7,     7,   451,   458,   458,   451,   451,     7,
       7,     7,   458,     7,   135,     7,   209,   213,   453,     7,
     427,   427,   265,   453,   265,   265,   265,   264,   264,   265,
     290,     7,     7,     7,     7,     5,   451,   451,   451,   451,
     451,   111,     7,   266,   266,    16,   259,   259,   266,   266,
     266,   266,   259,   266,   266,   259,   266,   417,   266,   259,
     266,   259,   259,   259,   266,   266,   265,   266,   458,   458,
     453,    81,    83,    86,   130,   265,   387,   428,   265,   266,
     264,   454,   451,   266,     7,     7,     7,     7,     7,     7,
       5,   305,   388,   264,     7,     7,   451,   451,   451,   451,
       7,   301,   451,   264,   451,    18,    86,    88,    99,   112,
     130,   265,   418,   301,     7,   301,     7,     7,     7,   451,
     451,     7,   301,   265,   266,     5,     5,     5,   284,   258,
     453,   451,   265,   265,   451,   295,   259,   259,   401,   259,
     259,   259,   266,   259,   266,   401,   259,     5,     5,   451,
     301,     5,   284,   259,   259,   266,   259,   259,   265,     7,
       4,     7,     7,     7,     7,   429,   265,   266,   265,   259,
       7,     7,     7,   265,     7,     7,     7,   453,   264,   451,
     265,   264,     7,     7,     7,     7,     7,     7,     7,     7,
     301,   264,   264,     7,   265,   305,   451,   264,     7,   348,
     266,   401,   259,   401,   259,   401,   401,     7,   259,   265,
     451,    62,   451,   265,   264,   265,     7,   265,   265,     7,
     266,   285,   457,   266,   401,     7,     7,   451,     7,   264,
     296,   451,   265,   266,   349,   265,   259,   451,   132,     7,
     265,     5,   296,     7,   265
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
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
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
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
  const char *yys = yystr;

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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



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
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



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
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

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
      strcpy(yyincludename, (yyvsp[0].c)); yyincludenum++ ; return(0);
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
    { Help((yyvsp[-1].c)); ;}
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
    { Print_Object((yyvsp[-1].i), &Problem_S); ;}
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
    { Add_Group(&Group_S, (yyvsp[-3].c), 0, 0) ; ;}
    break;

  case 46:
#line 493 "GetDP.y"
    { Add_Group(&Group_S, (yyvsp[-4].c), 2, (yyvsp[-3].i)) ; ;}
    break;

  case 47:
#line 499 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, (yyvsp[-4].c), 0, 0) ;
    ;}
    break;

  case 50:
#line 509 "GetDP.y"
    { Add_Group_2(&Group_S, (yyvsp[-4].c), 1, 0, 0, 0) ; ;}
    break;

  case 53:
#line 519 "GetDP.y"
    { 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)(yyvsp[-3].d) ;
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
      Group_S.MovingBand2D->InitialList1 = (yyvsp[0].l) ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)(yyvsp[-7].d) ; 
    ;}
    break;

  case 55:
#line 536 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = (yyvsp[-4].l) ; 
      Add_Group(&Group_S, (yyvsp[-17].c), 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)(yyvsp[-2].d) ; 
    ;}
    break;

  case 56:
#line 546 "GetDP.y"
    {
      Group_S.FunctionType = (yyvsp[-2].i) ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      Group_S.InitialList = (yyvsp[0].l) ;
    ;}
    break;

  case 57:
#line 555 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = (yyvsp[-1].l) ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 58:
#line 563 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = (yyvsp[0].l) ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      (yyval.i) = -1 ;
    ;}
    break;

  case 59:
#line 574 "GetDP.y"
    {
      (yyval.i) = (yyvsp[0].i) ;
    ;}
    break;

  case 60:
#line 579 "GetDP.y"
    {
      if ( !strcmp((yyvsp[0].c), "All") ) {
	(yyval.i) = -3;
      }
      else if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[0].c), fcmp_Group_Name)) >= 0 ) {
	List_Read(Problem_S.Group, i, &Group_S) ; (yyval.i) = i ;
      }
      else {
	(yyval.i) = -2 ; vyyerror("Unknown Group: %s", (yyvsp[0].c)) ;
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 61:
#line 596 "GetDP.y"
    {
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[-1].c), fcmp_Group_Name)) >= 0 )
	  List_Read(Problem_S.Group, i, &Group_S) ; (yyval.i) = i ;
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d", (yyvsp[-1].c), k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				    fcmp_Group_Name)) < 0 ) {
	    (yyval.i) = -2 ; vyyerror("Unknown Group: %s {%d}", (yyvsp[-1].c), k+1) ;
	  }
	  else {
	    if (k == 0) {
	      List_Read(Problem_S.Group, i, &Group_S) ; (yyval.i) = i ;
	    }
	  }
	  List_Add(ListOfInt_L, &i) ;
	}
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 62:
#line 626 "GetDP.y"
    { (yyval.i) = REGION ; ;}
    break;

  case 63:
#line 629 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_Type, (yyvsp[0].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", (yyvsp[0].c));
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 64:
#line 641 "GetDP.y"
    { (yyval.l) = (yyvsp[0].l) ; ;}
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
    { Type_SuppList = (yyvsp[-1].i) ; (yyval.l) = (yyvsp[0].l) ; ;}
    break;

  case 68:
#line 655 "GetDP.y"
    {
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[0].c), fcmp_Group_Name)) >= 0 ) {
	if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	     ELEMENTLIST ) {
	  (yyval.l) = List_Create( 1, 5, sizeof(int)) ;
	  List_Add((yyval.l), &i) ;
	}
	else  vyyerror("Not a Support of Element Type: %s", (yyvsp[0].c)) ;
      }
      else  vyyerror("Unknown Region for Support: %s", (yyvsp[0].c)) ;
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 69:
#line 673 "GetDP.y"
    { (yyval.i) = Get_DefineForString(FunctionForGroup_SuppList, (yyvsp[0].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", (yyvsp[0].c));
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 70:
#line 686 "GetDP.y"
    {
      (yyval.l) = List_Create(((List_Nbr((yyvsp[0].l)) > 0)? List_Nbr((yyvsp[0].l)) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[0].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[0].l), i) ) ;
    ;}
    break;

  case 71:
#line 693 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l) ; ;}
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
      (yyval.l) = (yyvsp[-2].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[0].l)) ; i++)
	List_Add((yyval.l), (int *)List_Pointer((yyvsp[0].l), i) ) ;
    ;}
    break;

  case 74:
#line 712 "GetDP.y"
    {
      (yyval.l) = (yyvsp[-3].l) ;
      for (i = 0 ; i < List_Nbr((yyvsp[0].l)) ; i++)
	List_Suppress((yyval.l), (int *)List_Pointer((yyvsp[0].l), i), fcmp_int ) ;
    ;}
    break;

  case 75:
#line 723 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &((yyvsp[0].i))) ;
    ;}
    break;

  case 76:
#line 729 "GetDP.y"
    {
      i = (int)(yyvsp[-1].d) ;
      List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
    ;}
    break;

  case 77:
#line 736 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr((yyvsp[-1].l)) ; i++) {
	List_Read((yyvsp[-1].l), i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      (yyval.l) = ListOfInt_L;
    ;}
    break;

  case 78:
#line 747 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(yyvsp[-2].i) ; ((yyvsp[-2].i)<(yyvsp[0].d))?(j<=(yyvsp[0].d)):(j>=(yyvsp[0].d)) ; ((yyvsp[-2].i)<(yyvsp[0].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 79:
#line 756 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)(yyvsp[-3].d) ; ((yyvsp[-3].d)<(yyvsp[0].d))?(j<=(yyvsp[0].d)):(j>=(yyvsp[0].d)) ; ((yyvsp[-3].d)<(yyvsp[0].d))?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 80:
#line 764 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      if(!(int)(yyvsp[0].d) || ((yyvsp[-4].i)<(int)(yyvsp[-2].d) && (int)(yyvsp[0].d)<0) || ((yyvsp[-4].i)>(int)(yyvsp[-2].d) && (int)(yyvsp[0].d)>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", (yyvsp[-4].i), (int)(yyvsp[-2].d), (int)(yyvsp[0].d)) ;
	List_Add(ListOfInt_L, &((yyvsp[-4].i))) ;
      }
      else
	for(j=(yyvsp[-4].i) ; ((int)(yyvsp[0].d)>0)?(j<=(yyvsp[-2].d)):(j>=(yyvsp[-2].d)) ; j+=(int)(yyvsp[0].d)) 
	  List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 81:
#line 778 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      if(!(int)(yyvsp[0].d) || ((int)(yyvsp[-5].d)<(int)(yyvsp[-2].d) && (int)(yyvsp[0].d)<0) || ((int)(yyvsp[-5].d)>(int)(yyvsp[-2].d) && (int)(yyvsp[0].d)>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", (int)(yyvsp[-5].d), (int)(yyvsp[-2].d), (int)(yyvsp[0].d)) ;
	 i = (int)(yyvsp[-5].d) ; List_Add(ListOfInt_L, &i) ;
      }
      else
	for(j=(int)(yyvsp[-5].d) ; ((int)(yyvsp[0].d)>0)?(j<=(int)(yyvsp[-2].d)):(j>=(int)(yyvsp[-2].d)) ; j+=(int)(yyvsp[0].d)) 
	  List_Add(ListOfInt_L, &j) ;
      (yyval.l) = ListOfInt_L ;
    ;}
    break;

  case 82:
#line 791 "GetDP.y"
    {
      if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[0].c), fcmp_Group_Name)) < 0 ) {
	/* Si ce n'est pas un nom de groupe, est-ce un nom de constante ? : */
	Constant_S.Name = (yyvsp[0].c) ;
	if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	  vyyerror("Unknown Constant: %s", (yyvsp[0].c)) ;
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
	    vyyerror("Unknown type of Constant: %s", (yyvsp[0].c)) ;
	    i = 0 ;
	    List_Reset(ListOfInt_L) ; List_Add((yyval.l) = ListOfInt_L, &i) ;
	  }
      }
      else   /* Si c'est un nom de groupe : */
	(yyval.l) = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 84:
#line 830 "GetDP.y"
    { if ( (i = List_ISearchSeq(Problem_S.Group, (yyvsp[0].c), fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, (yyvsp[0].c), 0, 0) ;
      }
      else  Free((yyvsp[0].c)) ;
    ;}
    break;

  case 85:
#line 840 "GetDP.y"
    { 
      for (k = 0 ; k < (int)(yyvsp[-1].d) ; k++) {
	sprintf(tmpstr, "%s_%d", (yyvsp[-3].c), k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = ListDummy_L ;
	  Add_Group(&Group_S, (yyvsp[-3].c), 2, k+1) ;
	}
      }
      Free((yyvsp[-3].c)) ;
    ;}
    break;

  case 88:
#line 862 "GetDP.y"
    { (yyval.i) = (int)(yyvsp[-1].d) ; ;}
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
    { (yyval.i) = (int)(yyvsp[-1].d) ; ;}
    break;

  case 95:
#line 892 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[-5].c), fcmp_Expression_Name)) >= 0 ) {
	if (((struct Expression *)List_Pointer(Problem_S.Expression, i))->Type ==
	    UNDEFINED_EXP) {
	  Free(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name) ;
	  List_Read (Problem_S.Expression, (yyvsp[-1].i), &Expression_S) ;
	  List_Write(Problem_S.Expression,  i, &Expression_S) ;
	  ((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name = (yyvsp[-5].c) ;
	  List_Pop(Problem_S.Expression) ;
	}
	else  { vyyerror("Redefinition of Function: %s", (yyvsp[-5].c)) ; }
      }
      else {  /* new identifier */
	Free(((struct Expression *)List_Pointer(Problem_S.Expression, (yyvsp[-1].i)))->Name) ;
	((struct Expression *)List_Pointer(Problem_S.Expression, (yyvsp[-1].i)))->Name = (yyvsp[-5].c) ;
      }
    ;}
    break;

  case 96:
#line 912 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[-6].c), fcmp_Expression_Name)) < 0 ) {
	/* Si le nom n'existe pas : */
	i = List_Nbr(Problem_S.Expression) ;
	Expression_S.Type = PIECEWISEFUNCTION ;
	Expression_S.Case.PieceWiseFunction.ExpressionPerRegion =
	  List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	Expression_S.Case.PieceWiseFunction.NumLastRegion = -1 ;
	Add_Expression(&Expression_S, (yyvsp[-6].c), 0) ;
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
	  vyyerror("Not piece-wise Expression: %s", (yyvsp[-6].c)) ;
	Free((yyvsp[-6].c)) ;
      }

      if ((yyvsp[-4].i) >= 0 || (yyvsp[-4].i) == -1) {
	ExpressionPerRegion_S.ExpressionIndex = (yyvsp[-1].i) ;
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
	if ((yyvsp[-4].i) == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group right hand side") ;
    ;}
    break;

  case 100:
#line 965 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, (yyvsp[0].c), fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, (yyvsp[0].c), 0) ;
      }
      else  Free((yyvsp[0].c)) ;
    ;}
    break;

  case 101:
#line 985 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = (yyvsp[-1].d) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 102:
#line 991 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[-1].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", (yyvsp[-1].c)) ;
      Free((yyvsp[-1].c)) ;  (yyval.i) = i ;
    ;}
    break;

  case 103:
#line 997 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 104:
#line 1000 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = (yyvsp[0].l) ;
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 105:
#line 1005 "GetDP.y"
    { Expression_S.Type = UNDEFINED_EXP ; 
      (yyval.i) = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;}
    break;

  case 106:
#line 1012 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 108:
#line 1023 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &((yyvsp[0].i))) ; ;}
    break;

  case 109:
#line 1026 "GetDP.y"
    { List_Add(ListOfInt_L, &((yyvsp[0].i))) ; ;}
    break;

  case 110:
#line 1032 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 111:
#line 1036 "GetDP.y"
    { (yyval.l) = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 113:
#line 1048 "GetDP.y"
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

  case 114:
#line 1061 "GetDP.y"
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

  case 115:
#line 1075 "GetDP.y"
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

  case 116:
#line 1090 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1096 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1102 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1108 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1114 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1120 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1126 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1132 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1138 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1144 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1150 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1156 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1162 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1168 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1174 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1180 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1186 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 133:
#line 1193 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 135:
#line 1201 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 137:
#line 1214 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = (yyvsp[0].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 138:
#line 1220 "GetDP.y"
    {

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[-2].c),fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = (yyvsp[-1].i) ;
	if ((yyvsp[-1].i) < 0)  vyyerror("Uncompatible argument for Function: %s", (yyvsp[-2].c)) ;
      }

      /* Built in functions */

      else { 
	Get_Function2NbrForString(F_Function, (yyvsp[-2].c), &FlagError,
				  &WholeQuantity_S.Case.Function.Fct,
				  &WholeQuantity_S.Case.Function.NbrParameters,
				  &WholeQuantity_S.Case.Function.NbrArguments) ;
	WholeQuantity_S.Case.Function.Active = NULL ;
	if (!FlagError) {

	  /* arguments */
	  if ((yyvsp[-1].i) >= 0) {
	    if ((yyvsp[-1].i) == WholeQuantity_S.Case.Function.NbrArguments) {
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	    }
	    else if (WholeQuantity_S.Case.Function.NbrArguments == -1  ||
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
	      /* && ($2)%2 == 0)) { */
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	      WholeQuantity_S.Case.Function.NbrArguments = (yyvsp[-1].i) ;
	    }
	    else {
	      vyyerror("Wrong number of arguments for Function '%s' (%d instead of %d)", 
		       (yyvsp[-2].c), (yyvsp[-1].i), WholeQuantity_S.Case.Function.NbrArguments) ;
	    }
	  }
	  else {
	    WholeQuantity_S.Type = WQ_EXTERNBUILTINFUNCTION ;
	  }

	  /* parameters */
	  if (WholeQuantity_S.Case.Function.NbrParameters >= 0 &&
	      WholeQuantity_S.Case.Function.NbrParameters != List_Nbr((yyvsp[0].l))) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     (yyvsp[-2].c), List_Nbr((yyvsp[0].l)), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 && List_Nbr((yyvsp[0].l))%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
		     (yyvsp[-2].c), List_Nbr((yyvsp[0].l))) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr((yyvsp[0].l)) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read((yyvsp[0].l), i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }

	}

	else {
	  vyyerror("Unknown Function: %s", (yyvsp[-2].c)) ;
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
      List_Delete((yyvsp[0].l));
    ;}
    break;

  case 139:
#line 1294 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of discrete Quantity: %s", (yyvsp[-1].c));
	Get_Valid_SXD(QuantityFromFS_Type) ;
      }
      Free((yyvsp[-1].c)) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[0].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[0].t).Int2 ;

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

  case 140:
#line 1328 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[0].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[0].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 141:
#line 1337 "GetDP.y"
    { 
      if((yyvsp[0].i)!=1 && (yyvsp[0].i)!=3 && (yyvsp[0].i)!=4)
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", (yyvsp[0].i)) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = (yyvsp[0].i) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = (yyvsp[-1].t).Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[-1].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 142:
#line 1349 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 143:
#line 1351 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = (yyvsp[-1].l) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 144:
#line 1363 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 145:
#line 1365 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = (yyvsp[-3].l) ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = (yyvsp[-1].i) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 146:
#line 1377 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 147:
#line 1379 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[-8].c),fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", (yyvsp[-8].c)) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = (yyvsp[-5].l) ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)(yyvsp[-1].d) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 148:
#line 1393 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[-6].c),fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", (yyvsp[-6].c)) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)(yyvsp[-3].d) ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)(yyvsp[-1].d) ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1405 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[-1].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1411 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = (yyvsp[-1].t).Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 151:
#line 1417 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 152:
#line 1419 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = (yyvsp[-3].l) ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", (yyvsp[-1].i)) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[x, ConnectedTo y]'");

      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = -1 ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity){
	for(i=0 ; i<List_Nbr((yyvsp[-3].l)) ; i++){
	  WholeQuantity_P = (struct WholeQuantity*)List_Pointer((yyvsp[-3].l), i) ;
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

  case 153:
#line 1448 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = (yyvsp[-1].l) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[-4].c),
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp((yyvsp[-4].c), "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else if (!strcmp((yyvsp[-4].c), "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2 ;
	else
	  vyyerror("Unknown Cast: %s", (yyvsp[-4].c)) ;
      }
      else {
	WholeQuantity_S.Case.Cast.NbrHar = 0 ;
	WholeQuantity_S.Case.Cast.FunctionSpaceIndexForType =
	  ((struct DefineQuantity *)List_Pointer(Formulation_S.DefineQuantity, i))
	    ->FunctionSpaceIndex ;
      }
      Free((yyvsp[-4].c)) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 154:
#line 1474 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, (yyvsp[0].c), &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError){
	vyyerror("Unknown current value: $%s", (yyvsp[0].c));
	Get_Valid_SXP(Current_Value);
      }
      Free((yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1487 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1493 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1500 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = (yyvsp[0].i) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1506 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = (yyvsp[0].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1513 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = (yyvsp[0].i) - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1520 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)(yyvsp[0].d) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1531 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 162:
#line 1532 "GetDP.y"
    { (yyval.i) = 0 ; ;}
    break;

  case 163:
#line 1533 "GetDP.y"
    { (yyval.i) = (yyvsp[-1].i) ; ;}
    break;

  case 164:
#line 1538 "GetDP.y"
    { (yyval.i) = 1 ; ;}
    break;

  case 165:
#line 1539 "GetDP.y"
    { (yyval.i) = (yyvsp[-2].i) + 1 ; ;}
    break;

  case 166:
#line 1545 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 167:
#line 1548 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l); ;}
    break;

  case 168:
#line 1551 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      (yyval.l) = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", (yyvsp[-2].i)) ;
      List_Add((yyval.l), &d) ;
    ;}
    break;

  case 169:
#line 1566 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 170:
#line 1571 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 171:
#line 1578 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 173:
#line 1587 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 (yyvsp[-1].c), fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = (yyvsp[-1].c) ; ;}
    break;

  case 174:
#line 1592 "GetDP.y"
    { JacobianMethod_S.JacobianCase = (yyvsp[-1].l) ; ;}
    break;

  case 175:
#line 1599 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 176:
#line 1602 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[-3].l), &JacobianCase_S) ; ;}
    break;

  case 177:
#line 1609 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 179:
#line 1619 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", (yyvsp[-1].i)) ; ;}
    break;

  case 180:
#line 1622 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 181:
#line 1625 "GetDP.y"
    { JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, (yyvsp[-2].c), &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (JacobianCase_S.NbrParameters == -2 && (List_Nbr((yyvsp[-1].l)))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   (yyvsp[-2].c), List_Nbr((yyvsp[-1].l))) ;
	if (JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr((yyvsp[-1].l));
	if (List_Nbr((yyvsp[-1].l)) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read((yyvsp[-1].l), i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   (yyvsp[-2].c), List_Nbr((yyvsp[-1].l)), JacobianCase_S.NbrParameters) ;
      }
      else{
	vyyerror("Unknown type of Jacobian: %s", (yyvsp[-2].c));
	Get_Valid_SXD1N(Jacobian_Type);
      }
      Free((yyvsp[-2].c));
      List_Delete((yyvsp[-1].l));
    ;}
    break;

  case 182:
#line 1663 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 183:
#line 1669 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 184:
#line 1676 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 186:
#line 1689 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 (yyvsp[-1].c), fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = (yyvsp[-1].c) ; 
    ;}
    break;

  case 187:
#line 1696 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = (yyvsp[-1].i) ;  ;}
    break;

  case 188:
#line 1699 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = (yyvsp[-1].l) ; ;}
    break;

  case 189:
#line 1706 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 190:
#line 1709 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[-3].l), &IntegrationCase_S) ; ;}
    break;

  case 191:
#line 1716 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 193:
#line 1728 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", (yyvsp[-1].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 194:
#line 1738 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", (yyvsp[-1].c));
	Get_Valid_SXD(Integration_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 195:
#line 1748 "GetDP.y"
    { IntegrationCase_S.Case = (yyvsp[-1].l) ; ;}
    break;

  case 196:
#line 1755 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 197:
#line 1758 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[-3].l), &QuadratureCase_S) ; ;}
    break;

  case 198:
#line 1765 "GetDP.y"
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
#line 1781 "GetDP.y"
    { QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Element: %s", (yyvsp[-1].c));
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

      if (FlagError)  vyyerror("Bad type of Integration method for Element: %s", (yyvsp[-1].c)) ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 201:
#line 1829 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)(yyvsp[-1].d) ; ;}
    break;

  case 202:
#line 1832 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)(yyvsp[-1].d) ; ;}
    break;

  case 203:
#line 1835 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)(yyvsp[-1].d) ; ;}
    break;

  case 204:
#line 1838 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)(yyvsp[-1].d) ; ;}
    break;

  case 205:
#line 1841 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = (yyvsp[-1].d) ; ;}
    break;

  case 206:
#line 1852 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 208:
#line 1862 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 211:
#line 1874 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 213:
#line 1887 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[-1].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[-1].c) ;
    ;}
    break;

  case 214:
#line 1894 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, (yyvsp[-2].c),
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = (yyvsp[-2].c) ;
    ;}
    break;

  case 215:
#line 1902 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[-1].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 216:
#line 1911 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = (yyvsp[-1].l) ; ;}
    break;

  case 217:
#line 1914 "GetDP.y"
    {
      if (!Constraint_S.MultiConstraintPerRegion)
	Constraint_S.MultiConstraintPerRegion =
	  List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

      MultiConstraintPerRegion_S.Name = (yyvsp[-3].c) ;
      MultiConstraintPerRegion_S.ConstraintPerRegion = (yyvsp[-1].l) ;
      MultiConstraintPerRegion_S.Active = NULL ;

      List_Add(Constraint_S.MultiConstraintPerRegion, 
	       &MultiConstraintPerRegion_S) ;
    ;}
    break;

  case 218:
#line 1932 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 219:
#line 1937 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[-3].l), &ConstraintPerRegion_S) ;
    ;}
    break;

  case 220:
#line 1942 "GetDP.y"
    { 
      (yyval.l) = (yyvsp[-1].l) ;
    ;}
    break;

  case 221:
#line 1951 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 223:
#line 1965 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[-1].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 224:
#line 1975 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", (yyvsp[-1].i)) ;
    ;}
    break;

  case 225:
#line 1980 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", (yyvsp[-1].i)) ;
    ;}
    break;

  case 226:
#line 1986 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = (yyvsp[-1].i) ;
    ;}
    break;

  case 227:
#line 1991 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = (yyvsp[-1].i) ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 228:
#line 1999 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = (yyvsp[-1].c) ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2007 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)(yyvsp[-4].d) ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)(yyvsp[-2].d) ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2016 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.RegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[-1].i)) ;
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
#line 2034 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", (yyvsp[-1].i)) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2043 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = (yyvsp[-1].i) ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2051 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = (yyvsp[-1].i) ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2059 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[-1].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2069 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = (yyvsp[-4].i) ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = (yyvsp[-2].i) ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2079 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = (yyvsp[-4].i) ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = (yyvsp[-2].i) ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2089 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = (yyvsp[-4].i) ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = (yyvsp[-2].i) ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 238:
#line 2109 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 240:
#line 2120 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 243:
#line 2133 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 246:
#line 2147 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[-1].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[-1].c) ;
    ;}
    break;

  case 247:
#line 2154 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 (yyvsp[-2].c), fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = (yyvsp[-2].c) ;
    ;}
    break;

  case 248:
#line 2162 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", (yyvsp[-1].c));
	Get_Valid_SXD(Field_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 249:
#line 2171 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = (yyvsp[-1].l) ; ;}
    break;

  case 250:
#line 2174 "GetDP.y"
    { FunctionSpace_S.SubSpace       = (yyvsp[-1].l) ; ;}
    break;

  case 251:
#line 2177 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = (yyvsp[-1].l) ; ;}
    break;

  case 252:
#line 2180 "GetDP.y"
    { FunctionSpace_S.Constraint     = (yyvsp[-1].l) ; ;}
    break;

  case 253:
#line 2187 "GetDP.y"
    {
      (yyval.l) = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 254:
#line 2193 "GetDP.y"
    {
      if ( (i = List_ISearchSeq((yyvsp[-3].l), BasisFunction_S.Name, 
				fcmp_BasisFunction_Name)) < 0 ) {
	/*
	  BasisFunction_S.Num = Num_BasisFunction++ ;
	*/
	BasisFunction_S.Num = Num_BasisFunction ;
	Num_BasisFunction += (BasisFunction_S.SubFunction)?
	  List_Nbr(BasisFunction_S.SubFunction) : 1 ;
      }
      else  /* BasisFunction definie par morceaux => meme Num */
	BasisFunction_S.Num = ((struct BasisFunction *)List_Pointer((yyvsp[-3].l), i))->Num ;

      List_Add((yyval.l) = (yyvsp[-3].l), &BasisFunction_S) ;
    ;}
    break;

  case 255:
#line 2210 "GetDP.y"
    {
      (yyval.l) = (yyvsp[-1].l) ;
    ;}
    break;

  case 256:
#line 2219 "GetDP.y"
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

  case 258:
#line 2240 "GetDP.y"
    { BasisFunction_S.Name = (yyvsp[-1].c) ; ;}
    break;

  case 259:
#line 2243 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[-1].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[-1].c) ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 260:
#line 2248 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 (yyvsp[-2].c), fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = (yyvsp[-2].c) ; BasisFunction_S.Dimension = (yyvsp[-1].i) ; ;}
    break;

  case 261:
#line 2253 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, (yyvsp[-2].c), &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError){
	vyyerror("Unknown Function for BasisFunction: %s", (yyvsp[-2].c));
	Get_Valid_SX3F2N(BF_Function);
      }
      Free((yyvsp[-2].c)) ;
    ;}
    break;

  case 262:
#line 2267 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, (yyvsp[-4].c), &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", (yyvsp[-4].c));
	Get_Valid_SX3F2N(BF_Function);
      }
      Free((yyvsp[-4].c)) ;
      Get_3Function2NbrForString
	(BF_Function, (yyvsp[-2].c), &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", (yyvsp[-2].c));
	Get_Valid_SX3F2N(BF_Function);
      }
      Free((yyvsp[-2].c)) ;
    ;}
    break;

  case 263:
#line 2287 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 264:
#line 2292 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 265:
#line 2297 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", (yyvsp[-1].i)) ;
    ;}
    break;

  case 266:
#line 2302 "GetDP.y"
    {
      BasisFunction_S.EntityIndex = Num_Group(&Group_S, "BF_Entity", (yyvsp[-1].i)) ;
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

  case 268:
#line 2336 "GetDP.y"
    {
      Nbr_Index = (yyvsp[-1].i) ;
    ;}
    break;

  case 269:
#line 2340 "GetDP.y"
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

  case 270:
#line 2350 "GetDP.y"
    {
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", (yyvsp[-12].c)) ;

      BasisFunction_S.GlobalBasisFunction =
	List_Create((yyvsp[-11].i), 1, sizeof(struct GlobalBasisFunction)) ;

      for (k = 0 ; k < (yyvsp[-11].i) ; k++) {

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

	sprintf(tmpstr, "%s_%d", (yyvsp[-12].c), k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) >= 0) {
	  GlobalBasisFunction_S.FormulationIndex = i ;
	  List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[-15].c), 
				   fcmp_DefineQuantity_Name)) >= 0)
	    GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  else {
	    vyyerror("Unknown Quantity '%s' in Formulation '%s'", (yyvsp[-15].c),
		     Formulation_S.Name) ;
	    break ;
	  }
	}
	else
	  vyyerror("Unknown Formulation: %s {%d}", (yyvsp[-12].c), k+1) ;

	sprintf(tmpstr, "%s_%d", (yyvsp[-3].c), k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				 fcmp_Resolution_Name)) >= 0)
	  GlobalBasisFunction_S.ResolutionIndex = i ;
	else
	  vyyerror("Unknown Resolution: %s {%d}", (yyvsp[-3].c), k+1) ;

	GlobalBasisFunction_S.QuantityStorage = NULL ;
	List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      Free((yyvsp[-15].c)) ; Free((yyvsp[-12].c)) ; Free((yyvsp[-3].c)) ;
    ;}
    break;

  case 271:
#line 2414 "GetDP.y"
    { 
      (yyval.l) = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 272:
#line 2420 "GetDP.y"
    { 
      List_Add((yyval.l) = (yyvsp[-3].l), &SubSpace_S) ; 
    ;}
    break;

  case 273:
#line 2429 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 275:
#line 2440 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 (yyvsp[-1].c), fcmp_SubSpace_Name) ;
      SubSpace_S.Name = (yyvsp[-1].c) ; 
    ;}
    break;

  case 276:
#line 2447 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[-1].l) ; ;}
    break;

  case 277:
#line 2450 "GetDP.y"
    { SubSpace_S.BasisFunction = (yyvsp[-1].l) ; ;}
    break;

  case 278:
#line 2457 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[0].c), fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", (yyvsp[0].c)) ;
      else {
	List_Add((yyval.l), &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   (yyvsp[0].c), j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add((yyval.l), &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 279:
#line 2473 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l) ; ;}
    break;

  case 280:
#line 2479 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 281:
#line 2482 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[0].c), fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", (yyvsp[0].c)) ;
      else {
	List_Add((yyvsp[-2].l), &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   (yyvsp[0].c), j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add((yyvsp[-2].l), &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      (yyval.l) = (yyvsp[-2].l) ; Free((yyvsp[0].c)) ;
    ;}
    break;

  case 282:
#line 2501 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[0].c), fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", (yyvsp[0].c)) ;
      else {
	List_Add((yyval.l), &i) ; j = i+1 ;
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 283:
#line 2513 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l) ; ;}
    break;

  case 284:
#line 2520 "GetDP.y"
    { 
      (yyval.l) = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 285:
#line 2525 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       (yyvsp[0].c), fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", (yyvsp[0].c)) ;
      else {
	List_Add((yyvsp[-2].l), &i) ; j = i+1 ;
      }
      (yyval.l) = (yyvsp[-2].l) ; Free((yyvsp[0].c)) ;
    ;}
    break;

  case 286:
#line 2540 "GetDP.y"
    { 
      (yyval.l) = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 287:
#line 2546 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add((yyval.l) = (yyvsp[-3].l), &GlobalQuantity_S) ;
    ;}
    break;

  case 288:
#line 2552 "GetDP.y"
    {
      (yyval.l) = (yyvsp[-1].l) ;
    ;}
    break;

  case 289:
#line 2561 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 291:
#line 2573 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 (yyvsp[-1].c), fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = (yyvsp[-1].c) ; 
    ;}
    break;

  case 292:
#line 2580 "GetDP.y"
    { 
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", (yyvsp[-1].c));
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 293:
#line 2591 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[-1].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", (yyvsp[-1].c)) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 294:
#line 2605 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 295:
#line 2610 "GetDP.y"
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
	    
	    List_Add((yyval.l) = (yyvsp[-3].l), &ConstraintInFS_S) ;
	  }
	}
      }
    ;}
    break;

  case 296:
#line 2647 "GetDP.y"
    {
      (yyval.l) = (yyvsp[-1].l) ;
    ;}
    break;

  case 297:
#line 2656 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 299:
#line 2672 "GetDP.y"
    { if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, (yyvsp[-1].c), 
			       fcmp_BasisFunction_NameOfCoef)) < 0) {
	if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, (yyvsp[-1].c),
				 fcmp_GlobalQuantity_Name)) < 0)
	  vyyerror("Unknown NameOfCoef: %s", (yyvsp[-1].c)) ;
	else {
	  ConstraintInFS_S.QuantityType   = GLOBALQUANTITY ;
	  ConstraintInFS_S.ReferenceIndex = i ;
	}
      }
      else {
	ConstraintInFS_S.QuantityType   = LOCALQUANTITY ;
	ConstraintInFS_S.ReferenceIndex = i ;
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 300:
#line 2705 "GetDP.y"
    { Type_Function = (yyvsp[-1].i) ; ;}
    break;

  case 301:
#line 2708 "GetDP.y"
    { Type_SuppList = (yyvsp[-1].i) ; ;}
    break;

  case 302:
#line 2711 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, (yyvsp[-1].c), fcmp_Constraint_Name) ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 303:
#line 2726 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 305:
#line 2736 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 308:
#line 2749 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 310:
#line 2760 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[-1].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[-1].c) ;
    ;}
    break;

  case 311:
#line 2767 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 (yyvsp[-2].c), fcmp_Formulation_Name) ;
      Formulation_S.Name = (yyvsp[-2].c) ;
    ;}
    break;

  case 312:
#line 2775 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", (yyvsp[-1].c));
	Get_Valid_SXD(Formulation_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 314:
#line 2787 "GetDP.y"
    { Formulation_S.Equation = (yyvsp[-1].l) ; ;}
    break;

  case 315:
#line 2793 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 316:
#line 2798 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 318:
#line 2809 "GetDP.y"
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

  case 320:
#line 2832 "GetDP.y"
    { DefineQuantity_S.Name = (yyvsp[-1].c) ; ;}
    break;

  case 321:
#line 2835 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 322:
#line 2839 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 323:
#line 2842 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", (yyvsp[-1].c));
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 324:
#line 2852 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = (yyvsp[-1].l);
    ;}
    break;

  case 325:
#line 2856 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, (yyvsp[0].c),
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", (yyvsp[0].c)) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 326:
#line 2864 "GetDP.y"
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

  case 327:
#line 2888 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = (yyvsp[-1].i) ; 
    ;}
    break;

  case 328:
#line 2893 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 329:
#line 2899 "GetDP.y"
    { 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = (yyvsp[-2].l) ;
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

  case 330:
#line 3210 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", (yyvsp[-1].i)) ;
    ;}
    break;

  case 331:
#line 3215 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[-1].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[-1].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 332:
#line 3224 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[-1].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[-1].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 333:
#line 3233 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[-1].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", (yyvsp[-1].c)) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 334:
#line 3242 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = (yyvsp[-1].i) ; ;}
    break;

  case 336:
#line 3250 "GetDP.y"
    {
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == LOCALQUANTITY) {
	  if ((i = List_ISearchSeq
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, (yyvsp[-1].c),
		fcmp_SubSpace_Name)) < 0)
	    vyyerror("Unknown SubSpace: %s", (yyvsp[-1].c)) ;
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
				   (yyvsp[-1].c), fcmp_GlobalQuantity_Name)) < 0) {
	    vyyerror("Unknown GlobalQuantity: %s", (yyvsp[-1].c)) ;
	  }
	  else {
	    DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	    List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	  }
	}
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 337:
#line 3290 "GetDP.y"
    {
      (yyval.l) = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 338:
#line 3295 "GetDP.y"
    {
      List_Add((yyval.l) = (yyvsp[-1].l), &EquationTerm_S) ;
    ;}
    break;

  case 339:
#line 3300 "GetDP.y"
    {
      (yyval.l) = (yyvsp[-1].l) ;
    ;}
    break;

  case 340:
#line 3305 "GetDP.y"
    {
      (yyval.l) = (yyvsp[-1].l) ;
    ;}
    break;

  case 341:
#line 3314 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 342:
#line 3317 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 343:
#line 3320 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 344:
#line 3323 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 345:
#line 3334 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 347:
#line 3345 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", (yyvsp[-1].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 348:
#line 3355 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, (yyvsp[-1].c),
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 349:
#line 3365 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 350:
#line 3379 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 352:
#line 3391 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = (yyvsp[-1].t).Int2 ; ;}
    break;

  case 353:
#line 3393 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = (yyvsp[-1].t).Int2 ; ;}
    break;

  case 354:
#line 3395 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = (yyvsp[-1].t).Int2 ; ;}
    break;

  case 355:
#line 3397 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[-1].i)) ; ;}
    break;

  case 356:
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

  case 358:
#line 3430 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 359:
#line 3438 "GetDP.y"
    { EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = (yyvsp[0].l) ;

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

  case 360:
#line 3517 "GetDP.y"
    { 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer((yyvsp[-2].l), 0) ;

      if (List_Nbr((yyvsp[-2].l)) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing Quantity in Equation");
      }
      else if (List_Nbr((yyvsp[-2].l)) == 3 &&
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
      else if (List_Nbr((yyvsp[-2].l)) == 2 &&
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

  case 361:
#line 3571 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[-1].i)) ;
    ;}
    break;

  case 362:
#line 3576 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[-1].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[-1].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 363:
#line 3585 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[-1].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[-1].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 364:
#line 3594 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 365:
#line 3599 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[-1].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", (yyvsp[-1].c)) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 366:
#line 3608 "GetDP.y"
    { if ( (yyvsp[-2].i) == 1 || (yyvsp[-2].i) == 2 || (yyvsp[-2].i) == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = (yyvsp[-2].i) ;
      else
	vyyerror("Unknown Matrix123: %d", (yyvsp[-2].i)) ;
    ;}
    break;

  case 367:
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

  case 369:
#line 3648 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", (yyvsp[-1].i)) ;
    ;}
    break;

  case 370:
#line 3653 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 371:
#line 3661 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = (yyvsp[0].l) ;

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

  case 372:
#line 3716 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = (yyvsp[-2].t).Int1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = (yyvsp[-2].t).Int2 ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;}
    break;

  case 373:
#line 3733 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 374:
#line 3734 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 375:
#line 3735 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 376:
#line 3736 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 377:
#line 3737 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 378:
#line 3738 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 379:
#line 3739 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 380:
#line 3740 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 381:
#line 3747 "GetDP.y"
    { (yyval.t).Int1 = Get_DefineForString(Operator_Type, (yyvsp[-2].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown Operator for discrete Quantity: %s", (yyvsp[-2].c));
	Get_Valid_SXD(Operator_Type);
      }
      Free((yyvsp[-2].c)) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[-1].c),
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", (yyvsp[-1].c)) ;
      (yyval.t).Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = (yyval.t).Int1 ;
      Quantity_Index = (yyval.t).Int2 ;

      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 382:
#line 3768 "GetDP.y"
    { (yyval.t).Int1 = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[-1].c),
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", (yyvsp[-1].c)) ;
      (yyval.t).Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = (yyval.t).Int1 ;
      Quantity_Index = (yyval.t).Int2 ;

      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 383:
#line 3792 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 385:
#line 3802 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 388:
#line 3815 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 390:
#line 3827 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[-1].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[-1].c) ;
    ;}
    break;

  case 391:
#line 3834 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 (yyvsp[-2].c), fcmp_Resolution_Name) ;
      Resolution_S.Name = (yyvsp[-2].c) ;
    ;}
    break;

  case 392:
#line 3842 "GetDP.y"
    { Resolution_S.DefineSystem = (yyvsp[-1].l) ; ;}
    break;

  case 393:
#line 3845 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 394:
#line 3847 "GetDP.y"
    { Resolution_S.Operation = (yyvsp[-1].l) ;  List_Delete(Operation_L) ; ;}
    break;

  case 396:
#line 3855 "GetDP.y"
    {
      (yyval.l) = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 397:
#line 3860 "GetDP.y"
    {
      List_Add((yyval.l) = Current_System_L = (yyvsp[-3].l), &DefineSystem_S) ;
    ;}
    break;

  case 398:
#line 3865 "GetDP.y"
    {
       (yyval.l) = (yyvsp[-1].l) ;
     ;}
    break;

  case 399:
#line 3870 "GetDP.y"
    {
       (yyval.l) = (yyvsp[-1].l) ;
     ;}
    break;

  case 400:
#line 3879 "GetDP.y"
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

  case 402:
#line 3899 "GetDP.y"
    { DefineSystem_S.Name = (yyvsp[-1].c) ; ;}
    break;

  case 403:
#line 3902 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", (yyvsp[-1].c));
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 404:
#line 3911 "GetDP.y"
    { DefineSystem_S.FormulationIndex = (yyvsp[-1].l) ; ;}
    break;

  case 405:
#line 3914 "GetDP.y"
    {
      DefineSystem_S.MeshName = (yyvsp[-1].c) ;
    ;}
    break;

  case 406:
#line 3919 "GetDP.y"
    { 
      DefineSystem_S.OriginSystemIndex = (yyvsp[-1].l) ;
    ;}
    break;

  case 407:
#line 3924 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = (yyvsp[-1].c) ; 
    ;}
    break;

  case 408:
#line 3929 "GetDP.y"
    { DefineSystem_S.FrequencyValue = (yyvsp[-1].l);
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 409:
#line 3934 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = (yyvsp[-1].c) ;
    ;}
    break;

  case 411:
#line 3945 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[0].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[0].c)) ;
      else  List_Add((yyval.l), &i) ;
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 412:
#line 3954 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l) ; ;}
    break;

  case 413:
#line 3961 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 414:
#line 3964 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[0].c), fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", (yyvsp[0].c)) ;
      else  
	List_Add((yyvsp[-2].l), &i) ;
      (yyval.l) = (yyvsp[-2].l) ; Free((yyvsp[0].c)) ;
    ;}
    break;

  case 415:
#line 3976 "GetDP.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[0].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[0].c)) ;
      else  
	List_Add((yyval.l), &i) ;
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 416:
#line 3986 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l) ;  ;}
    break;

  case 417:
#line 3992 "GetDP.y"
    { (yyval.l) = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 418:
#line 3995 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, (yyvsp[0].c), fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[0].c)) ;
      else  
	List_Add((yyvsp[-2].l), &i) ;
      (yyval.l) = (yyvsp[-2].l) ; Free((yyvsp[0].c)) ;
    ;}
    break;

  case 419:
#line 4007 "GetDP.y"
    { 
      (yyval.l) = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 420:
#line 4015 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add((yyval.l) = (yyvsp[-1].l), (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 421:
#line 4028 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, (yyvsp[-2].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", (yyvsp[-2].c));
	Get_Valid_SXD(Operation_Type);
      }
      Free((yyvsp[-2].c)) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-1].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-1].c)) ;
      Free((yyvsp[-1].c)) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;}
    break;

  case 422:
#line 4050 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[-1].i) ;
    ;}
    break;

  case 423:
#line 4057 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 424:
#line 4063 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 425:
#line 4069 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 426:
#line 4075 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 427:
#line 4083 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, (yyvsp[-4].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", (yyvsp[-4].c));
	Get_Valid_SXD(Operation_Type);
      }
      Free((yyvsp[-4].c)) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-2].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-2].c)) ;
      Free((yyvsp[-2].c)) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;
    ;}
    break;

  case 428:
#line 4105 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = (yyvsp[-2].i) ;
    ;}
    break;

  case 429:
#line 4112 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 430:
#line 4118 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = (yyvsp[-4].i) ;
      Operation_P->Case.Test.Operation_True = (yyvsp[-1].l) ;
      Operation_P->Case.Test.Operation_False = NULL ;
    ;}
    break;

  case 431:
#line 4129 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = (yyvsp[-8].i) ;
      Operation_P->Case.Test.Operation_True = (yyvsp[-5].l) ;
      Operation_P->Case.Test.Operation_False = (yyvsp[-1].l) ;
    ;}
    break;

  case 432:
#line 4140 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = (yyvsp[-2].i) ;
    ;}
    break;

  case 433:
#line 4153 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-10].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-10].c)) ;
      Free((yyvsp[-10].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = (yyvsp[-8].i);      
      Operation_P->Case.GenerateFMMGroups.Dfar = (yyvsp[-6].i);
      Operation_P->Case.GenerateFMMGroups.Precision = (yyvsp[-4].i);
      Operation_P->Case.GenerateFMMGroups.FlagDTA = (yyvsp[-2].i);      
    ;}
    break;

  case 434:
#line 4168 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-8].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-8].c)) ;
      Free((yyvsp[-8].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = (yyvsp[-6].i);      
      Operation_P->Case.GenerateFMMGroups.Dfar = (yyvsp[-4].i);
      Operation_P->Case.GenerateFMMGroups.Precision = (yyvsp[-2].i);
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 435:
#line 4183 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = (yyvsp[-4].i);      
      Operation_P->Case.GenerateFMMGroups.Dfar = (yyvsp[-2].i);
      Operation_P->Case.GenerateFMMGroups.Precision = -1;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 436:
#line 4198 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr((yyvsp[-2].l)),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr((yyvsp[-2].l)) ; i++){
	List_Read((yyvsp[-2].l),i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete((yyvsp[-2].l)); 
    ;}
    break;

  case 437:
#line 4218 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLYJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr((yyvsp[-2].l)),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr((yyvsp[-2].l)) ; i++){
	List_Read((yyvsp[-2].l),i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete((yyvsp[-2].l)); 
    ;}
    break;

  case 438:
#line 4239 "GetDP.y"
    { Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = (yyvsp[-2].i) ;
    ;}
    break;

  case 439:
#line 4251 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
    Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex =
	Num_Group(&Group_S, "OP_UpdateCst", (yyvsp[-4].i)) ;
      Operation_P->Case.UpdateConstraint.Type =
	Get_DefineForString(Constraint_Type, (yyvsp[-2].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", (yyvsp[-2].c));
	Get_Valid_SXD(Constraint_Type);
      }
      Free((yyvsp[-2].c)) ;
    ;}
    break;

  case 440:
#line 4271 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = (yyvsp[-2].l);
    ;}
    break;

  case 441:
#line 4288 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = (yyvsp[-2].d);
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    ;}
    break;

  case 442:
#line 4307 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-8].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-8].c)) ;
      Free((yyvsp[-8].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)(yyvsp[-6].d) ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr((yyvsp[-4].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[-4].l)) ; i++) {
	List_Read((yyvsp[-4].l), i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete((yyvsp[-4].l));
      Operation_P->Case.Lanczos.Shift = (yyvsp[-2].d) ;
    ;}
    break;

  case 443:
#line 4328 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-8].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-8].c)) ;
      Free((yyvsp[-8].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)(yyvsp[-6].d) ;
      Operation_P->Case.EigenSolve.Shift_r = (yyvsp[-4].d) ;
      Operation_P->Case.EigenSolve.Shift_i = (yyvsp[-2].d) ;
    ;}
    break;

  case 444:
#line 4342 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVEJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-8].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-8].c)) ;
      Free((yyvsp[-8].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)(yyvsp[-6].d) ;
      Operation_P->Case.EigenSolve.Shift_r = (yyvsp[-4].d) ;
      Operation_P->Case.EigenSolve.Shift_i = (yyvsp[-2].d) ;
    ;}
    break;

  case 445:
#line 4356 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)(yyvsp[-2].i) ;
    ;}
    break;

  case 446:
#line 4364 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PERTURBATION ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-14].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-14].c)) ;
      Free((yyvsp[-14].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-12].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-12].c)) ;
      Free((yyvsp[-12].c)) ;
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-10].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-10].c)) ;
      Free((yyvsp[-10].c)) ;
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i ;
      Operation_P->Case.Perturbation.Size = (int)(yyvsp[-8].d) ;
      Operation_P->Case.Perturbation.Save = 
	List_Create(List_Nbr((yyvsp[-6].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[-6].l)) ; i++) {
	List_Read((yyvsp[-6].l), i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete((yyvsp[-6].l));
      Operation_P->Case.Perturbation.Shift = (yyvsp[-4].d) ;
      Operation_P->Case.Perturbation.PertFreq = (int)(yyvsp[-2].d) ;
    ;}
    break;

  case 447:
#line 4398 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
      Operation_P->Case.TimeLoopTheta.Time0 = (yyvsp[-10].d) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[-8].d) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[-6].i) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[-4].i) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 448:
#line 4411 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
      Operation_P->Case.TimeLoopNewmark.Time0 = (yyvsp[-12].d) ; 
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[-10].d) ; 
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[-8].i) ; 
      Operation_P->Case.TimeLoopNewmark.Beta = (yyvsp[-6].d) ; 
      Operation_P->Case.TimeLoopNewmark.Gamma = (yyvsp[-4].d) ; 
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 449:
#line 4425 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[-8].d) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[-6].d) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[-4].i) ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 450:
#line 4438 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[-10].d) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[-8].d) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[-6].i) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[-4].d) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 451:
#line 4450 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 453:
#line 4459 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 455:
#line 4468 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", (yyvsp[-4].i)) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = (yyvsp[-2].i) ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    ;}
    break;

  case 456:
#line 4479 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", (yyvsp[-8].i)) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = (yyvsp[-6].i) ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)(yyvsp[-4].d) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = (yyvsp[-2].i) ; 
    ;}
    break;

  case 457:
#line 4491 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &(yyvsp[-2].c));
    ;}
    break;

  case 458:
#line 4501 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = (yyvsp[-2].c) ; 
    ;}
    break;

  case 459:
#line 4509 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)(yyvsp[-2].d) ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = (yyvsp[-4].l) ; 
    ;}
    break;

  case 460:
#line 4522 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)(yyvsp[-4].d) ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = (yyvsp[-2].c) ;
    ;}
    break;

  case 461:
#line 4535 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionMHtoTime.Time = (yyvsp[-4].l) ;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = (yyvsp[-2].c) ;
    ;}
    break;

  case 462:
#line 4549 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[-2].c), fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", (yyvsp[-2].c)) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[-2].c)) ;
    ;}
    break;

  case 463:
#line 4559 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[-2].c), fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", (yyvsp[-2].c)) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free((yyvsp[-2].c)) ;
    ;}
    break;

  case 464:
#line 4569 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-8].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-8].c)) ;
      Free((yyvsp[-8].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", (yyvsp[-6].i)) ;
      Operation_P->Case.SaveMesh.FileName = (yyvsp[-4].c) ;
      Operation_P->Case.SaveMesh.ExprIndex = (yyvsp[-2].i) ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 465:
#line 4583 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-6].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-6].c)) ;
      Free((yyvsp[-6].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", (yyvsp[-4].i)) ;
      Operation_P->Case.SaveMesh.FileName = (yyvsp[-2].c) ;
      Operation_P->Case.SaveMesh.ExprIndex = -1 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 466:
#line 4597 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-11].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-11].c)) ;
      Free((yyvsp[-11].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[-9].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[-9].c)) ;
      Free((yyvsp[-9].c)) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = (yyvsp[-7].d) ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)(yyvsp[-5].d) ;
      Operation_P->Case.Generate_MH_Moving.Operation = (yyvsp[-2].l) ;
    ;}
    break;

  case 467:
#line 4616 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-11].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-11].c)) ;
      Free((yyvsp[-11].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[-9].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[-9].c)) ;
      Free((yyvsp[-9].c)) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = (yyvsp[-7].d) ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)(yyvsp[-5].d) ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = (yyvsp[-2].l) ;
    ;}
    break;

  case 468:
#line 4634 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = (yyvsp[-2].d) ;
    ;}
    break;

  case 469:
#line 4645 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-9].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-9].c)) ;
      Free((yyvsp[-9].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = (yyvsp[-7].c) ;
      Operation_P->Case.DeformeMesh.Name_MshFile = (yyvsp[-4].c) ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = (yyvsp[-2].d) ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 470:
#line 4660 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-7].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-7].c)) ;
      Free((yyvsp[-7].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = (yyvsp[-5].c) ;
      Operation_P->Case.DeformeMesh.Name_MshFile = (yyvsp[-2].c) ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 471:
#line 4675 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = (yyvsp[-2].c) ;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 472:
#line 4690 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[-2].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[-2].c)) ;
      Free((yyvsp[-2].c)) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 473:
#line 4705 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-4].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-4].c)) ;
      Free((yyvsp[-4].c)) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, (yyvsp[-2].c), fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", (yyvsp[-2].c)) ;
      Free((yyvsp[-2].c)) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 474:
#line 4720 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 475:
#line 4731 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 476:
#line 4736 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[0].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[0].c)) ;
      Free((yyvsp[0].c)) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 477:
#line 4746 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 479:
#line 4756 "GetDP.y"
    { Operation_P->Case.Print.FileOut = (yyvsp[0].c) ; ;}
    break;

  case 480:
#line 4759 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr((yyvsp[0].l)), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr((yyvsp[0].l)) ; i++){
	List_Read((yyvsp[0].l),i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete((yyvsp[0].l));
    ;}
    break;

  case 481:
#line 4769 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr((yyvsp[0].l)), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr((yyvsp[0].l)) ; i++) {
	List_Read((yyvsp[0].l), i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete((yyvsp[0].l));
    ;}
    break;

  case 482:
#line 4785 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 484:
#line 4801 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = (yyvsp[-1].d) ; ;}
    break;

  case 485:
#line 4805 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = (yyvsp[-1].d) ; ;}
    break;

  case 486:
#line 4809 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = (yyvsp[-1].i) ; ;}
    break;

  case 487:
#line 4813 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = (yyvsp[-1].i) ; ;}
    break;

  case 488:
#line 4818 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 489:
#line 4829 "GetDP.y"
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

  case 491:
#line 4846 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = (yyvsp[-1].d) ; ;}
    break;

  case 492:
#line 4850 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = (yyvsp[-1].d) ; ;}
    break;

  case 493:
#line 4854 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = (yyvsp[-1].i) ; ;}
    break;

  case 494:
#line 4858 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = (yyvsp[-1].d) ; ;}
    break;

  case 495:
#line 4862 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = (yyvsp[-1].d) ; ;}
    break;

  case 496:
#line 4867 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 497:
#line 4878 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 499:
#line 4893 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)(yyvsp[-1].d) ; ;}
    break;

  case 500:
#line 4897 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = (yyvsp[-1].d) ; ;}
    break;

  case 501:
#line 4901 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = (yyvsp[-1].i) ; ;}
    break;

  case 502:
#line 4905 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)(yyvsp[-1].d) ; ;}
    break;

  case 503:
#line 4909 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 504:
#line 4920 "GetDP.y"
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

  case 506:
#line 4938 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)(yyvsp[-1].d) ; ;}
    break;

  case 507:
#line 4942 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = (yyvsp[-1].d) ; ;}
    break;

  case 508:
#line 4946 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = (yyvsp[-1].d) ; ;}
    break;

  case 509:
#line 4950 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)(yyvsp[-1].d) ; ;}
    break;

  case 510:
#line 4955 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, (yyvsp[-1].c),
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", (yyvsp[-1].c)) ;
      Free((yyvsp[-1].c)) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 511:
#line 4965 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = (yyvsp[-1].l) ;
    ;}
    break;

  case 512:
#line 4971 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = (yyvsp[-1].l) ;
    ;}
    break;

  case 513:
#line 4977 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = (yyvsp[-1].l) ;
    ;}
    break;

  case 514:
#line 4987 "GetDP.y"
    { (yyval.l) = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 515:
#line 4990 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[-3].l), &ChangeOfState_S) ; ;}
    break;

  case 516:
#line 4995 "GetDP.y"
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

  case 518:
#line 5013 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", (yyvsp[-1].c));
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 519:
#line 5023 "GetDP.y"
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

	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, (yyvsp[-1].c),
				   fcmp_DefineQuantity_Name)) >= 0)
	    break ;
	}
	if (j<List_Nbr(ListOfInt_Lnew)) {
	  ChangeOfState_S.FormulationIndex = ListOfInt_P[j] ;
	  ChangeOfState_S.QuantityIndex = i ;
	}
	else
	  vyyerror("Unknown discrete Quantity: %s", (yyvsp[-1].c)) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", (yyvsp[-1].c)) ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 520:
#line 5052 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", (yyvsp[-1].i)) ; ;}
    break;

  case 521:
#line 5055 "GetDP.y"
    { ChangeOfState_S.Criterion = (yyvsp[-1].d) ; ;}
    break;

  case 522:
#line 5058 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = (yyvsp[-1].i) ;
      else
	ChangeOfState_S.ExpressionIndex2 = (yyvsp[-1].i) ;
    ;}
    break;

  case 523:
#line 5066 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[-1].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", (yyvsp[-1].c)) ;
      Free((yyvsp[-1].c)) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 524:
#line 5083 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 526:
#line 5095 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 529:
#line 5106 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 531:
#line 5119 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[-1].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[-1].c) ; 
    ;}
    break;

  case 532:
#line 5126 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 (yyvsp[-2].c), fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = (yyvsp[-2].c) ; 
    ;}
    break;

  case 533:
#line 5134 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.Formulation, (yyvsp[-1].c),
			       fcmp_Formulation_Name)) < 0){
	vyyerror("Unknown Formulation: %s", (yyvsp[-1].c)) ;
      }
      else {
	PostProcessing_S.FormulationIndex = i ;
	List_Read(Problem_S.Formulation, i, &Formulation_S) ;
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 534:
#line 5147 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = (yyvsp[-1].c) ;
    ;}
    break;

  case 535:
#line 5152 "GetDP.y"
    { PostProcessing_S.PostQuantity = (yyvsp[-1].l) ; ;}
    break;

  case 536:
#line 5158 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 537:
#line 5161 "GetDP.y"
    { List_Add((yyval.l) = (yyvsp[-3].l), &PostQuantity_S) ; ;}
    break;

  case 538:
#line 5164 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l) ; ;}
    break;

  case 539:
#line 5166 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l) ; ;}
    break;

  case 540:
#line 5172 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 542:
#line 5183 "GetDP.y"
    { PostQuantity_S.Name = (yyvsp[-1].c) ; ;}
    break;

  case 543:
#line 5186 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = (yyvsp[-1].l) ; ;}
    break;

  case 544:
#line 5192 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 545:
#line 5197 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add((yyval.l) = (yyvsp[-4].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 546:
#line 5203 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, (yyvsp[-3].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", (yyvsp[-3].c));
	Get_Valid_SXD(PostQuantityTerm_EvaluationType);
      }
      Free((yyvsp[-3].c)) ;
      List_Add((yyval.l) = (yyvsp[-4].l), &PostQuantityTerm_S) ; 
    ;}
    break;

  case 547:
#line 5217 "GetDP.y"
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
#line 5231 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 550:
#line 5238 "GetDP.y"
    { PostQuantityTerm_S.WholeQuantity = (yyvsp[-2].l) ;

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
#line 5266 "GetDP.y"
    { /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, (yyvsp[-1].c), &FlagError) ;
     if (FlagError){
       vyyerror("Unknown type of Operation: %s", (yyvsp[-1].c));
       Get_Valid_SXD(DefineQuantity_Type);
     }
     Free((yyvsp[-1].c)) ;
   ;}
    break;

  case 552:
#line 5277 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", (yyvsp[-1].i)) ;
   ;}
    break;

  case 553:
#line 5282 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, (yyvsp[-1].c),
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",(yyvsp[-1].c)) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 554:
#line 5291 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, (yyvsp[-1].c),
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",(yyvsp[-1].c)) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 555:
#line 5308 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 557:
#line 5320 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 560:
#line 5329 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 562:
#line 5341 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 (yyvsp[-1].c), fcmp_PostOperation_Name) ;
      PostOperation_S.Name = (yyvsp[-1].c) ; 
    ;}
    break;

  case 563:
#line 5348 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, (yyvsp[-1].c),
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", (yyvsp[-1].c)) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 564:
#line 5360 "GetDP.y"
    { 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, (yyvsp[-1].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", (yyvsp[-1].c));
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free((yyvsp[-1].c)) ;
    ;}
    break;

  case 565:
#line 5371 "GetDP.y"
    { 
      PostOperation_S.AppendString = (yyvsp[-1].c) ;
    ;}
    break;

  case 566:
#line 5376 "GetDP.y"
    { PostOperation_S.PostSubOperation = (yyvsp[-1].l) ; ;}
    break;

  case 567:
#line 5382 "GetDP.y"
    {
      PostOperation_S.PostProcessingIndex = -1 ;
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, (yyvsp[0].c),
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", (yyvsp[0].c)) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
	if (!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation)) ;
	PostOperation_S.Name = (yyvsp[-2].c) ;
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 568:
#line 5399 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = (yyvsp[-1].l) ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 569:
#line 5409 "GetDP.y"
    { (yyval.l) = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 570:
#line 5412 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 571:
#line 5416 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add((yyval.l) = (yyvsp[-2].l), &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 572:
#line 5429 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 573:
#line 5434 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 574:
#line 5439 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[-5].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = (yyvsp[-3].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 575:
#line 5448 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[-8].c) ;
      PostSubOperation_S.Case.Expression.String2 = (yyvsp[-4].c) ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 576:
#line 5457 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = (yyvsp[-3].c) ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 577:
#line 5466 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[0].i)) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 578:
#line 5472 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", (yyvsp[-3].i)) ;
    ;}
    break;

  case 579:
#line 5477 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 580:
#line 5486 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, (yyvsp[-2].c), 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", (yyvsp[-2].c)) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = (yyvsp[-1].i) ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free((yyvsp[-2].c)) ;
    ;}
    break;

  case 581:
#line 5498 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, (yyvsp[-5].c), 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", (yyvsp[-5].c)) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantitySupport[0] = (yyvsp[-4].i) ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, (yyvsp[-2].c), 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", (yyvsp[-2].c)) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;
      PostSubOperation_S.PostQuantitySupport[1] = (yyvsp[-1].i) ;

      if (((yyvsp[-4].i)<0 && (yyvsp[-1].i)<0) || ((yyvsp[-4].i)>=0 && (yyvsp[-1].i)>=0)) {
	vyyerror("Postprocessing Quantities '%s' and '%s' of same type (%s)", 
		 (yyvsp[-5].c), (yyvsp[-2].c), ((yyvsp[-4].i)>0)? "with Support":"without Support") ;
      }      
      Free((yyvsp[-5].c)) ; Free((yyvsp[-2].c)) ;
    ;}
    break;

  case 582:
#line 5521 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 583:
#line 5522 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 584:
#line 5523 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 585:
#line 5524 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 586:
#line 5530 "GetDP.y"
    { (yyval.i) = -1 ; ;}
    break;

  case 587:
#line 5532 "GetDP.y"
    { (yyval.i) = Num_Group(&Group_S, "PO_Support", (yyvsp[-1].i)) ; ;}
    break;

  case 588:
#line 5538 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 589:
#line 5544 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", (yyvsp[0].i)) ;
    ;}
    break;

  case 590:
#line 5551 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", (yyvsp[0].i)) ;
    ;}
    break;

  case 591:
#line 5560 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      if(List_Nbr((yyvsp[-8].l))!=3 || List_Nbr((yyvsp[-5].l))!=3 || List_Nbr((yyvsp[-2].l))!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr((yyvsp[-8].l)), List_Nbr((yyvsp[-5].l)), List_Nbr((yyvsp[-2].l)));
      else{
	List_Read((yyvsp[-8].l), 0, &PostSubOperation_S.Case.OnSection.x[0]);
	List_Read((yyvsp[-8].l), 1, &PostSubOperation_S.Case.OnSection.y[0]);
	List_Read((yyvsp[-8].l), 2, &PostSubOperation_S.Case.OnSection.z[0]);
	List_Read((yyvsp[-5].l), 0, &PostSubOperation_S.Case.OnSection.x[1]);
	List_Read((yyvsp[-5].l), 1, &PostSubOperation_S.Case.OnSection.y[1]);
	List_Read((yyvsp[-5].l), 2, &PostSubOperation_S.Case.OnSection.z[1]);
	List_Read((yyvsp[-2].l), 0, &PostSubOperation_S.Case.OnSection.x[2]);
	List_Read((yyvsp[-2].l), 1, &PostSubOperation_S.Case.OnSection.y[2]);
	List_Read((yyvsp[-2].l), 2, &PostSubOperation_S.Case.OnSection.z[2]);
      }
      List_Delete((yyvsp[-8].l));
      List_Delete((yyvsp[-5].l));
      List_Delete((yyvsp[-2].l));
    ;}
    break;

  case 592:
#line 5582 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", (yyvsp[0].i)) ;
    ;}
    break;

  case 593:
#line 5590 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = (yyvsp[-12].i) ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = (yyvsp[-10].i) ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = (yyvsp[-8].i) ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = (yyvsp[-5].l) ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = (yyvsp[-3].l) ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = (yyvsp[-1].l) ;
    ;}
    break;

  case 594:
#line 5601 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      if(List_Nbr((yyvsp[-1].l))!=3)
	vyyerror("Expected {3} coordinates, got {%d}", List_Nbr((yyvsp[-1].l)));
      else{
	List_Read((yyvsp[-1].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[-1].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[-1].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
      List_Delete((yyvsp[-1].l));
    ;}
    break;

  case 595:
#line 5615 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      if(List_Nbr((yyvsp[-8].l))!=3 || List_Nbr((yyvsp[-5].l))!=3)
	vyyerror("Expected {3}{3} coordinates, got {%d}{%d}", 
		 List_Nbr((yyvsp[-8].l)), List_Nbr((yyvsp[-5].l)));
      else{
	List_Read((yyvsp[-8].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[-8].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[-8].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read((yyvsp[-5].l), 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read((yyvsp[-5].l), 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read((yyvsp[-5].l), 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)(yyvsp[-1].d) ;
      List_Delete((yyvsp[-8].l));
      List_Delete((yyvsp[-5].l));
    ;}
    break;

  case 596:
#line 5636 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      if(List_Nbr((yyvsp[-13].l))!=3 || List_Nbr((yyvsp[-10].l))!=3 || List_Nbr((yyvsp[-7].l))!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr((yyvsp[-13].l)), List_Nbr((yyvsp[-10].l)), List_Nbr((yyvsp[-7].l)));
      else{
	List_Read((yyvsp[-13].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[-13].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[-13].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read((yyvsp[-10].l), 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read((yyvsp[-10].l), 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read((yyvsp[-10].l), 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read((yyvsp[-7].l), 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read((yyvsp[-7].l), 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read((yyvsp[-7].l), 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)(yyvsp[-3].d) ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)(yyvsp[-1].d) ;
      List_Delete((yyvsp[-13].l));
      List_Delete((yyvsp[-10].l));
      List_Delete((yyvsp[-7].l));
    ;}
    break;

  case 597:
#line 5663 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      if(List_Nbr((yyvsp[-18].l))!=3 || List_Nbr((yyvsp[-15].l))!=3 || List_Nbr((yyvsp[-12].l))!=3 || List_Nbr((yyvsp[-9].l))!=3)
	vyyerror("Expected {3}{3}{3}{3} coordinates, got {%d}{%d}{%d}{%d}", 
		 List_Nbr((yyvsp[-18].l)), List_Nbr((yyvsp[-15].l)), List_Nbr((yyvsp[-12].l)), List_Nbr((yyvsp[-9].l)));
      else{
	List_Read((yyvsp[-18].l), 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read((yyvsp[-18].l), 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read((yyvsp[-18].l), 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read((yyvsp[-15].l), 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read((yyvsp[-15].l), 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read((yyvsp[-15].l), 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read((yyvsp[-12].l), 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read((yyvsp[-12].l), 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read((yyvsp[-12].l), 2, &PostSubOperation_S.Case.OnGrid.z[2]);
	List_Read((yyvsp[-9].l), 0, &PostSubOperation_S.Case.OnGrid.x[3]);
	List_Read((yyvsp[-9].l), 1, &PostSubOperation_S.Case.OnGrid.y[3]);
	List_Read((yyvsp[-9].l), 2, &PostSubOperation_S.Case.OnGrid.z[3]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)(yyvsp[-5].d) ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)(yyvsp[-3].d) ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)(yyvsp[-1].d) ;
      List_Delete((yyvsp[-18].l));
      List_Delete((yyvsp[-15].l));
      List_Delete((yyvsp[-12].l));
      List_Delete((yyvsp[-9].l));
    ;}
    break;

  case 598:
#line 5694 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", (yyvsp[-10].i)) ;

      if((i = List_ISearchSeq(Problem_S.Expression, (yyvsp[-8].c), fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", (yyvsp[-8].c)) ;
      Free((yyvsp[-8].c)) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = (yyvsp[-6].d) ;
      PostSubOperation_S.Case.WithArgument.x[1] = (yyvsp[-4].d) ;
      PostSubOperation_S.Case.WithArgument.n = (int)(yyvsp[-1].d) ;
    ;}
    break;

  case 599:
#line 5714 "GetDP.y"
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

  case 601:
#line 5750 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = (yyvsp[0].c) ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;}
    break;

  case 602:
#line 5757 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = (yyvsp[0].c) ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;}
    break;

  case 603:
#line 5764 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = (yyvsp[0].c) ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 604:
#line 5771 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)(yyvsp[0].d) ; 
    ;}
    break;

  case 605:
#line 5775 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 606:
#line 5779 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 607:
#line 5783 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)(yyvsp[0].d) ; 
    ;}
    break;

  case 608:
#line 5787 "GetDP.y"
    { 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, (yyvsp[0].c), &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", (yyvsp[0].c));
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 609:
#line 5797 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 610:
#line 5802 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 611:
#line 5807 "GetDP.y"
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

  case 612:
#line 5827 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 613:
#line 5831 "GetDP.y"
    { 
      if((int)(yyvsp[0].d) >= 1 && (int)(yyvsp[0].d) <= 3)
	PostSubOperation_S.Dimension = (int)(yyvsp[0].d) ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 614:
#line 5838 "GetDP.y"
    { 
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(i=0 ; i<List_Nbr((yyvsp[0].l)) ; i++){
	List_Read((yyvsp[0].l),i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete((yyvsp[0].l));
    ;}
    break;

  case 615:
#line 5848 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, (yyvsp[0].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", (yyvsp[0].c));
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 616:
#line 5857 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, (yyvsp[0].c), &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", (yyvsp[0].c));
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 617:
#line 5866 "GetDP.y"
    { 
      if((yyvsp[0].d) >= 0.)
	PostSubOperation_S.Target = (yyvsp[0].d) ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 618:
#line 5873 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[0].l)) ; i++){
	List_Read((yyvsp[0].l),i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete((yyvsp[0].l));
    ;}
    break;

  case 619:
#line 5881 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)(yyvsp[0].d);
    ;}
    break;

  case 620:
#line 5885 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr((yyvsp[-1].l)) ; i++){
	List_Read((yyvsp[-1].l),i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete((yyvsp[-1].l));
    ;}
    break;

  case 621:
#line 5894 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 622:
#line 5898 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 623:
#line 5902 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[0].l)) ; i++){
	List_Read((yyvsp[0].l),i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete((yyvsp[0].l));
    ;}
    break;

  case 624:
#line 5910 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = (yyvsp[-5].i) ;
      PostSubOperation_S.ChangeOfCoordinates[1] = (yyvsp[-3].i) ;
      PostSubOperation_S.ChangeOfCoordinates[2] = (yyvsp[-1].i) ;
    ;}
    break;

  case 625:
#line 5916 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 626:
#line 5920 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 627:
#line 5928 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[-5].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[-3].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[-1].d) ;
    ;}
    break;

  case 628:
#line 5935 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 629:
#line 5943 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[-5].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[-3].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[-1].d) ;
    ;}
    break;

  case 630:
#line 5950 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 631:
#line 5958 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = (yyvsp[-5].d) ;
      PostSubOperation_S.LegendPosition[1] = (yyvsp[-3].d) ;
      PostSubOperation_S.LegendPosition[2] = (yyvsp[-1].d) ;
    ;}
    break;

  case 632:
#line 5965 "GetDP.y"
    { 
      if(List_Nbr((yyvsp[-1].l))%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr((yyvsp[-1].l)));
      else {
	PostSubOperation_S.EvaluationPoints = (yyvsp[-1].l) ;
      }
    ;}
    break;

  case 633:
#line 5973 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = (yyvsp[0].i) - 1 ;
    ;}
    break;

  case 634:
#line 5977 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 635:
#line 5986 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 636:
#line 5992 "GetDP.y"
    {
      i = 0 ;
      do{
	if((yyvsp[0].c)[i] == '%'){ 
	  i++ ; j=i ;
	  do{
	    if((yyvsp[0].c)[i] == '+'  || (yyvsp[0].c)[i] == '-'  || (yyvsp[0].c)[i] == '*'  || (yyvsp[0].c)[i] == '%'  ||
	       (yyvsp[0].c)[i] == '>'  || (yyvsp[0].c)[i] == '<'  || (yyvsp[0].c)[i] == '|'  || (yyvsp[0].c)[i] == '&'  ||
	       (yyvsp[0].c)[i] == '$'  || (yyvsp[0].c)[i] == '\'' || (yyvsp[0].c)[i] == '\\' || (yyvsp[0].c)[i] == '/'  || 
	       (yyvsp[0].c)[i] == '{'  ||	(yyvsp[0].c)[i] == '}'  || (yyvsp[0].c)[i] == '('  || (yyvsp[0].c)[i] == ')'  ||
	       (yyvsp[0].c)[i] == '['  || (yyvsp[0].c)[i] == ']'  || (yyvsp[0].c)[i] == '!'  || (yyvsp[0].c)[i] == ','  ||
	       (yyvsp[0].c)[i] == '^'  || (yyvsp[0].c)[i] == '.'  || (yyvsp[0].c)[i] == ';'  || (yyvsp[0].c)[i] == '~'  || 
	       (yyvsp[0].c)[i] == ' '  || (yyvsp[0].c)[i] == '\n' || (yyvsp[0].c)[i] == '\t' || (yyvsp[0].c)[i] == '#'  ||
               (yyvsp[0].c)[i] == '`'  || (yyvsp[0].c)[i] == ':'  ){
              break ;
            }
	    i++ ;
	  } while(i<(int)strlen((yyvsp[0].c))) ;
	  strncpy(tmpstr, &(yyvsp[0].c)[j], i-j); 
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
	  List_Add(ListOfChar_L, &(yyvsp[0].c)[i]);
	  i++ ;
	}
      } while (i<(int)strlen((yyvsp[0].c))) ;
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 637:
#line 6042 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[-3].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[-1].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-3].d) > (yyvsp[-1].d)) skip_until("For", "EndFor");
    ;}
    break;

  case 638:
#line 6057 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[-5].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[-3].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[-1].d) ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(((yyvsp[-1].d) > 0. && (yyvsp[-5].d) > (yyvsp[-3].d)) || ((yyvsp[-1].d) < 0. && (yyvsp[-5].d) < (yyvsp[-3].d)))
	skip_until("For", "EndFor");
    ;}
    break;

  case 639:
#line 6073 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[-3].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[-1].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[-6].c) ;      
      Constant_S.Name = (yyvsp[-6].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[-3].d) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      /* hack_fsetpos_printf(); */
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-3].d) > (yyvsp[-1].d)) skip_until("For", "EndFor");
    ;}
    break;

  case 640:
#line 6093 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[-5].d) ;
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[-3].d) ;
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[-1].d) ;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[-8].c) ;      
      Constant_S.Name = (yyvsp[-8].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[-5].d) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(((yyvsp[-1].d) > 0. && (yyvsp[-5].d) > (yyvsp[-3].d)) || ((yyvsp[-1].d) < 0. && (yyvsp[-5].d) < (yyvsp[-3].d)))
	skip_until("For", "EndFor");
    ;}
    break;

  case 641:
#line 6113 "GetDP.y"
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

  case 642:
#line 6151 "GetDP.y"
    {
      if(!(yyvsp[-1].d)) skip_until("If", "EndIf");
    ;}
    break;

  case 643:
#line 6155 "GetDP.y"
    {
    ;}
    break;

  case 645:
#line 6170 "GetDP.y"
    {
      Constant_S.Name = (yyvsp[-3].c) ; 
      if(List_Nbr((yyvsp[-1].l)) == 1){
	Constant_S.Type = VAR_FLOAT ;
	List_Read((yyvsp[-1].l), 0, &Constant_S.Value.Float) ;
	List_Delete((yyvsp[-1].l));
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT ;
	Constant_S.Value.ListOfFloat = (yyvsp[-1].l);
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 646:
#line 6185 "GetDP.y"
    { Constant_S.Name = (yyvsp[-3].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[-1].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 647:
#line 6191 "GetDP.y"
    { Constant_S.Name = (yyvsp[-6].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[-2].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 648:
#line 6197 "GetDP.y"
    { Constant_S.Name = (yyvsp[-3].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[-1].c) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6203 "GetDP.y"
    { Constant_S.Name = (yyvsp[-6].c) ; Constant_S.Type = VAR_LISTOFFLOAT ;
    //if (!(File = fopen($5, "r")))
    //Msg(GERROR, "Unable to open file '%s'", $5);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      if ((File = fopen((yyvsp[-2].c), "r")))
	while (!feof(File))
	  if (fscanf(File, "%lf", &d) != EOF)
	    List_Add(Constant_S.Value.ListOfFloat, &d) ;
    fclose(File) ;
    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6217 "GetDP.y"
    {
      Msg(DIRECT, (yyvsp[-2].c));
    ;}
    break;

  case 651:
#line 6222 "GetDP.y"
    {
      Constant_S.Name = (yyvsp[-1].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[-1].c)) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  printf("%s: %g\n", (yyvsp[-1].c), Constant_S.Value.Float);
	else
	  printf("%s: Dimension %d\n", (yyvsp[-1].c), List_Nbr(Constant_S.Value.ListOfFloat));
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    printf(" (%d) %g\n", i, d);
	  }
    ;}
    break;

  case 652:
#line 6238 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 653:
#line 6243 "GetDP.y"
    {
      i = Print_ListOfDouble((yyvsp[-4].c),(yyvsp[-2].l),tmpstr);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstr);
      List_Delete((yyvsp[-2].l));
    ;}
    break;

  case 654:
#line 6255 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[-2].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 655:
#line 6265 "GetDP.y"
    {
      Msg(INFO2, "[<return>=%g] ? ",(yyvsp[-2].d));
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = (yyvsp[-2].d);
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = (yyvsp[-5].c) ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 657:
#line 6284 "GetDP.y"
    { Constant_S.Name = (yyvsp[0].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 658:
#line 6290 "GetDP.y"
    { Constant_S.Name = (yyvsp[-2].c) ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = (yyvsp[0].d) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 659:
#line 6296 "GetDP.y"
    { Constant_S.Name = (yyvsp[-2].c) ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = (yyvsp[0].c) ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 660:
#line 6307 "GetDP.y"
    { (yyval.c) = "Exp";    ;}
    break;

  case 661:
#line 6308 "GetDP.y"
    { (yyval.c) = "Log";    ;}
    break;

  case 662:
#line 6309 "GetDP.y"
    { (yyval.c) = "Log10";  ;}
    break;

  case 663:
#line 6310 "GetDP.y"
    { (yyval.c) = "Sqrt";   ;}
    break;

  case 664:
#line 6311 "GetDP.y"
    { (yyval.c) = "Sin";    ;}
    break;

  case 665:
#line 6312 "GetDP.y"
    { (yyval.c) = "Asin";   ;}
    break;

  case 666:
#line 6313 "GetDP.y"
    { (yyval.c) = "Cos";    ;}
    break;

  case 667:
#line 6314 "GetDP.y"
    { (yyval.c) = "Acos";   ;}
    break;

  case 668:
#line 6315 "GetDP.y"
    { (yyval.c) = "Tan";    ;}
    break;

  case 669:
#line 6316 "GetDP.y"
    { (yyval.c) = "Atan";   ;}
    break;

  case 670:
#line 6317 "GetDP.y"
    { (yyval.c) = "Atan2";  ;}
    break;

  case 671:
#line 6318 "GetDP.y"
    { (yyval.c) = "Sinh";   ;}
    break;

  case 672:
#line 6319 "GetDP.y"
    { (yyval.c) = "Cosh";   ;}
    break;

  case 673:
#line 6320 "GetDP.y"
    { (yyval.c) = "Tanh";   ;}
    break;

  case 674:
#line 6321 "GetDP.y"
    { (yyval.c) = "Fabs";   ;}
    break;

  case 675:
#line 6322 "GetDP.y"
    { (yyval.c) = "Floor";  ;}
    break;

  case 676:
#line 6323 "GetDP.y"
    { (yyval.c) = "Ceil";   ;}
    break;

  case 677:
#line 6324 "GetDP.y"
    { (yyval.c) = "Fmod";   ;}
    break;

  case 678:
#line 6325 "GetDP.y"
    { (yyval.c) = "Modulo"; ;}
    break;

  case 679:
#line 6326 "GetDP.y"
    { (yyval.c) = "Hypot";  ;}
    break;

  case 680:
#line 6327 "GetDP.y"
    { (yyval.c) = (yyvsp[0].c);       ;}
    break;

  case 681:
#line 6331 "GetDP.y"
    { (yyval.d) = (yyvsp[0].d) ;          ;}
    break;

  case 682:
#line 6332 "GetDP.y"
    { (yyval.d) = (yyvsp[-1].d) ;          ;}
    break;

  case 683:
#line 6333 "GetDP.y"
    { (yyval.d) = -(yyvsp[0].d) ;         ;}
    break;

  case 684:
#line 6334 "GetDP.y"
    { (yyval.d) = !(yyvsp[0].d) ;         ;}
    break;

  case 685:
#line 6335 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) - (yyvsp[0].d) ;     ;}
    break;

  case 686:
#line 6336 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) + (yyvsp[0].d) ;     ;}
    break;

  case 687:
#line 6337 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) * (yyvsp[0].d) ;     ;}
    break;

  case 688:
#line 6338 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) / (yyvsp[0].d) ;     ;}
    break;

  case 689:
#line 6339 "GetDP.y"
    { (yyval.d) = (int)(yyvsp[-2].d) % (int)(yyvsp[0].d) ;  ;}
    break;

  case 690:
#line 6340 "GetDP.y"
    { (yyval.d) = pow((yyvsp[-2].d),(yyvsp[0].d)) ;  ;}
    break;

  case 691:
#line 6341 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) < (yyvsp[0].d) ;     ;}
    break;

  case 692:
#line 6342 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) > (yyvsp[0].d) ;     ;}
    break;

  case 693:
#line 6343 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) <= (yyvsp[0].d) ;    ;}
    break;

  case 694:
#line 6344 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) >= (yyvsp[0].d) ;    ;}
    break;

  case 695:
#line 6345 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) == (yyvsp[0].d) ;    ;}
    break;

  case 696:
#line 6346 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) != (yyvsp[0].d) ;    ;}
    break;

  case 697:
#line 6347 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) && (yyvsp[0].d) ;    ;}
    break;

  case 698:
#line 6348 "GetDP.y"
    { (yyval.d) = (yyvsp[-2].d) || (yyvsp[0].d) ;    ;}
    break;

  case 699:
#line 6349 "GetDP.y"
    { (yyval.d) = exp((yyvsp[-1].d));      ;}
    break;

  case 700:
#line 6350 "GetDP.y"
    { (yyval.d) = log((yyvsp[-1].d));      ;}
    break;

  case 701:
#line 6351 "GetDP.y"
    { (yyval.d) = log10((yyvsp[-1].d));    ;}
    break;

  case 702:
#line 6352 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[-1].d));     ;}
    break;

  case 703:
#line 6353 "GetDP.y"
    { (yyval.d) = sin((yyvsp[-1].d));      ;}
    break;

  case 704:
#line 6354 "GetDP.y"
    { (yyval.d) = asin((yyvsp[-1].d));     ;}
    break;

  case 705:
#line 6355 "GetDP.y"
    { (yyval.d) = cos((yyvsp[-1].d));      ;}
    break;

  case 706:
#line 6356 "GetDP.y"
    { (yyval.d) = acos((yyvsp[-1].d));     ;}
    break;

  case 707:
#line 6357 "GetDP.y"
    { (yyval.d) = tan((yyvsp[-1].d));      ;}
    break;

  case 708:
#line 6358 "GetDP.y"
    { (yyval.d) = atan((yyvsp[-1].d));     ;}
    break;

  case 709:
#line 6359 "GetDP.y"
    { (yyval.d) = atan2((yyvsp[-3].d),(yyvsp[-1].d)); ;}
    break;

  case 710:
#line 6360 "GetDP.y"
    { (yyval.d) = sinh((yyvsp[-1].d));     ;}
    break;

  case 711:
#line 6361 "GetDP.y"
    { (yyval.d) = cosh((yyvsp[-1].d));     ;}
    break;

  case 712:
#line 6362 "GetDP.y"
    { (yyval.d) = tanh((yyvsp[-1].d));     ;}
    break;

  case 713:
#line 6363 "GetDP.y"
    { (yyval.d) = fabs((yyvsp[-1].d));     ;}
    break;

  case 714:
#line 6364 "GetDP.y"
    { (yyval.d) = floor((yyvsp[-1].d));    ;}
    break;

  case 715:
#line 6365 "GetDP.y"
    { (yyval.d) = ceil((yyvsp[-1].d));     ;}
    break;

  case 716:
#line 6366 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[-3].d),(yyvsp[-1].d));  ;}
    break;

  case 717:
#line 6367 "GetDP.y"
    { (yyval.d) = fmod((yyvsp[-3].d),(yyvsp[-1].d));  ;}
    break;

  case 718:
#line 6368 "GetDP.y"
    { (yyval.d) = sqrt((yyvsp[-3].d)*(yyvsp[-3].d)+(yyvsp[-1].d)*(yyvsp[-1].d));  ;}
    break;

  case 719:
#line 6370 "GetDP.y"
    { (yyval.d) = (yyvsp[-4].d)? (yyvsp[-2].d) : (yyvsp[0].d) ; ;}
    break;

  case 720:
#line 6372 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, (yyvsp[-1].d)); ;}
    break;

  case 721:
#line 6377 "GetDP.y"
    { (yyval.d) = (yyvsp[0].d) ; ;}
    break;

  case 722:
#line 6378 "GetDP.y"
    { (yyval.d) = (double)(yyvsp[0].i) ; ;}
    break;

  case 723:
#line 6379 "GetDP.y"
    { (yyval.d) = 3.1415926535897932 ; ;}
    break;

  case 724:
#line 6380 "GetDP.y"
    { (yyval.d) = (double)_0D ; ;}
    break;

  case 725:
#line 6381 "GetDP.y"
    { (yyval.d) = (double)_1D ; ;}
    break;

  case 726:
#line 6382 "GetDP.y"
    { (yyval.d) = (double)_2D ; ;}
    break;

  case 727:
#line 6383 "GetDP.y"
    { (yyval.d) = (double)_3D ; ;}
    break;

  case 728:
#line 6385 "GetDP.y"
    { Constant_S.Name = (yyvsp[0].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", (yyvsp[0].c)) ;  (yyval.d) = 0. ;
      }
      else  {
	if (Constant_S.Type == VAR_FLOAT)
	  (yyval.d) = Constant_S.Value.Float ;
	else {
	  vyyerror("Single value Constant needed: %s", (yyvsp[0].c)) ;  (yyval.d) = 0. ;
	}
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 729:
#line 6403 "GetDP.y"
    { (yyval.l) = NULL; ;}
    break;

  case 730:
#line 6406 "GetDP.y"
    { 
      (yyval.l) = List_Create(1,1,sizeof(double)) ;  
      List_Add((yyval.l), &((yyvsp[0].d))) ; 
    ;}
    break;

  case 731:
#line 6412 "GetDP.y"
    { (yyval.l) = (yyvsp[0].l); ;}
    break;

  case 732:
#line 6415 "GetDP.y"
    { (yyval.l) = (yyvsp[-1].l); ;}
    break;

  case 733:
#line 6422 "GetDP.y"
    { 
      (yyval.l) = List_Create(20,20,sizeof(double));
      List_Add((yyval.l), &((yyvsp[0].d))) ; 
    ;}
    break;

  case 734:
#line 6428 "GetDP.y"
    { (yyval.l) = (yyvsp[0].l); ;}
    break;

  case 735:
#line 6431 "GetDP.y"
    { List_Add((yyval.l), &((yyvsp[0].d))) ; ;}
    break;

  case 736:
#line 6434 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr((yyvsp[0].l)) ; i++){
	List_Read((yyvsp[0].l), i, &d) ;
	List_Add((yyval.l), &d) ;
      }
      List_Delete((yyvsp[0].l));
    ;}
    break;

  case 737:
#line 6446 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(d=(yyvsp[-2].d) ; ((yyvsp[-2].d)<(yyvsp[0].d))?(d<=(yyvsp[0].d)):(d>=(yyvsp[0].d)) ; ((yyvsp[-2].d)<(yyvsp[0].d))?(d+=1.):(d-=1.)) 
	List_Add((yyval.l), &d) ;
    ;}
    break;

  case 738:
#line 6452 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      if(!(yyvsp[0].d) || ((yyvsp[-4].d)<(yyvsp[-2].d) && (yyvsp[0].d)<0) || ((yyvsp[-4].d)>(yyvsp[-2].d) && (yyvsp[0].d)>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", (yyvsp[-4].d), (yyvsp[-2].d), (yyvsp[0].d)) ;
	List_Add((yyval.l), &((yyvsp[-4].d))) ;
      }
      else
	for(d=(yyvsp[-4].d) ; ((yyvsp[0].d)>0)?(d<=(yyvsp[-2].d)):(d>=(yyvsp[-2].d)) ; d+=(yyvsp[0].d)) 
	  List_Add((yyval.l), &d) ;
    ;}
    break;

  case 739:
#line 6463 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = (yyvsp[-2].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[-2].c)) ;
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

  case 740:
#line 6479 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = (yyvsp[-3].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[-3].c)) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", (yyvsp[-3].c)) ;
	else
	  for(i=0 ; i<List_Nbr((yyvsp[-1].l)) ; i++) {
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

  case 741:
#line 6501 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = (yyvsp[-1].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", (yyvsp[-1].c)) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", (yyvsp[-1].c)) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add((yyval.l), &d) ;
	  }
    ;}
    break;

  case 742:
#line 6516 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      Constant1_S.Name = (yyvsp[-3].c) ; Constant2_S.Name = (yyvsp[-1].c) ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", (yyvsp[-3].c)) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", (yyvsp[-3].c)) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", (yyvsp[-1].c)) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", (yyvsp[-1].c)) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 (yyvsp[-3].c), List_Nbr(Constant1_S.Value.ListOfFloat),
			 (yyvsp[-1].c), List_Nbr(Constant2_S.Value.ListOfFloat)) ;
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

  case 743:
#line 6554 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)(yyvsp[-1].d) ; i++) {
	d = (yyvsp[-5].d) + ((yyvsp[-3].d)-(yyvsp[-5].d))*(double)i/((yyvsp[-1].d)-1) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 744:
#line 6562 "GetDP.y"
    { (yyval.l) = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)(yyvsp[-1].d) ; i++) {
	d = pow(10,(yyvsp[-5].d) + ((yyvsp[-3].d)-(yyvsp[-5].d))*(double)i/((yyvsp[-1].d)-1)) ;
	List_Add((yyval.l), &d) ;
      }
    ;}
    break;

  case 745:
#line 6574 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[-1].d)) ;
      (yyval.c) = (char *)Malloc((strlen((yyvsp[-4].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[-4].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[-4].c)) ;
    ;}
    break;

  case 746:
#line 6582 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)(yyvsp[-1].d)) ;
      (yyval.c) = (char *)Realloc((yyvsp[-4].c),(strlen((yyvsp[-4].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[-4].c)) ; strcat((yyval.c), tmpstr) ;
    ;}
    break;

  case 747:
#line 6593 "GetDP.y"
    { (yyval.c) = (yyvsp[0].c) ; ;}
    break;

  case 748:
#line 6596 "GetDP.y"
    { (yyval.c) = (yyvsp[0].c) ; ;}
    break;

  case 749:
#line 6603 "GetDP.y"
    { (yyval.c) = (yyvsp[0].c) ; ;}
    break;

  case 750:
#line 6606 "GetDP.y"
    { Constant_S.Name = (yyvsp[0].c) ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", (yyvsp[0].c)) ;  (yyval.c) = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  (yyval.c) = Constant_S.Value.Char ;
	else {
	  vyyerror("String Constant needed: %s", (yyvsp[0].c)) ;  (yyval.c) = NULL ;
	}
      }
      Free((yyvsp[0].c)) ;
    ;}
    break;

  case 751:
#line 6621 "GetDP.y"
    {
      (yyval.c) = (yyvsp[0].c) ;
    ;}
    break;

  case 752:
#line 6626 "GetDP.y"
    {
      (yyval.c) = (yyvsp[-1].c);
    ;}
    break;

  case 753:
#line 6631 "GetDP.y"
    {
      i = Print_ListOfDouble((yyvsp[-3].c),(yyvsp[-1].l),tmpstr);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	(yyval.c) = (yyvsp[-3].c);
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	(yyval.c) = (yyvsp[-3].c);
      }
      else{
	(yyval.c) = (char*)Malloc((strlen(tmpstr)+1)*sizeof(char));
	strcpy((yyval.c), tmpstr);
	Free((yyvsp[-3].c));
      }
      List_Delete((yyvsp[-1].l));
    ;}
    break;

  case 754:
#line 6650 "GetDP.y"
    {
      time(&date_info);
      (yyval.c) = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy((yyval.c), ctime(&date_info));
      (yyval.c)[strlen((yyval.c))-1] = 0;
    ;}
    break;

  case 755:
#line 6660 "GetDP.y"
    {
      if ((yyvsp[-3].c) != NULL && (yyvsp[-1].c) != NULL) {
	(yyval.c) = (char *)Malloc((strlen((yyvsp[-3].c))+strlen((yyvsp[-1].c))+1)*sizeof(char)) ;
	strcpy((yyval.c), (yyvsp[-3].c)) ;  strcat((yyval.c), (yyvsp[-1].c)) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  (yyval.c) = NULL ;
      }
    ;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 11608 "GetDP.tab.c"

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
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 6671 "GetDP.y"



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


