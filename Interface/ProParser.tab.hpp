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
     tHelp = 277,
     tCpu = 278,
     tCheck = 279,
     tInclude = 280,
     tConstant = 281,
     tList = 282,
     tListAlt = 283,
     tLinSpace = 284,
     tLogSpace = 285,
     tListFromFile = 286,
     tChangeCurrentPosition = 287,
     tDefineConstant = 288,
     tPi = 289,
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
     tFmod = 311,
     tModulo = 312,
     tHypot = 313,
     tRand = 314,
     tSolidAngle = 315,
     tTrace = 316,
     tOrder = 317,
     tCrossProduct = 318,
     tDofValue = 319,
     tMHTransform = 320,
     tMHJacNL = 321,
     tGroup = 322,
     tDefineGroup = 323,
     tAll = 324,
     tInSupport = 325,
     tMovingBand2D = 326,
     tDefineFunction = 327,
     tConstraint = 328,
     tRegion = 329,
     tSubRegion = 330,
     tRegionRef = 331,
     tSubRegionRef = 332,
     tFilter = 333,
     tCoefficient = 334,
     tValue = 335,
     tTimeFunction = 336,
     tBranch = 337,
     tNameOfResolution = 338,
     tJacobian = 339,
     tCase = 340,
     tIntegration = 341,
     tMatrix = 342,
     tType = 343,
     tSubType = 344,
     tCriterion = 345,
     tGeoElement = 346,
     tNumberOfPoints = 347,
     tMaxNumberOfPoints = 348,
     tNumberOfDivisions = 349,
     tMaxNumberOfDivisions = 350,
     tStoppingCriterion = 351,
     tFunctionSpace = 352,
     tName = 353,
     tBasisFunction = 354,
     tNameOfCoef = 355,
     tFunction = 356,
     tdFunction = 357,
     tSubFunction = 358,
     tSubdFunction = 359,
     tSupport = 360,
     tEntity = 361,
     tSubSpace = 362,
     tNameOfBasisFunction = 363,
     tGlobalQuantity = 364,
     tEntityType = 365,
     tEntitySubType = 366,
     tNameOfConstraint = 367,
     tFormulation = 368,
     tQuantity = 369,
     tNameOfSpace = 370,
     tIndexOfSystem = 371,
     tSymmetry = 372,
     tGalerkin = 373,
     tdeRham = 374,
     tGlobalTerm = 375,
     tGlobalEquation = 376,
     tDt = 377,
     tDtDof = 378,
     tDtDt = 379,
     tDtDtDof = 380,
     tJacNL = 381,
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
     tTime0 = 417,
     tTimeMax = 418,
     tTheta = 419,
     tBeta = 420,
     tGamma = 421,
     tIterativeLoop = 422,
     tNbrMaxIteration = 423,
     tRelaxationFactor = 424,
     tIterativeTimeReduction = 425,
     tDivisionCoefficient = 426,
     tChangeOfState = 427,
     tChangeOfCoordinates = 428,
     tChangeOfCoordinates2 = 429,
     tSystemCommand = 430,
     tGmshRead = 431,
     tGenerateOnly = 432,
     tGenerateOnlyJac = 433,
     tSolveJac_AdaptRelax = 434,
     tTensorProductSolve = 435,
     tSaveSolutionExtendedMH = 436,
     tSaveSolutionMHtoTime = 437,
     tSaveSolutionWithEntityNum = 438,
     tInit_MovingBand2D = 439,
     tMesh_MovingBand2D = 440,
     tGenerate_MH_Moving = 441,
     tGenerate_MH_Moving_Separate = 442,
     tAdd_MH_Moving = 443,
     tGenerateGroup = 444,
     tGenerateJacGroup = 445,
     tSaveMesh = 446,
     tDeformeMesh = 447,
     tDummyFrequency = 448,
     tPostProcessing = 449,
     tNameOfSystem = 450,
     tPostOperation = 451,
     tNameOfPostProcessing = 452,
     tUsingPost = 453,
     tAppend = 454,
     tPlot = 455,
     tPrint = 456,
     tPrintGroup = 457,
     tEcho = 458,
     tWrite = 459,
     tAdapt = 460,
     tOnGlobal = 461,
     tOnRegion = 462,
     tOnElementsOf = 463,
     tOnGrid = 464,
     tOnSection = 465,
     tOnPoint = 466,
     tOnLine = 467,
     tOnPlane = 468,
     tOnBox = 469,
     tWithArgument = 470,
     tFile = 471,
     tDepth = 472,
     tDimension = 473,
     tComma = 474,
     tTimeStep = 475,
     tHarmonicToTime = 476,
     tValueIndex = 477,
     tValueName = 478,
     tFormat = 479,
     tHeader = 480,
     tFooter = 481,
     tSkin = 482,
     tSmoothing = 483,
     tTarget = 484,
     tSort = 485,
     tIso = 486,
     tNoNewLine = 487,
     tDecomposeInSimplex = 488,
     tChangeOfValues = 489,
     tTimeLegend = 490,
     tFrequencyLegend = 491,
     tEigenvalueLegend = 492,
     tEvaluationPoints = 493,
     tStore = 494,
     tLastTimeStepOnly = 495,
     tAppendTimeStepToFileName = 496,
     tSendToServer = 497,
     tStr = 498,
     tDate = 499,
     tDEF = 500,
     tOR = 501,
     tAND = 502,
     tAPPROXEQUAL = 503,
     tNOTEQUAL = 504,
     tEQUAL = 505,
     tGREATERGREATER = 506,
     tLESSLESS = 507,
     tGREATEROREQUAL = 508,
     tLESSOREQUAL = 509,
     tCROSSPRODUCT = 510,
     UNARYPREC = 511,
     tSHOW = 512
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 121 "ProParser.y"

  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t;



/* Line 1685 of yacc.c  */
#line 318 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;


