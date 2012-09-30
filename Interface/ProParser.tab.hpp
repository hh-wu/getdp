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
     tPi = 286,
     t0D = 287,
     t1D = 288,
     t2D = 289,
     t3D = 290,
     tExp = 291,
     tLog = 292,
     tLog10 = 293,
     tSqrt = 294,
     tSin = 295,
     tAsin = 296,
     tCos = 297,
     tAcos = 298,
     tTan = 299,
     tAtan = 300,
     tAtan2 = 301,
     tSinh = 302,
     tCosh = 303,
     tTanh = 304,
     tFabs = 305,
     tFloor = 306,
     tCeil = 307,
     tSign = 308,
     tFmod = 309,
     tModulo = 310,
     tHypot = 311,
     tRand = 312,
     tSolidAngle = 313,
     tTrace = 314,
     tOrder = 315,
     tCrossProduct = 316,
     tDofValue = 317,
     tMHTransform = 318,
     tMHJacNL = 319,
     tGroup = 320,
     tDefineGroup = 321,
     tAll = 322,
     tInSupport = 323,
     tMovingBand2D = 324,
     tDefineFunction = 325,
     tConstraint = 326,
     tRegion = 327,
     tSubRegion = 328,
     tRegionRef = 329,
     tSubRegionRef = 330,
     tFilter = 331,
     tCoefficient = 332,
     tValue = 333,
     tTimeFunction = 334,
     tBranch = 335,
     tNameOfResolution = 336,
     tJacobian = 337,
     tCase = 338,
     tMetricTensor = 339,
     tIntegration = 340,
     tMatrix = 341,
     tType = 342,
     tSubType = 343,
     tCriterion = 344,
     tGeoElement = 345,
     tNumberOfPoints = 346,
     tMaxNumberOfPoints = 347,
     tNumberOfDivisions = 348,
     tMaxNumberOfDivisions = 349,
     tStoppingCriterion = 350,
     tFunctionSpace = 351,
     tName = 352,
     tBasisFunction = 353,
     tNameOfCoef = 354,
     tFunction = 355,
     tdFunction = 356,
     tSubFunction = 357,
     tSubdFunction = 358,
     tSupport = 359,
     tEntity = 360,
     tSubSpace = 361,
     tNameOfBasisFunction = 362,
     tGlobalQuantity = 363,
     tEntityType = 364,
     tEntitySubType = 365,
     tNameOfConstraint = 366,
     tFormulation = 367,
     tQuantity = 368,
     tNameOfSpace = 369,
     tIndexOfSystem = 370,
     tSymmetry = 371,
     tGalerkin = 372,
     tdeRham = 373,
     tGlobalTerm = 374,
     tGlobalEquation = 375,
     tDt = 376,
     tDtDof = 377,
     tDtDt = 378,
     tDtDtDof = 379,
     tJacNL = 380,
     tDtDofJacNL = 381,
     tNeverDt = 382,
     tDtNL = 383,
     tAtAnteriorTimeStep = 384,
     tIn = 385,
     tFull_Matrix = 386,
     tResolution = 387,
     tDefineSystem = 388,
     tNameOfFormulation = 389,
     tNameOfMesh = 390,
     tFrequency = 391,
     tSolver = 392,
     tOriginSystem = 393,
     tDestinationSystem = 394,
     tOperation = 395,
     tOperationEnd = 396,
     tSetTime = 397,
     tDTime = 398,
     tSetFrequency = 399,
     tFourierTransform = 400,
     tFourierTransformJ = 401,
     tLanczos = 402,
     tEigenSolve = 403,
     tEigenSolveJac = 404,
     tPerturbation = 405,
     tUpdate = 406,
     tUpdateConstraint = 407,
     tBreak = 408,
     tEvaluate = 409,
     tSelectCorrection = 410,
     tAddCorrection = 411,
     tMultiplySolution = 412,
     tAddOppositeFullSolution = 413,
     tTimeLoopTheta = 414,
     tTimeLoopNewmark = 415,
     tTimeLoopRungeKutta = 416,
     tTimeLoopAdaptive = 417,
     tTime0 = 418,
     tTimeMax = 419,
     tTheta = 420,
     tBeta = 421,
     tGamma = 422,
     tIterativeLoop = 423,
     tIterativeLoopN = 424,
     tIterativeLinearSolver = 425,
     tNbrMaxIteration = 426,
     tRelaxationFactor = 427,
     tIterativeTimeReduction = 428,
     tSetCommSelf = 429,
     tSetCommWorld = 430,
     tBarrier = 431,
     tDivisionCoefficient = 432,
     tChangeOfState = 433,
     tChangeOfCoordinates = 434,
     tChangeOfCoordinates2 = 435,
     tSystemCommand = 436,
     tGmshRead = 437,
     tGmshClearAll = 438,
     tGenerateOnly = 439,
     tGenerateOnlyJac = 440,
     tSolveJac_AdaptRelax = 441,
     tTensorProductSolve = 442,
     tSaveSolutionExtendedMH = 443,
     tSaveSolutionMHtoTime = 444,
     tSaveSolutionWithEntityNum = 445,
     tInitMovingBand2D = 446,
     tMeshMovingBand2D = 447,
     tGenerate_MH_Moving = 448,
     tGenerate_MH_Moving_Separate = 449,
     tAdd_MH_Moving = 450,
     tGenerateGroup = 451,
     tGenerateJacGroup = 452,
     tGenerateRHSGroup = 453,
     tSaveMesh = 454,
     tDeformeMesh = 455,
     tDummyFrequency = 456,
     tPostProcessing = 457,
     tNameOfSystem = 458,
     tPostOperation = 459,
     tNameOfPostProcessing = 460,
     tUsingPost = 461,
     tAppend = 462,
     tPlot = 463,
     tPrint = 464,
     tPrintGroup = 465,
     tEcho = 466,
     tWrite = 467,
     tAdapt = 468,
     tOnGlobal = 469,
     tOnRegion = 470,
     tOnElementsOf = 471,
     tOnGrid = 472,
     tOnSection = 473,
     tOnPoint = 474,
     tOnLine = 475,
     tOnPlane = 476,
     tOnBox = 477,
     tWithArgument = 478,
     tFile = 479,
     tDepth = 480,
     tDimension = 481,
     tComma = 482,
     tTimeStep = 483,
     tHarmonicToTime = 484,
     tValueIndex = 485,
     tValueName = 486,
     tFormat = 487,
     tHeader = 488,
     tFooter = 489,
     tSkin = 490,
     tSmoothing = 491,
     tTarget = 492,
     tSort = 493,
     tIso = 494,
     tNoNewLine = 495,
     tNoTitle = 496,
     tDecomposeInSimplex = 497,
     tChangeOfValues = 498,
     tTimeLegend = 499,
     tFrequencyLegend = 500,
     tEigenvalueLegend = 501,
     tEvaluationPoints = 502,
     tStore = 503,
     tLastTimeStepOnly = 504,
     tAppendTimeStepToFileName = 505,
     tOverrideTimeStepValue = 506,
     tNoMesh = 507,
     tSendToServer = 508,
     tStr = 509,
     tDate = 510,
     tNewCoordinates = 511,
     tDEF = 512,
     tOR = 513,
     tAND = 514,
     tAPPROXEQUAL = 515,
     tNOTEQUAL = 516,
     tEQUAL = 517,
     tGREATERGREATER = 518,
     tLESSLESS = 519,
     tGREATEROREQUAL = 520,
     tLESSOREQUAL = 521,
     tCROSSPRODUCT = 522,
     UNARYPREC = 523,
     tSHOW = 524
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 129 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;



/* Line 1685 of yacc.c  */
#line 330 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;


