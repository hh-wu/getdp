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
     tDelete = 473,
     tDeleteFile = 474,
     tRenameFile = 475,
     tCreateDir = 476,
     tGenerateOnly = 477,
     tGenerateOnlyJac = 478,
     tSolveJac_AdaptRelax = 479,
     tSaveSolutionExtendedMH = 480,
     tSaveSolutionMHtoTime = 481,
     tSaveSolutionWithEntityNum = 482,
     tInitMovingBand2D = 483,
     tMeshMovingBand2D = 484,
     tGenerateMHMoving = 485,
     tGenerateMHMovingSeparate = 486,
     tAddMHMoving = 487,
     tGenerateGroup = 488,
     tGenerateJacGroup = 489,
     tGenerateRHSGroup = 490,
     tGenerateGroupCumulative = 491,
     tGenerateJacGroupCumulative = 492,
     tGenerateRHSGroupCumulative = 493,
     tSaveMesh = 494,
     tDeformMesh = 495,
     tFrequencySpectrum = 496,
     tPostProcessing = 497,
     tNameOfSystem = 498,
     tPostOperation = 499,
     tNameOfPostProcessing = 500,
     tUsingPost = 501,
     tAppend = 502,
     tResampleTime = 503,
     tPlot = 504,
     tPrint = 505,
     tPrintGroup = 506,
     tEcho = 507,
     tSendMergeFileRequest = 508,
     tWrite = 509,
     tAdapt = 510,
     tOnGlobal = 511,
     tOnRegion = 512,
     tOnElementsOf = 513,
     tOnGrid = 514,
     tOnSection = 515,
     tOnPoint = 516,
     tOnLine = 517,
     tOnPlane = 518,
     tOnBox = 519,
     tWithArgument = 520,
     tFile = 521,
     tDepth = 522,
     tDimension = 523,
     tComma = 524,
     tTimeStep = 525,
     tHarmonicToTime = 526,
     tCosineTransform = 527,
     tValueIndex = 528,
     tValueName = 529,
     tFormat = 530,
     tHeader = 531,
     tFooter = 532,
     tSkin = 533,
     tSmoothing = 534,
     tTarget = 535,
     tSort = 536,
     tIso = 537,
     tNoNewLine = 538,
     tNoTitle = 539,
     tDecomposeInSimplex = 540,
     tChangeOfValues = 541,
     tTimeLegend = 542,
     tFrequencyLegend = 543,
     tEigenvalueLegend = 544,
     tEvaluationPoints = 545,
     tStoreInRegister = 546,
     tStoreInVariable = 547,
     tStoreInField = 548,
     tStoreInMeshBasedField = 549,
     tStoreMaxInRegister = 550,
     tStoreMaxXinRegister = 551,
     tStoreMaxYinRegister = 552,
     tStoreMaxZinRegister = 553,
     tStoreMinInRegister = 554,
     tStoreMinXinRegister = 555,
     tStoreMinYinRegister = 556,
     tStoreMinZinRegister = 557,
     tLastTimeStepOnly = 558,
     tAppendTimeStepToFileName = 559,
     tTimeValue = 560,
     tTimeImagValue = 561,
     tAppendExpressionToFileName = 562,
     tAppendExpressionFormat = 563,
     tOverrideTimeStepValue = 564,
     tNoMesh = 565,
     tSendToServer = 566,
     tColor = 567,
     tStr = 568,
     tDate = 569,
     tOnelabAction = 570,
     tFixRelativePath = 571,
     tNewCoordinates = 572,
     tAppendToExistingFile = 573,
     tAppendStringToFileName = 574,
     tDEF = 575,
     tOR = 576,
     tAND = 577,
     tAPPROXEQUAL = 578,
     tNOTEQUAL = 579,
     tEQUAL = 580,
     tGREATERGREATER = 581,
     tLESSLESS = 582,
     tGREATEROREQUAL = 583,
     tLESSOREQUAL = 584,
     tCROSSPRODUCT = 585,
     UNARYPREC = 586,
     tSHOW = 587
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
#line 398 "ProParser.tab.hpp"
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
