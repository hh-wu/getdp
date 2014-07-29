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
     tHidden = 397,
     tDefineSystem = 398,
     tNameOfFormulation = 399,
     tNameOfMesh = 400,
     tFrequency = 401,
     tSolver = 402,
     tOriginSystem = 403,
     tDestinationSystem = 404,
     tOperation = 405,
     tOperationEnd = 406,
     tSetTime = 407,
     tDTime = 408,
     tSetFrequency = 409,
     tFourierTransform = 410,
     tFourierTransformJ = 411,
     tLanczos = 412,
     tEigenSolve = 413,
     tEigenSolveJac = 414,
     tPerturbation = 415,
     tUpdate = 416,
     tUpdateConstraint = 417,
     tBreak = 418,
     tEvaluate = 419,
     tSelectCorrection = 420,
     tAddCorrection = 421,
     tMultiplySolution = 422,
     tAddOppositeFullSolution = 423,
     tSolveAgainWithOther = 424,
     tSetGlobalSolverOptions = 425,
     tTimeLoopTheta = 426,
     tTimeLoopNewmark = 427,
     tTimeLoopRungeKutta = 428,
     tTimeLoopAdaptive = 429,
     tTime0 = 430,
     tTimeMax = 431,
     tTheta = 432,
     tBeta = 433,
     tGamma = 434,
     tIterativeLoop = 435,
     tIterativeLoopN = 436,
     tIterativeLinearSolver = 437,
     tNbrMaxIteration = 438,
     tRelaxationFactor = 439,
     tIterativeTimeReduction = 440,
     tSetCommSelf = 441,
     tSetCommWorld = 442,
     tBarrier = 443,
     tBroadcastFields = 444,
     tDivisionCoefficient = 445,
     tChangeOfState = 446,
     tChangeOfCoordinates = 447,
     tChangeOfCoordinates2 = 448,
     tSystemCommand = 449,
     tGmshRead = 450,
     tGmshMerge = 451,
     tGmshOpen = 452,
     tGmshWrite = 453,
     tGmshClearAll = 454,
     tDeleteFile = 455,
     tCreateDir = 456,
     tGenerateOnly = 457,
     tGenerateOnlyJac = 458,
     tSolveJac_AdaptRelax = 459,
     tSaveSolutionExtendedMH = 460,
     tSaveSolutionMHtoTime = 461,
     tSaveSolutionWithEntityNum = 462,
     tInitMovingBand2D = 463,
     tMeshMovingBand2D = 464,
     tGenerateMHMoving = 465,
     tGenerateMHMovingSeparate = 466,
     tAddMHMoving = 467,
     tGenerateGroup = 468,
     tGenerateJacGroup = 469,
     tGenerateRHSGroup = 470,
     tGenerateGroupCumulative = 471,
     tGenerateJacGroupCumulative = 472,
     tGenerateRHSGroupCumulative = 473,
     tSaveMesh = 474,
     tDeformMesh = 475,
     tFrequencySpectrum = 476,
     tPostProcessing = 477,
     tNameOfSystem = 478,
     tPostOperation = 479,
     tNameOfPostProcessing = 480,
     tUsingPost = 481,
     tAppend = 482,
     tResampleTime = 483,
     tPlot = 484,
     tPrint = 485,
     tPrintGroup = 486,
     tEcho = 487,
     tSendMergeFileRequest = 488,
     tWrite = 489,
     tAdapt = 490,
     tOnGlobal = 491,
     tOnRegion = 492,
     tOnElementsOf = 493,
     tOnGrid = 494,
     tOnSection = 495,
     tOnPoint = 496,
     tOnLine = 497,
     tOnPlane = 498,
     tOnBox = 499,
     tWithArgument = 500,
     tFile = 501,
     tDepth = 502,
     tDimension = 503,
     tComma = 504,
     tTimeStep = 505,
     tHarmonicToTime = 506,
     tCosineTransform = 507,
     tValueIndex = 508,
     tValueName = 509,
     tFormat = 510,
     tHeader = 511,
     tFooter = 512,
     tSkin = 513,
     tSmoothing = 514,
     tTarget = 515,
     tSort = 516,
     tIso = 517,
     tNoNewLine = 518,
     tNoTitle = 519,
     tDecomposeInSimplex = 520,
     tChangeOfValues = 521,
     tTimeLegend = 522,
     tFrequencyLegend = 523,
     tEigenvalueLegend = 524,
     tEvaluationPoints = 525,
     tStoreInRegister = 526,
     tStoreInField = 527,
     tStoreInMeshBasedField = 528,
     tStoreMaxInRegister = 529,
     tStoreMaxXinRegister = 530,
     tStoreMaxYinRegister = 531,
     tStoreMaxZinRegister = 532,
     tStoreMinInRegister = 533,
     tStoreMinXinRegister = 534,
     tStoreMinYinRegister = 535,
     tStoreMinZinRegister = 536,
     tLastTimeStepOnly = 537,
     tAppendTimeStepToFileName = 538,
     tOverrideTimeStepValue = 539,
     tNoMesh = 540,
     tSendToServer = 541,
     tColor = 542,
     tStr = 543,
     tDate = 544,
     tNewCoordinates = 545,
     tDEF = 546,
     tOR = 547,
     tAND = 548,
     tAPPROXEQUAL = 549,
     tNOTEQUAL = 550,
     tEQUAL = 551,
     tGREATERGREATER = 552,
     tLESSLESS = 553,
     tGREATEROREQUAL = 554,
     tLESSOREQUAL = 555,
     tCROSSPRODUCT = 556,
     UNARYPREC = 557,
     tSHOW = 558
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
#line 369 "ProParser.tab.hpp"
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
