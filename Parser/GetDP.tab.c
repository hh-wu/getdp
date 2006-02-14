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

/* $Id: GetDP.tab.c,v 1.98 2006-02-14 17:43:13 dular Exp $ */
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
void  hack_endfor_printf(void) ;
void  hack_endfor2(void) ;

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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 184 "GetDP.y"
typedef union YYSTYPE {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 756 "GetDP.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 768 "GetDP.tab.c"

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
#define YYLAST   6756

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  268
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  191
/* YYNRULES -- Number of rules. */
#define YYNRULES  748
/* YYNRULES -- Number of states. */
#define YYNSTATES  2032

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
     145,   149,   150,   153,   154,   157,   162,   168,   174,   180,
     182,   188,   190,   192,   193,   194,   213,   214,   221,   224,
     226,   228,   231,   233,   235,   237,   239,   240,   244,   248,
     250,   252,   256,   257,   261,   266,   268,   272,   276,   280,
     286,   292,   300,   302,   303,   307,   314,   315,   317,   322,
     323,   326,   330,   331,   334,   340,   347,   355,   357,   359,
     360,   364,   369,   374,   375,   378,   379,   383,   385,   389,
     390,   393,   395,   396,   397,   405,   409,   413,   420,   424,
     428,   432,   436,   440,   444,   448,   452,   456,   460,   464,
     468,   472,   476,   479,   482,   485,   489,   491,   495,   498,
     500,   503,   504,   510,   511,   519,   520,   532,   542,   547,
     552,   553,   561,   568,   571,   574,   577,   580,   584,   587,
     591,   595,   598,   602,   604,   608,   609,   613,   620,   621,
     626,   627,   630,   634,   639,   640,   645,   646,   649,   653,
     657,   662,   663,   668,   669,   672,   676,   680,   685,   686,
     691,   692,   695,   699,   703,   708,   709,   714,   715,   718,
     722,   726,   730,   734,   738,   742,   743,   746,   750,   752,
     754,   755,   758,   762,   767,   771,   776,   782,   783,   788,
     791,   792,   795,   799,   803,   807,   811,   815,   819,   827,
     831,   835,   839,   843,   847,   855,   863,   871,   872,   875,
     879,   881,   883,   884,   887,   891,   896,   900,   905,   910,
     915,   920,   921,   926,   929,   930,   933,   937,   941,   946,
     951,   959,   963,   967,   971,   975,   976,   977,   978,   997,
     998,  1003,  1004,  1007,  1011,  1015,  1019,  1021,  1025,  1026,
    1030,  1032,  1036,  1037,  1041,  1042,  1047,  1048,  1051,  1055,
    1059,  1063,  1064,  1069,  1072,  1073,  1076,  1080,  1084,  1088,
    1092,  1093,  1096,  1100,  1102,  1104,  1105,  1108,  1112,  1117,
    1121,  1126,  1131,  1132,  1137,  1140,  1141,  1144,  1148,  1152,
    1156,  1160,  1164,  1165,  1171,  1175,  1176,  1182,  1186,  1190,
    1194,  1198,  1202,  1203,  1207,  1208,  1211,  1214,  1217,  1222,
    1227,  1232,  1237,  1238,  1241,  1245,  1249,  1253,  1254,  1257,
    1261,  1265,  1269,  1273,  1274,  1277,  1278,  1279,  1289,  1293,
    1297,  1301,  1304,  1308,  1314,  1315,  1318,  1322,  1323,  1324,
    1334,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,  1354,
    1358,  1359,  1362,  1366,  1368,  1370,  1371,  1374,  1378,  1383,
    1388,  1389,  1395,  1397,  1398,  1403,  1406,  1407,  1410,  1414,
    1418,  1422,  1426,  1430,  1434,  1438,  1442,  1444,  1446,  1450,
    1451,  1455,  1457,  1461,  1462,  1466,  1467,  1470,  1474,  1478,
    1483,  1488,  1493,  1498,  1504,  1510,  1513,  1521,  1533,  1541,
    1555,  1567,  1577,  1585,  1593,  1601,  1611,  1621,  1631,  1643,
    1655,  1667,  1673,  1691,  1705,  1721,  1733,  1747,  1748,  1756,
    1757,  1765,  1773,  1785,  1791,  1797,  1807,  1817,  1827,  1833,
    1839,  1851,  1861,  1876,  1891,  1899,  1912,  1923,  1931,  1939,
    1947,  1949,  1951,  1953,  1954,  1957,  1961,  1965,  1968,  1969,
    1972,  1976,  1980,  1984,  1988,  1993,  1994,  1997,  2001,  2005,
    2009,  2013,  2017,  2022,  2023,  2026,  2030,  2034,  2038,  2042,
    2047,  2048,  2051,  2055,  2059,  2063,  2067,  2071,  2076,  2081,
    2086,  2087,  2092,  2093,  2096,  2100,  2104,  2108,  2112,  2116,
    2120,  2121,  2124,  2128,  2130,  2132,  2133,  2136,  2140,  2145,
    2149,  2153,  2158,  2159,  2164,  2167,  2170,  2171,  2174,  2178,
    2183,  2184,  2190,  2196,  2197,  2200,  2201,  2208,  2212,  2216,
    2220,  2224,  2225,  2228,  2232,  2234,  2236,  2237,  2240,  2244,
    2248,  2252,  2256,  2261,  2262,  2271,  2272,  2273,  2277,  2285,
    2293,  2302,  2314,  2321,  2322,  2333,  2335,  2339,  2346,  2348,
    2350,  2352,  2354,  2355,  2359,  2361,  2364,  2367,  2380,  2383,
    2399,  2404,  2417,  2435,  2458,  2471,  2472,  2475,  2479,  2484,
    2489,  2493,  2496,  2499,  2503,  2507,  2511,  2515,  2519,  2523,
    2527,  2531,  2535,  2539,  2543,  2547,  2553,  2556,  2559,  2563,
    2573,  2577,  2580,  2590,  2593,  2603,  2606,  2616,  2622,  2626,
    2629,  2630,  2633,  2640,  2649,  2658,  2669,  2671,  2676,  2678,
    2684,  2689,  2694,  2702,  2707,  2715,  2721,  2725,  2733,  2739,
    2748,  2749,  2753,  2759,  2765,  2767,  2769,  2771,  2773,  2775,
    2777,  2779,  2781,  2783,  2785,  2787,  2789,  2791,  2793,  2795,
    2797,  2799,  2801,  2803,  2805,  2807,  2809,  2813,  2816,  2819,
    2823,  2827,  2831,  2835,  2839,  2843,  2847,  2851,  2855,  2859,
    2863,  2867,  2871,  2875,  2880,  2885,  2890,  2895,  2900,  2905,
    2910,  2915,  2920,  2925,  2932,  2937,  2942,  2947,  2952,  2957,
    2962,  2969,  2976,  2983,  2986,  2988,  2990,  2992,  2994,  2996,
    2998,  3000,  3002,  3003,  3005,  3007,  3011,  3013,  3015,  3019,
    3023,  3027,  3033,  3037,  3042,  3047,  3054,  3063,  3072,  3078,
    3084,  3086,  3088,  3090,  3092,  3094,  3099,  3106,  3108
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     269,     0,    -1,    -1,   270,   271,    -1,    -1,    -1,   271,
     272,   273,    -1,    62,   263,   276,   264,    -1,    99,   263,
     297,   264,    -1,    68,   263,   332,   264,    -1,    81,   263,
     317,   264,    -1,    83,   263,   323,   264,    -1,    95,   263,
     339,   264,    -1,   111,   263,   362,   264,    -1,   132,   263,
     388,   264,    -1,   187,   263,   418,   264,    -1,   189,   263,
     429,   264,    -1,   433,    -1,   447,    -1,    22,   457,    -1,
     274,    -1,    19,     7,    -1,    19,   194,     7,    -1,    19,
      21,     7,    -1,    19,    36,     7,    -1,    19,    20,     7,
      -1,    19,    19,     7,    -1,    19,     5,     7,    -1,    20,
       7,    -1,    21,     7,    -1,    21,    62,     7,    -1,    21,
      99,     7,    -1,    21,    68,     7,    -1,    21,    81,     7,
      -1,    21,    83,     7,    -1,    21,    95,     7,    -1,    21,
     111,     7,    -1,    21,   132,     7,    -1,    21,   187,     7,
      -1,    21,   189,     7,    -1,    21,     3,     7,    -1,    -1,
     275,   437,    -1,    -1,   276,   277,    -1,   456,   233,   281,
       7,    -1,     5,   296,   233,   281,     7,    -1,     5,   294,
     233,   281,     7,    -1,    63,   257,   292,   258,     7,    -1,
     278,    -1,   456,   246,   233,   281,     7,    -1,   447,    -1,
     446,    -1,    -1,    -1,   456,   257,   450,   258,   233,    66,
     279,   257,   260,   289,   280,   265,   260,   289,   265,   450,
     258,     7,    -1,    -1,   285,   257,   286,   282,   287,   258,
      -1,   260,   289,    -1,   281,    -1,   456,    -1,   456,   295,
      -1,    69,    -1,     5,    -1,   289,    -1,    64,    -1,    -1,
     293,   288,   289,    -1,   293,    65,   456,    -1,     5,    -1,
     291,    -1,   263,   290,   264,    -1,    -1,   290,   293,   291,
      -1,   290,   293,   247,   291,    -1,     3,    -1,   255,   450,
     256,    -1,   266,   453,   266,    -1,     3,     8,   450,    -1,
     255,   450,   256,     8,   450,    -1,     3,     8,   450,     8,
     450,    -1,   255,   450,   256,     8,   450,     8,   450,    -1,
     456,    -1,    -1,   292,   293,     5,    -1,   292,   293,     5,
     263,   450,   264,    -1,    -1,   265,    -1,   263,   260,   450,
     264,    -1,    -1,   263,   264,    -1,   263,   450,   264,    -1,
      -1,   297,   298,    -1,    67,   257,   299,   258,     7,    -1,
       5,   257,   258,   233,   300,     7,    -1,     5,   257,   283,
     258,   233,   300,     7,    -1,   447,    -1,   446,    -1,    -1,
     299,   293,     5,    -1,    23,   257,   450,   258,    -1,    99,
     257,     5,   258,    -1,    -1,   301,   304,    -1,    -1,   263,
     303,   264,    -1,   300,    -1,   303,   265,   300,    -1,    -1,
     305,   306,    -1,   309,    -1,    -1,    -1,   306,   234,   307,
     306,     8,   308,   306,    -1,   306,   248,   306,    -1,   306,
     251,   306,    -1,    58,   257,   306,   265,   306,   258,    -1,
     306,   249,   306,    -1,   306,   246,   306,    -1,   306,   247,
     306,    -1,   306,   250,   306,    -1,   306,   254,   306,    -1,
     306,   240,   306,    -1,   306,   241,   306,    -1,   306,   245,
     306,    -1,   306,   244,   306,    -1,   306,   239,   306,    -1,
     306,   238,   306,    -1,   306,   237,   306,    -1,   306,   236,
     306,    -1,   306,   235,   306,    -1,   247,   306,    -1,   246,
     306,    -1,   252,   306,    -1,   255,   306,   256,    -1,   451,
      -1,   449,   314,   316,    -1,     5,   387,    -1,   387,    -1,
     387,   314,    -1,    -1,   122,   310,   257,   304,   258,    -1,
      -1,   129,   311,   257,   304,   265,     3,   258,    -1,    -1,
      60,   257,     5,   257,   312,   304,   258,   258,   263,   450,
     264,    -1,    61,   257,     5,   258,   263,   450,   265,   450,
     264,    -1,    55,   257,   387,   258,    -1,    57,   257,   387,
     258,    -1,    -1,    56,   313,   257,   304,   265,   283,   258,
      -1,   240,     5,   241,   257,   304,   258,    -1,   261,     5,
      -1,   261,   212,    -1,   261,   143,    -1,   261,     3,    -1,
     309,   260,     3,    -1,   260,     3,    -1,   309,   262,   450,
      -1,   257,   259,   258,    -1,   257,   258,    -1,   257,   315,
     258,    -1,   306,    -1,   315,   265,   306,    -1,    -1,   263,
     453,   264,    -1,   263,    69,   257,   283,   258,   264,    -1,
      -1,   317,   263,   318,   264,    -1,    -1,   318,   319,    -1,
      96,     5,     7,    -1,    82,   263,   320,   264,    -1,    -1,
     320,   263,   321,   264,    -1,    -1,   321,   322,    -1,    69,
     283,     7,    -1,    69,    64,     7,    -1,    81,     5,   316,
       7,    -1,    -1,   323,   263,   324,   264,    -1,    -1,   324,
     325,    -1,    96,     5,     7,    -1,    88,   300,     7,    -1,
      82,   263,   326,   264,    -1,    -1,   326,   263,   327,   264,
      -1,    -1,   327,   328,    -1,    86,     5,     7,    -1,    87,
       5,     7,    -1,    82,   263,   329,   264,    -1,    -1,   329,
     263,   330,   264,    -1,    -1,   330,   331,    -1,    89,     5,
       7,    -1,    90,   450,     7,    -1,    91,   450,     7,    -1,
      92,   450,     7,    -1,    93,   450,     7,    -1,    94,   450,
       7,    -1,    -1,   332,   333,    -1,   263,   334,   264,    -1,
     447,    -1,   446,    -1,    -1,   334,   335,    -1,    96,   456,
       7,    -1,    96,     5,   294,     7,    -1,    86,     5,     7,
      -1,    82,   263,   336,   264,    -1,    82,     5,   263,   336,
     264,    -1,    -1,   336,   263,   337,   264,    -1,   336,   446,
      -1,    -1,   337,   338,    -1,    86,     5,     7,    -1,    69,
     283,     7,    -1,    70,   283,     7,    -1,    76,   300,     7,
      -1,    75,   300,     7,    -1,    80,   456,     7,    -1,    77,
     263,   451,   293,   451,   264,     7,    -1,    71,   283,     7,
      -1,    72,   283,     7,    -1,    99,   300,     7,    -1,    74,
     300,     7,    -1,    73,   300,     7,    -1,    99,   257,   300,
     265,   300,   258,     7,    -1,    74,   257,   300,   265,   300,
     258,     7,    -1,    73,   257,   300,   265,   300,   258,     7,
      -1,    -1,   339,   340,    -1,   263,   341,   264,    -1,   447,
      -1,   446,    -1,    -1,   341,   342,    -1,    96,   456,     7,
      -1,    96,     5,   294,     7,    -1,    86,     5,     7,    -1,
      97,   263,   343,   264,    -1,   105,   263,   349,   264,    -1,
     107,   263,   356,   264,    -1,    68,   263,   359,   264,    -1,
      -1,   343,   263,   344,   264,    -1,   343,   446,    -1,    -1,
     344,   345,    -1,    96,     5,     7,    -1,    98,     5,     7,
      -1,    98,     5,   294,     7,    -1,    99,     5,   346,     7,
      -1,   100,   263,     5,   293,     5,   264,     7,    -1,   101,
     302,     7,    -1,   102,   302,     7,    -1,   103,   283,     7,
      -1,   104,   283,     7,    -1,    -1,    -1,    -1,   263,   112,
       5,     7,   111,     5,   294,     7,   347,    62,   284,     7,
     348,   132,     5,   295,     7,   264,    -1,    -1,   349,   263,
     350,   264,    -1,    -1,   350,   351,    -1,    96,     5,     7,
      -1,   106,   352,     7,    -1,    98,   354,     7,    -1,     5,
      -1,   263,   353,   264,    -1,    -1,   353,   293,     5,    -1,
       5,    -1,   263,   355,   264,    -1,    -1,   355,   293,     5,
      -1,    -1,   356,   263,   357,   264,    -1,    -1,   357,   358,
      -1,    96,   456,     7,    -1,    86,     5,     7,    -1,    98,
       5,     7,    -1,    -1,   359,   263,   360,   264,    -1,   359,
     446,    -1,    -1,   360,   361,    -1,    98,     5,     7,    -1,
     108,   285,     7,    -1,   109,   288,     7,    -1,   110,   456,
       7,    -1,    -1,   362,   363,    -1,   263,   364,   264,    -1,
     447,    -1,   446,    -1,    -1,   364,   365,    -1,    96,   456,
       7,    -1,    96,     5,   294,     7,    -1,    86,     5,     7,
      -1,   112,   263,   366,   264,    -1,   116,   263,   372,   264,
      -1,    -1,   366,   263,   367,   264,    -1,   366,   446,    -1,
      -1,   367,   368,    -1,    96,   456,     7,    -1,    86,   107,
       7,    -1,    86,   117,     7,    -1,    86,     5,     7,    -1,
     186,   452,     7,    -1,    -1,   113,   456,   369,   371,     7,
      -1,   114,     3,     7,    -1,    -1,   257,   370,   304,   258,
       7,    -1,   130,   283,     7,    -1,    83,     5,     7,    -1,
      84,     5,     7,    -1,    81,     5,     7,    -1,   115,     3,
       7,    -1,    -1,   257,   456,   258,    -1,    -1,   372,   373,
      -1,   372,   447,    -1,   372,   446,    -1,   117,   263,   378,
     264,    -1,   118,   263,   378,   264,    -1,   119,   263,   382,
     264,    -1,   120,   263,   374,   264,    -1,    -1,   374,   375,
      -1,    86,     5,     7,    -1,   110,     5,     7,    -1,   263,
     376,   264,    -1,    -1,   376,   377,    -1,    78,   387,     7,
      -1,    79,   387,     7,    -1,   116,   387,     7,    -1,   130,
     283,     7,    -1,    -1,   378,   379,    -1,    -1,    -1,   386,
     257,   380,   304,   381,   265,   304,   258,     7,    -1,   130,
     283,     7,    -1,    81,     5,     7,    -1,    83,     5,     7,
      -1,   131,     7,    -1,    84,     5,     7,    -1,    85,   257,
       3,   258,     7,    -1,    -1,   382,   383,    -1,   130,   283,
       7,    -1,    -1,    -1,   386,   257,   384,   304,   385,   265,
     387,   258,     7,    -1,    -1,   122,    -1,   123,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,   263,
       5,   456,   264,    -1,   263,   456,   264,    -1,    -1,   388,
     389,    -1,   263,   390,   264,    -1,   447,    -1,   446,    -1,
      -1,   390,   391,    -1,    96,   456,     7,    -1,    96,     5,
     294,     7,    -1,   133,   263,   393,   264,    -1,    -1,   140,
     392,   263,   400,   264,    -1,   446,    -1,    -1,   393,   263,
     394,   264,    -1,   393,   446,    -1,    -1,   394,   395,    -1,
      96,   456,     7,    -1,    86,     5,     7,    -1,   134,   396,
       7,    -1,   135,   457,     7,    -1,   138,   398,     7,    -1,
     139,   456,     7,    -1,   136,   452,     7,    -1,   137,   457,
       7,    -1,   446,    -1,   456,    -1,   263,   397,   264,    -1,
      -1,   397,   293,   456,    -1,   456,    -1,   263,   399,   264,
      -1,    -1,   399,   293,   456,    -1,    -1,   400,   401,    -1,
       5,   456,     7,    -1,   142,   300,     7,    -1,   155,   263,
     407,   264,    -1,   159,   263,   409,   264,    -1,   162,   263,
     411,   264,    -1,   165,   263,   413,   264,    -1,     5,   257,
     456,   258,     7,    -1,   142,   257,   300,   258,     7,    -1,
     153,     7,    -1,    15,   257,   300,   258,   263,   400,   264,
      -1,    15,   257,   300,   258,   263,   400,   264,    16,   263,
     400,   264,    -1,   144,   257,   456,   265,   300,   258,     7,
      -1,   171,   257,   456,   265,   300,   265,   300,   265,   300,
     265,   300,   258,     7,    -1,   171,   257,   456,   265,   300,
     265,   300,   265,   300,   258,     7,    -1,   171,   257,   456,
     265,   300,   265,   300,   258,     7,    -1,   172,   257,   456,
     265,   452,   258,     7,    -1,   173,   257,   456,   265,   452,
     258,     7,    -1,   151,   257,   456,   265,   300,   258,     7,
      -1,   152,   257,   456,   265,   283,   265,   456,   258,     7,
      -1,   145,   257,   456,   265,   456,   265,   452,   258,     7,
      -1,   146,   257,   456,   265,   456,   265,   450,   258,     7,
      -1,   147,   257,   456,   265,   450,   265,   452,   265,   450,
     258,     7,    -1,   148,   257,   456,   265,   450,   265,   450,
     265,   450,   258,     7,    -1,   149,   257,   456,   265,   450,
     265,   450,   265,   450,   258,     7,    -1,   154,   257,   300,
     258,     7,    -1,   150,   257,   456,   265,   456,   265,   456,
     265,   450,   265,   452,   265,   450,   265,   450,   258,     7,
      -1,   155,   257,   450,   265,   450,   265,   300,   265,   300,
     258,   263,   400,   264,    -1,   159,   257,   450,   265,   450,
     265,   300,   265,   450,   265,   450,   258,   263,   400,   264,
      -1,   162,   257,   450,   265,   450,   265,   300,   258,   263,
     400,   264,    -1,   162,   257,   450,   265,   450,   265,   300,
     265,   450,   258,   263,   400,   264,    -1,    -1,   194,   402,
     257,   404,   405,   258,     7,    -1,    -1,   197,   403,   257,
     404,   405,   258,     7,    -1,   168,   257,   283,   265,   300,
     258,     7,    -1,   168,   257,   283,   265,   300,   265,   450,
     265,   300,   258,     7,    -1,   189,   257,   456,   258,     7,
      -1,   170,   257,   457,   258,     7,    -1,   174,   257,   456,
     265,   452,   265,   450,   258,     7,    -1,   175,   257,   456,
     265,   450,   265,   457,   258,     7,    -1,   176,   257,   456,
     265,   452,   265,   457,   258,     7,    -1,   177,   263,   456,
     264,     7,    -1,   178,   263,   456,   264,     7,    -1,   184,
     263,   456,   265,   283,   265,   457,   265,   300,   264,     7,
      -1,   184,   263,   456,   265,   283,   265,   457,   264,     7,
      -1,   179,   257,   456,   265,   456,   265,   450,   265,   450,
     258,   263,   400,   264,     7,    -1,   180,   257,   456,   265,
     456,   265,   450,   265,   450,   258,   263,   400,   264,     7,
      -1,   181,   257,   456,   265,   450,   258,     7,    -1,   185,
     263,     5,   265,     5,   265,   135,   457,   265,     4,   264,
       7,    -1,   185,   263,     5,   265,     5,   265,   135,   457,
     264,     7,    -1,   185,   263,     5,   265,     5,   264,     7,
      -1,   182,   257,   456,   265,   456,   258,     7,    -1,   183,
     257,   456,   265,   456,   258,     7,    -1,   446,    -1,   302,
      -1,   456,    -1,    -1,   405,   406,    -1,   265,   209,   457,
      -1,   265,   212,   452,    -1,   265,   452,    -1,    -1,   407,
     408,    -1,   156,   450,     7,    -1,   157,   450,     7,    -1,
     143,   300,     7,    -1,   158,   300,     7,    -1,   140,   263,
     400,   264,    -1,    -1,   409,   410,    -1,   156,   450,     7,
      -1,   157,   450,     7,    -1,   143,   300,     7,    -1,   160,
     450,     7,    -1,   161,   450,     7,    -1,   140,   263,   400,
     264,    -1,    -1,   411,   412,    -1,   163,   450,     7,    -1,
      88,   450,     7,    -1,   164,   300,     7,    -1,    18,   450,
       7,    -1,   140,   263,   400,   264,    -1,    -1,   413,   414,
      -1,   163,   450,     7,    -1,   166,   450,     7,    -1,    88,
     450,     7,    -1,    18,   450,     7,    -1,   133,   456,     7,
      -1,   167,   263,   415,   264,    -1,   140,   263,   400,   264,
      -1,   141,   263,   400,   264,    -1,    -1,   415,   263,   416,
     264,    -1,    -1,   416,   417,    -1,    86,     5,     7,    -1,
     112,     5,     7,    -1,   130,   283,     7,    -1,    88,   450,
       7,    -1,    99,   300,     7,    -1,    18,     5,     7,    -1,
      -1,   418,   419,    -1,   263,   420,   264,    -1,   447,    -1,
     446,    -1,    -1,   420,   421,    -1,    96,   456,     7,    -1,
      96,     5,   294,     7,    -1,   134,   456,     7,    -1,   188,
     456,     7,    -1,   112,   263,   422,   264,    -1,    -1,   422,
     263,   423,   264,    -1,   422,   447,    -1,   422,   446,    -1,
      -1,   423,   424,    -1,    96,   456,     7,    -1,    75,   263,
     425,   264,    -1,    -1,   425,   117,   263,   426,   264,    -1,
     425,     5,   263,   426,   264,    -1,    -1,   426,   427,    -1,
      -1,   386,   257,   428,   304,   258,     7,    -1,    86,     5,
       7,    -1,   130,   283,     7,    -1,    81,     5,     7,    -1,
      83,     5,     7,    -1,    -1,   429,   430,    -1,   263,   431,
     264,    -1,   447,    -1,   446,    -1,    -1,   431,   432,    -1,
      96,   456,     7,    -1,   190,   456,     7,    -1,   214,     5,
       7,    -1,   192,   457,     7,    -1,   140,   263,   435,   264,
      -1,    -1,   189,   456,   191,   456,   434,   263,   435,   264,
      -1,    -1,    -1,   435,   436,   437,    -1,   193,   257,   439,
     442,   443,   258,     7,    -1,   194,   257,   439,   442,   443,
     258,     7,    -1,   194,   257,     6,   265,   300,   443,   258,
       7,    -1,   194,   257,     6,   265,   231,   257,   457,   258,
     443,   258,     7,    -1,   196,   257,     6,   443,   258,     7,
      -1,    -1,   195,   257,   283,   438,   265,   130,   283,   443,
     258,     7,    -1,   446,    -1,   456,   441,   265,    -1,   456,
     441,   440,     5,   441,   265,    -1,   248,    -1,   249,    -1,
     246,    -1,   247,    -1,    -1,   257,   283,   258,    -1,   199,
      -1,   200,   283,    -1,   201,   283,    -1,   203,   263,   263,
     453,   264,   263,   453,   264,   263,   453,   264,   264,    -1,
     202,   283,    -1,   202,   263,   300,   265,   300,   265,   300,
     264,   263,   452,   265,   452,   265,   452,   264,    -1,   204,
     263,   453,   264,    -1,   205,   263,   263,   453,   264,   263,
     453,   264,   264,   263,   450,   264,    -1,   206,   263,   263,
     453,   264,   263,   453,   264,   263,   453,   264,   264,   263,
     450,   265,   450,   264,    -1,   207,   263,   263,   453,   264,
     263,   453,   264,   263,   453,   264,   263,   453,   264,   264,
     263,   450,   265,   450,   265,   450,   264,    -1,   200,   283,
     208,     5,   263,   450,   265,   450,   264,   263,   450,   264,
      -1,    -1,   443,   444,    -1,   265,   209,   457,    -1,   265,
     209,   241,   457,    -1,   265,   209,   242,   457,    -1,   265,
     210,   450,    -1,   265,   217,    -1,   265,   218,    -1,   265,
     213,   450,    -1,   265,   214,     5,    -1,   265,   215,   445,
      -1,   265,   216,   445,    -1,   265,   214,   445,    -1,   265,
     211,   450,    -1,   265,   212,   452,    -1,   265,   198,     5,
      -1,   265,   220,     5,    -1,   265,   219,   450,    -1,   265,
      75,   452,    -1,   265,   221,   450,    -1,   265,   221,   263,
     453,   264,    -1,   265,   222,    -1,   265,   223,    -1,   265,
     136,   452,    -1,   265,   168,   263,   300,   265,   300,   265,
     300,   264,    -1,   265,   224,   302,    -1,   265,   225,    -1,
     265,   225,   263,   450,   265,   450,   265,   450,   264,    -1,
     265,   226,    -1,   265,   226,   263,   450,   265,   450,   265,
     450,   264,    -1,   265,   227,    -1,   265,   227,   263,   450,
     265,   450,   265,   450,   264,    -1,   265,   228,   263,   453,
     264,    -1,   265,   229,     3,    -1,   265,   230,    -1,    -1,
     445,     6,    -1,    13,   255,   450,     8,   450,   256,    -1,
      13,   255,   450,     8,   450,     8,   450,   256,    -1,    13,
       5,   130,   263,   450,     8,   450,   264,    -1,    13,     5,
     130,   263,   450,     8,   450,     8,   450,   264,    -1,    14,
      -1,    15,   255,   450,   256,    -1,    17,    -1,    29,   257,
     448,   258,     7,    -1,   456,   233,   452,     7,    -1,   456,
     233,     6,     7,    -1,   456,   233,   231,   257,   457,   258,
       7,    -1,   456,   233,   458,     7,    -1,   456,   233,    28,
     257,   457,   258,     7,    -1,    11,   255,     6,   256,     7,
      -1,    11,   260,     7,    -1,    11,   255,     6,   265,   453,
     256,     7,    -1,    12,   255,   456,   256,     7,    -1,    12,
     255,   456,   256,   257,   450,   258,     7,    -1,    -1,   448,
     293,     5,    -1,   448,   293,     5,   233,   450,    -1,   448,
     293,     5,   233,     6,    -1,    35,    -1,    36,    -1,    37,
      -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,   456,    -1,   451,    -1,   255,
     450,   256,    -1,   247,   450,    -1,   252,   450,    -1,   450,
     247,   450,    -1,   450,   246,   450,    -1,   450,   248,   450,
      -1,   450,   249,   450,    -1,   450,   250,   450,    -1,   450,
     254,   450,    -1,   450,   240,   450,    -1,   450,   241,   450,
      -1,   450,   245,   450,    -1,   450,   244,   450,    -1,   450,
     239,   450,    -1,   450,   238,   450,    -1,   450,   236,   450,
      -1,   450,   235,   450,    -1,    35,   257,   450,   258,    -1,
      36,   257,   450,   258,    -1,    37,   257,   450,   258,    -1,
      38,   257,   450,   258,    -1,    39,   257,   450,   258,    -1,
      40,   257,   450,   258,    -1,    41,   257,   450,   258,    -1,
      42,   257,   450,   258,    -1,    43,   257,   450,   258,    -1,
      44,   257,   450,   258,    -1,    45,   257,   450,   265,   450,
     258,    -1,    46,   257,   450,   258,    -1,    47,   257,   450,
     258,    -1,    48,   257,   450,   258,    -1,    49,   257,   450,
     258,    -1,    50,   257,   450,   258,    -1,    51,   257,   450,
     258,    -1,    52,   257,   450,   265,   450,   258,    -1,    53,
     257,   450,   265,   450,   258,    -1,    54,   257,   450,   265,
     450,   258,    -1,   450,   260,    -1,     4,    -1,     3,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
     456,    -1,    -1,   450,    -1,   454,    -1,   263,   453,   264,
      -1,   450,    -1,   454,    -1,   453,   265,   450,    -1,   453,
     265,   454,    -1,   450,     8,   450,    -1,   450,     8,   450,
       8,   450,    -1,     5,   263,   264,    -1,     5,   263,   453,
     264,    -1,    24,   257,     5,   258,    -1,    25,   257,     5,
     265,     5,   258,    -1,    26,   257,   450,   265,   450,   265,
     450,   258,    -1,    27,   257,   450,   265,   450,   265,   450,
     258,    -1,     5,   267,   263,   450,   264,    -1,   455,   267,
     263,   450,   264,    -1,     5,    -1,   455,    -1,     6,    -1,
     456,    -1,   458,    -1,    10,   255,   457,   256,    -1,    10,
     255,   457,   265,   453,   256,    -1,   232,    -1,     9,   257,
     457,   265,   457,   258,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   341,   341,   341,   377,   381,   380,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   399,   401,   403,
     408,   418,   420,   422,   424,   426,   428,   430,   432,   434,
     436,   438,   440,   442,   444,   446,   448,   450,   452,   454,
     456,   459,   459,   481,   484,   490,   493,   499,   505,   507,
     509,   512,   514,   520,   530,   519,   547,   546,   563,   574,
     579,   596,   626,   629,   642,   643,   650,   652,   655,   673,
     686,   693,   701,   705,   712,   723,   729,   736,   747,   756,
     764,   778,   791,   826,   830,   840,   857,   857,   862,   868,
     869,   874,   882,   885,   890,   892,   912,   956,   958,   962,
     965,   985,   991,   998,   998,  1008,  1012,  1018,  1021,  1028,
    1028,  1041,  1044,  1057,  1043,  1085,  1091,  1097,  1103,  1109,
    1115,  1121,  1127,  1133,  1139,  1145,  1151,  1157,  1163,  1169,
    1175,  1181,  1188,  1194,  1196,  1207,  1209,  1215,  1289,  1323,
    1332,  1345,  1344,  1359,  1358,  1373,  1372,  1388,  1400,  1406,
    1413,  1412,  1443,  1469,  1482,  1488,  1495,  1501,  1508,  1515,
    1527,  1528,  1529,  1534,  1535,  1541,  1543,  1546,  1563,  1567,
    1575,  1577,  1583,  1588,  1596,  1598,  1606,  1609,  1615,  1618,
    1621,  1660,  1665,  1673,  1679,  1685,  1692,  1695,  1703,  1705,
    1713,  1718,  1724,  1734,  1744,  1752,  1754,  1762,  1771,  1777,
    1825,  1828,  1831,  1834,  1837,  1849,  1853,  1858,  1863,  1865,
    1871,  1877,  1883,  1890,  1898,  1907,  1910,  1929,  1933,  1938,
    1948,  1955,  1961,  1971,  1976,  1982,  1987,  1995,  2003,  2012,
    2030,  2039,  2047,  2055,  2065,  2075,  2085,  2106,  2111,  2116,
    2121,  2123,  2130,  2135,  2141,  2148,  2156,  2165,  2168,  2171,
    2174,  2182,  2187,  2204,  2214,  2228,  2234,  2237,  2242,  2247,
    2261,  2281,  2286,  2291,  2296,  2325,  2331,  2335,  2329,  2409,
    2414,  2424,  2428,  2434,  2441,  2444,  2451,  2467,  2474,  2476,
    2495,  2507,  2515,  2519,  2535,  2540,  2551,  2556,  2562,  2569,
    2580,  2595,  2599,  2636,  2646,  2655,  2661,  2694,  2697,  2700,
    2716,  2720,  2725,  2730,  2732,  2739,  2743,  2749,  2756,  2764,
    2774,  2776,  2783,  2787,  2792,  2799,  2815,  2821,  2824,  2828,
    2831,  2841,  2846,  2845,  2877,  2883,  2882,  3199,  3204,  3213,
    3222,  3231,  3236,  3239,  3280,  3284,  3289,  3294,  3303,  3306,
    3309,  3312,  3324,  3329,  3334,  3344,  3354,  3369,  3375,  3380,
    3382,  3384,  3386,  3395,  3413,  3420,  3428,  3419,  3552,  3557,
    3566,  3575,  3580,  3589,  3601,  3615,  3629,  3635,  3643,  3634,
    3715,  3716,  3717,  3718,  3719,  3720,  3721,  3722,  3728,  3749,
    3774,  3778,  3783,  3788,  3790,  3797,  3802,  3808,  3815,  3823,
    3827,  3826,  3831,  3837,  3841,  3846,  3857,  3870,  3876,  3879,
    3888,  3891,  3896,  3901,  3906,  3911,  3916,  3922,  3931,  3939,
    3941,  3953,  3963,  3970,  3972,  3985,  3992,  4005,  4027,  4034,
    4040,  4046,  4052,  4060,  4082,  4089,  4095,  4106,  4117,  4130,
    4145,  4160,  4175,  4195,  4216,  4228,  4248,  4265,  4284,  4305,
    4319,  4333,  4340,  4374,  4387,  4401,  4414,  4428,  4427,  4437,
    4436,  4445,  4456,  4468,  4478,  4486,  4499,  4512,  4526,  4536,
    4546,  4560,  4574,  4592,  4611,  4622,  4637,  4652,  4667,  4682,
    4697,  4708,  4713,  4724,  4729,  4733,  4736,  4746,  4762,  4771,
    4777,  4781,  4785,  4789,  4794,  4806,  4816,  4822,  4826,  4830,
    4834,  4838,  4843,  4855,  4864,  4869,  4873,  4877,  4881,  4885,
    4897,  4909,  4914,  4918,  4922,  4926,  4931,  4941,  4947,  4953,
    4964,  4966,  4972,  4984,  4989,  4999,  5028,  5031,  5034,  5042,
    5060,  5066,  5071,  5076,  5078,  5083,  5091,  5095,  5102,  5110,
    5123,  5128,  5135,  5137,  5140,  5142,  5149,  5154,  5159,  5162,
    5169,  5173,  5179,  5194,  5203,  5208,  5207,  5242,  5253,  5258,
    5267,  5285,  5291,  5296,  5299,  5301,  5306,  5313,  5317,  5324,
    5336,  5347,  5352,  5359,  5358,  5386,  5389,  5388,  5405,  5410,
    5415,  5424,  5433,  5443,  5442,  5453,  5462,  5474,  5498,  5499,
    5500,  5501,  5507,  5508,  5514,  5520,  5527,  5534,  5558,  5565,
    5577,  5590,  5610,  5636,  5669,  5691,  5721,  5725,  5732,  5739,
    5746,  5750,  5754,  5758,  5762,  5772,  5777,  5782,  5802,  5809,
    5819,  5828,  5837,  5844,  5852,  5856,  5865,  5869,  5873,  5881,
    5887,  5891,  5899,  5906,  5914,  5921,  5929,  5936,  5944,  5948,
    5958,  5963,  6013,  6028,  6044,  6064,  6084,  6140,  6144,  6157,
    6159,  6174,  6180,  6186,  6192,  6203,  6208,  6213,  6225,  6235,
    6251,  6254,  6260,  6266,  6278,  6279,  6280,  6281,  6282,  6283,
    6284,  6285,  6286,  6287,  6288,  6289,  6290,  6291,  6292,  6293,
    6294,  6295,  6296,  6297,  6298,  6302,  6303,  6304,  6305,  6306,
    6307,  6308,  6309,  6310,  6311,  6312,  6313,  6314,  6315,  6316,
    6317,  6318,  6319,  6320,  6321,  6322,  6323,  6324,  6325,  6326,
    6327,  6328,  6329,  6330,  6331,  6332,  6333,  6334,  6335,  6336,
    6337,  6338,  6339,  6343,  6348,  6349,  6350,  6351,  6352,  6353,
    6354,  6355,  6374,  6376,  6382,  6385,  6392,  6398,  6401,  6404,
    6416,  6422,  6433,  6449,  6471,  6486,  6524,  6532,  6544,  6552,
    6563,  6566,  6573,  6576,  6591,  6596,  6601,  6620,  6630
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
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@17", 
  "@18", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@19", 
  "@20", "GlobalTerm", "GlobalTermTerm", "@21", "@22", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@23", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@24", "@25", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@26", "PostOperations", 
  "BracedPostOperation", "PostOperation", "PostOperationTerm", 
  "SeparatePostOperation", "@27", "PostSubOperations", "@28", 
  "PostSubOperation", "@29", "PostQuantitiesToPrint", "Combination", 
  "PostQuantitySupport", "PrintSubType", "PrintOptions", "PrintOption", 
  "ParsedStrings", "Loop", "Affectation", "DefineConstants", 
  "NameForFunction", "FExpr", "OneFExpr", "ListOfFExpr", 
  "RecursiveListOfFExpr", "MultiFExpr", "StringIndex", "String__Index", 
  "CharExpr", "StrCat", 0
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
     274,   275,   274,   276,   276,   277,   277,   277,   277,   277,
     277,   277,   277,   279,   280,   278,   282,   281,   281,   283,
     283,   284,   285,   285,   286,   286,   287,   287,   287,   288,
     289,   289,   290,   290,   290,   291,   291,   291,   291,   291,
     291,   291,   291,   292,   292,   292,   293,   293,   294,   295,
     295,   296,   297,   297,   298,   298,   298,   298,   298,   299,
     299,   300,   300,   301,   300,   302,   302,   303,   303,   305,
     304,   306,   307,   308,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   309,   309,   309,   309,   309,
     309,   310,   309,   311,   309,   312,   309,   309,   309,   309,
     313,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     314,   314,   314,   315,   315,   316,   316,   316,   317,   317,
     318,   318,   319,   319,   320,   320,   321,   321,   322,   322,
     322,   323,   323,   324,   324,   325,   325,   325,   326,   326,
     327,   327,   328,   328,   328,   329,   329,   330,   330,   331,
     331,   331,   331,   331,   331,   332,   332,   333,   333,   333,
     334,   334,   335,   335,   335,   335,   335,   336,   336,   336,
     337,   337,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   339,   339,   340,
     340,   340,   341,   341,   342,   342,   342,   342,   342,   342,
     342,   343,   343,   343,   344,   344,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   346,   347,   348,   346,   349,
     349,   350,   350,   351,   351,   351,   352,   352,   353,   353,
     354,   354,   355,   355,   356,   356,   357,   357,   358,   358,
     358,   359,   359,   359,   360,   360,   361,   361,   361,   361,
     362,   362,   363,   363,   363,   364,   364,   365,   365,   365,
     365,   365,   366,   366,   366,   367,   367,   368,   368,   368,
     368,   368,   369,   368,   368,   370,   368,   368,   368,   368,
     368,   368,   371,   371,   372,   372,   372,   372,   373,   373,
     373,   373,   374,   374,   375,   375,   375,   376,   376,   377,
     377,   377,   377,   378,   378,   380,   381,   379,   379,   379,
     379,   379,   379,   379,   382,   382,   383,   384,   385,   383,
     386,   386,   386,   386,   386,   386,   386,   386,   387,   387,
     388,   388,   389,   389,   389,   390,   390,   391,   391,   391,
     392,   391,   391,   393,   393,   393,   394,   394,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   396,   396,   397,
     397,   398,   398,   399,   399,   400,   400,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   402,   401,   403,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   404,   404,   405,   405,   406,   406,   406,   407,   407,
     408,   408,   408,   408,   408,   409,   409,   410,   410,   410,
     410,   410,   410,   411,   411,   412,   412,   412,   412,   412,
     413,   413,   414,   414,   414,   414,   414,   414,   414,   414,
     415,   415,   416,   416,   417,   417,   417,   417,   417,   417,
     418,   418,   419,   419,   419,   420,   420,   421,   421,   421,
     421,   421,   422,   422,   422,   422,   423,   423,   424,   424,
     425,   425,   425,   426,   426,   428,   427,   427,   427,   427,
     427,   429,   429,   430,   430,   430,   431,   431,   432,   432,
     432,   432,   432,   434,   433,   435,   436,   435,   437,   437,
     437,   437,   437,   438,   437,   437,   439,   439,   440,   440,
     440,   440,   441,   441,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   443,   443,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     445,   445,   446,   446,   446,   446,   446,   446,   446,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     448,   448,   448,   448,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   451,   451,   451,   451,   451,   451,
     451,   451,   452,   452,   452,   452,   453,   453,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   455,   455,
     456,   456,   457,   457,   457,   457,   457,   457,   458
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
       4,     0,     4,     2,     0,     2,     3,     3,     4,     4,
       7,     3,     3,     3,     3,     0,     0,     0,    18,     0,
       4,     0,     2,     3,     3,     3,     1,     3,     0,     3,
       1,     3,     0,     3,     0,     4,     0,     2,     3,     3,
       3,     0,     4,     2,     0,     2,     3,     3,     3,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     3,
       4,     4,     0,     4,     2,     0,     2,     3,     3,     3,
       3,     3,     0,     5,     3,     0,     5,     3,     3,     3,
       3,     3,     0,     3,     0,     2,     2,     2,     4,     4,
       4,     4,     0,     2,     3,     3,     3,     0,     2,     3,
       3,     3,     3,     0,     2,     0,     0,     9,     3,     3,
       3,     2,     3,     5,     0,     2,     3,     0,     0,     9,
       0,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     4,
       0,     5,     1,     0,     4,     2,     0,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     0,
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
       0,     2,     3,     1,     1,     0,     2,     3,     4,     3,
       3,     4,     0,     4,     2,     2,     0,     2,     3,     4,
       0,     5,     5,     0,     2,     0,     6,     3,     3,     3,
       3,     0,     2,     3,     1,     1,     0,     2,     3,     3,
       3,     3,     4,     0,     8,     0,     0,     3,     7,     7,
       8,    11,     6,     0,    10,     1,     3,     6,     1,     1,
       1,     1,     0,     3,     1,     2,     2,    12,     2,    15,
       4,    12,    17,    22,    12,     0,     2,     3,     4,     4,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     2,     2,     3,     9,
       3,     2,     9,     2,     9,     2,     9,     5,     3,     2,
       0,     2,     6,     8,     8,    10,     1,     4,     1,     5,
       4,     4,     7,     4,     7,     5,     3,     7,     5,     8,
       0,     3,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
       6,     6,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     3,     1,     1,     3,     3,
       3,     5,     3,     4,     4,     6,     8,     8,     5,     5,
       1,     1,     1,     1,     1,     4,     6,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     4,     1,     5,    41,   740,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   741,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   742,     0,     0,   747,   743,
      19,   744,   650,    43,   205,   168,   181,   237,    92,   300,
     380,   520,   551,     0,     0,   636,     0,   638,     0,     0,
       0,     0,    42,   575,     0,   722,     0,     0,   646,     0,
      27,    26,    25,    23,    24,    22,    40,    30,    32,    33,
      34,    35,    31,    36,    37,    38,    39,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   715,
     714,   740,     0,     0,     0,     0,     0,     0,   716,   717,
     718,   719,   720,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   723,   675,
       0,   724,   721,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,   740,     0,     7,    44,    49,    52,    51,
       0,   210,     9,   206,   209,   208,   170,    10,   183,    11,
     242,    12,   238,   241,   240,   740,     0,     8,    93,    98,
      97,   305,    13,   301,   304,   303,   385,    14,   381,   384,
     383,   525,    15,   521,   524,   523,   556,    16,   552,   555,
     554,   563,     0,     0,     0,     0,   582,     0,     0,   740,
      62,     0,    59,   573,     0,    60,   595,     0,     0,   641,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,     0,   726,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   713,   640,   643,
     738,   645,     0,   648,     0,     0,   745,     0,   639,   651,
       0,     0,     0,    83,   722,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
     637,   584,     0,     0,     0,     0,     0,     0,     0,     0,
     595,     0,     0,   103,   595,    75,     0,    72,     0,    58,
      70,    82,     0,     0,     0,   739,   732,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   676,   725,     0,   730,   692,   691,
     690,   689,   685,   686,   688,   687,   680,   679,   681,   682,
     683,   684,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,   740,     0,     0,     0,     0,     0,     0,   207,
     211,     0,     0,   169,   171,     0,   103,     0,   182,   184,
       0,     0,     0,     0,     0,     0,   239,   243,     0,     0,
      86,     0,     0,     0,     0,   302,   306,     0,     0,   390,
     382,   386,   392,     0,     0,     0,     0,   522,   526,     0,
       0,     0,     0,     0,   553,   557,   565,     0,     0,   585,
     586,   103,   588,     0,     0,     0,     0,     0,     0,     0,
     580,   581,   578,   579,   576,     0,     0,     0,     0,   595,
     109,     0,     0,     0,    86,     0,     0,    65,    56,    64,
       0,     0,   596,   733,   734,     0,     0,     0,     0,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,     0,
     704,   705,   706,   707,   708,   709,     0,     0,     0,     0,
     728,   729,     0,   647,     0,   748,   746,   653,   652,     0,
      91,    63,     0,     0,     0,     0,    45,     0,     0,     0,
     217,     0,   740,     0,   174,     0,   188,     0,     0,   291,
       0,   740,     0,   251,   269,   284,   103,     0,     0,     0,
       0,   740,     0,   312,   334,   740,     0,   393,     0,   740,
       0,   532,     0,     0,     0,   565,     0,     0,     0,   566,
       0,     0,   632,     0,     0,     0,     0,     0,     0,     0,
       0,   583,   582,     0,     0,     0,     0,   104,     0,     0,
      78,    76,    71,     0,    77,     0,    86,   572,   722,   722,
       0,     0,     0,     0,     0,   722,     0,   630,   630,   630,
     601,   602,     0,     0,     0,   616,   617,   105,   621,   623,
     625,     0,     0,   629,     0,     0,     0,   644,     0,     0,
       0,     0,   642,   731,   649,    88,    47,    46,    48,    84,
      50,     0,   217,     0,   214,     0,     0,   212,     0,   172,
       0,   186,   185,     0,   246,     0,   244,     0,     0,     0,
       0,   103,    94,   100,   309,     0,   307,     0,     0,     0,
     387,     0,   415,     0,   527,     0,   529,   530,   558,   566,
     559,   561,   560,   564,     0,     0,     0,     0,   103,     0,
     590,     0,     0,     0,   568,     0,     0,     0,     0,     0,
     740,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     673,     0,   150,     0,     0,     0,     0,   141,   143,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,   139,
       0,   136,   721,   569,     0,     0,     0,    73,   595,     0,
       0,   613,   618,   103,   610,     0,     0,   597,   600,   608,
     609,   603,   604,   607,   605,   606,   612,   611,     0,   614,
     103,   620,     0,     0,     0,     0,   628,   735,     0,     0,
     703,   710,   711,   712,     0,    53,     0,   220,   215,   219,
     213,   176,   173,   190,   187,   294,   250,   293,   245,   254,
     247,   253,   271,   248,   286,   249,    95,     0,   308,   315,
     310,   314,     0,     0,     0,     0,   311,   335,   337,   336,
     388,   396,   389,   395,     0,   528,   536,   531,   535,   534,
     562,   567,     0,   634,   633,     0,     0,     0,     0,     0,
       0,   577,   101,   102,   595,   570,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,   132,   134,     0,
     158,   156,   153,   155,   154,   740,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,   165,    80,
      79,    74,     0,    57,    69,     0,     0,     0,   598,   599,
     631,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
      96,     0,   353,   353,   364,   342,     0,     0,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   447,   449,   391,   416,   470,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,   109,     0,
       0,     0,     0,   109,   109,     0,   135,     0,   379,     0,
     131,   130,   129,   128,   127,   123,   124,   126,   125,   119,
     120,   115,   118,   121,   116,   122,   157,   159,   161,     0,
     163,     0,     0,   137,     0,     0,    68,    67,   103,   615,
     106,   103,     0,     0,     0,   627,   736,   737,    85,     0,
       0,     0,     0,     0,   103,   103,   103,   103,     0,     0,
       0,   103,   218,   221,     0,     0,   175,   177,     0,     0,
       0,   189,   191,     0,     0,     0,     0,   292,   295,     0,
       0,     0,     0,   105,   105,     0,     0,   252,   255,     0,
       0,     0,   270,   272,     0,     0,     0,   285,   287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   722,   325,
     313,   316,   370,   370,   370,     0,     0,     0,     0,     0,
     722,     0,     0,     0,   394,   397,   406,     0,     0,   103,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   425,   103,     0,   478,     0,   485,     0,   493,   500,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   533,   537,   635,     0,     0,     0,     0,     0,
       0,     0,   148,     0,   149,     0,   145,     0,     0,     0,
     109,   378,     0,   160,   162,     0,     0,     0,    81,   574,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,   103,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,   165,   195,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
     280,   282,     0,   276,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   322,     0,     0,     0,
       0,   109,     0,     0,     0,     0,   371,   372,   373,   374,
     375,   376,   377,     0,     0,   338,   354,     0,   339,     0,
     340,   365,     0,     0,     0,   347,   341,   343,     0,     0,
     409,     0,   407,     0,     0,     0,   413,     0,   411,     0,
       0,   417,     0,     0,   418,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   105,   540,     0,     0,     0,     0,     0,     0,     0,
     571,     0,     0,   109,     0,   142,     0,     0,   113,   164,
       0,   166,   103,     0,     0,     0,    54,   223,   224,   229,
     230,     0,   233,     0,   232,   226,   225,    86,   227,   222,
       0,   231,   179,   178,     0,     0,   192,   193,   296,   297,
     298,   299,   256,   257,     0,     0,     0,    86,   261,   262,
     263,   264,   273,    86,   275,    86,   274,   289,   288,   290,
     330,   328,   329,   320,   318,   319,   317,   332,   324,   331,
     327,   321,     0,     0,     0,     0,     0,     0,   361,   355,
       0,   367,     0,     0,     0,   399,   398,    86,   400,   401,
     404,   405,    86,   402,   403,     0,     0,     0,   103,     0,
       0,     0,     0,     0,     0,   103,     0,     0,     0,     0,
     103,     0,     0,   103,   419,   479,     0,     0,   103,     0,
       0,     0,     0,   420,   486,     0,     0,     0,     0,     0,
     103,   421,   494,     0,     0,     0,     0,     0,     0,     0,
       0,   422,   501,   103,     0,   103,   722,   722,   722,     0,
     722,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   471,   473,   472,   473,     0,   538,     0,   722,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,   103,   103,     0,   103,
     180,   197,   194,   258,     0,   259,     0,   281,     0,   277,
       0,     0,     0,     0,   359,   360,   362,     0,   358,   109,
     366,   109,   344,   345,     0,     0,     0,     0,   346,   348,
     408,     0,   412,     0,   423,   415,   424,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   441,     0,   415,     0,
       0,     0,     0,     0,   415,     0,     0,     0,     0,     0,
       0,     0,     0,   415,     0,     0,     0,     0,     0,   415,
     415,     0,     0,   510,     0,   454,     0,     0,     0,     0,
       0,     0,   458,   459,     0,     0,     0,     0,     0,     0,
       0,   453,     0,     0,     0,     0,   539,     0,     0,     0,
       0,     0,     0,   151,     0,     0,   144,   114,     0,   619,
     622,   624,   626,     0,     0,     0,     0,     0,     0,     0,
       0,   283,   279,     0,   323,   326,     0,   356,   368,     0,
       0,     0,     0,   410,   414,     0,     0,   722,     0,   722,
       0,     0,     0,     0,     0,   103,     0,   482,   480,   481,
     483,   103,     0,   489,   487,   488,   490,   491,   103,   498,
     496,     0,   495,   497,   505,   504,   506,     0,     0,   502,
     503,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   722,
     474,     0,   543,   543,     0,   722,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,   198,     0,     0,   333,   363,
       0,     0,   349,   350,   351,   352,   426,   428,     0,     0,
       0,     0,     0,     0,   434,     0,     0,   484,     0,   492,
       0,   499,   508,   509,   512,   507,   451,     0,     0,   432,
     433,     0,     0,     0,     0,     0,   464,   468,   469,     0,
     467,     0,   448,     0,   722,   477,   450,   370,   370,   594,
       0,   587,   591,     0,     0,     0,   147,     0,   236,   235,
     228,   234,     0,     0,     0,     0,     0,     0,     0,   260,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     0,     0,   103,     0,   103,     0,     0,
       0,     0,     0,     0,   103,     0,   475,   476,     0,     0,
       0,     0,   542,     0,   544,   541,   722,     0,     0,     0,
       0,   199,   200,   201,   202,   203,   204,     0,     0,     0,
     415,   436,   437,     0,     0,     0,     0,   435,     0,     0,
     415,     0,     0,     0,     0,   103,     0,     0,   511,   513,
       0,   431,     0,   455,   456,   457,     0,     0,   461,     0,
       0,     0,     0,     0,     0,     0,   545,     0,     0,     0,
     146,     0,     0,     0,     0,     0,     0,     0,     0,   722,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,   466,     0,   549,   550,
     547,   548,   109,   589,     0,     0,     0,   266,   357,   369,
     427,   438,   439,   440,     0,   415,     0,   445,   415,   519,
     514,   517,   518,   515,   516,   452,   430,     0,   415,   415,
     460,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,   465,     0,   592,     0,     0,     0,
     443,   415,   446,   429,     0,     0,   546,     0,     0,    89,
       0,     0,   462,   463,     0,   267,     0,    61,     0,   444,
       0,     0,    90,     0,     0,     0,   442,   593,    89,     0,
       0,   268
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   110,   186,
     187,   931,  1535,   242,   616,   243,  2008,   244,   498,   769,
     916,   349,   494,   350,   411,   182,   311,  2017,   312,   115,
     208,   440,   489,   490,  1511,   923,   607,   608,   757,  1009,
    1529,   758,   873,   874,  1353,   868,   907,  1031,  1033,   112,
     318,   424,   668,   934,  1067,   113,   319,   429,   670,   935,
    1072,  1385,  1658,  1755,   111,   193,   317,   420,   663,   933,
    1063,   114,   202,   320,   437,   677,   937,  1088,  1396,  1986,
    2021,   678,   938,  1093,  1245,  1405,  1242,  1403,   679,   939,
    1098,   673,   936,  1078,   116,   213,   323,   446,   687,   941,
    1111,  1417,  1261,  1552,   688,   837,  1115,  1287,  1434,  1569,
    1112,  1276,  1559,  1760,  1114,  1281,  1561,  1761,  1277,   759,
     117,   218,   324,   451,   578,   691,   946,  1125,  1291,  1437,
    1297,  1442,   844,   986,  1168,  1169,  1512,  1632,  1730,  1316,
    1465,  1318,  1474,  1320,  1482,  1321,  1492,  1711,  1844,  1899,
     118,   223,   325,   458,   695,   988,  1173,  1515,  1807,  1864,
    1952,   119,   228,   326,   465,    27,   327,   589,   704,    82,
     352,   235,   485,   342,   340,   354,   502,   783,   987,    28,
     109,   760,   279,   169,   170,   280,   281,    29,   172,    60,
      61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1420
static const short yypact[] =
{
   -1420,    17, -1420, -1420,   209,  2751,  -193,    91,   -34,   608,
     216,  1489,   117,    -7,    -3,     5,    34,    60,    62,    76,
     101,   138,   151,     9, -1420, -1420,   830, -1420, -1420,    54,
     190,   176,   441,   445,   482,   487, -1420,   491,   529,   538,
     567,   581, -1420,   613, -1420,   672,   677,   682,   688,   690,
     701,   710,   747,   749,   756, -1420,   239,   266, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420,   366,    16, -1420,   344, -1420,   359,   522,
     544,   555, -1420, -1420,   504,  2158,  3853,  -176, -1420,   525,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,   117,   117,  -235,
     165,   200,   -77,   -26,   229,   240,   379,   392,   494,   513,
     482,   686,  3853,  3853,   482,   242,    30,   818,  3853, -1420,
   -1420,   -61,   819,   574,   583,   589,   624,   642, -1420, -1420,
   -1420, -1420, -1420,   652,   657,   666,   674,   678,   714,   717,
     738,   741,   742,   743,   744,   745,   746,   750,   751,   753,
     757,   758,   759,   763,  3853,  3853,  3853,  3668,   937, -1420,
     846, -1420, -1420,   857,  1778,   859,  3668,    80,   762,  -161,
     936, -1420,   946,   122,   764, -1420, -1420, -1420, -1420, -1420,
     -86, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420,  -150,   765, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420,   766,  2716,  3309,  1138,   773,   767,  1138,  -123,
   -1420,    40, -1420, -1420,   774, -1420, -1420,  2179,   689, -1420,
    1001,  1032,  3853,  3853,   117,  3853,  3853,  3853,  3853,  3853,
    3853,  3853,  3853,  3853,  3853,  3853,  3853,  3853,  3853,  3853,
    3853,  3853,  3853,  3853,  3853,   117,   277,   277,  5422,   937,
     102, -1420,  3853,  3853,  3853,  3853,  3853,  3853,  3853,  3853,
    3853,  3853,  3853,  3853,  3853,  3853,  3853, -1420, -1420, -1420,
   -1420, -1420,   -84, -1420,  3853,   117, -1420,  3668, -1420,   805,
    2669,   806,   807, -1420,  1740,   808,  3853,   -60,   226,   447,
     405,    66, -1420,   489,   348,   388,   572,   779,  3853,  3853,
   -1420, -1420,    30,    30,    72,   780,   781,   788,   789,   790,
   -1420,    30,   307,   125, -1420,  1047,  3853, -1420,  3668, -1420,
   -1420, -1420,   791,    36,   -91, -1420, -1420,   123,   799,   795,
    4178,  4201,   811,  5445,  5471,  5497,  5523,  5549,  5575,  5601,
    5627,  5653,  5679,  4224,  5705,  5731,  5757,  5783,  5809,  5835,
    4262,  4285,  4308,   812, -1420, -1420,  3668,  3944,  2687,  1566,
    1825,  1825,   828,   828,   828,   828,   284,   284,   277,   277,
     277,   277,  1059,  5861,   814,   -30,  4042,  3853,  5044,    74,
      74,   -57,  -108,  1066,    74,  5887,    33,  1079,  1080, -1420,
   -1420,   823,  1082, -1420, -1420,   826,    59,  1086, -1420, -1420,
     831,  1088,  1090,   833,   834,   837, -1420, -1420,   868,   845,
      94,  1099,  1100,   843,   847, -1420, -1420,  1103,   856, -1420,
   -1420, -1420, -1420,  1115,   858,   482,   482, -1420, -1420,   482,
     860,   482,   117,  1119, -1420, -1420, -1420,  3974,  1629,   917,
   -1420,    59, -1420,   863,  3668,   873,   874,   875,   195,   881,
   -1420, -1420, -1420, -1420, -1420,  1135,   884,   885,   886, -1420,
   -1420,   300,  3853,  5913,   202,   282,  1014, -1420, -1420, -1420,
    1156,  4179, -1420, -1420, -1420,  1159,  3853,  3853,  1158, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,  3853,
   -1420, -1420, -1420, -1420, -1420, -1420,  3853,  3853,  3853,  1161,
     937, -1420,  3853, -1420,  1162, -1420, -1420, -1420,  4060,  5071,
   -1420, -1420,  1163,  1164,  1167,  1174, -1420,  1187,   956,   932,
   -1420,  1189,   168,  1198, -1420,  1199, -1420,  1207,  1208, -1420,
    1209,   168,  1211, -1420, -1420, -1420,    59,   986,  1213,  1216,
    1217,   168,  1218, -1420, -1420,   168,  1219, -1420,   964,   168,
    1221, -1420,  1224,  1226,  1227, -1420,  1230,  1231,  1232,   979,
    3853,  3853, -1420,  1243,   992,  3668,   332,  3668,  3668,  3668,
    1251, -1420,   773,  3853,  1254,   117,   303, -1420,  2058,  1255,
    4003,  1253, -1420,    64, -1420,    30,   304, -1420,  2487,  2487,
    1000,  1259,   183,  3853,  3853,  2487,  3853,  1260, -1420, -1420,
   -1420, -1420,  3853,  1262,  2226, -1420, -1420,  1007,  1012,  1013,
    1017,  1022,  1266, -1420,  1019,  4331,  4354, -1420,  5936,  5962,
    5988,  6014, -1420,  4060, -1420, -1420, -1420, -1420, -1420,  1023,
   -1420,  1228, -1420,   148, -1420,  1035,  1289, -1420,   361, -1420,
     373, -1420, -1420,   205, -1420,  1293, -1420,   250,   440,   486,
    1294,    59, -1420, -1420, -1420,  1304, -1420,   385,    79,  1306,
   -1420,   403, -1420,  1308, -1420,   578, -1420, -1420, -1420,  1052,
   -1420, -1420, -1420, -1420,   830,   559,  6040,  1064,    59,   495,
   -1420,   510,   524,   526, -1420,  1065,  6063,  1071,  1074,  1326,
     335, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420,  1091, -1420,  1092,  1093,  1094,  1095, -1420, -1420,  1348,
    2058,  2058,  2058,  2058,  1355,   339,  1377,  6502,  -144,  1126,
    1126, -1420,  1128, -1420,  3853,  3853,    65, -1420, -1420,  1146,
      32, -1420, -1420,    59, -1420,   117,   117, -1420,  4060,  4060,
   -1420,  4060, -1420,  1399,  1399,  1399,  4060, -1420,  3668,  4060,
      59, -1420,  3853,  3853,  3853,  3668, -1420, -1420,  3853,  3853,
   -1420, -1420, -1420, -1420,  3853, -1420,   502, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,  1400, -1420, -1420,
   -1420, -1420,  1145,  1147,  1149,  1151, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420,  2482, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420,  3853, -1420, -1420,  3853,  1144,  1152,  1153,  1155,
    1157, -1420, -1420, -1420, -1420, -1420, -1420,  1169,  1165,  1169,
    2058,  1414,  1419,  1180,  1181,  1200,  1185,  1185,  1185,  6479,
   -1420, -1420, -1420, -1420, -1420,    27,  1176, -1420,  2058,  2058,
    2058,  2058,  2058,  2058,  2058,  2058,  2058,  2058,  2058,  2058,
    2058,  2058,  2058,  2058,  1439,  3853,  1797, -1420,  1184,  4060,
    4033, -1420,   305, -1420, -1420,   482,    40,  1178, -1420, -1420,
   -1420,   528, -1420,   546,  4377,  4400,  4423,   550,  6089,  6115,
    5098,  1191, -1420,  1248,   158,   231,   590,   804,   374,   342,
   -1420,  4235, -1420, -1420, -1420, -1420,   340,    44,   -89,     2,
    1193,  1195,  1197,  1201,  1205,  1210,  1229,  1234,  1237,  1461,
    1238,   192,   419,   423,  1220,  1240,  1247,  1249,  1250,  1252,
    1258,  1269,  1270,  1242,  1245,  1271,  1272,  1280,  1281,  1290,
    1285,  1287,  1296, -1420, -1420, -1420, -1420, -1420,   -48,  5125,
    4446,    59,  3668,  3668,  3668,  3668,   315,  1298, -1420,  1300,
    4122,  1297,  1301, -1420, -1420,  1307, -1420,  1223, -1420,  2058,
    1997,  1707,  2043,  2043,  2043,   715,   715,   715,   715,   698,
     698,  1185,  1185,  1185,  1185,  1185, -1420, -1420, -1420,  1302,
    6502,   329,  3483, -1420,  3853,  1475, -1420, -1420,    59, -1420,
   -1420,    59,  3853,  3853,  3853, -1420, -1420, -1420, -1420,  1256,
      30,    30,    30,    30,    55,    58,    59,    59,  1310,   482,
    1479,   162, -1420, -1420,    81,  1483, -1420, -1420,  1311,  1484,
    1495, -1420, -1420,  1505,    71,  1506,   482, -1420, -1420,  1547,
    1556,  1558,  1312,  1007,  1007,    30,    30, -1420, -1420,  1560,
      41,    42, -1420, -1420,  1564,   482,  1571, -1420, -1420,  1572,
    1573,  1575,    93,   482,   482,  1568,  1578,    30,  2487, -1420,
   -1420, -1420,   794,  1303,  1182,   355,  1580,   482,    47,   117,
    2487,   117,    51,   482, -1420, -1420, -1420,   482,  1576,    59,
      59,  1579,   482,   482,   482,   482,   482,   482,   482,   482,
     482, -1420,    59,  3853, -1420,  3853, -1420,  3853, -1420, -1420,
      30,   117,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,  1582,   482,  1332,  1333,
    1328,   482, -1420, -1420, -1420,  3853,  1330,   557,   573,   587,
     592,  1585, -1420,  1336, -1420,  2058, -1420,  1340,  1346,  1341,
   -1420, -1420,  4089, -1420, -1420,  2058,  1350,   596,  4060, -1420,
    1343, -1420,  4469,  4492,  4515,    40,  1598,  1602,  1603,  1604,
      59,  1605,    59,  1608,  1611,  1612,  1031,  1613,  1615,    59,
    1617,  1618,  1620,  1184, -1420,  1621,  1623,  1624,  1625,  1633,
    1636,  1641,    35,  1394,  1653,  1654,  1655,  1656,  1657,  1658,
   -1420, -1420,  1660, -1420, -1420,  1661,  1662,  1665,  1666,  1667,
    1668,  1673,  1674,  1675,  1677,  1678, -1420,  1679,  1680,  1682,
    1683, -1420,  1686,  1687,  1688,  1438, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420,    30,  1693, -1420, -1420,  1445, -1420,    30,
   -1420, -1420,  1446,  1699,  1700, -1420, -1420, -1420,  1701,  1702,
   -1420,  1704, -1420,  1705,  1708,  1709, -1420,  1710, -1420,  1711,
    1448, -1420,  1449,  1463, -1420,  1454,  1457,  1458,  1459,  1462,
    1464,  1469,  1471,  1472,  1470,  4538,   514,  4561,   612,  4584,
     322,   692,  1477,  1482,  1485,  1487,  1490,  1491,  1492,  1493,
    1497,  1498,  1494,  1504,  1530,  1532,  1534,  1538,  1543,  1496,
      70,    70, -1420,  1741,  5152,  1554,  1555,  1557,  1559,  1561,
   -1420,    30,  6454, -1420,  3853, -1420,  1744,  1565, -1420,  6502,
      30, -1420,    59,  3853,  3853,  3853, -1420, -1420, -1420, -1420,
   -1420,  1594, -1420,  1595, -1420, -1420, -1420,  1596, -1420, -1420,
    1597, -1420, -1420, -1420,  1812,   599, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420,  1856,  1754,  1873,  1596, -1420, -1420,
   -1420, -1420, -1420,   605, -1420,   607, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,  1627, -1420, -1420,
   -1420, -1420,  1628,  1874,  1875,  1880,  1887,  1884, -1420, -1420,
    1888, -1420,  1889,  1890,   367, -1420, -1420,   609, -1420, -1420,
   -1420, -1420,   648, -1420, -1420,  1891,  1631,  1895,    59,   482,
     482,  3853,  3853,  3853,   482,    59,    30,  1897,  3853,  1644,
      59,  3853,  3853,    59, -1420, -1420,  3853,  1645,    59,  3853,
    3853,  3853,  3853, -1420, -1420,  3853,  3853,  3853,  1646,  3853,
      59, -1420, -1420,  3853,  3853,   482,  1647,  1649,  3853,  3853,
    1650, -1420, -1420,    59,  1907,    59,  2487,  2487,  2487,  3853,
    2487,  1908,  1909,   482,   482,  3853,   482,   482,    30,  1912,
    1911, -1420, -1420, -1420, -1420,    29, -1420,  1659,  2487,  3668,
    1669,  3668,  3668,  1663, -1420,  1684,  4607,  1692, -1420,  2058,
    1712,  1676,  5179,  5206,  5233,  1695,    59,    59,  1031,    59,
   -1420, -1420, -1420, -1420,  1915, -1420,  1918, -1420,  1926, -1420,
    1936,   482,  1958,  1972, -1420, -1420, -1420,  1722, -1420, -1420,
   -1420, -1420, -1420, -1420,  1169,  1169,  1169,    30, -1420, -1420,
   -1420,   482, -1420,   482, -1420, -1420, -1420,  1723,  1718,  1719,
    4630,  4653,  4676,  1720,  1732,  1721, -1420,  4699, -1420,  1984,
     737,   963,  1987,  4722, -1420,  1990,  1006,  1043,  1225,  1295,
    4745,  1406,  1689, -1420,  1728,  1991,  1886,  2122,  1992, -1420,
   -1420,  2206,  2555, -1420,   356, -1420,  1737,  1747,  1748,  1742,
    4768,  1743, -1420, -1420,  1745,  1746,  6141,  1757,  1762,  1764,
     662, -1420,   368,   376,  1767,  1768, -1420,  3853,  1770,   669,
    3853,   673,   675, -1420,  1775,  3853, -1420,  6502,  1776, -1420,
   -1420, -1420, -1420,  1779,  1783,  1787,  1782,  1789,   570,  2041,
    1786, -1420, -1420,  1793, -1420, -1420,  2046, -1420, -1420,  2047,
    2052,  2057,  2060, -1420, -1420,  2723,  2061,  2487,  3853,  2487,
    3853,  3853,   482,  2069,   482,    59,  2989, -1420, -1420, -1420,
   -1420,    59,  3043, -1420, -1420, -1420, -1420, -1420,    59, -1420,
   -1420,  3115, -1420, -1420, -1420, -1420, -1420,  3241,  3300, -1420,
   -1420,   691,  2074,  3853,    59,  2075,  2076,  3853,   117,   117,
    3853,  3853,  2077,  2079,  2080,   117,  2110,  1985,  2116,  2298,
   -1420,  2121, -1420, -1420,  5260,  2487,  1878,  5287,  1879,  1876,
    1881,  5314, -1420,    40,  2130,  2131,  2138,  2140,  2143,  3853,
    3853,  3853,  3853,  3853, -1420, -1420,  2042,  2145, -1420, -1420,
    1892,  1893, -1420, -1420, -1420, -1420,  2139, -1420,  1896,  6167,
    1894,  4791,  4814,  1900, -1420,  1898,  1901, -1420,  1903, -1420,
     382, -1420, -1420, -1420, -1420, -1420, -1420,  4837,   393, -1420,
   -1420,  6193,  1902,  1913,  4860,  4883, -1420, -1420, -1420,   694,
   -1420,   117, -1420,   117,  2487, -1420, -1420,  1395,  2095, -1420,
    1904, -1420, -1420,  1910,  3668,  3853, -1420,  1905, -1420, -1420,
   -1420, -1420,  2165,  2772,  2805,  2828,  3083,  3100,  2169, -1420,
   -1420,  1169,  1914,  2168,  2172,  3853,  3853,  3853,  3853,  2207,
      59,  3853,  1953,  3853,   523,    59,  2217,    59,  2221,  2233,
    2242,  3853,  3853,  2246,    59,   725, -1420, -1420,  2276,  2280,
    2281,    30, -1420,  2038, -1420, -1420,  2487,  3853,   728,  5341,
    3853, -1420, -1420, -1420, -1420, -1420, -1420,  2033,  2048,  2049,
   -1420, -1420, -1420,  6219,  6245,  6271,  4906, -1420,  2050,  4929,
   -1420,  6297,  2294,  2295,  3853,    59,  2304,    30, -1420, -1420,
    2053, -1420,   420, -1420, -1420, -1420,  6323,  6349, -1420,  2051,
    2305,  2310,  2309,  2313,  2319,  2320, -1420,  2089,  4952,  2090,
   -1420,  6375,  2348,  2349,  2357,  3426,  2358,  2366,  2367,  2487,
    2054,  3853,  3485,  2112,  2370,  2371,  3117,  2372,  2373,  2376,
    2377,  2378,    59,  2124,  2127,  2384, -1420,  2128, -1420, -1420,
   -1420, -1420, -1420, -1420,  3853,  2133,  2386, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420,  2129, -1420,  6401, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,  2141, -1420, -1420,
   -1420,  2390,  2142,  5368,  3853, -1420,  2336,  3853,  3611,  2144,
    3670,  2394,  3796,  3855, -1420,  2395, -1420,  4975,   482,  4998,
   -1420, -1420, -1420, -1420,  2396,  2397, -1420,  3853,  2399,  2146,
    3853,  3981, -1420, -1420,  5021, -1420,  2147, -1420,  6427, -1420,
    3853,  2284, -1420,  2401,  5395,  2407, -1420, -1420,  2146,  2415,
    2166, -1420
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420,   236, -1420,  -268, -1420,  1357, -1420, -1420,
    1359,  -337, -1420,  -541, -1420,  -409,  -551,   404, -1420, -1420,
   -1420, -1420,   541, -1420,  -625, -1420,  -995, -1420,  -614, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420,  1697, -1420,  1212, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,  1796, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
    1516, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1101,  -716,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1419, -1420, -1420, -1420,  1096,   924, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420, -1420,   707, -1420,
   -1420, -1420, -1420, -1420, -1420, -1420, -1420,  1863, -1420,  1758,
   -1420,  2324, -1420,  1861,  2227,  -325, -1420,   351,    14,   -56,
   -1420, -1420,  1107,  -520,  -568,  -165,   -41, -1420,    -5,  -102,
     -52
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -675
static const short yytable[] =
{
      30,   666,   545,  1183,   866,   178,   179,    59,  1188,  1189,
     675,   302,   791,  1282,     6,   478,   499,     3,    73,   491,
     685,   121,   416,   180,   689,   486,   417,  1170,   693,    89,
     181,   569,     6,   173,  1634,   239,   418,   914,   549,   345,
      83,     6,  1393,   345,   171,     6,  1240,  1243,  1171,     6,
     771,   772,     6,   439,   189,   195,     6,   780,   204,   210,
     215,   220,   225,   230,   469,   470,   472,   345,   345,     6,
       6,   239,   767,   479,    31,     6,   541,   239,   486,   541,
     175,   486,   486,   357,     6,   613,   239,   303,   761,   176,
       7,     8,    74,    75,    76,   306,    77,   915,  1252,   240,
     497,   487,    59,    59,   307,   190,    30,   321,    13,    30,
      30,    30,    30,    30,    30,   231,   904,    31,   905,   236,
     236,   245,     6,    55,   188,   194,    56,    57,   203,   209,
     214,   219,   224,   229,   -63,   240,   876,   877,   878,   879,
     240,   240,   405,   240,    31,  1221,  1635,   314,   486,   -63,
     240,   997,   362,   999,   487,   248,  1675,   487,   487,    31,
     315,    74,    75,    76,   606,    77,   123,   500,  1129,  1686,
     183,   316,   402,   383,   501,  1692,     7,     8,    74,    75,
      76,   386,    77,   495,  1701,   486,   196,   197,     6,    55,
    1707,  1708,    56,    57,    13,  1357,   832,   833,   834,   835,
    1253,   544,   248,   404,   419,     6,    31,   770,   181,    -3,
    1254,     7,     8,    74,    75,    76,  1172,    77,    74,    75,
      76,    34,    77,    42,   487,   911,   536,  1064,   184,    13,
     761,   761,   761,   761,     6,   386,   351,   198,   199,  1065,
       7,     8,    74,    75,    76,   205,    77,     6,   237,    59,
      62,     7,     8,    74,    75,    76,  1000,    77,    13,  1130,
      63,   487,   173,    74,    75,    76,  1422,    77,    64,    13,
      59,   122,    72,   171,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
     241,   346,  1030,  1636,    31,   346,   550,    65,   665,   347,
      59,  1127,   348,   347,  1241,  1244,   348,   206,   421,   596,
    1290,   766,  1210,  1068,  1296,  1212,   245,  1069,  1070,   346,
     346,    84,   422,    66,   438,    67,   241,   245,   245,   245,
     348,   348,   241,   790,   241,   471,   245,   304,   452,    68,
    1476,   241,   881,   836,   882,   531,    32,   768,   351,    58,
     761,    33,   568,    74,    75,    76,   488,    77,  1525,   181,
     587,    74,    75,    76,    69,    77,   385,   386,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,   761,   761,
     761,   761,   761,   761,     6,   310,   761,   503,   386,    31,
       7,     8,    74,    75,    76,  1192,    77,     6,    74,    75,
      76,    70,    77,     7,     8,    74,    75,    76,    13,    77,
    1477,   807,   808,   553,    71,    58,    74,    75,    76,  1219,
      77,    13,  1066,    85,   775,   776,  1116,   562,  1094,   185,
     709,   665,   711,   712,   713,    31,  1117,   572,  1095,    86,
    1096,  1283,   576,   912,   447,  1564,  1565,    87,   580,  1143,
     582,   583,    88,   600,   584,  1144,   586,    59,  1235,  1236,
     501,  1925,  1478,   191,   192,  1284,   612,   181,   815,   816,
    1089,  1932,  1090,   430,  1118,  1119,  1120,  1121,  1122,  1123,
    1091,   448,   883,  1566,   453,  1479,  1480,     6,   449,   761,
     423,   431,   200,   201,    90,  1071,   107,  1567,    91,     6,
     454,   432,   433,   718,   207,     7,     8,    74,    75,    76,
     434,    77,   435,   819,   820,    74,    75,    76,     6,    77,
     777,   108,   455,    13,     7,     8,    74,    75,    76,   425,
      77,   296,   293,   294,   295,   426,    92,   297,   296,   996,
    1260,  1892,    13,   427,   297,    93,  1988,   386,   614,  1990,
     413,   884,  1294,   480,   481,   482,   483,   120,   609,  1992,
    1993,   719,   -66,  1035,  1667,   501,  1668,   852,   501,   181,
     501,  1352,   484,  1181,    94,   441,   456,   171,   171,  1037,
     501,  1359,  2011,     6,   171,   442,  1481,  1194,    95,     7,
       8,    74,    75,    76,  1195,    77,   710,   386,   756,   123,
      59,   443,    31,   762,  1124,   444,  1097,    13,   351,  1893,
     245,  1894,   450,    35,  1712,    36,   124,    59,  1285,  1286,
      96,  1713,  1895,   921,   811,   812,  1728,    37,    38,    39,
     927,  1568,   839,  1729,  1731,  1896,   813,   814,  1092,   849,
    1842,  1729,   211,   212,    40,   542,   543,  1843,   829,   830,
     547,  1846,   457,  1897,  1459,   216,   217,  1460,  1847,  1748,
    1749,  1750,  1751,  1752,  1753,   761,   841,   842,   459,   436,
    1461,  1462,  1463,   918,   919,   761,  1145,   809,  1941,    97,
    1147,  1394,  1146,    30,    98,  1942,  1148,   817,  1073,    99,
      30,   821,   129,   130,   131,   100,  1377,   101,  1074,  1075,
    1076,   831,   838,   822,   823,   843,  1863,  1863,   102,   848,
    1483,   428,   460,   133,   134,   135,   136,   103,    83,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,  1688,   762,   762,   762,   762,   824,
     825,   886,  1467,   445,   104,  1468,   105,   221,   222,   857,
     386,   351,   461,   106,   462,   807,   932,   128,  1469,  1470,
      59,    59,  1471,  1472,   858,   386,   226,   227,  1464,   125,
    1484,   177,  1206,  1207,  1208,  1209,   463,  1898,   859,   386,
     860,   386,  1039,   386,   283,   284,  1222,   285,   286,   287,
     288,   126,    41,   289,   290,   291,   292,   293,   294,   295,
    1040,  1041,   127,   296,  1045,   386,   232,  1237,  1238,   297,
     809,  1346,   386,   853,   246,  1485,   249,  1177,  1178,  1179,
    1180,   250,  1486,  1487,  1754,  1878,   464,  1347,   386,  1259,
     251,   846,   847,    74,    75,    76,   252,    77,  1669,  1670,
    1671,  1348,   386,   298,  1077,  1488,  1349,   386,  1489,  1490,
    1361,   386,  1541,  1542,   299,   762,   301,  1197,  1366,  1547,
     181,  1549,   181,  1570,   181,  1262,  1473,  1263,  1264,  1265,
    1007,   253,  1322,   762,   762,   762,   762,   762,   762,   762,
     762,   762,   762,   762,   762,   762,   762,   762,   762,   254,
    1079,   762,  1080,  1081,  1082,  1083,  1084,  1085,  1086,   255,
    1036,   351,  1572,   181,   256,  1647,  1266,  1267,  1268,  1269,
    1270,  1271,  1272,   257,  1273,  1274,  1726,  1727,  1617,  1618,
    1619,   258,  1621,  1736,   386,   259,   164,  1738,   386,  1739,
     386,   165,  1128,   308,   166,   282,   899,   900,   901,   902,
    1638,   309,   903,   356,  1784,  1785,  1491,  1982,  1853,  1854,
    1126,   897,   898,   899,   900,   901,   902,   557,  1538,   903,
    1689,   260,   283,   284,   261,   285,   286,   287,   288,   784,
     785,   289,   290,   291,   292,   293,   294,   295,  1546,  1910,
    1911,   296,  1919,   386,  1548,   262,  1550,   297,   263,   264,
     265,   266,   267,   268,   762,  1427,   358,   269,   270,   761,
     271,  1430,   594,  1694,   272,   273,   274,  1293,  1656,  1295,
     275,   313,   322,    78,    79,    80,    81,   305,  1571,   328,
     341,   353,   343,  1573,   129,   130,     6,   359,   406,   409,
     410,   414,   466,   473,   474,   245,   245,   245,   245,  1323,
    1695,   475,   476,   477,  1217,   492,   496,   504,  1275,   245,
     505,   138,   139,   140,   141,   142,   533,   171,  1087,   508,
     529,  1230,   535,   546,   291,   292,   293,   294,   295,   171,
     245,   245,   296,  1523,   551,   552,   554,   555,   297,   556,
    1247,   558,  1530,   560,   559,   561,   563,   564,  1255,  1256,
     565,   566,   245,   567,   570,   571,   573,   680,   575,  1768,
     574,  1770,  1289,  1292,    59,  1879,    59,  1298,  1299,   577,
     579,   581,  1300,   585,   588,   593,   595,  1305,  1306,  1307,
    1308,  1309,  1310,  1311,  1312,  1313,   597,   598,   599,   601,
     602,   603,   604,   605,   615,   245,    59,  1324,  1325,  1326,
    1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,
    1337,  1805,  1339,   617,   644,   647,  1343,  1810,   652,   654,
     656,   657,   283,   284,   658,   285,   286,   287,   288,   659,
     762,   289,   290,   291,   292,   293,   294,   295,  1585,   661,
     762,   296,   168,   174,   660,   662,   664,   297,   283,   284,
     351,   285,   286,   287,   288,   667,   669,   289,   290,   291,
     292,   293,   294,   295,   671,   672,   674,   296,   676,   681,
     682,   683,   827,   297,   684,   686,   690,   692,   694,   233,
     234,   696,  1696,   697,   698,   247,  1857,   700,   701,   702,
    1629,   283,   284,   703,   285,   286,   287,   288,   707,   856,
     289,   290,   291,   292,   293,   294,   295,   708,   714,   717,
     296,   765,   763,   773,   774,   782,   297,   787,   245,   796,
     790,   276,   277,   278,   245,   792,   793,   797,   283,   284,
     794,   285,   286,   287,   288,   795,   804,   289,   290,   291,
     292,   293,   294,   295,   805,   407,   810,   296,  1917,  1672,
     818,   826,  1697,   297,  1266,  1267,  1268,  1269,  1270,  1271,
    1272,   828,  1279,   840,   917,   845,   850,  1050,  1051,  1052,
    1053,  1054,  1055,  1056,  1057,  1058,  1922,   855,  1059,   863,
     861,   922,   864,   865,  1060,  1513,  1513,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   245,  1061,   867,   869,
     870,   871,   872,   875,  1639,   245,  1641,  1642,   880,   360,
     361,  1964,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   885,   906,  1262,  -674,  1263,  1264,  1265,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   913,   920,  1817,   940,   942,   991,
     943,   403,   944,  1699,   945,   992,   993,   408,   994,  1001,
     995,   168,   998,   415,  1002,  1266,  1267,  1268,  1269,  1270,
    1271,  1272,   756,  1273,  1274,   467,   468,  1003,  1004,   903,
    1008,  1005,  1026,  1038,  1578,  1579,  1280,  1032,  1049,  1583,
    1132,   245,  1133,   493,  1134,   171,   171,   171,  1135,   171,
     283,   284,  1136,   285,   286,   287,   288,  1137,  1141,   289,
     290,   291,   292,   293,   294,   295,  1858,   171,  1859,   296,
    1608,  1860,  1199,  1149,  1218,   297,  1138,  1191,  1223,  1225,
    1131,  1139,    43,   530,  1140,  1142,    44,  1150,  1624,  1625,
    1226,  1627,  1628,   245,  1151,  1158,  1152,  1153,  1159,  1154,
    1227,   914,  1062,   538,   539,  1155,  1205,  1266,  1267,  1268,
    1269,  1270,  1271,  1272,   762,  1861,  1156,  1157,  1160,  1161,
     283,   284,  1176,   285,   286,   287,   288,  1162,  1163,   289,
     290,   291,   292,   293,   294,   295,  1663,  1164,  1165,   296,
    1166,    45,  1231,  1167,  1186,   297,  1182,    46,  1184,  1187,
    1193,  1232,   245,  1233,  1190,  1239,  1673,  1278,  1674,  1246,
      47,  1257,    48,  1216,  1224,  1234,  1248,  1249,  1250,  1200,
    1251,  1258,  1201,  1301,    49,  1288,  1304,  1338,    50,  1340,
    1341,  1342,  1350,  1915,  1345,  1211,  1213,  1214,  1215,   610,
      51,  1351,  1220,  1354,  1355,  1367,  1356,  1360,  1362,  1368,
    1369,  1370,  1372,   645,   646,  1374,  1792,  1793,  1375,  1376,
    1378,    52,  1379,  1799,  1381,  1382,   648,  1383,  1386,  1939,
    1387,  1388,  1389,   649,   650,   651,   171,   591,   171,   653,
    1390,   283,   284,  1391,   285,   286,   287,   288,  1392,  1868,
     289,   290,   291,   292,   293,   294,   295,  1395,  1397,  1862,
     296,  1398,  1399,  1400,  1401,  1402,   297,  1404,  1406,  1407,
    1302,  1303,  1408,  1409,  1410,  1411,    53,  1773,    54,  1775,
    1412,  1413,  1414,  1314,  1415,  1416,  1418,  1419,   171,  1420,
    1421,  1423,  1424,  1425,   171,  1426,  1700,   705,   706,  1855,
    1428,  1856,  1429,  1431,  1432,  1433,  1445,  1446,  1435,  1436,
     716,  1438,  1439,    59,    59,  1440,  1441,  1443,  1444,  1448,
      59,  1447,  1449,  1450,  1451,   168,   168,  1452,  1457,  1453,
     778,   779,   168,   781,  1454,  1702,  1455,  1456,   351,   786,
    1494,   789,  1493,   129,   130,   412,   132,  1527,  1516,    56,
    1495,  1371,  1496,  1373,  1510,  1497,  1498,  1499,  1500,  1503,
    1380,  1501,  1502,   171,   133,   134,   135,   136,   137,  1504,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,  1505,    59,  1506,    59,  1507,
     129,   130,   720,  1508,   285,   286,   287,   288,  1509,   240,
     289,   290,   291,   292,   293,   294,   295,  1518,  1519,  1540,
     296,  1520,  1521,  1528,  1522,   171,   297,   138,   139,   140,
     141,   142,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   245,   745,   746,  1536,
    1537,   181,  1539,  1543,   283,   284,  1544,   285,   286,   287,
     288,   909,   910,   289,   290,   291,   292,   293,   294,   295,
    1545,  1554,  1555,   296,  1551,   592,  1553,  1556,   171,   297,
    1557,  1558,   245,  1704,  1575,  1560,  1562,  1563,  1574,   924,
     925,   926,  1576,  1531,  1586,   928,   929,  1588,  1594,  1603,
    1609,   930,  1610,  1613,  1615,  1622,  1623,  1630,  1631,   747,
    1659,  1643,  1637,  1660,   283,   284,   748,   285,   286,   287,
     288,  1661,  1640,   289,   290,   291,   292,   293,   294,   295,
    1649,  1662,  1644,   296,   890,   891,   892,   893,   894,   297,
    1646,   895,   896,   897,   898,   899,   900,   901,   902,   989,
    1653,   903,   990,   283,   284,  1664,   285,   286,   287,   288,
    1648,   163,   289,   290,   291,   292,   293,   294,   295,  1665,
    1666,  1676,   296,  1677,  1678,  1682,  1684,   164,   297,  1577,
    1683,  1687,   165,  2009,  1690,   166,  1584,  1693,  1703,  1706,
     241,  1589,  1714,   167,  1592,  1715,  1716,  1717,  1719,  1595,
    1720,  1721,  1027,   283,   284,  1723,   285,   286,   287,   288,
    1724,  1605,   289,   290,   291,   292,   293,   294,   295,  1725,
    1732,  1733,   296,  1740,  1614,  1735,  1616,   749,   297,  1743,
    1742,  1744,   300,   750,   751,  1745,  1746,  1747,  1756,   752,
    1757,  1758,   753,  1759,  1762,  1028,  1029,   754,   755,  1763,
     756,   129,   130,   720,  1764,   287,   288,  1765,  1767,   289,
     290,   291,   292,   293,   294,   295,  1774,  1654,  1655,   296,
    1657,  1786,  1789,  1790,  1796,   297,  1797,  1798,   138,   139,
     140,   141,   142,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,  1800,   745,   746,
    1801,   283,   284,  1802,   285,   286,   287,   288,  1806,  1705,
     289,   290,   291,   292,   293,   294,   295,  1818,  1819,  1814,
     296,  1198,  1811,  1813,  1815,  1820,   297,  1821,  1822,  1202,
    1203,  1204,  1829,  1828,  1833,  1832,  1839,  1830,  1831,  1835,
    1849,   129,   130,   131,   132,  1838,  1840,    56,  1841,  1866,
    1870,  1850,  1871,  1867,  1877,  1881,  1858,  1880,  1859,  1882,
     747,  1860,   133,   134,   135,   136,   137,   748,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,  1709,  1887,   168,  1890,  1266,  1267,  1268,
    1269,  1270,  1271,  1272,  1901,  1861,  1776,   168,  1903,   129,
     130,     6,  1778,   889,   890,   891,   892,   893,   894,  1780,
    1904,   895,   896,   897,   898,   899,   900,   901,   902,  1905,
    1315,   903,  1317,  1908,  1319,  1788,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,  1912,  1344,   893,   894,  1913,  1914,   895,   896,   897,
     898,   899,   900,   901,   902,  1916,   665,   903,   749,  1934,
    1935,   129,   130,   131,   750,   751,  1923,  1924,  1930,  1938,
     752,  1940,  1946,   753,  1947,  1945,  1948,  1965,   754,   755,
    1949,   756,   133,   134,   135,   136,  1950,  1951,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,  1953,  1955,  1957,  1958,   283,   284,  1865,
     285,   286,   287,   288,  1959,  1961,   289,   290,   291,   292,
     293,   294,   295,  1962,  1963,  1968,   296,  1969,  1970,  1972,
    1973,  1888,   297,  1974,  1975,  1976,  1900,  1978,  1902,   163,
    1979,  1980,  1981,  1985,  1987,  1909,  1984,  1994,  1998,  1991,
    1995,  2003,  2006,  2012,  2013,   164,  2015,  2001,  2026,  2016,
     165,  2022,  2028,   166,   283,   284,  2025,   285,   286,   287,
     288,   167,  2030,   289,   290,   291,   292,   293,   294,   295,
    2031,  1228,  2029,   296,  1229,  1384,  1937,  1514,  1633,   297,
    1808,   283,   284,   355,   285,   286,   287,   288,   699,   238,
     289,   290,   291,   292,   293,   294,   295,   908,   806,  1113,
     296,  1526,   851,   715,     0,   344,   297,     0,     0,     0,
    1532,  1533,  1534,   164,     0,     0,     0,     0,   165,     0,
       0,   166,     0,  1977,     0,     0,     0,   947,     0,   788,
     129,   130,   131,     0,     0,    74,    75,   948,     0,    77,
       0,     0,     0,     0,     0,     0,     0,  1803,     0,     0,
    1804,   133,   134,   135,   136,     0,     0,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,   164,     0,     0,     0,     0,
     165,     0,     0,   166,     0,     0,     0,     0,  1580,  1581,
    1582,   167,  1710,     0,     0,  1587,     0,     0,  1590,  1591,
       0,     0,     0,  1593,     0,     0,  1596,  1597,  1598,  1599,
       0,     0,  1600,  1601,  1602,     0,  1604,     0,     0,     0,
    1606,  1607,     0,     0,     0,  1611,  1612,     0,     0,     0,
       0,     0,     0,   168,   168,   168,  1620,   168,     0,     0,
       0,     0,  1626,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   949,   168,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,     0,     0,
       0,   962,     0,     0,   963,     0,     0,   964,     0,     0,
     965,     0,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,   981,     0,     0,
       0,   982,   129,   130,     6,     0,   983,     0,     0,   984,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   329,     0,     0,     0,   947,     0,
       0,     0,     0,     0,   164,     0,    74,    75,   948,   165,
      77,     0,   166,     0,  1734,     0,   985,  1737,     0,     0,
     167,     0,  1741,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,     0,     0,     0,     0,     0,  1872,
      13,     0,     0,     0,   168,  1769,   168,  1771,  1772,     0,
     283,   284,     0,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,  1873,    14,     0,   297,     0,     0,     0,    15,
    1787,     0,     0,     0,  1791,     0,     0,  1794,  1795,     0,
       0,     0,    16,     0,    17,  1874,   168,     0,     0,     0,
       0,     0,   168,     0,     0,     0,    18,     0,     0,     0,
      19,     0,     0,     0,     0,     0,  1823,  1824,  1825,  1826,
    1827,     0,    20,     0,     0,   949,     0,   950,   951,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,     0,
       0,     0,   962,    21,     0,   963,     0,     0,   964,     0,
       0,   965,     0,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,     0,
       0,   168,   982,     0,     0,     0,   164,   983,     0,     0,
     984,   165,  1869,   284,   166,   285,   286,   287,   288,   407,
       0,   289,   290,   291,   292,   293,   294,   295,    22,     0,
      23,   296,  1883,  1884,  1885,  1886,     0,   297,  1889,     0,
    1891,   283,   284,     0,   285,   286,   287,   288,  1906,  1907,
     289,   290,   291,   292,   293,   294,   295,     0,     0,     0,
     296,     0,     0,   168,  1918,     0,   297,  1921,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1766,     0,     0,
       0,     0,     0,     0,   947,     0,     0,     0,     0,     0,
       0,  1936,    74,    75,   948,     0,    77,   283,   284,     0,
     285,   286,   287,   288,     0,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
       0,     0,   297,     0,     0,     0,   168,     0,  1966,     0,
     283,   284,     0,   285,   286,   287,   288,     0,   947,   289,
     290,   291,   292,   293,   294,   295,    74,    75,   948,   296,
      77,  1983,     0,   283,   284,   297,   285,   286,   287,   288,
       0,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,     0,     0,   297,     0,
    1875,  1997,     0,     0,  1999,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1876,     0,     0,
       0,     0,     0,     0,  2014,     0,     0,  2018,     0,     0,
     947,     0,     0,     0,  1971,     0,     0,  2024,    74,    75,
     948,   949,    77,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,     0,     0,     0,   962,     0,
       0,   963,     0,     0,   964,     0,     0,   965,     0,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,     0,     0,     0,   982,     0,
       0,     0,     0,   983,     0,   949,   984,   950,   951,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,     0,
       0,     0,   962,     0,     0,   963,     0,     0,   964,     0,
       0,   965,     0,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,     0,
       0,     0,   982,     0,     0,     0,     0,   983,     0,     0,
     984,     0,     0,     0,     0,     0,   947,     0,     0,     0,
       0,     0,     0,  1777,    74,    75,   948,   949,    77,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     961,     0,     0,     0,   962,     0,     0,   963,     0,     0,
     964,     0,     0,   965,     0,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,     0,     0,     0,   982,   947,     0,  1779,     0,   983,
       0,     0,   984,    74,    75,   948,     0,    77,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,   283,   284,   296,   285,   286,
     287,   288,     0,   297,   289,   290,   291,   292,   293,   294,
     295,     0,   283,   284,   296,   285,   286,   287,   288,     0,
     297,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,     0,     0,   297,     0,  1781,
       0,     0,     0,   949,     0,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,     0,     0,     0,
     962,     0,     0,   963,     0,     0,   964,     0,     0,   965,
       0,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,     0,     0,     0,
     982,   947,     0,     0,     0,   983,     0,     0,   984,    74,
      75,   948,   949,    77,   950,   951,   952,   953,   954,   955,
     956,   957,   958,   959,   960,   961,     0,     0,     0,   962,
       0,     0,   963,     0,     0,   964,     0,     0,   965,     0,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   129,   130,   131,   982,
     947,     0,     0,     0,   983,     0,     0,   984,    74,    75,
     948,     0,    77,     0,     0,  1782,     0,   133,   134,   135,
     136,     0,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,   283,   284,     0,   285,   286,   287,
     288,     0,  1196,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,  1783,   330,     0,     0,   949,   297,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   961,     0,     0,     0,   962,     0,     0,   963,     0,
       0,   964,     0,     0,   965,     0,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,     0,     0,     0,   982,   947,     0,     0,     0,
     983,     0,     0,   984,    74,    75,   948,   949,    77,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     961,     0,     0,     0,   962,     0,     0,   963,     0,     0,
     964,     0,     0,   965,     0,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   129,   130,   131,   982,   947,     0,     0,     0,   983,
       0,     0,   984,    74,    75,   948,     0,    77,     0,     0,
    1960,     0,   133,   134,   135,   136,     0,     0,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,     0,     0,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,   165,     0,     0,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1967,
       0,     0,     0,   949,     0,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,     0,     0,     0,
     962,     0,     0,   963,     0,     0,   964,     0,     0,   965,
       0,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,     0,     0,     0,
     982,   947,     0,     0,     0,   983,     0,     0,   984,    74,
      75,   948,   949,    77,   950,   951,   952,   953,   954,   955,
     956,   957,   958,   959,   960,   961,     0,     0,     0,   962,
       0,     0,   963,     0,     0,   964,     0,     0,   965,     0,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   129,   130,     6,   982,
     947,     0,     0,     0,   983,     0,     0,   984,    74,    75,
     948,     0,    77,     0,     0,  2000,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,   164,     0,     0,     0,     0,
     165,     0,     0,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2002,     0,     0,     0,   949,     0,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   532,     0,     0,   962,     0,     0,   963,     0,
       0,   964,     0,     0,   965,     0,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   590,     0,     0,   982,   947,     0,     0,     0,
     983,     0,     0,   984,    74,    75,   948,   949,    77,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   764,     0,     0,   962,     0,     0,   963,     0,     0,
     964,     0,     0,   965,     0,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,  1034,     0,     0,   982,   129,   130,     6,   537,   983,
       0,     0,   984,     0,     0,     0,     0,     0,     0,     0,
    2004,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,  1358,     0,     0,
     164,     0,     0,     0,     0,   165,     0,     0,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2005,
       0,     0,     0,   949,     0,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,     0,     0,     0,
     962,     0,     0,   963,     0,     0,   964,     0,     0,   965,
       0,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,     0,     0,     0,
     982,     0,     0,     0,     0,   983,     0,     0,   984,   283,
     284,     0,   285,   286,   287,   288,     0,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,   283,
     284,     0,   285,   286,   287,   288,     0,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,     0,     0,   297,     0,     0,     0,   283,   284,
       0,   285,   286,   287,   288,  2019,     0,   289,   290,   291,
     292,   293,   294,   295,   618,     0,     0,   296,     0,     0,
       0,     0,     0,   297,     0,     0,     0,     0,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,   164,
       0,     0,     0,   297,   165,   283,   284,   166,   285,   286,
     287,   288,     0,     0,   289,   290,   291,   292,   293,   294,
     295,     0,     0,     0,   296,   619,  1099,     0,  1100,  1101,
     297,  1102,     0,   887,   888,   889,   890,   891,   892,   893,
     894,  1103,     0,   895,   896,   897,   898,   899,   900,   901,
     902,     0,     0,   903,     0,     0,     0,   620,  1104,  1105,
    1106,     0,     0,     0,     0,     0,   887,   888,   889,   890,
     891,   892,   893,   894,     0,  1107,   895,   896,   897,   898,
     899,   900,   901,   902,     0,     0,   903,   621,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1185,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
       0,     0,     0,   283,   284,     0,   285,   286,   287,   288,
       0,  1108,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,   283,   284,   297,   285,
     286,   287,   288,   506,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   283,
     284,   297,   285,   286,   287,   288,   507,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,   519,
       0,     0,  1109,     0,     0,     0,     0,   283,   284,  1110,
     285,   286,   287,   288,     0,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
     283,   284,   297,   285,   286,   287,   288,   526,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   283,   284,   297,   285,   286,   287,   288,
     527,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,   283,   284,   297,   285,
     286,   287,   288,   528,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   283,
     284,   297,   285,   286,   287,   288,   798,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,   283,   284,   297,   285,   286,   287,   288,   799,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,   283,   284,   297,   285,   286,
     287,   288,  1042,     0,   289,   290,   291,   292,   293,   294,
     295,     0,     0,     0,   296,     0,     0,     0,   283,   284,
     297,   285,   286,   287,   288,  1043,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,   283,   284,   297,   285,   286,   287,   288,  1044,     0,
     289,   290,   291,   292,   293,   294,   295,     0,     0,     0,
     296,     0,     0,     0,   283,   284,   297,   285,   286,   287,
     288,  1175,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,   283,   284,   297,
     285,   286,   287,   288,  1363,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
     283,   284,   297,   285,   286,   287,   288,  1364,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   283,   284,   297,   285,   286,   287,   288,
    1365,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,   283,   284,   297,   285,
     286,   287,   288,  1458,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   283,
     284,   297,   285,   286,   287,   288,  1466,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,   283,   284,   297,   285,   286,   287,   288,  1475,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,   283,   284,   297,   285,   286,
     287,   288,  1645,     0,   289,   290,   291,   292,   293,   294,
     295,     0,     0,     0,   296,     0,     0,     0,   283,   284,
     297,   285,   286,   287,   288,  1679,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,   283,   284,   297,   285,   286,   287,   288,  1680,     0,
     289,   290,   291,   292,   293,   294,   295,     0,     0,     0,
     296,     0,     0,     0,   283,   284,   297,   285,   286,   287,
     288,  1681,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,   283,   284,   297,
     285,   286,   287,   288,  1685,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
     283,   284,   297,   285,   286,   287,   288,  1691,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   283,   284,   297,   285,   286,   287,   288,
    1698,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,   283,   284,   297,   285,
     286,   287,   288,  1718,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   283,
     284,   297,   285,   286,   287,   288,  1836,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,   283,   284,   297,   285,   286,   287,   288,  1837,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,   283,   284,   297,   285,   286,
     287,   288,  1845,     0,   289,   290,   291,   292,   293,   294,
     295,     0,     0,     0,   296,     0,     0,     0,   283,   284,
     297,   285,   286,   287,   288,  1851,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,   283,   284,   297,   285,   286,   287,   288,  1852,     0,
     289,   290,   291,   292,   293,   294,   295,     0,     0,     0,
     296,     0,     0,     0,   283,   284,   297,   285,   286,   287,
     288,  1929,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,   283,   284,   297,
     285,   286,   287,   288,  1931,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
     283,   284,   297,   285,   286,   287,   288,  1954,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   283,   284,   297,   285,   286,   287,   288,
    2007,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,   283,   284,   297,   285,
     286,   287,   288,  2010,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   283,
     284,   297,   285,   286,   287,   288,  2020,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,     0,     0,   297,     0,   283,   284,   540,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,     0,
       0,   297,     0,   283,   284,   655,   285,   286,   287,   288,
       0,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,     0,     0,   297,     0,
     283,   284,  1048,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,     0,     0,   297,     0,   283,   284,  1174,
     285,   286,   287,   288,     0,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
       0,     0,   297,     0,   283,   284,  1517,   285,   286,   287,
     288,     0,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,     0,     0,   297,
       0,   283,   284,  1650,   285,   286,   287,   288,     0,     0,
     289,   290,   291,   292,   293,   294,   295,     0,     0,     0,
     296,     0,     0,     0,     0,     0,   297,     0,   283,   284,
    1651,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,     0,     0,   297,     0,   283,   284,  1652,   285,   286,
     287,   288,     0,     0,   289,   290,   291,   292,   293,   294,
     295,     0,     0,     0,   296,     0,     0,     0,     0,     0,
     297,     0,   283,   284,  1809,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,     0,     0,   297,     0,   283,
     284,  1812,   285,   286,   287,   288,     0,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,     0,     0,   297,     0,   283,   284,  1816,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,     0,
       0,   297,     0,   283,   284,  1920,   285,   286,   287,   288,
       0,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,     0,     0,   297,     0,
     283,   284,  1996,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,     0,     0,   297,     0,   283,   284,  2027,
     285,   286,   287,   288,     0,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,   384,     0,
     283,   284,   297,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   509,     0,   297,   283,   284,     0,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   510,
       0,   297,   283,   284,     0,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,   511,     0,   297,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,   512,     0,   297,   283,   284,     0,   285,   286,   287,
     288,     0,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,   513,     0,   297,
     283,   284,     0,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   514,     0,   297,   283,   284,     0,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   515,
       0,   297,   283,   284,     0,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,   516,     0,   297,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,   517,     0,   297,   283,   284,     0,   285,   286,   287,
     288,     0,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,   518,     0,   297,
     283,   284,     0,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   520,     0,   297,   283,   284,     0,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   521,
       0,   297,   283,   284,     0,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,   522,     0,   297,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,   523,     0,   297,   283,   284,     0,   285,   286,   287,
     288,     0,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,   524,     0,   297,
     283,   284,     0,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,   525,     0,   297,   283,   284,     0,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,   534,
       0,   297,   283,   284,     0,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,   548,     0,   297,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,   611,
       0,   283,   284,   297,   285,   286,   287,   288,     0,     0,
     289,   290,   291,   292,   293,   294,   295,     0,     0,     0,
     296,     0,     0,     0,   800,     0,   297,   283,   284,     0,
     285,   286,   287,   288,     0,     0,   289,   290,   291,   292,
     293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
     801,     0,   297,   283,   284,     0,   285,   286,   287,   288,
       0,     0,   289,   290,   291,   292,   293,   294,   295,     0,
       0,     0,   296,     0,     0,     0,   802,     0,   297,   283,
     284,     0,   285,   286,   287,   288,     0,     0,   289,   290,
     291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
       0,     0,   803,     0,   297,   283,   284,     0,   285,   286,
     287,   288,     0,     0,   289,   290,   291,   292,   293,   294,
     295,     0,     0,     0,   296,     0,   854,     0,   283,   284,
     297,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,   862,     0,   297,   283,   284,     0,   285,   286,   287,
     288,     0,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,  1046,     0,   297,
     283,   284,     0,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,  1047,     0,   297,   283,   284,     0,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,  1722,
       0,   297,   283,   284,     0,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,  1834,     0,   297,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,  1848,     0,   297,   283,   284,     0,   285,   286,   287,
     288,     0,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,  1926,     0,   297,
     283,   284,     0,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,  1927,     0,   297,   283,   284,     0,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,  1928,
       0,   297,   283,   284,     0,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,  1933,     0,   297,   283,   284,
       0,   285,   286,   287,   288,     0,     0,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
       0,  1943,     0,   297,   283,   284,     0,   285,   286,   287,
     288,     0,     0,   289,   290,   291,   292,   293,   294,   295,
       0,     0,     0,   296,     0,     0,     0,  1944,     0,   297,
     283,   284,     0,   285,   286,   287,   288,     0,     0,   289,
     290,   291,   292,   293,   294,   295,     0,     0,     0,   296,
       0,     0,     0,  1956,     0,   297,   283,   284,     0,   285,
     286,   287,   288,     0,     0,   289,   290,   291,   292,   293,
     294,   295,     0,     0,     0,   296,     0,     0,     0,  1989,
       0,   297,   283,   284,     0,   285,   286,   287,   288,     0,
       0,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,   296,     0,     0,     0,  2023,     0,   297,   887,   888,
     889,   890,   891,   892,   893,   894,     0,     0,   895,   896,
     897,   898,   899,   900,   901,   902,     0,     0,   903,     0,
       0,     0,  1524,   887,   888,   889,   890,   891,   892,   893,
     894,     0,     0,   895,   896,   897,   898,   899,   900,   901,
     902,     0,     0,   903,     0,  1006,   887,   888,   889,   890,
     891,   892,   893,   894,     0,     0,   895,   896,   897,   898,
     899,   900,   901,   902,     0,     0,   903
};

static const short yycheck[] =
{
       5,   552,   411,   998,   720,   107,   108,    12,  1003,  1004,
     561,   176,   637,  1114,     5,   340,   353,     0,    23,   344,
     571,     5,    82,   258,   575,    23,    86,    75,   579,    34,
     265,   440,     5,    85,     5,     5,    96,     5,     5,     3,
      26,     5,     7,     3,    85,     5,     5,     5,    96,     5,
     618,   619,     5,   321,   110,   111,     5,   625,   114,   115,
     116,   117,   118,   119,   332,   333,   334,     3,     3,     5,
       5,     5,   613,   341,   267,     5,     5,     5,    23,     5,
     256,    23,    23,   248,     5,   494,     5,     7,   608,   265,
      11,    12,    13,    14,    15,   256,    17,    65,     5,    69,
      64,    99,   107,   108,   265,   110,   111,   257,    29,   114,
     115,   116,   117,   118,   119,   120,   260,   267,   262,   124,
     125,   126,     5,     6,   110,   111,     9,    10,   114,   115,
     116,   117,   118,   119,   257,    69,   750,   751,   752,   753,
      69,    69,   307,    69,   267,    64,   117,   233,    23,   257,
      69,   867,   254,   869,    99,   263,  1575,    99,    99,   267,
     246,    13,    14,    15,   489,    17,   255,   258,   257,  1588,
       5,   257,   256,   275,   265,  1594,    11,    12,    13,    14,
      15,   265,    17,   348,  1603,    23,   263,   264,     5,     6,
    1609,  1610,     9,    10,    29,  1190,   117,   118,   119,   120,
     107,   258,   263,   305,   264,     5,   267,   616,   265,     0,
     117,    11,    12,    13,    14,    15,   264,    17,    13,    14,
      15,   255,    17,     7,    99,   766,   256,    69,    63,    29,
     750,   751,   752,   753,     5,   265,   241,   263,   264,    81,
      11,    12,    13,    14,    15,     5,    17,     5,     6,   254,
     257,    11,    12,    13,    14,    15,   870,    17,    29,   257,
     263,    99,   314,    13,    14,    15,  1261,    17,   263,    29,
     275,   255,   263,   314,   888,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     260,   255,   906,   264,   267,   255,   263,   263,   263,   263,
     305,   257,   266,   263,   263,   263,   266,    67,    82,   474,
     263,   247,   257,    82,   263,   257,   321,    86,    87,   255,
     255,   267,    96,   263,   258,   263,   260,   332,   333,   334,
     266,   266,   260,   263,   260,   263,   341,   257,   324,   263,
      18,   260,     3,   264,     5,   386,   255,   615,   353,   232,
     870,   260,   258,    13,    14,    15,   231,    17,  1353,   265,
     462,    13,    14,    15,   263,    17,   264,   265,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,     5,   263,   906,   264,   265,   267,
      11,    12,    13,    14,    15,  1009,    17,     5,    13,    14,
      15,   263,    17,    11,    12,    13,    14,    15,    29,    17,
      88,   263,   264,   418,   263,   232,    13,    14,    15,   257,
      17,    29,   264,   233,   241,   242,    86,   432,    86,   264,
     595,   263,   597,   598,   599,   267,    96,   442,    96,   263,
      98,    86,   447,   768,    96,    78,    79,     6,   453,   257,
     455,   456,     7,   258,   459,   263,   461,   462,  1083,  1084,
     265,  1880,   140,   263,   264,   110,   264,   265,   263,   264,
      96,  1890,    98,    68,   134,   135,   136,   137,   138,   139,
     106,   133,   143,   116,    96,   163,   164,     5,   140,  1009,
     264,    86,   263,   264,     7,   264,   257,   130,     7,     5,
     112,    96,    97,   605,   264,    11,    12,    13,    14,    15,
     105,    17,   107,   263,   264,    13,    14,    15,     5,    17,
     622,   255,   134,    29,    11,    12,    13,    14,    15,    82,
      17,   254,   248,   249,   250,    88,     7,   260,   254,   864,
    1108,    18,    29,    96,   260,     7,  1965,   265,   266,  1968,
     314,   212,  1120,   246,   247,   248,   249,   191,   258,  1978,
    1979,   258,   258,   258,  1559,   265,  1561,     8,   265,   265,
     265,  1185,   265,   258,     7,    86,   188,   618,   619,   916,
     265,  1195,  2001,     5,   625,    96,   264,   258,     7,    11,
      12,    13,    14,    15,   265,    17,   264,   265,   263,   255,
     605,   112,   267,   608,   264,   116,   264,    29,   613,    86,
     615,    88,   264,     5,   258,     7,   257,   622,   263,   264,
       7,   265,    99,   788,   263,   264,   258,    19,    20,    21,
     795,   264,   688,   265,   258,   112,   263,   264,   264,   695,
     258,   265,   263,   264,    36,   409,   410,   265,   263,   264,
     414,   258,   264,   130,   140,   263,   264,   143,   265,    89,
      90,    91,    92,    93,    94,  1185,   263,   264,    96,   264,
     156,   157,   158,   775,   776,  1195,   257,   663,   258,     7,
     257,  1232,   263,   688,     7,   265,   263,   673,    98,     7,
     695,   677,     3,     4,     5,     7,  1216,     7,   108,   109,
     110,   687,   688,   263,   264,   691,  1807,  1808,     7,   695,
      18,   264,   140,    24,    25,    26,    27,     7,   704,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     7,   750,   751,   752,   753,   263,
     264,   756,   140,   264,     7,   143,     7,   263,   264,   264,
     265,   766,   190,     7,   192,   263,   264,   263,   156,   157,
     775,   776,   160,   161,   264,   265,   263,   264,   264,   257,
      88,   256,  1050,  1051,  1052,  1053,   214,   264,   264,   265,
     264,   265,   264,   265,   235,   236,  1064,   238,   239,   240,
     241,   257,   194,   244,   245,   246,   247,   248,   249,   250,
     264,   265,   257,   254,   264,   265,   130,  1085,  1086,   260,
     806,   264,   265,   264,     6,   133,     7,   992,   993,   994,
     995,   257,   140,   141,   264,  1830,   264,   264,   265,  1107,
     257,   263,   264,    13,    14,    15,   257,    17,  1564,  1565,
    1566,   264,   265,     7,   264,   163,   264,   265,   166,   167,
     264,   265,   263,   264,     7,   870,     7,  1032,  1205,   264,
     265,   264,   265,   264,   265,    81,   264,    83,    84,    85,
     885,   257,  1150,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   257,
      96,   906,    98,    99,   100,   101,   102,   103,   104,   257,
     915,   916,   264,   265,   257,  1529,   122,   123,   124,   125,
     126,   127,   128,   257,   130,   131,   264,   265,  1496,  1497,
    1498,   257,  1500,   264,   265,   257,   247,   264,   265,   264,
     265,   252,   947,     7,   255,     8,   248,   249,   250,   251,
    1518,     5,   254,   264,   263,   264,   264,  1952,   264,   265,
     946,   246,   247,   248,   249,   250,   251,   426,  1377,   254,
       7,   257,   235,   236,   257,   238,   239,   240,   241,   628,
     629,   244,   245,   246,   247,   248,   249,   250,  1397,   264,
     265,   254,   264,   265,  1403,   257,  1405,   260,   257,   257,
     257,   257,   257,   257,  1009,  1273,     5,   257,   257,  1529,
     257,  1279,   471,     7,   257,   257,   257,  1119,  1538,  1121,
     257,   257,   257,   193,   194,   195,   196,   265,  1437,   263,
     257,   257,   265,  1442,     3,     4,     5,     5,   233,   233,
     233,   233,   263,   263,   263,  1050,  1051,  1052,  1053,  1151,
       7,   263,   263,   263,  1059,     8,   265,   258,   264,  1064,
     265,    30,    31,    32,    33,    34,     7,  1108,   264,   258,
     258,  1076,   258,     7,   246,   247,   248,   249,   250,  1120,
    1085,  1086,   254,  1351,     5,     5,   263,     5,   260,   263,
    1095,     5,  1360,     5,   263,     5,   263,   263,  1103,  1104,
     263,   233,  1107,   258,     5,     5,   263,   566,     5,  1677,
     263,  1679,  1117,  1118,  1119,  1831,  1121,  1122,  1123,   263,
       5,   263,  1127,   263,     5,   208,   263,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,  1139,  1140,   263,   263,   263,   258,
       5,   257,   257,   257,   130,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1729,  1167,     7,     5,     7,  1171,  1735,     7,     7,
       7,     7,   235,   236,     7,   238,   239,   240,   241,     5,
    1185,   244,   245,   246,   247,   248,   249,   250,  1456,   233,
    1195,   254,    85,    86,     7,   263,     7,   260,   235,   236,
    1205,   238,   239,   240,   241,     7,     7,   244,   245,   246,
     247,   248,   249,   250,     7,     7,     7,   254,     7,   233,
       7,     5,   681,   260,     7,     7,     7,   263,     7,   122,
     123,     7,     7,     7,     7,   128,  1804,     7,     7,     7,
    1508,   235,   236,   264,   238,   239,   240,   241,     5,   708,
     244,   245,   246,   247,   248,   249,   250,   265,     7,     5,
     254,     8,     7,   263,     5,     5,   260,     5,  1273,     3,
     263,   164,   165,   166,  1279,   263,   263,   258,   235,   236,
     263,   238,   239,   240,   241,   263,   263,   244,   245,   246,
     247,   248,   249,   250,    66,   260,     7,   254,  1866,  1567,
       7,     7,     7,   260,   122,   123,   124,   125,   126,   127,
     128,     7,   130,     7,   773,     7,   264,    69,    70,    71,
      72,    73,    74,    75,    76,    77,  1877,   263,    80,   258,
     265,   790,   258,     7,    86,  1340,  1341,   199,   200,   201,
     202,   203,   204,   205,   206,   207,  1351,    99,   257,   257,
     257,   257,   257,     5,  1519,  1360,  1521,  1522,     3,   252,
     253,  1929,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,     5,   257,    81,   257,    83,    84,    85,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   258,     6,  1743,     7,   263,   265,
     263,   304,   263,     7,   263,   263,   263,   310,   263,     5,
     263,   314,   257,   316,     5,   122,   123,   124,   125,   126,
     127,   128,   263,   130,   131,   328,   329,   257,   257,   254,
     264,   241,     3,   265,  1449,  1450,   264,   263,   257,  1454,
     257,  1456,   257,   346,   257,  1496,  1497,  1498,   257,  1500,
     235,   236,   257,   238,   239,   240,   241,   257,     7,   244,
     245,   246,   247,   248,   249,   250,    81,  1518,    83,   254,
    1485,    86,     7,   263,     5,   260,   257,   264,     5,     5,
     949,   257,     3,   386,   257,   257,     7,   257,  1503,  1504,
       5,  1506,  1507,  1508,   257,   263,   257,   257,   263,   257,
       5,     5,   264,   406,   407,   257,   260,   122,   123,   124,
     125,   126,   127,   128,  1529,   130,   257,   257,   257,   257,
     235,   236,   991,   238,   239,   240,   241,   257,   257,   244,
     245,   246,   247,   248,   249,   250,  1551,   257,   263,   254,
     263,    62,     5,   257,   257,   260,   258,    68,   258,   258,
     258,     5,  1567,     5,   257,     5,  1571,   264,  1573,     5,
      81,     3,    83,   263,   263,   263,     5,     5,     5,  1038,
       5,     3,  1041,     7,    95,     5,     7,     5,    99,   257,
     257,   263,     7,  1861,   264,  1054,  1055,  1056,  1057,   492,
     111,   265,  1061,   263,   258,     7,   265,   257,   265,     7,
       7,     7,     7,   506,   507,     7,  1718,  1719,     7,     7,
       7,   132,     7,  1725,     7,     7,   519,     7,     7,  1897,
       7,     7,     7,   526,   527,   528,  1677,     8,  1679,   532,
       7,   235,   236,     7,   238,   239,   240,   241,     7,  1814,
     244,   245,   246,   247,   248,   249,   250,   263,     5,   264,
     254,     7,     7,     7,     7,     7,   260,     7,     7,     7,
    1129,  1130,     7,     7,     7,     7,   187,  1682,   189,  1684,
       7,     7,     7,  1142,     7,     7,     7,     7,  1729,     7,
       7,     5,     5,     5,  1735,   257,     7,   590,   591,  1801,
       7,  1803,   257,   257,     5,     5,   258,   258,     7,     7,
     603,     7,     7,  1718,  1719,     7,     7,     7,     7,   265,
    1725,   258,   265,   265,   265,   618,   619,   265,   258,   265,
     623,   624,   625,   626,   265,     7,   265,   265,  1743,   632,
     258,   634,   265,     3,     4,     5,     6,     3,     7,     9,
     265,  1210,   265,  1212,   258,   265,   265,   265,   265,   265,
    1219,   264,   264,  1804,    24,    25,    26,    27,    28,   265,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   265,  1801,   265,  1803,   265,
       3,     4,     5,   265,   238,   239,   240,   241,   265,    69,
     244,   245,   246,   247,   248,   249,   250,   263,   263,     7,
     254,   264,   263,   258,   263,  1866,   260,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,  1861,    60,    61,   265,
     265,   265,   265,     7,   235,   236,   112,   238,   239,   240,
     241,   764,   765,   244,   245,   246,   247,   248,   249,   250,
       7,     7,     7,   254,   257,   256,   258,     7,  1929,   260,
       3,     7,  1897,     7,   263,     7,     7,     7,     7,   792,
     793,   794,     7,  1362,     7,   798,   799,   263,   263,   263,
     263,   804,   263,   263,     7,     7,     7,     5,     7,   122,
       5,   258,   263,     5,   235,   236,   129,   238,   239,   240,
     241,     5,   263,   244,   245,   246,   247,   248,   249,   250,
     264,     5,   258,   254,   237,   238,   239,   240,   241,   260,
     258,   244,   245,   246,   247,   248,   249,   250,   251,   852,
     265,   254,   855,   235,   236,     7,   238,   239,   240,   241,
     258,   231,   244,   245,   246,   247,   248,   249,   250,     7,
     258,   258,   254,   265,   265,   265,   265,   247,   260,  1448,
     258,     7,   252,  1998,     7,   255,  1455,     7,     7,     7,
     260,  1460,   265,   263,  1463,   258,   258,   265,   265,  1468,
     265,   265,   905,   235,   236,   258,   238,   239,   240,   241,
     258,  1480,   244,   245,   246,   247,   248,   249,   250,   265,
     263,   263,   254,   258,  1493,   265,  1495,   240,   260,   260,
     264,   258,   264,   246,   247,   258,   264,   258,     7,   252,
     264,   258,   255,     7,     7,   258,   259,   260,   261,     7,
     263,     3,     4,     5,     7,   240,   241,     7,     7,   244,
     245,   246,   247,   248,   249,   250,     7,  1536,  1537,   254,
    1539,     7,     7,     7,     7,   260,     7,     7,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     7,    60,    61,
     135,   235,   236,     7,   238,   239,   240,   241,     7,     7,
     244,   245,   246,   247,   248,   249,   250,     7,     7,   263,
     254,  1034,   264,   264,   263,     7,   260,     7,     5,  1042,
    1043,  1044,     7,   111,   258,    16,   258,   265,   265,   265,
     258,     3,     4,     5,     6,   265,   265,     9,   265,   265,
     265,   258,     7,   263,     5,     7,    81,   263,    83,     7,
     122,    86,    24,    25,    26,    27,    28,   129,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     7,     7,  1108,   263,   122,   123,   124,
     125,   126,   127,   128,     7,   130,  1685,  1120,     7,     3,
       4,     5,  1691,   236,   237,   238,   239,   240,   241,  1698,
       7,   244,   245,   246,   247,   248,   249,   250,   251,     7,
    1143,   254,  1145,     7,  1147,  1714,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     5,  1175,   240,   241,     5,     5,   244,   245,   246,
     247,   248,   249,   250,   251,   257,   263,   254,   240,     5,
       5,     3,     4,     5,   246,   247,   258,   258,   258,     5,
     252,   258,     7,   255,     4,   264,     7,   263,   260,   261,
       7,   263,    24,    25,    26,    27,     7,     7,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   264,   264,     7,     7,   235,   236,   264,
     238,   239,   240,   241,     7,     7,   244,   245,   246,   247,
     248,   249,   250,     7,     7,   263,   254,     7,     7,     7,
       7,  1840,   260,     7,     7,     7,  1845,   263,  1847,   231,
     263,     7,   264,     7,   265,  1854,   263,     7,    62,   258,
     258,     7,     7,     7,     7,   247,     7,   263,     7,   263,
     252,   264,     5,   255,   235,   236,   132,   238,   239,   240,
     241,   263,     7,   244,   245,   246,   247,   248,   249,   250,
     264,  1074,  2028,   254,  1075,  1223,  1895,  1341,  1514,   260,
    1733,   235,   236,   264,   238,   239,   240,   241,   585,   125,
     244,   245,   246,   247,   248,   249,   250,   760,   662,   943,
     254,  1354,   704,   602,    -1,   238,   260,    -1,    -1,    -1,
    1363,  1364,  1365,   247,    -1,    -1,    -1,    -1,   252,    -1,
      -1,   255,    -1,  1942,    -1,    -1,    -1,     5,    -1,   263,
       3,     4,     5,    -1,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,
     212,    24,    25,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
     252,    -1,    -1,   255,    -1,    -1,    -1,    -1,  1451,  1452,
    1453,   263,     7,    -1,    -1,  1458,    -1,    -1,  1461,  1462,
      -1,    -1,    -1,  1466,    -1,    -1,  1469,  1470,  1471,  1472,
      -1,    -1,  1475,  1476,  1477,    -1,  1479,    -1,    -1,    -1,
    1483,  1484,    -1,    -1,    -1,  1488,  1489,    -1,    -1,    -1,
      -1,    -1,    -1,  1496,  1497,  1498,  1499,  1500,    -1,    -1,
      -1,    -1,  1505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,  1518,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      -1,   189,     3,     4,     5,    -1,   194,    -1,    -1,   197,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     8,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    13,    14,    15,   252,
      17,    -1,   255,    -1,  1637,    -1,   264,  1640,    -1,    -1,
     263,    -1,  1645,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,     7,
      29,    -1,    -1,    -1,  1677,  1678,  1679,  1680,  1681,    -1,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,     7,    62,    -1,   260,    -1,    -1,    -1,    68,
    1713,    -1,    -1,    -1,  1717,    -1,    -1,  1720,  1721,    -1,
      -1,    -1,    81,    -1,    83,     7,  1729,    -1,    -1,    -1,
      -1,    -1,  1735,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,  1749,  1750,  1751,  1752,
    1753,    -1,   111,    -1,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,    -1,   159,   132,    -1,   162,    -1,    -1,   165,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,  1804,   189,    -1,    -1,    -1,   247,   194,    -1,    -1,
     197,   252,  1815,   236,   255,   238,   239,   240,   241,   260,
      -1,   244,   245,   246,   247,   248,   249,   250,   187,    -1,
     189,   254,  1835,  1836,  1837,  1838,    -1,   260,  1841,    -1,
    1843,   235,   236,    -1,   238,   239,   240,   241,  1851,  1852,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,  1866,  1867,    -1,   260,  1870,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,  1894,    13,    14,    15,    -1,    17,   235,   236,    -1,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,   260,    -1,    -1,    -1,  1929,    -1,  1931,    -1,
     235,   236,    -1,   238,   239,   240,   241,    -1,     5,   244,
     245,   246,   247,   248,   249,   250,    13,    14,    15,   254,
      17,  1954,    -1,   235,   236,   260,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
       7,  1984,    -1,    -1,  1987,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,  2007,    -1,    -1,  2010,    -1,    -1,
       5,    -1,    -1,    -1,     7,    -1,    -1,  2020,    13,    14,
      15,   142,    17,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
      -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,
      -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,    -1,
     197,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,   264,    13,    14,    15,   142,    17,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,   189,     5,    -1,   264,    -1,   194,
      -1,    -1,   197,    13,    14,    15,    -1,    17,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,   235,   236,   254,   238,   239,
     240,   241,    -1,   260,   244,   245,   246,   247,   248,   249,
     250,    -1,   235,   236,   254,   238,   239,   240,   241,    -1,
     260,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,   264,
      -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,
      14,    15,   142,    17,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,     3,     4,     5,   189,
       5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,    14,
      15,    -1,    17,    -1,    -1,   264,    -1,    24,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,   235,   236,    -1,   238,   239,   240,
     241,    -1,    69,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,   264,   256,    -1,    -1,   142,   260,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,
     194,    -1,    -1,   197,    13,    14,    15,   142,    17,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,     3,     4,     5,   189,     5,    -1,    -1,    -1,   194,
      -1,    -1,   197,    13,    14,    15,    -1,    17,    -1,    -1,
     264,    -1,    24,    25,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   252,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,
      -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,
      14,    15,   142,    17,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,     3,     4,     5,   189,
       5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,    14,
      15,    -1,    17,    -1,    -1,   264,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
     252,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,     8,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,     8,    -1,    -1,   189,     5,    -1,    -1,    -1,
     194,    -1,    -1,   197,    13,    14,    15,   142,    17,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,     8,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,     8,    -1,    -1,   189,     3,     4,     5,     6,   194,
      -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     8,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   252,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,
      -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,   194,    -1,    -1,   197,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,   235,   236,
      -1,   238,   239,   240,   241,   264,    -1,   244,   245,   246,
     247,   248,   249,   250,    75,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,   247,
      -1,    -1,    -1,   260,   252,   235,   236,   255,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,   136,    81,    -1,    83,    84,
     260,    86,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    96,    -1,   244,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,   254,    -1,    -1,    -1,   168,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   130,   244,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,   254,   198,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      -1,    -1,    -1,   235,   236,    -1,   238,   239,   240,   241,
      -1,   186,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,   265,
      -1,    -1,   257,    -1,    -1,    -1,    -1,   235,   236,   264,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,   235,   236,   264,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,    -1,   235,   236,   264,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
     235,   236,   264,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   260,    -1,   235,   236,   264,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,   260,    -1,   235,   236,   264,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,
      -1,   235,   236,   264,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,   260,    -1,   235,   236,
     264,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,   235,   236,   264,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,   235,   236,   264,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,   235,
     236,   264,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,   235,   236,   264,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,    -1,   235,   236,   264,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
     235,   236,   264,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   260,    -1,   235,   236,   264,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,   256,    -1,
     235,   236,   260,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,   256,
      -1,   235,   236,   260,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     258,    -1,   260,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,   256,    -1,   235,   236,
     260,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,   254,    -1,
      -1,    -1,   258,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,   254,    -1,   256,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,   254
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   269,   270,     0,   271,   272,     5,    11,    12,    19,
      20,    21,    22,    29,    62,    68,    81,    83,    95,    99,
     111,   132,   187,   189,   273,   274,   275,   433,   447,   455,
     456,   267,   255,   260,   255,     5,     7,    19,    20,    21,
      36,   194,     7,     3,     7,    62,    68,    81,    83,    95,
      99,   111,   132,   187,   189,     6,     9,    10,   232,   456,
     457,   458,   257,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   456,    13,    14,    15,    17,   193,   194,
     195,   196,   437,   446,   267,   233,   263,     6,     7,   456,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   257,   255,   448,
     276,   332,   317,   323,   339,   297,   362,   388,   418,   429,
     191,     5,   255,   255,   257,   257,   257,   257,   263,     3,
       4,     5,     6,    24,    25,    26,    27,    28,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   231,   247,   252,   255,   263,   450,   451,
     452,   454,   456,   458,   450,   256,   265,   256,   457,   457,
     258,   265,   293,     5,    63,   264,   277,   278,   446,   447,
     456,   263,   264,   333,   446,   447,   263,   264,   263,   264,
     263,   264,   340,   446,   447,     5,    67,   264,   298,   446,
     447,   263,   264,   363,   446,   447,   263,   264,   389,   446,
     447,   263,   264,   419,   446,   447,   263,   264,   430,   446,
     447,   456,   130,   450,   450,   439,   456,     6,   439,     5,
      69,   260,   281,   283,   285,   456,     6,   450,   263,     7,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   450,   450,   450,   450,
     453,   454,     8,   235,   236,   238,   239,   240,   241,   244,
     245,   246,   247,   248,   249,   250,   254,   260,     7,     7,
     264,     7,   453,     7,   257,   265,   256,   265,     7,     5,
     263,   294,   296,   257,   233,   246,   257,   334,   318,   324,
     341,   257,   257,   364,   390,   420,   431,   434,   263,     8,
     256,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     442,   257,   441,   265,   442,     3,   255,   263,   266,   289,
     291,   456,   438,   257,   443,   264,   264,   453,     5,     5,
     450,   450,   457,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   457,   256,   264,   265,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   256,   450,   457,   453,   233,   260,   450,   233,
     233,   292,     5,   281,   233,   450,    82,    86,    96,   264,
     335,    82,    96,   264,   319,    82,    88,    96,   264,   325,
      68,    86,    96,    97,   105,   107,   264,   342,   258,   283,
     299,    86,    96,   112,   116,   264,   365,    96,   133,   140,
     264,   391,   446,    96,   112,   134,   188,   264,   421,    96,
     140,   190,   192,   214,   264,   432,   263,   450,   450,   283,
     283,   263,   283,   263,   263,   263,   263,   263,   443,   283,
     246,   247,   248,   249,   265,   440,    23,    99,   231,   300,
     301,   443,     8,   450,   290,   453,   265,    64,   286,   289,
     258,   265,   444,   264,   258,   265,   265,   265,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   265,
     258,   258,   258,   258,   258,   258,   265,   265,   265,   258,
     450,   454,     8,     7,   258,   258,   256,     6,   450,   450,
     264,     5,   281,   281,   258,   293,     7,   281,   258,     5,
     263,     5,     5,   456,   263,     5,   263,   300,     5,   263,
       5,     5,   456,   263,   263,   263,   233,   258,   258,   293,
       5,     5,   456,   263,   263,     5,   456,   263,   392,     5,
     456,   263,   456,   456,   456,   263,   456,   457,     5,   435,
       8,     8,   256,   208,   300,   263,   453,   263,   263,   263,
     258,   258,     5,   257,   257,   257,   443,   304,   305,   258,
     450,   256,   264,   293,   266,   130,   282,     7,    75,   136,
     168,   198,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     5,   450,   450,     7,   450,   450,
     450,   450,     7,   450,     7,   264,     7,     7,     7,     5,
       7,   233,   263,   336,     7,   263,   294,     7,   320,     7,
     326,     7,     7,   359,     7,   294,     7,   343,   349,   356,
     300,   233,     7,     5,     7,   294,     7,   366,   372,   294,
       7,   393,   263,   294,     7,   422,     7,     7,     7,   435,
       7,     7,     7,   264,   436,   450,   450,     5,   265,   453,
     264,   453,   453,   453,     7,   441,   450,     5,   457,   258,
       5,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    60,    61,   122,   129,   240,
     246,   247,   252,   255,   260,   261,   263,   306,   309,   387,
     449,   451,   456,     7,     8,     8,   247,   291,   283,   287,
     293,   452,   452,   263,     5,   241,   242,   457,   450,   450,
     452,   450,     5,   445,   445,   445,   450,     5,   263,   450,
     263,   302,   263,   263,   263,   263,     3,   258,   265,   265,
     258,   258,   258,   258,   263,    66,   336,   263,   264,   446,
       7,   263,   264,   263,   264,   263,   264,   446,     7,   263,
     264,   446,   263,   264,   263,   264,     7,   300,     7,   263,
     264,   446,   117,   118,   119,   120,   264,   373,   446,   447,
       7,   263,   264,   446,   400,     7,   263,   264,   446,   447,
     264,   437,     8,   264,   256,   263,   300,   264,   264,   264,
     264,   265,   258,   258,   258,     7,   387,   257,   313,   257,
     257,   257,   257,   310,   311,     5,   306,   306,   306,   306,
       3,     3,     5,   143,   212,     5,   456,   234,   235,   236,
     237,   238,   239,   240,   241,   244,   245,   246,   247,   248,
     249,   250,   251,   254,   260,   262,   257,   314,   314,   450,
     450,   291,   443,   258,     5,    65,   288,   300,   457,   457,
       6,   453,   300,   303,   450,   450,   450,   453,   450,   450,
     450,   279,   264,   337,   321,   327,   360,   344,   350,   357,
       7,   367,   263,   263,   263,   263,   394,     5,    15,   142,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   159,   162,   165,   168,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   189,   194,   197,   264,   401,   446,   423,   450,
     450,   265,   263,   263,   263,   263,   443,   387,   257,   387,
     306,     5,     5,   257,   257,   241,   256,   456,   264,   307,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,     3,   450,   258,   259,
     306,   315,   263,   316,     8,   258,   456,   289,   265,   264,
     264,   265,   265,   265,   265,   264,   258,   258,   264,   257,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    80,
      86,    99,   264,   338,    69,    81,   264,   322,    82,    86,
      87,   264,   328,    98,   108,   109,   110,   264,   361,    96,
      98,    99,   100,   101,   102,   103,   104,   264,   345,    96,
      98,   106,   264,   351,    86,    96,    98,   264,   358,    81,
      83,    84,    86,    96,   113,   114,   115,   130,   186,   257,
     264,   368,   378,   378,   382,   374,    86,    96,   134,   135,
     136,   137,   138,   139,   264,   395,   446,   257,   456,   257,
     257,   300,   257,   257,   257,   257,   257,   257,   257,   257,
     257,     7,   257,   257,   263,   257,   263,   257,   263,   263,
     257,   257,   257,   257,   257,   257,   257,   257,   263,   263,
     257,   257,   257,   257,   257,   263,   263,   257,   402,   403,
      75,    96,   264,   424,   264,   265,   300,   453,   453,   453,
     453,   258,   258,   304,   258,   265,   257,   258,   304,   304,
     257,   264,   306,   258,   258,   265,    69,   453,   450,     7,
     300,   300,   450,   450,   450,   260,   283,   283,   283,   283,
     257,   300,   257,   300,   300,   300,   263,   456,     5,   257,
     300,    64,   283,     5,   263,     5,     5,     5,   285,   288,
     456,     5,     5,     5,   263,   302,   302,   283,   283,     5,
       5,   263,   354,     5,   263,   352,     5,   456,     5,     5,
       5,     5,     5,   107,   117,   456,   456,     3,     3,   283,
     452,   370,    81,    83,    84,    85,   122,   123,   124,   125,
     126,   127,   128,   130,   131,   264,   379,   386,   264,   130,
     264,   383,   386,    86,   110,   263,   264,   375,     5,   456,
     263,   396,   456,   457,   452,   457,   263,   398,   456,   456,
     456,     7,   300,   300,     7,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   300,   450,   407,   450,   409,   450,
     411,   413,   283,   457,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,     5,   456,
     257,   257,   263,   456,   450,   264,   264,   264,   264,   264,
       7,   265,   306,   312,   263,   258,   265,   304,     8,   306,
     257,   264,   265,   265,   265,   265,   289,     7,     7,     7,
       7,   300,     7,   300,     7,     7,     7,   451,     7,     7,
     300,     7,     7,     7,   316,   329,     7,     7,     7,     7,
       7,     7,     7,     7,   294,   263,   346,     5,     7,     7,
       7,     7,     7,   355,     7,   353,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   369,     7,     7,
       7,     7,   304,     5,     5,     5,   257,   283,     7,   257,
     283,   257,     5,     5,   376,     7,     7,   397,     7,     7,
       7,     7,   399,     7,     7,   258,   258,   258,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   258,   265,   140,
     143,   156,   157,   158,   264,   408,   265,   140,   143,   156,
     157,   160,   161,   264,   410,   265,    18,    88,   140,   163,
     164,   264,   412,    18,    88,   133,   140,   141,   163,   166,
     167,   264,   414,   265,   258,   265,   265,   265,   265,   265,
     265,   264,   264,   265,   265,   265,   265,   265,   265,   265,
     258,   302,   404,   456,   404,   425,     7,   264,   263,   263,
     264,   263,   263,   283,   258,   304,   450,     3,   258,   308,
     283,   300,   450,   450,   450,   280,   265,   265,   293,   265,
       7,   263,   264,     7,   112,     7,   293,   264,   293,   264,
     293,   257,   371,   258,     7,     7,     7,     3,     7,   380,
       7,   384,     7,     7,    78,    79,   116,   130,   264,   377,
     264,   293,   264,   293,     7,   263,     7,   300,   456,   456,
     450,   450,   450,   456,   300,   283,     7,   450,   263,   300,
     450,   450,   300,   450,   263,   300,   450,   450,   450,   450,
     450,   450,   450,   263,   450,   300,   450,   450,   456,   263,
     263,   450,   450,   263,   300,     7,   300,   452,   452,   452,
     450,   452,     7,     7,   456,   456,   450,   456,   456,   283,
       5,     7,   405,   405,     5,   117,   264,   263,   452,   453,
     263,   453,   453,   258,   258,   265,   258,   306,   258,   264,
     264,   264,   264,   265,   300,   300,   451,   300,   330,     5,
       5,     5,     5,   456,     7,     7,   258,   304,   304,   387,
     387,   387,   283,   456,   456,   400,   258,   265,   265,   265,
     265,   265,   265,   258,   265,   265,   400,     7,     7,     7,
       7,   265,   400,     7,     7,     7,     7,     7,   265,     7,
       7,   400,     7,     7,     7,     7,     7,   400,   400,     7,
       7,   415,   258,   265,   265,   258,   258,   265,   265,   265,
     265,   265,   258,   258,   258,   265,   264,   265,   258,   265,
     406,   258,   263,   263,   450,   265,   264,   450,   264,   264,
     258,   450,   264,   260,   258,   258,   264,   258,    89,    90,
      91,    92,    93,    94,   264,   331,     7,   264,   258,     7,
     381,   385,     7,     7,     7,     7,   264,     7,   452,   450,
     452,   450,   450,   456,     7,   456,   300,   264,   300,   264,
     300,   264,   264,   264,   263,   264,     7,   450,   300,     7,
       7,   450,   457,   457,   450,   450,     7,     7,     7,   457,
       7,   135,     7,   209,   212,   452,     7,   426,   426,   264,
     452,   264,   264,   264,   263,   263,   264,   289,     7,     7,
       7,     7,     5,   450,   450,   450,   450,   450,   111,     7,
     265,   265,    16,   258,   258,   265,   265,   265,   265,   258,
     265,   265,   258,   265,   416,   265,   258,   265,   258,   258,
     258,   265,   265,   264,   265,   457,   457,   452,    81,    83,
      86,   130,   264,   386,   427,   264,   265,   263,   453,   450,
     265,     7,     7,     7,     7,     7,     7,     5,   304,   387,
     263,     7,     7,   450,   450,   450,   450,     7,   300,   450,
     263,   450,    18,    86,    88,    99,   112,   130,   264,   417,
     300,     7,   300,     7,     7,     7,   450,   450,     7,   300,
     264,   265,     5,     5,     5,   283,   257,   452,   450,   264,
     264,   450,   294,   258,   258,   400,   258,   258,   258,   265,
     258,   265,   400,   258,     5,     5,   450,   300,     5,   283,
     258,   258,   265,   258,   258,   264,     7,     4,     7,     7,
       7,     7,   428,   264,   265,   264,   258,     7,     7,     7,
     264,     7,     7,     7,   452,   263,   450,   264,   263,     7,
       7,     7,     7,     7,     7,     7,     7,   300,   263,   263,
       7,   264,   304,   450,   263,     7,   347,   265,   400,   258,
     400,   258,   400,   400,     7,   258,   264,   450,    62,   450,
     264,   263,   264,     7,   264,   264,     7,   265,   284,   456,
     265,   400,     7,     7,   450,     7,   263,   295,   450,   264,
     265,   348,   264,   258,   450,   132,     7,   264,     5,   295,
       7,   264
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
#line 404 "GetDP.y"
    {            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
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
    { Help(yyvsp[-1].c); ;}
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
    { Print_Object(yyvsp[-1].i, &Problem_S); ;}
    break;

  case 41:
#line 459 "GetDP.y"
    {
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 42:
#line 467 "GetDP.y"
    {
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;}
    break;

  case 45:
#line 491 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;}
    break;

  case 46:
#line 494 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;}
    break;

  case 47:
#line 500 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, yyvsp[-4].c, 0, 0) ;
    ;}
    break;

  case 50:
#line 510 "GetDP.y"
    { Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;}
    break;

  case 53:
#line 520 "GetDP.y"
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

  case 54:
#line 530 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;}
    break;

  case 55:
#line 537 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;}
    break;

  case 56:
#line 547 "GetDP.y"
    {
      Group_S.FunctionType = yyvsp[-2].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      Group_S.InitialList = yyvsp[0].l ;
    ;}
    break;

  case 57:
#line 556 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = yyvsp[-1].l ;
      yyval.i = -1 ;
    ;}
    break;

  case 58:
#line 564 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 59:
#line 575 "GetDP.y"
    {
      yyval.i = yyvsp[0].i ;
    ;}
    break;

  case 60:
#line 580 "GetDP.y"
    {
      if ( !strcmp(yyvsp[0].c, "All") ) {
	yyval.i = -3;
      }
      else if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) >= 0 ) {
	List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
      }
      else {
	yyval.i = -2 ; vyyerror("Unknown Group: %s", yyvsp[0].c) ;
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 61:
#line 597 "GetDP.y"
    {
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) >= 0 )
	  List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d", yyvsp[-1].c, k+1) ;
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

  case 62:
#line 627 "GetDP.y"
    { yyval.i = REGION ; ;}
    break;

  case 63:
#line 630 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 64:
#line 642 "GetDP.y"
    { yyval.l = yyvsp[0].l ; ;}
    break;

  case 65:
#line 643 "GetDP.y"
    { yyval.l = NULL ; ;}
    break;

  case 66:
#line 650 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;}
    break;

  case 67:
#line 653 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;}
    break;

  case 68:
#line 656 "GetDP.y"
    {
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) >= 0 ) {
	if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	     ELEMENTLIST ) {
	  yyval.l = List_Create( 1, 5, sizeof(int)) ;
	  List_Add(yyval.l, &i) ;
	}
	else  vyyerror("Not a Support of Element Type: %s", yyvsp[0].c) ;
      }
      else  vyyerror("Unknown Region for Support: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 69:
#line 674 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 70:
#line 687 "GetDP.y"
    {
      yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;}
    break;

  case 71:
#line 694 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 72:
#line 701 "GetDP.y"
    {
      yyval.l = List_Create( 5, 5, sizeof(int)) ;
    ;}
    break;

  case 73:
#line 706 "GetDP.y"
    {
      yyval.l = yyvsp[-2].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;}
    break;

  case 74:
#line 713 "GetDP.y"
    {
      yyval.l = yyvsp[-3].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
    ;}
    break;

  case 75:
#line 724 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ;
    ;}
    break;

  case 76:
#line 730 "GetDP.y"
    {
      i = (int)yyvsp[-1].d ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
    ;}
    break;

  case 77:
#line 737 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;}
    break;

  case 78:
#line 748 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 79:
#line 757 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-3].d ; (yyvsp[-3].d<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-3].d<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 80:
#line 765 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || (yyvsp[-4].i<(int)yyvsp[-2].d && (int)yyvsp[0].d<0) || (yyvsp[-4].i>(int)yyvsp[-2].d && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, (int)yyvsp[-2].d, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; ((int)yyvsp[0].d>0)?(j<=yyvsp[-2].d):(j>=yyvsp[-2].d) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 81:
#line 779 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || ((int)yyvsp[-5].d<(int)yyvsp[-2].d && (int)yyvsp[0].d<0) || ((int)yyvsp[-5].d>(int)yyvsp[-2].d && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", (int)yyvsp[-5].d, (int)yyvsp[-2].d, (int)yyvsp[0].d) ;
	 i = (int)yyvsp[-5].d ; List_Add(ListOfInt_L, &i) ;
      }
      else
	for(j=(int)yyvsp[-5].d ; ((int)yyvsp[0].d>0)?(j<=(int)yyvsp[-2].d):(j>=(int)yyvsp[-2].d) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 82:
#line 792 "GetDP.y"
    {
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

  case 84:
#line 831 "GetDP.y"
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
#line 841 "GetDP.y"
    { 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(tmpstr, "%s_%d", yyvsp[-3].c, k+1) ;
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
#line 863 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 89:
#line 868 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 90:
#line 869 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 91:
#line 874 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 95:
#line 893 "GetDP.y"
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
#line 913 "GetDP.y"
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
#line 966 "GetDP.y"
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
#line 986 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 102:
#line 992 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;}
    break;

  case 103:
#line 998 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 104:
#line 1001 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 105:
#line 1008 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1019 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 108:
#line 1022 "GetDP.y"
    { List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 109:
#line 1028 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1032 "GetDP.y"
    { yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1044 "GetDP.y"
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
#line 1057 "GetDP.y"
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
#line 1071 "GetDP.y"
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
#line 1086 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1092 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1098 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1104 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1110 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1116 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1122 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1128 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1134 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1140 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1146 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1152 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1158 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1164 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1170 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1176 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1182 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1189 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1197 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1210 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1216 "GetDP.y"
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
#line 1290 "GetDP.y"
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
#line 1324 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1333 "GetDP.y"
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
#line 1345 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1347 "GetDP.y"
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
#line 1359 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1361 "GetDP.y"
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
#line 1373 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1375 "GetDP.y"
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
#line 1389 "GetDP.y"
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
#line 1401 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1407 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1413 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1415 "GetDP.y"
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
#line 1444 "GetDP.y"
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
#line 1470 "GetDP.y"
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
#line 1483 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1489 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1496 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1502 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1509 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1516 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1527 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 161:
#line 1528 "GetDP.y"
    { yyval.i = 0 ; ;}
    break;

  case 162:
#line 1529 "GetDP.y"
    { yyval.i = yyvsp[-1].i ; ;}
    break;

  case 163:
#line 1534 "GetDP.y"
    { yyval.i = 1 ; ;}
    break;

  case 164:
#line 1535 "GetDP.y"
    { yyval.i = yyvsp[-2].i + 1 ; ;}
    break;

  case 165:
#line 1541 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 166:
#line 1544 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 167:
#line 1547 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;}
    break;

  case 168:
#line 1563 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 169:
#line 1568 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 170:
#line 1575 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 172:
#line 1584 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;}
    break;

  case 173:
#line 1589 "GetDP.y"
    { JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;}
    break;

  case 174:
#line 1596 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 175:
#line 1599 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;}
    break;

  case 176:
#line 1606 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 178:
#line 1616 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;}
    break;

  case 179:
#line 1619 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 180:
#line 1622 "GetDP.y"
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
#line 1660 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 182:
#line 1666 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 183:
#line 1673 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 185:
#line 1686 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 186:
#line 1693 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;}
    break;

  case 187:
#line 1696 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;}
    break;

  case 188:
#line 1703 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 189:
#line 1706 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;}
    break;

  case 190:
#line 1713 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 192:
#line 1725 "GetDP.y"
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
#line 1735 "GetDP.y"
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
#line 1745 "GetDP.y"
    { IntegrationCase_S.Case = yyvsp[-1].l ; ;}
    break;

  case 195:
#line 1752 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 196:
#line 1755 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;}
    break;

  case 197:
#line 1762 "GetDP.y"
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
#line 1778 "GetDP.y"
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
#line 1826 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 201:
#line 1829 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 202:
#line 1832 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 203:
#line 1835 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 204:
#line 1838 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;}
    break;

  case 205:
#line 1849 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 207:
#line 1859 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 210:
#line 1871 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 212:
#line 1884 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 213:
#line 1891 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-2].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 214:
#line 1899 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 215:
#line 1908 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;}
    break;

  case 216:
#line 1911 "GetDP.y"
    {
      if (!Constraint_S.MultiConstraintPerRegion)
	Constraint_S.MultiConstraintPerRegion =
	  List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

      MultiConstraintPerRegion_S.Name = yyvsp[-3].c ;
      MultiConstraintPerRegion_S.ConstraintPerRegion = yyvsp[-1].l ;
      MultiConstraintPerRegion_S.Active = NULL ;

      List_Add(Constraint_S.MultiConstraintPerRegion, 
	       &MultiConstraintPerRegion_S) ;
    ;}
    break;

  case 217:
#line 1929 "GetDP.y"
    {
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 218:
#line 1934 "GetDP.y"
    {
      List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
    ;}
    break;

  case 219:
#line 1939 "GetDP.y"
    { 
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 220:
#line 1948 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 222:
#line 1962 "GetDP.y"
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
#line 1972 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
    ;}
    break;

  case 224:
#line 1977 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
    ;}
    break;

  case 225:
#line 1983 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 226:
#line 1988 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 227:
#line 1996 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2004 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2013 "GetDP.y"
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
#line 2031 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2040 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2048 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2056 "GetDP.y"
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
#line 2066 "GetDP.y"
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
#line 2076 "GetDP.y"
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
#line 2086 "GetDP.y"
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
#line 2106 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 239:
#line 2117 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 242:
#line 2130 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 244:
#line 2142 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 245:
#line 2149 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-2].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 246:
#line 2157 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 247:
#line 2166 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;}
    break;

  case 248:
#line 2169 "GetDP.y"
    { FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;}
    break;

  case 249:
#line 2172 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;}
    break;

  case 250:
#line 2175 "GetDP.y"
    { FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;}
    break;

  case 251:
#line 2182 "GetDP.y"
    {
      yyval.l = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 252:
#line 2188 "GetDP.y"
    {
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
    ;}
    break;

  case 253:
#line 2205 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 254:
#line 2214 "GetDP.y"
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
#line 2235 "GetDP.y"
    { BasisFunction_S.Name = yyvsp[-1].c ; ;}
    break;

  case 257:
#line 2238 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 258:
#line 2243 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;}
    break;

  case 259:
#line 2248 "GetDP.y"
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

  case 260:
#line 2262 "GetDP.y"
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

  case 261:
#line 2282 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 262:
#line 2287 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 263:
#line 2292 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
    ;}
    break;

  case 264:
#line 2297 "GetDP.y"
    {
      BasisFunction_S.EntityIndex = Num_Group(&Group_S, "BF_Entity", yyvsp[-1].i) ;
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
#line 2331 "GetDP.y"
    {
      Nbr_Index = yyvsp[-1].i ;
    ;}
    break;

  case 267:
#line 2335 "GetDP.y"
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
#line 2345 "GetDP.y"
    {
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", yyvsp[-12].c) ;

      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-11].i, 1, sizeof(struct GlobalBasisFunction)) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {

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

	sprintf(tmpstr, "%s_%d", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) >= 0) {
	  GlobalBasisFunction_S.FormulationIndex = i ;
	  List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-15].c, 
				   fcmp_DefineQuantity_Name)) >= 0)
	    GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  else {
	    vyyerror("Unknown Quantity '%s' in Formulation '%s'", yyvsp[-15].c,
		     Formulation_S.Name) ;
	    break ;
	  }
	}
	else
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;

	sprintf(tmpstr, "%s_%d", yyvsp[-3].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				 fcmp_Resolution_Name)) >= 0)
	  GlobalBasisFunction_S.ResolutionIndex = i ;
	else
	  vyyerror("Unknown Resolution: %s {%d}", yyvsp[-3].c, k+1) ;

	GlobalBasisFunction_S.QuantityStorage = NULL ;
	List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      Free(yyvsp[-15].c) ; Free(yyvsp[-12].c) ; Free(yyvsp[-3].c) ;
    ;}
    break;

  case 269:
#line 2409 "GetDP.y"
    { 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 270:
#line 2415 "GetDP.y"
    { 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;}
    break;

  case 271:
#line 2424 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 273:
#line 2435 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 274:
#line 2442 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 275:
#line 2445 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 276:
#line 2452 "GetDP.y"
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

  case 277:
#line 2468 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 278:
#line 2474 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 279:
#line 2477 "GetDP.y"
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

  case 280:
#line 2496 "GetDP.y"
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

  case 281:
#line 2508 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 282:
#line 2515 "GetDP.y"
    { 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 283:
#line 2520 "GetDP.y"
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

  case 284:
#line 2535 "GetDP.y"
    { 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 285:
#line 2541 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;}
    break;

  case 286:
#line 2551 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 288:
#line 2563 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 289:
#line 2570 "GetDP.y"
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

  case 290:
#line 2581 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 291:
#line 2595 "GetDP.y"
    {
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 292:
#line 2600 "GetDP.y"
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
	    
	    List_Add(yyval.l = yyvsp[-3].l, &ConstraintInFS_S) ;
	  }
	}
      }
    ;}
    break;

  case 293:
#line 2637 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 294:
#line 2646 "GetDP.y"
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
#line 2662 "GetDP.y"
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

  case 297:
#line 2695 "GetDP.y"
    { Type_Function = yyvsp[-1].i ; ;}
    break;

  case 298:
#line 2698 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; ;}
    break;

  case 299:
#line 2701 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c, fcmp_Constraint_Name) ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 300:
#line 2716 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 302:
#line 2726 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 305:
#line 2739 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 307:
#line 2750 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 308:
#line 2757 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-2].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 309:
#line 2765 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 311:
#line 2777 "GetDP.y"
    { Formulation_S.Equation = yyvsp[-1].l ; ;}
    break;

  case 312:
#line 2783 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 313:
#line 2788 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 315:
#line 2799 "GetDP.y"
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
#line 2822 "GetDP.y"
    { DefineQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 318:
#line 2825 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 319:
#line 2829 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 320:
#line 2832 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 321:
#line 2842 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;}
    break;

  case 322:
#line 2846 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 323:
#line 2854 "GetDP.y"
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
#line 2878 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;}
    break;

  case 325:
#line 2883 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 326:
#line 2889 "GetDP.y"
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
#line 3200 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;}
    break;

  case 328:
#line 3205 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 329:
#line 3214 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 330:
#line 3223 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 331:
#line 3232 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;}
    break;

  case 333:
#line 3240 "GetDP.y"
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
#line 3280 "GetDP.y"
    {
      yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 335:
#line 3285 "GetDP.y"
    {
      List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
    ;}
    break;

  case 336:
#line 3290 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 337:
#line 3295 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 338:
#line 3304 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 339:
#line 3307 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 340:
#line 3310 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 341:
#line 3313 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 342:
#line 3324 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 344:
#line 3335 "GetDP.y"
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
#line 3345 "GetDP.y"
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
#line 3355 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 347:
#line 3369 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 349:
#line 3381 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;}
    break;

  case 350:
#line 3383 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;}
    break;

  case 351:
#line 3385 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;}
    break;

  case 352:
#line 3387 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;}
    break;

  case 353:
#line 3395 "GetDP.y"
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
#line 3420 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 356:
#line 3428 "GetDP.y"
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
#line 3507 "GetDP.y"
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
#line 3553 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;}
    break;

  case 359:
#line 3558 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 360:
#line 3567 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 361:
#line 3576 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 362:
#line 3581 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 363:
#line 3590 "GetDP.y"
    { if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;}
    break;

  case 364:
#line 3601 "GetDP.y"
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
#line 3630 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;}
    break;

  case 367:
#line 3635 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 368:
#line 3643 "GetDP.y"
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
#line 3698 "GetDP.y"
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
#line 3715 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 371:
#line 3716 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 372:
#line 3717 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 373:
#line 3718 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 374:
#line 3719 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 375:
#line 3720 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 376:
#line 3721 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 377:
#line 3722 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 378:
#line 3729 "GetDP.y"
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
#line 3750 "GetDP.y"
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
#line 3774 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 382:
#line 3784 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 385:
#line 3797 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 387:
#line 3809 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 388:
#line 3816 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-2].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 389:
#line 3824 "GetDP.y"
    { Resolution_S.DefineSystem = yyvsp[-1].l ; ;}
    break;

  case 390:
#line 3827 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 391:
#line 3829 "GetDP.y"
    { Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;}
    break;

  case 393:
#line 3837 "GetDP.y"
    {
      yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 394:
#line 3842 "GetDP.y"
    {
      List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
    ;}
    break;

  case 395:
#line 3847 "GetDP.y"
    {
       yyval.l = yyvsp[-1].l ;
     ;}
    break;

  case 396:
#line 3857 "GetDP.y"
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
#line 3877 "GetDP.y"
    { DefineSystem_S.Name = yyvsp[-1].c ; ;}
    break;

  case 399:
#line 3880 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 400:
#line 3889 "GetDP.y"
    { DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;}
    break;

  case 401:
#line 3892 "GetDP.y"
    {
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;}
    break;

  case 402:
#line 3897 "GetDP.y"
    { 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;}
    break;

  case 403:
#line 3902 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;}
    break;

  case 404:
#line 3907 "GetDP.y"
    { DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 405:
#line 3912 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;}
    break;

  case 407:
#line 3923 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 408:
#line 3932 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 409:
#line 3939 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 410:
#line 3942 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 411:
#line 3954 "GetDP.y"
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
#line 3964 "GetDP.y"
    { yyval.l = yyvsp[-1].l ;  ;}
    break;

  case 413:
#line 3970 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 414:
#line 3973 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 415:
#line 3985 "GetDP.y"
    { 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 416:
#line 3993 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 417:
#line 4006 "GetDP.y"
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
#line 4028 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 419:
#line 4035 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 420:
#line 4041 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 421:
#line 4047 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 422:
#line 4053 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 423:
#line 4061 "GetDP.y"
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
#line 4083 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 425:
#line 4090 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 426:
#line 4096 "GetDP.y"
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
#line 4107 "GetDP.y"
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
#line 4118 "GetDP.y"
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
#line 4131 "GetDP.y"
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
#line 4146 "GetDP.y"
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
#line 4161 "GetDP.y"
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
#line 4176 "GetDP.y"
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
#line 4196 "GetDP.y"
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
#line 4217 "GetDP.y"
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
#line 4229 "GetDP.y"
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
#line 4249 "GetDP.y"
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
#line 4266 "GetDP.y"
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
#line 4285 "GetDP.y"
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
#line 4306 "GetDP.y"
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
#line 4320 "GetDP.y"
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
#line 4334 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;}
    break;

  case 442:
#line 4342 "GetDP.y"
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
#line 4376 "GetDP.y"
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
#line 4389 "GetDP.y"
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
#line 4403 "GetDP.y"
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
#line 4416 "GetDP.y"
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
#line 4428 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 449:
#line 4437 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 451:
#line 4446 "GetDP.y"
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
#line 4457 "GetDP.y"
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
#line 4469 "GetDP.y"
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
#line 4479 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;}
    break;

  case 455:
#line 4487 "GetDP.y"
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
#line 4500 "GetDP.y"
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
#line 4513 "GetDP.y"
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
#line 4527 "GetDP.y"
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
#line 4537 "GetDP.y"
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
#line 4547 "GetDP.y"
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
#line 4561 "GetDP.y"
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
#line 4575 "GetDP.y"
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
#line 4594 "GetDP.y"
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
#line 4612 "GetDP.y"
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
#line 4623 "GetDP.y"
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
#line 4638 "GetDP.y"
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
#line 4653 "GetDP.y"
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
#line 4668 "GetDP.y"
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
#line 4683 "GetDP.y"
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
#line 4698 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 471:
#line 4709 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 472:
#line 4714 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 473:
#line 4724 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 475:
#line 4734 "GetDP.y"
    { Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;}
    break;

  case 476:
#line 4737 "GetDP.y"
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
#line 4747 "GetDP.y"
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
#line 4762 "GetDP.y"
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
#line 4778 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;}
    break;

  case 481:
#line 4782 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 482:
#line 4786 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 483:
#line 4790 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;}
    break;

  case 484:
#line 4795 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 485:
#line 4806 "GetDP.y"
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
#line 4823 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;}
    break;

  case 488:
#line 4827 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 489:
#line 4831 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 490:
#line 4835 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;}
    break;

  case 491:
#line 4839 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;}
    break;

  case 492:
#line 4844 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 493:
#line 4855 "GetDP.y"
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
#line 4870 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 496:
#line 4874 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;}
    break;

  case 497:
#line 4878 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;}
    break;

  case 498:
#line 4882 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 499:
#line 4886 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 500:
#line 4897 "GetDP.y"
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
#line 4915 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 503:
#line 4919 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;}
    break;

  case 504:
#line 4923 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;}
    break;

  case 505:
#line 4927 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 506:
#line 4932 "GetDP.y"
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
#line 4942 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;}
    break;

  case 508:
#line 4948 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 509:
#line 4954 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;}
    break;

  case 510:
#line 4964 "GetDP.y"
    { yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 511:
#line 4967 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;}
    break;

  case 512:
#line 4972 "GetDP.y"
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
#line 4990 "GetDP.y"
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
#line 5000 "GetDP.y"
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
#line 5029 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;}
    break;

  case 517:
#line 5032 "GetDP.y"
    { ChangeOfState_S.Criterion = yyvsp[-1].d ; ;}
    break;

  case 518:
#line 5035 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;}
    break;

  case 519:
#line 5043 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 520:
#line 5060 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 522:
#line 5072 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 525:
#line 5083 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 527:
#line 5096 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 528:
#line 5103 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-2].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;}
    break;

  case 529:
#line 5111 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c,
			       fcmp_Formulation_Name)) < 0){
	vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
      }
      else {
	PostProcessing_S.FormulationIndex = i ;
	List_Read(Problem_S.Formulation, i, &Formulation_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 530:
#line 5124 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;}
    break;

  case 531:
#line 5129 "GetDP.y"
    { PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;}
    break;

  case 532:
#line 5135 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 533:
#line 5138 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;}
    break;

  case 534:
#line 5141 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 535:
#line 5143 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 536:
#line 5149 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 538:
#line 5160 "GetDP.y"
    { PostQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 539:
#line 5163 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;}
    break;

  case 540:
#line 5169 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 541:
#line 5174 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 542:
#line 5180 "GetDP.y"
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
#line 5194 "GetDP.y"
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
#line 5208 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 546:
#line 5215 "GetDP.y"
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
#line 5243 "GetDP.y"
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
#line 5254 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;}
    break;

  case 549:
#line 5259 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 550:
#line 5268 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 551:
#line 5285 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 553:
#line 5297 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 556:
#line 5306 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 558:
#line 5318 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 559:
#line 5325 "GetDP.y"
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

  case 560:
#line 5337 "GetDP.y"
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

  case 561:
#line 5348 "GetDP.y"
    { 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;}
    break;

  case 562:
#line 5353 "GetDP.y"
    { PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;}
    break;

  case 563:
#line 5359 "GetDP.y"
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

  case 564:
#line 5376 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 565:
#line 5386 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 566:
#line 5389 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 567:
#line 5393 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 568:
#line 5406 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 569:
#line 5411 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 570:
#line 5416 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 571:
#line 5425 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 5434 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 573:
#line 5443 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 574:
#line 5449 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;}
    break;

  case 575:
#line 5454 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 576:
#line 5463 "GetDP.y"
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

  case 577:
#line 5475 "GetDP.y"
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

  case 578:
#line 5498 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 579:
#line 5499 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 580:
#line 5500 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 581:
#line 5501 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 582:
#line 5507 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 583:
#line 5509 "GetDP.y"
    { yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;}
    break;

  case 584:
#line 5515 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 585:
#line 5521 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;}
    break;

  case 586:
#line 5528 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;}
    break;

  case 587:
#line 5537 "GetDP.y"
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

  case 588:
#line 5559 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;}
    break;

  case 589:
#line 5567 "GetDP.y"
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

  case 590:
#line 5578 "GetDP.y"
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

  case 591:
#line 5592 "GetDP.y"
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

  case 592:
#line 5613 "GetDP.y"
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

  case 593:
#line 5640 "GetDP.y"
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

  case 594:
#line 5671 "GetDP.y"
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

  case 595:
#line 5691 "GetDP.y"
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

  case 597:
#line 5726 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;}
    break;

  case 598:
#line 5733 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;}
    break;

  case 599:
#line 5740 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 600:
#line 5747 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;}
    break;

  case 601:
#line 5751 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 602:
#line 5755 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 603:
#line 5759 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;}
    break;

  case 604:
#line 5763 "GetDP.y"
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

  case 605:
#line 5773 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 606:
#line 5778 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 607:
#line 5783 "GetDP.y"
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
#line 5803 "GetDP.y"
    { 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 609:
#line 5810 "GetDP.y"
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

  case 610:
#line 5820 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 611:
#line 5829 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 612:
#line 5838 "GetDP.y"
    { 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 613:
#line 5845 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 614:
#line 5853 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;}
    break;

  case 615:
#line 5857 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 616:
#line 5866 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 617:
#line 5870 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 618:
#line 5874 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 619:
#line 5882 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;}
    break;

  case 620:
#line 5888 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 621:
#line 5892 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 622:
#line 5900 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 623:
#line 5907 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 624:
#line 5915 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 625:
#line 5922 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 626:
#line 5930 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 627:
#line 5937 "GetDP.y"
    { 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;}
    break;

  case 628:
#line 5945 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;}
    break;

  case 629:
#line 5949 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 630:
#line 5958 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 631:
#line 5964 "GetDP.y"
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

  case 632:
#line 6014 "GetDP.y"
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

  case 633:
#line 6029 "GetDP.y"
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

  case 634:
#line 6045 "GetDP.y"
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
      /*      hack_endfor_printf();*/
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;}
    break;

  case 635:
#line 6065 "GetDP.y"
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

  case 636:
#line 6085 "GetDP.y"
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
	  hack_endfor2();
	  /*	  hack_endfor_printf();*/
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
	  /*
	    If hack_endfor() is used, it is OK for a loop executed more than once
	    but not anymore for a single execution.
	    fsetpos() seems to position the file just after the For but with one
	    additional character (the one after EndFor) at the beginning.
	    I do not understand why there is such a mixing of two separate data.
	    I then added hack_endfor2() to suppress the useless additional character.
	    Patrick
	  */
	  /*
	  hack_endfor();
	  */
	}
      }
    ;}
    break;

  case 637:
#line 6141 "GetDP.y"
    {
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;}
    break;

  case 638:
#line 6145 "GetDP.y"
    {
    ;}
    break;

  case 640:
#line 6160 "GetDP.y"
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

  case 641:
#line 6175 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 642:
#line 6181 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 643:
#line 6187 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 644:
#line 6193 "GetDP.y"
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

  case 645:
#line 6204 "GetDP.y"
    {
      Msg(DIRECT, yyvsp[-2].c);
    ;}
    break;

  case 646:
#line 6209 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 647:
#line 6214 "GetDP.y"
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
#line 6226 "GetDP.y"
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
#line 6236 "GetDP.y"
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
#line 6255 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 652:
#line 6261 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 653:
#line 6267 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 654:
#line 6278 "GetDP.y"
    { yyval.c = "Exp";    ;}
    break;

  case 655:
#line 6279 "GetDP.y"
    { yyval.c = "Log";    ;}
    break;

  case 656:
#line 6280 "GetDP.y"
    { yyval.c = "Log10";  ;}
    break;

  case 657:
#line 6281 "GetDP.y"
    { yyval.c = "Sqrt";   ;}
    break;

  case 658:
#line 6282 "GetDP.y"
    { yyval.c = "Sin";    ;}
    break;

  case 659:
#line 6283 "GetDP.y"
    { yyval.c = "Asin";   ;}
    break;

  case 660:
#line 6284 "GetDP.y"
    { yyval.c = "Cos";    ;}
    break;

  case 661:
#line 6285 "GetDP.y"
    { yyval.c = "Acos";   ;}
    break;

  case 662:
#line 6286 "GetDP.y"
    { yyval.c = "Tan";    ;}
    break;

  case 663:
#line 6287 "GetDP.y"
    { yyval.c = "Atan";   ;}
    break;

  case 664:
#line 6288 "GetDP.y"
    { yyval.c = "Atan2";  ;}
    break;

  case 665:
#line 6289 "GetDP.y"
    { yyval.c = "Sinh";   ;}
    break;

  case 666:
#line 6290 "GetDP.y"
    { yyval.c = "Cosh";   ;}
    break;

  case 667:
#line 6291 "GetDP.y"
    { yyval.c = "Tanh";   ;}
    break;

  case 668:
#line 6292 "GetDP.y"
    { yyval.c = "Fabs";   ;}
    break;

  case 669:
#line 6293 "GetDP.y"
    { yyval.c = "Floor";  ;}
    break;

  case 670:
#line 6294 "GetDP.y"
    { yyval.c = "Ceil";   ;}
    break;

  case 671:
#line 6295 "GetDP.y"
    { yyval.c = "Fmod";   ;}
    break;

  case 672:
#line 6296 "GetDP.y"
    { yyval.c = "Modulo"; ;}
    break;

  case 673:
#line 6297 "GetDP.y"
    { yyval.c = "Hypot";  ;}
    break;

  case 674:
#line 6298 "GetDP.y"
    { yyval.c = yyvsp[0].c;       ;}
    break;

  case 675:
#line 6302 "GetDP.y"
    { yyval.d = yyvsp[0].d ;          ;}
    break;

  case 676:
#line 6303 "GetDP.y"
    { yyval.d = yyvsp[-1].d ;          ;}
    break;

  case 677:
#line 6304 "GetDP.y"
    { yyval.d = -yyvsp[0].d ;         ;}
    break;

  case 678:
#line 6305 "GetDP.y"
    { yyval.d = !yyvsp[0].d ;         ;}
    break;

  case 679:
#line 6306 "GetDP.y"
    { yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;}
    break;

  case 680:
#line 6307 "GetDP.y"
    { yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;}
    break;

  case 681:
#line 6308 "GetDP.y"
    { yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;}
    break;

  case 682:
#line 6309 "GetDP.y"
    { yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;}
    break;

  case 683:
#line 6310 "GetDP.y"
    { yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;}
    break;

  case 684:
#line 6311 "GetDP.y"
    { yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;}
    break;

  case 685:
#line 6312 "GetDP.y"
    { yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;}
    break;

  case 686:
#line 6313 "GetDP.y"
    { yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;}
    break;

  case 687:
#line 6314 "GetDP.y"
    { yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;}
    break;

  case 688:
#line 6315 "GetDP.y"
    { yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;}
    break;

  case 689:
#line 6316 "GetDP.y"
    { yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;}
    break;

  case 690:
#line 6317 "GetDP.y"
    { yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;}
    break;

  case 691:
#line 6318 "GetDP.y"
    { yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;}
    break;

  case 692:
#line 6319 "GetDP.y"
    { yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;}
    break;

  case 693:
#line 6320 "GetDP.y"
    { yyval.d = exp(yyvsp[-1].d);      ;}
    break;

  case 694:
#line 6321 "GetDP.y"
    { yyval.d = log(yyvsp[-1].d);      ;}
    break;

  case 695:
#line 6322 "GetDP.y"
    { yyval.d = log10(yyvsp[-1].d);    ;}
    break;

  case 696:
#line 6323 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-1].d);     ;}
    break;

  case 697:
#line 6324 "GetDP.y"
    { yyval.d = sin(yyvsp[-1].d);      ;}
    break;

  case 698:
#line 6325 "GetDP.y"
    { yyval.d = asin(yyvsp[-1].d);     ;}
    break;

  case 699:
#line 6326 "GetDP.y"
    { yyval.d = cos(yyvsp[-1].d);      ;}
    break;

  case 700:
#line 6327 "GetDP.y"
    { yyval.d = acos(yyvsp[-1].d);     ;}
    break;

  case 701:
#line 6328 "GetDP.y"
    { yyval.d = tan(yyvsp[-1].d);      ;}
    break;

  case 702:
#line 6329 "GetDP.y"
    { yyval.d = atan(yyvsp[-1].d);     ;}
    break;

  case 703:
#line 6330 "GetDP.y"
    { yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;}
    break;

  case 704:
#line 6331 "GetDP.y"
    { yyval.d = sinh(yyvsp[-1].d);     ;}
    break;

  case 705:
#line 6332 "GetDP.y"
    { yyval.d = cosh(yyvsp[-1].d);     ;}
    break;

  case 706:
#line 6333 "GetDP.y"
    { yyval.d = tanh(yyvsp[-1].d);     ;}
    break;

  case 707:
#line 6334 "GetDP.y"
    { yyval.d = fabs(yyvsp[-1].d);     ;}
    break;

  case 708:
#line 6335 "GetDP.y"
    { yyval.d = floor(yyvsp[-1].d);    ;}
    break;

  case 709:
#line 6336 "GetDP.y"
    { yyval.d = ceil(yyvsp[-1].d);     ;}
    break;

  case 710:
#line 6337 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 711:
#line 6338 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 712:
#line 6339 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;}
    break;

  case 713:
#line 6343 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;}
    break;

  case 714:
#line 6348 "GetDP.y"
    { yyval.d = yyvsp[0].d ; ;}
    break;

  case 715:
#line 6349 "GetDP.y"
    { yyval.d = (double)yyvsp[0].i ; ;}
    break;

  case 716:
#line 6350 "GetDP.y"
    { yyval.d = 3.1415926535897932 ; ;}
    break;

  case 717:
#line 6351 "GetDP.y"
    { yyval.d = (double)_0D ; ;}
    break;

  case 718:
#line 6352 "GetDP.y"
    { yyval.d = (double)_1D ; ;}
    break;

  case 719:
#line 6353 "GetDP.y"
    { yyval.d = (double)_2D ; ;}
    break;

  case 720:
#line 6354 "GetDP.y"
    { yyval.d = (double)_3D ; ;}
    break;

  case 721:
#line 6356 "GetDP.y"
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

  case 722:
#line 6374 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 723:
#line 6377 "GetDP.y"
    { 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 724:
#line 6383 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 725:
#line 6386 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 726:
#line 6393 "GetDP.y"
    { 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 727:
#line 6399 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 728:
#line 6402 "GetDP.y"
    { List_Add(yyval.l, &(yyvsp[0].d)) ; ;}
    break;

  case 729:
#line 6405 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 730:
#line 6417 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;}
    break;

  case 731:
#line 6423 "GetDP.y"
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

  case 732:
#line 6434 "GetDP.y"
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

  case 733:
#line 6450 "GetDP.y"
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

  case 734:
#line 6472 "GetDP.y"
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

  case 735:
#line 6487 "GetDP.y"
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

  case 736:
#line 6525 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 737:
#line 6533 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 738:
#line 6545 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;}
    break;

  case 739:
#line 6553 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;}
    break;

  case 740:
#line 6564 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 741:
#line 6567 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 742:
#line 6574 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 743:
#line 6577 "GetDP.y"
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

  case 744:
#line 6592 "GetDP.y"
    {
      yyval.c = yyvsp[0].c ;
    ;}
    break;

  case 745:
#line 6597 "GetDP.y"
    {
      yyval.c = yyvsp[-1].c;
    ;}
    break;

  case 746:
#line 6602 "GetDP.y"
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

  case 747:
#line 6621 "GetDP.y"
    {
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;}
    break;

  case 748:
#line 6631 "GetDP.y"
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
#line 11400 "GetDP.tab.c"

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


#line 6642 "GetDP.y"



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


