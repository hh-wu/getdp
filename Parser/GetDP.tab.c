
/*  A Bison parser, made from GetDP.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	tINT	257
#define	tFLOAT	258
#define	tSTRING	259
#define	tBIGSTR	260
#define	tEND	261
#define	tDOTS	262
#define	tStrCat	263
#define	tSprintf	264
#define	tPrintf	265
#define	tRead	266
#define	tFor	267
#define	tEndFor	268
#define	tIf	269
#define	tElse	270
#define	tEndIf	271
#define	tFlag	272
#define	tHelp	273
#define	tCpu	274
#define	tCheck	275
#define	tInclude	276
#define	tConstant	277
#define	tList	278
#define	tListAlt	279
#define	tLinSpace	280
#define	tLogSpace	281
#define	tListFromFile	282
#define	tDefineConstant	283
#define	tPi	284
#define	t0D	285
#define	t1D	286
#define	t2D	287
#define	t3D	288
#define	tExp	289
#define	tLog	290
#define	tLog10	291
#define	tSqrt	292
#define	tSin	293
#define	tAsin	294
#define	tCos	295
#define	tAcos	296
#define	tTan	297
#define	tAtan	298
#define	tAtan2	299
#define	tSinh	300
#define	tCosh	301
#define	tTanh	302
#define	tFabs	303
#define	tFloor	304
#define	tCeil	305
#define	tFmod	306
#define	tModulo	307
#define	tHypot	308
#define	tSolidAngle	309
#define	tTrace	310
#define	tOrder	311
#define	tCrossProduct	312
#define	tDofValue	313
#define	tMHTransform	314
#define	tMHJacNL	315
#define	tGroup	316
#define	tDefineGroup	317
#define	tAll	318
#define	tInSupport	319
#define	tMovingBand2D	320
#define	tDefineFunction	321
#define	tConstraint	322
#define	tRegion	323
#define	tSubRegion	324
#define	tRegionRef	325
#define	tSubRegionRef	326
#define	tFilter	327
#define	tCoefficient	328
#define	tValue	329
#define	tTimeFunction	330
#define	tBranch	331
#define	tNode	332
#define	tLoop	333
#define	tNameOfResolution	334
#define	tJacobian	335
#define	tCase	336
#define	tIntegration	337
#define	tFMMIntegration	338
#define	tMatrix	339
#define	tType	340
#define	tSubType	341
#define	tCriterion	342
#define	tGeoElement	343
#define	tNumberOfPoints	344
#define	tMaxNumberOfPoints	345
#define	tNumberOfDivisions	346
#define	tMaxNumberOfDivisions	347
#define	tStoppingCriterion	348
#define	tFunctionSpace	349
#define	tName	350
#define	tBasisFunction	351
#define	tNameOfCoef	352
#define	tFunction	353
#define	tdFunction	354
#define	tSubFunction	355
#define	tSubdFunction	356
#define	tSupport	357
#define	tEntity	358
#define	tSubSpace	359
#define	tNameOfBasisFunction	360
#define	tGlobalQuantity	361
#define	tEntityType	362
#define	tEntitySubType	363
#define	tNameOfConstraint	364
#define	tFormulation	365
#define	tQuantity	366
#define	tNameOfSpace	367
#define	tIndexOfSystem	368
#define	tSymmetry	369
#define	tEquation	370
#define	tGalerkin	371
#define	tdeRham	372
#define	tGlobalTerm	373
#define	tGlobalEquation	374
#define	tDiscreteGeometry	375
#define	tDt	376
#define	tDtDof	377
#define	tDtDt	378
#define	tDtDtDof	379
#define	tJacNL	380
#define	tNeverDt	381
#define	tDtNL	382
#define	tAtAnteriorTimeStep	383
#define	tIn	384
#define	tFull_Matrix	385
#define	tResolution	386
#define	tDefineSystem	387
#define	tNameOfFormulation	388
#define	tNameOfMesh	389
#define	tFrequency	390
#define	tSolver	391
#define	tOriginSystem	392
#define	tDestinationSystem	393
#define	tOperation	394
#define	tOperationEnd	395
#define	tSetTime	396
#define	tDTime	397
#define	tSetFrequency	398
#define	tFourierTransform	399
#define	tFourierTransformJ	400
#define	tLanczos	401
#define	tEigenSolve	402
#define	tEigenSolveJac	403
#define	tPerturbation	404
#define	tUpdate	405
#define	tUpdateConstraint	406
#define	tBreak	407
#define	tEvaluate	408
#define	tTimeLoopTheta	409
#define	tTime0	410
#define	tTimeMax	411
#define	tTheta	412
#define	tTimeLoopNewmark	413
#define	tBeta	414
#define	tGamma	415
#define	tIterativeLoop	416
#define	tNbrMaxIteration	417
#define	tRelaxationFactor	418
#define	tIterativeTimeReduction	419
#define	tDivisionCoefficient	420
#define	tChangeOfState	421
#define	tChangeOfCoordinates	422
#define	tChangeOfCoordinates2	423
#define	tSystemCommand	424
#define	tGenerateFMMGroups	425
#define	tGenerateOnly	426
#define	tGenerateOnlyJac	427
#define	tSolveJac_AdaptRelax	428
#define	tSaveSolutionExtendedMH	429
#define	tSaveSolutionMHtoTime	430
#define	tInit_MovingBand2D	431
#define	tMesh_MovingBand2D	432
#define	tGenerate_MH_Moving	433
#define	tGenerate_MH_Moving_Separate	434
#define	tAdd_MH_Moving	435
#define	tGenerateGroup	436
#define	tGenerateJacGroup	437
#define	tSaveMesh	438
#define	tDeformeMesh	439
#define	tDummyFrequency	440
#define	tPostProcessing	441
#define	tNameOfSystem	442
#define	tPostOperation	443
#define	tNameOfPostProcessing	444
#define	tUsingPost	445
#define	tAppend	446
#define	tPlot	447
#define	tPrint	448
#define	tPrintGroup	449
#define	tEcho	450
#define	tWrite	451
#define	tAdapt	452
#define	tOnGlobal	453
#define	tOnRegion	454
#define	tOnElementsOf	455
#define	tOnGrid	456
#define	tOnSection	457
#define	tOnPoint	458
#define	tOnLine	459
#define	tOnPlane	460
#define	tOnBox	461
#define	tWithArgument	462
#define	tFile	463
#define	tDepth	464
#define	tDimension	465
#define	tTimeStep	466
#define	tHarmonicToTime	467
#define	tFormat	468
#define	tHeader	469
#define	tFooter	470
#define	tSkin	471
#define	tSmoothing	472
#define	tTarget	473
#define	tSort	474
#define	tIso	475
#define	tNoNewLine	476
#define	tDecomposeInSimplex	477
#define	tChangeOfValues	478
#define	tTimeLegend	479
#define	tFrequencyLegend	480
#define	tEigenvalueLegend	481
#define	tEvaluationPoints	482
#define	tStore	483
#define	tLastTimeStepOnly	484
#define	tStr	485
#define	tDate	486
#define	tDEF	487
#define	tOR	488
#define	tAND	489
#define	tEQUAL	490
#define	tNOTEQUAL	491
#define	tAPPROXEQUAL	492
#define	tLESSOREQUAL	493
#define	tGREATEROREQUAL	494
#define	tLESSLESS	495
#define	tGREATERGREATER	496
#define	tCROSSPRODUCT	497
#define	UNARYPREC	498
#define	tSHOW	499

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.91 2005-08-21 14:18:26 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Ruth Sabariego
 *   Johan Gyselinck
 */

/* Modifs a faire:

   Patrick: definir des structures avec valeurs par defaut,
   e.g. BasisFunction_D = ...  (dans un fichier a part).

   Christophe: introduire les listes au sein des expressions (comme
   c'est fait dans les expression-cst), afin de gerer les vecteurs,
   tenseurs, etc., directement, et pas par l'intermediaire d'une
   fonction de creation. */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "Data_Passive.h"
#include "Data_Active.h"
#include "Data_DefineE.h"
#include "Malloc.h"
#include "Tools.h"
#include "Init_Problem.h"
#include "Print_ProblemStructure.h"
#include "BF_Function.h"
#include "Quadrature.h"
#include "Cal_Value.h"
#include "Parser.h"
#include "Message.h"
#include "Magic.h"

void Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				int (*fcmp)(const void *a, const void *b)) ;
int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) ;
int  Add_Expression(struct Expression * Expression_P, char * Name, int Flag_Plus) ;
void Pro_DefineQuantityIndex(List_T * WholeQuantity_L,int DefineQuantityIndexEqu,
			     int * NbrQuantityIndex, int ** QuantityIndexTable,
			     int ** QuantityTraceGroupIndexTable) ;
void Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) ;
void Help(char *topic) ;
int  Print_ListOfDouble(char *format, List_T *list, char *buffer) ;


void yyerror(char *s) ;
void vyyerror(char *fmt, ...) ;
int  yylex();

extern FILE            *yyin ;
extern long int         yylinenum ;
extern char             yyname[MAX_FILE_NAME_LENGTH], yyincludename[MAX_FILE_NAME_LENGTH] ;
extern int              yycolnum, yyincludenum ;
extern char            *yytext ;

extern int                     ErrorLevel, InteractiveLevel ;
extern struct Problem          Problem_S ;
extern struct PostProcessing   InteractivePostProcessing_S ;
extern struct PostSubOperation InteractivePostSubOperation_S ;
extern int                     InteractiveCompute ;

List_T  * ConstantTable_L, * ListDummy_L ;
List_T  * ListOfInt_L, * ListOfTwoInt_L ;
List_T  * ListOfPointer_L, * ListOfPointer2_L, * ListOfChar_L ;
List_T  * Current_BasisFunction_L, * Current_SubSpace_L, * Current_GlobalQuantity_L ;
List_T  * Current_WholeQuantity_L, * Current_System_L ;
List_T  * Operation_L ;

int      Nbr_Index, Flag_MultipleIndex, Save_Nbr_Index ;
List_T  * ListOfInitialList0_L, * InitialList0_L ;
List_T  * ListOfInitialList2_L, * InitialList2_L ;
List_T  * ListOfInitialList_L, * ListOfInitialSuppList_L ;
List_T  * ListOfDefineSystem, * ListOfListOfFormulation ;
List_T  * ListOfConstraintPerRegion, * ListOfRegionIndex, * ListOfSubRegionIndex ;
List_T  * ListOfFormulation ;
List_T  * ListOfBasisFunction, * ListOfSupportIndex, * ListOfEntityIndex ;
List_T  * ListOfConstraintInFS, * ListOfConstraintIndex ;
List_T  * ListOfDefineQuantity, * ListOfFunctionSpaceIndex, * ListOfEquationTerm ;

List_T  * ListOfInt_Lnew ;
int     * ListOfInt_P ;

char    * Save_Name, tmpstr[1024] ;

int      i, j, k, l, FlagError ;
int      Num_BasisFunction = 1 ;
int      YaccLevel = 0 ;
int      Type_TermOperator, Type_Function, Type_SuppList ;
int      Quantity_TypeOperator, Quantity_Index ;
int      Current_DofIndexInWholeQuantity, Last_DofIndexInWholeQuantity ;
int      Current_NoDofIndexInWholeQuantity ;
int      Current_System ;
int      Nbr_Arguments ;
int      Constraint_Index ;
int      TypeOperatorDofInTrace, DefineQuantityIndexDofInTrace ;

double   d ;

time_t date_info;

FILE* File;

struct Constant  Constant_S, Constant1_S, Constant2_S ;

struct Expression             Expression_S, * Expression_P ;
struct ExpressionPerRegion      ExpressionPerRegion_S ;

struct Group                  Group_S ;

struct Constraint             Constraint_S, * Constraint_P ;
struct ConstraintPerRegion      ConstraintPerRegion_S, * ConstraintPerRegion_P ;
struct MultiConstraintPerRegion MultiConstraintPerRegion_S ;

struct JacobianMethod         JacobianMethod_S ;
struct JacobianCase             JacobianCase_S ;

struct IntegrationMethod      IntegrationMethod_S ;
struct IntegrationCase          IntegrationCase_S ;
struct Quadrature               QuadratureCase_S ;

struct FunctionSpace          FunctionSpace_S ;
struct BasisFunction            BasisFunction_S ;
void  (*FunctionDummy)();
struct GlobalBasisFunction        GlobalBasisFunction_S ;
struct SubSpace                 SubSpace_S ;
struct GlobalQuantity           GlobalQuantity_S ;
struct ConstraintInFS           ConstraintInFS_S ;

struct Formulation            Formulation_S ;
struct DefineQuantity           DefineQuantity_S ;
struct EquationTerm             EquationTerm_S ;
struct WholeQuantity            WholeQuantity_S, *WholeQuantity_P ;

struct GlobalEquationTerm       GlobalEquationTerm_S ;

struct Resolution             Resolution_S ;
struct DefineSystem             DefineSystem_S ;
struct Operation                Operation_S, * Operation_P ;
struct ChangeOfState            ChangeOfState_S ;

struct PostProcessing         PostProcessing_S ;
struct PostQuantity             PostQuantity_S ;
struct PostQuantityTerm           PostQuantityTerm_S ;

struct PostOperation          PostOperation_S ;
struct PostSubOperation         PostSubOperation_S ;

#define MAX_RECUR_LOOPS 100
static double x0, x1, step;
static int ImbricatedLoop = 0, do_next;
static fpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static char *LoopControlVariablesNameTab[MAX_RECUR_LOOPS];


#line 188 "GetDP.y"
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		2040
#define	YYFLAG		-32768
#define	YYNTBASE	268

#define YYTRANSLATE(x) ((unsigned)(x) <= 499 ? yytranslate[x] : 462)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   252,     2,   260,   261,   250,     2,     2,   255,
   256,   248,   246,   265,   247,   259,   249,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   240,
     2,   242,   234,   266,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   257,     2,   258,   254,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   263,     2,   264,   267,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
   197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
   207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
   217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
   227,   228,   229,   230,   231,   232,   233,   235,   236,   237,
   238,   239,   241,   243,   244,   245,   251,   253,   262
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   189,   191,   193,   194,   195,   214,   215,   216,   224,
   227,   229,   232,   234,   236,   238,   240,   241,   245,   250,
   252,   254,   258,   259,   263,   268,   270,   274,   278,   284,
   286,   290,   291,   295,   302,   303,   305,   310,   311,   314,
   318,   319,   322,   328,   335,   343,   345,   347,   348,   352,
   357,   362,   363,   366,   367,   371,   373,   377,   378,   381,
   383,   384,   385,   393,   397,   401,   408,   412,   416,   420,
   424,   428,   432,   436,   440,   444,   448,   452,   456,   460,
   464,   467,   470,   473,   477,   479,   483,   486,   488,   491,
   492,   498,   499,   507,   508,   520,   530,   535,   540,   541,
   549,   556,   559,   562,   565,   568,   572,   575,   579,   583,
   586,   590,   592,   596,   597,   601,   608,   609,   614,   615,
   618,   622,   627,   628,   633,   634,   637,   641,   645,   650,
   651,   656,   657,   660,   664,   668,   673,   674,   679,   680,
   683,   687,   691,   696,   697,   702,   703,   706,   710,   714,
   718,   722,   726,   730,   731,   733,   736,   740,   742,   743,
   746,   750,   755,   759,   764,   770,   771,   776,   779,   780,
   783,   787,   791,   795,   799,   803,   807,   815,   819,   823,
   827,   831,   835,   843,   851,   859,   860,   863,   867,   869,
   871,   872,   875,   879,   884,   888,   893,   898,   903,   908,
   909,   914,   915,   918,   922,   926,   931,   936,   944,   948,
   952,   956,   960,   961,   962,   963,   982,   983,   988,   989,
   992,   996,  1000,  1004,  1006,  1010,  1011,  1015,  1017,  1021,
  1022,  1026,  1027,  1032,  1033,  1036,  1040,  1044,  1048,  1049,
  1054,  1055,  1058,  1062,  1066,  1070,  1075,  1076,  1079,  1083,
  1085,  1087,  1088,  1091,  1095,  1100,  1104,  1109,  1114,  1115,
  1120,  1123,  1124,  1127,  1131,  1135,  1139,  1143,  1147,  1148,
  1154,  1155,  1163,  1167,  1168,  1174,  1178,  1182,  1186,  1190,
  1194,  1195,  1199,  1200,  1203,  1206,  1209,  1214,  1219,  1224,
  1229,  1230,  1233,  1237,  1241,  1245,  1246,  1249,  1253,  1257,
  1261,  1265,  1266,  1269,  1270,  1271,  1281,  1285,  1289,  1293,
  1296,  1300,  1306,  1307,  1310,  1314,  1315,  1316,  1326,  1327,
  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1346,  1350,  1351,
  1354,  1358,  1360,  1362,  1363,  1366,  1370,  1375,  1380,  1381,
  1387,  1389,  1390,  1395,  1398,  1399,  1402,  1406,  1410,  1414,
  1418,  1422,  1426,  1430,  1434,  1436,  1439,  1443,  1444,  1448,
  1450,  1454,  1455,  1459,  1460,  1463,  1467,  1471,  1476,  1481,
  1486,  1491,  1497,  1503,  1506,  1514,  1526,  1534,  1548,  1560,
  1570,  1578,  1586,  1594,  1604,  1614,  1624,  1636,  1648,  1660,
  1666,  1684,  1698,  1714,  1726,  1740,  1741,  1749,  1750,  1758,
  1766,  1778,  1784,  1790,  1800,  1810,  1820,  1826,  1832,  1844,
  1854,  1869,  1884,  1892,  1905,  1916,  1924,  1932,  1940,  1942,
  1944,  1946,  1947,  1950,  1954,  1958,  1961,  1962,  1965,  1969,
  1973,  1977,  1981,  1986,  1987,  1990,  1994,  1998,  2002,  2006,
  2010,  2015,  2016,  2019,  2023,  2027,  2031,  2035,  2040,  2041,
  2044,  2048,  2052,  2056,  2060,  2064,  2069,  2074,  2079,  2080,
  2085,  2086,  2089,  2093,  2097,  2101,  2105,  2109,  2113,  2114,
  2117,  2121,  2123,  2124,  2127,  2131,  2136,  2141,  2145,  2150,
  2151,  2156,  2159,  2162,  2163,  2166,  2170,  2175,  2176,  2182,
  2188,  2189,  2192,  2193,  2200,  2204,  2205,  2210,  2214,  2218,
  2219,  2222,  2226,  2228,  2230,  2231,  2234,  2238,  2242,  2246,
  2250,  2255,  2256,  2265,  2266,  2267,  2271,  2279,  2287,  2296,
  2308,  2315,  2316,  2327,  2329,  2333,  2340,  2342,  2344,  2346,
  2348,  2349,  2353,  2355,  2358,  2361,  2374,  2377,  2393,  2398,
  2411,  2429,  2452,  2465,  2466,  2469,  2473,  2478,  2483,  2487,
  2490,  2493,  2497,  2501,  2505,  2509,  2513,  2517,  2521,  2525,
  2529,  2533,  2537,  2541,  2547,  2550,  2553,  2557,  2567,  2571,
  2574,  2584,  2587,  2597,  2600,  2610,  2616,  2620,  2623,  2624,
  2627,  2634,  2643,  2652,  2663,  2665,  2670,  2672,  2678,  2683,
  2688,  2696,  2701,  2709,  2715,  2723,  2729,  2738,  2739,  2743,
  2749,  2755,  2757,  2759,  2761,  2763,  2765,  2767,  2769,  2771,
  2773,  2775,  2777,  2779,  2781,  2783,  2785,  2787,  2789,  2791,
  2793,  2795,  2797,  2799,  2803,  2806,  2809,  2813,  2817,  2821,
  2825,  2829,  2833,  2837,  2841,  2845,  2849,  2853,  2857,  2861,
  2865,  2870,  2875,  2880,  2885,  2890,  2895,  2900,  2905,  2910,
  2915,  2922,  2927,  2932,  2937,  2942,  2947,  2952,  2959,  2966,
  2973,  2979,  2982,  2984,  2986,  2988,  2990,  2992,  2994,  2996,
  2998,  2999,  3001,  3003,  3007,  3009,  3011,  3015,  3019,  3023,
  3029,  3033,  3038,  3043,  3050,  3059,  3068,  3074,  3080,  3082,
  3084,  3086,  3088,  3090,  3095,  3102,  3104
};

static const short yyrhs[] = {    -1,
   269,   270,     0,     0,     0,   270,   271,   272,     0,    62,
   263,   275,   264,     0,    99,   263,   298,   264,     0,    68,
   263,   333,   264,     0,    81,   263,   318,   264,     0,    83,
   263,   324,   264,     0,    95,   263,   340,   264,     0,   111,
   263,   363,   264,     0,   132,   263,   390,   264,     0,   187,
   263,   420,   264,     0,   189,   263,   432,   264,     0,   436,
     0,   450,     0,    22,   460,     0,   273,     0,    19,     7,
     0,    19,   194,     7,     0,    19,    21,     7,     0,    19,
    36,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    62,     7,     0,    21,    99,     7,     0,    21,
    68,     7,     0,    21,    81,     7,     0,    21,    83,     7,
     0,    21,    95,     7,     0,    21,   111,     7,     0,    21,
   132,     7,     0,    21,   187,     7,     0,    21,   189,     7,
     0,    21,     3,     7,     0,     0,   274,   440,     0,     0,
     0,   275,   276,   277,     0,   459,   233,   282,     7,     0,
     5,   297,   233,   282,     7,     0,     0,     5,   295,   233,
   278,   282,     7,     0,    63,   257,   293,   258,     7,     0,
   279,     0,   459,   246,   233,   282,     7,     0,   450,     0,
   449,     0,     0,     0,   459,   257,   453,   258,   233,    66,
   280,   257,   260,   290,   281,   265,   260,   290,   265,   453,
   258,     7,     0,     0,     0,   286,   257,   283,   287,   284,
   288,   258,     0,   260,   290,     0,   282,     0,   459,   296,
     0,    69,     0,     5,     0,   290,     0,    64,     0,     0,
   294,   289,   290,     0,   294,    65,   459,   296,     0,     5,
     0,   292,     0,   263,   291,   264,     0,     0,   291,   294,
   292,     0,   291,   294,   247,   292,     0,     3,     0,   266,
   456,   266,     0,     3,     8,   453,     0,     3,     8,     3,
     8,   453,     0,   459,     0,     5,   263,   264,     0,     0,
   293,   294,     5,     0,   293,   294,     5,   263,   453,   264,
     0,     0,   265,     0,   263,   260,   453,   264,     0,     0,
   263,   264,     0,   263,     3,   264,     0,     0,   298,   299,
     0,    67,   257,   300,   258,     7,     0,     5,   257,   258,
   233,   301,     7,     0,     5,   257,   285,   258,   233,   301,
     7,     0,   450,     0,   449,     0,     0,   300,   294,     5,
     0,    23,   257,   453,   258,     0,    99,   257,     5,   258,
     0,     0,   302,   305,     0,     0,   263,   304,   264,     0,
   301,     0,   304,   265,   301,     0,     0,   306,   307,     0,
   310,     0,     0,     0,   307,   234,   308,   307,     8,   309,
   307,     0,   307,   248,   307,     0,   307,   251,   307,     0,
    58,   257,   307,   265,   307,   258,     0,   307,   249,   307,
     0,   307,   246,   307,     0,   307,   247,   307,     0,   307,
   250,   307,     0,   307,   254,   307,     0,   307,   240,   307,
     0,   307,   242,   307,     0,   307,   241,   307,     0,   307,
   243,   307,     0,   307,   237,   307,     0,   307,   238,   307,
     0,   307,   239,   307,     0,   307,   236,   307,     0,   307,
   235,   307,     0,   247,   307,     0,   246,   307,     0,   252,
   307,     0,   255,   307,   256,     0,   454,     0,   452,   315,
   317,     0,     5,   389,     0,   389,     0,   389,   315,     0,
     0,   122,   311,   257,   305,   258,     0,     0,   129,   312,
   257,   305,   265,     3,   258,     0,     0,    60,   257,     5,
   257,   313,   305,   258,   258,   263,   453,   264,     0,    61,
   257,     5,   258,   263,   453,   265,   453,   264,     0,    55,
   257,   389,   258,     0,    57,   257,   389,   258,     0,     0,
    56,   314,   257,   305,   265,   285,   258,     0,   240,     5,
   242,   257,   305,   258,     0,   261,     5,     0,   261,   212,
     0,   261,   143,     0,   261,     3,     0,   310,   260,     3,
     0,   260,     3,     0,   310,   262,   453,     0,   257,   259,
   258,     0,   257,   258,     0,   257,   316,   258,     0,   307,
     0,   316,   265,   307,     0,     0,   263,   456,   264,     0,
   263,    69,   257,   285,   258,   264,     0,     0,   318,   263,
   319,   264,     0,     0,   319,   320,     0,    96,     5,     7,
     0,    82,   263,   321,   264,     0,     0,   321,   263,   322,
   264,     0,     0,   322,   323,     0,    69,   285,     7,     0,
    69,    64,     7,     0,    81,     5,   317,     7,     0,     0,
   324,   263,   325,   264,     0,     0,   325,   326,     0,    96,
     5,     7,     0,    88,   301,     7,     0,    82,   263,   327,
   264,     0,     0,   327,   263,   328,   264,     0,     0,   328,
   329,     0,    86,     5,     7,     0,    87,     5,     7,     0,
    82,   263,   330,   264,     0,     0,   330,   263,   331,   264,
     0,     0,   331,   332,     0,    89,     5,     7,     0,    90,
   453,     7,     0,    91,   453,     7,     0,    92,   453,     7,
     0,    93,   453,     7,     0,    94,   453,     7,     0,     0,
   449,     0,   333,   334,     0,   263,   335,   264,     0,   450,
     0,     0,   335,   336,     0,    96,   459,     7,     0,    96,
   459,   295,     7,     0,    86,     5,     7,     0,    82,   263,
   337,   264,     0,    82,     5,   263,   337,   264,     0,     0,
   337,   263,   338,   264,     0,   337,   449,     0,     0,   338,
   339,     0,    86,     5,     7,     0,    69,   285,     7,     0,
    70,   285,     7,     0,    76,   301,     7,     0,    75,   301,
     7,     0,    80,   459,     7,     0,    77,   263,   454,   294,
   454,   264,     7,     0,    71,   285,     7,     0,    72,   285,
     7,     0,    99,   301,     7,     0,    74,   301,     7,     0,
    73,   301,     7,     0,    99,   257,   301,   265,   301,   258,
     7,     0,    74,   257,   301,   265,   301,   258,     7,     0,
    73,   257,   301,   265,   301,   258,     7,     0,     0,   340,
   341,     0,   263,   342,   264,     0,   450,     0,   449,     0,
     0,   342,   343,     0,    96,   459,     7,     0,    96,     5,
   295,     7,     0,    86,     5,     7,     0,    97,   263,   344,
   264,     0,   105,   263,   350,   264,     0,   107,   263,   357,
   264,     0,    68,   263,   360,   264,     0,     0,   344,   263,
   345,   264,     0,     0,   345,   346,     0,    96,     5,     7,
     0,    98,     5,     7,     0,    98,     5,   295,     7,     0,
    99,     5,   347,     7,     0,   100,   263,     5,   294,     5,
   264,     7,     0,   101,   303,     7,     0,   102,   303,     7,
     0,   103,   285,     7,     0,   104,   285,     7,     0,     0,
     0,     0,   263,   112,     5,     7,   111,     5,   295,     7,
   348,    62,   285,     7,   349,   132,     5,   296,     7,   264,
     0,     0,   350,   263,   351,   264,     0,     0,   351,   352,
     0,    96,     5,     7,     0,   106,   353,     7,     0,    98,
   355,     7,     0,     5,     0,   263,   354,   264,     0,     0,
   354,   294,     5,     0,     5,     0,   263,   356,   264,     0,
     0,   356,   294,     5,     0,     0,   357,   263,   358,   264,
     0,     0,   358,   359,     0,    96,   459,     7,     0,    86,
     5,     7,     0,    98,     5,     7,     0,     0,   360,   263,
   361,   264,     0,     0,   361,   362,     0,    98,     5,     7,
     0,   108,   286,     7,     0,   109,   289,     7,     0,   110,
   459,   296,     7,     0,     0,   363,   364,     0,   263,   365,
   264,     0,   450,     0,   449,     0,     0,   365,   366,     0,
    96,   459,     7,     0,    96,     5,   295,     7,     0,    86,
     5,     7,     0,   112,   263,   367,   264,     0,   116,   263,
   374,   264,     0,     0,   367,   263,   368,   264,     0,   367,
   449,     0,     0,   368,   369,     0,    96,   459,     7,     0,
    86,   107,     7,     0,    86,   117,     7,     0,    86,     5,
     7,     0,   186,   455,     7,     0,     0,   113,   459,   370,
   373,     7,     0,     0,   113,     5,   263,   264,   371,   373,
     7,     0,   114,     3,     7,     0,     0,   257,   372,   305,
   258,     7,     0,   130,   285,     7,     0,    83,     5,     7,
     0,    84,     5,     7,     0,    81,     5,     7,     0,   115,
     3,     7,     0,     0,   257,   459,   258,     0,     0,   374,
   375,     0,   374,   450,     0,   374,   449,     0,   117,   263,
   380,   264,     0,   118,   263,   380,   264,     0,   119,   263,
   384,   264,     0,   120,   263,   376,   264,     0,     0,   376,
   377,     0,    86,     5,     7,     0,   110,     5,     7,     0,
   263,   378,   264,     0,     0,   378,   379,     0,    78,   389,
     7,     0,    79,   389,     7,     0,   116,   389,     7,     0,
   130,   285,     7,     0,     0,   380,   381,     0,     0,     0,
   388,   257,   382,   305,   383,   265,   305,   258,     7,     0,
   130,   285,     7,     0,    81,     5,     7,     0,    83,     5,
     7,     0,   131,     7,     0,    84,     5,     7,     0,    85,
   257,     3,   258,     7,     0,     0,   384,   385,     0,   130,
   285,     7,     0,     0,     0,   388,   257,   386,   305,   387,
   265,   389,   258,     7,     0,     0,   122,     0,   123,     0,
   124,     0,   125,     0,   126,     0,   127,     0,   128,     0,
   263,     5,   459,   264,     0,   263,   459,   264,     0,     0,
   390,   391,     0,   263,   392,   264,     0,   450,     0,   449,
     0,     0,   392,   393,     0,    96,   459,     7,     0,    96,
     5,   295,     7,     0,   133,   263,   395,   264,     0,     0,
   140,   394,   263,   402,   264,     0,   449,     0,     0,   395,
   263,   396,   264,     0,   395,   449,     0,     0,   396,   397,
     0,    96,   459,     7,     0,    86,     5,     7,     0,   134,
   398,     7,     0,   135,   460,     7,     0,   138,   400,     7,
     0,   139,   459,     7,     0,   136,   455,     7,     0,   137,
   460,     7,     0,   449,     0,   459,   296,     0,   263,   399,
   264,     0,     0,   399,   294,   459,     0,   459,     0,   263,
   401,   264,     0,     0,   401,   294,   459,     0,     0,   402,
   403,     0,     5,   459,     7,     0,   142,   301,     7,     0,
   155,   263,   409,   264,     0,   159,   263,   411,   264,     0,
   162,   263,   413,   264,     0,   165,   263,   415,   264,     0,
     5,   257,   459,   258,     7,     0,   142,   257,   301,   258,
     7,     0,   153,     7,     0,    15,   257,   301,   258,   263,
   402,   264,     0,    15,   257,   301,   258,   263,   402,   264,
    16,   263,   402,   264,     0,   144,   257,   459,   265,   301,
   258,     7,     0,   171,   257,   459,   265,   301,   265,   301,
   265,   301,   265,   301,   258,     7,     0,   171,   257,   459,
   265,   301,   265,   301,   265,   301,   258,     7,     0,   171,
   257,   459,   265,   301,   265,   301,   258,     7,     0,   172,
   257,   459,   265,   455,   258,     7,     0,   173,   257,   459,
   265,   455,   258,     7,     0,   151,   257,   459,   265,   301,
   258,     7,     0,   152,   257,   459,   265,   285,   265,   459,
   258,     7,     0,   145,   257,   459,   265,   459,   265,   455,
   258,     7,     0,   146,   257,   459,   265,   459,   265,   453,
   258,     7,     0,   147,   257,   459,   265,   453,   265,   455,
   265,   453,   258,     7,     0,   148,   257,   459,   265,   453,
   265,   453,   265,   453,   258,     7,     0,   149,   257,   459,
   265,   453,   265,   453,   265,   453,   258,     7,     0,   154,
   257,   301,   258,     7,     0,   150,   257,   459,   265,   459,
   265,   459,   265,   453,   265,   455,   265,   453,   265,   453,
   258,     7,     0,   155,   257,   453,   265,   453,   265,   301,
   265,   301,   258,   263,   402,   264,     0,   159,   257,   453,
   265,   453,   265,   301,   265,   453,   265,   453,   258,   263,
   402,   264,     0,   162,   257,   453,   265,   453,   265,   301,
   258,   263,   402,   264,     0,   162,   257,   453,   265,   453,
   265,   301,   265,   453,   258,   263,   402,   264,     0,     0,
   194,   404,   257,   406,   407,   258,     7,     0,     0,   197,
   405,   257,   406,   407,   258,     7,     0,   168,   257,   285,
   265,   301,   258,     7,     0,   168,   257,   285,   265,   301,
   265,   453,   265,   301,   258,     7,     0,   189,   257,   459,
   258,     7,     0,   170,   257,   460,   258,     7,     0,   174,
   257,   459,   265,   455,   265,   453,   258,     7,     0,   175,
   257,   459,   265,   453,   265,   460,   258,     7,     0,   176,
   257,   459,   265,   455,   265,   460,   258,     7,     0,   177,
   263,   459,   264,     7,     0,   178,   263,   459,   264,     7,
     0,   184,   263,   459,   265,   285,   265,   460,   265,   301,
   264,     7,     0,   184,   263,   459,   265,   285,   265,   460,
   264,     7,     0,   179,   257,   459,   265,   459,   265,   453,
   265,   453,   258,   263,   402,   264,     7,     0,   180,   257,
   459,   265,   459,   265,   453,   265,   453,   258,   263,   402,
   264,     7,     0,   181,   257,   459,   265,   453,   258,     7,
     0,   185,   263,     5,   265,     5,   265,   135,   460,   265,
     4,   264,     7,     0,   185,   263,     5,   265,     5,   265,
   135,   460,   264,     7,     0,   185,   263,     5,   265,     5,
   264,     7,     0,   182,   257,   459,   265,   459,   258,     7,
     0,   183,   257,   459,   265,   459,   258,     7,     0,   449,
     0,   303,     0,   459,     0,     0,   407,   408,     0,   265,
   209,   460,     0,   265,   212,   455,     0,   265,   455,     0,
     0,   409,   410,     0,   156,   453,     7,     0,   157,   453,
     7,     0,   143,   301,     7,     0,   158,   301,     7,     0,
   140,   263,   402,   264,     0,     0,   411,   412,     0,   156,
   453,     7,     0,   157,   453,     7,     0,   143,   301,     7,
     0,   160,   453,     7,     0,   161,   453,     7,     0,   140,
   263,   402,   264,     0,     0,   413,   414,     0,   163,   453,
     7,     0,    88,   453,     7,     0,   164,   301,     7,     0,
    18,   453,     7,     0,   140,   263,   402,   264,     0,     0,
   415,   416,     0,   163,   453,     7,     0,   166,   453,     7,
     0,    88,   453,     7,     0,    18,   453,     7,     0,   133,
   459,     7,     0,   167,   263,   417,   264,     0,   140,   263,
   402,   264,     0,   141,   263,   402,   264,     0,     0,   417,
   263,   418,   264,     0,     0,   418,   419,     0,    86,     5,
     7,     0,   112,     5,     7,     0,   130,   285,     7,     0,
    88,   453,     7,     0,    99,   301,     7,     0,    18,     5,
     7,     0,     0,   420,   421,     0,   263,   422,   264,     0,
   450,     0,     0,   422,   423,     0,    96,   459,     7,     0,
    96,     5,   295,     7,     0,   134,   459,   296,     7,     0,
   188,   459,     7,     0,   112,   263,   424,   264,     0,     0,
   424,   263,   425,   264,     0,   424,   450,     0,   424,   449,
     0,     0,   425,   426,     0,    96,   459,     7,     0,    75,
   263,   427,   264,     0,     0,   427,   117,   263,   428,   264,
     0,   427,     5,   263,   428,   264,     0,     0,   428,   429,
     0,     0,   388,   257,   430,   305,   258,     7,     0,    86,
     5,     7,     0,     0,   130,   431,   285,     7,     0,    81,
     5,     7,     0,    83,     5,     7,     0,     0,   432,   433,
     0,   263,   434,   264,     0,   450,     0,   449,     0,     0,
   434,   435,     0,    96,   459,     7,     0,   190,   459,     7,
     0,   214,     5,     7,     0,   192,   460,     7,     0,   140,
   263,   438,   264,     0,     0,   189,   459,   191,   459,   437,
   263,   438,   264,     0,     0,     0,   438,   439,   440,     0,
   193,   257,   442,   445,   446,   258,     7,     0,   194,   257,
   442,   445,   446,   258,     7,     0,   194,   257,     6,   265,
   301,   446,   258,     7,     0,   194,   257,     6,   265,   231,
   257,   460,   258,   446,   258,     7,     0,   196,   257,     6,
   446,   258,     7,     0,     0,   195,   257,   285,   441,   265,
   130,   285,   446,   258,     7,     0,   449,     0,   459,   444,
   265,     0,   459,   444,   443,     5,   444,   265,     0,   248,
     0,   249,     0,   246,     0,   247,     0,     0,   257,   285,
   258,     0,   199,     0,   200,   285,     0,   201,   285,     0,
   203,   263,   263,   456,   264,   263,   456,   264,   263,   456,
   264,   264,     0,   202,   285,     0,   202,   263,   301,   265,
   301,   265,   301,   264,   263,   455,   265,   455,   265,   455,
   264,     0,   204,   263,   456,   264,     0,   205,   263,   263,
   456,   264,   263,   456,   264,   264,   263,   453,   264,     0,
   206,   263,   263,   456,   264,   263,   456,   264,   263,   456,
   264,   264,   263,   453,   265,   453,   264,     0,   207,   263,
   263,   456,   264,   263,   456,   264,   263,   456,   264,   263,
   456,   264,   264,   263,   453,   265,   453,   265,   453,   264,
     0,   200,   285,   208,     5,   263,   453,   265,   453,   264,
   263,   453,   264,     0,     0,   446,   447,     0,   265,   209,
   460,     0,   265,   209,   242,   460,     0,   265,   209,   245,
   460,     0,   265,   210,   453,     0,   265,   217,     0,   265,
   218,     0,   265,   213,   453,     0,   265,   214,     5,     0,
   265,   215,   448,     0,   265,   216,   448,     0,   265,   214,
   448,     0,   265,   211,   453,     0,   265,   212,   455,     0,
   265,   198,     5,     0,   265,   220,     5,     0,   265,   219,
   453,     0,   265,    75,   455,     0,   265,   221,   453,     0,
   265,   221,   263,   456,   264,     0,   265,   222,     0,   265,
   223,     0,   265,   136,   455,     0,   265,   168,   263,   301,
   265,   301,   265,   301,   264,     0,   265,   224,   303,     0,
   265,   225,     0,   265,   225,   263,   453,   265,   453,   265,
   453,   264,     0,   265,   226,     0,   265,   226,   263,   453,
   265,   453,   265,   453,   264,     0,   265,   227,     0,   265,
   227,   263,   453,   265,   453,   265,   453,   264,     0,   265,
   228,   263,   456,   264,     0,   265,   229,     3,     0,   265,
   230,     0,     0,   448,     6,     0,    13,   255,   453,     8,
   453,   256,     0,    13,   255,   453,     8,   453,     8,   453,
   256,     0,    13,     5,   130,   263,   453,     8,   453,   264,
     0,    13,     5,   130,   263,   453,     8,   453,     8,   453,
   264,     0,    14,     0,    15,   255,   453,   256,     0,    17,
     0,    29,   257,   451,   258,     7,     0,   459,   233,   455,
     7,     0,   459,   233,     6,     7,     0,   459,   233,   231,
   257,   460,   258,     7,     0,   459,   233,   461,     7,     0,
   459,   233,    28,   257,   460,   258,     7,     0,    11,   255,
     6,   256,     7,     0,    11,   255,     6,   265,   456,   256,
     7,     0,    12,   255,   459,   256,     7,     0,    12,   255,
   459,   256,   257,   453,   258,     7,     0,     0,   451,   294,
     5,     0,   451,   294,     5,   233,   453,     0,   451,   294,
     5,   233,     6,     0,    35,     0,    36,     0,    37,     0,
    38,     0,    39,     0,    40,     0,    41,     0,    42,     0,
    43,     0,    44,     0,    45,     0,    46,     0,    47,     0,
    48,     0,    49,     0,    50,     0,    51,     0,    52,     0,
    53,     0,    54,     0,   459,     0,   454,     0,   255,   453,
   256,     0,   247,   453,     0,   252,   453,     0,   453,   247,
   453,     0,   453,   246,   453,     0,   453,   248,   453,     0,
   453,   249,   453,     0,   453,   250,   453,     0,   453,   254,
   453,     0,   453,   240,   453,     0,   453,   242,   453,     0,
   453,   241,   453,     0,   453,   243,   453,     0,   453,   237,
   453,     0,   453,   238,   453,     0,   453,   236,   453,     0,
   453,   235,   453,     0,    35,   257,   453,   258,     0,    36,
   257,   453,   258,     0,    37,   257,   453,   258,     0,    38,
   257,   453,   258,     0,    39,   257,   453,   258,     0,    40,
   257,   453,   258,     0,    41,   257,   453,   258,     0,    42,
   257,   453,   258,     0,    43,   257,   453,   258,     0,    44,
   257,   453,   258,     0,    45,   257,   453,   265,   453,   258,
     0,    46,   257,   453,   258,     0,    47,   257,   453,   258,
     0,    48,   257,   453,   258,     0,    49,   257,   453,   258,
     0,    50,   257,   453,   258,     0,    51,   257,   453,   258,
     0,    52,   257,   453,   265,   453,   258,     0,    53,   257,
   453,   265,   453,   258,     0,    54,   257,   453,   265,   453,
   258,     0,   453,   234,   453,     8,   453,     0,   453,   260,
     0,     4,     0,     3,     0,    30,     0,    31,     0,    32,
     0,    33,     0,    34,     0,   459,     0,     0,   453,     0,
   457,     0,   263,   456,   264,     0,   453,     0,   457,     0,
   456,   265,   453,     0,   456,   265,   457,     0,   453,     8,
   453,     0,   453,     8,   453,     8,   453,     0,     5,   263,
   264,     0,     5,   263,   456,   264,     0,    24,   257,     5,
   258,     0,    25,   257,     5,   265,     5,   258,     0,    26,
   257,   453,   265,   453,   265,   453,   258,     0,    27,   257,
   453,   265,   453,   265,   453,   258,     0,     5,   267,   263,
   453,   264,     0,   458,   267,   263,   453,   264,     0,     5,
     0,   458,     0,     6,     0,   459,     0,   461,     0,    10,
   255,   460,   256,     0,    10,   255,   460,   265,   456,   256,
     0,   232,     0,     9,   257,   460,   265,   460,   258,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   343,   378,   417,   420,   423,   426,   429,   430,   431,   432,
   433,   434,   435,   436,   437,   439,   441,   443,   448,   457,
   460,   462,   464,   466,   468,   470,   472,   474,   476,   478,
   480,   482,   484,   486,   488,   490,   492,   494,   496,   499,
   507,   521,   524,   525,   528,   532,   537,   539,   542,   544,
   546,   549,   551,   554,   566,   573,   581,   589,   600,   609,
   618,   625,   660,   665,   676,   679,   693,   698,   701,   750,
   763,   789,   794,   809,   827,   848,   854,   866,   875,   889,
   923,   943,   947,   957,   974,   974,   977,   983,   986,   989,
  1002,  1005,  1008,  1012,  1032,  1076,  1078,  1082,  1085,  1102,
  1111,  1118,  1121,  1126,  1132,  1136,  1141,  1146,  1152,  1159,
  1163,  1176,  1191,  1205,  1211,  1217,  1223,  1229,  1235,  1241,
  1247,  1253,  1259,  1265,  1271,  1277,  1283,  1289,  1295,  1301,
  1308,  1314,  1316,  1325,  1329,  1335,  1409,  1443,  1452,  1464,
  1466,  1478,  1480,  1492,  1494,  1508,  1520,  1526,  1532,  1534,
  1563,  1589,  1602,  1608,  1615,  1621,  1628,  1635,  1645,  1648,
  1649,  1652,  1655,  1658,  1663,  1666,  1680,  1687,  1692,  1697,
  1701,  1708,  1713,  1718,  1723,  1729,  1733,  1738,  1741,  1777,
  1785,  1790,  1799,  1803,  1812,  1815,  1820,  1825,  1830,  1838,
  1842,  1854,  1864,  1869,  1874,  1879,  1891,  1895,  1945,  1948,
  1951,  1954,  1957,  1966,  1973,  1974,  1977,  1999,  2002,  2012,
  2016,  2024,  2031,  2040,  2043,  2063,  2080,  2100,  2107,  2117,
  2121,  2133,  2158,  2183,  2188,  2196,  2204,  2213,  2231,  2240,
  2248,  2256,  2266,  2276,  2286,  2304,  2312,  2315,  2338,  2340,
  2344,  2353,  2357,  2365,  2372,  2381,  2384,  2387,  2390,  2395,
  2413,  2460,  2477,  2481,  2486,  2491,  2496,  2510,  2530,  2535,
  2540,  2564,  2619,  2623,  2628,  2636,  2699,  2707,  2714,  2721,
  2725,  2734,  2737,  2742,  2760,  2765,  2769,  2786,  2800,  2805,
  2812,  2825,  2833,  2841,  2849,  2853,  2862,  2873,  2885,  2902,
  2974,  2986,  2990,  3025,  3028,  3031,  3075,  3082,  3085,  3107,
  3109,  3113,  3121,  3125,  3133,  3140,  3150,  3152,  3157,  3172,
  3186,  3190,  3209,  3213,  3218,  3222,  3225,  3235,  3239,  3252,
  3279,  3320,  3344,  3349,  3355,  3666,  3671,  3680,  3689,  3698,
  3703,  3706,  3744,  3761,  3785,  3790,  3797,  3802,  3805,  3808,
  3817,  3825,  3828,  3840,  3850,  3862,  3871,  3874,  3878,  3880,
  3882,  3888,  3909,  3913,  3924,  4002,  4048,  4072,  4081,  4090,
  4095,  4104,  4113,  4130,  4134,  4168,  4177,  4231,  4247,  4250,
  4251,  4252,  4253,  4254,  4255,  4256,  4260,  4283,  4305,  4312,
  4315,  4336,  4338,  4342,  4350,  4354,  4363,  4370,  4373,  4375,
  4378,  4382,  4398,  4413,  4421,  4437,  4441,  4446,  4455,  4458,
  4463,  4468,  4473,  4478,  4483,  4487,  4526,  4531,  4536,  4546,
  4558,  4562,  4567,  4578,  4587,  4596,  4622,  4629,  4635,  4641,
  4647,  4655,  4677,  4684,  4690,  4701,  4712,  4725,  4740,  4755,
  4770,  4790,  4811,  4823,  4843,  4860,  4879,  4900,  4914,  4928,
  4935,  4969,  4982,  4996,  5009,  5022,  5029,  5031,  5038,  5040,
  5051,  5063,  5073,  5081,  5094,  5107,  5121,  5131,  5141,  5155,
  5169,  5187,  5206,  5217,  5232,  5247,  5262,  5277,  5292,  5302,
  5308,  5318,  5324,  5327,  5331,  5341,  5354,  5366,  5370,  5376,
  5380,  5384,  5389,  5398,  5411,  5415,  5421,  5425,  5429,  5433,
  5438,  5447,  5459,  5462,  5468,  5472,  5476,  5480,  5489,  5504,
  5507,  5513,  5517,  5521,  5526,  5536,  5542,  5548,  5557,  5561,
  5565,  5579,  5582,  5594,  5623,  5626,  5629,  5637,  5653,  5661,
  5664,  5685,  5688,  5699,  5702,  5710,  5718,  5764,  5769,  5774,
  5778,  5781,  5783,  5788,  5795,  5799,  5803,  5808,  5814,  5820,
  5833,  5844,  5847,  5855,  5883,  5894,  5894,  5900,  5909,  5925,
  5933,  5936,  5941,  5943,  5946,  5955,  5958,  5966,  5978,  5989,
  5994,  5999,  6017,  6026,  6030,  6035,  6045,  6052,  6057,  6066,
  6075,  6084,  6090,  6095,  6102,  6116,  6138,  6141,  6142,  6143,
  6146,  6150,  6154,  6162,  6169,  6176,  6200,  6207,  6219,  6232,
  6252,  6278,  6311,  6331,  6363,  6366,  6374,  6381,  6388,  6392,
  6396,  6400,  6404,  6414,  6419,  6424,  6444,  6451,  6461,  6470,
  6479,  6486,  6494,  6498,  6507,  6511,  6515,  6523,  6529,  6533,
  6541,  6548,  6556,  6563,  6571,  6578,  6586,  6590,  6598,  6605,
  6653,  6670,  6686,  6705,  6725,  6756,  6760,  6772,  6776,  6791,
  6797,  6803,  6809,  6820,  6825,  6837,  6847,  6863,  6866,  6872,
  6878,  6889,  6891,  6892,  6893,  6894,  6895,  6896,  6897,  6898,
  6899,  6900,  6901,  6902,  6903,  6904,  6905,  6906,  6907,  6908,
  6909,  6910,  6913,  6915,  6916,  6917,  6918,  6919,  6920,  6921,
  6922,  6923,  6924,  6925,  6926,  6927,  6928,  6929,  6930,  6931,
  6932,  6933,  6934,  6935,  6936,  6937,  6938,  6939,  6940,  6941,
  6942,  6943,  6944,  6945,  6946,  6947,  6948,  6949,  6950,  6951,
  6952,  6953,  6956,  6959,  6960,  6961,  6962,  6963,  6964,  6965,
  6981,  6986,  6992,  6995,  7000,  7008,  7011,  7014,  7024,  7032,
  7043,  7059,  7081,  7096,  7134,  7142,  7152,  7162,  7171,  7176,
  7181,  7186,  7201,  7206,  7211,  7230,  7239
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tSprintf","tPrintf","tRead","tFor",
"tEndFor","tIf","tElse","tEndIf","tFlag","tHelp","tCpu","tCheck","tInclude",
"tConstant","tList","tListAlt","tLinSpace","tLogSpace","tListFromFile","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct",
"tDofValue","tMHTransform","tMHJacNL","tGroup","tDefineGroup","tAll","tInSupport",
"tMovingBand2D","tDefineFunction","tConstraint","tRegion","tSubRegion","tRegionRef",
"tSubRegionRef","tFilter","tCoefficient","tValue","tTimeFunction","tBranch",
"tNode","tLoop","tNameOfResolution","tJacobian","tCase","tIntegration","tFMMIntegration",
"tMatrix","tType","tSubType","tCriterion","tGeoElement","tNumberOfPoints","tMaxNumberOfPoints",
"tNumberOfDivisions","tMaxNumberOfDivisions","tStoppingCriterion","tFunctionSpace",
"tName","tBasisFunction","tNameOfCoef","tFunction","tdFunction","tSubFunction",
"tSubdFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity",
"tEntityType","tEntitySubType","tNameOfConstraint","tFormulation","tQuantity",
"tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham",
"tGlobalTerm","tGlobalEquation","tDiscreteGeometry","tDt","tDtDof","tDtDt","tDtDtDof",
"tJacNL","tNeverDt","tDtNL","tAtAnteriorTimeStep","tIn","tFull_Matrix","tResolution",
"tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency","tSolver","tOriginSystem",
"tDestinationSystem","tOperation","tOperationEnd","tSetTime","tDTime","tSetFrequency",
"tFourierTransform","tFourierTransformJ","tLanczos","tEigenSolve","tEigenSolveJac",
"tPerturbation","tUpdate","tUpdateConstraint","tBreak","tEvaluate","tTimeLoopTheta",
"tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop",
"tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction","tDivisionCoefficient",
"tChangeOfState","tChangeOfCoordinates","tChangeOfCoordinates2","tSystemCommand",
"tGenerateFMMGroups","tGenerateOnly","tGenerateOnlyJac","tSolveJac_AdaptRelax",
"tSaveSolutionExtendedMH","tSaveSolutionMHtoTime","tInit_MovingBand2D","tMesh_MovingBand2D",
"tGenerate_MH_Moving","tGenerate_MH_Moving_Separate","tAdd_MH_Moving","tGenerateGroup",
"tGenerateJacGroup","tSaveMesh","tDeformeMesh","tDummyFrequency","tPostProcessing",
"tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend",
"tPlot","tPrint","tPrintGroup","tEcho","tWrite","tAdapt","tOnGlobal","tOnRegion",
"tOnElementsOf","tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox",
"tWithArgument","tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime",
"tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget","tSort","tIso",
"tNoNewLine","tDecomposeInSimplex","tChangeOfValues","tTimeLegend","tFrequencyLegend",
"tEigenvalueLegend","tEvaluationPoints","tStore","tLastTimeStepOnly","tStr",
"tDate","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'",
"tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'",
"'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['",
"']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","'@'","'~'","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","MovingBand2DGroup",
"@6","@7","ReducedGroupRHS","@8","@9","GroupRHS","FunctionForGroup","ListOfRegionOrAll",
"SuppListOfRegion","SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion",
"IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex","Index","Functions",
"Function","DefineFunctions","Expression","@10","ListOfExpression","RecursiveListOfExpression",
"WholeQuantityExpression","@11","WholeQuantity","@12","@13","WholeQuantity_Single",
"@14","@15","@16","@17","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@18","@19","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"ListOfBasisFunctionCoef","RecursiveListOfBasisFunctionCoef","GlobalQuantities",
"GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm",
"Formulations","BracedFormulation","Formulation","FormulationTerm","DefineQuantities",
"DefineQuantity","DefineQuantityTerm","@20","@21","@22","IndexInFunctionSpace",
"Equations","EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@23","@24","GlobalTerm",
"GlobalTermTerm","@25","@26","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@27","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@28","@29","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@30","@31","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@32","PostSubOperations","@33",
"PostSubOperation","@34","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","PrintOptions","PrintOption","ParsedStrings","Loop","Affectation",
"DefineConstants","NameForFunction","FExpr","OneFExpr","ListOfFExpr","RecursiveListOfFExpr",
"MultiFExpr","StringIndex","String__Index","CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   269,   268,   270,   271,   270,   272,   272,   272,   272,   272,
   272,   272,   272,   272,   272,   272,   272,   272,   272,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   274,
   273,   275,   276,   275,   277,   277,   278,   277,   277,   277,
   277,   277,   277,   280,   281,   279,   283,   284,   282,   282,
   285,   285,   286,   286,   287,   287,   288,   288,   288,   289,
   290,   290,   291,   291,   291,   292,   292,   292,   292,   292,
   292,   293,   293,   293,   294,   294,   295,   296,   296,   297,
   298,   298,   299,   299,   299,   299,   299,   300,   300,   301,
   301,   302,   301,   303,   303,   304,   304,   306,   305,   307,
   308,   309,   307,   307,   307,   307,   307,   307,   307,   307,
   307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
   307,   307,   307,   310,   310,   310,   310,   310,   310,   311,
   310,   312,   310,   313,   310,   310,   310,   310,   314,   310,
   310,   310,   310,   310,   310,   310,   310,   310,   315,   315,
   315,   316,   316,   317,   317,   317,   318,   318,   319,   319,
   320,   320,   321,   321,   322,   322,   323,   323,   323,   324,
   324,   325,   325,   326,   326,   326,   327,   327,   328,   328,
   329,   329,   329,   330,   330,   331,   331,   332,   332,   332,
   332,   332,   332,   333,   333,   333,   334,   334,   335,   335,
   336,   336,   336,   336,   336,   337,   337,   337,   338,   338,
   339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
   339,   339,   339,   339,   339,   340,   340,   341,   341,   341,
   342,   342,   343,   343,   343,   343,   343,   343,   343,   344,
   344,   345,   345,   346,   346,   346,   346,   346,   346,   346,
   346,   346,   347,   348,   349,   347,   350,   350,   351,   351,
   352,   352,   352,   353,   353,   354,   354,   355,   355,   356,
   356,   357,   357,   358,   358,   359,   359,   359,   360,   360,
   361,   361,   362,   362,   362,   362,   363,   363,   364,   364,
   364,   365,   365,   366,   366,   366,   366,   366,   367,   367,
   367,   368,   368,   369,   369,   369,   369,   369,   370,   369,
   371,   369,   369,   372,   369,   369,   369,   369,   369,   369,
   373,   373,   374,   374,   374,   374,   375,   375,   375,   375,
   376,   376,   377,   377,   377,   378,   378,   379,   379,   379,
   379,   380,   380,   382,   383,   381,   381,   381,   381,   381,
   381,   381,   384,   384,   385,   386,   387,   385,   388,   388,
   388,   388,   388,   388,   388,   388,   389,   389,   390,   390,
   391,   391,   391,   392,   392,   393,   393,   393,   394,   393,
   393,   395,   395,   395,   396,   396,   397,   397,   397,   397,
   397,   397,   397,   397,   397,   398,   398,   399,   399,   400,
   400,   401,   401,   402,   402,   403,   403,   403,   403,   403,
   403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
   403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
   403,   403,   403,   403,   403,   404,   403,   405,   403,   403,
   403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
   403,   403,   403,   403,   403,   403,   403,   403,   403,   406,
   406,   407,   407,   408,   408,   408,   409,   409,   410,   410,
   410,   410,   410,   411,   411,   412,   412,   412,   412,   412,
   412,   413,   413,   414,   414,   414,   414,   414,   415,   415,
   416,   416,   416,   416,   416,   416,   416,   416,   417,   417,
   418,   418,   419,   419,   419,   419,   419,   419,   420,   420,
   421,   421,   422,   422,   423,   423,   423,   423,   423,   424,
   424,   424,   424,   425,   425,   426,   426,   427,   427,   427,
   428,   428,   430,   429,   429,   431,   429,   429,   429,   432,
   432,   433,   433,   433,   434,   434,   435,   435,   435,   435,
   435,   437,   436,   438,   439,   438,   440,   440,   440,   440,
   440,   441,   440,   440,   442,   442,   443,   443,   443,   443,
   444,   444,   445,   445,   445,   445,   445,   445,   445,   445,
   445,   445,   445,   446,   446,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   448,   448,
   449,   449,   449,   449,   449,   449,   449,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   451,   451,   451,
   451,   452,   452,   452,   452,   452,   452,   452,   452,   452,
   452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
   452,   452,   453,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   454,   454,   454,   454,   454,   454,   454,   454,
   455,   455,   455,   455,   456,   456,   456,   456,   457,   457,
   457,   457,   457,   457,   457,   457,   458,   458,   459,   459,
   460,   460,   460,   460,   460,   460,   461
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     5,     1,     1,     0,     0,    18,     0,     0,     7,     2,
     1,     2,     1,     1,     1,     1,     0,     3,     4,     1,
     1,     3,     0,     3,     4,     1,     3,     3,     5,     1,
     3,     0,     3,     6,     0,     1,     4,     0,     2,     3,
     0,     2,     5,     6,     7,     1,     1,     0,     3,     4,
     4,     0,     2,     0,     3,     1,     3,     0,     2,     1,
     0,     0,     7,     3,     3,     6,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     2,     2,     2,     3,     1,     3,     2,     1,     2,     0,
     5,     0,     7,     0,    11,     9,     4,     4,     0,     7,
     6,     2,     2,     2,     2,     3,     2,     3,     3,     2,
     3,     1,     3,     0,     3,     6,     0,     4,     0,     2,
     3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
     4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
     3,     3,     4,     0,     4,     0,     2,     3,     3,     3,
     3,     3,     3,     0,     1,     2,     3,     1,     0,     2,
     3,     4,     3,     4,     5,     0,     4,     2,     0,     2,
     3,     3,     3,     3,     3,     3,     7,     3,     3,     3,
     3,     3,     7,     7,     7,     0,     2,     3,     1,     1,
     0,     2,     3,     4,     3,     4,     4,     4,     4,     0,
     4,     0,     2,     3,     3,     4,     4,     7,     3,     3,
     3,     3,     0,     0,     0,    18,     0,     4,     0,     2,
     3,     3,     3,     1,     3,     0,     3,     1,     3,     0,
     3,     0,     4,     0,     2,     3,     3,     3,     0,     4,
     0,     2,     3,     3,     3,     4,     0,     2,     3,     1,
     1,     0,     2,     3,     4,     3,     4,     4,     0,     4,
     2,     0,     2,     3,     3,     3,     3,     3,     0,     5,
     0,     7,     3,     0,     5,     3,     3,     3,     3,     3,
     0,     3,     0,     2,     2,     2,     4,     4,     4,     4,
     0,     2,     3,     3,     3,     0,     2,     3,     3,     3,
     3,     0,     2,     0,     0,     9,     3,     3,     3,     2,
     3,     5,     0,     2,     3,     0,     0,     9,     0,     1,
     1,     1,     1,     1,     1,     1,     4,     3,     0,     2,
     3,     1,     1,     0,     2,     3,     4,     4,     0,     5,
     1,     0,     4,     2,     0,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     2,     3,     0,     3,     1,
     3,     0,     3,     0,     2,     3,     3,     4,     4,     4,
     4,     5,     5,     2,     7,    11,     7,    13,    11,     9,
     7,     7,     7,     9,     9,     9,    11,    11,    11,     5,
    17,    13,    15,    11,    13,     0,     7,     0,     7,     7,
    11,     5,     5,     9,     9,     9,     5,     5,    11,     9,
    14,    14,     7,    12,    10,     7,     7,     7,     1,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     3,     4,     0,
     4,     2,     2,     0,     2,     3,     4,     0,     5,     5,
     0,     2,     0,     6,     3,     0,     4,     3,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     3,     3,     3,
     4,     0,     8,     0,     0,     3,     7,     7,     8,    11,
     6,     0,    10,     1,     3,     6,     1,     1,     1,     1,
     0,     3,     1,     2,     2,    12,     2,    15,     4,    12,
    17,    22,    12,     0,     2,     3,     4,     4,     3,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     5,     2,     2,     3,     9,     3,     2,
     9,     2,     9,     2,     9,     5,     3,     2,     0,     2,
     6,     8,     8,    10,     1,     4,     1,     5,     4,     4,
     7,     4,     7,     5,     7,     5,     8,     0,     3,     5,
     5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     6,     4,     4,     4,     4,     4,     4,     6,     6,     6,
     5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     0,     1,     1,     3,     1,     1,     3,     3,     3,     5,
     3,     4,     4,     6,     8,     8,     5,     5,     1,     1,
     1,     1,     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   739,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   740,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   741,     0,     0,   746,   742,    18,   743,   648,    42,
   204,   167,   180,   236,    91,   297,   379,   519,   550,     0,
     0,   635,     0,   637,     0,     0,     0,     0,    41,   574,
     0,   721,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   205,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   714,   713,   739,     0,     0,
     0,     0,     0,     0,   715,   716,   717,   718,   719,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   722,   673,     0,   723,   720,     0,
     0,     0,     0,     0,     0,     0,     0,    86,     0,     6,
     0,   209,     8,   206,   208,   169,     9,   182,    10,   241,
    11,   237,   240,   239,   739,     0,     7,    92,    97,    96,
   302,    12,   298,   301,   300,   384,    13,   380,   383,   382,
   523,    14,   520,   522,   555,    15,   551,   554,   553,   562,
     0,     0,     0,     0,   581,     0,     0,   739,    63,     0,
    61,   572,     0,    88,   594,     0,     0,   640,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   675,   676,     0,   725,     0,   726,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   712,   639,   642,   737,
   644,     0,   646,     0,     0,   744,     0,   638,   649,   739,
     0,    44,    50,    53,    52,     0,     0,     0,     0,     0,
     0,    98,     0,     0,     0,     0,     0,     0,     0,   636,
   583,     0,     0,     0,     0,     0,     0,     0,     0,   594,
     0,     0,   102,   594,    76,   739,    73,     0,    60,    71,
    80,     0,    57,     0,    62,     0,   738,   731,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   674,   724,     0,   729,     0,
   690,   689,   687,   688,   683,   685,   684,   686,   678,   677,
   679,   680,   681,   682,     0,     0,     0,     0,     0,     0,
     0,     0,    82,   721,     0,     0,     0,     0,     0,   207,
   210,     0,     0,   168,   170,     0,   102,     0,   181,   183,
     0,     0,     0,     0,     0,     0,   238,   242,     0,     0,
    85,     0,     0,     0,     0,   299,   303,     0,     0,   389,
   381,   385,   391,     0,     0,     0,     0,   521,   524,     0,
     0,     0,     0,     0,   552,   556,   564,     0,     0,   584,
   585,   102,   587,     0,     0,     0,     0,     0,     0,     0,
   579,   580,   577,   578,   575,     0,     0,     0,     0,   594,
   108,     0,     0,     0,    85,     0,     0,     0,    89,     0,
     0,   595,   732,   733,     0,     0,     0,     0,   691,   692,
   693,   694,   695,   696,   697,   698,   699,   700,     0,   702,
   703,   704,   705,   706,   707,     0,     0,     0,     0,   727,
   728,     0,     0,   645,     0,   747,   745,   651,   650,     0,
     0,    47,     0,    85,   739,     0,     0,     0,     0,   216,
     0,     0,   173,     0,   187,     0,     0,   289,     0,   739,
     0,   250,   267,   282,   102,     0,     0,     0,     0,   739,
     0,   309,   333,   739,     0,   392,     0,   739,     0,   530,
    88,     0,     0,   564,     0,     0,     0,   565,     0,     0,
   631,     0,     0,     0,     0,     0,     0,     0,     0,   582,
   581,     0,     0,     0,     0,   103,     0,     0,   714,    78,
    81,    72,     0,    77,     0,    66,    58,    65,   571,   721,
   721,     0,     0,     0,     0,     0,   721,     0,   629,   629,
   629,   600,   601,     0,     0,     0,   615,   616,   104,   620,
   622,   624,     0,     0,   628,     0,     0,     0,   643,     0,
     0,     0,     0,   641,   730,   711,   647,    90,     0,     0,
    64,     0,     0,     0,    45,     0,     0,   216,     0,   213,
   211,     0,     0,     0,   171,     0,   185,   184,     0,   245,
     0,   243,     0,     0,     0,     0,   102,    93,    99,   306,
     0,   304,     0,     0,     0,   386,     0,   414,     0,   525,
     0,     0,   528,   557,   565,   558,   560,   559,   563,     0,
     0,     0,     0,   102,     0,   589,     0,     0,     0,   567,
     0,     0,     0,     0,     0,   739,   652,   653,   654,   655,
   656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
   666,   667,   668,   669,   670,   671,     0,   149,     0,     0,
     0,     0,   140,   142,     0,     0,     0,     0,     0,     0,
     0,     0,   109,   110,   138,     0,   135,   720,   568,     0,
     0,    74,   594,    85,   612,   617,   102,   609,     0,     0,
   596,   599,   607,   608,   602,   603,   606,   604,   605,   611,
   610,     0,   613,   102,   619,     0,     0,     0,     0,   627,
   734,     0,     0,   701,   708,   709,   710,    87,     0,    46,
    49,    83,    51,     0,     0,   219,   214,   218,   212,   175,
   172,   189,   186,   291,   249,   244,   252,   246,   269,   247,
   284,   248,    94,     0,   305,   312,   307,   311,     0,     0,
     0,     0,   308,   334,   336,   335,   387,   395,   388,   394,
     0,   526,   534,   529,   533,   532,   527,   561,   566,     0,
   633,   632,     0,     0,     0,     0,     0,     0,   576,   100,
   101,   594,   569,   137,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   132,   131,   133,     0,   157,   155,   152,
   154,   153,   739,     0,   111,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   139,   164,    79,    75,     0,     0,
     0,     0,   597,   598,   630,     0,   106,     0,     0,     0,
     0,     0,     0,     0,    48,     0,    54,   215,     0,     0,
     0,     0,     0,     0,     0,    95,     0,   352,   352,   363,
   341,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   446,   448,
   390,   415,   469,     0,     0,     0,   102,     0,     0,     0,
     0,     0,     0,   108,     0,     0,     0,     0,   108,   108,
     0,   134,     0,   378,     0,   130,   129,   126,   127,   128,
   122,   124,   123,   125,   118,   119,   114,   117,   120,   115,
   121,   156,   158,   160,     0,   162,     0,     0,   136,     0,
    59,    70,     0,     0,   102,   614,   105,   102,     0,     0,
     0,   626,   735,   736,     0,     0,     0,     0,     0,     0,
   102,   102,   102,   102,     0,     0,     0,   102,   217,   220,
     0,     0,   174,   176,     0,     0,     0,   188,   190,     0,
     0,     0,     0,   290,   292,     0,     0,     0,     0,   104,
   104,     0,     0,   251,   253,     0,     0,     0,   268,   270,
     0,     0,     0,   283,   285,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   721,   324,   310,   313,   369,   369,
   369,     0,     0,     0,     0,     0,   721,     0,     0,     0,
   393,   396,   405,     0,     0,   102,   102,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   424,   102,     0,
   477,     0,   484,     0,   492,   499,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   531,   535,
   634,     0,     0,     0,     0,     0,     0,     0,   147,     0,
   148,     0,   144,     0,     0,     0,   108,   377,     0,   159,
   161,     0,     0,     0,   573,    88,    68,     0,   107,     0,
     0,     0,    84,     0,     0,     0,     0,     0,   102,     0,
   102,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     0,   164,   194,     0,     0,     0,     0,     0,    88,     0,
     0,   263,     0,     0,     0,     0,     0,     0,   278,   280,
     0,   274,   276,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   739,   319,     0,     0,     0,     0,
   108,     0,     0,     0,     0,   370,   371,   372,   373,   374,
   375,   376,     0,     0,   337,   353,     0,   338,     0,   339,
   364,     0,     0,     0,   346,   340,   342,     0,     0,   408,
     0,    88,     0,     0,     0,   412,     0,   410,     0,     0,
   416,     0,     0,   417,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
   104,   538,     0,     0,     0,     0,     0,     0,     0,   570,
     0,     0,   108,     0,   141,     0,     0,   112,   163,     0,
   165,    69,   102,     0,     0,     0,     0,   222,   223,   228,
   229,     0,   232,     0,   231,   225,   224,    85,   226,   221,
     0,   230,   178,   177,     0,     0,   191,   192,   293,   294,
   295,     0,   254,   255,     0,     0,     0,    85,   259,   260,
   261,   262,   271,    85,   273,    85,   272,   287,   286,   288,
   329,   327,   328,   317,   315,   316,   314,     0,   331,   323,
   330,   326,   318,     0,     0,     0,     0,     0,     0,   360,
   354,     0,   366,     0,     0,     0,   398,   397,    85,   399,
   406,   400,   403,   404,    85,   401,   402,     0,     0,     0,
   102,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     0,     0,   102,     0,     0,   102,   418,   478,     0,     0,
   102,     0,     0,     0,     0,   419,   485,     0,     0,     0,
     0,     0,   102,   420,   493,     0,     0,     0,     0,     0,
     0,     0,     0,   421,   500,   102,     0,   102,   721,   721,
   721,     0,   721,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   470,   472,   471,   472,     0,   536,     0,
   721,     0,     0,     0,     0,     0,   116,     0,     0,     0,
   151,     0,     0,     0,     0,     0,     0,    55,   102,   102,
     0,   102,   179,   196,   193,   296,   256,     0,   257,     0,
   279,     0,   275,     0,   321,     0,     0,     0,   358,   359,
   361,     0,   357,   108,   365,   108,   343,   344,     0,     0,
     0,     0,   345,   347,   407,     0,   411,     0,   422,   414,
   423,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   440,     0,   414,     0,     0,     0,     0,     0,   414,     0,
     0,     0,     0,     0,     0,     0,     0,   414,     0,     0,
     0,     0,     0,   414,   414,     0,     0,   509,     0,   453,
     0,     0,     0,     0,     0,     0,   457,   458,     0,     0,
     0,     0,     0,     0,     0,   452,     0,     0,     0,     0,
   537,     0,     0,     0,     0,     0,     0,   150,     0,     0,
   143,   113,     0,   618,   621,   623,   625,     0,     0,     0,
     0,     0,     0,     0,     0,   281,   277,   331,     0,   320,
   325,     0,   355,   367,     0,     0,     0,     0,   409,   413,
     0,     0,   721,     0,   721,     0,     0,     0,     0,     0,
   102,     0,   481,   479,   480,   482,   102,     0,   488,   486,
   487,   489,   490,   102,   497,   495,     0,   494,   496,   504,
   503,   505,     0,     0,   501,   502,     0,     0,     0,   102,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   721,   473,     0,   541,   541,     0,
   721,     0,     0,     0,     0,     0,     0,   166,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   195,
   197,     0,     0,     0,   332,   362,     0,     0,   348,   349,
   350,   351,   425,   427,     0,     0,     0,     0,     0,     0,
   433,     0,     0,   483,     0,   491,     0,   498,   507,   508,
   511,   506,   450,     0,     0,   431,   432,     0,     0,     0,
     0,     0,   463,   467,   468,     0,   466,     0,   447,     0,
   721,   476,   449,   369,   369,   593,     0,   586,   590,     0,
     0,     0,   146,     0,   235,   234,   227,   233,     0,     0,
     0,     0,     0,     0,     0,   258,   322,   108,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     0,     0,   102,     0,   102,     0,     0,     0,     0,     0,
     0,   102,     0,   474,   475,     0,     0,     0,   546,   540,
     0,   542,   539,   721,     0,     0,     0,     0,   198,   199,
   200,   201,   202,   203,     0,     0,     0,   414,   435,   436,
     0,     0,     0,     0,   434,     0,     0,   414,     0,     0,
     0,     0,   102,     0,     0,   510,   512,     0,   430,     0,
   454,   455,   456,     0,     0,   460,     0,     0,     0,     0,
     0,     0,     0,   543,     0,     0,     0,   145,     0,     0,
     0,     0,     0,     0,     0,     0,   721,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     0,     0,     0,   465,     0,   548,   549,   545,     0,   108,
   588,     0,     0,     0,   264,   356,   368,   426,   437,   438,
   439,     0,   414,     0,   444,   414,   518,   513,   516,   517,
   514,   515,   451,   429,     0,   414,   414,   459,     0,   547,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   464,     0,   591,     0,    56,     0,     0,   442,
   414,   445,   428,     0,     0,   544,     0,     0,     0,     0,
   461,   462,     0,   265,     0,   443,     0,     0,     0,     0,
     0,   441,   592,    88,     0,     0,   266,     0,     0,     0
};

static const short yydefgoto[] = {  2038,
     1,     2,     3,    22,    23,    24,   106,   181,   302,   650,
   303,  1046,  1658,   231,   488,   764,   232,   233,   607,   910,
  1034,   339,   485,   340,   534,   179,   401,   345,   402,   112,
   198,   431,   480,   481,  1514,   918,   596,   597,   753,  1005,
  1532,   754,   871,   872,  1353,   866,   905,  1027,  1029,   109,
   308,   415,   664,   930,  1064,   110,   309,   420,   666,   931,
  1069,  1386,  1663,  1761,   107,   184,   307,   411,   659,   929,
  1060,   111,   192,   310,   428,   673,   933,  1085,  1397,  1995,
  2028,   674,   934,  1090,  1244,  1406,  1241,  1404,   675,   935,
  1095,   669,   932,  1075,   113,   203,   313,   437,   683,   937,
  1108,  1419,  1668,  1261,  1557,   684,   834,  1112,  1287,  1436,
  1574,  1109,  1276,  1564,  1767,  1111,  1281,  1566,  1768,  1277,
   755,   114,   208,   314,   442,   567,   687,   942,  1122,  1291,
  1439,  1297,  1445,   841,   982,  1165,  1166,  1515,  1637,  1736,
  1316,  1468,  1318,  1477,  1320,  1485,  1321,  1495,  1717,  1852,
  1907,   115,   213,   315,   449,   691,   984,  1170,  1518,  1814,
  1872,  1960,  1923,   116,   217,   316,   456,    25,   317,   578,
   700,    79,   342,   224,   476,   332,   330,   346,   492,   777,
   983,    26,   105,   756,   268,   166,   167,   269,   270,    27,
   169,    57,    58
};

static const short yypact[] = {-32768,
-32768,    71,  4479,  -180,  -111,   -84,   576,   179,  2479,   515,
   -63,   -55,   -37,    -4,    33,    41,    73,   148,   168,   171,
    22,-32768,-32768,   748,-32768,-32768,   -21,   110,   212,   494,
   441,   511,-32768,   540,   567,   583,   592,   594,-32768,   608,
-32768,   611,   621,   650,   652,   714,   723,   733,   741,   750,
   752,-32768,   227,   243,-32768,-32768,-32768,-32768,-32768,-32768,
   196,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   573,
    24,-32768,   514,-32768,   516,   561,   582,   588,-32768,-32768,
   269,  2342,  4337,  -120,   541,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   515,   515,     0,   552,    35,-32768,   -39,   115,
    78,   187,   218,   238,   233,   259,   441,   694,  4337,  4337,
   441,   574,    92,   824,  4337,-32768,-32768,  -161,   846,   602,
   616,   618,   622,   653,-32768,-32768,-32768,-32768,-32768,   667,
   688,   703,   711,   729,   731,   737,   742,   744,   756,   762,
   766,   770,   812,   817,   818,   826,   827,   828,   829,   836,
  4337,  4337,  4337,  4233,  3868,-32768,   908,-32768,-32768,   925,
  3022,  1010,  4233,    52,   767,   -91,  1036,-32768,  1090,-32768,
   978,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -109,   839,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   840,  4384,  5480,  1704,   842,   837,  1704,   -52,-32768,    27,
-32768,-32768,   847,   843,-32768,  3117,  1891,-32768,  1105,  1109,
  4337,  4337,   515,  4337,  4337,  4337,  4337,  4337,  4337,  4337,
  4337,  4337,  4337,  4337,  4337,  4337,  4337,  4337,  4337,  4337,
  4337,  4337,  4337,   515,    23,    23,  5507,  3868,   410,-32768,
  4337,  4337,  4337,  4337,  4337,  4337,  4337,  4337,  4337,  4337,
  4337,  4337,  4337,  4337,  4337,  4337,-32768,-32768,-32768,-32768,
-32768,   -17,-32768,  4337,   515,-32768,  4233,-32768,   885,   285,
   862,-32768,-32768,-32768,-32768,   -94,   252,     2,   146,   449,
    91,-32768,   492,   491,   580,   525,   857,  4337,  4337,-32768,
-32768,    92,    92,    62,   859,   860,   861,   879,   899,-32768,
    92,   436,   104,-32768,  1166,   346,-32768,  4233,-32768,-32768,
-32768,   910,-32768,   912,-32768,    36,-32768,-32768,   446,   919,
   913,  4159,  4279,   922,  5534,  5561,  5588,  5615,  5642,  5669,
  5696,  5723,  5750,  5777,  4523,  5804,  5831,  5858,  5885,  5912,
  5939,  4580,  4601,  4622,   923,-32768,-32768,  4233,  4454,  4475,
  1911,  2533,  1032,  1032,   724,   724,   724,   724,   229,   229,
    23,    23,    23,    23,  1175,  5966,   926,     4,  4285,    31,
   950,   952,-32768,  2203,   977,  4337,    26,  1228,   441,-32768,
-32768,   971,  1230,-32768,-32768,   973,    80,  1232,-32768,-32768,
   984,  1247,  1248,   996,   997,   998,-32768,-32768,  1034,  1005,
    75,  1264,  1266,  1020,  1021,-32768,-32768,  1280,  1024,-32768,
-32768,-32768,-32768,  1283,  1026,   441,   441,-32768,-32768,   441,
  1027,   441,   515,  1288,-32768,-32768,-32768,  4496,  2927,  1086,
-32768,    80,-32768,  1033,  4233,  1035,  1037,  1038,   245,  1044,
-32768,-32768,-32768,-32768,-32768,  1290,  1056,  1057,  1063,-32768,
-32768,   254,  4407,  1058,   454,   284,  1191,    21,-32768,  1318,
  4583,-32768,-32768,-32768,  1321,  4337,  4337,  1320,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4337,-32768,
-32768,-32768,-32768,-32768,-32768,  4337,  4337,  4337,  1323,  3868,
-32768,  4337,  4337,-32768,  1324,-32768,-32768,-32768,  6560,  1064,
  4337,-32768,   152,   275,  -108,  1326,   152,  5993,  1071,-32768,
  1328,    32,-32768,  1329,-32768,  1332,  1333,-32768,  1335,   395,
  1336,-32768,-32768,-32768,    80,  1111,  1339,  1342,  1344,   395,
  1347,-32768,-32768,   395,  1348,-32768,  1103,   395,  1362,-32768,
   843,  1363,  1364,-32768,  1369,  1370,  1371,  1085,  4337,  4337,
-32768,  1378,  1119,  4233,   468,  4233,  4233,  4233,  1385,-32768,
   842,  4337,  1392,   515,   279,-32768,  2283,  1391,  1396,  6560,
-32768,-32768,    39,-32768,    92,-32768,-32768,-32768,-32768,  2610,
  2610,  1142,  1401,   684,  4337,  4337,  2610,  4337,  1403,-32768,
-32768,-32768,-32768,  4337,  1404,   351,-32768,-32768,  1147,  1148,
  1149,  1151,  1152,  1413,-32768,  1159,  4643,  4664,-32768,  6020,
  6047,  6074,  6101,-32768,  6560,  6560,-32768,-32768,  3212,   152,
-32768,  1414,  1416,  1420,-32768,  1417,  1193,-32768,    48,-32768,
-32768,  1167,  1421,   471,-32768,   488,-32768,-32768,   508,-32768,
  1424,-32768,   532,   557,   559,  1425,    80,-32768,-32768,-32768,
  1426,-32768,   174,    65,  1427,-32768,   473,-32768,  1429,-32768,
   404,  1430,-32768,-32768,  1174,-32768,-32768,-32768,-32768,   748,
   400,  6128,  1176,    80,   568,-32768,   587,   597,   599,-32768,
  1179,  6155,  1183,  1187,  1439,   439,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1194,-32768,  1195,  1196,
  1200,  1201,-32768,-32768,  1454,  2283,  2283,  2283,  2283,  1458,
   135,  1460,  2055,  -130,  1209,  1209,-32768,  1210,-32768,  4337,
    40,-32768,-32768,   317,-32768,-32768,    80,-32768,   515,   515,
-32768,  6560,  6560,-32768,  6560,-32768,  1469,  1469,  1469,  6560,
-32768,  4233,  6560,    80,-32768,  4337,  4337,  4337,  4233,-32768,
-32768,  4337,  4337,-32768,-32768,-32768,-32768,-32768,  1471,-32768,
-32768,  1213,-32768,  1415,   478,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1472,-32768,-32768,-32768,-32768,  1217,  1219,
  1220,  1221,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  2747,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4337,
-32768,-32768,  4337,  1222,  1223,  1227,  1229,  1231,-32768,-32768,
-32768,-32768,-32768,-32768,  1233,  1234,  1233,  2283,  1483,  1490,
  1240,  1241,  1257,  1255,  1255,  1255,  2740,-32768,-32768,-32768,
-32768,-32768,     8,  1237,-32768,  2283,  2283,  2283,  2283,  2283,
  2283,  2283,  2283,  2283,  2283,  2283,  2283,  2283,  2283,  2283,
  2283,  1507,  4337,  1710,-32768,  1258,  6560,-32768,   327,  1260,
    69,  1259,-32768,-32768,-32768,   613,-32768,   617,  4685,  4706,
  4727,   635,  6182,  6209,-32768,  4337,-32768,-32768,   490,    60,
   341,   433,  1068,   116,   413,-32768,  1727,-32768,-32768,-32768,
-32768,  1077,    11,   -85,   157,  1265,  1270,  1271,  1274,  1276,
  1277,  1278,  1279,  1291,  1516,  1293,   150,   185,   382,  1289,
  1294,  1297,  1298,  1301,  1302,  1303,  1308,  1309,  1304,  1305,
  1314,  1317,  1319,  1322,  1334,  1315,  1327,  1340,-32768,-32768,
-32768,-32768,-32768,    46,  3307,  4748,    80,  4233,  4233,  4233,
  4233,   352,  1282,-32768,  1341,  2500,  1355,  1343,-32768,-32768,
  1360,-32768,  1273,-32768,  2283,  1453,  4055,  1395,  1395,  1395,
   477,   477,   477,   477,   760,   760,  1255,  1255,  1255,  1255,
  1255,-32768,-32768,-32768,  1345,  2055,   358,  4181,-32768,  1570,
-32768,-32768,   441,    27,    80,-32768,-32768,    80,  4337,  4337,
  4337,-32768,-32768,-32768,  3402,  1361,    92,    92,    92,    92,
   183,   214,    80,    80,  1365,   441,  1580,   277,-32768,-32768,
   172,  1593,-32768,-32768,  1366,  1600,  1621,-32768,-32768,  1625,
   100,  1629,   441,-32768,-32768,  1634,  1642,  1643,  1388,  1147,
  1147,    92,    92,-32768,-32768,  1647,    55,    64,-32768,-32768,
  1650,   441,  1651,-32768,-32768,  1652,  1653,  1656,    30,   441,
  1662,  1669,  1670,    92,  2610,-32768,-32768,-32768,  1389,  2599,
  1013,   264,  1674,   441,    67,   515,  2610,   515,    81,   441,
-32768,-32768,-32768,   441,  1673,    80,    80,  1679,   441,   441,
   441,   441,   441,   441,   441,   441,   441,-32768,    80,  4337,
-32768,  4337,-32768,  4337,-32768,-32768,    92,   515,   441,   441,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   441,  1676,   441,  1440,  1441,  1442,   441,-32768,-32768,
-32768,  4337,  1445,   638,   658,   663,   670,  1705,-32768,  1446,
-32768,  2283,-32768,  1455,  1459,  1451,-32768,-32768,  2027,-32768,
-32768,  2283,  1462,   672,-32768,   843,-32768,  1461,-32768,  4769,
  4790,  4811,-32768,  1463,  1713,  1717,  1718,  1720,    80,  1722,
    80,  1724,  1729,  1730,  1030,  1762,  1766,    80,  1767,  1768,
  1769,  1258,-32768,  1770,  1771,  1774,  1775,  1776,   843,  1778,
    74,  1523,  1783,  1782,  1784,  1787,  1788,  1790,-32768,-32768,
  1791,-32768,-32768,  1793,  1794,  1795,  1796,  1799,  1802,  1805,
  1807,  1808,  1809,  1811,   453,-32768,  1813,  1815,  1817,  1819,
-32768,  1785,  1822,  1823,  1572,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    92,  1824,-32768,-32768,  1573,-32768,    92,-32768,
-32768,  1576,  1829,  1830,-32768,-32768,-32768,  1831,  1836,-32768,
  1837,   843,  1838,  1839,  1840,-32768,  1841,-32768,  1843,  1578,
-32768,  1579,  1594,-32768,  1586,  1588,  1589,  1590,  1597,  1601,
  1612,  1613,  1619,  1607,  4832,   790,  4853,  1225,  4874,   289,
   489,  1620,  1628,  1623,  1624,  1626,  1632,  1635,  1636,  1595,
  1648,  1649,  1654,  1681,  1682,  1683,  1684,  1687,  1640,    83,
    83,-32768,  1851,  3497,  1627,  1691,  1695,  1697,  1698,-32768,
    92,  4359,-32768,  4337,-32768,  1896,  1706,-32768,  2055,    92,
-32768,-32768,    80,  4337,  4337,  4337,    27,-32768,-32768,-32768,
-32768,  1701,-32768,  1702,-32768,-32768,-32768,  1707,-32768,-32768,
  1709,-32768,-32768,-32768,  1956,   675,-32768,-32768,-32768,-32768,
-32768,  1968,-32768,-32768,  1969,  1865,  1971,  1707,-32768,-32768,
-32768,-32768,-32768,   702,-32768,   712,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1715,  1723,-32768,
-32768,-32768,-32768,  1725,  1974,  1975,  1981,  1986,  1983,-32768,
-32768,  1985,-32768,  1994,  1996,    38,-32768,-32768,   717,-32768,
-32768,-32768,-32768,-32768,   732,-32768,-32768,  1997,  1743,  2010,
    80,   441,   441,  4337,  4337,  4337,   441,    80,    92,  2017,
  4337,  1763,    80,  4337,  4337,    80,-32768,-32768,  4337,  1765,
    80,  4337,  4337,  4337,  4337,-32768,-32768,  4337,  4337,  4337,
  1777,  4337,    80,-32768,-32768,  4337,  4337,   441,  1779,  1780,
  4337,  4337,  1781,-32768,-32768,    80,  2022,    80,  2610,  2610,
  2610,  4337,  2610,  2023,  2024,   441,   441,  4337,   441,   441,
    92,  1988,  2025,-32768,-32768,-32768,-32768,    16,-32768,  1786,
  2610,  4233,  1806,  4233,  4233,  1789,-32768,  1792,  4895,  1804,
-32768,  2283,  1812,  1772,  3592,  3687,  3782,-32768,    80,    80,
  1030,    80,-32768,-32768,-32768,-32768,-32768,  2029,-32768,  2032,
-32768,  2033,-32768,  2034,-32768,   441,  2038,  2039,-32768,-32768,
-32768,  1816,-32768,-32768,-32768,-32768,-32768,-32768,  1233,  1233,
  1233,    92,-32768,-32768,-32768,   441,-32768,   441,-32768,-32768,
-32768,  1821,  1810,  1820,  4916,  4937,  4958,  1844,  1825,  1845,
-32768,  4979,-32768,  2041,   544,   565,  2050,  5000,-32768,  2064,
   600,   671,   715,  1008,  5021,  1069,  1153,-32768,  1346,  2066,
  1373,  1428,  2069,-32768,-32768,  1633,  1773,-32768,   361,-32768,
  1847,  1826,  1850,  1848,  5042,  1849,-32768,-32768,  1859,  1864,
  6236,  1858,  1879,  1875,   740,-32768,   386,   414,  1814,  1833,
-32768,  4337,  1876,   757,  4337,   773,   775,-32768,  1884,  4337,
-32768,  2055,  1866,-32768,-32768,-32768,-32768,  1897,  1886,  1892,
  1899,  1898,   778,  2073,  1900,-32768,-32768,  1723,  1908,-32768,
-32768,  2074,-32768,-32768,  2075,  2080,  2082,  2094,-32768,-32768,
  2853,  2095,  2610,  4337,  2610,  4337,  4337,   441,  2108,   441,
    80,  2953,-32768,-32768,-32768,-32768,    80,  3048,-32768,-32768,
-32768,-32768,-32768,    80,-32768,-32768,  3143,-32768,-32768,-32768,
-32768,-32768,  3238,  3333,-32768,-32768,   786,  2160,  4337,    80,
  2161,  2163,  4337,   515,   515,  4337,  4337,  2165,  2166,  2168,
   515,  2170,  2053,  2182,  2465,-32768,  2188,-32768,-32768,  5294,
  2610,  1932,  5325,  1933,  1936,  1937,  5356,-32768,  1941,  2195,
  2196,  2198,  2204,  2205,  4337,  4337,  4337,  4337,  4337,-32768,
-32768,  2102,  2207,  2208,-32768,-32768,  1951,  1952,-32768,-32768,
-32768,-32768,  2202,-32768,  1961,  6263,  1955,  5063,  5084,  1957,
-32768,  1963,  1958,-32768,  1960,-32768,   422,-32768,-32768,-32768,
-32768,-32768,-32768,  5105,   440,-32768,-32768,  6290,  2000,  2001,
  5126,  5147,-32768,-32768,-32768,   787,-32768,   515,-32768,   515,
  2610,-32768,-32768,  1419,  1872,-32768,  1967,-32768,-32768,  2016,
  4233,  4337,-32768,    27,-32768,-32768,-32768,-32768,  2219,  1818,
  1857,  1885,  1944,  2576,  2255,-32768,-32768,-32768,  1233,  2019,
  2273,  2276,  4337,  4337,  4337,  4337,  2277,    80,  4337,  2036,
  4337,   427,    80,  2278,    80,  2300,  2301,  2335,  4337,  4337,
  2343,    80,   803,-32768,-32768,  2344,  2347,  2348,-32768,-32768,
  2097,-32768,-32768,  2610,  4337,   808,  5387,  2090,-32768,-32768,
-32768,-32768,-32768,-32768,  2093,  2099,  2100,-32768,-32768,-32768,
  6317,  6344,  6371,  5168,-32768,  2101,  5189,-32768,  6398,  2355,
  2356,  4337,    80,  2357,    92,-32768,-32768,  2105,-32768,   442,
-32768,-32768,-32768,  6425,  6452,-32768,  2107,  2358,  2360,  2390,
  2391,  2392,    92,-32768,  2139,  5210,  2140,-32768,  4337,  2399,
  2401,  2402,  3428,  2406,  2407,  2409,  2610,  2154,  4337,  3523,
  2159,  2416,  2420,  2832,  2422,  2423,  2424,  2428,  2429,    80,
  2176,  2177,  2434,-32768,  2178,-32768,-32768,-32768,  2436,-32768,
-32768,  4337,  2181,  6479,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2186,-32768,  6506,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2194,-32768,-32768,-32768,  2446,-32768,
  2199,  5418,  4337,  2449,  2397,  4337,  3618,  2197,  3713,  2454,
  3808,  3903,-32768,  2455,-32768,  5231,-32768,    92,  5252,-32768,
-32768,-32768,-32768,  2457,  2458,-32768,  4337,  2464,  4337,  3998,
-32768,-32768,  5273,-32768,  6533,-32768,  4337,  2340,  2466,  5449,
  2469,-32768,-32768,   843,  2468,  2212,-32768,  2477,  2478,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -387,-32768,-32768,  -273,  1408,-32768,-32768,
  1409,  -463,-32768,  -504,-32768,  -419,  -527,  -563,-32768,-32768,
-32768,-32768,   321,-32768,  -607,-32768,  -980,-32768,  -432,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1728,-32768,  1261,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1827,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   819,-32768,-32768,-32768,-32768,-32768,
-32768,  1541,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1106,
  -714,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1418,-32768,-32768,-32768,  1180,   976,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   749,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1920,
-32768,  1828,-32768,  2398,-32768,  1931,  2297,  -324,-32768,   461,
    12,   -59,-32768,-32768,   946,  -529,  -444,  -162,   -81,-32768,
    -3,  -100,   -73
};


#define	YYLAST		6820


static const short yytable[] = {    28,
   168,   864,   175,   176,  1282,   469,    56,   692,   170,   482,
   292,   558,     4,  1180,   663,     4,   536,    70,  1185,  1186,
  1639,   785,   671,   335,   608,   336,     4,    85,   118,   335,
   539,   336,   681,   530,  1251,    80,   685,   430,   661,     4,
   689,   335,   335,   336,   336,     5,     6,   185,   460,   461,
   463,   194,   200,   205,   210,   214,   219,   470,   293,  1239,
    71,    72,    73,    11,    74,   603,   228,   757,  1242,     4,
    -2,     4,   108,  1032,   349,     5,     6,    71,    72,    73,
  1394,    74,     4,   412,   606,     4,    29,     4,     5,     6,
    71,    72,    73,    11,    74,   228,   228,   413,   762,    56,
    56,   237,   477,    28,   651,    29,    11,    28,    28,    28,
    28,    28,    28,   220,   654,  1569,  1570,   225,   225,   234,
  1167,   305,   193,   199,   204,   209,   477,   218,  1061,   902,
   229,   903,  1640,  1033,   398,   172,  1252,   879,   404,   880,
  1062,  1168,   354,    30,   173,   652,  1253,   311,   -64,   656,
   993,   405,   995,  1571,   237,   595,   651,    29,    29,   229,
   229,  1681,   406,   375,   296,   765,   766,  1572,   229,   120,
    31,  1126,   774,   297,  1692,   486,   228,   306,   478,   477,
  1698,   829,   830,   831,   832,    39,    71,    72,    73,  1707,
    74,   195,   304,    59,   397,  1713,  1714,     5,     6,    71,
    72,    73,   478,    74,   -64,   477,  1357,    60,    71,    72,
    73,  1086,    74,  1087,    29,    11,   757,   757,   757,   757,
   229,  1088,     4,   186,   187,    61,   341,   416,     5,     6,
    71,    72,    73,   417,    74,  1220,   477,     4,   395,    56,
   229,   418,     4,     5,     6,    81,    11,   378,     5,     6,
    71,    72,    73,   196,    74,   478,   908,   177,    62,   527,
    56,    11,   799,     4,   178,   414,    11,  1124,   378,     5,
     6,    71,    72,    73,    29,    74,   286,   881,   119,  1641,
  1424,   478,   287,   337,    69,   761,   338,    11,   540,   337,
   531,    56,   338,   490,   662,    63,   521,   182,   183,   477,
   491,  1573,   585,    64,   338,   338,  1479,   234,   294,  1169,
   806,   807,   478,   874,   875,   876,   877,  1240,   234,   234,
   234,   230,   168,  1063,   462,   443,  1243,   234,   833,  1290,
   170,   763,   557,   407,   479,    65,   662,   408,   757,   178,
   190,   191,    82,  1296,   911,   784,   882,   409,   429,  1283,
   230,   230,   576,   126,   127,     4,   757,   757,   757,   757,
   757,   757,   757,   757,   757,   757,   757,   757,   757,   757,
   757,   757,  1528,  1284,   757,   478,  1480,   188,   189,  1089,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   542,  1140,   850,     4,   419,
    66,   230,  1141,  1127,     5,     6,    71,    72,    73,   551,
    74,   705,  1065,   707,   708,   709,  1066,  1067,  1481,   561,
    67,   230,    11,    68,   565,   996,   826,   827,   909,  1209,
   569,  1142,   571,   572,  1900,     4,   573,  1143,   575,    56,
   197,  1482,  1483,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1933,
  1211,  1026,  1234,  1235,    83,   757,   283,   284,   285,  1940,
   201,   202,   286,   103,   341,    71,    72,    73,   287,    74,
    71,    72,    73,   714,    74,   211,   212,   104,  1091,    84,
   206,   207,   589,    71,    72,    73,  1486,    74,  1092,   491,
  1093,   598,  1901,   771,  1902,   410,   421,    86,   491,     4,
    52,   215,   216,    53,    54,  1903,  1285,  1286,   168,   168,
  1070,   125,   653,  1218,   422,   168,   715,   992,  1904,   178,
  1071,  1072,  1073,   491,   423,   424,    87,   400,   378,   604,
  1694,    29,  1484,   425,  1997,   426,  1905,  1999,  1047,  1048,
  1049,  1050,  1051,  1052,  1053,  1054,  1055,  2001,  2002,  1056,
  1197,  1695,  1189,    88,   -67,  1057,  1487,   432,     4,   226,
    32,   178,    33,  1673,  1030,  1674,   438,   433,  1058,    89,
    56,   491,  2020,   758,    34,    35,    36,   161,    90,   341,
    91,   234,   162,   434,  1068,   163,  1700,   435,   484,  1178,
    56,    37,    29,   782,    92,  1191,   491,    93,  1718,   916,
   450,  1488,  1192,   439,   836,  1719,   922,    94,  1489,  1490,
   440,   846,  1362,   272,   273,   274,   275,   276,  1144,   277,
   278,   279,   280,  1734,  1145,   281,   282,   283,   284,   285,
  1735,  1491,   757,   286,  1492,  1493,    95,   662,    96,   287,
  1260,    29,   757,   851,   451,  1392,   843,   844,   913,   914,
   808,  1737,  1294,   377,   378,   444,  1094,  1701,  1735,  1850,
    28,   471,   472,   473,   474,  1378,  1851,    28,     4,    52,
  1906,   445,    53,    54,   828,   835,  1074,  1854,   840,  1949,
   475,   752,   845,  1395,  1855,    29,  1950,  1871,  1871,   493,
   378,    80,   427,   446,   452,  1418,   453,   602,   178,    29,
    97,  1702,   895,   896,   897,   898,   899,   900,  1441,    98,
   901,   706,   378,   810,   811,   838,   839,   546,   454,    99,
   806,   928,   758,   758,   758,   758,    55,   100,   884,  1352,
   812,   813,  1494,  1059,   441,   436,   101,   341,   102,  1359,
    71,    72,    73,   117,    74,    56,    56,   447,   120,    38,
   814,   815,   121,  1205,  1206,  1207,  1208,   272,   273,   274,
   275,   276,   583,   277,   278,   279,   280,  1221,   455,   281,
   282,   283,   284,   285,   817,   818,   174,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1236,  1237,
   281,   282,   283,   284,   285,   180,   808,   122,   286,   819,
   820,   821,   822,   221,   287,  1174,  1175,  1176,  1177,   235,
  1259,   855,   378,   272,   273,   274,   275,   276,   123,   277,
   278,   279,   280,   448,   124,   281,   282,   283,   284,   285,
   856,   378,   238,   286,  1675,  1676,  1677,  1886,   239,   287,
   857,   378,   858,   378,   758,  1194,  1754,  1755,  1756,  1757,
  1758,  1759,   240,  1322,   241,   676,  1036,   378,   242,  1003,
  1037,  1038,   758,   758,   758,   758,   758,   758,   758,   758,
   758,   758,   758,   758,   758,   758,   758,   758,  1042,   378,
   758,  1346,   378,  1538,   272,   273,   274,   275,   276,   243,
   277,   278,   279,   280,   288,    55,   281,   282,   283,   284,
   285,  1347,   378,   244,   286,   769,  1348,   378,   770,  1462,
   287,   289,  1463,  1349,   378,  1361,   378,  1544,  1545,  1125,
    75,    76,    77,    78,   245,  1464,  1465,  1466,   272,   273,
   274,   275,   276,  1123,   277,   278,   279,   280,  1541,   246,
   281,   282,   283,   284,   285,  1551,   178,   247,   286,   281,
   282,   283,   284,   285,   287,  1553,   178,   286,  1550,  1991,
  1575,   178,   300,   287,  1552,   248,  1554,   249,     5,     6,
    71,    72,    73,   250,    74,  1577,   178,   824,   251,  1429,
   252,   758,   757,  1732,  1733,  1432,    11,   897,   898,   899,
   900,  1661,   253,   901,  1703,  1293,   291,  1295,   254,  1576,
  1742,   378,   255,   168,   854,  1578,   256,   165,   171,  1196,
   341,   295,   126,   127,     4,   168,  1744,   378,  1745,   378,
   301,  1760,   298,   234,   234,   234,   234,  1323,  1791,  1792,
  1861,  1862,  1216,  1467,  1622,  1623,  1624,   234,  1626,   135,
   136,   137,   138,   139,   222,   223,  1918,  1919,   257,  1229,
   236,  1927,   378,   258,   259,  1705,  1643,  1526,   234,   234,
   778,   779,   260,   261,   262,   263,  1533,   912,  1246,    71,
    72,    73,   264,    74,   299,   312,  1254,  1256,   331,  1652,
   234,   333,   318,   343,   917,   344,   265,   266,   267,   350,
  1289,  1292,    56,   351,    56,  1298,  1299,   399,   403,   457,
  1300,   464,   465,   466,  1887,  1305,  1306,  1307,  1308,  1309,
  1310,  1311,  1312,  1313,  1266,  1267,  1268,  1269,  1270,  1271,
  1272,   467,  1279,   234,    56,  1324,  1325,  1326,  1327,  1328,
  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1706,
  1339,   468,  1113,  1076,  1343,  1077,  1078,  1079,  1080,  1081,
  1082,  1083,  1114,   483,   487,   489,   494,   495,   758,   498,
   519,   524,   532,   526,   533,  1590,   352,   353,   758,   355,
   356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
   366,   367,   368,   369,   370,   371,   372,   373,   374,   537,
  1115,  1116,  1117,  1118,  1119,  1120,   379,   380,   381,   382,
   383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
   393,   394,   541,   543,   544,   545,   547,  1634,  1775,   396,
  1777,   272,   273,   274,   275,   276,   548,   277,   278,   279,
   280,   549,   550,   281,   282,   283,   284,   285,   552,   553,
   554,   286,   556,   458,   459,  1128,   555,   287,   559,   234,
   560,   277,   278,   279,   280,   234,  1280,   281,   282,   283,
   284,   285,   562,   563,   564,   286,   566,   568,   570,   574,
  1812,   287,   577,   582,   591,   584,  1817,   586,  1678,   587,
   588,   590,   272,   273,   274,   275,   276,  1173,   277,   278,
   279,   280,   592,   593,   281,   282,   283,   284,   285,   594,
   605,   601,   286,   520,   609,   636,   639,   648,   287,   644,
   647,  1084,   655,   658,   660,   665,  1516,  1516,   667,   668,
  1121,   670,   672,   677,   529,   678,   679,   234,   699,   165,
   680,   538,  1708,   682,   686,  1198,   234,  1930,  1199,  1644,
  1878,  1646,  1647,   341,  1470,   688,  1865,  1471,   690,   693,
   694,  1210,  1212,  1213,  1214,   696,   697,   698,  1219,  1710,
  1472,  1473,   703,   704,  1474,  1475,   272,   273,   274,   275,
   276,   710,   277,   278,   279,   280,   713,   759,   281,   282,
   283,   284,   285,   760,   767,   768,   286,   776,   781,   784,
   786,   787,   287,   788,   789,   790,   791,   168,   168,   168,
   800,   168,   801,   803,   802,   804,   531,   809,   600,  1925,
   816,   823,   825,   837,  1711,   842,   847,   848,   853,   168,
   861,   637,   638,   859,   862,   863,  1302,  1303,  1583,  1584,
   865,   867,   868,  1588,   640,   234,   869,   870,   873,  1314,
   878,   641,   642,   643,   883,   904,  -672,   645,   646,  1262,
  2035,  1263,  1264,  1265,   915,   926,   649,   925,   936,   938,
   927,   939,   940,   941,  1613,   988,   987,   997,  1476,   989,
   994,   990,  1972,   991,   998,   752,   999,  1000,  1001,  1866,
  1004,  1867,  1629,  1630,  1868,  1632,  1633,   234,   901,  1022,
  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1031,  1273,  1274,
  1028,  1129,  1138,  1035,   701,   702,  1130,  1131,   758,  1372,
  1132,  1374,  1133,  1134,  1135,  1136,  1188,   712,  1381,  1179,
  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1137,  1869,  1139,
  1147,  1146,  1669,  1148,  1149,   165,   165,  1150,  1151,  1152,
   772,   773,   165,   775,  1153,  1154,  1155,  1156,   234,   780,
  1157,   783,  1679,  1158,  1680,  1159,  1195,  1162,  1160,   272,
   273,   274,   275,   276,  1217,   277,   278,   279,   280,  1163,
  1161,   281,   282,   283,   284,   285,  1164,  1222,  1181,   286,
  1184,   168,  1190,   168,  1224,   287,   272,   273,   274,   275,
   276,  1183,   277,   278,   279,   280,  1187,  1204,   281,   282,
   283,   284,   285,  1799,  1800,  1225,   286,  1215,  1223,  1226,
  1806,  1947,   287,  1032,   891,   892,   893,   894,  1230,  1715,
   895,   896,   897,   898,   899,   900,  1231,  1232,   901,  1959,
  1233,  1238,  1275,   168,  1245,  1247,  1248,  1249,  1876,   168,
  1250,   272,   273,   274,   275,   276,  1255,   277,   278,   279,
   280,  1257,  1258,   281,   282,   283,   284,   285,  1288,  1301,
  1338,   286,  1870,  1534,  1780,  1304,  1782,   287,   887,   888,
   889,   890,   891,   892,   893,   894,  1340,  1341,   895,   896,
   897,   898,   899,   900,  1342,   907,   901,  1863,  1345,  1864,
  1351,  1350,   126,   127,   716,  1356,  1355,  1354,  1360,  1368,
    56,    56,  1367,  1369,  1370,  1363,  1371,    56,  1373,   168,
  1375,   919,   920,   921,  2018,  1376,  1377,   923,   924,   135,
   136,   137,   138,   139,   717,   718,   719,   720,   721,   722,
   723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
   733,   734,   735,   736,   737,   738,   739,   740,  1379,   741,
   742,  1582,  1380,  1382,  1383,  1384,  1387,  1388,  1589,  1716,
  1389,  1390,  1391,  1594,  1393,  1396,  1597,  1398,  1399,  1425,
  1400,  1600,   168,  1401,  1402,   985,  1403,  1405,   986,  1407,
  1408,  1409,  1410,  1610,    56,  1411,    56,  1096,  1412,  1097,
  1098,  1413,  1099,  1414,  1415,  1416,  1619,  1417,  1621,  1420,
   341,  1421,  1100,  1422,  1880,  1423,  1426,  1427,  1428,  1431,
  1430,   743,  1433,  1434,  1435,  1448,  1449,  1437,   744,  1101,
  1102,  1103,  1438,  1440,  1442,  1443,  1444,  1446,  1023,  1447,
  1451,  1450,  1452,  1453,  1454,   168,  1104,  1519,  1504,  1659,
  1660,  1455,  1662,  1881,  1460,  1456,   272,   273,   274,   275,
   276,  1045,   277,   278,   279,   280,  1457,  1458,   281,   282,
   283,   284,   285,  1459,  1496,  1497,   286,  1498,  1499,  1521,
  1500,  1882,   287,   126,   127,   128,  1501,  1513,  1530,  1502,
  1503,   234,   321,   322,   323,   324,   325,   326,   327,   328,
   329,  1505,  1105,  1506,   130,   131,   132,   133,  1507,   234,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,  1508,  1509,  1510,  1511,   745,
  1883,  1512,  1866,  1522,  1867,   746,   747,  1868,  1523,  1524,
  1525,   748,  1543,  1531,   749,  1539,  1540,  1024,  1025,   750,
   751,   178,   752,  1542,  1546,  1547,  1548,  1549,  1555,  1556,
  1559,  1560,  1558,  1106,  1200,  1201,  1202,  1561,  1562,  1563,
  1107,  1565,  1635,  1266,  1267,  1268,  1269,  1270,  1271,  1272,
  1567,  1869,  1568,  1579,   234,  1580,   272,   273,   274,   275,
   276,  1783,   277,   278,   279,   280,  1581,  1785,   281,   282,
   283,   284,   285,  1591,  1787,  1593,   286,  1599,  1620,  1627,
  1628,  1636,   287,  1664,  1358,  1654,  1665,  1666,  1667,  1608,
  1795,  1614,  1615,  1618,  1670,  1671,  1648,  1693,  1642,  1649,
   165,   272,   273,   274,   275,   276,  1696,   277,   278,   279,
   280,  1651,   165,   281,   282,   283,   284,   285,  1645,  1653,
  1699,   286,  1709,  1672,  1683,  1712,  1738,   287,  1682,  1762,
  1766,  1769,  1689,  1721,  1684,  1315,  1770,  1317,  1771,  1319,
   272,   273,   274,   275,   276,  1739,   277,   278,   279,   280,
  1772,  1774,   281,   282,   283,   284,   285,  1722,  1688,  1690,
   286,  1720,  1723,  1725,  1781,  1729,   287,  1344,   272,   273,
   274,   275,   276,  1726,   277,   278,   279,   280,  1727,  1748,
   281,   282,   283,   284,   285,  1873,  1730,   161,   286,  1731,
  1741,  1746,   162,  1750,   287,   163,   274,   275,   276,  1751,
   277,   278,   279,   280,   348,  1753,   281,   282,   283,   284,
   285,  1749,  1752,  1763,   286,  1765,  1793,  1796,  1896,  1797,
   287,  1803,  1804,  1908,  1805,  1910,  1807,   272,   273,   274,
   275,   276,  1917,   277,   278,   279,   280,  1808,  1809,   281,
   282,   283,   284,   285,  1813,  1818,  1820,   286,  1821,  1822,
  1824,  1825,  1826,   287,  1827,   126,   127,   535,   129,  1829,
  1828,    53,  1835,  1836,  1837,  1838,  1839,  1840,  1841,  1843,
  1847,  1846,  1848,  1945,  1849,  1879,   130,   131,   132,   133,
   134,  1874,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,  1857,  1858,  1885,
   885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
  1985,   229,   895,   896,   897,   898,   899,   900,  1875,  1889,
   901,  1888,  1890,  1895,  1909,   126,   127,   716,   885,   886,
   887,   888,   889,   890,   891,   892,   893,   894,  1898,  1529,
   895,   896,   897,   898,   899,   900,  1911,  1912,   901,  1535,
  1536,  1537,   135,   136,   137,   138,   139,   717,   718,   719,
   720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
   730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
   740,  1913,   741,   742,   126,   127,   128,   129,  1920,  1916,
    53,  1921,  1922,  1924,  1929,   662,  1931,  1932,  1938,  1942,
  1943,  1946,  1948,  1955,  1954,   130,   131,   132,   133,   134,
  1953,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,  1956,  1957,  1958,  1585,
  1586,  1587,  1961,  1963,   743,  1965,  1592,  1966,  1967,  1595,
  1596,   744,  1969,  1970,  1598,  1971,  1973,  1601,  1602,  1603,
  1604,  1976,  1977,  1605,  1606,  1607,  1978,  1609,  1980,  1981,
  1982,  1611,  1612,   160,  1983,  1984,  1616,  1617,  1986,  1987,
  1988,  1989,  1990,  1993,   165,   165,   165,  1625,   165,   161,
  1996,  2000,  2003,  1631,   162,  2007,  2004,   163,  2008,  2011,
  2013,  2016,   230,  2021,  2022,   164,   165,   126,   127,   128,
  2024,  2031,  2032,  2034,  2036,  2037,  2039,  2040,  1227,  1110,
  1228,    40,  1385,   906,   805,    41,  1764,  1815,   130,   131,
   132,   133,  1638,   695,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   227,
  1517,   711,   745,   334,     0,     0,     0,   849,   746,   747,
     0,     0,     0,     0,   748,     0,     0,   749,     0,     0,
    42,     0,   750,   751,     0,   752,    43,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
     0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   160,    46,     0,     0,     0,    47,     0,     0,
     0,     0,  1884,     0,     0,     0,     0,  1740,   161,    48,
  1743,     0,     0,   162,     0,  1747,   163,     0,     0,     0,
     0,     0,     0,     0,   164,     0,     0,     0,     0,     0,
    49,     0,   126,   127,   128,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   165,  1776,
   165,  1778,  1779,   130,   131,   132,   133,     0,     0,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,  1794,    50,     0,    51,  1798,     0,
     0,  1801,  1802,  1810,     0,     0,  1811,     0,     0,  1262,
   165,  1263,  1264,  1265,     0,     0,   165,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1830,  1831,  1832,  1833,  1834,     0,     0,     0,     0,     0,
     0,   161,     0,     0,     0,     0,   162,     0,     0,   163,
  1266,  1267,  1268,  1269,  1270,  1271,  1272,   164,  1273,  1274,
     0,     0,     0,   885,   886,   887,   888,   889,   890,   891,
   892,   893,   894,     0,     0,   895,   896,   897,   898,   899,
   900,   943,     0,   901,     0,     0,   165,     0,     0,    71,
    72,   944,     0,    74,  1182,     0,     0,  1877,     0,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,  1891,  1892,
  1893,  1894,   287,     0,  1897,     0,  1899,     0,     0,     0,
     0,     0,     0,     0,  1914,  1915,     0,     0,     0,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,   165,
  1926,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,  1979,     0,
     0,     0,     0,     0,     0,     0,     0,  1944,     0,     0,
     0,     0,     0,     0,     0,     0,   161,   943,     0,     0,
     0,   162,  1278,     0,   163,    71,    72,   944,     0,    74,
     0,     0,   164,     0,  1964,     0,     0,     0,     0,     0,
     0,     0,   165,     0,  1974,     0,     0,     0,   945,     0,
   946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
   956,   957,     0,     0,     0,   958,     0,  1992,   959,     0,
     0,   960,     0,     0,   961,     0,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
   976,   977,     0,     0,   580,   978,     0,     0,  2006,     0,
   979,  2009,     0,   980,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   943,     0,     0,
     0,     0,  2023,     0,  2025,    71,    72,   944,     0,    74,
     0,     0,  2030,   885,   886,   887,   888,   889,   890,   891,
   892,   893,   894,     0,     0,   895,   896,   897,   898,   899,
   900,     0,     0,   901,   945,  1002,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,     0,
   981,   958,     0,     0,   959,     0,     0,   960,     0,     0,
   961,     0,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,     0,     0,     0,     0,   979,     0,     0,   980,
     0,     0,   943,     0,     0,     0,     0,     0,     0,     0,
    71,    72,   944,     0,    74,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,   945,     0,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,     0,
     0,   958,     0,     0,   959,     0,  1773,   960,     0,     0,
   961,     0,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,     0,     0,     0,     0,   979,   943,     0,   980,
     0,     0,     0,     0,     0,    71,    72,   944,     0,    74,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,   581,     0,     0,     0,   287,     0,     0,   945,
     0,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,     0,     0,   961,  1784,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,     0,     0,     0,   978,     0,     0,     0,
     0,   979,   943,     0,   980,     0,     0,     0,     0,     0,
    71,    72,   944,     0,    74,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,   945,   290,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,     0,
     0,   958,     0,     0,   959,     0,     0,   960,     0,     0,
   961,  1786,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,     0,     0,     0,     0,   979,   943,     0,   980,
     0,     0,     0,     0,     0,    71,    72,   944,     0,    74,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,   945,
   347,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,     0,     0,   961,  1788,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,     0,     0,     0,   978,     0,     0,     0,
     0,   979,   943,     0,   980,     0,     0,     0,     0,     0,
    71,    72,   944,     0,    74,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,   945,   798,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,     0,
     0,   958,     0,     0,   959,     0,     0,   960,     0,     0,
   961,  1789,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,     0,     0,     0,     0,   979,   943,     0,   980,
     0,     0,     0,     0,     0,    71,    72,   944,     0,    74,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,   945,
  1171,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,     0,     0,   961,  1790,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,     0,     0,     0,   978,     0,     0,     0,
     0,   979,   943,     0,   980,     0,     0,     0,     0,     0,
    71,    72,   944,     0,    74,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,   945,  1203,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,     0,
     0,   958,     0,     0,   959,     0,     0,   960,     0,     0,
   961,  1968,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,     0,     0,     0,     0,   979,   943,     0,   980,
     0,     0,     0,     0,     0,    71,    72,   944,     0,    74,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,   945,
  1520,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,     0,     0,   961,  1975,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,     0,     0,     0,   978,     0,     0,     0,
     0,   979,   943,     0,   980,     0,     0,     0,     0,     0,
    71,    72,   944,     0,    74,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,   945,  1655,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,     0,
     0,   958,     0,     0,   959,   271,     0,   960,     0,     0,
   961,  2010,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,     0,     0,     0,     0,   979,   943,     0,   980,
     0,     0,     0,     0,     0,    71,    72,   944,     0,    74,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,   945,
  1656,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,     0,     0,   961,  2012,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,     0,     0,     0,   978,     0,     0,     0,
     0,   979,   943,     0,   980,     0,     0,     0,     0,     0,
    71,    72,   944,     0,    74,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,   945,  1657,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,     0,     0,
     0,   958,     0,     0,   959,     0,     0,   960,     0,     0,
   961,  2014,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,     0,     0,
     0,   978,     0,     0,     0,     0,   979,     0,     0,   980,
     0,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   945,
     0,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,     0,     0,     0,   958,     0,     0,   959,
     0,     0,   960,     0,     0,   961,  2015,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,   126,   127,   128,   978,     0,     0,     0,
     0,   979,     0,     0,   980,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   130,   131,   132,   133,     0,     0,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   126,   127,   128,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1193,
     0,     0,     0,     0,     0,     0,   130,   131,   132,   133,
     0,  2026,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   126,   127,     4,
   528,   888,   889,   890,   891,   892,   893,   894,     0,     0,
   895,   896,   897,   898,   899,   900,     0,     0,   901,     0,
     0,     0,     0,     0,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   126,
   127,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   319,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,   599,
   127,     4,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,     0,   496,     0,     0,     0,   161,     0,     0,
     0,     0,   162,     0,     0,   163,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   522,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
     0,     0,   523,     4,   162,     0,     0,   163,     0,     5,
     6,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    10,     0,     0,   579,     0,     0,     0,    11,     0,     0,
     0,     0,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,   161,   286,     0,     0,     0,   162,     0,   287,   163,
    12,     0,     0,   497,     0,     0,    13,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
     0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    16,     0,     0,     0,    17,     0,     0,
     0,     0,     0,   161,     0,     0,     0,     0,   162,    18,
     0,   163,   885,   886,   887,   888,   889,   890,   891,   892,
   893,   894,     0,     0,   895,   896,   897,   898,   899,   900,
    19,     0,   901,     0,     0,     0,  1527,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   161,     0,     0,     0,   610,   162,     0,
     0,   163,     0,     0,     0,    20,     0,    21,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,   611,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   612,     0,     0,     0,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   613,     0,   287,     0,     0,     0,     0,   509,     0,     0,
     0,   614,   615,   616,   617,   618,   619,   620,   621,   622,
   623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
   633,   634,   635,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,   516,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,   517,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,   518,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,   792,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,   793,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1039,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1040,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1041,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1172,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1364,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1365,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1366,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1461,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1469,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1478,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1650,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1685,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1686,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1687,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1691,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1697,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1704,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1724,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1844,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1845,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1853,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1859,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1860,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1937,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1939,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1962,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  2017,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  2019,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  2027,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,  1816,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,  1819,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,  1823,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
  1928,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,  2005,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,  2033,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,   320,     0,     0,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,   376,     0,     0,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   499,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   500,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   501,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   502,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   503,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   504,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   505,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   506,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   507,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   508,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   510,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   511,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   512,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   513,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   514,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   515,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   525,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   657,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   794,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   795,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   796,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   797,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,   852,     0,     0,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   860,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,  1043,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  1044,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,  1728,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
  1842,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,  1856,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,  1934,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,  1935,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,  1936,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,  1941,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,  1951,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,  1952,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  1994,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,  1998,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
  2029,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,     0,     0,   287
};

static const short yycheck[] = {     3,
    82,   716,   103,   104,  1111,   330,    10,   571,    82,   334,
   173,   431,     5,   994,   542,     5,   404,    21,   999,  1000,
     5,   629,   550,     3,   488,     5,     5,    31,     5,     3,
     5,     5,   560,     3,     5,    24,   564,   311,     7,     5,
   568,     3,     3,     5,     5,    11,    12,   107,   322,   323,
   324,   111,   112,   113,   114,   115,   116,   331,     7,     5,
    13,    14,    15,    29,    17,   485,     5,   597,     5,     5,
     0,     5,    61,     5,   237,    11,    12,    13,    14,    15,
     7,    17,     5,    82,    64,     5,   267,     5,    11,    12,
    13,    14,    15,    29,    17,     5,     5,    96,   603,   103,
   104,   263,    23,   107,     5,   267,    29,   111,   112,   113,
   114,   115,   116,   117,   534,    78,    79,   121,   122,   123,
    75,   181,   111,   112,   113,   114,    23,   116,    69,   260,
    69,   262,   117,    65,   297,   256,   107,     3,   233,     5,
    81,    96,   243,   255,   265,   533,   117,   257,   257,   537,
   865,   246,   867,   116,   263,   480,     5,   267,   267,    69,
    69,  1580,   257,   264,   256,   610,   611,   130,    69,   255,
   255,   257,   617,   265,  1593,   338,     5,   181,    99,    23,
  1599,   117,   118,   119,   120,     7,    13,    14,    15,  1608,
    17,     5,   181,   257,   295,  1614,  1615,    11,    12,    13,
    14,    15,    99,    17,   257,    23,  1187,   263,    13,    14,
    15,    96,    17,    98,   267,    29,   746,   747,   748,   749,
    69,   106,     5,   263,   264,   263,   230,    82,    11,    12,
    13,    14,    15,    88,    17,    64,    23,     5,   256,   243,
    69,    96,     5,    11,    12,   267,    29,   265,    11,    12,
    13,    14,    15,    67,    17,    99,   761,   258,   263,   256,
   264,    29,   650,     5,   265,   264,    29,   257,   265,    11,
    12,    13,    14,    15,   267,    17,   254,   143,   255,   264,
  1261,    99,   260,   263,   263,   247,   266,    29,   263,   263,
   260,   295,   266,   258,   263,   263,   378,   263,   264,    23,
   265,   264,   465,   263,   266,   266,    18,   311,   257,   264,
   263,   264,    99,   746,   747,   748,   749,   263,   322,   323,
   324,   260,   404,   264,   263,   314,   263,   331,   264,   263,
   404,   605,   258,    82,   231,   263,   263,    86,   868,   265,
   263,   264,   233,   263,   764,   263,   212,    96,   258,    86,
   260,   260,   453,     3,     4,     5,   886,   887,   888,   889,
   890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
   900,   901,  1353,   110,   904,    99,    88,   263,   264,   264,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,   409,   257,     8,     5,   264,
   263,   260,   263,   257,    11,    12,    13,    14,    15,   423,
    17,   584,    82,   586,   587,   588,    86,    87,   140,   433,
   263,   260,    29,   263,   438,   868,   263,   264,   763,   257,
   444,   257,   446,   447,    18,     5,   450,   263,   452,   453,
   264,   163,   164,   886,   887,   888,   889,   890,   891,   892,
   893,   894,   895,   896,   897,   898,   899,   900,   901,  1888,
   257,   904,  1080,  1081,   263,  1005,   248,   249,   250,  1898,
   263,   264,   254,   257,   488,    13,    14,    15,   260,    17,
    13,    14,    15,   594,    17,   263,   264,   255,    86,     6,
   263,   264,   258,    13,    14,    15,    18,    17,    96,   265,
    98,   258,    86,   614,    88,   264,    68,     7,   265,     5,
     6,   263,   264,     9,    10,    99,   263,   264,   610,   611,
    98,   263,   258,   257,    86,   617,   258,   862,   112,   265,
   108,   109,   110,   265,    96,    97,     7,   263,   265,   266,
     7,   267,   264,   105,  1973,   107,   130,  1976,    69,    70,
    71,    72,    73,    74,    75,    76,    77,  1986,  1987,    80,
  1034,     7,  1005,     7,   258,    86,    88,    86,     5,     6,
     5,   265,     7,  1564,   258,  1566,    96,    96,    99,     7,
   594,   265,  2011,   597,    19,    20,    21,   247,     7,   603,
     7,   605,   252,   112,   264,   255,     7,   116,   263,   258,
   614,    36,   267,   263,     7,   258,   265,     7,   258,   782,
    96,   133,   265,   133,   684,   265,   789,     7,   140,   141,
   140,   691,  1196,   234,   235,   236,   237,   238,   257,   240,
   241,   242,   243,   258,   263,   246,   247,   248,   249,   250,
   265,   163,  1182,   254,   166,   167,     7,   263,     7,   260,
  1105,   267,  1192,   264,   140,  1229,   263,   264,   769,   770,
   659,   258,  1117,   264,   265,    96,   264,     7,   265,   258,
   684,   246,   247,   248,   249,  1215,   265,   691,     5,     6,
   264,   112,     9,    10,   683,   684,   264,   258,   687,   258,
   265,   263,   691,  1231,   265,   267,   265,  1814,  1815,   264,
   265,   700,   264,   134,   190,   263,   192,   264,   265,   267,
     7,     7,   246,   247,   248,   249,   250,   251,  1292,     7,
   254,   264,   265,   263,   264,   263,   264,   417,   214,     7,
   263,   264,   746,   747,   748,   749,   232,     7,   752,  1182,
   263,   264,   264,   264,   264,   264,     7,   761,     7,  1192,
    13,    14,    15,   191,    17,   769,   770,   188,   255,   194,
   263,   264,   257,  1047,  1048,  1049,  1050,   234,   235,   236,
   237,   238,   462,   240,   241,   242,   243,  1061,   264,   246,
   247,   248,   249,   250,   263,   264,   256,   254,   234,   235,
   236,   237,   238,   260,   240,   241,   242,   243,  1082,  1083,
   246,   247,   248,   249,   250,   264,   805,   257,   254,   263,
   264,   263,   264,   130,   260,   988,   989,   990,   991,     6,
  1104,   264,   265,   234,   235,   236,   237,   238,   257,   240,
   241,   242,   243,   264,   257,   246,   247,   248,   249,   250,
   264,   265,     7,   254,  1569,  1570,  1571,  1838,   257,   260,
   264,   265,   264,   265,   868,  1028,    89,    90,    91,    92,
    93,    94,   257,  1147,   257,   555,   264,   265,   257,   883,
   264,   265,   886,   887,   888,   889,   890,   891,   892,   893,
   894,   895,   896,   897,   898,   899,   900,   901,   264,   265,
   904,   264,   265,  1367,   234,   235,   236,   237,   238,   257,
   240,   241,   242,   243,     7,   232,   246,   247,   248,   249,
   250,   264,   265,   257,   254,   242,   264,   265,   245,   140,
   260,     7,   143,   264,   265,   264,   265,   263,   264,   943,
   193,   194,   195,   196,   257,   156,   157,   158,   234,   235,
   236,   237,   238,   942,   240,   241,   242,   243,  1378,   257,
   246,   247,   248,   249,   250,   264,   265,   257,   254,   246,
   247,   248,   249,   250,   260,   264,   265,   254,  1398,  1960,
   264,   265,     5,   260,  1404,   257,  1406,   257,    11,    12,
    13,    14,    15,   257,    17,   264,   265,   677,   257,  1273,
   257,  1005,  1532,   264,   265,  1279,    29,   248,   249,   250,
   251,  1541,   257,   254,     7,  1116,     7,  1118,   257,  1439,
   264,   265,   257,  1105,   704,  1445,   257,    82,    83,  1033,
  1034,   265,     3,     4,     5,  1117,   264,   265,   264,   265,
    63,   264,     7,  1047,  1048,  1049,  1050,  1148,   263,   264,
   264,   265,  1056,   264,  1499,  1500,  1501,  1061,  1503,    30,
    31,    32,    33,    34,   119,   120,   264,   265,   257,  1073,
   125,   264,   265,   257,   257,     7,  1521,  1351,  1082,  1083,
   620,   621,   257,   257,   257,   257,  1360,   767,  1092,    13,
    14,    15,   257,    17,     5,   257,  1100,  1101,   257,  1532,
  1104,   265,   263,   257,   784,   263,   161,   162,   163,     5,
  1114,  1115,  1116,     5,  1118,  1119,  1120,   233,   257,   263,
  1124,   263,   263,   263,  1839,  1129,  1130,  1131,  1132,  1133,
  1134,  1135,  1136,  1137,   122,   123,   124,   125,   126,   127,
   128,   263,   130,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,     7,
  1164,   263,    86,    96,  1168,    98,    99,   100,   101,   102,
   103,   104,    96,     8,   265,   264,   258,   265,  1182,   258,
   258,     7,   233,   258,   233,  1459,   241,   242,  1192,   244,
   245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
   255,   256,   257,   258,   259,   260,   261,   262,   263,   233,
   134,   135,   136,   137,   138,   139,   271,   272,   273,   274,
   275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
   285,   286,     5,   263,     5,   263,     5,  1511,  1683,   294,
  1685,   234,   235,   236,   237,   238,   263,   240,   241,   242,
   243,     5,     5,   246,   247,   248,   249,   250,   263,   263,
   263,   254,   258,   318,   319,   945,   233,   260,     5,  1273,
     5,   240,   241,   242,   243,  1279,   264,   246,   247,   248,
   249,   250,   263,   263,     5,   254,   263,     5,   263,   263,
  1735,   260,     5,   208,     5,   263,  1741,   263,  1572,   263,
   263,   258,   234,   235,   236,   237,   238,   987,   240,   241,
   242,   243,   257,   257,   246,   247,   248,   249,   250,   257,
   130,   264,   254,   378,     7,     5,     7,   264,   260,     7,
     7,   264,     7,   263,     7,     7,  1340,  1341,     7,     7,
   264,     7,     7,   233,   399,     7,     5,  1351,   264,   404,
     7,   406,     7,     7,     7,  1035,  1360,  1885,  1038,  1522,
  1824,  1524,  1525,  1367,   140,   263,  1811,   143,     7,     7,
     7,  1051,  1052,  1053,  1054,     7,     7,     7,  1058,     7,
   156,   157,     5,   265,   160,   161,   234,   235,   236,   237,
   238,     7,   240,   241,   242,   243,     5,     7,   246,   247,
   248,   249,   250,     8,   263,     5,   254,     5,     5,   263,
   263,   263,   260,   263,   263,     3,   258,  1499,  1500,  1501,
     7,  1503,     7,     7,     5,   233,   260,     7,   483,  1874,
     7,     7,     7,     7,     7,     7,     7,   264,   263,  1521,
   258,   496,   497,   265,   258,     7,  1126,  1127,  1452,  1453,
   257,   257,   257,  1457,   509,  1459,   257,   257,     5,  1139,
     3,   516,   517,   518,     5,   257,   257,   522,   523,    81,
  2034,    83,    84,    85,     6,   263,   531,     7,     7,   263,
    66,   263,   263,   263,  1488,   263,   265,     5,   264,   263,
   257,   263,  1937,   263,     5,   263,   257,   257,   242,    81,
   264,    83,  1506,  1507,    86,  1509,  1510,  1511,   254,     3,
   122,   123,   124,   125,   126,   127,   128,   258,   130,   131,
   263,   257,     7,   265,   579,   580,   257,   257,  1532,  1209,
   257,  1211,   257,   257,   257,   257,   264,   592,  1218,   258,
   122,   123,   124,   125,   126,   127,   128,   257,   130,   257,
   257,   263,  1556,   257,   257,   610,   611,   257,   257,   257,
   615,   616,   617,   618,   257,   257,   263,   263,  1572,   624,
   257,   626,  1576,   257,  1578,   257,     7,   263,   257,   234,
   235,   236,   237,   238,     5,   240,   241,   242,   243,   263,
   257,   246,   247,   248,   249,   250,   257,     5,   258,   254,
   258,  1683,   258,  1685,     5,   260,   234,   235,   236,   237,
   238,   257,   240,   241,   242,   243,   257,   257,   246,   247,
   248,   249,   250,  1724,  1725,     5,   254,   263,   263,     5,
  1731,  1905,   260,     5,   240,   241,   242,   243,     5,     7,
   246,   247,   248,   249,   250,   251,     5,     5,   254,  1923,
   263,     5,   264,  1735,     5,     5,     5,     5,  1821,  1741,
     5,   234,   235,   236,   237,   238,     5,   240,   241,   242,
   243,     3,     3,   246,   247,   248,   249,   250,     5,     7,
     5,   254,   264,  1363,  1688,     7,  1690,   260,   236,   237,
   238,   239,   240,   241,   242,   243,   257,   257,   246,   247,
   248,   249,   250,   251,   263,   760,   254,  1808,   264,  1810,
   265,     7,     3,     4,     5,   265,   258,   263,   257,     7,
  1724,  1725,   260,     7,     7,   265,     7,  1731,     7,  1811,
     7,   786,   787,   788,  2008,     7,     7,   792,   793,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,     7,    60,
    61,  1451,     7,     7,     7,     7,     7,     7,  1458,     7,
     7,     7,     7,  1463,     7,   263,  1466,     5,     7,     5,
     7,  1471,  1874,     7,     7,   850,     7,     7,   853,     7,
     7,     7,     7,  1483,  1808,     7,  1810,    81,     7,    83,
    84,     7,    86,     7,     7,     7,  1496,     7,  1498,     7,
  1824,     7,    96,     7,     7,     7,     5,     5,   257,   257,
     7,   122,   257,     5,     5,   258,   258,     7,   129,   113,
   114,   115,     7,     7,     7,     7,     7,     7,   903,     7,
   265,   258,   265,   265,   265,  1937,   130,     7,   264,  1539,
  1540,   265,  1542,     7,   258,   265,   234,   235,   236,   237,
   238,   926,   240,   241,   242,   243,   265,   265,   246,   247,
   248,   249,   250,   265,   265,   258,   254,   265,   265,   263,
   265,     7,   260,     3,     4,     5,   265,   258,     3,   265,
   265,  1905,   199,   200,   201,   202,   203,   204,   205,   206,
   207,   264,   186,   265,    24,    25,    26,    27,   265,  1923,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,   265,   265,   265,   265,   240,
     7,   265,    81,   263,    83,   246,   247,    86,   264,   263,
   263,   252,     7,   258,   255,   265,   265,   258,   259,   260,
   261,   265,   263,   265,     7,     7,   112,     7,   264,   257,
     7,     7,   258,   257,  1039,  1040,  1041,     7,     3,     7,
   264,     7,     5,   122,   123,   124,   125,   126,   127,   128,
     7,   130,     7,     7,  2008,   263,   234,   235,   236,   237,
   238,  1691,   240,   241,   242,   243,     7,  1697,   246,   247,
   248,   249,   250,     7,  1704,   263,   254,   263,     7,     7,
     7,     7,   260,     5,     8,   264,     5,     5,     5,   263,
  1720,   263,   263,   263,     7,     7,   258,     7,   263,   258,
  1105,   234,   235,   236,   237,   238,     7,   240,   241,   242,
   243,   258,  1117,   246,   247,   248,   249,   250,   263,   258,
     7,   254,     7,   258,   265,     7,   263,   260,   258,     7,
     7,     7,   258,   258,   265,  1140,     7,  1142,     7,  1144,
   234,   235,   236,   237,   238,   263,   240,   241,   242,   243,
     7,     7,   246,   247,   248,   249,   250,   258,   265,   265,
   254,   265,   265,   265,     7,   258,   260,  1172,   234,   235,
   236,   237,   238,   265,   240,   241,   242,   243,   265,   264,
   246,   247,   248,   249,   250,   264,   258,   247,   254,   265,
   265,   258,   252,   258,   260,   255,   236,   237,   238,   258,
   240,   241,   242,   243,   264,   258,   246,   247,   248,   249,
   250,   265,   264,   264,   254,   258,     7,     7,  1848,     7,
   260,     7,     7,  1853,     7,  1855,     7,   234,   235,   236,
   237,   238,  1862,   240,   241,   242,   243,   135,     7,   246,
   247,   248,   249,   250,     7,   264,   264,   254,   263,   263,
   260,     7,     7,   260,     7,     3,     4,     5,     6,     5,
     7,     9,   111,     7,     7,   265,   265,    16,   258,   265,
   258,   265,   265,  1903,   265,     7,    24,    25,    26,    27,
    28,   265,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,   258,   258,     5,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
  1950,    69,   246,   247,   248,   249,   250,   251,   263,     7,
   254,   263,     7,     7,     7,     3,     4,     5,   234,   235,
   236,   237,   238,   239,   240,   241,   242,   243,   263,  1354,
   246,   247,   248,   249,   250,   251,     7,     7,   254,  1364,
  1365,  1366,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,     7,    60,    61,     3,     4,     5,     6,     5,     7,
     9,     5,     5,   257,   265,   263,   258,   258,   258,     5,
     5,     5,   258,     4,     7,    24,    25,    26,    27,    28,
   264,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,     7,     7,     7,  1454,
  1455,  1456,   264,   264,   122,     7,  1461,     7,     7,  1464,
  1465,   129,     7,     7,  1469,     7,   263,  1472,  1473,  1474,
  1475,   263,     7,  1478,  1479,  1480,     7,  1482,     7,     7,
     7,  1486,  1487,   231,     7,     7,  1491,  1492,   263,   263,
     7,   264,     7,   263,  1499,  1500,  1501,  1502,  1503,   247,
   265,   258,     7,  1508,   252,     7,   258,   255,    62,   263,
     7,     7,   260,     7,     7,   263,  1521,     3,     4,     5,
     7,   132,     7,     5,     7,   264,     0,     0,  1071,   939,
  1072,     3,  1222,   756,   658,     7,  1668,  1739,    24,    25,
    26,    27,  1517,   574,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,   122,
  1341,   591,   240,   227,    -1,    -1,    -1,   700,   246,   247,
    -1,    -1,    -1,    -1,   252,    -1,    -1,   255,    -1,    -1,
    62,    -1,   260,   261,    -1,   263,    68,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   231,    95,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,     7,    -1,    -1,    -1,    -1,  1642,   247,   111,
  1645,    -1,    -1,   252,    -1,  1650,   255,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,
   132,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1683,  1684,
  1685,  1686,  1687,    24,    25,    26,    27,    -1,    -1,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,  1719,   187,    -1,   189,  1723,    -1,
    -1,  1726,  1727,   209,    -1,    -1,   212,    -1,    -1,    81,
  1735,    83,    84,    85,    -1,    -1,  1741,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1755,  1756,  1757,  1758,  1759,    -1,    -1,    -1,    -1,    -1,
    -1,   247,    -1,    -1,    -1,    -1,   252,    -1,    -1,   255,
   122,   123,   124,   125,   126,   127,   128,   263,   130,   131,
    -1,    -1,    -1,   234,   235,   236,   237,   238,   239,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
   251,     5,    -1,   254,    -1,    -1,  1811,    -1,    -1,    13,
    14,    15,    -1,    17,   265,    -1,    -1,  1822,    -1,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,  1843,  1844,
  1845,  1846,   260,    -1,  1849,    -1,  1851,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1859,  1860,    -1,    -1,    -1,   234,
   235,   236,   237,   238,    -1,   240,   241,   242,   243,  1874,
  1875,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,     7,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1902,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   247,     5,    -1,    -1,
    -1,   252,   264,    -1,   255,    13,    14,    15,    -1,    17,
    -1,    -1,   263,    -1,  1929,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1937,    -1,  1939,    -1,    -1,    -1,   142,    -1,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,    -1,   159,    -1,  1962,   162,    -1,
    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,   185,    -1,    -1,     8,   189,    -1,    -1,  1993,    -1,
   194,  1996,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
    -1,    -1,  2017,    -1,  2019,    13,    14,    15,    -1,    17,
    -1,    -1,  2027,   234,   235,   236,   237,   238,   239,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
   251,    -1,    -1,   254,   142,   256,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
   264,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,    -1,   197,
    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,   142,    -1,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,   264,   165,    -1,    -1,
   168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,     5,    -1,   197,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   142,
    -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,   264,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,   194,     5,    -1,   197,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,   142,   264,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,   264,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,     5,    -1,   197,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,   142,
   264,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,   264,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,   194,     5,    -1,   197,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,   142,   264,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,   264,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,     5,    -1,   197,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,   142,
   264,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,   264,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,   194,     5,    -1,   197,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,   142,   264,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,   264,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,     5,    -1,   197,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,   142,
   264,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,   264,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,   194,     5,    -1,   197,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,   142,   264,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,     8,    -1,   165,    -1,    -1,
   168,   264,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,     5,    -1,   197,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,   142,
   264,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,   264,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,   194,     5,    -1,   197,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,   142,   264,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,   264,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,    -1,   197,
    -1,   234,   235,   236,   237,   238,    -1,   240,   241,   242,
   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
    -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,   264,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,     3,     4,     5,   189,    -1,    -1,    -1,
    -1,   194,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     3,     4,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
    -1,   264,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
     6,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,   251,    -1,    -1,   254,    -1,
    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,     8,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,     3,
     4,     5,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
    -1,    -1,    -1,   265,    -1,    -1,    -1,   247,    -1,    -1,
    -1,    -1,   252,    -1,    -1,   255,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
    -1,    -1,     8,     5,   252,    -1,    -1,   255,    -1,    11,
    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
    22,    -1,    -1,     8,    -1,    -1,    -1,    29,    -1,    -1,
    -1,    -1,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,
    -1,   247,   254,    -1,    -1,    -1,   252,    -1,   260,   255,
    62,    -1,    -1,   265,    -1,    -1,    68,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,    -1,    -1,
    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,   111,
    -1,   255,   234,   235,   236,   237,   238,   239,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
   132,    -1,   254,    -1,    -1,    -1,   258,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   247,    -1,    -1,    -1,    75,   252,    -1,
    -1,   255,    -1,    -1,    -1,   187,    -1,   189,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,
   236,   237,   238,   260,   240,   241,   242,   243,   136,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,
   235,   236,   237,   238,   260,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
   168,    -1,    -1,    -1,    -1,   260,   234,   235,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
   198,    -1,   260,    -1,    -1,    -1,    -1,   265,    -1,    -1,
    -1,   209,   210,   211,   212,   213,   214,   215,   216,   217,
   218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
   228,   229,   230,   234,   235,   236,   237,   238,    -1,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,   260,
   240,   241,   242,   243,   265,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,
   260,   240,   241,   242,   243,   265,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,
   238,   260,   240,   241,   242,   243,   265,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,
   237,   238,   260,   240,   241,   242,   243,   265,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,
   236,   237,   238,   260,   240,   241,   242,   243,   265,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,
   235,   236,   237,   238,   260,   240,   241,   242,   243,   265,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
   234,   235,   236,   237,   238,   260,   240,   241,   242,   243,
   265,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,   234,   235,   236,   237,   238,   260,   240,   241,   242,
   243,   265,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,   234,   235,   236,   237,   238,   260,   240,   241,
   242,   243,   265,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,   234,   235,   236,   237,   238,   260,   240,
   241,   242,   243,   265,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,   260,
   240,   241,   242,   243,   265,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,
   260,   240,   241,   242,   243,   265,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,
   238,   260,   240,   241,   242,   243,   265,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,
   237,   238,   260,   240,   241,   242,   243,   265,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,
   236,   237,   238,   260,   240,   241,   242,   243,   265,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,
   235,   236,   237,   238,   260,   240,   241,   242,   243,   265,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
   234,   235,   236,   237,   238,   260,   240,   241,   242,   243,
   265,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,   234,   235,   236,   237,   238,   260,   240,   241,   242,
   243,   265,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,   234,   235,   236,   237,   238,   260,   240,   241,
   242,   243,   265,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,   234,   235,   236,   237,   238,   260,   240,
   241,   242,   243,   265,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,   260,
   240,   241,   242,   243,   265,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,
   260,   240,   241,   242,   243,   265,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,
   238,   260,   240,   241,   242,   243,   265,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,
   237,   238,   260,   240,   241,   242,   243,   265,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,
   236,   237,   238,   260,   240,   241,   242,   243,   265,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,
   235,   236,   237,   238,   260,   240,   241,   242,   243,   265,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
   234,   235,   236,   237,   238,   260,   240,   241,   242,   243,
   265,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,   234,   235,   236,   237,   238,   260,   240,   241,   242,
   243,   265,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,   234,   235,   236,   237,   238,   260,   240,   241,
   242,   243,   265,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,   234,   235,   236,   237,   238,   260,   240,
   241,   242,   243,   265,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,   260,
   240,   241,   242,   243,   265,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,   238,
   260,   240,   241,   242,   243,   265,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,   237,
   238,   260,   240,   241,   242,   243,   265,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,   236,
   237,   238,   260,   240,   241,   242,   243,   265,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,   234,   235,
   236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,   234,
   235,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,
   264,   234,   235,   236,   237,   238,    -1,   240,   241,   242,
   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,
    -1,   264,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
    -1,    -1,   264,   234,   235,   236,   237,   238,    -1,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,    -1,   260,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,   256,    -1,    -1,    -1,   260,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,   258,    -1,   260,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
   260,   234,   235,   236,   237,   238,    -1,   240,   241,   242,
   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
   236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
    -1,   260,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
   235,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
   258,    -1,   260,   234,   235,   236,   237,   238,    -1,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,   258,    -1,   260,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
   260,   234,   235,   236,   237,   238,    -1,   240,   241,   242,
   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
   236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
    -1,   260,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
   235,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
   258,    -1,   260,   234,   235,   236,   237,   238,    -1,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,   258,    -1,   260,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
   260,   234,   235,   236,   237,   238,    -1,   240,   241,   242,
   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,    -1,   256,    -1,    -1,    -1,   260,   234,   235,
   236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
    -1,   260,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
   235,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
   258,    -1,   260,   234,   235,   236,   237,   238,    -1,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,   258,    -1,   260,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
   260,   234,   235,   236,   237,   238,    -1,   240,   241,   242,
   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,
    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,   235,
   236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
    -1,   260,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,    -1,
    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   234,
   235,   236,   237,   238,    -1,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,   258,    -1,   260,   234,   235,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
   258,    -1,   260,   234,   235,   236,   237,   238,    -1,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 344 "GetDP.y"
{ if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfPointer_L = List_Create(10, 10, sizeof(void *)) ;
	ListOfPointer2_L= List_Create(10, 10, sizeof(void *)) ;
	ListOfChar_L    = List_Create(128, 128, sizeof(char)) ;

	ListOfInitialList0_L    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialList_L     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialSuppList_L = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineSystem      = List_Create(5,5, sizeof(List_T *)) ;
	ListOfListOfFormulation = List_Create(5,5, sizeof(List_T *)) ;

	ListOfConstraintPerRegion = List_Create(5,5, sizeof(List_T *)) ;
	ListOfRegionIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfSubRegionIndex    = List_Create(5,5, sizeof(int)) ;

	ListOfFormulation       = List_Create(5,5, sizeof(int)) ;

	ListOfBasisFunction     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfSupportIndex      = List_Create(5,5, sizeof(int)) ;
	ListOfEntityIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfConstraintInFS    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfConstraintIndex   = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineQuantity    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfFunctionSpaceIndex= List_Create(5,5, sizeof(int *)) ;
	ListOfEquationTerm      = List_Create(5,5, sizeof(List_T *)) ;
      }
    ;
    break;}
case 2:
#line 378 "GetDP.y"
{ if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfInitialList0_L) ;

	List_Delete(ListOfInitialList_L) ;
	List_Delete(ListOfInitialSuppList_L) ;

	List_Delete(ListOfDefineSystem) ;
	List_Delete(ListOfListOfFormulation) ;

	List_Delete(ListOfConstraintPerRegion) ;
	List_Delete(ListOfRegionIndex) ;
	List_Delete(ListOfSubRegionIndex) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfSupportIndex) ;
	List_Delete(ListOfEntityIndex) ;
	List_Delete(ListOfConstraintInFS) ;
	List_Delete(ListOfConstraintIndex) ;

	List_Delete(ListOfDefineQuantity) ;
	List_Delete(ListOfFunctionSpaceIndex) ;
	List_Delete(ListOfEquationTerm) ;
      }
    ;
    break;}
case 4:
#line 421 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 444 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 459 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 461 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 463 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 465 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 467 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 469 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 471 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 473 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 475 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 477 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 479 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 481 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 483 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 485 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 487 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 489 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 491 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 493 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 495 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 497 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 499 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 507 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 524 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 531 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 533 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 538 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 540 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 547 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 557 "GetDP.y"
{ 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)yyvsp[-3].d ;
      List_Add(Group_S.InitialList, &i) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;
    break;}
case 55:
#line 567 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 574 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 584 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 589 "GetDP.y"
{
      Group_S.FunctionType = yyvsp[-3].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      if (!Nbr_Index)  Group_S.InitialList = yyvsp[0].l ;
      else             Group_S.InitialList = yyvsp[0].l ;

      ListOfInitialList2_L = ListOfInitialSuppList_L ;  /* Init pour SuppListOfRegion */
    ;
    break;}
case 59:
#line 601 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 610 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 621 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 626 "GetDP.y"
{
      if (!Flag_MultipleIndex) {
	if ( !strcmp(yyvsp[-1].c, "All") ) {
	  yyval.i = -3;
	}
	else if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) < 0 ) {
	  yyval.i = -2 ; vyyerror("Unknown Group: %s", yyvsp[-1].c) ;
	}
	else {
	  List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
	}
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				    fcmp_Group_Name)) < 0 ) {
	    yyval.i = -2 ; vyyerror("Unknown Group: %s {%d}", yyvsp[-1].c, k+1) ;
	  }
	  else {
	    if (k == 0) {
	      List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
	    }
	  }
	  List_Add(ListOfInt_L, &i) ;
	}
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 63:
#line 663 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 666 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 678 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 680 "GetDP.y"
{ 
      if (!Nbr_Index)
	yyval.l = NULL ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	InitialList2_L = NULL ;
	for (k = 0 ; k < Nbr_Index ; k++)
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
      }
    ;
    break;}
case 67:
#line 696 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 699 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 702 "GetDP.y"
{
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) >= 0 ) {
	  if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	       ELEMENTLIST ) {
	    if (!Nbr_Index) {
	      yyval.l = List_Create( 1, 5, sizeof(int)) ;
	      List_Add(yyval.l, &i) ;
	    }
	    else {
	      List_Reset(ListOfInitialList2_L) ;
	      for (k = 0 ; k < Nbr_Index ; k++) {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	  }
	  else  vyyerror("Not a Support of Element Type: %s", yyvsp[-1].c) ;
	}
	else  vyyerror("Unknown Region for Support: %s", yyvsp[-1].c) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name))
	       >= 0 ) {
	    if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type ==
		 ELEMENTLIST ) {
	      if (!Nbr_Index)
		vyyerror("Multiple Group out of context: %s {}", yyvsp[-1].c) ;
	      else {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	    else  vyyerror("Not a Support of Element Type: %s", yyvsp[-1].c) ;
	  }
	  else  vyyerror("Unknown Region for Support: %s {%d}", yyvsp[-1].c, k+1) ;
	}
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 70:
#line 753 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 766 "GetDP.y"
{
      if (!Nbr_Index) {
	yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  InitialList2_L =
	    List_Create(((List_Nbr(InitialList0_L) > 0)? List_Nbr(yyvsp[0].l) : 1), 5,
			sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    ;
    break;}
case 72:
#line 790 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 797 "GetDP.y"
{
      if (!Nbr_Index)
	yyval.l = List_Create( 5, 5, sizeof(int)) ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  InitialList2_L = List_Create( 5, 5, sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	}
      }
    ;
    break;}
case 74:
#line 810 "GetDP.y"
{ yyval.l = yyvsp[-2].l ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    ;
    break;}
case 75:
#line 828 "GetDP.y"
{ yyval.l = yyvsp[-3].l ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Suppress(InitialList2_L,
			  (int *)List_Pointer(InitialList0_L, i), fcmp_int) ;
	}
      }
    ;
    break;}
case 76:
#line 851 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 855 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;
    break;}
case 78:
#line 867 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 876 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || (yyvsp[-4].i<yyvsp[-2].i && (int)yyvsp[0].d<0) || (yyvsp[-4].i>yyvsp[-2].i && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, yyvsp[-2].i, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; ((int)yyvsp[0].d>0)?(j<=yyvsp[-2].i):(j>=yyvsp[-2].i) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 80:
#line 890 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;
      if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	/* Si ce n'est pas un nom de groupe, est-ce un nom de constante ? : */
	Constant_S.Name = yyvsp[0].c ;
	if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	  vyyerror("Unknown Constant: %s", yyvsp[0].c) ;
	  i = 0 ;
	  List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	}
	else
	  if (Constant_S.Type == VAR_FLOAT) {
	    i = (int)Constant_S.Value.Float ;
	    List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	  }
	  else if (Constant_S.Type == VAR_LISTOFFLOAT) {
	    List_Reset(yyval.l = ListOfInt_L) ;
	    for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ; j = (int)d ;
	      List_Add(ListOfInt_L, &j) ;
	    }
	  }
	  else {
	    vyyerror("Unknown type of Constant: %s", yyvsp[0].c) ;
	    i = 0 ;
	    List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	  }
      }
      else   /* Si c'est un nom de groupe : */
	yyval.l = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 81:
#line 924 "GetDP.y"
{
      Flag_MultipleIndex = 1 ;
      List_Reset(ListOfInitialList0_L) ;
      yyval.l = ListOfInitialList0_L ;
      for (k = 1 ; k <= Nbr_Index ; k++) {
	sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name)) < 0 ) {
	  vyyerror("Unknown Group: %s {%d}", yyvsp[-2].c, k) ;  break ;
	}
	else
	  List_Add(ListOfInitialList0_L, 
		   &(((struct Group *)
		      List_Pointer(Problem_S.Group, i))->InitialList)) ;
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 83:
#line 948 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 84:
#line 958 "GetDP.y"
{ 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(tmpstr, "%s_%d_", yyvsp[-3].c, k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = ListDummy_L ;
	  Add_Group(&Group_S, yyvsp[-3].c, 2, k+1) ;
	}
      }
      Free(yyvsp[-3].c) ;
    ;
    break;}
case 87:
#line 980 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 985 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 986 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 993 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1013 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[-5].c, fcmp_Expression_Name)) >= 0 ) {
	if (((struct Expression *)List_Pointer(Problem_S.Expression, i))->Type ==
	    UNDEFINED_EXP) {
	  Free(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name) ;
	  List_Read (Problem_S.Expression, yyvsp[-1].i, &Expression_S) ;
	  List_Write(Problem_S.Expression,  i, &Expression_S) ;
	  ((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name = yyvsp[-5].c ;
	  List_Pop(Problem_S.Expression) ;
	}
	else  { vyyerror("Redefinition of Function: %s", yyvsp[-5].c) ; }
      }
      else {  /* new identifier */
	Free(((struct Expression *)List_Pointer(Problem_S.Expression, yyvsp[-1].i))->Name) ;
	((struct Expression *)List_Pointer(Problem_S.Expression, yyvsp[-1].i))->Name = yyvsp[-5].c ;
      }
    ;
    break;}
case 95:
#line 1033 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[-6].c, fcmp_Expression_Name)) < 0 ) {
	/* Si le nom n'existe pas : */
	i = List_Nbr(Problem_S.Expression) ;
	Expression_S.Type = PIECEWISEFUNCTION ;
	Expression_S.Case.PieceWiseFunction.ExpressionPerRegion =
	  List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	Expression_S.Case.PieceWiseFunction.NumLastRegion = -1 ;
	Add_Expression(&Expression_S, yyvsp[-6].c, 0) ;
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i) ;
      }
      else {
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i) ;
	if (Expression_P->Type == UNDEFINED_EXP) {
	  Expression_P->Type = PIECEWISEFUNCTION ;
	  Expression_P->Case.PieceWiseFunction.ExpressionPerRegion =
	    List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	  Expression_P->Case.PieceWiseFunction.NumLastRegion = -1 ;
	}
	else if (Expression_P->Type != PIECEWISEFUNCTION)
	  vyyerror("Not piece-wise Expression: %s", yyvsp[-6].c) ;
	Free(yyvsp[-6].c) ;
      }

      if (yyvsp[-4].i >= 0 || yyvsp[-4].i == -1) {
	ExpressionPerRegion_S.ExpressionIndex = yyvsp[-1].i ;
	for (i = 0 ; i < List_Nbr(Group_S.InitialList) ; i++) {
	  List_Read(Group_S.InitialList, i, &ExpressionPerRegion_S.RegionIndex) ;

	  if (List_Search(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
			  &ExpressionPerRegion_S.RegionIndex, fcmp_int))
	    vyyerror("Redefinition of piece-wise Function: %s [%d]",
		     Expression_P->Name, ExpressionPerRegion_S.RegionIndex) ;
	  else
	    List_Add(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
		     &ExpressionPerRegion_S) ;
	}
	if (yyvsp[-4].i == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group right hand side") ;
    ;
    break;}
case 99:
#line 1086 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 100:
#line 1106 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1112 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1118 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1121 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1128 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1139 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1142 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1148 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1152 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1164 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_TEST ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 112:
#line 1177 "GetDP.y"
{
      WholeQuantity_P = 
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1)) ;
      List_Pop(ListOfPointer2_L) ;

      WholeQuantity_P->Case.Test.WholeQuantity_True =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 113:
#line 1191 "GetDP.y"
{
      WholeQuantity_P = 
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1)) ;
      List_Pop(ListOfPointer2_L) ;

      WholeQuantity_P->Case.Test.WholeQuantity_False =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
    ;
    break;}
case 114:
#line 1206 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1212 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1218 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1224 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1230 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1236 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1242 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1248 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1254 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1260 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1266 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1272 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1278 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1284 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1290 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1296 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1302 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1309 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1317 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1330 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1336 "GetDP.y"
{

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-2].c,fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = yyvsp[-1].i ;
	if (yyvsp[-1].i < 0)  vyyerror("Uncompatible argument for Function: %s", yyvsp[-2].c) ;
      }

      /* Built in functions */

      else { 
	Get_Function2NbrForString(F_Function, yyvsp[-2].c, &FlagError,
				  &WholeQuantity_S.Case.Function.Fct,
				  &WholeQuantity_S.Case.Function.NbrParameters,
				  &WholeQuantity_S.Case.Function.NbrArguments) ;
	WholeQuantity_S.Case.Function.Active = NULL ;
	if (!FlagError) {

	  /* arguments */
	  if (yyvsp[-1].i >= 0) {
	    if (yyvsp[-1].i == WholeQuantity_S.Case.Function.NbrArguments) {
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	    }
	    else if (WholeQuantity_S.Case.Function.NbrArguments == -1  ||
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
	      /* && ($2)%2 == 0)) { */
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	      WholeQuantity_S.Case.Function.NbrArguments = yyvsp[-1].i ;
	    }
	    else {
	      vyyerror("Wrong number of arguments for Function '%s' (%d instead of %d)", 
		       yyvsp[-2].c, yyvsp[-1].i, WholeQuantity_S.Case.Function.NbrArguments) ;
	    }
	  }
	  else {
	    WholeQuantity_S.Type = WQ_EXTERNBUILTINFUNCTION ;
	  }

	  /* parameters */
	  if (WholeQuantity_S.Case.Function.NbrParameters >= 0 &&
	      WholeQuantity_S.Case.Function.NbrParameters != List_Nbr(yyvsp[0].l)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     yyvsp[-2].c, List_Nbr(yyvsp[0].l), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 && List_Nbr(yyvsp[0].l)%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
		     yyvsp[-2].c, List_Nbr(yyvsp[0].l)) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr(yyvsp[0].l) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read(yyvsp[0].l, i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }

	}

	else {
	  vyyerror("Unknown Function: %s", yyvsp[-2].c) ;
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 137:
#line 1410 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of discrete Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(QuantityFromFS_Type) ;
      }
      Free(yyvsp[-1].c) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;

      switch(WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity) {
      case QUANTITY_DOF :
	if (Current_DofIndexInWholeQuantity == -1)
	  Current_DofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("Dof{} definition out of context") ;
	else
	  vyyerror("More than one Dof definition in Expression") ;
	break ;
      case QUANTITY_NODOF :
	if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("NoDof definition out of context") ;
	else if (Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else
	  vyyerror("More than one NoDof definition in Expression") ;
	break ;
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 138:
#line 1444 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1453 "GetDP.y"
{ 
      if(yyvsp[0].i!=1 && yyvsp[0].i!=3 && yyvsp[0].i!=4)
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[-1].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1465 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1467 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 142:
#line 1479 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1481 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = yyvsp[-1].i ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 144:
#line 1493 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 145:
#line 1495 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", yyvsp[-8].c) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = yyvsp[-5].l ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 146:
#line 1509 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-6].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", yyvsp[-6].c) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)yyvsp[-3].d ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1521 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1527 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1533 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 150:
#line 1535 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", yyvsp[-1].i) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[x, ConnectedTo y]'");

      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = -1 ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity){
	for(i=0 ; i<List_Nbr(yyvsp[-3].l) ; i++){
	  WholeQuantity_P = (struct WholeQuantity*)List_Pointer(yyvsp[-3].l, i) ;
	  if(WholeQuantity_P->Type == WQ_OPERATORANDQUANTITY)
	    if(WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity == QUANTITY_DOF){
	      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = i ;
	      Current_DofIndexInWholeQuantity = -4 ;
	      TypeOperatorDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator ;
	      DefineQuantityIndexDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.Index ;
	    }
	}
	if(Current_DofIndexInWholeQuantity != -4)
	  vyyerror("Dof{} definition out of context in Trace operator");
      }

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 151:
#line 1564 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = yyvsp[-1].l ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-4].c,
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp(yyvsp[-4].c, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else if (!strcmp(yyvsp[-4].c, "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2 ;
	else
	  vyyerror("Unknown Cast: %s", yyvsp[-4].c) ;
      }
      else {
	WholeQuantity_S.Case.Cast.NbrHar = 0 ;
	WholeQuantity_S.Case.Cast.FunctionSpaceIndexForType =
	  ((struct DefineQuantity *)List_Pointer(Formulation_S.DefineQuantity, i))
	    ->FunctionSpaceIndex ;
      }
      Free(yyvsp[-4].c) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1590 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError){
	vyyerror("Unknown current value: $%s", yyvsp[0].c);
	Get_Valid_SXP(Current_Value);
      }
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1603 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1609 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1616 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1622 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1629 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1636 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1647 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 160:
#line 1648 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 161:
#line 1649 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 162:
#line 1654 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 163:
#line 1655 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 164:
#line 1661 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 165:
#line 1664 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 166:
#line 1667 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;
    break;}
case 167:
#line 1683 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 168:
#line 1688 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 169:
#line 1695 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 171:
#line 1704 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 172:
#line 1709 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 173:
#line 1716 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 174:
#line 1719 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 175:
#line 1726 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 177:
#line 1736 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 178:
#line 1739 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 179:
#line 1742 "GetDP.y"
{ JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, yyvsp[-2].c, &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (JacobianCase_S.NbrParameters == -2 && (List_Nbr(yyvsp[-1].l))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   yyvsp[-2].c, List_Nbr(yyvsp[-1].l)) ;
	if (JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr(yyvsp[-1].l);
	if (List_Nbr(yyvsp[-1].l) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read(yyvsp[-1].l, i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   yyvsp[-2].c, List_Nbr(yyvsp[-1].l), JacobianCase_S.NbrParameters) ;
      }
      else{
	vyyerror("Unknown type of Jacobian: %s", yyvsp[-2].c);
	Get_Valid_SXD1N(Jacobian_Type);
      }
      Free(yyvsp[-2].c);
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 180:
#line 1780 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 181:
#line 1786 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 182:
#line 1793 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 184:
#line 1806 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 185:
#line 1813 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 186:
#line 1816 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 187:
#line 1823 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 188:
#line 1826 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 189:
#line 1833 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 191:
#line 1845 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 192:
#line 1855 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 193:
#line 1865 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 194:
#line 1872 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 195:
#line 1875 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 196:
#line 1882 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 198:
#line 1898 "GetDP.y"
{ QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Element: %s", yyvsp[-1].c);
	Get_Valid_SXD(Element_Type);
      }

      switch(IntegrationCase_S.SubType) {

      case STANDARD :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	case GAUSSLEGENDRE :
	  Get_FunctionForDefine
	    (FunctionForGaussLegendre, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	default : 
	  vyyerror("Incompatible type of Integration method") ;
	  break ;
	}
	break ;

      case SINGULAR :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForSingularGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	default : 
	  vyyerror("Incompatible type of Integration method") ;
	  break ;
	}
	break ;
      default :
	vyyerror("Incompatible type of Integration method") ;
	break ;
      }

      if (FlagError)  vyyerror("Bad type of Integration method for Element: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 199:
#line 1946 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1949 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1952 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1955 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1958 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 204:
#line 1969 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 207:
#line 1980 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.Constraint, &Constraint_S) ;
      else {
	Save_Name = strsave(Constraint_S.Name) ;  Free(Constraint_S.Name) ;
	if (List_Nbr(ListOfConstraintPerRegion))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				       tmpstr, fcmp_Constraint_Name) ;
	    Constraint_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfConstraintPerRegion, k,
		      &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Problem_S.Constraint, &Constraint_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 209:
#line 2005 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2019 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2025 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 tmpstr, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2032 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2041 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2044 "GetDP.y"
{
      if (!Nbr_Index) {
	if (!Constraint_S.MultiConstraintPerRegion)
	  Constraint_S.MultiConstraintPerRegion =
	    List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

	MultiConstraintPerRegion_S.Name = yyvsp[-3].c ;
	MultiConstraintPerRegion_S.ConstraintPerRegion = yyvsp[-1].l ;
	MultiConstraintPerRegion_S.Active = NULL ;

	List_Add(Constraint_S.MultiConstraintPerRegion, 
		 &MultiConstraintPerRegion_S) ;
      }
      else
	vyyerror("Multiple Constraint not allowed for Case Constraint") ;
    ;
    break;}
case 216:
#line 2066 "GetDP.y"
{
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
      else {
	List_Reset(ListOfConstraintPerRegion) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Constraint_S.ConstraintPerRegion =
	    List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
	  List_Add(ListOfConstraintPerRegion, &Constraint_S.ConstraintPerRegion) ;
	}
	yyval.l = Constraint_S.ConstraintPerRegion ;
      }
    ;
    break;}
case 217:
#line 2081 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
      else {
	if (List_Nbr(ListOfRegionIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfRegionIndex, k, &ConstraintPerRegion_S.RegionIndex) ;
	    if (List_Nbr(ListOfSubRegionIndex))
	      List_Read
		(ListOfSubRegionIndex, k, &ConstraintPerRegion_S.SubRegionIndex) ;

	    List_Read
	      (ListOfConstraintPerRegion, k, &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Constraint_S.ConstraintPerRegion, &ConstraintPerRegion_S) ;
	  }
	yyval.l = Constraint_S.ConstraintPerRegion ;
      }
    ;
    break;}
case 218:
#line 2101 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 219:
#line 2110 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 221:
#line 2124 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 222:
#line 2134 "GetDP.y"
{ 
      if (!Nbr_Index){
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
      }
      else {
	List_Reset(ListOfRegionIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "CO_Region", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;
    break;}
case 223:
#line 2159 "GetDP.y"
{ 
      if (!Nbr_Index)
	ConstraintPerRegion_S.SubRegionIndex =
	  Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSubRegionIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "CO_SubRegion", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;
    break;}
case 224:
#line 2184 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 225:
#line 2189 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 226:
#line 2197 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 227:
#line 2205 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 228:
#line 2214 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.RegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex = -1 ;

	ConstraintPerRegion_S.Case.Link.FilterIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = -1 ;
      }
      else  vyyerror("RegionRef incompatible with Type") ;
    ;
    break;}
case 229:
#line 2232 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 230:
#line 2241 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 231:
#line 2249 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 232:
#line 2257 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 233:
#line 2267 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 234:
#line 2277 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 235:
#line 2287 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 236:
#line 2307 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 238:
#line 2318 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
      else {
	Save_Name = strsave(FunctionSpace_S.Name) ;  Free(FunctionSpace_S.Name) ;
	if (List_Nbr(ListOfBasisFunction))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				       tmpstr, fcmp_FunctionSpace_Name) ;
	    FunctionSpace_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfBasisFunction , k, &FunctionSpace_S.BasisFunction) ;
	    if (List_Nbr(ListOfConstraintInFS))
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	    List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 241:
#line 2347 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 243:
#line 2360 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 244:
#line 2366 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 tmpstr, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 245:
#line 2373 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2382 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2385 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2388 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2391 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2398 "GetDP.y"
{
      if (!Nbr_Index)
	yyval.l = Current_BasisFunction_L =
	  List_Create(6, 6, sizeof (struct BasisFunction)) ;
      else {
	List_Reset(ListOfBasisFunction) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.BasisFunction =
	    List_Create(6, 6, sizeof (struct BasisFunction)) ;
	  List_Add(ListOfBasisFunction, &FunctionSpace_S.BasisFunction) ;
	}
	yyval.l = Current_BasisFunction_L = FunctionSpace_S.BasisFunction ;
      }
    ;
    break;}
case 251:
#line 2414 "GetDP.y"
{
      if (!Nbr_Index) {
	if ( (i = List_ISearchSeq(yyvsp[-3].l, BasisFunction_S.Name, 
				  fcmp_BasisFunction_Name)) < 0 ) {
	  /*
	  BasisFunction_S.Num = Num_BasisFunction++ ;
	  */
	  BasisFunction_S.Num = Num_BasisFunction ;
	  Num_BasisFunction += (BasisFunction_S.SubFunction)?
	    List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	}
	else  /* BasisFunction definie par morceaux => meme Num */
	  BasisFunction_S.Num = ((struct BasisFunction *)List_Pointer(yyvsp[-3].l, i))->Num ;
	
	List_Add(yyval.l = yyvsp[-3].l, &BasisFunction_S) ;
      }
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfSupportIndex, k, &BasisFunction_S.SupportIndex) ;
	    List_Read(ListOfEntityIndex , k, &BasisFunction_S.EntityIndex ) ;
	    List_Read(ListOfBasisFunction, k, &FunctionSpace_S.BasisFunction) ;

	    if ( (i = List_ISearchSeq(FunctionSpace_S.BasisFunction,
				      BasisFunction_S.Name, 
				      fcmp_BasisFunction_Name)) < 0 ) {
	      /*
	      BasisFunction_S.Num = Num_BasisFunction++ ;
	      */
	      BasisFunction_S.Num = Num_BasisFunction ;
	      Num_BasisFunction += (BasisFunction_S.SubFunction)?
		List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	    }
	    else  /* BasisFunction definie par morceaux => meme Num */
	      BasisFunction_S.Num =
		((struct BasisFunction *)
		 List_Pointer(FunctionSpace_S.BasisFunction, i))->Num ;

	    List_Add(FunctionSpace_S.BasisFunction, &BasisFunction_S) ;
	  }
	yyval.l = FunctionSpace_S.BasisFunction ;
      }
    ;
    break;}
case 252:
#line 2463 "GetDP.y"
{ 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SubFunction = NULL ; 
      BasisFunction_S.SubdFunction = NULL ; 
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    ;
    break;}
case 254:
#line 2484 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 255:
#line 2487 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 256:
#line 2492 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2497 "GetDP.y"
{
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError){
	vyyerror("Unknown Function for BasisFunction: %s", yyvsp[-2].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 258:
#line 2511 "GetDP.y"
{
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-4].c, &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", yyvsp[-4].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-4].c) ;
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", yyvsp[-2].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 259:
#line 2531 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 260:
#line 2536 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 261:
#line 2541 "GetDP.y"
{
      if (!Nbr_Index)
	BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "BF_Support", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;
    break;}
case 262:
#line 2565 "GetDP.y"
{
      if (!Nbr_Index) {
	if (yyvsp[-1].i >= 0) {
	  BasisFunction_S.EntityIndex = yyvsp[-1].i ;
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	}
	else if (yyvsp[-1].i == -1) {
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	  BasisFunction_S.EntityIndex = Add_Group(&Group_S, "BF_Entity", 1, 0) ;
	}
	else  vyyerror("Bad Group right hand side") ;

	if (BasisFunction_S.GlobalBasisFunction) {
	  if (Group_S.FunctionType == GLOBAL) {
	    if (List_Nbr(BasisFunction_S.GlobalBasisFunction) ==
		List_Nbr(Group_S.InitialList)) {
	      for (k = 0 ; k < List_Nbr(Group_S.InitialList) ; k++)
		if (*((int*)List_Pointer(Group_S.InitialList, k)) !=
		    *((int*)List_Pointer(BasisFunction_S.GlobalBasisFunction, k))) {
		  vyyerror("Bad correspondance between Group and Entity") ;
		  break ;
		}
	    }
	    else if (List_Nbr(Group_S.InitialList) != 0 ||
		     GlobalBasisFunction_S.EntityIndex != -1)
	      vyyerror("Bad correspondance between Group and Entity") ;
	  }
	  else  vyyerror("Bad correspondance between Group and Entity") ;
	}
      }
      else {
	List_Reset(ListOfEntityIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "BF_Entity", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;
    break;}
case 264:
#line 2625 "GetDP.y"
{ 
      Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; 
    ;
    break;}
case 265:
#line 2629 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 266:
#line 2637 "GetDP.y"
{
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", yyvsp[-12].c) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {

	List_Read(ListOfInt_L, k, &i) ;
	List_Read(Problem_S.Group, i, &Group_S) ;
	if (List_Nbr(Group_S.InitialList) == 1) {
	  List_Read(Group_S.InitialList, 0, &i) ;
	  GlobalBasisFunction_S.EntityIndex = i ;
	}
	else if (List_Nbr(Group_S.InitialList) == 0) {
	  GlobalBasisFunction_S.EntityIndex = -1 ;
	}
	else
	  vyyerror("Only one Region needed in Group: %s", Group_S.Name) ;

	sprintf(tmpstr, "%s_%d_", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) < 0)
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;
	else {
	  GlobalBasisFunction_S.FormulationIndex = i ;

	  sprintf(tmpstr, "%s_%d_", yyvsp[-3].c, k+1) ;
	  if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				   fcmp_Resolution_Name)) < 0)
	    vyyerror("Unknown Resolution: %s {%d}", yyvsp[-3].c, k+1) ;
	  else {
	    GlobalBasisFunction_S.ResolutionIndex = i ;

	    GlobalBasisFunction_S.DefineQuantityIndex = -1 ;
	    GlobalBasisFunction_S.QuantityStorage = NULL ;
	    List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
	  }
	}
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {
	List_Read(BasisFunction_S.GlobalBasisFunction, k, &GlobalBasisFunction_S) ;
	List_Read(Problem_S.Formulation,
		  GlobalBasisFunction_S.FormulationIndex, &Formulation_S) ;
	if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-15].c, 
				 fcmp_DefineQuantity_Name)) < 0) {
	  vyyerror("Unknown Quantity '%s' in Formulation '%s'", yyvsp[-15].c,
		   Formulation_S.Name) ;
	  break ;
	}
	else {
	  GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  List_Write(BasisFunction_S.GlobalBasisFunction, k,
		     &GlobalBasisFunction_S) ;
	}
      }

      Free(yyvsp[-15].c) ; Free(yyvsp[-12].c) ; Free(yyvsp[-3].c) ;
    ;
    break;}
case 267:
#line 2702 "GetDP.y"
{ 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;
    break;}
case 268:
#line 2708 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;
    break;}
case 269:
#line 2717 "GetDP.y"
{ 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;
    break;}
case 271:
#line 2728 "GetDP.y"
{ 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 272:
#line 2735 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 273:
#line 2738 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2745 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", yyvsp[0].c) ;
      else {
	List_Add(yyval.l, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   yyvsp[0].c, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add(yyval.l, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 275:
#line 2761 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2767 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 277:
#line 2770 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", yyvsp[0].c) ;
      else {
	List_Add(yyvsp[-2].l, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   yyvsp[0].c, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add(yyvsp[-2].l, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 278:
#line 2789 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyval.l, &i) ; j = i+1 ;
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 279:
#line 2801 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 280:
#line 2808 "GetDP.y"
{ 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;
    break;}
case 281:
#line 2813 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyvsp[-2].l, &i) ; j = i+1 ;
      }
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 282:
#line 2828 "GetDP.y"
{ 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;
    break;}
case 283:
#line 2834 "GetDP.y"
{ 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 284:
#line 2844 "GetDP.y"
{ 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 286:
#line 2856 "GetDP.y"
{ 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 287:
#line 2863 "GetDP.y"
{ 
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 288:
#line 2874 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 289:
#line 2888 "GetDP.y"
{
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
      else {
	List_Reset(ListOfConstraintInFS) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.Constraint =
	    List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
	  List_Add(ListOfConstraintInFS, &FunctionSpace_S.Constraint) ;
	}
	yyval.l = FunctionSpace_S.Constraint ;
      }
    ;
    break;}
case 290:
#line 2903 "GetDP.y"
{
      Group_S.FunctionType = Type_Function ;
      Group_S.SuppListType = Type_SuppList ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }

      if (!Nbr_Index && Constraint_Index >= 0) {
	Constraint_P = (struct Constraint *)
	  List_Pointer(Problem_S.Constraint, Constraint_Index) ;

	for (i = 0 ; i < List_Nbr(Constraint_P->ConstraintPerRegion) ; i++) {
	  ConstraintPerRegion_P = (struct ConstraintPerRegion *)
	    List_Pointer(Constraint_P->ConstraintPerRegion, i) ;

	  if (ConstraintPerRegion_P->RegionIndex >= 0) {
	    Group_S.InitialList =
	      ((struct Group *)
	       List_Pointer(Problem_S.Group, ConstraintPerRegion_P->RegionIndex))
	      ->InitialList ;
	    Group_S.InitialSuppList =
	      (ConstraintPerRegion_P->SubRegionIndex >= 0)?
	      ((struct Group *)
	       List_Pointer(Problem_S.Group,
			    ConstraintPerRegion_P->SubRegionIndex))
	      ->InitialList : NULL ;
	    ConstraintInFS_S.EntityIndex = Add_Group(&Group_S, "CO_Entity", 1, 0) ;
	    ConstraintInFS_S.ConstraintPerRegion = ConstraintPerRegion_P ;
	    
	    List_Add(yyval.l = yyvsp[-3].l, &ConstraintInFS_S) ;
	  }
	}
      }

      else if (Nbr_Index && List_Nbr(ListOfConstraintIndex)) {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  List_Read(ListOfConstraintIndex, k, &Constraint_Index) ;
	  /* same as above... */
	  Constraint_P = (struct Constraint *)
	    List_Pointer(Problem_S.Constraint, Constraint_Index) ;

	  for (i = 0 ; i < List_Nbr(Constraint_P->ConstraintPerRegion) ; i++) {
	    ConstraintPerRegion_P = (struct ConstraintPerRegion *)
	      List_Pointer(Constraint_P->ConstraintPerRegion, i) ;

	    if (ConstraintPerRegion_P->RegionIndex >= 0) {
	      Group_S.InitialList =
		((struct Group *)
		 List_Pointer(Problem_S.Group, ConstraintPerRegion_P->RegionIndex))
		->InitialList ;
	      Group_S.InitialSuppList =
		(ConstraintPerRegion_P->SubRegionIndex >= 0)?
		((struct Group *)
		 List_Pointer(Problem_S.Group,
			      ConstraintPerRegion_P->SubRegionIndex))
		->InitialList : NULL ;
	      ConstraintInFS_S.EntityIndex = Add_Group(&Group_S, "CO_Entity", 1, 0) ;
	      ConstraintInFS_S.ConstraintPerRegion = ConstraintPerRegion_P ;
	      /* ... same */
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	      List_Add(FunctionSpace_S.Constraint, &ConstraintInFS_S) ;
	    }
	  }
	}
      }

    ;
    break;}
case 291:
#line 2977 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 293:
#line 2993 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) {
	if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, yyvsp[-1].c,
				 fcmp_GlobalQuantity_Name)) < 0)
	  vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
	else {
	  ConstraintInFS_S.QuantityType   = GLOBALQUANTITY ;
	  ConstraintInFS_S.ReferenceIndex = i ;
	}
      }
      else {
	ConstraintInFS_S.QuantityType   = LOCALQUANTITY ;
	ConstraintInFS_S.ReferenceIndex = i ;
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 294:
#line 3026 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 295:
#line 3029 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 296:
#line 3032 "GetDP.y"
{
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex) {
	  Constraint_Index =
	    List_ISearchSeq(Problem_S.Constraint, yyvsp[-2].c, fcmp_Constraint_Name) ;
	}
	else {
	  vyyerror("Multiple Constraint out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfConstraintIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-2].c,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Constraint, tmpstr,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s {%d}", tmpstr, k+1) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	}
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 297:
#line 3078 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 299:
#line 3088 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.Formulation, &Formulation_S) ;
      else {
	Save_Name = strsave(Formulation_S.Name) ;  Free(Formulation_S.Name) ;
	if (List_Nbr(ListOfDefineQuantity))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    Formulation_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Read(ListOfEquationTerm  , k, &Formulation_S.Equation      ) ;
	    List_Add(Problem_S.Formulation, &Formulation_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 302:
#line 3116 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 304:
#line 3128 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 305:
#line 3134 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 tmpstr, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 306:
#line 3141 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3153 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 309:
#line 3159 "GetDP.y"
{
      if (!Nbr_Index)
	Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
      else {
	List_Reset(ListOfDefineQuantity) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.DefineQuantity =
	    List_Create(6, 6, sizeof (struct DefineQuantity)) ;
	  List_Add(ListOfDefineQuantity, &Formulation_S.DefineQuantity) ;
	}
      }
    ;
    break;}
case 310:
#line 3173 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
      else {
	if (List_Nbr(ListOfFunctionSpaceIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfFunctionSpaceIndex, k, &DefineQuantity_S.FunctionSpaceIndex) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
	  }
      }
    ;
    break;}
case 312:
#line 3193 "GetDP.y"
{ DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;
      DefineQuantity_S.DummyFrequency = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    ;
    break;}
case 314:
#line 3216 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 315:
#line 3219 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 316:
#line 3223 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 317:
#line 3226 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 318:
#line 3236 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 319:
#line 3240 "GetDP.y"
{
      if (!Nbr_Index) {
	if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
				 fcmp_FunctionSpace_Name)) < 0)
	  vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
	else
	  DefineQuantity_S.FunctionSpaceIndex = i ;
      }
      else{ 
	vyyerror("Multiple Formulation out of context: %s {}", yyvsp[0].c) ;
      }
    ;
    break;}
case 320:
#line 3253 "GetDP.y"
{ 
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == GLOBALQUANTITY &&
	    !DefineQuantity_S.IndexInFunctionSpace) {
	  if (DefineQuantity_S.Name) {
	    List_Read(Problem_S.FunctionSpace,
		      DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	    if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				     DefineQuantity_S.Name,
				     fcmp_GlobalQuantity_Name)) < 0) {
	      vyyerror("Unknown GlobalQuantity: %s", DefineQuantity_S.Name) ;
	    }
	    else {
	      DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	      List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	    }
	  }
	  else  vyyerror("No Name pre-defined for GlobalQuantity") ;
	}
      }
     
    ;
    break;}
case 321:
#line 3280 "GetDP.y"
{
      Flag_MultipleIndex = 1 ;

      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				   fcmp_FunctionSpace_Name)) < 0)
	    vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	  else
	    DefineQuantity_S.FunctionSpaceIndex = i ;
	}
	else{ 
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfFunctionSpaceIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, tmpstr,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s {%d}", tmpstr, k+1) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	}
      }
    ;
    break;}
case 322:
#line 3321 "GetDP.y"
{ /* attention : doit disparaitre. */
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == GLOBALQUANTITY &&
	    !DefineQuantity_S.IndexInFunctionSpace) {
	  if (DefineQuantity_S.Name) {
	    List_Read(Problem_S.FunctionSpace,
		      DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	    if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				     DefineQuantity_S.Name,
				     fcmp_GlobalQuantity_Name)) < 0) {
	      vyyerror("Unknown GlobalQuantity: %s", DefineQuantity_S.Name) ;
	    }
	    else {
	      DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	      List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	    }
	  }
	  else  vyyerror("No Name pre-defined for GlobalQuantity") ;
	}
      }
      Free(yyvsp[-5].c) ;
    ;
    break;}
case 323:
#line 3345 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 324:
#line 3350 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
#line 3356 "GetDP.y"
{ 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = yyvsp[-2].l ;
      DefineQuantity_S.IntegralQuantity.DofIndexInWholeQuantity = 
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(DefineQuantity_S.IntegralQuantity.WholeQuantity, 0) ;

      /* Ce qui suit ne suffit pas : il faudrait aussi gerer des
	Quantity_def sans Dof */

      if (Current_DofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
	DefineQuantity_S.FunctionSpaceIndex = 
	  ((struct DefineQuantity*)
	   List_Pointer(Formulation_S.DefineQuantity,
			DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof))->
	  FunctionSpaceIndex ;
      }
      else { /* No Dof{} */
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof = NOOP ;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form */

      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_NONE ;

      if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 1){

	/* GF_FUNCTION */	
	if ( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION ) {
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	   	  
	  if (!FlagError){	   
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	    
	  
	}
      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 3){
	
	/* GF_FUNCTION  OPER  DOF */
	if     ( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 1 ) {
	  
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_DOF ;
	    
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;
	}

	/* DOF OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 0 ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;/* Scalar Prod Transitive */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_DOF_PVEC_GF ;
	  
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
	}

	/* GF_FUNCTION  OPER  EXPR */
	else if( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+1)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR  ) {
	 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
		  
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+1)->Case.Expression.Index ;
	    
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_EXP ;
	  /*
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	  */
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	}	  
      
	/* EXPR OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR  ) {
	 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct) ;
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;/* Transitive product */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF ;
	     
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
	}
      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 5){
	
	/* EXPR  OPER  GF_FUNCTION  OPER  DOF */
	if     ( (WholeQuantity_P+0)->Type == WQ_EXPRESSION          &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3 ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	  
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PVEC_DOF ;
	  } 
	}

	/* FCT OPER  GF_FUNCTION  OPER  DOF */	
	else if( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3 ) {
 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.AnyFunction.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PVEC_DOF ;
	  } 
	}
      }

      Pro_DefineQuantityIndex
	(DefineQuantity_S.IntegralQuantity.WholeQuantity,
	 -1,
	 &DefineQuantity_S.IntegralQuantity.NbrQuantityIndex,
	 &DefineQuantity_S.IntegralQuantity.QuantityIndexTable,
	 &DefineQuantity_S.IntegralQuantity.QuantityTraceGroupIndexTable) ;
      if(DefineQuantity_S.IntegralQuantity.NbrQuantityIndex > 1)
	vyyerror("More than one LocalQuantity in IntegralQuantity");

    ;
    break;}
case 326:
#line 3667 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 327:
#line 3672 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3681 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3690 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3699 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 332:
#line 3707 "GetDP.y"
{
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == LOCALQUANTITY) {
	  if ((i = List_ISearchSeq
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, yyvsp[-1].c,
		fcmp_SubSpace_Name)) < 0)
	    vyyerror("Unknown SubSpace: %s", yyvsp[-1].c) ;
	  else {
	    DefineQuantity_S.IndexInFunctionSpace =
	      ((struct SubSpace *)
	       List_Pointer
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, i))
		->BasisFunction ;
	  }
	}
	else if (DefineQuantity_S.Type == GLOBALQUANTITY) {
	  List_Read(Problem_S.FunctionSpace,
		    DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	  if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				   yyvsp[-1].c, fcmp_GlobalQuantity_Name)) < 0) {
	    vyyerror("Unknown GlobalQuantity: %s", yyvsp[-1].c) ;
	  }
	  else {
	    DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	    List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 333:
#line 3747 "GetDP.y"
{
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
      else {
	List_Reset(ListOfEquationTerm) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.Equation =
	    List_Create(6, 6, sizeof (struct EquationTerm)) ;
	  List_Add(ListOfEquationTerm, &Formulation_S.Equation) ;
	}
	yyval.l = Formulation_S.Equation ;
      }
    ;
    break;}
case 334:
#line 3762 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (EquationTerm_S.Type == GALERKIN || EquationTerm_S.Type == DERHAM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.LocalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALTERM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.GlobalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALEQUATION)  /* Attention: Pas fait ! */
	      vyyerror("Multiple GlobalEquation not yet implemented in parser ...") ; 

	    List_Read(ListOfEquationTerm, k, &Formulation_S.Equation) ;

	    List_Add(Formulation_S.Equation, &EquationTerm_S) ;
	  }
	yyval.l = Formulation_S.Equation ;
      }
    ;
    break;}
case 335:
#line 3786 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 336:
#line 3791 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3800 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 338:
#line 3803 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 339:
#line 3806 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 340:
#line 3809 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 341:
#line 3820 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 343:
#line 3831 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 344:
#line 3841 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3851 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 346:
#line 3865 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 348:
#line 3877 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 349:
#line 3879 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3881 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3883 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 352:
#line 3891 "GetDP.y"
{ EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = NOOP ;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = NULL ;
      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 0 ;
      EquationTerm_S.Case.LocalTerm.InIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.MatrixIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.Active = NULL ;
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 0 ;
    ;
    break;}
case 354:
#line 3916 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 355:
#line 3924 "GetDP.y"
{ EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = yyvsp[0].l ;

      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity, 0) ;

      if (Current_DofIndexInWholeQuantity == -4){
	EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 1 ;
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = 
	  TypeOperatorDofInTrace ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = 
	  DefineQuantityIndexDofInTrace ;
      }
      else if (Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_TIME_DOF ;
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_PVEC_DOF ;
	    
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Fct =
	  (WholeQuantity_P+0)->Case.Function.Fct ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.NbrParameters =
	  (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Para =
	  (WholeQuantity_P+0)->Case.Function.Para ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_DOF ;
      }
      else {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_NONE ;
      }

    ;
    break;}
case 356:
#line 4003 "GetDP.y"
{ 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer(yyvsp[-2].l, 0) ;

      if (List_Nbr(yyvsp[-2].l) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing Quantity in Equation");
      }
      else if (List_Nbr(yyvsp[-2].l) == 3 &&
	       ( (WholeQuantity_P+0)->Type == WQ_EXPRESSION &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR ) ) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = 
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical_Equ = 
	  (WholeQuantity_P+0)->Case.Expression.Index ;
	EquationTerm_S.Case.LocalTerm.Term.OperatorTypeForCanonical_Equ =
	  (WholeQuantity_P+2)->Case.Operator.TypeOperator ;
      }
      else{
	vyyerror("Unrecognized quantity structure in Equation");
      }

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityTraceGroupIndexTable) ;

      EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 0 ;
      for (i = 0 ; i < EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex ; i++) {
	if ((EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu) &&
	    (EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof)) {
	  EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 1 ;
	  break ;
	}
      }
    ;
    break;}
case 357:
#line 4049 "GetDP.y"
{
      if (!Nbr_Index)
	EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;
    break;}
case 358:
#line 4073 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 359:
#line 4082 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 4091 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 361:
#line 4096 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4105 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 363:
#line 4116 "GetDP.y"
{ EquationTerm_S.Case.GlobalTerm.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.GlobalTerm.DefineQuantityIndex = -1 ;

      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = NOOP ;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = NULL ;
      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity = -1 ;
      EquationTerm_S.Case.GlobalTerm.InIndex = -1 ;
    ;
    break;}
case 365:
#line 4145 "GetDP.y"
{
      if (!Nbr_Index)
	EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;
    break;}
case 366:
#line 4169 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 367:
#line 4177 "GetDP.y"
{ EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = yyvsp[0].l ;

      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity, 0) ;

      if (Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP ;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if ((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.GlobalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_DOF ;
      }
      else {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_NONE ;
      }

    ;
    break;}
case 368:
#line 4232 "GetDP.y"
{ EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = yyvsp[-2].t.Int1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = yyvsp[-2].t.Int2 ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;
    break;}
case 369:
#line 4249 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 370:
#line 4250 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 371:
#line 4251 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 372:
#line 4252 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 373:
#line 4253 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 374:
#line 4254 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 375:
#line 4255 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 376:
#line 4256 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 377:
#line 4263 "GetDP.y"
{ yyval.t.Int1 = Get_DefineForString(Operator_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown Operator for discrete Quantity: %s", yyvsp[-2].c);
	Get_Valid_SXD(Operator_Type);
      }
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      yyval.t.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = yyval.t.Int1 ;
      Quantity_Index = yyval.t.Int2 ;

      Free(yyvsp[-1].c) ;
    ;
    break;}
case 378:
#line 4284 "GetDP.y"
{ yyval.t.Int1 = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      yyval.t.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = yyval.t.Int1 ;
      Quantity_Index = yyval.t.Int2 ;

      Free(yyvsp[-1].c) ;
    ;
    break;}
case 379:
#line 4308 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 381:
#line 4318 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.Resolution, &Resolution_S) ;
      else {
	Save_Name = strsave(Resolution_S.Name) ;  Free(Resolution_S.Name) ;
	if (List_Nbr(ListOfDefineSystem))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				       tmpstr, fcmp_Resolution_Name) ;
	    Resolution_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Problem_S.Resolution, &Resolution_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 384:
#line 4345 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 386:
#line 4357 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 387:
#line 4364 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 tmpstr, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 388:
#line 4371 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 389:
#line 4374 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 390:
#line 4376 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 392:
#line 4384 "GetDP.y"
{
      if (!Nbr_Index)
	yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
      else {
	List_Reset(ListOfDefineSystem) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Resolution_S.DefineSystem =
	    List_Create(6, 6, sizeof (struct DefineSystem)) ;
	  List_Add(ListOfDefineSystem, &Resolution_S.DefineSystem) ;
	}
	yyval.l = Current_System_L = Resolution_S.DefineSystem ;
      }
    ;
    break;}
case 393:
#line 4399 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
      else {
	if (List_Nbr(ListOfListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfListOfFormulation, k, &DefineSystem_S.FormulationIndex) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Resolution_S.DefineSystem, &DefineSystem_S) ;
	  }
	yyval.l = Current_System_L = Resolution_S.DefineSystem ;
      }
    ;
    break;}
case 394:
#line 4414 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 395:
#line 4424 "GetDP.y"
{ DefineSystem_S.Name = NULL ;  
      DefineSystem_S.Type = VAL_REAL ;
      DefineSystem_S.FormulationIndex = NULL ;
      DefineSystem_S.MeshName = NULL ;
      DefineSystem_S.AdaptName = NULL ;
      DefineSystem_S.FrequencyValue = NULL ;
      DefineSystem_S.SolverDataFileName = NULL ;
      DefineSystem_S.OriginSystemIndex = NULL ;
      DefineSystem_S.DestinationSystemName = NULL ;
      DefineSystem_S.DestinationSystemIndex = -1 ;
      DefineSystem_S.Flag_FMM = 0 ;
    ;
    break;}
case 397:
#line 4444 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 398:
#line 4447 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 399:
#line 4456 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 400:
#line 4459 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 401:
#line 4464 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 4469 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 403:
#line 4474 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 404:
#line 4479 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 406:
#line 4490 "GetDP.y"
{
      if (!Nbr_Index) {
	yyval.l = List_Create(1, 1, sizeof(int)) ;
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c, fcmp_Formulation_Name)) < 0)
	    vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
	  else  List_Add(yyval.l, &i) ;
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-1].c) ;
	}
      }
      else {
	List_Reset(ListOfListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  DefineSystem_S.FormulationIndex = List_Create(1, 1, sizeof(int)) ;
	  List_Add(ListOfListOfFormulation, &DefineSystem_S.FormulationIndex) ;

	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-1].c, k+1) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 407:
#line 4527 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 408:
#line 4534 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 409:
#line 4537 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 410:
#line 4549 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 411:
#line 4559 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 412:
#line 4565 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 413:
#line 4568 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 4580 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 415:
#line 4588 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 416:
#line 4601 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", yyvsp[-2].c);
	Get_Valid_SXD(Operation_Type);
      }
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;
    break;}
case 417:
#line 4623 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;
    break;}
case 418:
#line 4630 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 419:
#line 4636 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 420:
#line 4642 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 421:
#line 4648 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 422:
#line 4656 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-4].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", yyvsp[-4].c);
	Get_Valid_SXD(Operation_Type);
      }
      Free(yyvsp[-4].c) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-2].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;
    ;
    break;}
case 423:
#line 4678 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 424:
#line 4685 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 425:
#line 4691 "GetDP.y"
{ 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-4].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-1].l ;
      Operation_P->Case.Test.Operation_False = NULL ;
    ;
    break;}
case 426:
#line 4702 "GetDP.y"
{ 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-8].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-5].l ;
      Operation_P->Case.Test.Operation_False = yyvsp[-1].l ;
    ;
    break;}
case 427:
#line 4713 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 428:
#line 4726 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-8].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-6].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = yyvsp[-2].i;      
    ;
    break;}
case 429:
#line 4741 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-6].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;
    break;}
case 430:
#line 4756 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-4].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.Precision = -1;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;
    break;}
case 431:
#line 4771 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;
    break;}
case 432:
#line 4791 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLYJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;
    break;}
case 433:
#line 4812 "GetDP.y"
{ Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 434:
#line 4824 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
    Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex =
	Num_Group(&Group_S, "OP_UpdateCst", yyvsp[-4].i) ;
      Operation_P->Case.UpdateConstraint.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-2].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 435:
#line 4844 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = yyvsp[-2].l;
    ;
    break;}
case 436:
#line 4861 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = yyvsp[-2].d;
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    ;
    break;}
case 437:
#line 4880 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)yyvsp[-6].d ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr(yyvsp[-4].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[-4].l) ; i++) {
	List_Read(yyvsp[-4].l, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete(yyvsp[-4].l);
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;
    break;}
case 438:
#line 4901 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)yyvsp[-6].d ;
      Operation_P->Case.EigenSolve.Shift_r = yyvsp[-4].d ;
      Operation_P->Case.EigenSolve.Shift_i = yyvsp[-2].d ;
    ;
    break;}
case 439:
#line 4915 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVEJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)yyvsp[-6].d ;
      Operation_P->Case.EigenSolve.Shift_r = yyvsp[-4].d ;
      Operation_P->Case.EigenSolve.Shift_i = yyvsp[-2].d ;
    ;
    break;}
case 440:
#line 4929 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;
    break;}
case 441:
#line 4937 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PERTURBATION ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-14].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-14].c) ;
      Free(yyvsp[-14].c) ;
      Operation_P->DefineSystemIndex = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-12].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-12].c) ;
      Free(yyvsp[-12].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i ;
      Operation_P->Case.Perturbation.Size = (int)yyvsp[-8].d ;
      Operation_P->Case.Perturbation.Save = 
	List_Create(List_Nbr(yyvsp[-6].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[-6].l) ; i++) {
	List_Read(yyvsp[-6].l, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete(yyvsp[-6].l);
      Operation_P->Case.Perturbation.Shift = yyvsp[-4].d ;
      Operation_P->Case.Perturbation.PertFreq = (int)yyvsp[-2].d ;
    ;
    break;}
case 442:
#line 4971 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
      Operation_P->Case.TimeLoopTheta.Time0 = yyvsp[-10].d ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-8].d ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-6].i ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-4].i ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 443:
#line 4984 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
      Operation_P->Case.TimeLoopNewmark.Time0 = yyvsp[-12].d ; 
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-10].d ; 
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-8].i ; 
      Operation_P->Case.TimeLoopNewmark.Beta = yyvsp[-6].d ; 
      Operation_P->Case.TimeLoopNewmark.Gamma = yyvsp[-4].d ; 
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 444:
#line 4998 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-6].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-4].i ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 445:
#line 5011 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-10].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-6].i ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-4].d ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 446:
#line 5023 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 448:
#line 5032 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 450:
#line 5041 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    ;
    break;}
case 451:
#line 5052 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-8].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-6].i ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)yyvsp[-4].d ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = yyvsp[-2].i ; 
    ;
    break;}
case 452:
#line 5064 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 453:
#line 5074 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;
    break;}
case 454:
#line 5082 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)yyvsp[-2].d ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = yyvsp[-4].l ; 
    ;
    break;}
case 455:
#line 5095 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)yyvsp[-4].d ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = yyvsp[-2].c ;
    ;
    break;}
case 456:
#line 5108 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionMHtoTime.Time = yyvsp[-4].l ;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = yyvsp[-2].c ;
    ;
    break;}
case 457:
#line 5122 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 458:
#line 5132 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 459:
#line 5142 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-6].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-4].c ;
      Operation_P->Case.SaveMesh.ExprIndex = yyvsp[-2].i ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 460:
#line 5156 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-4].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-2].c ;
      Operation_P->Case.SaveMesh.ExprIndex = -1 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 461:
#line 5170 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving.Operation = yyvsp[-2].l ;
    ;
    break;}
case 462:
#line 5189 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = yyvsp[-2].l ;
    ;
    break;}
case 463:
#line 5207 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = yyvsp[-2].d ;
    ;
    break;}
case 464:
#line 5218 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-9].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-7].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-4].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = yyvsp[-2].d ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;
    break;}
case 465:
#line 5233 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-7].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-7].c) ;
      Free(yyvsp[-7].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-5].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;
    break;}
case 466:
#line 5248 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;
    break;}
case 467:
#line 5263 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 468:
#line 5278 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 469:
#line 5293 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 470:
#line 5304 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 471:
#line 5309 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 472:
#line 5319 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 474:
#line 5329 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 475:
#line 5332 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 476:
#line 5342 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 477:
#line 5357 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 479:
#line 5373 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 480:
#line 5377 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 481:
#line 5381 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 5385 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 483:
#line 5390 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 484:
#line 5401 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = 0. ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = 1. ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopNewmark.Beta   = 0.25 ;
      Operation_P->Case.TimeLoopNewmark.Gamma  = 0.5 ;
      Operation_P->Case.TimeLoopNewmark.Operation = NULL ;
    ;
    break;}
case 486:
#line 5418 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5422 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5426 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 489:
#line 5430 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5434 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 5439 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 492:
#line 5450 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 494:
#line 5465 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 5469 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 496:
#line 5473 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 497:
#line 5477 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 5481 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 499:
#line 5492 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration     = 20 ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = 2. ;
      Operation_P->Case.IterativeTimeReduction.Criterion           = 1.e-3 ;
      Operation_P->Case.IterativeTimeReduction.Flag                = 0 ;
      Current_System = Operation_P->DefineSystemIndex              = -1 ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState       = NULL ;
      Operation_P->Case.IterativeTimeReduction.Operation           = NULL ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd        = NULL ;
    ;
    break;}
case 501:
#line 5510 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 5514 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 503:
#line 5518 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 504:
#line 5522 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 505:
#line 5527 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 506:
#line 5537 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5543 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 5549 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 509:
#line 5559 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 510:
#line 5562 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 511:
#line 5567 "GetDP.y"
{
      ChangeOfState_S.Type = CHANGEOFSTATE_CHANGESIGN ;
      ChangeOfState_S.QuantityIndex       = -1 ;
      ChangeOfState_S.FormulationIndex    = -1 ;
      ChangeOfState_S.InIndex             = -1 ;
      ChangeOfState_S.Criterion           = 1.e-2 ;
      ChangeOfState_S.ExpressionIndex = ChangeOfState_S.ExpressionIndex2 = -1 ;
      ChangeOfState_S.FlagIndex           = -1 ;
      ChangeOfState_S.ActiveList[0]       = NULL ;
      ChangeOfState_S.ActiveList[1]       = NULL ;
    ;
    break;}
case 513:
#line 5585 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 514:
#line 5595 "GetDP.y"
{
      if (Current_System >= 0) {
	ListOfInt_Lnew =
	  ((struct DefineSystem *)List_Pointer(Resolution_S.DefineSystem,
					       Current_System))->FormulationIndex ;
	ListOfInt_P =(int *)List_Pointer(ListOfInt_Lnew, 0) ;

	for (j=0 ; j<List_Nbr(ListOfInt_Lnew) ; j++) {
	  Formulation_S.DefineQuantity =
	    ((struct Formulation *)
	     List_Pointer(Problem_S.Formulation, ListOfInt_P[j]))->DefineQuantity ;

	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
				   fcmp_DefineQuantity_Name)) >= 0)
	    break ;
	}
	if (j<List_Nbr(ListOfInt_Lnew)) {
	  ChangeOfState_S.FormulationIndex = ListOfInt_P[j] ;
	  ChangeOfState_S.QuantityIndex = i ;
	}
	else
	  vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 515:
#line 5624 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 516:
#line 5627 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 517:
#line 5630 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 518:
#line 5638 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 519:
#line 5655 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 521:
#line 5667 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
      else {
	Save_Name = strsave(PostProcessing_S.Name) ;  Free(PostProcessing_S.Name) ;
	if (List_Nbr(ListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    PostProcessing_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfFormulation, k, &PostProcessing_S.FormulationIndex) ;
	    List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 523:
#line 5690 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 525:
#line 5704 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 526:
#line 5711 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 tmpstr, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 527:
#line 5719 "GetDP.y"
{ 
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-2].c,
				   fcmp_Formulation_Name)) < 0){
	    vyyerror("Unknown Formulation: %s", yyvsp[-2].c) ;
	  }
	  else {
	    PostProcessing_S.FormulationIndex = i ;
	    List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  }
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-2].c,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	  else {
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-2].c, k+1) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	}
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 528:
#line 5765 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 529:
#line 5770 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5776 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 531:
#line 5779 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 532:
#line 5782 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 533:
#line 5784 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5790 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 536:
#line 5801 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 537:
#line 5804 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 538:
#line 5810 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 539:
#line 5815 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 540:
#line 5821 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, yyvsp[-3].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", yyvsp[-3].c);
	Get_Valid_SXD(PostQuantityTerm_EvaluationType);
      }
      Free(yyvsp[-3].c) ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 541:
#line 5835 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 543:
#line 5849 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 544:
#line 5856 "GetDP.y"
{ PostQuantityTerm_S.WholeQuantity = yyvsp[-2].l ;

      Pro_DefineQuantityIndex
	(PostQuantityTerm_S.WholeQuantity, -1,
	 &PostQuantityTerm_S.NbrQuantityIndex, 
	 &PostQuantityTerm_S.QuantityIndexTable,
	 &PostQuantityTerm_S.QuantityTraceGroupIndexTable) ;
      if (!PostQuantityTerm_S.Type) {
	PostQuantityTerm_S.Type = 0 ;
	for (i = 0 ; i < PostQuantityTerm_S.NbrQuantityIndex ; i++) {
	  if (PostQuantityTerm_S.QuantityIndexTable[i] >= 0)
	    j = ((struct DefineQuantity *)
		 List_Pointer
		 (((struct Formulation *)
		   List_Pointer(Problem_S.Formulation,
				PostProcessing_S.FormulationIndex))->DefineQuantity,
		  PostQuantityTerm_S.QuantityIndexTable[i])) -> Type ;
	  if (PostQuantityTerm_S.Type == 0)
	    PostQuantityTerm_S.Type = j ;
	  else if (PostQuantityTerm_S.Type != j)	  
	    yyerror("Mixed discrete Quantity types in term (should be split in separate terms)") ;
	}
	if (PostQuantityTerm_S.Type == 0)  PostQuantityTerm_S.Type = LOCALQUANTITY ;
      }

    ;
    break;}
case 545:
#line 5884 "GetDP.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError){
       vyyerror("Unknown type of Operation: %s", yyvsp[-1].c);
       Get_Valid_SXD(DefineQuantity_Type);
     }
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 546:
#line 5894 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 547:
#line 5895 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 548:
#line 5901 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 549:
#line 5910 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 550:
#line 5927 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 552:
#line 5939 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 555:
#line 5948 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 557:
#line 5960 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 558:
#line 5967 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[-1].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[-1].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 559:
#line 5979 "GetDP.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[-1].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 560:
#line 5990 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 561:
#line 5995 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 562:
#line 6001 "GetDP.y"
{
      PostOperation_S.PostProcessingIndex = -1 ;
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[0].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[0].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
	if (!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation)) ;
	PostOperation_S.Name = yyvsp[-2].c ;
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 563:
#line 6018 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 564:
#line 6028 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 565:
#line 6031 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 566:
#line 6035 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 567:
#line 6048 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 568:
#line 6053 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 569:
#line 6058 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 570:
#line 6067 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 6076 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 6085 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 573:
#line 6091 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 574:
#line 6096 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 575:
#line 6105 "GetDP.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-1].i ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 576:
#line 6117 "GetDP.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-5].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-5].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-4].i ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;
      PostSubOperation_S.PostQuantitySupport[1] = yyvsp[-1].i ;

      if ((yyvsp[-4].i<0 && yyvsp[-1].i<0) || (yyvsp[-4].i>=0 && yyvsp[-1].i>=0)) {
	vyyerror("Postprocessing Quantities '%s' and '%s' of same type (%s)", 
		 yyvsp[-5].c, yyvsp[-2].c, (yyvsp[-4].i>0)? "with Support":"without Support") ;
      }      
      Free(yyvsp[-5].c) ; Free(yyvsp[-2].c) ;
    ;
    break;}
case 577:
#line 6140 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 578:
#line 6141 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 579:
#line 6142 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 580:
#line 6143 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 581:
#line 6149 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 582:
#line 6151 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 583:
#line 6157 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 584:
#line 6163 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 585:
#line 6170 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6179 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      if(List_Nbr(yyvsp[-8].l)!=3 || List_Nbr(yyvsp[-5].l)!=3 || List_Nbr(yyvsp[-2].l)!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-8].l), List_Nbr(yyvsp[-5].l), List_Nbr(yyvsp[-2].l));
      else{
	List_Read(yyvsp[-8].l, 0, &PostSubOperation_S.Case.OnSection.x[0]);
	List_Read(yyvsp[-8].l, 1, &PostSubOperation_S.Case.OnSection.y[0]);
	List_Read(yyvsp[-8].l, 2, &PostSubOperation_S.Case.OnSection.z[0]);
	List_Read(yyvsp[-5].l, 0, &PostSubOperation_S.Case.OnSection.x[1]);
	List_Read(yyvsp[-5].l, 1, &PostSubOperation_S.Case.OnSection.y[1]);
	List_Read(yyvsp[-5].l, 2, &PostSubOperation_S.Case.OnSection.z[1]);
	List_Read(yyvsp[-2].l, 0, &PostSubOperation_S.Case.OnSection.x[2]);
	List_Read(yyvsp[-2].l, 1, &PostSubOperation_S.Case.OnSection.y[2]);
	List_Read(yyvsp[-2].l, 2, &PostSubOperation_S.Case.OnSection.z[2]);
      }
      List_Delete(yyvsp[-8].l);
      List_Delete(yyvsp[-5].l);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 587:
#line 6201 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 588:
#line 6209 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = yyvsp[-12].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = yyvsp[-10].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = yyvsp[-8].i ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = yyvsp[-5].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = yyvsp[-3].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = yyvsp[-1].l ;
    ;
    break;}
case 589:
#line 6220 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      if(List_Nbr(yyvsp[-1].l)!=3)
	vyyerror("Expected {3} coordinates, got {%d}", List_Nbr(yyvsp[-1].l));
      else{
	List_Read(yyvsp[-1].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-1].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-1].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 590:
#line 6234 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      if(List_Nbr(yyvsp[-8].l)!=3 || List_Nbr(yyvsp[-5].l)!=3)
	vyyerror("Expected {3}{3} coordinates, got {%d}{%d}", 
		 List_Nbr(yyvsp[-8].l), List_Nbr(yyvsp[-5].l));
      else{
	List_Read(yyvsp[-8].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-8].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-8].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-5].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-5].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-5].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-8].l);
      List_Delete(yyvsp[-5].l);
    ;
    break;}
case 591:
#line 6255 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      if(List_Nbr(yyvsp[-13].l)!=3 || List_Nbr(yyvsp[-10].l)!=3 || List_Nbr(yyvsp[-7].l)!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-13].l), List_Nbr(yyvsp[-10].l), List_Nbr(yyvsp[-7].l));
      else{
	List_Read(yyvsp[-13].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-13].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-13].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-10].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-10].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-10].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read(yyvsp[-7].l, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(yyvsp[-7].l, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(yyvsp[-7].l, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-13].l);
      List_Delete(yyvsp[-10].l);
      List_Delete(yyvsp[-7].l);
    ;
    break;}
case 592:
#line 6282 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      if(List_Nbr(yyvsp[-18].l)!=3 || List_Nbr(yyvsp[-15].l)!=3 || List_Nbr(yyvsp[-12].l)!=3 || List_Nbr(yyvsp[-9].l)!=3)
	vyyerror("Expected {3}{3}{3}{3} coordinates, got {%d}{%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-18].l), List_Nbr(yyvsp[-15].l), List_Nbr(yyvsp[-12].l), List_Nbr(yyvsp[-9].l));
      else{
	List_Read(yyvsp[-18].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-18].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-18].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-15].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-15].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-15].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read(yyvsp[-12].l, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(yyvsp[-12].l, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(yyvsp[-12].l, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
	List_Read(yyvsp[-9].l, 0, &PostSubOperation_S.Case.OnGrid.x[3]);
	List_Read(yyvsp[-9].l, 1, &PostSubOperation_S.Case.OnGrid.y[3]);
	List_Read(yyvsp[-9].l, 2, &PostSubOperation_S.Case.OnGrid.z[3]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-18].l);
      List_Delete(yyvsp[-15].l);
      List_Delete(yyvsp[-12].l);
      List_Delete(yyvsp[-9].l);
    ;
    break;}
case 593:
#line 6313 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", yyvsp[-10].i) ;

      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = yyvsp[-6].d ;
      PostSubOperation_S.Case.WithArgument.x[1] = yyvsp[-4].d ;
      PostSubOperation_S.Case.WithArgument.n = (int)yyvsp[-1].d ;
    ;
    break;}
case 594:
#line 6333 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Dimension = _ALL ;
      PostSubOperation_S.Adapt = 0 ;
      PostSubOperation_S.Target = -1. ;
      PostSubOperation_S.HarmonicToTime = 1 ;
      PostSubOperation_S.FrozenTimeStepList = 0;
      PostSubOperation_S.TimeStep_L = List_Create(10,10,sizeof(int)); ;
      PostSubOperation_S.Frequency_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Value_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Iso = 0 ;
      PostSubOperation_S.Iso_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Sort = 0 ;
      PostSubOperation_S.NoNewLine = 0 ;
      PostSubOperation_S.DecomposeInSimplex = 0 ;
      PostSubOperation_S.ChangeOfCoordinates[0] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[1] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[2] = -1 ;
      PostSubOperation_S.ChangeOfValues = NULL ;
      PostSubOperation_S.Legend = LEGEND_NONE;
      PostSubOperation_S.LegendPosition[0] = 0.;
      PostSubOperation_S.LegendPosition[1] = 0.;
      PostSubOperation_S.LegendPosition[2] = 0.;
      PostSubOperation_S.EvaluationPoints = NULL ;
      PostSubOperation_S.StoreInRegister = -1 ;
      PostSubOperation_S.LastTimeStepOnly = 0;
    ;
    break;}
case 596:
#line 6368 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 597:
#line 6375 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 598:
#line 6382 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 599:
#line 6389 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 600:
#line 6393 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 601:
#line 6397 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 602:
#line 6401 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 603:
#line 6405 "GetDP.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 604:
#line 6415 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 605:
#line 6420 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 6425 "GetDP.y"
{
      PostSubOperation_S.FormatChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FormatTag_L  = List_Copy(ListOfInt_L) ;

      printf("--> string: \"");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatChar_L);i++){
	List_Read(PostSubOperation_S.FormatChar_L, i, &tmpstr[0]) ;
	printf("%c", tmpstr[0]);
      }
      printf("\"\n");
      
      printf("--> tags: ");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatTag_L);i+=2){
	List_Read(PostSubOperation_S.FormatTag_L, i, &j) ;
	List_Read(PostSubOperation_S.FormatTag_L, i+1, &k) ;
	printf("%d:%d ", j, k);
      }
      printf("\n");
    ;
    break;}
case 607:
#line 6445 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 608:
#line 6452 "GetDP.y"
{ 
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 609:
#line 6462 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 610:
#line 6471 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 611:
#line 6480 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 612:
#line 6487 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 613:
#line 6495 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 614:
#line 6499 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 615:
#line 6508 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 616:
#line 6512 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 617:
#line 6516 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 618:
#line 6524 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 619:
#line 6530 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 620:
#line 6534 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 621:
#line 6542 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 622:
#line 6549 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 623:
#line 6557 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 624:
#line 6564 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 625:
#line 6572 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 626:
#line 6579 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 627:
#line 6587 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 628:
#line 6591 "GetDP.y"
{
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;
    break;}
case 629:
#line 6600 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 630:
#line 6606 "GetDP.y"
{
      i = 0 ;
      do{
	if(yyvsp[0].c[i] == '%'){ 
	  i++ ; j=i ;
	  do{
	    if(yyvsp[0].c[i] == '+'  || yyvsp[0].c[i] == '-'  || yyvsp[0].c[i] == '*'  || yyvsp[0].c[i] == '%'  ||
	       yyvsp[0].c[i] == '>'  || yyvsp[0].c[i] == '<'  || yyvsp[0].c[i] == '|'  || yyvsp[0].c[i] == '&'  ||
	       yyvsp[0].c[i] == '$'  || yyvsp[0].c[i] == '\'' || yyvsp[0].c[i] == '\\' || yyvsp[0].c[i] == '/'  || 
	       yyvsp[0].c[i] == '{'  ||	yyvsp[0].c[i] == '}'  || yyvsp[0].c[i] == '('  || yyvsp[0].c[i] == ')'  ||
	       yyvsp[0].c[i] == '['  || yyvsp[0].c[i] == ']'  || yyvsp[0].c[i] == '!'  || yyvsp[0].c[i] == ','  ||
	       yyvsp[0].c[i] == '^'  || yyvsp[0].c[i] == '.'  || yyvsp[0].c[i] == ';'  || yyvsp[0].c[i] == '~'  || 
	       yyvsp[0].c[i] == ' '  || yyvsp[0].c[i] == '\n' || yyvsp[0].c[i] == '\t' || yyvsp[0].c[i] == '#'  ||
               yyvsp[0].c[i] == '`'  || yyvsp[0].c[i] == ':'  ){
              break ;
            }
	    i++ ;
	  } while(i<(int)strlen(yyvsp[0].c)) ;
	  strncpy(tmpstr, &yyvsp[0].c[j], i-j); 
	  tmpstr[i-j] = '\0'; 
	  k = Get_DefineForString(PostSubOperation_FormatTag, tmpstr, &FlagError) ;
	  if (FlagError){
	    vyyerror("Unknown Tag in Format: %s", tmpstr);
	    Get_Valid_SXD(PostSubOperation_FormatTag) ;
	  }
	  else {
	    l = List_Nbr(ListOfChar_L) ;
	    List_Add(ListOfInt_L, &l);
	    List_Add(ListOfInt_L, &k);
	  }
        }
	else{
	  List_Add(ListOfChar_L, &yyvsp[0].c[i]);
	  i++ ;
	}
      } while (i<(int)strlen(yyvsp[0].c)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 631:
#line 6656 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 632:
#line 6671 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;
    break;}
case 633:
#line 6687 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-6].c ;      
      Constant_S.Name = yyvsp[-6].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-3].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 634:
#line 6706 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-8].c ;      
      Constant_S.Name = yyvsp[-8].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-5].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;
    break;}
case 635:
#line 6726 "GetDP.y"
{
      if(ImbricatedLoop <= 0){
	vyyerror("Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	x0 = LoopControlVariablesTab[ImbricatedLoop-1][0];
	x1 = LoopControlVariablesTab[ImbricatedLoop-1][1];
	step = LoopControlVariablesTab[ImbricatedLoop-1][2];
	do_next = (step > 0.) ? (x0+step <= x1) : (x0+step >= x1);
	if(do_next){
	  LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	    LoopControlVariablesTab[ImbricatedLoop-1][2];
	  if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	    Constant_S.Name = LoopControlVariablesNameTab[ImbricatedLoop-1] ; 
	    Constant_S.Type = VAR_FLOAT ;
	    Constant_S.Value.Float = LoopControlVariablesTab[ImbricatedLoop-1][0] ;
	    if ((i=List_ISearchSeq(ConstantTable_L, &Constant_S, fcmp_Constant))<0) 
	      vyyerror("Something wrong with For loop starting ") ;
	    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;      
	  }
	  fsetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	}
      }
    ;
    break;}
case 636:
#line 6757 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 637:
#line 6761 "GetDP.y"
{
    ;
    break;}
case 639:
#line 6777 "GetDP.y"
{
      Constant_S.Name = yyvsp[-3].c ; 
      if(List_Nbr(yyvsp[-1].l) == 1){
	Constant_S.Type = VAR_FLOAT ;
	List_Read(yyvsp[-1].l, 0, &Constant_S.Value.Float) ;
	List_Delete(yyvsp[-1].l);
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT ;
	Constant_S.Value.ListOfFloat = yyvsp[-1].l;
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6792 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6798 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6804 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 643:
#line 6810 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6821 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 645:
#line 6826 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstr);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstr);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 646:
#line 6838 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 647:
#line 6848 "GetDP.y"
{
      Msg(INFO2, "[<return>=%g] ? ",yyvsp[-2].d);
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = yyvsp[-2].d;
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-5].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 649:
#line 6867 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 650:
#line 6873 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 651:
#line 6879 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 652:
#line 6890 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 653:
#line 6891 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 654:
#line 6892 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 655:
#line 6893 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 656:
#line 6894 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 657:
#line 6895 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 658:
#line 6896 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 659:
#line 6897 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 660:
#line 6898 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 661:
#line 6899 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 662:
#line 6900 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 663:
#line 6901 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 664:
#line 6902 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 665:
#line 6903 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 666:
#line 6904 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 667:
#line 6905 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 668:
#line 6906 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 669:
#line 6907 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 670:
#line 6908 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 671:
#line 6909 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 672:
#line 6910 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 673:
#line 6914 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 674:
#line 6915 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 675:
#line 6916 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 676:
#line 6917 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 677:
#line 6918 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 678:
#line 6919 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 679:
#line 6920 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 680:
#line 6921 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 681:
#line 6922 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 682:
#line 6923 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 683:
#line 6924 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 684:
#line 6925 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 685:
#line 6926 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 686:
#line 6927 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 687:
#line 6928 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 688:
#line 6929 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 689:
#line 6930 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 690:
#line 6931 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 691:
#line 6932 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 692:
#line 6933 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 693:
#line 6934 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 694:
#line 6935 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 695:
#line 6936 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 696:
#line 6937 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 697:
#line 6938 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 698:
#line 6939 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 699:
#line 6940 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 700:
#line 6941 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 701:
#line 6942 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 702:
#line 6943 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 703:
#line 6944 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 704:
#line 6945 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 705:
#line 6946 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 706:
#line 6947 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 707:
#line 6948 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 708:
#line 6949 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 709:
#line 6950 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 710:
#line 6951 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 711:
#line 6952 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 712:
#line 6953 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 713:
#line 6958 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 714:
#line 6959 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 715:
#line 6960 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 716:
#line 6961 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 717:
#line 6962 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 718:
#line 6963 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 719:
#line 6964 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 720:
#line 6966 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.d = 0. ;
      }
      else  {
	if (Constant_S.Type == VAR_FLOAT)
	  yyval.d = Constant_S.Value.Float ;
	else {
	  vyyerror("Single value Constant needed: %s", yyvsp[0].c) ;  yyval.d = 0. ;
	}
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 721:
#line 6984 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 722:
#line 6987 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 723:
#line 6993 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 724:
#line 6996 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 725:
#line 7003 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 726:
#line 7009 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 727:
#line 7012 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 728:
#line 7015 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 729:
#line 7027 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 730:
#line 7033 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      if(!yyvsp[0].d || (yyvsp[-4].d<yyvsp[-2].d && yyvsp[0].d<0) || (yyvsp[-4].d>yyvsp[-2].d && yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", yyvsp[-4].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(yyval.l, &(yyvsp[-4].d)) ;
      }
      else
	for(d=yyvsp[-4].d ; (yyvsp[0].d>0)?(d<=yyvsp[-2].d):(d>=yyvsp[-2].d) ; d+=yyvsp[0].d) 
	  List_Add(yyval.l, &d) ;
    ;
    break;}
case 731:
#line 7044 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1) ; */
	  List_Add(yyval.l, &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;
    break;}
case 732:
#line 7060 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-3].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-3].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-3].c) ;
	else
	  for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	    if(i < List_Nbr(Constant_S.Value.ListOfFloat)){
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	      List_Add(yyval.l, &d) ;
	    }
	    else{
	      d = 0.;
	      List_Add(yyval.l, &d) ;
	    }
	  }
    ;
    break;}
case 733:
#line 7082 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-1].c) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;
    break;}
case 734:
#line 7097 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant1_S.Name = yyvsp[-3].c ; Constant2_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[-3].c) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", yyvsp[-3].c) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", yyvsp[-1].c) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 yyvsp[-3].c, List_Nbr(Constant1_S.Value.ListOfFloat),
			 yyvsp[-1].c, List_Nbr(Constant2_S.Value.ListOfFloat)) ;
	      }
	      else {
		for(i=0 ; i<List_Nbr(Constant1_S.Value.ListOfFloat) ; i++) {
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d) ;
		  List_Add(yyval.l, &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add(yyval.l, &d) ;
		}
	      }
	    }
	}
    ;
    break;}
case 735:
#line 7135 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 736:
#line 7143 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 737:
#line 7155 "GetDP.y"
{ 
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 738:
#line 7163 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;
    break;}
case 739:
#line 7174 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 740:
#line 7177 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 741:
#line 7184 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 742:
#line 7187 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.c = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  yyval.c = Constant_S.Value.Char ;
	else {
	  vyyerror("String Constant needed: %s", yyvsp[0].c) ;  yyval.c = NULL ;
	}
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 743:
#line 7202 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 744:
#line 7207 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 745:
#line 7212 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-3].c,yyvsp[-1].l,tmpstr);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	yyval.c = yyvsp[-3].c;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	yyval.c = yyvsp[-3].c;
      }
      else{
	yyval.c = (char*)Malloc((strlen(tmpstr)+1)*sizeof(char));
	strcpy(yyval.c, tmpstr);
	Free(yyvsp[-3].c);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 746:
#line 7231 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 747:
#line 7241 "GetDP.y"
{
      if (yyvsp[-3].c != NULL && yyvsp[-1].c != NULL) {
	yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
	strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  yyval.c = NULL ;
      }
    ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 7252 "GetDP.y"



/* 
   This is a hack... Bison redefines 'const' if !__cplusplus and !__STDC__ 
*/

#ifdef const
#undef const
#endif

/*  A d d _ G r o u p   &   C o .  */

int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) {
  int  i ;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  switch (Flag_Plus) {
  case 1 :
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Group)) ;
    Group_P->Name = strsave(tmpstr) ;
    break ;
  case 2 :
    sprintf(tmpstr, "%s_%d_", Name, Num_Index) ;
    Group_P->Name = strsave(tmpstr) ;
    break ;
  default :
    Group_P->Name = Name ;
  }

  if ((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group) ;
    Group_P->ExtendedList = NULL ;  Group_P->ExtendedSuppList = NULL ;
    List_Add(Problem_S.Group, Group_P) ;
  }
  else  List_Write(Problem_S.Group, i, Group_P) ;

  return i ;

}


int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) {
  int  i, j ;
  List_T *InitialList;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  if (Flag_Plus == 0)
    sprintf(tmpstr, "%s", Name) ;
  else if (Flag_Plus == 1)
    sprintf(tmpstr, "%s_%d_", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(tmpstr, "%s_%d_%d_", Name, Num_Index1,Num_Index2) ;

  Group_P->Name = strsave(tmpstr) ;
  
  if ((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group) ;
    Group_P->ExtendedList = NULL ;  Group_P->ExtendedSuppList = NULL ;
    List_Add(Problem_S.Group, Group_P) ;
  } else if (Flag_Add) {
    InitialList = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
    for (j = 0 ; j < List_Nbr(Group_P->InitialList) ; j++) {
      List_Add(InitialList, (int *)List_Pointer(Group_P->InitialList, j)) ;
    } 
  } else List_Write(Problem_S.Group, i, Group_P) ;

  return i ;
}



int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) {

  if      (Num_Group >= 0)   /* OK */ ;
  else if (Num_Group == -1)  Num_Group = Add_Group(Group_P, Name, 1, 0) ;
  else                       vyyerror("Bad Group right hand side") ;

  return Num_Group ;
}


int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) {
  int k, Num ;

  List_Reset(ListOfInt_L) ;

  for (k = 0 ; k < Nbr_Index ; k++) {
    List_Read(ListOfInitialList_L, k, &Group_P->InitialList) ;
    if (Group_P->SuppListType != SUPPLIST_NONE)
      List_Read(ListOfInitialSuppList_L, k, &Group_P->InitialSuppList) ;
    Num = Add_Group(Group_P, Name, Flag_Plus, k+1) ;
    List_Add(ListOfInt_L, &Num) ;
  }
  return (Num-Nbr_Index+1) ;
}

/*  A d d _ E x p r e s s i o n   */

int  Add_Expression(struct Expression * Expression_P,
		    char * Name, int Flag_Plus) {
  int  i ;

  if (!Problem_S.Expression)
    Problem_S.Expression = List_Create(50, 50, sizeof (struct Expression) ) ;

  if (Flag_Plus) {
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strsave(tmpstr) ;
  }
  else  Expression_P->Name = Name ;

  if ((i = List_ISearchSeq
       (Problem_S.Expression, Name, fcmp_Expression_Name)) < 0) {
    i = List_Nbr(Problem_S.Expression) ;
    List_Add(Problem_S.Expression, Expression_P) ;
  }
  else  List_Write(Problem_S.Expression, i, Expression_P) ;

  return i ;
}

/*  L i s t e   I n d e x   d e s   D e f i n e Q u a n t i t y  */

void  Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) {
  int  i ;
  struct WholeQuantity * WholeQuantity_P ;
  struct TwoInt Pair ;

  WholeQuantity_P = (List_Nbr(WholeQuantity_L) > 0)?
    (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) : NULL ;

  for (i = 0 ; i < List_Nbr(WholeQuantity_L) ; i++)
    switch ((WholeQuantity_P+i)->Type) {
    case WQ_OPERATORANDQUANTITY :
    case WQ_OPERATORANDQUANTITYEVAL :
    case WQ_SOLIDANGLE :
    case WQ_ORDER :
      Pair.Int1 = (WholeQuantity_P+i)->Case.OperatorAndQuantity.Index ;
      Pair.Int2 = TraceGroupIndex ;
      List_Insert(ListOfTwoInt_L, &Pair, fcmp_int) ;
      break ;
    case WQ_MHTRANSFORM  :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.MHTransform.WholeQuantity, TraceGroupIndex) ;
    case WQ_TIMEDERIVATIVE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.TimeDerivative.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_ATANTERIORTIMESTEP :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.AtAnteriorTimeStep.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_CAST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Cast.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_TRACE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Trace.WholeQuantity, 
	 (WholeQuantity_P+i)->Case.Trace.InIndex) ;
      break ;
    case WQ_TEST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_True, TraceGroupIndex) ;
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_False, TraceGroupIndex) ;
      break ;
    }
  List_Sort(ListOfTwoInt_L, fcmp_int) ;
}

void  Pro_DefineQuantityIndex(List_T * WholeQuantity_L,
			      int DefineQuantityIndexEqu,
			      int * NbrQuantityIndex, int ** QuantityIndexTable, 
			      int ** QuantityTraceGroupIndexTable) {
  int i ;
  struct TwoInt Pair, *Pair_P ;

  List_Reset(ListOfTwoInt_L) ;

  /* special case for the Equ part (right of the comma) 
     FIXME: change this when we allow a full WholeQuantity expression
     there */
  if (DefineQuantityIndexEqu >= 0){
    Pair.Int1 = DefineQuantityIndexEqu ;
    Pair.Int2 = -1 ;
    List_Add(ListOfTwoInt_L, &Pair) ;
  }

  Pro_DefineQuantityIndex_1(WholeQuantity_L, -1) ;

  *NbrQuantityIndex = List_Nbr(ListOfTwoInt_L) ;
  *QuantityIndexTable = (int *)Malloc(List_Nbr(ListOfTwoInt_L) * sizeof(int)) ;
  *QuantityTraceGroupIndexTable = (int *)Malloc(List_Nbr(ListOfTwoInt_L) * sizeof(int)) ;
  for (i = 0 ; i < List_Nbr(ListOfTwoInt_L) ; i++){
    Pair_P =  (struct TwoInt*)List_Pointer(ListOfTwoInt_L, i) ;
    (*QuantityIndexTable)[i] = Pair_P->Int1 ;
    (*QuantityTraceGroupIndexTable)[i] = Pair_P->Int2 ;
  }
}


/* C h e c k _ N a m e O f S t r u c t N o t E x i s t   */

void  Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				 int (*fcmp)(const void *a, const void *b)) {
  if (List_ISearchSeq(List_L, data, fcmp) >= 0)
    vyyerror("Redefinition of %s %s", Struct, (char*)data) ;
}


/* P r i n t _ C o n s t a n t  */

void  Print_Constant(){
  int i,j;
  char tmp1[1000], tmp2[100];
  struct Constant *Constant_P;

  for(i=0 ; i<List_Nbr(ConstantTable_L) ; i++){
    Constant_P = (struct Constant*)List_Pointer(ConstantTable_L, i);
    switch(Constant_P->Type){
    case VAR_FLOAT:
      Msg(CHECK, "%s = %g;\n", Constant_P->Name, Constant_P->Value.Float);
      break;
    case VAR_LISTOFFLOAT:
      sprintf(tmp1, "%g", *(double*)List_Pointer(Constant_P->Value.ListOfFloat,0));
      for(j=1 ; j<List_Nbr(Constant_P->Value.ListOfFloat) ; j++){
	sprintf(tmp2, ",%g", *(double*)List_Pointer(Constant_P->Value.ListOfFloat,j));
	strcat(tmp1,tmp2);
      }
      Msg(CHECK, "%s = {%s};\n", Constant_P->Name, tmp1);
      break;
    case VAR_CHAR:
      Msg(CHECK, "%s = \"%s\";\n", Constant_P->Name, Constant_P->Value.Char);
      break;
    }
  }
}


/* f c m p _ . . .  */

int  fcmp_Constant (const void *a, const void *b) {
  return ( strcmp(((struct Constant *)a)->Name, ((struct Constant *)b)->Name)) ;
}
int  fcmp_Expression_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Expression *)b)->Name ) ) ;
}
int  fcmp_Group_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Group *)b)->Name ) ) ;
}
int  fcmp_Constraint_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Constraint *)b)->Name ) ) ;
}
int  fcmp_JacobianMethod_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct JacobianMethod *)b)->Name ) ) ;
}
int  fcmp_IntegrationMethod_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct IntegrationMethod *)b)->Name ) ) ;
}
int  fcmp_BasisFunction_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->Name ) ) ;
}
int  fcmp_FunctionSpace_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct FunctionSpace *)b)->Name ) ) ;
}
int  fcmp_BasisFunction_NameOfCoef(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->NameOfCoef ) ) ;
}
int  fcmp_SubSpace_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct SubSpace *)b)->Name ) ) ;
}
int  fcmp_GlobalQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct GlobalQuantity *)b)->Name ) ) ;
}
int  fcmp_Formulation_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Formulation *)b)->Name ) ) ;
}
int  fcmp_DefineQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct DefineQuantity *)b)->Name ) ) ;
}
int  fcmp_DefineSystem_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct DefineSystem *)b)->Name ) ) ;
}
int  fcmp_Resolution_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Resolution *)b)->Name ) ) ;
}
int  fcmp_PostProcessing_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostProcessing *)b)->Name ) ) ;
}
int  fcmp_PostQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostQuantity *)b)->Name ) ) ;
}
int  fcmp_PostOperation_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostOperation *)b)->Name ) ) ;
}

int Print_ListOfDouble(char *format, List_T *list, char *buffer){
  int i, j, k;
  char tmp1[256], tmp2[256];

  j=0;
  while(format[j]!='%') j++;
  strncpy(buffer, format, j); 
  buffer[j]='\0'; 
  for(i = 0 ; i<List_Nbr(list) ; i++){
    k = j;
    j++;
    if(j<(int)strlen(format)){
      if(format[j]=='%'){
	strcat(buffer, "%");
	j++;
      }
      while(format[j]!='%' && j<(int)strlen(format)) j++;
      if(k != j){
	strncpy(tmp1, &(format[k]),j-k);
	tmp1[j-k]='\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list,i)); 
	strcat(buffer, tmp2);
      }
    }
    else{
      return List_Nbr(list)-i;
      break ;
    }
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}


/*  E r r o r   h a n d l i n g  */

void  yyerror (char *s) {
  int  i, nn ;
  char space1[32] = "", space2[512]= "";

  if(!InteractiveLevel){
    Msg(DIRECT, "Error ('%s' line %ld): %s on '%s'", yyname, yylinenum, 
	s, yytext) ;
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
	strcat(space2, " ");
      }
      for(i=0 ; i<yycolnum-2 ; i++) {
	strcat(space2, " ");
      }
      Msg(DIRECT, "%s^", space2);
      Msg(DIRECT, "%s%s", space1, s);
      Msg(DIRECT, "") ;
      Msg(DIRECT, "") ;
    }
  }

  ErrorLevel=1 ;
}

void  vyyerror (char *fmt, ...){
  int      i, nn ;
  char space1[32] = "", str[256];
  va_list  args;

  va_start (args, fmt);
  vsprintf (str, fmt, args);
  va_end (args);

  if(!InteractiveLevel){
    Msg(DIRECT, "Error ('%s' line %ld): %s", yyname, yylinenum, str);
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
      }
      Msg(DIRECT, "%s%s", space1, str) ;
      Msg(DIRECT, "");
    }
  }

  ErrorLevel=1 ;
}

