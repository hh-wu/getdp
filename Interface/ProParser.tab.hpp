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
     tNeverDt = 381,
     tDtNL = 382,
     tAtAnteriorTimeStep = 383,
     tIn = 384,
     tFull_Matrix = 385,
     tResolution = 386,
     tDefineSystem = 387,
     tNameOfFormulation = 388,
     tNameOfMesh = 389,
     tFrequency = 390,
     tSolver = 391,
     tOriginSystem = 392,
     tDestinationSystem = 393,
     tOperation = 394,
     tOperationEnd = 395,
     tSetTime = 396,
     tDTime = 397,
     tSetFrequency = 398,
     tFourierTransform = 399,
     tFourierTransformJ = 400,
     tLanczos = 401,
     tEigenSolve = 402,
     tEigenSolveJac = 403,
     tPerturbation = 404,
     tUpdate = 405,
     tUpdateConstraint = 406,
     tBreak = 407,
     tEvaluate = 408,
     tSelectCorrection = 409,
     tAddCorrection = 410,
     tMultiplySolution = 411,
     tAddOppositeFullSolution = 412,
     tTimeLoopTheta = 413,
     tTimeLoopNewmark = 414,
     tTimeLoopRungeKutta = 415,
     tTimeLoopAdaptive = 416,
     tTime0 = 417,
     tTimeMax = 418,
     tTheta = 419,
     tBeta = 420,
     tGamma = 421,
     tIterativeLoop = 422,
     tIterativeLinearSolver = 423,
     tNbrMaxIteration = 424,
     tRelaxationFactor = 425,
     tIterativeTimeReduction = 426,
     tSetCommSelf = 427,
     tSetCommWorld = 428,
     tBarrier = 429,
     tDivisionCoefficient = 430,
     tChangeOfState = 431,
     tChangeOfCoordinates = 432,
     tChangeOfCoordinates2 = 433,
     tSystemCommand = 434,
     tGmshRead = 435,
     tGmshClearAll = 436,
     tGenerateOnly = 437,
     tGenerateOnlyJac = 438,
     tSolveJac_AdaptRelax = 439,
     tTensorProductSolve = 440,
     tSaveSolutionExtendedMH = 441,
     tSaveSolutionMHtoTime = 442,
     tSaveSolutionWithEntityNum = 443,
     tInitMovingBand2D = 444,
     tMeshMovingBand2D = 445,
     tGenerate_MH_Moving = 446,
     tGenerate_MH_Moving_Separate = 447,
     tAdd_MH_Moving = 448,
     tGenerateGroup = 449,
     tGenerateJacGroup = 450,
     tGenerateRHSGroup = 451,
     tSaveMesh = 452,
     tDeformeMesh = 453,
     tDummyFrequency = 454,
     tPostProcessing = 455,
     tNameOfSystem = 456,
     tPostOperation = 457,
     tNameOfPostProcessing = 458,
     tUsingPost = 459,
     tAppend = 460,
     tPlot = 461,
     tPrint = 462,
     tPrintGroup = 463,
     tEcho = 464,
     tWrite = 465,
     tAdapt = 466,
     tOnGlobal = 467,
     tOnRegion = 468,
     tOnElementsOf = 469,
     tOnGrid = 470,
     tOnSection = 471,
     tOnPoint = 472,
     tOnLine = 473,
     tOnPlane = 474,
     tOnBox = 475,
     tWithArgument = 476,
     tFile = 477,
     tDepth = 478,
     tDimension = 479,
     tComma = 480,
     tTimeStep = 481,
     tHarmonicToTime = 482,
     tValueIndex = 483,
     tValueName = 484,
     tFormat = 485,
     tHeader = 486,
     tFooter = 487,
     tSkin = 488,
     tSmoothing = 489,
     tTarget = 490,
     tSort = 491,
     tIso = 492,
     tNoNewLine = 493,
     tDecomposeInSimplex = 494,
     tChangeOfValues = 495,
     tTimeLegend = 496,
     tFrequencyLegend = 497,
     tEigenvalueLegend = 498,
     tEvaluationPoints = 499,
     tStore = 500,
     tLastTimeStepOnly = 501,
     tAppendTimeStepToFileName = 502,
     tOverrideTimeStepValue = 503,
     tNoMesh = 504,
     tSendToServer = 505,
     tStr = 506,
     tDate = 507,
     tNewCoordinates = 508,
     tDEF = 509,
     tOR = 510,
     tAND = 511,
     tAPPROXEQUAL = 512,
     tNOTEQUAL = 513,
     tEQUAL = 514,
     tGREATERGREATER = 515,
     tLESSLESS = 516,
     tGREATEROREQUAL = 517,
     tLESSOREQUAL = 518,
     tCROSSPRODUCT = 519,
     UNARYPREC = 520,
     tSHOW = 521
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 127 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;



/* Line 1685 of yacc.c  */
#line 327 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;


