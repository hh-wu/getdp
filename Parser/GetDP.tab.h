#ifndef BISON_GETDP_TAB_H
# define BISON_GETDP_TAB_H

#ifndef YYSTYPE
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
# define	tINT	257
# define	tFLOAT	258
# define	tSTRING	259
# define	tBIGSTR	260
# define	tEND	261
# define	tDOTS	262
# define	tStrCat	263
# define	tSprintf	264
# define	tPrintf	265
# define	tRead	266
# define	tFor	267
# define	tEndFor	268
# define	tIf	269
# define	tElse	270
# define	tEndIf	271
# define	tFlag	272
# define	tHelp	273
# define	tCpu	274
# define	tCheck	275
# define	tInclude	276
# define	tConstant	277
# define	tList	278
# define	tListAlt	279
# define	tLinSpace	280
# define	tLogSpace	281
# define	tDefineConstant	282
# define	tPi	283
# define	t0D	284
# define	t1D	285
# define	t2D	286
# define	t3D	287
# define	tExp	288
# define	tLog	289
# define	tLog10	290
# define	tSqrt	291
# define	tSin	292
# define	tAsin	293
# define	tCos	294
# define	tAcos	295
# define	tTan	296
# define	tAtan	297
# define	tAtan2	298
# define	tSinh	299
# define	tCosh	300
# define	tTanh	301
# define	tFabs	302
# define	tFloor	303
# define	tCeil	304
# define	tFmod	305
# define	tModulo	306
# define	tHypot	307
# define	tSolidAngle	308
# define	tTrace	309
# define	tOrder	310
# define	tCrossProduct	311
# define	tDofValue	312
# define	tMHTransform	313
# define	tMHJacNL	314
# define	tGroup	315
# define	tDefineGroup	316
# define	tAll	317
# define	tInSupport	318
# define	tMovingBand2D	319
# define	tDefineFunction	320
# define	tConstraint	321
# define	tRegion	322
# define	tSubRegion	323
# define	tRegionRef	324
# define	tSubRegionRef	325
# define	tFilter	326
# define	tCoefficient	327
# define	tValue	328
# define	tTimeFunction	329
# define	tBranch	330
# define	tNode	331
# define	tLoop	332
# define	tNameOfResolution	333
# define	tJacobian	334
# define	tCase	335
# define	tIntegration	336
# define	tFMMIntegration	337
# define	tMatrix	338
# define	tType	339
# define	tSubType	340
# define	tCriterion	341
# define	tGeoElement	342
# define	tNumberOfPoints	343
# define	tMaxNumberOfPoints	344
# define	tNumberOfDivisions	345
# define	tMaxNumberOfDivisions	346
# define	tStoppingCriterion	347
# define	tFunctionSpace	348
# define	tName	349
# define	tBasisFunction	350
# define	tNameOfCoef	351
# define	tFunction	352
# define	tdFunction	353
# define	tSubFunction	354
# define	tSubdFunction	355
# define	tSupport	356
# define	tEntity	357
# define	tSubSpace	358
# define	tNameOfBasisFunction	359
# define	tGlobalQuantity	360
# define	tEntityType	361
# define	tEntitySubType	362
# define	tNameOfConstraint	363
# define	tFormulation	364
# define	tQuantity	365
# define	tNameOfSpace	366
# define	tIndexOfSystem	367
# define	tSymmetry	368
# define	tEquation	369
# define	tGalerkin	370
# define	tdeRham	371
# define	tGlobalTerm	372
# define	tGlobalEquation	373
# define	tDt	374
# define	tDtDof	375
# define	tDtDt	376
# define	tDtDtDof	377
# define	tJacNL	378
# define	tNeverDt	379
# define	tDtNL	380
# define	tIn	381
# define	tFull_Matrix	382
# define	tResolution	383
# define	tDefineSystem	384
# define	tNameOfFormulation	385
# define	tNameOfMesh	386
# define	tFrequency	387
# define	tSolver	388
# define	tOriginSystem	389
# define	tDestinationSystem	390
# define	tOperation	391
# define	tOperationEnd	392
# define	tSetTime	393
# define	tDTime	394
# define	tSetFrequency	395
# define	tFourierTransform	396
# define	tFourierTransformJ	397
# define	tLanczos	398
# define	tPerturbation	399
# define	tUpdate	400
# define	tUpdateConstraint	401
# define	tBreak	402
# define	tTimeLoopTheta	403
# define	tTime0	404
# define	tTimeMax	405
# define	tTheta	406
# define	tTimeLoopNewmark	407
# define	tBeta	408
# define	tGamma	409
# define	tIterativeLoop	410
# define	tNbrMaxIteration	411
# define	tRelaxationFactor	412
# define	tIterativeTimeReduction	413
# define	tDivisionCoefficient	414
# define	tChangeOfState	415
# define	tChangeOfCoordinates	416
# define	tChangeOfCoordinates2	417
# define	tSystemCommand	418
# define	tGenerateFMMGroups	419
# define	tGenerateOnly	420
# define	tGenerateOnlyJac	421
# define	tSolveJac_AdaptRelax	422
# define	tSaveSolutionExtendedMH	423
# define	tSaveSolutionMHtoTime	424
# define	tInit_MovingBand2D	425
# define	tMesh_MovingBand2D	426
# define	tGenerate_MH_Moving	427
# define	tGenerate_MH_Moving_Separate	428
# define	tAdd_MH_Moving	429
# define	tGenerateGroup	430
# define	tGenerateJacGroup	431
# define	tSaveMesh	432
# define	tDeformeMesh	433
# define	tDummyFrequency	434
# define	tPostProcessing	435
# define	tNameOfSystem	436
# define	tPostOperation	437
# define	tNameOfPostProcessing	438
# define	tUsingPost	439
# define	tAppend	440
# define	tPlot	441
# define	tPrint	442
# define	tPrintGroup	443
# define	tEcho	444
# define	tWrite	445
# define	tAdapt	446
# define	tOnGlobal	447
# define	tOnRegion	448
# define	tOnElementsOf	449
# define	tOnGrid	450
# define	tOnSection	451
# define	tOnPoint	452
# define	tOnLine	453
# define	tOnPlane	454
# define	tOnBox	455
# define	tWithArgument	456
# define	tFile	457
# define	tDepth	458
# define	tDimension	459
# define	tTimeStep	460
# define	tHarmonicToTime	461
# define	tFormat	462
# define	tHeader	463
# define	tFooter	464
# define	tSkin	465
# define	tSmoothing	466
# define	tTarget	467
# define	tSort	468
# define	tIso	469
# define	tNoNewLine	470
# define	tDecomposeInSimplex	471
# define	tChangeOfValues	472
# define	tFrequencyLegend	473
# define	tStr	474
# define	tDate	475
# define	tDEF	476
# define	tOR	477
# define	tAND	478
# define	tEQUAL	479
# define	tNOTEQUAL	480
# define	tAPPROXEQUAL	481
# define	tLESSOREQUAL	482
# define	tGREATEROREQUAL	483
# define	tLESSLESS	484
# define	tGREATERGREATER	485
# define	tCROSSPRODUCT	486
# define	UNARYPREC	487
# define	tSHOW	488


extern YYSTYPE yylval;

#endif /* not BISON_GETDP_TAB_H */
