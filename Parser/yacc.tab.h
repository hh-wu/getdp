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
#define	tOnRegion	398
#define	tOnGrid	399
#define	tOnCut	400
#define	tOnPoint	401
#define	tOnLine	402
#define	tOnPlane	403
#define	tOnBox	404
#define	tWithArgument	405
#define	tFile	406
#define	tDepth	407
#define	tDimension	408
#define	tTimeStep	409
#define	tHarmonicToTime	410
#define	tFormat	411
#define	tHeader	412
#define	tFooter	413
#define	tSkin	414
#define	tSmoothing	415
#define	tFlag	416
#define	tExit	417
#define	tBreak	418
#define	tHelp	419
#define	tCpu	420
#define	tDEF	421
#define	tAND	422
#define	tOR	423
#define	tNOTEQUAL	424
#define	tEQUAL	425
#define	tAPPROXEQUAL	426
#define	tLESSOREQUAL	427
#define	tGREATEROREQUAL	428
#define	tLESSLESS	429
#define	tGREATERGREATER	430
#define	tCROSSPRODUCT	431
#define	UNARYPREC	432


extern YYSTYPE yylval;
