
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
     tRead = 267,
     tPrintConstants = 268,
     tStrCmp = 269,
     tNbrRegions = 270,
     tFor = 271,
     tEndFor = 272,
     tIf = 273,
     tElse = 274,
     tEndIf = 275,
     tFlag = 276,
     tInclude = 277,
     tConstant = 278,
     tList = 279,
     tListAlt = 280,
     tLinSpace = 281,
     tLogSpace = 282,
     tListFromFile = 283,
     tChangeCurrentPosition = 284,
     tDefineConstant = 285,
     tUndefineConstant = 286,
     tPi = 287,
     tMPI_Rank = 288,
     tMPI_Size = 289,
     t0D = 290,
     t1D = 291,
     t2D = 292,
     t3D = 293,
     tExp = 294,
     tLog = 295,
     tLog10 = 296,
     tSqrt = 297,
     tSin = 298,
     tAsin = 299,
     tCos = 300,
     tAcos = 301,
     tTan = 302,
     tAtan = 303,
     tAtan2 = 304,
     tSinh = 305,
     tCosh = 306,
     tTanh = 307,
     tFabs = 308,
     tFloor = 309,
     tCeil = 310,
     tRound = 311,
     tSign = 312,
     tFmod = 313,
     tModulo = 314,
     tHypot = 315,
     tRand = 316,
     tSolidAngle = 317,
     tTrace = 318,
     tOrder = 319,
     tCrossProduct = 320,
     tDofValue = 321,
     tMHTransform = 322,
     tMHJacNL = 323,
     tGroup = 324,
     tDefineGroup = 325,
     tAll = 326,
     tInSupport = 327,
     tMovingBand2D = 328,
     tDefineFunction = 329,
     tConstraint = 330,
     tRegion = 331,
     tSubRegion = 332,
     tRegionRef = 333,
     tSubRegionRef = 334,
     tFilter = 335,
     tCoefficient = 336,
     tValue = 337,
     tTimeFunction = 338,
     tBranch = 339,
     tNameOfResolution = 340,
     tJacobian = 341,
     tCase = 342,
     tMetricTensor = 343,
     tIntegration = 344,
     tMatrix = 345,
     tType = 346,
     tSubType = 347,
     tCriterion = 348,
     tGeoElement = 349,
     tNumberOfPoints = 350,
     tMaxNumberOfPoints = 351,
     tNumberOfDivisions = 352,
     tMaxNumberOfDivisions = 353,
     tStoppingCriterion = 354,
     tFunctionSpace = 355,
     tName = 356,
     tBasisFunction = 357,
     tNameOfCoef = 358,
     tFunction = 359,
     tdFunction = 360,
     tSubFunction = 361,
     tSubdFunction = 362,
     tSupport = 363,
     tEntity = 364,
     tSubSpace = 365,
     tNameOfBasisFunction = 366,
     tGlobalQuantity = 367,
     tEntityType = 368,
     tEntitySubType = 369,
     tNameOfConstraint = 370,
     tFormulation = 371,
     tQuantity = 372,
     tNameOfSpace = 373,
     tIndexOfSystem = 374,
     tSymmetry = 375,
     tGalerkin = 376,
     tdeRham = 377,
     tGlobalTerm = 378,
     tGlobalEquation = 379,
     tDt = 380,
     tDtDof = 381,
     tDtDt = 382,
     tDtDtDof = 383,
     tJacNL = 384,
     tDtDofJacNL = 385,
     tNeverDt = 386,
     tDtNL = 387,
     tAtAnteriorTimeStep = 388,
     tIn = 389,
     tFull_Matrix = 390,
     tResolution = 391,
     tDefineSystem = 392,
     tNameOfFormulation = 393,
     tNameOfMesh = 394,
     tFrequency = 395,
     tSolver = 396,
     tOriginSystem = 397,
     tDestinationSystem = 398,
     tOperation = 399,
     tOperationEnd = 400,
     tSetTime = 401,
     tDTime = 402,
     tSetFrequency = 403,
     tFourierTransform = 404,
     tFourierTransformJ = 405,
     tLanczos = 406,
     tEigenSolve = 407,
     tEigenSolveJac = 408,
     tPerturbation = 409,
     tUpdate = 410,
     tUpdateConstraint = 411,
     tBreak = 412,
     tEvaluate = 413,
     tSelectCorrection = 414,
     tAddCorrection = 415,
     tMultiplySolution = 416,
     tAddOppositeFullSolution = 417,
     tSolveAgainWithOther = 418,
     tSetGlobalSolverOptions = 419,
     tTimeLoopTheta = 420,
     tTimeLoopNewmark = 421,
     tTimeLoopRungeKutta = 422,
     tTimeLoopAdaptive = 423,
     tTime0 = 424,
     tTimeMax = 425,
     tTheta = 426,
     tBeta = 427,
     tGamma = 428,
     tIterativeLoop = 429,
     tIterativeLoopN = 430,
     tIterativeLinearSolver = 431,
     tNbrMaxIteration = 432,
     tRelaxationFactor = 433,
     tIterativeTimeReduction = 434,
     tSetCommSelf = 435,
     tSetCommWorld = 436,
     tBarrier = 437,
     tBroadcastFields = 438,
     tDivisionCoefficient = 439,
     tChangeOfState = 440,
     tChangeOfCoordinates = 441,
     tChangeOfCoordinates2 = 442,
     tSystemCommand = 443,
     tGmshRead = 444,
     tGmshMerge = 445,
     tGmshOpen = 446,
     tGmshWrite = 447,
     tGmshClearAll = 448,
     tDeleteFile = 449,
     tCreateDir = 450,
     tGenerateOnly = 451,
     tGenerateOnlyJac = 452,
     tSolveJac_AdaptRelax = 453,
     tTensorProductSolve = 454,
     tSaveSolutionExtendedMH = 455,
     tSaveSolutionMHtoTime = 456,
     tSaveSolutionWithEntityNum = 457,
     tInitMovingBand2D = 458,
     tMeshMovingBand2D = 459,
     tGenerate_MH_Moving = 460,
     tGenerate_MH_Moving_Separate = 461,
     tAdd_MH_Moving = 462,
     tGenerateGroup = 463,
     tGenerateJacGroup = 464,
     tGenerateRHSGroup = 465,
     tSaveMesh = 466,
     tDeformMesh = 467,
     tDummyFrequency = 468,
     tPostProcessing = 469,
     tNameOfSystem = 470,
     tPostOperation = 471,
     tNameOfPostProcessing = 472,
     tUsingPost = 473,
     tAppend = 474,
     tResampleTime = 475,
     tPlot = 476,
     tPrint = 477,
     tPrintGroup = 478,
     tEcho = 479,
     tWrite = 480,
     tAdapt = 481,
     tOnGlobal = 482,
     tOnRegion = 483,
     tOnElementsOf = 484,
     tOnGrid = 485,
     tOnSection = 486,
     tOnPoint = 487,
     tOnLine = 488,
     tOnPlane = 489,
     tOnBox = 490,
     tWithArgument = 491,
     tFile = 492,
     tDepth = 493,
     tDimension = 494,
     tComma = 495,
     tTimeStep = 496,
     tHarmonicToTime = 497,
     tValueIndex = 498,
     tValueName = 499,
     tFormat = 500,
     tHeader = 501,
     tFooter = 502,
     tSkin = 503,
     tSmoothing = 504,
     tTarget = 505,
     tSort = 506,
     tIso = 507,
     tNoNewLine = 508,
     tNoTitle = 509,
     tDecomposeInSimplex = 510,
     tChangeOfValues = 511,
     tTimeLegend = 512,
     tFrequencyLegend = 513,
     tEigenvalueLegend = 514,
     tEvaluationPoints = 515,
     tStoreInRegister = 516,
     tStoreInField = 517,
     tStoreInMeshBasedField = 518,
     tStoreMaxInRegister = 519,
     tStoreMaxXinRegister = 520,
     tStoreMaxYinRegister = 521,
     tStoreMaxZinRegister = 522,
     tStoreMinInRegister = 523,
     tStoreMinXinRegister = 524,
     tStoreMinYinRegister = 525,
     tStoreMinZinRegister = 526,
     tLastTimeStepOnly = 527,
     tAppendTimeStepToFileName = 528,
     tOverrideTimeStepValue = 529,
     tNoMesh = 530,
     tSendToServer = 531,
     tColor = 532,
     tStr = 533,
     tDate = 534,
     tNewCoordinates = 535,
     tDEF = 536,
     tOR = 537,
     tAND = 538,
     tAPPROXEQUAL = 539,
     tNOTEQUAL = 540,
     tEQUAL = 541,
     tGREATERGREATER = 542,
     tLESSLESS = 543,
     tGREATEROREQUAL = 544,
     tLESSOREQUAL = 545,
     tCROSSPRODUCT = 546,
     UNARYPREC = 547,
     tSHOW = 548
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 140 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;



/* Line 1676 of yacc.c  */
#line 355 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;


