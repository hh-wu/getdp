/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     tFor = 269,
     tEndFor = 270,
     tIf = 271,
     tElse = 272,
     tEndIf = 273,
     tFlag = 274,
     tHelp = 275,
     tCpu = 276,
     tCheck = 277,
     tInclude = 278,
     tConstant = 279,
     tList = 280,
     tListAlt = 281,
     tLinSpace = 282,
     tLogSpace = 283,
     tListFromFile = 284,
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
     tSolidAngle = 311,
     tTrace = 312,
     tOrder = 313,
     tCrossProduct = 314,
     tDofValue = 315,
     tMHTransform = 316,
     tMHJacNL = 317,
     tGroup = 318,
     tDefineGroup = 319,
     tAll = 320,
     tInSupport = 321,
     tMovingBand2D = 322,
     tDefineFunction = 323,
     tConstraint = 324,
     tRegion = 325,
     tSubRegion = 326,
     tRegionRef = 327,
     tSubRegionRef = 328,
     tFilter = 329,
     tCoefficient = 330,
     tValue = 331,
     tTimeFunction = 332,
     tBranch = 333,
     tNode = 334,
     tLoop = 335,
     tNameOfResolution = 336,
     tJacobian = 337,
     tCase = 338,
     tIntegration = 339,
     tFMMIntegration = 340,
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
     tEquation = 372,
     tGalerkin = 373,
     tdeRham = 374,
     tGlobalTerm = 375,
     tGlobalEquation = 376,
     tDiscreteGeometry = 377,
     tDt = 378,
     tDtDof = 379,
     tDtDt = 380,
     tDtDtDof = 381,
     tJacNL = 382,
     tNeverDt = 383,
     tDtNL = 384,
     tAtAnteriorTimeStep = 385,
     tIn = 386,
     tFull_Matrix = 387,
     tResolution = 388,
     tDefineSystem = 389,
     tNameOfFormulation = 390,
     tNameOfMesh = 391,
     tFrequency = 392,
     tSolver = 393,
     tOriginSystem = 394,
     tDestinationSystem = 395,
     tOperation = 396,
     tOperationEnd = 397,
     tSetTime = 398,
     tDTime = 399,
     tSetFrequency = 400,
     tFourierTransform = 401,
     tFourierTransformJ = 402,
     tLanczos = 403,
     tEigenSolve = 404,
     tEigenSolveJac = 405,
     tPerturbation = 406,
     tUpdate = 407,
     tUpdateConstraint = 408,
     tBreak = 409,
     tEvaluate = 410,
     tTimeLoopTheta = 411,
     tTime0 = 412,
     tTimeMax = 413,
     tTheta = 414,
     tTimeLoopNewmark = 415,
     tBeta = 416,
     tGamma = 417,
     tIterativeLoop = 418,
     tNbrMaxIteration = 419,
     tRelaxationFactor = 420,
     tIterativeTimeReduction = 421,
     tDivisionCoefficient = 422,
     tChangeOfState = 423,
     tChangeOfCoordinates = 424,
     tChangeOfCoordinates2 = 425,
     tSystemCommand = 426,
     tGenerateFMMGroups = 427,
     tGenerateOnly = 428,
     tGenerateOnlyJac = 429,
     tSolveJac_AdaptRelax = 430,
     tSaveSolutionExtendedMH = 431,
     tSaveSolutionMHtoTime = 432,
     tInit_MovingBand2D = 433,
     tMesh_MovingBand2D = 434,
     tGenerate_MH_Moving = 435,
     tGenerate_MH_Moving_Separate = 436,
     tAdd_MH_Moving = 437,
     tGenerateGroup = 438,
     tGenerateJacGroup = 439,
     tSaveMesh = 440,
     tDeformeMesh = 441,
     tDummyFrequency = 442,
     tPostProcessing = 443,
     tNameOfSystem = 444,
     tPostOperation = 445,
     tNameOfPostProcessing = 446,
     tUsingPost = 447,
     tAppend = 448,
     tPlot = 449,
     tPrint = 450,
     tPrintGroup = 451,
     tEcho = 452,
     tWrite = 453,
     tAdapt = 454,
     tOnGlobal = 455,
     tOnRegion = 456,
     tOnElementsOf = 457,
     tOnGrid = 458,
     tOnSection = 459,
     tOnPoint = 460,
     tOnLine = 461,
     tOnPlane = 462,
     tOnBox = 463,
     tWithArgument = 464,
     tFile = 465,
     tDepth = 466,
     tDimension = 467,
     tComma = 468,
     tTimeStep = 469,
     tHarmonicToTime = 470,
     tFormat = 471,
     tHeader = 472,
     tFooter = 473,
     tSkin = 474,
     tSmoothing = 475,
     tTarget = 476,
     tSort = 477,
     tIso = 478,
     tNoNewLine = 479,
     tDecomposeInSimplex = 480,
     tChangeOfValues = 481,
     tTimeLegend = 482,
     tFrequencyLegend = 483,
     tEigenvalueLegend = 484,
     tEvaluationPoints = 485,
     tStore = 486,
     tLastTimeStepOnly = 487,
     tStr = 488,
     tDate = 489,
     tDEF = 490,
     tOR = 491,
     tAND = 492,
     tAPPROXEQUAL = 493,
     tNOTEQUAL = 494,
     tEQUAL = 495,
     tGREATERGREATER = 496,
     tLESSLESS = 497,
     tGREATEROREQUAL = 498,
     tLESSOREQUAL = 499,
     tCROSSPRODUCT = 500,
     UNARYPREC = 501,
     tSHOW = 502
   };
#endif
/* Tokens.  */
#define tINT 258
#define tFLOAT 259
#define tSTRING 260
#define tBIGSTR 261
#define tEND 262
#define tDOTS 263
#define tStrCat 264
#define tSprintf 265
#define tPrintf 266
#define tRead 267
#define tPrintConstants 268
#define tFor 269
#define tEndFor 270
#define tIf 271
#define tElse 272
#define tEndIf 273
#define tFlag 274
#define tHelp 275
#define tCpu 276
#define tCheck 277
#define tInclude 278
#define tConstant 279
#define tList 280
#define tListAlt 281
#define tLinSpace 282
#define tLogSpace 283
#define tListFromFile 284
#define tDefineConstant 285
#define tPi 286
#define t0D 287
#define t1D 288
#define t2D 289
#define t3D 290
#define tExp 291
#define tLog 292
#define tLog10 293
#define tSqrt 294
#define tSin 295
#define tAsin 296
#define tCos 297
#define tAcos 298
#define tTan 299
#define tAtan 300
#define tAtan2 301
#define tSinh 302
#define tCosh 303
#define tTanh 304
#define tFabs 305
#define tFloor 306
#define tCeil 307
#define tFmod 308
#define tModulo 309
#define tHypot 310
#define tSolidAngle 311
#define tTrace 312
#define tOrder 313
#define tCrossProduct 314
#define tDofValue 315
#define tMHTransform 316
#define tMHJacNL 317
#define tGroup 318
#define tDefineGroup 319
#define tAll 320
#define tInSupport 321
#define tMovingBand2D 322
#define tDefineFunction 323
#define tConstraint 324
#define tRegion 325
#define tSubRegion 326
#define tRegionRef 327
#define tSubRegionRef 328
#define tFilter 329
#define tCoefficient 330
#define tValue 331
#define tTimeFunction 332
#define tBranch 333
#define tNode 334
#define tLoop 335
#define tNameOfResolution 336
#define tJacobian 337
#define tCase 338
#define tIntegration 339
#define tFMMIntegration 340
#define tMatrix 341
#define tType 342
#define tSubType 343
#define tCriterion 344
#define tGeoElement 345
#define tNumberOfPoints 346
#define tMaxNumberOfPoints 347
#define tNumberOfDivisions 348
#define tMaxNumberOfDivisions 349
#define tStoppingCriterion 350
#define tFunctionSpace 351
#define tName 352
#define tBasisFunction 353
#define tNameOfCoef 354
#define tFunction 355
#define tdFunction 356
#define tSubFunction 357
#define tSubdFunction 358
#define tSupport 359
#define tEntity 360
#define tSubSpace 361
#define tNameOfBasisFunction 362
#define tGlobalQuantity 363
#define tEntityType 364
#define tEntitySubType 365
#define tNameOfConstraint 366
#define tFormulation 367
#define tQuantity 368
#define tNameOfSpace 369
#define tIndexOfSystem 370
#define tSymmetry 371
#define tEquation 372
#define tGalerkin 373
#define tdeRham 374
#define tGlobalTerm 375
#define tGlobalEquation 376
#define tDiscreteGeometry 377
#define tDt 378
#define tDtDof 379
#define tDtDt 380
#define tDtDtDof 381
#define tJacNL 382
#define tNeverDt 383
#define tDtNL 384
#define tAtAnteriorTimeStep 385
#define tIn 386
#define tFull_Matrix 387
#define tResolution 388
#define tDefineSystem 389
#define tNameOfFormulation 390
#define tNameOfMesh 391
#define tFrequency 392
#define tSolver 393
#define tOriginSystem 394
#define tDestinationSystem 395
#define tOperation 396
#define tOperationEnd 397
#define tSetTime 398
#define tDTime 399
#define tSetFrequency 400
#define tFourierTransform 401
#define tFourierTransformJ 402
#define tLanczos 403
#define tEigenSolve 404
#define tEigenSolveJac 405
#define tPerturbation 406
#define tUpdate 407
#define tUpdateConstraint 408
#define tBreak 409
#define tEvaluate 410
#define tTimeLoopTheta 411
#define tTime0 412
#define tTimeMax 413
#define tTheta 414
#define tTimeLoopNewmark 415
#define tBeta 416
#define tGamma 417
#define tIterativeLoop 418
#define tNbrMaxIteration 419
#define tRelaxationFactor 420
#define tIterativeTimeReduction 421
#define tDivisionCoefficient 422
#define tChangeOfState 423
#define tChangeOfCoordinates 424
#define tChangeOfCoordinates2 425
#define tSystemCommand 426
#define tGenerateFMMGroups 427
#define tGenerateOnly 428
#define tGenerateOnlyJac 429
#define tSolveJac_AdaptRelax 430
#define tSaveSolutionExtendedMH 431
#define tSaveSolutionMHtoTime 432
#define tInit_MovingBand2D 433
#define tMesh_MovingBand2D 434
#define tGenerate_MH_Moving 435
#define tGenerate_MH_Moving_Separate 436
#define tAdd_MH_Moving 437
#define tGenerateGroup 438
#define tGenerateJacGroup 439
#define tSaveMesh 440
#define tDeformeMesh 441
#define tDummyFrequency 442
#define tPostProcessing 443
#define tNameOfSystem 444
#define tPostOperation 445
#define tNameOfPostProcessing 446
#define tUsingPost 447
#define tAppend 448
#define tPlot 449
#define tPrint 450
#define tPrintGroup 451
#define tEcho 452
#define tWrite 453
#define tAdapt 454
#define tOnGlobal 455
#define tOnRegion 456
#define tOnElementsOf 457
#define tOnGrid 458
#define tOnSection 459
#define tOnPoint 460
#define tOnLine 461
#define tOnPlane 462
#define tOnBox 463
#define tWithArgument 464
#define tFile 465
#define tDepth 466
#define tDimension 467
#define tComma 468
#define tTimeStep 469
#define tHarmonicToTime 470
#define tFormat 471
#define tHeader 472
#define tFooter 473
#define tSkin 474
#define tSmoothing 475
#define tTarget 476
#define tSort 477
#define tIso 478
#define tNoNewLine 479
#define tDecomposeInSimplex 480
#define tChangeOfValues 481
#define tTimeLegend 482
#define tFrequencyLegend 483
#define tEigenvalueLegend 484
#define tEvaluationPoints 485
#define tStore 486
#define tLastTimeStepOnly 487
#define tStr 488
#define tDate 489
#define tDEF 490
#define tOR 491
#define tAND 492
#define tAPPROXEQUAL 493
#define tNOTEQUAL 494
#define tEQUAL 495
#define tGREATERGREATER 496
#define tLESSLESS 497
#define tGREATEROREQUAL 498
#define tLESSOREQUAL 499
#define tCROSSPRODUCT 500
#define UNARYPREC 501
#define tSHOW 502




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 183 "GetDP.y"
{
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
}
/* Line 1489 of yacc.c.  */
#line 551 "GetDP.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

