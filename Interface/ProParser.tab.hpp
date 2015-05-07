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
     tGETDP_MAJOR_VERSION = 304,
     tGETDP_MINOR_VERSION = 305,
     tGETDP_PATCH_VERSION = 306,
     tExp = 307,
     tLog = 308,
     tLog10 = 309,
     tSqrt = 310,
     tSin = 311,
     tAsin = 312,
     tCos = 313,
     tAcos = 314,
     tTan = 315,
     tAtan = 316,
     tAtan2 = 317,
     tSinh = 318,
     tCosh = 319,
     tTanh = 320,
     tFabs = 321,
     tFloor = 322,
     tCeil = 323,
     tRound = 324,
     tSign = 325,
     tFmod = 326,
     tModulo = 327,
     tHypot = 328,
     tRand = 329,
     tSolidAngle = 330,
     tTrace = 331,
     tOrder = 332,
     tCrossProduct = 333,
     tDofValue = 334,
     tMHTransform = 335,
     tMHJacNL = 336,
     tGroup = 337,
     tDefineGroup = 338,
     tAll = 339,
     tInSupport = 340,
     tMovingBand2D = 341,
     tDefineFunction = 342,
     tConstraint = 343,
     tRegion = 344,
     tSubRegion = 345,
     tRegionRef = 346,
     tSubRegionRef = 347,
     tFilter = 348,
     tToleranceFactor = 349,
     tCoefficient = 350,
     tValue = 351,
     tTimeFunction = 352,
     tBranch = 353,
     tNameOfResolution = 354,
     tJacobian = 355,
     tCase = 356,
     tMetricTensor = 357,
     tIntegration = 358,
     tMatrix = 359,
     tType = 360,
     tSubType = 361,
     tCriterion = 362,
     tGeoElement = 363,
     tNumberOfPoints = 364,
     tMaxNumberOfPoints = 365,
     tNumberOfDivisions = 366,
     tMaxNumberOfDivisions = 367,
     tStoppingCriterion = 368,
     tFunctionSpace = 369,
     tName = 370,
     tBasisFunction = 371,
     tNameOfCoef = 372,
     tFunction = 373,
     tdFunction = 374,
     tSubFunction = 375,
     tSubdFunction = 376,
     tSupport = 377,
     tEntity = 378,
     tSubSpace = 379,
     tNameOfBasisFunction = 380,
     tGlobalQuantity = 381,
     tEntityType = 382,
     tEntitySubType = 383,
     tNameOfConstraint = 384,
     tFormulation = 385,
     tQuantity = 386,
     tNameOfSpace = 387,
     tIndexOfSystem = 388,
     tSymmetry = 389,
     tGalerkin = 390,
     tdeRham = 391,
     tGlobalTerm = 392,
     tGlobalEquation = 393,
     tDt = 394,
     tDtDof = 395,
     tDtDt = 396,
     tDtDtDof = 397,
     tDtDtDtDof = 398,
     tDtDtDtDtDof = 399,
     tDtDtDtDtDtDof = 400,
     tJacNL = 401,
     tDtDofJacNL = 402,
     tNeverDt = 403,
     tDtNL = 404,
     tAtAnteriorTimeStep = 405,
     tMaxOverTime = 406,
     tFourierSteinmetz = 407,
     tIn = 408,
     tFull_Matrix = 409,
     tResolution = 410,
     tHidden = 411,
     tDefineSystem = 412,
     tNameOfFormulation = 413,
     tNameOfMesh = 414,
     tFrequency = 415,
     tSolver = 416,
     tOriginSystem = 417,
     tDestinationSystem = 418,
     tOperation = 419,
     tOperationEnd = 420,
     tSetTime = 421,
     tSetTimeStep = 422,
     tDTime = 423,
     tSetFrequency = 424,
     tFourierTransform = 425,
     tFourierTransformJ = 426,
     tLanczos = 427,
     tEigenSolve = 428,
     tEigenSolveJac = 429,
     tPerturbation = 430,
     tUpdate = 431,
     tUpdateConstraint = 432,
     tBreak = 433,
     tEvaluate = 434,
     tSelectCorrection = 435,
     tAddCorrection = 436,
     tMultiplySolution = 437,
     tAddOppositeFullSolution = 438,
     tSolveAgainWithOther = 439,
     tSetGlobalSolverOptions = 440,
     tTimeLoopTheta = 441,
     tTimeLoopNewmark = 442,
     tTimeLoopRungeKutta = 443,
     tTimeLoopAdaptive = 444,
     tTime0 = 445,
     tTimeMax = 446,
     tTheta = 447,
     tBeta = 448,
     tGamma = 449,
     tIterativeLoop = 450,
     tIterativeLoopN = 451,
     tIterativeLinearSolver = 452,
     tNbrMaxIteration = 453,
     tRelaxationFactor = 454,
     tIterativeTimeReduction = 455,
     tSetCommSelf = 456,
     tSetCommWorld = 457,
     tBarrier = 458,
     tBroadcastFields = 459,
     tDivisionCoefficient = 460,
     tChangeOfState = 461,
     tChangeOfCoordinates = 462,
     tChangeOfCoordinates2 = 463,
     tSystemCommand = 464,
     tGmshRead = 465,
     tGmshMerge = 466,
     tGmshOpen = 467,
     tGmshWrite = 468,
     tGmshClearAll = 469,
     tDeleteFile = 470,
     tRenameFile = 471,
     tCreateDir = 472,
     tGenerateOnly = 473,
     tGenerateOnlyJac = 474,
     tSolveJac_AdaptRelax = 475,
     tSaveSolutionExtendedMH = 476,
     tSaveSolutionMHtoTime = 477,
     tSaveSolutionWithEntityNum = 478,
     tInitMovingBand2D = 479,
     tMeshMovingBand2D = 480,
     tGenerateMHMoving = 481,
     tGenerateMHMovingSeparate = 482,
     tAddMHMoving = 483,
     tGenerateGroup = 484,
     tGenerateJacGroup = 485,
     tGenerateRHSGroup = 486,
     tGenerateGroupCumulative = 487,
     tGenerateJacGroupCumulative = 488,
     tGenerateRHSGroupCumulative = 489,
     tSaveMesh = 490,
     tDeformMesh = 491,
     tFrequencySpectrum = 492,
     tPostProcessing = 493,
     tNameOfSystem = 494,
     tPostOperation = 495,
     tNameOfPostProcessing = 496,
     tUsingPost = 497,
     tAppend = 498,
     tResampleTime = 499,
     tPlot = 500,
     tPrint = 501,
     tPrintGroup = 502,
     tEcho = 503,
     tSendMergeFileRequest = 504,
     tWrite = 505,
     tAdapt = 506,
     tOnGlobal = 507,
     tOnRegion = 508,
     tOnElementsOf = 509,
     tOnGrid = 510,
     tOnSection = 511,
     tOnPoint = 512,
     tOnLine = 513,
     tOnPlane = 514,
     tOnBox = 515,
     tWithArgument = 516,
     tFile = 517,
     tDepth = 518,
     tDimension = 519,
     tComma = 520,
     tTimeStep = 521,
     tHarmonicToTime = 522,
     tCosineTransform = 523,
     tValueIndex = 524,
     tValueName = 525,
     tFormat = 526,
     tHeader = 527,
     tFooter = 528,
     tSkin = 529,
     tSmoothing = 530,
     tTarget = 531,
     tSort = 532,
     tIso = 533,
     tNoNewLine = 534,
     tNoTitle = 535,
     tDecomposeInSimplex = 536,
     tChangeOfValues = 537,
     tTimeLegend = 538,
     tFrequencyLegend = 539,
     tEigenvalueLegend = 540,
     tEvaluationPoints = 541,
     tStoreInRegister = 542,
     tStoreInVariable = 543,
     tStoreInField = 544,
     tStoreInMeshBasedField = 545,
     tStoreMaxInRegister = 546,
     tStoreMaxXinRegister = 547,
     tStoreMaxYinRegister = 548,
     tStoreMaxZinRegister = 549,
     tStoreMinInRegister = 550,
     tStoreMinXinRegister = 551,
     tStoreMinYinRegister = 552,
     tStoreMinZinRegister = 553,
     tLastTimeStepOnly = 554,
     tAppendTimeStepToFileName = 555,
     tTimeValue = 556,
     tTimeImagValue = 557,
     tOverrideTimeStepValue = 558,
     tNoMesh = 559,
     tSendToServer = 560,
     tColor = 561,
     tStr = 562,
     tDate = 563,
     tFixRelativePath = 564,
     tNewCoordinates = 565,
     tAppendToExistingFile = 566,
     tDEF = 567,
     tOR = 568,
     tAND = 569,
     tAPPROXEQUAL = 570,
     tNOTEQUAL = 571,
     tEQUAL = 572,
     tGREATERGREATER = 573,
     tLESSLESS = 574,
     tGREATEROREQUAL = 575,
     tLESSOREQUAL = 576,
     tCROSSPRODUCT = 577,
     UNARYPREC = 578,
     tSHOW = 579
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
#line 390 "ProParser.tab.hpp"
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
