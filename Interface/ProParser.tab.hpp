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
     tSCOPE = 264,
     tStr = 265,
     tStrPrefix = 266,
     tStrRelative = 267,
     tStrList = 268,
     tStrCat = 269,
     tSprintf = 270,
     tPrintf = 271,
     tMPI_Printf = 272,
     tRead = 273,
     tPrintConstants = 274,
     tStrCmp = 275,
     tStrFind = 276,
     tStrLen = 277,
     tStrChoice = 278,
     tStrSub = 279,
     tUpperCase = 280,
     tLowerCase = 281,
     tLowerCaseIn = 282,
     tNbrRegions = 283,
     tGetRegion = 284,
     tGetRegions = 285,
     tStringToName = 286,
     tNameToString = 287,
     tFor = 288,
     tEndFor = 289,
     tIf = 290,
     tElseIf = 291,
     tElse = 292,
     tEndIf = 293,
     tMacro = 294,
     tReturn = 295,
     tCall = 296,
     tCallTest = 297,
     tTest = 298,
     tWhile = 299,
     tParse = 300,
     tFlag = 301,
     tExists = 302,
     tFileExists = 303,
     tGroupExists = 304,
     tGetForced = 305,
     tGetForcedStr = 306,
     tInclude = 307,
     tLevelInclude = 308,
     tConstant = 309,
     tList = 310,
     tListAlt = 311,
     tLinSpace = 312,
     tLogSpace = 313,
     tListFromFile = 314,
     tListFromServer = 315,
     tChangeCurrentPosition = 316,
     tDefineConstant = 317,
     tUndefineConstant = 318,
     tDefineNumber = 319,
     tDefineString = 320,
     tDefineStruct = 321,
     tNameStruct = 322,
     tDimNameSpace = 323,
     tGetNumber = 324,
     tGetString = 325,
     tSetNumber = 326,
     tSetString = 327,
     tPi = 328,
     tMPI_Rank = 329,
     tMPI_Size = 330,
     t0D = 331,
     t1D = 332,
     t2D = 333,
     t3D = 334,
     tLevelTest = 335,
     tTotalMemory = 336,
     tNumInclude = 337,
     tCurrentDirectory = 338,
     tAbsolutePath = 339,
     tDirName = 340,
     tBaseFileName = 341,
     tCurrentFileName = 342,
     tGETDP_MAJOR_VERSION = 343,
     tGETDP_MINOR_VERSION = 344,
     tGETDP_PATCH_VERSION = 345,
     tExp = 346,
     tLog = 347,
     tLog10 = 348,
     tSqrt = 349,
     tSin = 350,
     tAsin = 351,
     tCos = 352,
     tAcos = 353,
     tTan = 354,
     tAtan = 355,
     tAtan2 = 356,
     tSinh = 357,
     tCosh = 358,
     tTanh = 359,
     tAtanh = 360,
     tFabs = 361,
     tFloor = 362,
     tCeil = 363,
     tRound = 364,
     tSign = 365,
     tFmod = 366,
     tModulo = 367,
     tHypot = 368,
     tRand = 369,
     tSolidAngle = 370,
     tTrace = 371,
     tOrder = 372,
     tCrossProduct = 373,
     tDofValue = 374,
     tRational = 375,
     tMHTransform = 376,
     tMHBilinear = 377,
     tAppend = 378,
     tGroup = 379,
     tDefineGroup = 380,
     tAll = 381,
     tInSupport = 382,
     tMovingBand2D = 383,
     tDefineFunction = 384,
     tUndefineFunction = 385,
     tConstraint = 386,
     tRegion = 387,
     tSubRegion = 388,
     tSubRegion2 = 389,
     tRegionRef = 390,
     tSubRegionRef = 391,
     tFilter = 392,
     tToleranceFactor = 393,
     tCoefficient = 394,
     tValue = 395,
     tTimeFunction = 396,
     tBranch = 397,
     tNameOfResolution = 398,
     tJacobian = 399,
     tCase = 400,
     tMetricTensor = 401,
     tIntegration = 402,
     tType = 403,
     tSubType = 404,
     tCriterion = 405,
     tGeoElement = 406,
     tNumberOfPoints = 407,
     tMaxNumberOfPoints = 408,
     tNumberOfDivisions = 409,
     tMaxNumberOfDivisions = 410,
     tStoppingCriterion = 411,
     tFunctionSpace = 412,
     tName = 413,
     tBasisFunction = 414,
     tNameOfCoef = 415,
     tFunction = 416,
     tdFunction = 417,
     tSubFunction = 418,
     tSubdFunction = 419,
     tSupport = 420,
     tEntity = 421,
     tSubSpace = 422,
     tNameOfBasisFunction = 423,
     tGlobalQuantity = 424,
     tEntityType = 425,
     tAuto = 426,
     tEntitySubType = 427,
     tNameOfConstraint = 428,
     tFormulation = 429,
     tQuantity = 430,
     tNameOfSpace = 431,
     tIndexOfSystem = 432,
     tSymmetry = 433,
     tIntegral = 434,
     tdeRham = 435,
     tGlobalTerm = 436,
     tGlobalEquation = 437,
     tDt = 438,
     tDtDof = 439,
     tDtDt = 440,
     tDtDtDof = 441,
     tDtDtDtDof = 442,
     tDtDtDtDtDof = 443,
     tDtDtDtDtDtDof = 444,
     tJacNL = 445,
     tDtDofJacNL = 446,
     tNeverDt = 447,
     tDtNL = 448,
     tEig = 449,
     tAtAnteriorTimeStep = 450,
     tMaxOverTime = 451,
     tFourierSteinmetz = 452,
     tIn = 453,
     tFull_Matrix = 454,
     tResolution = 455,
     tHidden = 456,
     tDefineSystem = 457,
     tNameOfFormulation = 458,
     tNameOfMesh = 459,
     tFrequency = 460,
     tSolver = 461,
     tOriginSystem = 462,
     tDestinationSystem = 463,
     tOperation = 464,
     tOperationEnd = 465,
     tSetTime = 466,
     tSetTimeStep = 467,
     tSetDTime = 468,
     tDTime = 469,
     tSetFrequency = 470,
     tFourierTransform = 471,
     tFourierTransformJ = 472,
     tCopySolution = 473,
     tCopyRHS = 474,
     tCopyResidual = 475,
     tCopyIncrement = 476,
     tCopyDofs = 477,
     tGetNormSolution = 478,
     tGetNormResidual = 479,
     tGetNormRHS = 480,
     tGetNormIncrement = 481,
     tOptimizerInitialize = 482,
     tOptimizerUpdate = 483,
     tOptimizerFinalize = 484,
     tLanczos = 485,
     tEigenSolve = 486,
     tEigenSolveJac = 487,
     tPerturbation = 488,
     tUpdate = 489,
     tUpdateConstraint = 490,
     tBreak = 491,
     tGetResidual = 492,
     tCreateSolution = 493,
     tEvaluate = 494,
     tSelectCorrection = 495,
     tAddCorrection = 496,
     tMultiplySolution = 497,
     tAddOppositeFullSolution = 498,
     tSolveAgainWithOther = 499,
     tSetGlobalSolverOptions = 500,
     tTimeLoopTheta = 501,
     tTimeLoopNewmark = 502,
     tTimeLoopRungeKutta = 503,
     tTimeLoopAdaptive = 504,
     tTime0 = 505,
     tTimeMax = 506,
     tTheta = 507,
     tBeta = 508,
     tGamma = 509,
     tIterativeLoop = 510,
     tIterativeLoopN = 511,
     tIterativeLinearSolver = 512,
     tNbrMaxIteration = 513,
     tRelaxationFactor = 514,
     tIterativeTimeReduction = 515,
     tSetCommSelf = 516,
     tSetCommWorld = 517,
     tBarrier = 518,
     tBroadcastFields = 519,
     tBroadcastVariables = 520,
     tSetExtrapolationOrder = 521,
     tSleep = 522,
     tDivisionCoefficient = 523,
     tChangeOfState = 524,
     tChangeOfCoordinates = 525,
     tChangeOfCoordinates2 = 526,
     tSystemCommand = 527,
     tError = 528,
     tGmshRead = 529,
     tGmshMerge = 530,
     tGmshOpen = 531,
     tGmshWrite = 532,
     tGmshClearAll = 533,
     tDelete = 534,
     tDeleteFile = 535,
     tRenameFile = 536,
     tCreateDir = 537,
     tGenerateOnly = 538,
     tGenerateOnlyJac = 539,
     tSolveJac_AdaptRelax = 540,
     tSaveSolutionExtendedMH = 541,
     tSaveSolutionMHtoTime = 542,
     tSaveSolutionWithEntityNum = 543,
     tInitMovingBand2D = 544,
     tMeshMovingBand2D = 545,
     tGenerateMHMoving = 546,
     tGenerateMHMovingSeparate = 547,
     tAddMHMoving = 548,
     tGenerateGroup = 549,
     tGenerateJacGroup = 550,
     tGenerateRHSGroup = 551,
     tGenerateGroupCumulative = 552,
     tGenerateJacGroupCumulative = 553,
     tGenerateRHSGroupCumulative = 554,
     tSaveMesh = 555,
     tDeformMesh = 556,
     tFrequencySpectrum = 557,
     tPostProcessing = 558,
     tNameOfSystem = 559,
     tPostOperation = 560,
     tNameOfPostProcessing = 561,
     tUsingPost = 562,
     tResampleTime = 563,
     tPlot = 564,
     tPrint = 565,
     tPrintGroup = 566,
     tEcho = 567,
     tSendMergeFileRequest = 568,
     tWrite = 569,
     tAdapt = 570,
     tOnGlobal = 571,
     tOnRegion = 572,
     tOnElementsOf = 573,
     tOnGrid = 574,
     tOnSection = 575,
     tOnPoint = 576,
     tOnLine = 577,
     tOnPlane = 578,
     tOnBox = 579,
     tWithArgument = 580,
     tFile = 581,
     tDepth = 582,
     tDimension = 583,
     tComma = 584,
     tTimeStep = 585,
     tHarmonicToTime = 586,
     tCosineTransform = 587,
     tTimeToHarmonic = 588,
     tValueIndex = 589,
     tValueName = 590,
     tFormat = 591,
     tHeader = 592,
     tFooter = 593,
     tSkin = 594,
     tSmoothing = 595,
     tTarget = 596,
     tSort = 597,
     tIso = 598,
     tNoNewLine = 599,
     tNoTitle = 600,
     tDecomposeInSimplex = 601,
     tChangeOfValues = 602,
     tTimeLegend = 603,
     tFrequencyLegend = 604,
     tEigenvalueLegend = 605,
     tEvaluationPoints = 606,
     tStoreInRegister = 607,
     tStoreInVariable = 608,
     tStoreInField = 609,
     tStoreInMeshBasedField = 610,
     tStoreMaxInRegister = 611,
     tStoreMaxXinRegister = 612,
     tStoreMaxYinRegister = 613,
     tStoreMaxZinRegister = 614,
     tStoreMinInRegister = 615,
     tStoreMinXinRegister = 616,
     tStoreMinYinRegister = 617,
     tStoreMinZinRegister = 618,
     tLastTimeStepOnly = 619,
     tAppendTimeStepToFileName = 620,
     tTimeValue = 621,
     tTimeImagValue = 622,
     tTimeInterval = 623,
     tAppendExpressionToFileName = 624,
     tAppendExpressionFormat = 625,
     tOverrideTimeStepValue = 626,
     tNoMesh = 627,
     tSendToServer = 628,
     tDate = 629,
     tOnelabAction = 630,
     tCodeName = 631,
     tFixRelativePath = 632,
     tAppendToExistingFile = 633,
     tAppendStringToFileName = 634,
     tDEF = 635,
     tOR = 636,
     tAND = 637,
     tAPPROXEQUAL = 638,
     tNOTEQUAL = 639,
     tEQUAL = 640,
     tGREATERGREATER = 641,
     tLESSLESS = 642,
     tGREATEROREQUAL = 643,
     tLESSOREQUAL = 644,
     tCROSSPRODUCT = 645,
     UNARYPREC = 646,
     tSHOW = 647
   };
#endif
/* Tokens.  */
#define tINT 258
#define tFLOAT 259
#define tSTRING 260
#define tBIGSTR 261
#define tEND 262
#define tDOTS 263
#define tSCOPE 264
#define tStr 265
#define tStrPrefix 266
#define tStrRelative 267
#define tStrList 268
#define tStrCat 269
#define tSprintf 270
#define tPrintf 271
#define tMPI_Printf 272
#define tRead 273
#define tPrintConstants 274
#define tStrCmp 275
#define tStrFind 276
#define tStrLen 277
#define tStrChoice 278
#define tStrSub 279
#define tUpperCase 280
#define tLowerCase 281
#define tLowerCaseIn 282
#define tNbrRegions 283
#define tGetRegion 284
#define tGetRegions 285
#define tStringToName 286
#define tNameToString 287
#define tFor 288
#define tEndFor 289
#define tIf 290
#define tElseIf 291
#define tElse 292
#define tEndIf 293
#define tMacro 294
#define tReturn 295
#define tCall 296
#define tCallTest 297
#define tTest 298
#define tWhile 299
#define tParse 300
#define tFlag 301
#define tExists 302
#define tFileExists 303
#define tGroupExists 304
#define tGetForced 305
#define tGetForcedStr 306
#define tInclude 307
#define tLevelInclude 308
#define tConstant 309
#define tList 310
#define tListAlt 311
#define tLinSpace 312
#define tLogSpace 313
#define tListFromFile 314
#define tListFromServer 315
#define tChangeCurrentPosition 316
#define tDefineConstant 317
#define tUndefineConstant 318
#define tDefineNumber 319
#define tDefineString 320
#define tDefineStruct 321
#define tNameStruct 322
#define tDimNameSpace 323
#define tGetNumber 324
#define tGetString 325
#define tSetNumber 326
#define tSetString 327
#define tPi 328
#define tMPI_Rank 329
#define tMPI_Size 330
#define t0D 331
#define t1D 332
#define t2D 333
#define t3D 334
#define tLevelTest 335
#define tTotalMemory 336
#define tNumInclude 337
#define tCurrentDirectory 338
#define tAbsolutePath 339
#define tDirName 340
#define tBaseFileName 341
#define tCurrentFileName 342
#define tGETDP_MAJOR_VERSION 343
#define tGETDP_MINOR_VERSION 344
#define tGETDP_PATCH_VERSION 345
#define tExp 346
#define tLog 347
#define tLog10 348
#define tSqrt 349
#define tSin 350
#define tAsin 351
#define tCos 352
#define tAcos 353
#define tTan 354
#define tAtan 355
#define tAtan2 356
#define tSinh 357
#define tCosh 358
#define tTanh 359
#define tAtanh 360
#define tFabs 361
#define tFloor 362
#define tCeil 363
#define tRound 364
#define tSign 365
#define tFmod 366
#define tModulo 367
#define tHypot 368
#define tRand 369
#define tSolidAngle 370
#define tTrace 371
#define tOrder 372
#define tCrossProduct 373
#define tDofValue 374
#define tRational 375
#define tMHTransform 376
#define tMHBilinear 377
#define tAppend 378
#define tGroup 379
#define tDefineGroup 380
#define tAll 381
#define tInSupport 382
#define tMovingBand2D 383
#define tDefineFunction 384
#define tUndefineFunction 385
#define tConstraint 386
#define tRegion 387
#define tSubRegion 388
#define tSubRegion2 389
#define tRegionRef 390
#define tSubRegionRef 391
#define tFilter 392
#define tToleranceFactor 393
#define tCoefficient 394
#define tValue 395
#define tTimeFunction 396
#define tBranch 397
#define tNameOfResolution 398
#define tJacobian 399
#define tCase 400
#define tMetricTensor 401
#define tIntegration 402
#define tType 403
#define tSubType 404
#define tCriterion 405
#define tGeoElement 406
#define tNumberOfPoints 407
#define tMaxNumberOfPoints 408
#define tNumberOfDivisions 409
#define tMaxNumberOfDivisions 410
#define tStoppingCriterion 411
#define tFunctionSpace 412
#define tName 413
#define tBasisFunction 414
#define tNameOfCoef 415
#define tFunction 416
#define tdFunction 417
#define tSubFunction 418
#define tSubdFunction 419
#define tSupport 420
#define tEntity 421
#define tSubSpace 422
#define tNameOfBasisFunction 423
#define tGlobalQuantity 424
#define tEntityType 425
#define tAuto 426
#define tEntitySubType 427
#define tNameOfConstraint 428
#define tFormulation 429
#define tQuantity 430
#define tNameOfSpace 431
#define tIndexOfSystem 432
#define tSymmetry 433
#define tIntegral 434
#define tdeRham 435
#define tGlobalTerm 436
#define tGlobalEquation 437
#define tDt 438
#define tDtDof 439
#define tDtDt 440
#define tDtDtDof 441
#define tDtDtDtDof 442
#define tDtDtDtDtDof 443
#define tDtDtDtDtDtDof 444
#define tJacNL 445
#define tDtDofJacNL 446
#define tNeverDt 447
#define tDtNL 448
#define tEig 449
#define tAtAnteriorTimeStep 450
#define tMaxOverTime 451
#define tFourierSteinmetz 452
#define tIn 453
#define tFull_Matrix 454
#define tResolution 455
#define tHidden 456
#define tDefineSystem 457
#define tNameOfFormulation 458
#define tNameOfMesh 459
#define tFrequency 460
#define tSolver 461
#define tOriginSystem 462
#define tDestinationSystem 463
#define tOperation 464
#define tOperationEnd 465
#define tSetTime 466
#define tSetTimeStep 467
#define tSetDTime 468
#define tDTime 469
#define tSetFrequency 470
#define tFourierTransform 471
#define tFourierTransformJ 472
#define tCopySolution 473
#define tCopyRHS 474
#define tCopyResidual 475
#define tCopyIncrement 476
#define tCopyDofs 477
#define tGetNormSolution 478
#define tGetNormResidual 479
#define tGetNormRHS 480
#define tGetNormIncrement 481
#define tOptimizerInitialize 482
#define tOptimizerUpdate 483
#define tOptimizerFinalize 484
#define tLanczos 485
#define tEigenSolve 486
#define tEigenSolveJac 487
#define tPerturbation 488
#define tUpdate 489
#define tUpdateConstraint 490
#define tBreak 491
#define tGetResidual 492
#define tCreateSolution 493
#define tEvaluate 494
#define tSelectCorrection 495
#define tAddCorrection 496
#define tMultiplySolution 497
#define tAddOppositeFullSolution 498
#define tSolveAgainWithOther 499
#define tSetGlobalSolverOptions 500
#define tTimeLoopTheta 501
#define tTimeLoopNewmark 502
#define tTimeLoopRungeKutta 503
#define tTimeLoopAdaptive 504
#define tTime0 505
#define tTimeMax 506
#define tTheta 507
#define tBeta 508
#define tGamma 509
#define tIterativeLoop 510
#define tIterativeLoopN 511
#define tIterativeLinearSolver 512
#define tNbrMaxIteration 513
#define tRelaxationFactor 514
#define tIterativeTimeReduction 515
#define tSetCommSelf 516
#define tSetCommWorld 517
#define tBarrier 518
#define tBroadcastFields 519
#define tBroadcastVariables 520
#define tSetExtrapolationOrder 521
#define tSleep 522
#define tDivisionCoefficient 523
#define tChangeOfState 524
#define tChangeOfCoordinates 525
#define tChangeOfCoordinates2 526
#define tSystemCommand 527
#define tError 528
#define tGmshRead 529
#define tGmshMerge 530
#define tGmshOpen 531
#define tGmshWrite 532
#define tGmshClearAll 533
#define tDelete 534
#define tDeleteFile 535
#define tRenameFile 536
#define tCreateDir 537
#define tGenerateOnly 538
#define tGenerateOnlyJac 539
#define tSolveJac_AdaptRelax 540
#define tSaveSolutionExtendedMH 541
#define tSaveSolutionMHtoTime 542
#define tSaveSolutionWithEntityNum 543
#define tInitMovingBand2D 544
#define tMeshMovingBand2D 545
#define tGenerateMHMoving 546
#define tGenerateMHMovingSeparate 547
#define tAddMHMoving 548
#define tGenerateGroup 549
#define tGenerateJacGroup 550
#define tGenerateRHSGroup 551
#define tGenerateGroupCumulative 552
#define tGenerateJacGroupCumulative 553
#define tGenerateRHSGroupCumulative 554
#define tSaveMesh 555
#define tDeformMesh 556
#define tFrequencySpectrum 557
#define tPostProcessing 558
#define tNameOfSystem 559
#define tPostOperation 560
#define tNameOfPostProcessing 561
#define tUsingPost 562
#define tResampleTime 563
#define tPlot 564
#define tPrint 565
#define tPrintGroup 566
#define tEcho 567
#define tSendMergeFileRequest 568
#define tWrite 569
#define tAdapt 570
#define tOnGlobal 571
#define tOnRegion 572
#define tOnElementsOf 573
#define tOnGrid 574
#define tOnSection 575
#define tOnPoint 576
#define tOnLine 577
#define tOnPlane 578
#define tOnBox 579
#define tWithArgument 580
#define tFile 581
#define tDepth 582
#define tDimension 583
#define tComma 584
#define tTimeStep 585
#define tHarmonicToTime 586
#define tCosineTransform 587
#define tTimeToHarmonic 588
#define tValueIndex 589
#define tValueName 590
#define tFormat 591
#define tHeader 592
#define tFooter 593
#define tSkin 594
#define tSmoothing 595
#define tTarget 596
#define tSort 597
#define tIso 598
#define tNoNewLine 599
#define tNoTitle 600
#define tDecomposeInSimplex 601
#define tChangeOfValues 602
#define tTimeLegend 603
#define tFrequencyLegend 604
#define tEigenvalueLegend 605
#define tEvaluationPoints 606
#define tStoreInRegister 607
#define tStoreInVariable 608
#define tStoreInField 609
#define tStoreInMeshBasedField 610
#define tStoreMaxInRegister 611
#define tStoreMaxXinRegister 612
#define tStoreMaxYinRegister 613
#define tStoreMaxZinRegister 614
#define tStoreMinInRegister 615
#define tStoreMinXinRegister 616
#define tStoreMinYinRegister 617
#define tStoreMinZinRegister 618
#define tLastTimeStepOnly 619
#define tAppendTimeStepToFileName 620
#define tTimeValue 621
#define tTimeImagValue 622
#define tTimeInterval 623
#define tAppendExpressionToFileName 624
#define tAppendExpressionFormat 625
#define tOverrideTimeStepValue 626
#define tNoMesh 627
#define tSendToServer 628
#define tDate 629
#define tOnelabAction 630
#define tCodeName 631
#define tFixRelativePath 632
#define tAppendToExistingFile 633
#define tAppendStringToFileName 634
#define tDEF 635
#define tOR 636
#define tAND 637
#define tAPPROXEQUAL 638
#define tNOTEQUAL 639
#define tEQUAL 640
#define tGREATERGREATER 641
#define tLESSLESS 642
#define tGREATEROREQUAL 643
#define tLESSOREQUAL 644
#define tCROSSPRODUCT 645
#define UNARYPREC 646
#define tSHOW 647




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 192 "ProParser.y"
{
  char    *c;
  int     i;
  double  d;
  List_T  *l;
  struct TwoInt t ;
  struct TwoChar c2;
}
/* Line 1529 of yacc.c.  */
#line 842 "ProParser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE getdp_yylval;

