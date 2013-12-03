/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_GETDP_YY_PROPARSER_TAB_HPP_INCLUDED
# define YY_GETDP_YY_PROPARSER_TAB_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int getdp_yydebug;
#endif

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
     tInclude = 277,
     tConstant = 278,
     tList = 279,
     tListAlt = 280,
     tLinSpace = 281,
     tLogSpace = 282,
     tListFromFile = 283,
     tChangeCurrentPosition = 284,
     tDefineConstant = 285,
     tUndefineConstant = 286,
     tPi = 287,
     tMPI_Rank = 288,
     tMPI_Size = 289,
     t0D = 290,
     t1D = 291,
     t2D = 292,
     t3D = 293,
     tExp = 294,
     tLog = 295,
     tLog10 = 296,
     tSqrt = 297,
     tSin = 298,
     tAsin = 299,
     tCos = 300,
     tAcos = 301,
     tTan = 302,
     tAtan = 303,
     tAtan2 = 304,
     tSinh = 305,
     tCosh = 306,
     tTanh = 307,
     tFabs = 308,
     tFloor = 309,
     tCeil = 310,
     tRound = 311,
     tSign = 312,
     tFmod = 313,
     tModulo = 314,
     tHypot = 315,
     tRand = 316,
     tSolidAngle = 317,
     tTrace = 318,
     tOrder = 319,
     tCrossProduct = 320,
     tDofValue = 321,
     tMHTransform = 322,
     tMHJacNL = 323,
     tGroup = 324,
     tDefineGroup = 325,
     tAll = 326,
     tInSupport = 327,
     tMovingBand2D = 328,
     tDefineFunction = 329,
     tConstraint = 330,
     tRegion = 331,
     tSubRegion = 332,
     tRegionRef = 333,
     tSubRegionRef = 334,
     tFilter = 335,
     tCoefficient = 336,
     tValue = 337,
     tTimeFunction = 338,
     tBranch = 339,
     tNameOfResolution = 340,
     tJacobian = 341,
     tCase = 342,
     tMetricTensor = 343,
     tIntegration = 344,
     tMatrix = 345,
     tType = 346,
     tSubType = 347,
     tCriterion = 348,
     tGeoElement = 349,
     tNumberOfPoints = 350,
     tMaxNumberOfPoints = 351,
     tNumberOfDivisions = 352,
     tMaxNumberOfDivisions = 353,
     tStoppingCriterion = 354,
     tFunctionSpace = 355,
     tName = 356,
     tBasisFunction = 357,
     tNameOfCoef = 358,
     tFunction = 359,
     tdFunction = 360,
     tSubFunction = 361,
     tSubdFunction = 362,
     tSupport = 363,
     tEntity = 364,
     tSubSpace = 365,
     tNameOfBasisFunction = 366,
     tGlobalQuantity = 367,
     tEntityType = 368,
     tEntitySubType = 369,
     tNameOfConstraint = 370,
     tFormulation = 371,
     tQuantity = 372,
     tNameOfSpace = 373,
     tIndexOfSystem = 374,
     tSymmetry = 375,
     tGalerkin = 376,
     tdeRham = 377,
     tGlobalTerm = 378,
     tGlobalEquation = 379,
     tDt = 380,
     tDtDof = 381,
     tDtDt = 382,
     tDtDtDof = 383,
     tJacNL = 384,
     tDtDofJacNL = 385,
     tNeverDt = 386,
     tDtNL = 387,
     tAtAnteriorTimeStep = 388,
     tIn = 389,
     tFull_Matrix = 390,
     tResolution = 391,
     tDefineSystem = 392,
     tNameOfFormulation = 393,
     tNameOfMesh = 394,
     tFrequency = 395,
     tSolver = 396,
     tOriginSystem = 397,
     tDestinationSystem = 398,
     tOperation = 399,
     tOperationEnd = 400,
     tSetTime = 401,
     tDTime = 402,
     tSetFrequency = 403,
     tFourierTransform = 404,
     tFourierTransformJ = 405,
     tLanczos = 406,
     tEigenSolve = 407,
     tEigenSolveJac = 408,
     tPerturbation = 409,
     tUpdate = 410,
     tUpdateConstraint = 411,
     tBreak = 412,
     tEvaluate = 413,
     tSelectCorrection = 414,
     tAddCorrection = 415,
     tMultiplySolution = 416,
     tAddOppositeFullSolution = 417,
     tSolveAgainWithOther = 418,
     tSetGlobalSolverOptions = 419,
     tTimeLoopTheta = 420,
     tTimeLoopNewmark = 421,
     tTimeLoopRungeKutta = 422,
     tTimeLoopAdaptive = 423,
     tTime0 = 424,
     tTimeMax = 425,
     tTheta = 426,
     tBeta = 427,
     tGamma = 428,
     tIterativeLoop = 429,
     tIterativeLoopN = 430,
     tIterativeLinearSolver = 431,
     tNbrMaxIteration = 432,
     tRelaxationFactor = 433,
     tIterativeTimeReduction = 434,
     tSetCommSelf = 435,
     tSetCommWorld = 436,
     tBarrier = 437,
     tBroadcastFields = 438,
     tDivisionCoefficient = 439,
     tChangeOfState = 440,
     tChangeOfCoordinates = 441,
     tChangeOfCoordinates2 = 442,
     tSystemCommand = 443,
     tGmshRead = 444,
     tGmshClearAll = 445,
     tDeleteFile = 446,
     tCreateDir = 447,
     tGenerateOnly = 448,
     tGenerateOnlyJac = 449,
     tSolveJac_AdaptRelax = 450,
     tTensorProductSolve = 451,
     tSaveSolutionExtendedMH = 452,
     tSaveSolutionMHtoTime = 453,
     tSaveSolutionWithEntityNum = 454,
     tInitMovingBand2D = 455,
     tMeshMovingBand2D = 456,
     tGenerate_MH_Moving = 457,
     tGenerate_MH_Moving_Separate = 458,
     tAdd_MH_Moving = 459,
     tGenerateGroup = 460,
     tGenerateJacGroup = 461,
     tGenerateRHSGroup = 462,
     tSaveMesh = 463,
     tDeformeMesh = 464,
     tDummyFrequency = 465,
     tPostProcessing = 466,
     tNameOfSystem = 467,
     tPostOperation = 468,
     tNameOfPostProcessing = 469,
     tUsingPost = 470,
     tAppend = 471,
     tResampleTime = 472,
     tPlot = 473,
     tPrint = 474,
     tPrintGroup = 475,
     tEcho = 476,
     tWrite = 477,
     tAdapt = 478,
     tOnGlobal = 479,
     tOnRegion = 480,
     tOnElementsOf = 481,
     tOnGrid = 482,
     tOnSection = 483,
     tOnPoint = 484,
     tOnLine = 485,
     tOnPlane = 486,
     tOnBox = 487,
     tWithArgument = 488,
     tFile = 489,
     tDepth = 490,
     tDimension = 491,
     tComma = 492,
     tTimeStep = 493,
     tHarmonicToTime = 494,
     tValueIndex = 495,
     tValueName = 496,
     tFormat = 497,
     tHeader = 498,
     tFooter = 499,
     tSkin = 500,
     tSmoothing = 501,
     tTarget = 502,
     tSort = 503,
     tIso = 504,
     tNoNewLine = 505,
     tNoTitle = 506,
     tDecomposeInSimplex = 507,
     tChangeOfValues = 508,
     tTimeLegend = 509,
     tFrequencyLegend = 510,
     tEigenvalueLegend = 511,
     tEvaluationPoints = 512,
     tStoreInRegister = 513,
     tStoreInField = 514,
     tStoreMaxInRegister = 515,
     tStoreMaxXinRegister = 516,
     tStoreMaxYinRegister = 517,
     tStoreMaxZinRegister = 518,
     tStoreMinInRegister = 519,
     tStoreMinXinRegister = 520,
     tStoreMinYinRegister = 521,
     tStoreMinZinRegister = 522,
     tLastTimeStepOnly = 523,
     tAppendTimeStepToFileName = 524,
     tOverrideTimeStepValue = 525,
     tNoMesh = 526,
     tSendToServer = 527,
     tColor = 528,
     tStr = 529,
     tDate = 530,
     tNewCoordinates = 531,
     tDEF = 532,
     tOR = 533,
     tAND = 534,
     tAPPROXEQUAL = 535,
     tNOTEQUAL = 536,
     tEQUAL = 537,
     tGREATERGREATER = 538,
     tLESSLESS = 539,
     tGREATEROREQUAL = 540,
     tLESSOREQUAL = 541,
     tCROSSPRODUCT = 542,
     UNARYPREC = 543,
     tSHOW = 544
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 140 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;


/* Line 2053 of yacc.c  */
#line 355 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int getdp_yyparse (void *YYPARSE_PARAM);
#else
int getdp_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int getdp_yyparse (void);
#else
int getdp_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_GETDP_YY_PROPARSER_TAB_HPP_INCLUDED  */
