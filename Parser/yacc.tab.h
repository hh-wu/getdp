typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
} YYSTYPE;
#define	tINT	257
#define	tFLOAT	258
#define	tSTRING	259
#define	tBIGSTR	260
#define	tEND	261
#define	tDOTS	262
#define	tStrCat	263
#define	tInclude	264
#define	tConstant	265
#define	tDefineConstant	266
#define	tPi	267
#define	t0D	268
#define	t1D	269
#define	t2D	270
#define	t3D	271
#define	tExp	272
#define	tLog	273
#define	tLog10	274
#define	tSqrt	275
#define	tSin	276
#define	tAsin	277
#define	tCos	278
#define	tAcos	279
#define	tTan	280
#define	tAtan	281
#define	tAtan2	282
#define	tSinh	283
#define	tCosh	284
#define	tTanh	285
#define	tFabs	286
#define	tFloor	287
#define	tCeil	288
#define	tFmod	289
#define	tModulo	290
#define	tHypot	291
#define	tSolidAngle	292
#define	tTrace	293
#define	tOrder	294
#define	tCrossProduct	295
#define	tMHTimeIntegration	296
#define	tGroup	297
#define	tDefineGroup	298
#define	tAll	299
#define	tInSupport	300
#define	tDefineFunction	301
#define	tList	302
#define	tListAlt	303
#define	tConstraint	304
#define	tRegion	305
#define	tSubRegion	306
#define	tRegionRef	307
#define	tSubRegionRef	308
#define	tFilter	309
#define	tCoefficient	310
#define	tValue	311
#define	tTimeFunction	312
#define	tBranch	313
#define	tNode	314
#define	tLoop	315
#define	tNameOfResolution	316
#define	tJacobian	317
#define	tCase	318
#define	tIntegration	319
#define	tType	320
#define	tSubType	321
#define	tCriterion	322
#define	tGeoElement	323
#define	tNumberOfPoints	324
#define	tMaxNumberOfPoints	325
#define	tNumberOfDivisions	326
#define	tMaxNumberOfDivisions	327
#define	tStoppingCriterion	328
#define	tFunctionSpace	329
#define	tName	330
#define	tBasisFunction	331
#define	tNameOfCoef	332
#define	tFunction	333
#define	tSupport	334
#define	tEntity	335
#define	tSubSpace	336
#define	tNameOfBasisFunction	337
#define	tGlobalQuantity	338
#define	tEntityType	339
#define	tEntitySubType	340
#define	tNameOfConstraint	341
#define	tFormulation	342
#define	tQuantity	343
#define	tNameOfSpace	344
#define	tIndexOfSystem	345
#define	tSymmetry	346
#define	tEquation	347
#define	tGalerkin	348
#define	tdeRham	349
#define	tGlobalTerm	350
#define	tGlobalEquation	351
#define	tDt	352
#define	tDtDof	353
#define	tDtDt	354
#define	tDtDtDof	355
#define	tJacNL	356
#define	tNeverDt	357
#define	tIn	358
#define	tResolution	359
#define	tDefineSystem	360
#define	tNameOfFormulation	361
#define	tNameOfMesh	362
#define	tFrequency	363
#define	tSolver	364
#define	tOriginSystem	365
#define	tDestinationSystem	366
#define	tOperation	367
#define	tOperationEnd	368
#define	tSetTime	369
#define	tDTime	370
#define	tSetFrequency	371
#define	tFourierTransform	372
#define	tIf	373
#define	tElse	374
#define	tLanczos	375
#define	tUpdate	376
#define	tTimeLoopTheta	377
#define	tTime0	378
#define	tTimeMax	379
#define	tTheta	380
#define	tTimeLoopNewmark	381
#define	tBeta	382
#define	tGamma	383
#define	tIterativeLoop	384
#define	tNbrMaxIteration	385
#define	tRelaxationFactor	386
#define	tIterativeTimeReduction	387
#define	tDivisionCoefficient	388
#define	tChangeOfState	389
#define	tChangeOfCoordinates	390
#define	tSystemCommand	391
#define	tPostProcessing	392
#define	tNameOfSystem	393
#define	tPostOperation	394
#define	tNameOfPostProcessing	395
#define	tUsingPost	396
#define	tAppend	397
#define	tPlot	398
#define	tPrint	399
#define	tWrite	400
#define	tAdapt	401
#define	tOnGlobal	402
#define	tOnRegion	403
#define	tOnElementsOf	404
#define	tOnGrid	405
#define	tOnCut	406
#define	tOnPoint	407
#define	tOnLine	408
#define	tOnPlane	409
#define	tOnBox	410
#define	tWithArgument	411
#define	tFile	412
#define	tDepth	413
#define	tDimension	414
#define	tTimeStep	415
#define	tHarmonicToTime	416
#define	tFormat	417
#define	tHeader	418
#define	tFooter	419
#define	tSkin	420
#define	tSmoothing	421
#define	tTarget	422
#define	tSort	423
#define	tIso	424
#define	tNoNewLine	425
#define	tFlag	426
#define	tBreak	427
#define	tHelp	428
#define	tCpu	429
#define	tDEF	430
#define	tAND	431
#define	tOR	432
#define	tNOTEQUAL	433
#define	tEQUAL	434
#define	tAPPROXEQUAL	435
#define	tLESSOREQUAL	436
#define	tGREATEROREQUAL	437
#define	tLESSLESS	438
#define	tGREATERGREATER	439
#define	tCROSSPRODUCT	440
#define	UNARYPREC	441


extern YYSTYPE yylval;
