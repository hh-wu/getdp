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
     tFmod = 308,
     tModulo = 309,
     tHypot = 310,
     tRand = 311,
     tSolidAngle = 312,
     tTrace = 313,
     tOrder = 314,
     tCrossProduct = 315,
     tDofValue = 316,
     tMHTransform = 317,
     tMHJacNL = 318,
     tGroup = 319,
     tDefineGroup = 320,
     tAll = 321,
     tInSupport = 322,
     tMovingBand2D = 323,
     tDefineFunction = 324,
     tConstraint = 325,
     tRegion = 326,
     tSubRegion = 327,
     tRegionRef = 328,
     tSubRegionRef = 329,
     tFilter = 330,
     tCoefficient = 331,
     tValue = 332,
     tTimeFunction = 333,
     tBranch = 334,
     tNameOfResolution = 335,
     tJacobian = 336,
     tCase = 337,
     tMetricTensor = 338,
     tIntegration = 339,
     tMatrix = 340,
     tType = 341,
     tSubType = 342,
     tCriterion = 343,
     tGeoElement = 344,
     tNumberOfPoints = 345,
     tMaxNumberOfPoints = 346,
     tNumberOfDivisions = 347,
     tMaxNumberOfDivisions = 348,
     tStoppingCriterion = 349,
     tFunctionSpace = 350,
     tName = 351,
     tBasisFunction = 352,
     tNameOfCoef = 353,
     tFunction = 354,
     tdFunction = 355,
     tSubFunction = 356,
     tSubdFunction = 357,
     tSupport = 358,
     tEntity = 359,
     tSubSpace = 360,
     tNameOfBasisFunction = 361,
     tGlobalQuantity = 362,
     tEntityType = 363,
     tEntitySubType = 364,
     tNameOfConstraint = 365,
     tFormulation = 366,
     tQuantity = 367,
     tNameOfSpace = 368,
     tIndexOfSystem = 369,
     tSymmetry = 370,
     tGalerkin = 371,
     tdeRham = 372,
     tGlobalTerm = 373,
     tGlobalEquation = 374,
     tDt = 375,
     tDtDof = 376,
     tDtDt = 377,
     tDtDtDof = 378,
     tJacNL = 379,
     tNeverDt = 380,
     tDtNL = 381,
     tAtAnteriorTimeStep = 382,
     tIn = 383,
     tFull_Matrix = 384,
     tResolution = 385,
     tDefineSystem = 386,
     tNameOfFormulation = 387,
     tNameOfMesh = 388,
     tFrequency = 389,
     tSolver = 390,
     tOriginSystem = 391,
     tDestinationSystem = 392,
     tOperation = 393,
     tOperationEnd = 394,
     tSetTime = 395,
     tDTime = 396,
     tSetFrequency = 397,
     tFourierTransform = 398,
     tFourierTransformJ = 399,
     tLanczos = 400,
     tEigenSolve = 401,
     tEigenSolveJac = 402,
     tPerturbation = 403,
     tUpdate = 404,
     tUpdateConstraint = 405,
     tBreak = 406,
     tEvaluate = 407,
     tSelectCorrection = 408,
     tAddCorrection = 409,
     tMultiplySolution = 410,
     tAddOppositeFullSolution = 411,
     tTimeLoopTheta = 412,
     tTimeLoopNewmark = 413,
     tTimeLoopRungeKutta = 414,
     tTimeLoopAdaptive = 415,
     tTime0 = 416,
     tTimeMax = 417,
     tTheta = 418,
     tBeta = 419,
     tGamma = 420,
     tIterativeLoop = 421,
     tIterativeLinearSolver = 422,
     tNbrMaxIteration = 423,
     tRelaxationFactor = 424,
     tIterativeTimeReduction = 425,
     tSetCommSelf = 426,
     tSetCommWorld = 427,
     tBarrier = 428,
     tDivisionCoefficient = 429,
     tChangeOfState = 430,
     tChangeOfCoordinates = 431,
     tChangeOfCoordinates2 = 432,
     tSystemCommand = 433,
     tGmshRead = 434,
     tGmshClearAll = 435,
     tGenerateOnly = 436,
     tGenerateOnlyJac = 437,
     tSolveJac_AdaptRelax = 438,
     tTensorProductSolve = 439,
     tSaveSolutionExtendedMH = 440,
     tSaveSolutionMHtoTime = 441,
     tSaveSolutionWithEntityNum = 442,
     tInitMovingBand2D = 443,
     tMeshMovingBand2D = 444,
     tGenerate_MH_Moving = 445,
     tGenerate_MH_Moving_Separate = 446,
     tAdd_MH_Moving = 447,
     tGenerateGroup = 448,
     tGenerateJacGroup = 449,
     tGenerateRHSGroup = 450,
     tSaveMesh = 451,
     tDeformeMesh = 452,
     tDummyFrequency = 453,
     tPostProcessing = 454,
     tNameOfSystem = 455,
     tPostOperation = 456,
     tNameOfPostProcessing = 457,
     tUsingPost = 458,
     tAppend = 459,
     tPlot = 460,
     tPrint = 461,
     tPrintGroup = 462,
     tEcho = 463,
     tWrite = 464,
     tAdapt = 465,
     tOnGlobal = 466,
     tOnRegion = 467,
     tOnElementsOf = 468,
     tOnGrid = 469,
     tOnSection = 470,
     tOnPoint = 471,
     tOnLine = 472,
     tOnPlane = 473,
     tOnBox = 474,
     tWithArgument = 475,
     tFile = 476,
     tDepth = 477,
     tDimension = 478,
     tComma = 479,
     tTimeStep = 480,
     tHarmonicToTime = 481,
     tValueIndex = 482,
     tValueName = 483,
     tFormat = 484,
     tHeader = 485,
     tFooter = 486,
     tSkin = 487,
     tSmoothing = 488,
     tTarget = 489,
     tSort = 490,
     tIso = 491,
     tNoNewLine = 492,
     tDecomposeInSimplex = 493,
     tChangeOfValues = 494,
     tTimeLegend = 495,
     tFrequencyLegend = 496,
     tEigenvalueLegend = 497,
     tEvaluationPoints = 498,
     tStore = 499,
     tLastTimeStepOnly = 500,
     tAppendTimeStepToFileName = 501,
     tOverrideTimeStepValue = 502,
     tNoMesh = 503,
     tSendToServer = 504,
     tStr = 505,
     tDate = 506,
     tNewCoordinates = 507,
     tDEF = 508,
     tOR = 509,
     tAND = 510,
     tAPPROXEQUAL = 511,
     tNOTEQUAL = 512,
     tEQUAL = 513,
     tGREATERGREATER = 514,
     tLESSLESS = 515,
     tGREATEROREQUAL = 516,
     tLESSOREQUAL = 517,
     tCROSSPRODUCT = 518,
     UNARYPREC = 519,
     tSHOW = 520
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 126 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;



/* Line 1685 of yacc.c  */
#line 326 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;


