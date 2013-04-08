/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
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
     tSign = 311,
     tFmod = 312,
     tModulo = 313,
     tHypot = 314,
     tRand = 315,
     tSolidAngle = 316,
     tTrace = 317,
     tOrder = 318,
     tCrossProduct = 319,
     tDofValue = 320,
     tMHTransform = 321,
     tMHJacNL = 322,
     tGroup = 323,
     tDefineGroup = 324,
     tAll = 325,
     tInSupport = 326,
     tMovingBand2D = 327,
     tDefineFunction = 328,
     tConstraint = 329,
     tRegion = 330,
     tSubRegion = 331,
     tRegionRef = 332,
     tSubRegionRef = 333,
     tFilter = 334,
     tCoefficient = 335,
     tValue = 336,
     tTimeFunction = 337,
     tBranch = 338,
     tNameOfResolution = 339,
     tJacobian = 340,
     tCase = 341,
     tMetricTensor = 342,
     tIntegration = 343,
     tMatrix = 344,
     tType = 345,
     tSubType = 346,
     tCriterion = 347,
     tGeoElement = 348,
     tNumberOfPoints = 349,
     tMaxNumberOfPoints = 350,
     tNumberOfDivisions = 351,
     tMaxNumberOfDivisions = 352,
     tStoppingCriterion = 353,
     tFunctionSpace = 354,
     tName = 355,
     tBasisFunction = 356,
     tNameOfCoef = 357,
     tFunction = 358,
     tdFunction = 359,
     tSubFunction = 360,
     tSubdFunction = 361,
     tSupport = 362,
     tEntity = 363,
     tSubSpace = 364,
     tNameOfBasisFunction = 365,
     tGlobalQuantity = 366,
     tEntityType = 367,
     tEntitySubType = 368,
     tNameOfConstraint = 369,
     tFormulation = 370,
     tQuantity = 371,
     tNameOfSpace = 372,
     tIndexOfSystem = 373,
     tSymmetry = 374,
     tGalerkin = 375,
     tdeRham = 376,
     tGlobalTerm = 377,
     tGlobalEquation = 378,
     tDt = 379,
     tDtDof = 380,
     tDtDt = 381,
     tDtDtDof = 382,
     tJacNL = 383,
     tDtDofJacNL = 384,
     tNeverDt = 385,
     tDtNL = 386,
     tAtAnteriorTimeStep = 387,
     tIn = 388,
     tFull_Matrix = 389,
     tResolution = 390,
     tDefineSystem = 391,
     tNameOfFormulation = 392,
     tNameOfMesh = 393,
     tFrequency = 394,
     tSolver = 395,
     tOriginSystem = 396,
     tDestinationSystem = 397,
     tOperation = 398,
     tOperationEnd = 399,
     tSetTime = 400,
     tDTime = 401,
     tSetFrequency = 402,
     tFourierTransform = 403,
     tFourierTransformJ = 404,
     tLanczos = 405,
     tEigenSolve = 406,
     tEigenSolveJac = 407,
     tPerturbation = 408,
     tUpdate = 409,
     tUpdateConstraint = 410,
     tBreak = 411,
     tEvaluate = 412,
     tSelectCorrection = 413,
     tAddCorrection = 414,
     tMultiplySolution = 415,
     tAddOppositeFullSolution = 416,
     tTimeLoopTheta = 417,
     tTimeLoopNewmark = 418,
     tTimeLoopRungeKutta = 419,
     tTimeLoopAdaptive = 420,
     tTime0 = 421,
     tTimeMax = 422,
     tTheta = 423,
     tBeta = 424,
     tGamma = 425,
     tIterativeLoop = 426,
     tIterativeLoopN = 427,
     tIterativeLinearSolver = 428,
     tNbrMaxIteration = 429,
     tRelaxationFactor = 430,
     tIterativeTimeReduction = 431,
     tSetCommSelf = 432,
     tSetCommWorld = 433,
     tBarrier = 434,
     tDivisionCoefficient = 435,
     tChangeOfState = 436,
     tChangeOfCoordinates = 437,
     tChangeOfCoordinates2 = 438,
     tSystemCommand = 439,
     tGmshRead = 440,
     tGmshClearAll = 441,
     tDeleteFile = 442,
     tCreateDir = 443,
     tGenerateOnly = 444,
     tGenerateOnlyJac = 445,
     tSolveJac_AdaptRelax = 446,
     tTensorProductSolve = 447,
     tSaveSolutionExtendedMH = 448,
     tSaveSolutionMHtoTime = 449,
     tSaveSolutionWithEntityNum = 450,
     tInitMovingBand2D = 451,
     tMeshMovingBand2D = 452,
     tGenerate_MH_Moving = 453,
     tGenerate_MH_Moving_Separate = 454,
     tAdd_MH_Moving = 455,
     tGenerateGroup = 456,
     tGenerateJacGroup = 457,
     tGenerateRHSGroup = 458,
     tSaveMesh = 459,
     tDeformeMesh = 460,
     tDummyFrequency = 461,
     tPostProcessing = 462,
     tNameOfSystem = 463,
     tPostOperation = 464,
     tNameOfPostProcessing = 465,
     tUsingPost = 466,
     tAppend = 467,
     tResampleTime = 468,
     tPlot = 469,
     tPrint = 470,
     tPrintGroup = 471,
     tEcho = 472,
     tWrite = 473,
     tAdapt = 474,
     tOnGlobal = 475,
     tOnRegion = 476,
     tOnElementsOf = 477,
     tOnGrid = 478,
     tOnSection = 479,
     tOnPoint = 480,
     tOnLine = 481,
     tOnPlane = 482,
     tOnBox = 483,
     tWithArgument = 484,
     tFile = 485,
     tDepth = 486,
     tDimension = 487,
     tComma = 488,
     tTimeStep = 489,
     tHarmonicToTime = 490,
     tValueIndex = 491,
     tValueName = 492,
     tFormat = 493,
     tHeader = 494,
     tFooter = 495,
     tSkin = 496,
     tSmoothing = 497,
     tTarget = 498,
     tSort = 499,
     tIso = 500,
     tNoNewLine = 501,
     tNoTitle = 502,
     tDecomposeInSimplex = 503,
     tChangeOfValues = 504,
     tTimeLegend = 505,
     tFrequencyLegend = 506,
     tEigenvalueLegend = 507,
     tEvaluationPoints = 508,
     tStoreInRegister = 509,
     tStoreInField = 510,
     tLastTimeStepOnly = 511,
     tAppendTimeStepToFileName = 512,
     tOverrideTimeStepValue = 513,
     tNoMesh = 514,
     tSendToServer = 515,
     tColor = 516,
     tStr = 517,
     tDate = 518,
     tNewCoordinates = 519,
     tDEF = 520,
     tOR = 521,
     tAND = 522,
     tAPPROXEQUAL = 523,
     tNOTEQUAL = 524,
     tEQUAL = 525,
     tGREATERGREATER = 526,
     tLESSLESS = 527,
     tGREATEROREQUAL = 528,
     tLESSOREQUAL = 529,
     tCROSSPRODUCT = 530,
     UNARYPREC = 531,
     tSHOW = 532
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 130 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;



/* Line 1685 of yacc.c  */
#line 338 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;


