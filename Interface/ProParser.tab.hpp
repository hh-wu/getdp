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
     tIntegration = 338,
     tMatrix = 339,
     tType = 340,
     tSubType = 341,
     tCriterion = 342,
     tGeoElement = 343,
     tNumberOfPoints = 344,
     tMaxNumberOfPoints = 345,
     tNumberOfDivisions = 346,
     tMaxNumberOfDivisions = 347,
     tStoppingCriterion = 348,
     tFunctionSpace = 349,
     tName = 350,
     tBasisFunction = 351,
     tNameOfCoef = 352,
     tFunction = 353,
     tdFunction = 354,
     tSubFunction = 355,
     tSubdFunction = 356,
     tSupport = 357,
     tEntity = 358,
     tSubSpace = 359,
     tNameOfBasisFunction = 360,
     tGlobalQuantity = 361,
     tEntityType = 362,
     tEntitySubType = 363,
     tNameOfConstraint = 364,
     tFormulation = 365,
     tQuantity = 366,
     tNameOfSpace = 367,
     tIndexOfSystem = 368,
     tSymmetry = 369,
     tGalerkin = 370,
     tdeRham = 371,
     tGlobalTerm = 372,
     tGlobalEquation = 373,
     tDt = 374,
     tDtDof = 375,
     tDtDt = 376,
     tDtDtDof = 377,
     tJacNL = 378,
     tNeverDt = 379,
     tDtNL = 380,
     tAtAnteriorTimeStep = 381,
     tIn = 382,
     tFull_Matrix = 383,
     tResolution = 384,
     tDefineSystem = 385,
     tNameOfFormulation = 386,
     tNameOfMesh = 387,
     tFrequency = 388,
     tSolver = 389,
     tOriginSystem = 390,
     tDestinationSystem = 391,
     tOperation = 392,
     tOperationEnd = 393,
     tSetTime = 394,
     tDTime = 395,
     tSetFrequency = 396,
     tFourierTransform = 397,
     tFourierTransformJ = 398,
     tLanczos = 399,
     tEigenSolve = 400,
     tEigenSolveJac = 401,
     tPerturbation = 402,
     tUpdate = 403,
     tUpdateConstraint = 404,
     tBreak = 405,
     tEvaluate = 406,
     tSelectCorrection = 407,
     tAddCorrection = 408,
     tMultiplySolution = 409,
     tAddOppositeFullSolution = 410,
     tTimeLoopTheta = 411,
     tTimeLoopNewmark = 412,
     tTimeLoopRungeKutta = 413,
     tTime0 = 414,
     tTimeMax = 415,
     tTheta = 416,
     tBeta = 417,
     tGamma = 418,
     tIterativeLoop = 419,
     tNbrMaxIteration = 420,
     tRelaxationFactor = 421,
     tIterativeTimeReduction = 422,
     tDivisionCoefficient = 423,
     tChangeOfState = 424,
     tChangeOfCoordinates = 425,
     tChangeOfCoordinates2 = 426,
     tSystemCommand = 427,
     tGmshRead = 428,
     tGenerateOnly = 429,
     tGenerateOnlyJac = 430,
     tSolveJac_AdaptRelax = 431,
     tTensorProductSolve = 432,
     tSaveSolutionExtendedMH = 433,
     tSaveSolutionMHtoTime = 434,
     tSaveSolutionWithEntityNum = 435,
     tInit_MovingBand2D = 436,
     tMesh_MovingBand2D = 437,
     tGenerate_MH_Moving = 438,
     tGenerate_MH_Moving_Separate = 439,
     tAdd_MH_Moving = 440,
     tGenerateGroup = 441,
     tGenerateJacGroup = 442,
     tSaveMesh = 443,
     tDeformeMesh = 444,
     tDummyFrequency = 445,
     tPostProcessing = 446,
     tNameOfSystem = 447,
     tPostOperation = 448,
     tNameOfPostProcessing = 449,
     tUsingPost = 450,
     tAppend = 451,
     tPlot = 452,
     tPrint = 453,
     tPrintGroup = 454,
     tEcho = 455,
     tWrite = 456,
     tAdapt = 457,
     tOnGlobal = 458,
     tOnRegion = 459,
     tOnElementsOf = 460,
     tOnGrid = 461,
     tOnSection = 462,
     tOnPoint = 463,
     tOnLine = 464,
     tOnPlane = 465,
     tOnBox = 466,
     tWithArgument = 467,
     tFile = 468,
     tDepth = 469,
     tDimension = 470,
     tComma = 471,
     tTimeStep = 472,
     tHarmonicToTime = 473,
     tValueIndex = 474,
     tValueName = 475,
     tFormat = 476,
     tHeader = 477,
     tFooter = 478,
     tSkin = 479,
     tSmoothing = 480,
     tTarget = 481,
     tSort = 482,
     tIso = 483,
     tNoNewLine = 484,
     tDecomposeInSimplex = 485,
     tChangeOfValues = 486,
     tTimeLegend = 487,
     tFrequencyLegend = 488,
     tEigenvalueLegend = 489,
     tEvaluationPoints = 490,
     tStore = 491,
     tLastTimeStepOnly = 492,
     tAppendTimeStepToFileName = 493,
     tSendToServer = 494,
     tStr = 495,
     tDate = 496,
     tDEF = 497,
     tOR = 498,
     tAND = 499,
     tAPPROXEQUAL = 500,
     tNOTEQUAL = 501,
     tEQUAL = 502,
     tGREATERGREATER = 503,
     tLESSLESS = 504,
     tGREATEROREQUAL = 505,
     tLESSOREQUAL = 506,
     tCROSSPRODUCT = 507,
     UNARYPREC = 508,
     tSHOW = 509
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
#line 315 "ProParser.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE getdp_yylval;


