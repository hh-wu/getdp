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
#define	tInclude	263
#define	tConstant	264
#define	tDefineConstant	265
#define	tPi	266
#define	t0D	267
#define	t1D	268
#define	t2D	269
#define	t3D	270
#define	tExp	271
#define	tLog	272
#define	tLog10	273
#define	tSqrt	274
#define	tSin	275
#define	tAsin	276
#define	tCos	277
#define	tAcos	278
#define	tTan	279
#define	tAtan	280
#define	tAtan2	281
#define	tSinh	282
#define	tCosh	283
#define	tTanh	284
#define	tFabs	285
#define	tFloor	286
#define	tCeil	287
#define	tFmod	288
#define	tModulo	289
#define	tHypot	290
#define	tSolidAngle	291
#define	tTrace	292
#define	tOrder	293
#define	tCrossProduct	294
#define	tGroup	295
#define	tDefineGroup	296
#define	tAll	297
#define	tInSupport	298
#define	tDefineFunction	299
#define	tList	300
#define	tListAlt	301
#define	tConstraint	302
#define	tRegion	303
#define	tSubRegion	304
#define	tRegionRef	305
#define	tSubRegionRef	306
#define	tFilter	307
#define	tCoefficient	308
#define	tValue	309
#define	tTimeFunction	310
#define	tBranch	311
#define	tNode	312
#define	tLoop	313
#define	tNameOfResolution	314
#define	tJacobian	315
#define	tCase	316
#define	tIntegration	317
#define	tType	318
#define	tSubType	319
#define	tCriterion	320
#define	tGeoElement	321
#define	tNumberOfPoints	322
#define	tMaxNumberOfPoints	323
#define	tNumberOfDivisions	324
#define	tMaxNumberOfDivisions	325
#define	tStoppingCriterion	326
#define	tFunctionSpace	327
#define	tName	328
#define	tBasisFunction	329
#define	tNameOfCoef	330
#define	tFunction	331
#define	tSupport	332
#define	tEntity	333
#define	tSubSpace	334
#define	tNameOfBasisFunction	335
#define	tGlobalQuantity	336
#define	tEntityType	337
#define	tEntitySubType	338
#define	tNameOfConstraint	339
#define	tFormulation	340
#define	tQuantity	341
#define	tNameOfSpace	342
#define	tIndexOfSystem	343
#define	tSymmetry	344
#define	tEquation	345
#define	tGalerkin	346
#define	tdeRham	347
#define	tGlobalTerm	348
#define	tGlobalEquation	349
#define	tDt	350
#define	tDtDof	351
#define	tDtDt	352
#define	tDtDtDof	353
#define	tJacNL	354
#define	tNeverDt	355
#define	tIn	356
#define	tResolution	357
#define	tDefineSystem	358
#define	tNameOfFormulation	359
#define	tNameOfMesh	360
#define	tFrequency	361
#define	tSolver	362
#define	tOriginSystem	363
#define	tDestinationSystem	364
#define	tOperation	365
#define	tOperationEnd	366
#define	tSetTime	367
#define	tDTime	368
#define	tSetFrequency	369
#define	tFourierTransform	370
#define	tIf	371
#define	tElse	372
#define	tLanczos	373
#define	tUpdate	374
#define	tTimeLoopTheta	375
#define	tTime0	376
#define	tTimeMax	377
#define	tTheta	378
#define	tTimeLoopNewmark	379
#define	tBeta	380
#define	tGamma	381
#define	tIterativeLoop	382
#define	tNbrMaxIteration	383
#define	tRelaxationFactor	384
#define	tIterativeTimeReduction	385
#define	tDivisionCoefficient	386
#define	tChangeOfState	387
#define	tChangeOfCoordinates	388
#define	tPostProcessing	389
#define	tNameOfSystem	390
#define	tPostOperation	391
#define	tNameOfPostProcessing	392
#define	tUsingPost	393
#define	tAppend	394
#define	tPlot	395
#define	tPrint	396
#define	tWrite	397
#define	tAdapt	398
#define	tOnRegion	399
#define	tOnGrid	400
#define	tOnCut	401
#define	tOnPoint	402
#define	tOnLine	403
#define	tOnPlane	404
#define	tOnBox	405
#define	tWithArgument	406
#define	tFile	407
#define	tDepth	408
#define	tDimension	409
#define	tTimeStep	410
#define	tHarmonicToTime	411
#define	tFormat	412
#define	tHeader	413
#define	tFooter	414
#define	tSkin	415
#define	tSmoothing	416
#define	tTarget	417
#define	tSort	418
#define	tFlag	419
#define	tExit	420
#define	tBreak	421
#define	tHelp	422
#define	tCpu	423
#define	tDEF	424
#define	tAND	425
#define	tOR	426
#define	tNOTEQUAL	427
#define	tEQUAL	428
#define	tAPPROXEQUAL	429
#define	tLESSOREQUAL	430
#define	tGREATEROREQUAL	431
#define	tLESSLESS	432
#define	tGREATERGREATER	433
#define	tCROSSPRODUCT	434
#define	UNARYPREC	435


extern YYSTYPE yylval;
