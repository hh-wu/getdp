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
     tDTime = 418,
     tSetFrequency = 419,
     tFourierTransform = 420,
     tFourierTransformJ = 421,
     tLanczos = 422,
     tEigenSolve = 423,
     tEigenSolveJac = 424,
     tPerturbation = 425,
     tUpdate = 426,
     tUpdateConstraint = 427,
     tBreak = 428,
     tEvaluate = 429,
     tSelectCorrection = 430,
     tAddCorrection = 431,
     tMultiplySolution = 432,
     tAddOppositeFullSolution = 433,
     tSolveAgainWithOther = 434,
     tSetGlobalSolverOptions = 435,
     tTimeLoopTheta = 436,
     tTimeLoopNewmark = 437,
     tTimeLoopRungeKutta = 438,
     tTimeLoopAdaptive = 439,
     tTime0 = 440,
     tTimeMax = 441,
     tTheta = 442,
     tBeta = 443,
     tGamma = 444,
     tIterativeLoop = 445,
     tIterativeLoopN = 446,
     tIterativeLinearSolver = 447,
     tNbrMaxIteration = 448,
     tRelaxationFactor = 449,
     tIterativeTimeReduction = 450,
     tSetCommSelf = 451,
     tSetCommWorld = 452,
     tBarrier = 453,
     tBroadcastFields = 454,
     tDivisionCoefficient = 455,
     tChangeOfState = 456,
     tChangeOfCoordinates = 457,
     tChangeOfCoordinates2 = 458,
     tSystemCommand = 459,
     tGmshRead = 460,
     tGmshMerge = 461,
     tGmshOpen = 462,
     tGmshWrite = 463,
     tGmshClearAll = 464,
     tDeleteFile = 465,
     tRenameFile = 466,
     tCreateDir = 467,
     tGenerateOnly = 468,
     tGenerateOnlyJac = 469,
     tSolveJac_AdaptRelax = 470,
     tSaveSolutionExtendedMH = 471,
     tSaveSolutionMHtoTime = 472,
     tSaveSolutionWithEntityNum = 473,
     tInitMovingBand2D = 474,
     tMeshMovingBand2D = 475,
     tGenerateMHMoving = 476,
     tGenerateMHMovingSeparate = 477,
     tAddMHMoving = 478,
     tGenerateGroup = 479,
     tGenerateJacGroup = 480,
     tGenerateRHSGroup = 481,
     tGenerateGroupCumulative = 482,
     tGenerateJacGroupCumulative = 483,
     tGenerateRHSGroupCumulative = 484,
     tSaveMesh = 485,
     tDeformMesh = 486,
     tFrequencySpectrum = 487,
     tPostProcessing = 488,
     tNameOfSystem = 489,
     tPostOperation = 490,
     tNameOfPostProcessing = 491,
     tUsingPost = 492,
     tAppend = 493,
     tResampleTime = 494,
     tPlot = 495,
     tPrint = 496,
     tPrintGroup = 497,
     tEcho = 498,
     tSendMergeFileRequest = 499,
     tWrite = 500,
     tAdapt = 501,
     tOnGlobal = 502,
     tOnRegion = 503,
     tOnElementsOf = 504,
     tOnGrid = 505,
     tOnSection = 506,
     tOnPoint = 507,
     tOnLine = 508,
     tOnPlane = 509,
     tOnBox = 510,
     tWithArgument = 511,
     tFile = 512,
     tDepth = 513,
     tDimension = 514,
     tComma = 515,
     tTimeStep = 516,
     tHarmonicToTime = 517,
     tCosineTransform = 518,
     tValueIndex = 519,
     tValueName = 520,
     tFormat = 521,
     tHeader = 522,
     tFooter = 523,
     tSkin = 524,
     tSmoothing = 525,
     tTarget = 526,
     tSort = 527,
     tIso = 528,
     tNoNewLine = 529,
     tNoTitle = 530,
     tDecomposeInSimplex = 531,
     tChangeOfValues = 532,
     tTimeLegend = 533,
     tFrequencyLegend = 534,
     tEigenvalueLegend = 535,
     tEvaluationPoints = 536,
     tStoreInRegister = 537,
     tStoreInField = 538,
     tStoreInMeshBasedField = 539,
     tStoreMaxInRegister = 540,
     tStoreMaxXinRegister = 541,
     tStoreMaxYinRegister = 542,
     tStoreMaxZinRegister = 543,
     tStoreMinInRegister = 544,
     tStoreMinXinRegister = 545,
     tStoreMinYinRegister = 546,
     tStoreMinZinRegister = 547,
     tLastTimeStepOnly = 548,
     tAppendTimeStepToFileName = 549,
     tTimeValue = 550,
     tTimeImagValue = 551,
     tOverrideTimeStepValue = 552,
     tNoMesh = 553,
     tSendToServer = 554,
     tColor = 555,
     tStr = 556,
     tDate = 557,
     tNewCoordinates = 558,
     tAppendToExistingFile = 559,
     tDEF = 560,
     tOR = 561,
     tAND = 562,
     tAPPROXEQUAL = 563,
     tNOTEQUAL = 564,
     tEQUAL = 565,
     tGREATERGREATER = 566,
     tLESSLESS = 567,
     tGREATEROREQUAL = 568,
     tLESSOREQUAL = 569,
     tCROSSPRODUCT = 570,
     UNARYPREC = 571,
     tSHOW = 572
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
#line 383 "ProParser.tab.hpp"
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
