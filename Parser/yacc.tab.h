typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
} YYSTYPE;
#define	tINT	258
#define	tFLOAT	259
#define	tSTRING	260
#define	tBIGSTR	261
#define	tEND	262
#define	tDOTS	263
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
#define	tGroup	296
#define	tDefineGroup	297
#define	tAll	298
#define	tInSupport	299
#define	tDefineFunction	300
#define	tList	301
#define	tListAlt	302
#define	tConstraint	303
#define	tRegion	304
#define	tSubRegion	305
#define	tRegionRef	306
#define	tSubRegionRef	307
#define	tFilter	308
#define	tCoefficient	309
#define	tValue	310
#define	tTimeFunction	311
#define	tBranch	312
#define	tNode	313
#define	tLoop	314
#define	tNameOfResolution	315
#define	tJacobian	316
#define	tCase	317
#define	tIntegration	318
#define	tType	319
#define	tSubType	320
#define	tCriterion	321
#define	tGeoElement	322
#define	tNumberOfPoints	323
#define	tMaxNumberOfPoints	324
#define	tNumberOfDivisions	325
#define	tMaxNumberOfDivisions	326
#define	tStoppingCriterion	327
#define	tFunctionSpace	328
#define	tName	329
#define	tBasisFunction	330
#define	tNameOfCoef	331
#define	tFunction	332
#define	tSupport	333
#define	tEntity	334
#define	tSubSpace	335
#define	tNameOfBasisFunction	336
#define	tGlobalQuantity	337
#define	tEntityType	338
#define	tEntitySubType	339
#define	tNameOfConstraint	340
#define	tFormulation	341
#define	tQuantity	342
#define	tNameOfSpace	343
#define	tIndexOfSystem	344
#define	tSymmetry	345
#define	tEquation	346
#define	tGalerkin	347
#define	tdeRham	348
#define	tGlobalTerm	349
#define	tGlobalEquation	350
#define	tDt	351
#define	tDtDof	352
#define	tDtDt	353
#define	tDtDtDof	354
#define	tJacNL	355
#define	tNeverDt	356
#define	tIn	357
#define	tResolution	358
#define	tDefineSystem	359
#define	tNameOfFormulation	360
#define	tNameOfMesh	361
#define	tFrequency	362
#define	tSolver	363
#define	tOriginSystem	364
#define	tDestinationSystem	365
#define	tOperation	366
#define	tOperationEnd	367
#define	tSetTime	368
#define	tDTime	369
#define	tSetFrequency	370
#define	tFourierTransform	371
#define	tIf	372
#define	tElse	373
#define	tLanczos	374
#define	tUpdate	375
#define	tTimeLoopTheta	376
#define	tTime0	377
#define	tTimeMax	378
#define	tTheta	379
#define	tTimeLoopNewmark	380
#define	tBeta	381
#define	tGamma	382
#define	tIterativeLoop	383
#define	tNbrMaxIteration	384
#define	tRelaxationFactor	385
#define	tIterativeTimeReduction	386
#define	tDivisionCoefficient	387
#define	tChangeOfState	388
#define	tChangeOfCoordinates	389
#define	tSystemCommand	390
#define	tPostProcessing	391
#define	tNameOfSystem	392
#define	tPostOperation	393
#define	tNameOfPostProcessing	394
#define	tUsingPost	395
#define	tAppend	396
#define	tPlot	397
#define	tPrint	398
#define	tWrite	399
#define	tAdapt	400
#define	tOnRegion	401
#define	tOnGrid	402
#define	tOnCut	403
#define	tOnPoint	404
#define	tOnLine	405
#define	tOnPlane	406
#define	tOnBox	407
#define	tWithArgument	408
#define	tFile	409
#define	tDepth	410
#define	tDimension	411
#define	tTimeStep	412
#define	tHarmonicToTime	413
#define	tFormat	414
#define	tHeader	415
#define	tFooter	416
#define	tSkin	417
#define	tSmoothing	418
#define	tTarget	419
#define	tSort	420
#define	tIso	421
#define	tFlag	422
#define	tExit	423
#define	tBreak	424
#define	tHelp	425
#define	tCpu	426
#define	tDEF	427
#define	tAND	428
#define	tOR	429
#define	tNOTEQUAL	430
#define	tEQUAL	431
#define	tAPPROXEQUAL	432
#define	tLESSOREQUAL	433
#define	tGREATEROREQUAL	434
#define	tLESSLESS	435
#define	tGREATERGREATER	436
#define	tCROSSPRODUCT	437
#define	UNARYPREC	438


extern YYSTYPE yylval;
