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
     tMPI_Printf = 267,
     tRead = 268,
     tPrintConstants = 269,
     tStrCmp = 270,
     tNbrRegions = 271,
     tGetRegion = 272,
     tFor = 273,
     tEndFor = 274,
     tIf = 275,
     tElse = 276,
     tEndIf = 277,
     tFlag = 278,
     tInclude = 279,
     tConstant = 280,
     tList = 281,
     tListAlt = 282,
     tLinSpace = 283,
     tLogSpace = 284,
     tListFromFile = 285,
     tChangeCurrentPosition = 286,
     tDefineConstant = 287,
     tUndefineConstant = 288,
     tDefineNumber = 289,
     tDefineString = 290,
     tPi = 291,
     tMPI_Rank = 292,
     tMPI_Size = 293,
     t0D = 294,
     t1D = 295,
     t2D = 296,
     t3D = 297,
     tExp = 298,
     tLog = 299,
     tLog10 = 300,
     tSqrt = 301,
     tSin = 302,
     tAsin = 303,
     tCos = 304,
     tAcos = 305,
     tTan = 306,
     tAtan = 307,
     tAtan2 = 308,
     tSinh = 309,
     tCosh = 310,
     tTanh = 311,
     tFabs = 312,
     tFloor = 313,
     tCeil = 314,
     tRound = 315,
     tSign = 316,
     tFmod = 317,
     tModulo = 318,
     tHypot = 319,
     tRand = 320,
     tSolidAngle = 321,
     tTrace = 322,
     tOrder = 323,
     tCrossProduct = 324,
     tDofValue = 325,
     tMHTransform = 326,
     tMHJacNL = 327,
     tGroup = 328,
     tDefineGroup = 329,
     tAll = 330,
     tInSupport = 331,
     tMovingBand2D = 332,
     tDefineFunction = 333,
     tConstraint = 334,
     tRegion = 335,
     tSubRegion = 336,
     tRegionRef = 337,
     tSubRegionRef = 338,
     tFilter = 339,
     tToleranceFactor = 340,
     tCoefficient = 341,
     tValue = 342,
     tTimeFunction = 343,
     tBranch = 344,
     tNameOfResolution = 345,
     tJacobian = 346,
     tCase = 347,
     tMetricTensor = 348,
     tIntegration = 349,
     tMatrix = 350,
     tType = 351,
     tSubType = 352,
     tCriterion = 353,
     tGeoElement = 354,
     tNumberOfPoints = 355,
     tMaxNumberOfPoints = 356,
     tNumberOfDivisions = 357,
     tMaxNumberOfDivisions = 358,
     tStoppingCriterion = 359,
     tFunctionSpace = 360,
     tName = 361,
     tBasisFunction = 362,
     tNameOfCoef = 363,
     tFunction = 364,
     tdFunction = 365,
     tSubFunction = 366,
     tSubdFunction = 367,
     tSupport = 368,
     tEntity = 369,
     tSubSpace = 370,
     tNameOfBasisFunction = 371,
     tGlobalQuantity = 372,
     tEntityType = 373,
     tEntitySubType = 374,
     tNameOfConstraint = 375,
     tFormulation = 376,
     tQuantity = 377,
     tNameOfSpace = 378,
     tIndexOfSystem = 379,
     tSymmetry = 380,
     tGalerkin = 381,
     tdeRham = 382,
     tGlobalTerm = 383,
     tGlobalEquation = 384,
     tDt = 385,
     tDtDof = 386,
     tDtDt = 387,
     tDtDtDof = 388,
     tJacNL = 389,
     tDtDofJacNL = 390,
     tNeverDt = 391,
     tDtNL = 392,
     tAtAnteriorTimeStep = 393,
     tIn = 394,
     tFull_Matrix = 395,
     tResolution = 396,
     tDefineSystem = 397,
     tNameOfFormulation = 398,
     tNameOfMesh = 399,
     tFrequency = 400,
     tSolver = 401,
     tOriginSystem = 402,
     tDestinationSystem = 403,
     tOperation = 404,
     tOperationEnd = 405,
     tSetTime = 406,
     tDTime = 407,
     tSetFrequency = 408,
     tFourierTransform = 409,
     tFourierTransformJ = 410,
     tLanczos = 411,
     tEigenSolve = 412,
     tEigenSolveJac = 413,
     tPerturbation = 414,
     tUpdate = 415,
     tUpdateConstraint = 416,
     tBreak = 417,
     tEvaluate = 418,
     tSelectCorrection = 419,
     tAddCorrection = 420,
     tMultiplySolution = 421,
     tAddOppositeFullSolution = 422,
     tSolveAgainWithOther = 423,
     tSetGlobalSolverOptions = 424,
     tTimeLoopTheta = 425,
     tTimeLoopNewmark = 426,
     tTimeLoopRungeKutta = 427,
     tTimeLoopAdaptive = 428,
     tTime0 = 429,
     tTimeMax = 430,
     tTheta = 431,
     tBeta = 432,
     tGamma = 433,
     tIterativeLoop = 434,
     tIterativeLoopN = 435,
     tIterativeLinearSolver = 436,
     tNbrMaxIteration = 437,
     tRelaxationFactor = 438,
     tIterativeTimeReduction = 439,
     tSetCommSelf = 440,
     tSetCommWorld = 441,
     tBarrier = 442,
     tBroadcastFields = 443,
     tDivisionCoefficient = 444,
     tChangeOfState = 445,
     tChangeOfCoordinates = 446,
     tChangeOfCoordinates2 = 447,
     tSystemCommand = 448,
     tGmshRead = 449,
     tGmshMerge = 450,
     tGmshOpen = 451,
     tGmshWrite = 452,
     tGmshClearAll = 453,
     tDeleteFile = 454,
     tCreateDir = 455,
     tGenerateOnly = 456,
     tGenerateOnlyJac = 457,
     tSolveJac_AdaptRelax = 458,
     tSaveSolutionExtendedMH = 459,
     tSaveSolutionMHtoTime = 460,
     tSaveSolutionWithEntityNum = 461,
     tInitMovingBand2D = 462,
     tMeshMovingBand2D = 463,
     tGenerateMHMoving = 464,
     tGenerateMHMovingSeparate = 465,
     tAddMHMoving = 466,
     tGenerateGroup = 467,
     tGenerateJacGroup = 468,
     tGenerateRHSGroup = 469,
     tGenerateGroupCumulative = 470,
     tGenerateJacGroupCumulative = 471,
     tGenerateRHSGroupCumulative = 472,
     tSaveMesh = 473,
     tDeformMesh = 474,
     tFrequencySpectrum = 475,
     tPostProcessing = 476,
     tNameOfSystem = 477,
     tPostOperation = 478,
     tNameOfPostProcessing = 479,
     tUsingPost = 480,
     tAppend = 481,
     tResampleTime = 482,
     tPlot = 483,
     tPrint = 484,
     tPrintGroup = 485,
     tEcho = 486,
     tSendMergeFileRequest = 487,
     tWrite = 488,
     tAdapt = 489,
     tOnGlobal = 490,
     tOnRegion = 491,
     tOnElementsOf = 492,
     tOnGrid = 493,
     tOnSection = 494,
     tOnPoint = 495,
     tOnLine = 496,
     tOnPlane = 497,
     tOnBox = 498,
     tWithArgument = 499,
     tFile = 500,
     tDepth = 501,
     tDimension = 502,
     tComma = 503,
     tTimeStep = 504,
     tHarmonicToTime = 505,
     tCosineTransform = 506,
     tValueIndex = 507,
     tValueName = 508,
     tFormat = 509,
     tHeader = 510,
     tFooter = 511,
     tSkin = 512,
     tSmoothing = 513,
     tTarget = 514,
     tSort = 515,
     tIso = 516,
     tNoNewLine = 517,
     tNoTitle = 518,
     tDecomposeInSimplex = 519,
     tChangeOfValues = 520,
     tTimeLegend = 521,
     tFrequencyLegend = 522,
     tEigenvalueLegend = 523,
     tEvaluationPoints = 524,
     tStoreInRegister = 525,
     tStoreInField = 526,
     tStoreInMeshBasedField = 527,
     tStoreMaxInRegister = 528,
     tStoreMaxXinRegister = 529,
     tStoreMaxYinRegister = 530,
     tStoreMaxZinRegister = 531,
     tStoreMinInRegister = 532,
     tStoreMinXinRegister = 533,
     tStoreMinYinRegister = 534,
     tStoreMinZinRegister = 535,
     tLastTimeStepOnly = 536,
     tAppendTimeStepToFileName = 537,
     tOverrideTimeStepValue = 538,
     tNoMesh = 539,
     tSendToServer = 540,
     tColor = 541,
     tStr = 542,
     tDate = 543,
     tNewCoordinates = 544,
     tDEF = 545,
     tOR = 546,
     tAND = 547,
     tAPPROXEQUAL = 548,
     tNOTEQUAL = 549,
     tEQUAL = 550,
     tGREATERGREATER = 551,
     tLESSLESS = 552,
     tGREATEROREQUAL = 553,
     tLESSOREQUAL = 554,
     tCROSSPRODUCT = 555,
     UNARYPREC = 556,
     tSHOW = 557
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 141 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;


/* Line 2053 of yacc.c  */
#line 368 "ProParser.tab.hpp"
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
