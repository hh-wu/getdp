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
     tMacro = 280,
     tReturn = 281,
     tCall = 282,
     tFlag = 283,
     tInclude = 284,
     tConstant = 285,
     tList = 286,
     tListAlt = 287,
     tLinSpace = 288,
     tLogSpace = 289,
     tListFromFile = 290,
     tChangeCurrentPosition = 291,
     tDefineConstant = 292,
     tUndefineConstant = 293,
     tDefineNumber = 294,
     tDefineString = 295,
     tPi = 296,
     tMPI_Rank = 297,
     tMPI_Size = 298,
     t0D = 299,
     t1D = 300,
     t2D = 301,
     t3D = 302,
     tTotalMemory = 303,
     tCurrentDirectory = 304,
     tGETDP_MAJOR_VERSION = 305,
     tGETDP_MINOR_VERSION = 306,
     tGETDP_PATCH_VERSION = 307,
     tExp = 308,
     tLog = 309,
     tLog10 = 310,
     tSqrt = 311,
     tSin = 312,
     tAsin = 313,
     tCos = 314,
     tAcos = 315,
     tTan = 316,
     tAtan = 317,
     tAtan2 = 318,
     tSinh = 319,
     tCosh = 320,
     tTanh = 321,
     tFabs = 322,
     tFloor = 323,
     tCeil = 324,
     tRound = 325,
     tSign = 326,
     tFmod = 327,
     tModulo = 328,
     tHypot = 329,
     tRand = 330,
     tSolidAngle = 331,
     tTrace = 332,
     tOrder = 333,
     tCrossProduct = 334,
     tDofValue = 335,
     tMHTransform = 336,
     tMHJacNL = 337,
     tGroup = 338,
     tDefineGroup = 339,
     tAll = 340,
     tInSupport = 341,
     tMovingBand2D = 342,
     tDefineFunction = 343,
     tConstraint = 344,
     tRegion = 345,
     tSubRegion = 346,
     tRegionRef = 347,
     tSubRegionRef = 348,
     tFilter = 349,
     tToleranceFactor = 350,
     tCoefficient = 351,
     tValue = 352,
     tTimeFunction = 353,
     tBranch = 354,
     tNameOfResolution = 355,
     tJacobian = 356,
     tCase = 357,
     tMetricTensor = 358,
     tIntegration = 359,
     tMatrix = 360,
     tType = 361,
     tSubType = 362,
     tCriterion = 363,
     tGeoElement = 364,
     tNumberOfPoints = 365,
     tMaxNumberOfPoints = 366,
     tNumberOfDivisions = 367,
     tMaxNumberOfDivisions = 368,
     tStoppingCriterion = 369,
     tFunctionSpace = 370,
     tName = 371,
     tBasisFunction = 372,
     tNameOfCoef = 373,
     tFunction = 374,
     tdFunction = 375,
     tSubFunction = 376,
     tSubdFunction = 377,
     tSupport = 378,
     tEntity = 379,
     tSubSpace = 380,
     tNameOfBasisFunction = 381,
     tGlobalQuantity = 382,
     tEntityType = 383,
     tEntitySubType = 384,
     tNameOfConstraint = 385,
     tFormulation = 386,
     tQuantity = 387,
     tNameOfSpace = 388,
     tIndexOfSystem = 389,
     tSymmetry = 390,
     tGalerkin = 391,
     tdeRham = 392,
     tGlobalTerm = 393,
     tGlobalEquation = 394,
     tDt = 395,
     tDtDof = 396,
     tDtDt = 397,
     tDtDtDof = 398,
     tDtDtDtDof = 399,
     tDtDtDtDtDof = 400,
     tDtDtDtDtDtDof = 401,
     tJacNL = 402,
     tDtDofJacNL = 403,
     tNeverDt = 404,
     tDtNL = 405,
     tAtAnteriorTimeStep = 406,
     tMaxOverTime = 407,
     tFourierSteinmetz = 408,
     tIn = 409,
     tFull_Matrix = 410,
     tResolution = 411,
     tHidden = 412,
     tDefineSystem = 413,
     tNameOfFormulation = 414,
     tNameOfMesh = 415,
     tFrequency = 416,
     tSolver = 417,
     tOriginSystem = 418,
     tDestinationSystem = 419,
     tOperation = 420,
     tOperationEnd = 421,
     tSetTime = 422,
     tSetTimeStep = 423,
     tDTime = 424,
     tSetFrequency = 425,
     tFourierTransform = 426,
     tFourierTransformJ = 427,
     tLanczos = 428,
     tEigenSolve = 429,
     tEigenSolveJac = 430,
     tPerturbation = 431,
     tUpdate = 432,
     tUpdateConstraint = 433,
     tBreak = 434,
     tEvaluate = 435,
     tSelectCorrection = 436,
     tAddCorrection = 437,
     tMultiplySolution = 438,
     tAddOppositeFullSolution = 439,
     tSolveAgainWithOther = 440,
     tSetGlobalSolverOptions = 441,
     tTimeLoopTheta = 442,
     tTimeLoopNewmark = 443,
     tTimeLoopRungeKutta = 444,
     tTimeLoopAdaptive = 445,
     tTime0 = 446,
     tTimeMax = 447,
     tTheta = 448,
     tBeta = 449,
     tGamma = 450,
     tIterativeLoop = 451,
     tIterativeLoopN = 452,
     tIterativeLinearSolver = 453,
     tNbrMaxIteration = 454,
     tRelaxationFactor = 455,
     tIterativeTimeReduction = 456,
     tSetCommSelf = 457,
     tSetCommWorld = 458,
     tBarrier = 459,
     tBroadcastFields = 460,
     tSleep = 461,
     tDivisionCoefficient = 462,
     tChangeOfState = 463,
     tChangeOfCoordinates = 464,
     tChangeOfCoordinates2 = 465,
     tSystemCommand = 466,
     tError = 467,
     tGmshRead = 468,
     tGmshMerge = 469,
     tGmshOpen = 470,
     tGmshWrite = 471,
     tGmshClearAll = 472,
     tDeleteFile = 473,
     tRenameFile = 474,
     tCreateDir = 475,
     tGenerateOnly = 476,
     tGenerateOnlyJac = 477,
     tSolveJac_AdaptRelax = 478,
     tSaveSolutionExtendedMH = 479,
     tSaveSolutionMHtoTime = 480,
     tSaveSolutionWithEntityNum = 481,
     tInitMovingBand2D = 482,
     tMeshMovingBand2D = 483,
     tGenerateMHMoving = 484,
     tGenerateMHMovingSeparate = 485,
     tAddMHMoving = 486,
     tGenerateGroup = 487,
     tGenerateJacGroup = 488,
     tGenerateRHSGroup = 489,
     tGenerateGroupCumulative = 490,
     tGenerateJacGroupCumulative = 491,
     tGenerateRHSGroupCumulative = 492,
     tSaveMesh = 493,
     tDeformMesh = 494,
     tFrequencySpectrum = 495,
     tPostProcessing = 496,
     tNameOfSystem = 497,
     tPostOperation = 498,
     tNameOfPostProcessing = 499,
     tUsingPost = 500,
     tAppend = 501,
     tResampleTime = 502,
     tPlot = 503,
     tPrint = 504,
     tPrintGroup = 505,
     tEcho = 506,
     tSendMergeFileRequest = 507,
     tWrite = 508,
     tAdapt = 509,
     tOnGlobal = 510,
     tOnRegion = 511,
     tOnElementsOf = 512,
     tOnGrid = 513,
     tOnSection = 514,
     tOnPoint = 515,
     tOnLine = 516,
     tOnPlane = 517,
     tOnBox = 518,
     tWithArgument = 519,
     tFile = 520,
     tDepth = 521,
     tDimension = 522,
     tComma = 523,
     tTimeStep = 524,
     tHarmonicToTime = 525,
     tCosineTransform = 526,
     tValueIndex = 527,
     tValueName = 528,
     tFormat = 529,
     tHeader = 530,
     tFooter = 531,
     tSkin = 532,
     tSmoothing = 533,
     tTarget = 534,
     tSort = 535,
     tIso = 536,
     tNoNewLine = 537,
     tNoTitle = 538,
     tDecomposeInSimplex = 539,
     tChangeOfValues = 540,
     tTimeLegend = 541,
     tFrequencyLegend = 542,
     tEigenvalueLegend = 543,
     tEvaluationPoints = 544,
     tStoreInRegister = 545,
     tStoreInVariable = 546,
     tStoreInField = 547,
     tStoreInMeshBasedField = 548,
     tStoreMaxInRegister = 549,
     tStoreMaxXinRegister = 550,
     tStoreMaxYinRegister = 551,
     tStoreMaxZinRegister = 552,
     tStoreMinInRegister = 553,
     tStoreMinXinRegister = 554,
     tStoreMinYinRegister = 555,
     tStoreMinZinRegister = 556,
     tLastTimeStepOnly = 557,
     tAppendTimeStepToFileName = 558,
     tTimeValue = 559,
     tTimeImagValue = 560,
     tAppendExpressionToFileName = 561,
     tAppendExpressionFormat = 562,
     tOverrideTimeStepValue = 563,
     tNoMesh = 564,
     tSendToServer = 565,
     tColor = 566,
     tStr = 567,
     tDate = 568,
     tFixRelativePath = 569,
     tNewCoordinates = 570,
     tAppendToExistingFile = 571,
     tAppendStringToFileName = 572,
     tDEF = 573,
     tOR = 574,
     tAND = 575,
     tAPPROXEQUAL = 576,
     tNOTEQUAL = 577,
     tEQUAL = 578,
     tGREATERGREATER = 579,
     tLESSLESS = 580,
     tGREATEROREQUAL = 581,
     tLESSOREQUAL = 582,
     tCROSSPRODUCT = 583,
     UNARYPREC = 584,
     tSHOW = 585
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 143 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;


/* Line 2053 of yacc.c  */
#line 396 "ProParser.tab.hpp"
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
