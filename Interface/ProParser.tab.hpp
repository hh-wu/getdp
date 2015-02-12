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
     tExp = 299,
     tLog = 300,
     tLog10 = 301,
     tSqrt = 302,
     tSin = 303,
     tAsin = 304,
     tCos = 305,
     tAcos = 306,
     tTan = 307,
     tAtan = 308,
     tAtan2 = 309,
     tSinh = 310,
     tCosh = 311,
     tTanh = 312,
     tFabs = 313,
     tFloor = 314,
     tCeil = 315,
     tRound = 316,
     tSign = 317,
     tFmod = 318,
     tModulo = 319,
     tHypot = 320,
     tRand = 321,
     tSolidAngle = 322,
     tTrace = 323,
     tOrder = 324,
     tCrossProduct = 325,
     tDofValue = 326,
     tMHTransform = 327,
     tMHJacNL = 328,
     tGroup = 329,
     tDefineGroup = 330,
     tAll = 331,
     tInSupport = 332,
     tMovingBand2D = 333,
     tDefineFunction = 334,
     tConstraint = 335,
     tRegion = 336,
     tSubRegion = 337,
     tRegionRef = 338,
     tSubRegionRef = 339,
     tFilter = 340,
     tToleranceFactor = 341,
     tCoefficient = 342,
     tValue = 343,
     tTimeFunction = 344,
     tBranch = 345,
     tNameOfResolution = 346,
     tJacobian = 347,
     tCase = 348,
     tMetricTensor = 349,
     tIntegration = 350,
     tMatrix = 351,
     tType = 352,
     tSubType = 353,
     tCriterion = 354,
     tGeoElement = 355,
     tNumberOfPoints = 356,
     tMaxNumberOfPoints = 357,
     tNumberOfDivisions = 358,
     tMaxNumberOfDivisions = 359,
     tStoppingCriterion = 360,
     tFunctionSpace = 361,
     tName = 362,
     tBasisFunction = 363,
     tNameOfCoef = 364,
     tFunction = 365,
     tdFunction = 366,
     tSubFunction = 367,
     tSubdFunction = 368,
     tSupport = 369,
     tEntity = 370,
     tSubSpace = 371,
     tNameOfBasisFunction = 372,
     tGlobalQuantity = 373,
     tEntityType = 374,
     tEntitySubType = 375,
     tNameOfConstraint = 376,
     tFormulation = 377,
     tQuantity = 378,
     tNameOfSpace = 379,
     tIndexOfSystem = 380,
     tSymmetry = 381,
     tGalerkin = 382,
     tdeRham = 383,
     tGlobalTerm = 384,
     tGlobalEquation = 385,
     tDt = 386,
     tDtDof = 387,
     tDtDt = 388,
     tDtDtDof = 389,
     tDtDtDtDof = 390,
     tDtDtDtDtDof = 391,
     tDtDtDtDtDtDof = 392,
     tJacNL = 393,
     tDtDofJacNL = 394,
     tNeverDt = 395,
     tDtNL = 396,
     tAtAnteriorTimeStep = 397,
     tMaxOverTime = 398,
     tFourierSteinmetz = 399,
     tIn = 400,
     tFull_Matrix = 401,
     tResolution = 402,
     tHidden = 403,
     tDefineSystem = 404,
     tNameOfFormulation = 405,
     tNameOfMesh = 406,
     tFrequency = 407,
     tSolver = 408,
     tOriginSystem = 409,
     tDestinationSystem = 410,
     tOperation = 411,
     tOperationEnd = 412,
     tSetTime = 413,
     tDTime = 414,
     tSetFrequency = 415,
     tFourierTransform = 416,
     tFourierTransformJ = 417,
     tLanczos = 418,
     tEigenSolve = 419,
     tEigenSolveJac = 420,
     tPerturbation = 421,
     tUpdate = 422,
     tUpdateConstraint = 423,
     tBreak = 424,
     tEvaluate = 425,
     tSelectCorrection = 426,
     tAddCorrection = 427,
     tMultiplySolution = 428,
     tAddOppositeFullSolution = 429,
     tSolveAgainWithOther = 430,
     tSetGlobalSolverOptions = 431,
     tTimeLoopTheta = 432,
     tTimeLoopNewmark = 433,
     tTimeLoopRungeKutta = 434,
     tTimeLoopAdaptive = 435,
     tTime0 = 436,
     tTimeMax = 437,
     tTheta = 438,
     tBeta = 439,
     tGamma = 440,
     tIterativeLoop = 441,
     tIterativeLoopN = 442,
     tIterativeLinearSolver = 443,
     tNbrMaxIteration = 444,
     tRelaxationFactor = 445,
     tIterativeTimeReduction = 446,
     tSetCommSelf = 447,
     tSetCommWorld = 448,
     tBarrier = 449,
     tBroadcastFields = 450,
     tDivisionCoefficient = 451,
     tChangeOfState = 452,
     tChangeOfCoordinates = 453,
     tChangeOfCoordinates2 = 454,
     tSystemCommand = 455,
     tGmshRead = 456,
     tGmshMerge = 457,
     tGmshOpen = 458,
     tGmshWrite = 459,
     tGmshClearAll = 460,
     tDeleteFile = 461,
     tRenameFile = 462,
     tCreateDir = 463,
     tGenerateOnly = 464,
     tGenerateOnlyJac = 465,
     tSolveJac_AdaptRelax = 466,
     tSaveSolutionExtendedMH = 467,
     tSaveSolutionMHtoTime = 468,
     tSaveSolutionWithEntityNum = 469,
     tInitMovingBand2D = 470,
     tMeshMovingBand2D = 471,
     tGenerateMHMoving = 472,
     tGenerateMHMovingSeparate = 473,
     tAddMHMoving = 474,
     tGenerateGroup = 475,
     tGenerateJacGroup = 476,
     tGenerateRHSGroup = 477,
     tGenerateGroupCumulative = 478,
     tGenerateJacGroupCumulative = 479,
     tGenerateRHSGroupCumulative = 480,
     tSaveMesh = 481,
     tDeformMesh = 482,
     tFrequencySpectrum = 483,
     tPostProcessing = 484,
     tNameOfSystem = 485,
     tPostOperation = 486,
     tNameOfPostProcessing = 487,
     tUsingPost = 488,
     tAppend = 489,
     tResampleTime = 490,
     tPlot = 491,
     tPrint = 492,
     tPrintGroup = 493,
     tEcho = 494,
     tSendMergeFileRequest = 495,
     tWrite = 496,
     tAdapt = 497,
     tOnGlobal = 498,
     tOnRegion = 499,
     tOnElementsOf = 500,
     tOnGrid = 501,
     tOnSection = 502,
     tOnPoint = 503,
     tOnLine = 504,
     tOnPlane = 505,
     tOnBox = 506,
     tWithArgument = 507,
     tFile = 508,
     tDepth = 509,
     tDimension = 510,
     tComma = 511,
     tTimeStep = 512,
     tHarmonicToTime = 513,
     tCosineTransform = 514,
     tValueIndex = 515,
     tValueName = 516,
     tFormat = 517,
     tHeader = 518,
     tFooter = 519,
     tSkin = 520,
     tSmoothing = 521,
     tTarget = 522,
     tSort = 523,
     tIso = 524,
     tNoNewLine = 525,
     tNoTitle = 526,
     tDecomposeInSimplex = 527,
     tChangeOfValues = 528,
     tTimeLegend = 529,
     tFrequencyLegend = 530,
     tEigenvalueLegend = 531,
     tEvaluationPoints = 532,
     tStoreInRegister = 533,
     tStoreInField = 534,
     tStoreInMeshBasedField = 535,
     tStoreMaxInRegister = 536,
     tStoreMaxXinRegister = 537,
     tStoreMaxYinRegister = 538,
     tStoreMaxZinRegister = 539,
     tStoreMinInRegister = 540,
     tStoreMinXinRegister = 541,
     tStoreMinYinRegister = 542,
     tStoreMinZinRegister = 543,
     tLastTimeStepOnly = 544,
     tAppendTimeStepToFileName = 545,
     tTimeValue = 546,
     tTimeImagValue = 547,
     tOverrideTimeStepValue = 548,
     tNoMesh = 549,
     tSendToServer = 550,
     tColor = 551,
     tStr = 552,
     tDate = 553,
     tNewCoordinates = 554,
     tAppendToExistingFile = 555,
     tDEF = 556,
     tOR = 557,
     tAND = 558,
     tAPPROXEQUAL = 559,
     tNOTEQUAL = 560,
     tEQUAL = 561,
     tGREATERGREATER = 562,
     tLESSLESS = 563,
     tGREATEROREQUAL = 564,
     tLESSOREQUAL = 565,
     tCROSSPRODUCT = 566,
     UNARYPREC = 567,
     tSHOW = 568
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
#line 379 "ProParser.tab.hpp"
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
