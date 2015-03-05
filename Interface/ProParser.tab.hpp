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
     tWhile = 278,
     tFlag = 279,
     tInclude = 280,
     tConstant = 281,
     tList = 282,
     tListAlt = 283,
     tLinSpace = 284,
     tLogSpace = 285,
     tListFromFile = 286,
     tChangeCurrentPosition = 287,
     tDefineConstant = 288,
     tUndefineConstant = 289,
     tDefineNumber = 290,
     tDefineString = 291,
     tPi = 292,
     tMPI_Rank = 293,
     tMPI_Size = 294,
     t0D = 295,
     t1D = 296,
     t2D = 297,
     t3D = 298,
     tTotalMemory = 299,
     tGETDP_MAJOR_VERSION = 300,
     tGETDP_MINOR_VERSION = 301,
     tGETDP_PATCH_VERSION = 302,
     tExp = 303,
     tLog = 304,
     tLog10 = 305,
     tSqrt = 306,
     tSin = 307,
     tAsin = 308,
     tCos = 309,
     tAcos = 310,
     tTan = 311,
     tAtan = 312,
     tAtan2 = 313,
     tSinh = 314,
     tCosh = 315,
     tTanh = 316,
     tFabs = 317,
     tFloor = 318,
     tCeil = 319,
     tRound = 320,
     tSign = 321,
     tFmod = 322,
     tModulo = 323,
     tHypot = 324,
     tRand = 325,
     tSolidAngle = 326,
     tTrace = 327,
     tOrder = 328,
     tCrossProduct = 329,
     tDofValue = 330,
     tMHTransform = 331,
     tMHJacNL = 332,
     tGroup = 333,
     tDefineGroup = 334,
     tAll = 335,
     tInSupport = 336,
     tMovingBand2D = 337,
     tDefineFunction = 338,
     tConstraint = 339,
     tRegion = 340,
     tSubRegion = 341,
     tRegionRef = 342,
     tSubRegionRef = 343,
     tFilter = 344,
     tToleranceFactor = 345,
     tCoefficient = 346,
     tValue = 347,
     tTimeFunction = 348,
     tBranch = 349,
     tNameOfResolution = 350,
     tJacobian = 351,
     tCase = 352,
     tMetricTensor = 353,
     tIntegration = 354,
     tMatrix = 355,
     tType = 356,
     tSubType = 357,
     tCriterion = 358,
     tGeoElement = 359,
     tNumberOfPoints = 360,
     tMaxNumberOfPoints = 361,
     tNumberOfDivisions = 362,
     tMaxNumberOfDivisions = 363,
     tStoppingCriterion = 364,
     tFunctionSpace = 365,
     tName = 366,
     tBasisFunction = 367,
     tNameOfCoef = 368,
     tFunction = 369,
     tdFunction = 370,
     tSubFunction = 371,
     tSubdFunction = 372,
     tSupport = 373,
     tEntity = 374,
     tSubSpace = 375,
     tNameOfBasisFunction = 376,
     tGlobalQuantity = 377,
     tEntityType = 378,
     tEntitySubType = 379,
     tNameOfConstraint = 380,
     tFormulation = 381,
     tQuantity = 382,
     tNameOfSpace = 383,
     tIndexOfSystem = 384,
     tSymmetry = 385,
     tGalerkin = 386,
     tdeRham = 387,
     tGlobalTerm = 388,
     tGlobalEquation = 389,
     tDt = 390,
     tDtDof = 391,
     tDtDt = 392,
     tDtDtDof = 393,
     tDtDtDtDof = 394,
     tDtDtDtDtDof = 395,
     tDtDtDtDtDtDof = 396,
     tJacNL = 397,
     tDtDofJacNL = 398,
     tNeverDt = 399,
     tDtNL = 400,
     tAtAnteriorTimeStep = 401,
     tMaxOverTime = 402,
     tFourierSteinmetz = 403,
     tIn = 404,
     tFull_Matrix = 405,
     tResolution = 406,
     tHidden = 407,
     tDefineSystem = 408,
     tNameOfFormulation = 409,
     tNameOfMesh = 410,
     tFrequency = 411,
     tSolver = 412,
     tOriginSystem = 413,
     tDestinationSystem = 414,
     tOperation = 415,
     tOperationEnd = 416,
     tSetTime = 417,
     tSetTimeStep = 418,
     tDTime = 419,
     tSetFrequency = 420,
     tFourierTransform = 421,
     tFourierTransformJ = 422,
     tLanczos = 423,
     tEigenSolve = 424,
     tEigenSolveJac = 425,
     tPerturbation = 426,
     tUpdate = 427,
     tUpdateConstraint = 428,
     tBreak = 429,
     tEvaluate = 430,
     tSelectCorrection = 431,
     tAddCorrection = 432,
     tMultiplySolution = 433,
     tAddOppositeFullSolution = 434,
     tSolveAgainWithOther = 435,
     tSetGlobalSolverOptions = 436,
     tTimeLoopTheta = 437,
     tTimeLoopNewmark = 438,
     tTimeLoopRungeKutta = 439,
     tTimeLoopAdaptive = 440,
     tTime0 = 441,
     tTimeMax = 442,
     tTheta = 443,
     tBeta = 444,
     tGamma = 445,
     tIterativeLoop = 446,
     tIterativeLoopN = 447,
     tIterativeLinearSolver = 448,
     tNbrMaxIteration = 449,
     tRelaxationFactor = 450,
     tIterativeTimeReduction = 451,
     tSetCommSelf = 452,
     tSetCommWorld = 453,
     tBarrier = 454,
     tBroadcastFields = 455,
     tDivisionCoefficient = 456,
     tChangeOfState = 457,
     tChangeOfCoordinates = 458,
     tChangeOfCoordinates2 = 459,
     tSystemCommand = 460,
     tGmshRead = 461,
     tGmshMerge = 462,
     tGmshOpen = 463,
     tGmshWrite = 464,
     tGmshClearAll = 465,
     tDeleteFile = 466,
     tRenameFile = 467,
     tCreateDir = 468,
     tGenerateOnly = 469,
     tGenerateOnlyJac = 470,
     tSolveJac_AdaptRelax = 471,
     tSaveSolutionExtendedMH = 472,
     tSaveSolutionMHtoTime = 473,
     tSaveSolutionWithEntityNum = 474,
     tInitMovingBand2D = 475,
     tMeshMovingBand2D = 476,
     tGenerateMHMoving = 477,
     tGenerateMHMovingSeparate = 478,
     tAddMHMoving = 479,
     tGenerateGroup = 480,
     tGenerateJacGroup = 481,
     tGenerateRHSGroup = 482,
     tGenerateGroupCumulative = 483,
     tGenerateJacGroupCumulative = 484,
     tGenerateRHSGroupCumulative = 485,
     tSaveMesh = 486,
     tDeformMesh = 487,
     tFrequencySpectrum = 488,
     tPostProcessing = 489,
     tNameOfSystem = 490,
     tPostOperation = 491,
     tNameOfPostProcessing = 492,
     tUsingPost = 493,
     tAppend = 494,
     tResampleTime = 495,
     tPlot = 496,
     tPrint = 497,
     tPrintGroup = 498,
     tEcho = 499,
     tSendMergeFileRequest = 500,
     tWrite = 501,
     tAdapt = 502,
     tOnGlobal = 503,
     tOnRegion = 504,
     tOnElementsOf = 505,
     tOnGrid = 506,
     tOnSection = 507,
     tOnPoint = 508,
     tOnLine = 509,
     tOnPlane = 510,
     tOnBox = 511,
     tWithArgument = 512,
     tFile = 513,
     tDepth = 514,
     tDimension = 515,
     tComma = 516,
     tTimeStep = 517,
     tHarmonicToTime = 518,
     tCosineTransform = 519,
     tValueIndex = 520,
     tValueName = 521,
     tFormat = 522,
     tHeader = 523,
     tFooter = 524,
     tSkin = 525,
     tSmoothing = 526,
     tTarget = 527,
     tSort = 528,
     tIso = 529,
     tNoNewLine = 530,
     tNoTitle = 531,
     tDecomposeInSimplex = 532,
     tChangeOfValues = 533,
     tTimeLegend = 534,
     tFrequencyLegend = 535,
     tEigenvalueLegend = 536,
     tEvaluationPoints = 537,
     tStoreInRegister = 538,
     tStoreInField = 539,
     tStoreInMeshBasedField = 540,
     tStoreMaxInRegister = 541,
     tStoreMaxXinRegister = 542,
     tStoreMaxYinRegister = 543,
     tStoreMaxZinRegister = 544,
     tStoreMinInRegister = 545,
     tStoreMinXinRegister = 546,
     tStoreMinYinRegister = 547,
     tStoreMinZinRegister = 548,
     tLastTimeStepOnly = 549,
     tAppendTimeStepToFileName = 550,
     tTimeValue = 551,
     tTimeImagValue = 552,
     tOverrideTimeStepValue = 553,
     tNoMesh = 554,
     tSendToServer = 555,
     tColor = 556,
     tStr = 557,
     tDate = 558,
     tFixRelativePath = 559,
     tNewCoordinates = 560,
     tAppendToExistingFile = 561,
     tDEF = 562,
     tOR = 563,
     tAND = 564,
     tAPPROXEQUAL = 565,
     tNOTEQUAL = 566,
     tEQUAL = 567,
     tGREATERGREATER = 568,
     tLESSLESS = 569,
     tGREATEROREQUAL = 570,
     tLESSOREQUAL = 571,
     tCROSSPRODUCT = 572,
     UNARYPREC = 573,
     tSHOW = 574
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
#line 385 "ProParser.tab.hpp"
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
