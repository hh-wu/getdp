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
     tDtDtDtDof = 389,
     tDtDtDtDtDof = 390,
     tDtDtDtDtDtDof = 391,
     tJacNL = 392,
     tDtDofJacNL = 393,
     tNeverDt = 394,
     tDtNL = 395,
     tAtAnteriorTimeStep = 396,
     tIn = 397,
     tFull_Matrix = 398,
     tResolution = 399,
     tHidden = 400,
     tDefineSystem = 401,
     tNameOfFormulation = 402,
     tNameOfMesh = 403,
     tFrequency = 404,
     tSolver = 405,
     tOriginSystem = 406,
     tDestinationSystem = 407,
     tOperation = 408,
     tOperationEnd = 409,
     tSetTime = 410,
     tDTime = 411,
     tSetFrequency = 412,
     tFourierTransform = 413,
     tFourierTransformJ = 414,
     tLanczos = 415,
     tEigenSolve = 416,
     tEigenSolveJac = 417,
     tPerturbation = 418,
     tUpdate = 419,
     tUpdateConstraint = 420,
     tBreak = 421,
     tEvaluate = 422,
     tSelectCorrection = 423,
     tAddCorrection = 424,
     tMultiplySolution = 425,
     tAddOppositeFullSolution = 426,
     tSolveAgainWithOther = 427,
     tSetGlobalSolverOptions = 428,
     tTimeLoopTheta = 429,
     tTimeLoopNewmark = 430,
     tTimeLoopRungeKutta = 431,
     tTimeLoopAdaptive = 432,
     tTime0 = 433,
     tTimeMax = 434,
     tTheta = 435,
     tBeta = 436,
     tGamma = 437,
     tIterativeLoop = 438,
     tIterativeLoopN = 439,
     tIterativeLinearSolver = 440,
     tNbrMaxIteration = 441,
     tRelaxationFactor = 442,
     tIterativeTimeReduction = 443,
     tSetCommSelf = 444,
     tSetCommWorld = 445,
     tBarrier = 446,
     tBroadcastFields = 447,
     tDivisionCoefficient = 448,
     tChangeOfState = 449,
     tChangeOfCoordinates = 450,
     tChangeOfCoordinates2 = 451,
     tSystemCommand = 452,
     tGmshRead = 453,
     tGmshMerge = 454,
     tGmshOpen = 455,
     tGmshWrite = 456,
     tGmshClearAll = 457,
     tDeleteFile = 458,
     tRenameFile = 459,
     tCreateDir = 460,
     tGenerateOnly = 461,
     tGenerateOnlyJac = 462,
     tSolveJac_AdaptRelax = 463,
     tSaveSolutionExtendedMH = 464,
     tSaveSolutionMHtoTime = 465,
     tSaveSolutionWithEntityNum = 466,
     tInitMovingBand2D = 467,
     tMeshMovingBand2D = 468,
     tGenerateMHMoving = 469,
     tGenerateMHMovingSeparate = 470,
     tAddMHMoving = 471,
     tGenerateGroup = 472,
     tGenerateJacGroup = 473,
     tGenerateRHSGroup = 474,
     tGenerateGroupCumulative = 475,
     tGenerateJacGroupCumulative = 476,
     tGenerateRHSGroupCumulative = 477,
     tSaveMesh = 478,
     tDeformMesh = 479,
     tFrequencySpectrum = 480,
     tPostProcessing = 481,
     tNameOfSystem = 482,
     tPostOperation = 483,
     tNameOfPostProcessing = 484,
     tUsingPost = 485,
     tAppend = 486,
     tResampleTime = 487,
     tPlot = 488,
     tPrint = 489,
     tPrintGroup = 490,
     tEcho = 491,
     tSendMergeFileRequest = 492,
     tWrite = 493,
     tAdapt = 494,
     tOnGlobal = 495,
     tOnRegion = 496,
     tOnElementsOf = 497,
     tOnGrid = 498,
     tOnSection = 499,
     tOnPoint = 500,
     tOnLine = 501,
     tOnPlane = 502,
     tOnBox = 503,
     tWithArgument = 504,
     tFile = 505,
     tDepth = 506,
     tDimension = 507,
     tComma = 508,
     tTimeStep = 509,
     tHarmonicToTime = 510,
     tCosineTransform = 511,
     tValueIndex = 512,
     tValueName = 513,
     tFormat = 514,
     tHeader = 515,
     tFooter = 516,
     tSkin = 517,
     tSmoothing = 518,
     tTarget = 519,
     tSort = 520,
     tIso = 521,
     tNoNewLine = 522,
     tNoTitle = 523,
     tDecomposeInSimplex = 524,
     tChangeOfValues = 525,
     tTimeLegend = 526,
     tFrequencyLegend = 527,
     tEigenvalueLegend = 528,
     tEvaluationPoints = 529,
     tStoreInRegister = 530,
     tStoreInField = 531,
     tStoreInMeshBasedField = 532,
     tStoreMaxInRegister = 533,
     tStoreMaxXinRegister = 534,
     tStoreMaxYinRegister = 535,
     tStoreMaxZinRegister = 536,
     tStoreMinInRegister = 537,
     tStoreMinXinRegister = 538,
     tStoreMinYinRegister = 539,
     tStoreMinZinRegister = 540,
     tLastTimeStepOnly = 541,
     tAppendTimeStepToFileName = 542,
     tTimeValue = 543,
     tTimeImagValue = 544,
     tOverrideTimeStepValue = 545,
     tNoMesh = 546,
     tSendToServer = 547,
     tColor = 548,
     tStr = 549,
     tDate = 550,
     tNewCoordinates = 551,
     tAppendToExistingFile = 552,
     tDEF = 553,
     tOR = 554,
     tAND = 555,
     tAPPROXEQUAL = 556,
     tNOTEQUAL = 557,
     tEQUAL = 558,
     tGREATERGREATER = 559,
     tLESSLESS = 560,
     tGREATEROREQUAL = 561,
     tLESSOREQUAL = 562,
     tCROSSPRODUCT = 563,
     UNARYPREC = 564,
     tSHOW = 565
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
#line 376 "ProParser.tab.hpp"
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
