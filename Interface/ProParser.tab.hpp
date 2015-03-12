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
     tStrChoice = 271,
     tNbrRegions = 272,
     tGetRegion = 273,
     tFor = 274,
     tEndFor = 275,
     tIf = 276,
     tElse = 277,
     tEndIf = 278,
     tWhile = 279,
     tFlag = 280,
     tInclude = 281,
     tConstant = 282,
     tList = 283,
     tListAlt = 284,
     tLinSpace = 285,
     tLogSpace = 286,
     tListFromFile = 287,
     tChangeCurrentPosition = 288,
     tDefineConstant = 289,
     tUndefineConstant = 290,
     tDefineNumber = 291,
     tDefineString = 292,
     tPi = 293,
     tMPI_Rank = 294,
     tMPI_Size = 295,
     t0D = 296,
     t1D = 297,
     t2D = 298,
     t3D = 299,
     tTotalMemory = 300,
     tGETDP_MAJOR_VERSION = 301,
     tGETDP_MINOR_VERSION = 302,
     tGETDP_PATCH_VERSION = 303,
     tExp = 304,
     tLog = 305,
     tLog10 = 306,
     tSqrt = 307,
     tSin = 308,
     tAsin = 309,
     tCos = 310,
     tAcos = 311,
     tTan = 312,
     tAtan = 313,
     tAtan2 = 314,
     tSinh = 315,
     tCosh = 316,
     tTanh = 317,
     tFabs = 318,
     tFloor = 319,
     tCeil = 320,
     tRound = 321,
     tSign = 322,
     tFmod = 323,
     tModulo = 324,
     tHypot = 325,
     tRand = 326,
     tSolidAngle = 327,
     tTrace = 328,
     tOrder = 329,
     tCrossProduct = 330,
     tDofValue = 331,
     tMHTransform = 332,
     tMHJacNL = 333,
     tGroup = 334,
     tDefineGroup = 335,
     tAll = 336,
     tInSupport = 337,
     tMovingBand2D = 338,
     tDefineFunction = 339,
     tConstraint = 340,
     tRegion = 341,
     tSubRegion = 342,
     tRegionRef = 343,
     tSubRegionRef = 344,
     tFilter = 345,
     tToleranceFactor = 346,
     tCoefficient = 347,
     tValue = 348,
     tTimeFunction = 349,
     tBranch = 350,
     tNameOfResolution = 351,
     tJacobian = 352,
     tCase = 353,
     tMetricTensor = 354,
     tIntegration = 355,
     tMatrix = 356,
     tType = 357,
     tSubType = 358,
     tCriterion = 359,
     tGeoElement = 360,
     tNumberOfPoints = 361,
     tMaxNumberOfPoints = 362,
     tNumberOfDivisions = 363,
     tMaxNumberOfDivisions = 364,
     tStoppingCriterion = 365,
     tFunctionSpace = 366,
     tName = 367,
     tBasisFunction = 368,
     tNameOfCoef = 369,
     tFunction = 370,
     tdFunction = 371,
     tSubFunction = 372,
     tSubdFunction = 373,
     tSupport = 374,
     tEntity = 375,
     tSubSpace = 376,
     tNameOfBasisFunction = 377,
     tGlobalQuantity = 378,
     tEntityType = 379,
     tEntitySubType = 380,
     tNameOfConstraint = 381,
     tFormulation = 382,
     tQuantity = 383,
     tNameOfSpace = 384,
     tIndexOfSystem = 385,
     tSymmetry = 386,
     tGalerkin = 387,
     tdeRham = 388,
     tGlobalTerm = 389,
     tGlobalEquation = 390,
     tDt = 391,
     tDtDof = 392,
     tDtDt = 393,
     tDtDtDof = 394,
     tDtDtDtDof = 395,
     tDtDtDtDtDof = 396,
     tDtDtDtDtDtDof = 397,
     tJacNL = 398,
     tDtDofJacNL = 399,
     tNeverDt = 400,
     tDtNL = 401,
     tAtAnteriorTimeStep = 402,
     tMaxOverTime = 403,
     tFourierSteinmetz = 404,
     tIn = 405,
     tFull_Matrix = 406,
     tResolution = 407,
     tHidden = 408,
     tDefineSystem = 409,
     tNameOfFormulation = 410,
     tNameOfMesh = 411,
     tFrequency = 412,
     tSolver = 413,
     tOriginSystem = 414,
     tDestinationSystem = 415,
     tOperation = 416,
     tOperationEnd = 417,
     tSetTime = 418,
     tSetTimeStep = 419,
     tDTime = 420,
     tSetFrequency = 421,
     tFourierTransform = 422,
     tFourierTransformJ = 423,
     tLanczos = 424,
     tEigenSolve = 425,
     tEigenSolveJac = 426,
     tPerturbation = 427,
     tUpdate = 428,
     tUpdateConstraint = 429,
     tBreak = 430,
     tEvaluate = 431,
     tSelectCorrection = 432,
     tAddCorrection = 433,
     tMultiplySolution = 434,
     tAddOppositeFullSolution = 435,
     tSolveAgainWithOther = 436,
     tSetGlobalSolverOptions = 437,
     tTimeLoopTheta = 438,
     tTimeLoopNewmark = 439,
     tTimeLoopRungeKutta = 440,
     tTimeLoopAdaptive = 441,
     tTime0 = 442,
     tTimeMax = 443,
     tTheta = 444,
     tBeta = 445,
     tGamma = 446,
     tIterativeLoop = 447,
     tIterativeLoopN = 448,
     tIterativeLinearSolver = 449,
     tNbrMaxIteration = 450,
     tRelaxationFactor = 451,
     tIterativeTimeReduction = 452,
     tSetCommSelf = 453,
     tSetCommWorld = 454,
     tBarrier = 455,
     tBroadcastFields = 456,
     tDivisionCoefficient = 457,
     tChangeOfState = 458,
     tChangeOfCoordinates = 459,
     tChangeOfCoordinates2 = 460,
     tSystemCommand = 461,
     tGmshRead = 462,
     tGmshMerge = 463,
     tGmshOpen = 464,
     tGmshWrite = 465,
     tGmshClearAll = 466,
     tDeleteFile = 467,
     tRenameFile = 468,
     tCreateDir = 469,
     tGenerateOnly = 470,
     tGenerateOnlyJac = 471,
     tSolveJac_AdaptRelax = 472,
     tSaveSolutionExtendedMH = 473,
     tSaveSolutionMHtoTime = 474,
     tSaveSolutionWithEntityNum = 475,
     tInitMovingBand2D = 476,
     tMeshMovingBand2D = 477,
     tGenerateMHMoving = 478,
     tGenerateMHMovingSeparate = 479,
     tAddMHMoving = 480,
     tGenerateGroup = 481,
     tGenerateJacGroup = 482,
     tGenerateRHSGroup = 483,
     tGenerateGroupCumulative = 484,
     tGenerateJacGroupCumulative = 485,
     tGenerateRHSGroupCumulative = 486,
     tSaveMesh = 487,
     tDeformMesh = 488,
     tFrequencySpectrum = 489,
     tPostProcessing = 490,
     tNameOfSystem = 491,
     tPostOperation = 492,
     tNameOfPostProcessing = 493,
     tUsingPost = 494,
     tAppend = 495,
     tResampleTime = 496,
     tPlot = 497,
     tPrint = 498,
     tPrintGroup = 499,
     tEcho = 500,
     tSendMergeFileRequest = 501,
     tWrite = 502,
     tAdapt = 503,
     tOnGlobal = 504,
     tOnRegion = 505,
     tOnElementsOf = 506,
     tOnGrid = 507,
     tOnSection = 508,
     tOnPoint = 509,
     tOnLine = 510,
     tOnPlane = 511,
     tOnBox = 512,
     tWithArgument = 513,
     tFile = 514,
     tDepth = 515,
     tDimension = 516,
     tComma = 517,
     tTimeStep = 518,
     tHarmonicToTime = 519,
     tCosineTransform = 520,
     tValueIndex = 521,
     tValueName = 522,
     tFormat = 523,
     tHeader = 524,
     tFooter = 525,
     tSkin = 526,
     tSmoothing = 527,
     tTarget = 528,
     tSort = 529,
     tIso = 530,
     tNoNewLine = 531,
     tNoTitle = 532,
     tDecomposeInSimplex = 533,
     tChangeOfValues = 534,
     tTimeLegend = 535,
     tFrequencyLegend = 536,
     tEigenvalueLegend = 537,
     tEvaluationPoints = 538,
     tStoreInRegister = 539,
     tStoreInField = 540,
     tStoreInMeshBasedField = 541,
     tStoreMaxInRegister = 542,
     tStoreMaxXinRegister = 543,
     tStoreMaxYinRegister = 544,
     tStoreMaxZinRegister = 545,
     tStoreMinInRegister = 546,
     tStoreMinXinRegister = 547,
     tStoreMinYinRegister = 548,
     tStoreMinZinRegister = 549,
     tLastTimeStepOnly = 550,
     tAppendTimeStepToFileName = 551,
     tTimeValue = 552,
     tTimeImagValue = 553,
     tOverrideTimeStepValue = 554,
     tNoMesh = 555,
     tSendToServer = 556,
     tColor = 557,
     tStr = 558,
     tDate = 559,
     tFixRelativePath = 560,
     tNewCoordinates = 561,
     tAppendToExistingFile = 562,
     tDEF = 563,
     tOR = 564,
     tAND = 565,
     tAPPROXEQUAL = 566,
     tNOTEQUAL = 567,
     tEQUAL = 568,
     tGREATERGREATER = 569,
     tLESSLESS = 570,
     tGREATEROREQUAL = 571,
     tLESSOREQUAL = 572,
     tCROSSPRODUCT = 573,
     UNARYPREC = 574,
     tSHOW = 575
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 142 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;


/* Line 2053 of yacc.c  */
#line 386 "ProParser.tab.hpp"
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
