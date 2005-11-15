
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

/* $Id: GetDP.tab.c,v 1.94 2005-11-15 15:06:21 geuzaine Exp $ */
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



#define	YYFINAL		2041
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
   718,   722,   726,   730,   731,   734,   738,   740,   742,   743,
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
  2117,  2121,  2123,  2125,  2126,  2129,  2133,  2138,  2143,  2147,
  2152,  2153,  2158,  2161,  2164,  2165,  2168,  2172,  2177,  2178,
  2184,  2190,  2191,  2194,  2195,  2202,  2206,  2207,  2212,  2216,
  2220,  2221,  2224,  2228,  2230,  2232,  2233,  2236,  2240,  2244,
  2248,  2252,  2257,  2258,  2267,  2268,  2269,  2273,  2281,  2289,
  2298,  2310,  2317,  2318,  2329,  2331,  2335,  2342,  2344,  2346,
  2348,  2350,  2351,  2355,  2357,  2360,  2363,  2376,  2379,  2395,
  2400,  2413,  2431,  2454,  2467,  2468,  2471,  2475,  2480,  2485,
  2489,  2492,  2495,  2499,  2503,  2507,  2511,  2515,  2519,  2523,
  2527,  2531,  2535,  2539,  2543,  2549,  2552,  2555,  2559,  2569,
  2573,  2576,  2586,  2589,  2599,  2602,  2612,  2618,  2622,  2625,
  2626,  2629,  2636,  2645,  2654,  2665,  2667,  2672,  2674,  2680,
  2685,  2690,  2698,  2703,  2711,  2717,  2725,  2731,  2740,  2741,
  2745,  2751,  2757,  2759,  2761,  2763,  2765,  2767,  2769,  2771,
  2773,  2775,  2777,  2779,  2781,  2783,  2785,  2787,  2789,  2791,
  2793,  2795,  2797,  2799,  2801,  2805,  2808,  2811,  2815,  2819,
  2823,  2827,  2831,  2835,  2839,  2843,  2847,  2851,  2855,  2859,
  2863,  2867,  2872,  2877,  2882,  2887,  2892,  2897,  2902,  2907,
  2912,  2917,  2924,  2929,  2934,  2939,  2944,  2949,  2954,  2961,
  2968,  2975,  2981,  2984,  2986,  2988,  2990,  2992,  2994,  2996,
  2998,  3000,  3001,  3003,  3005,  3009,  3011,  3013,  3017,  3021,
  3025,  3031,  3035,  3040,  3045,  3052,  3061,  3070,  3076,  3082,
  3084,  3086,  3088,  3090,  3092,  3097,  3104,  3106
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
   333,   334,     0,   263,   335,   264,     0,   450,     0,   449,
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
   450,     0,   449,     0,     0,   422,   423,     0,    96,   459,
     7,     0,    96,     5,   295,     7,     0,   134,   459,   296,
     7,     0,   188,   459,     7,     0,   112,   263,   424,   264,
     0,     0,   424,   263,   425,   264,     0,   424,   450,     0,
   424,   449,     0,     0,   425,   426,     0,    96,   459,     7,
     0,    75,   263,   427,   264,     0,     0,   427,   117,   263,
   428,   264,     0,   427,     5,   263,   428,   264,     0,     0,
   428,   429,     0,     0,   388,   257,   430,   305,   258,     7,
     0,    86,     5,     7,     0,     0,   130,   431,   285,     7,
     0,    81,     5,     7,     0,    83,     5,     7,     0,     0,
   432,   433,     0,   263,   434,   264,     0,   450,     0,   449,
     0,     0,   434,   435,     0,    96,   459,     7,     0,   190,
   459,     7,     0,   214,     5,     7,     0,   192,   460,     7,
     0,   140,   263,   438,   264,     0,     0,   189,   459,   191,
   459,   437,   263,   438,   264,     0,     0,     0,   438,   439,
   440,     0,   193,   257,   442,   445,   446,   258,     7,     0,
   194,   257,   442,   445,   446,   258,     7,     0,   194,   257,
     6,   265,   301,   446,   258,     7,     0,   194,   257,     6,
   265,   231,   257,   460,   258,   446,   258,     7,     0,   196,
   257,     6,   446,   258,     7,     0,     0,   195,   257,   285,
   441,   265,   130,   285,   446,   258,     7,     0,   449,     0,
   459,   444,   265,     0,   459,   444,   443,     5,   444,   265,
     0,   248,     0,   249,     0,   246,     0,   247,     0,     0,
   257,   285,   258,     0,   199,     0,   200,   285,     0,   201,
   285,     0,   203,   263,   263,   456,   264,   263,   456,   264,
   263,   456,   264,   264,     0,   202,   285,     0,   202,   263,
   301,   265,   301,   265,   301,   264,   263,   455,   265,   455,
   265,   455,   264,     0,   204,   263,   456,   264,     0,   205,
   263,   263,   456,   264,   263,   456,   264,   264,   263,   453,
   264,     0,   206,   263,   263,   456,   264,   263,   456,   264,
   263,   456,   264,   264,   263,   453,   265,   453,   264,     0,
   207,   263,   263,   456,   264,   263,   456,   264,   263,   456,
   264,   263,   456,   264,   264,   263,   453,   265,   453,   265,
   453,   264,     0,   200,   285,   208,     5,   263,   453,   265,
   453,   264,   263,   453,   264,     0,     0,   446,   447,     0,
   265,   209,   460,     0,   265,   209,   242,   460,     0,   265,
   209,   245,   460,     0,   265,   210,   453,     0,   265,   217,
     0,   265,   218,     0,   265,   213,   453,     0,   265,   214,
     5,     0,   265,   215,   448,     0,   265,   216,   448,     0,
   265,   214,   448,     0,   265,   211,   453,     0,   265,   212,
   455,     0,   265,   198,     5,     0,   265,   220,     5,     0,
   265,   219,   453,     0,   265,    75,   455,     0,   265,   221,
   453,     0,   265,   221,   263,   456,   264,     0,   265,   222,
     0,   265,   223,     0,   265,   136,   455,     0,   265,   168,
   263,   301,   265,   301,   265,   301,   264,     0,   265,   224,
   303,     0,   265,   225,     0,   265,   225,   263,   453,   265,
   453,   265,   453,   264,     0,   265,   226,     0,   265,   226,
   263,   453,   265,   453,   265,   453,   264,     0,   265,   227,
     0,   265,   227,   263,   453,   265,   453,   265,   453,   264,
     0,   265,   228,   263,   456,   264,     0,   265,   229,     3,
     0,   265,   230,     0,     0,   448,     6,     0,    13,   255,
   453,     8,   453,   256,     0,    13,   255,   453,     8,   453,
     8,   453,   256,     0,    13,     5,   130,   263,   453,     8,
   453,   264,     0,    13,     5,   130,   263,   453,     8,   453,
     8,   453,   264,     0,    14,     0,    15,   255,   453,   256,
     0,    17,     0,    29,   257,   451,   258,     7,     0,   459,
   233,   455,     7,     0,   459,   233,     6,     7,     0,   459,
   233,   231,   257,   460,   258,     7,     0,   459,   233,   461,
     7,     0,   459,   233,    28,   257,   460,   258,     7,     0,
    11,   255,     6,   256,     7,     0,    11,   255,     6,   265,
   456,   256,     7,     0,    12,   255,   459,   256,     7,     0,
    12,   255,   459,   256,   257,   453,   258,     7,     0,     0,
   451,   294,     5,     0,   451,   294,     5,   233,   453,     0,
   451,   294,     5,   233,     6,     0,    35,     0,    36,     0,
    37,     0,    38,     0,    39,     0,    40,     0,    41,     0,
    42,     0,    43,     0,    44,     0,    45,     0,    46,     0,
    47,     0,    48,     0,    49,     0,    50,     0,    51,     0,
    52,     0,    53,     0,    54,     0,   459,     0,   454,     0,
   255,   453,   256,     0,   247,   453,     0,   252,   453,     0,
   453,   247,   453,     0,   453,   246,   453,     0,   453,   248,
   453,     0,   453,   249,   453,     0,   453,   250,   453,     0,
   453,   254,   453,     0,   453,   240,   453,     0,   453,   242,
   453,     0,   453,   241,   453,     0,   453,   243,   453,     0,
   453,   237,   453,     0,   453,   238,   453,     0,   453,   236,
   453,     0,   453,   235,   453,     0,    35,   257,   453,   258,
     0,    36,   257,   453,   258,     0,    37,   257,   453,   258,
     0,    38,   257,   453,   258,     0,    39,   257,   453,   258,
     0,    40,   257,   453,   258,     0,    41,   257,   453,   258,
     0,    42,   257,   453,   258,     0,    43,   257,   453,   258,
     0,    44,   257,   453,   258,     0,    45,   257,   453,   265,
   453,   258,     0,    46,   257,   453,   258,     0,    47,   257,
   453,   258,     0,    48,   257,   453,   258,     0,    49,   257,
   453,   258,     0,    50,   257,   453,   258,     0,    51,   257,
   453,   258,     0,    52,   257,   453,   265,   453,   258,     0,
    53,   257,   453,   265,   453,   258,     0,    54,   257,   453,
   265,   453,   258,     0,   453,   234,   453,     8,   453,     0,
   453,   260,     0,     4,     0,     3,     0,    30,     0,    31,
     0,    32,     0,    33,     0,    34,     0,   459,     0,     0,
   453,     0,   457,     0,   263,   456,   264,     0,   453,     0,
   457,     0,   456,   265,   453,     0,   456,   265,   457,     0,
   453,     8,   453,     0,   453,     8,   453,     8,   453,     0,
     5,   263,   264,     0,     5,   263,   456,   264,     0,    24,
   257,     5,   258,     0,    25,   257,     5,   265,     5,   258,
     0,    26,   257,   453,   265,   453,   265,   453,   258,     0,
    27,   257,   453,   265,   453,   265,   453,   258,     0,     5,
   267,   263,   453,   264,     0,   458,   267,   263,   453,   264,
     0,     5,     0,   458,     0,     6,     0,   459,     0,   461,
     0,    10,   255,   460,   256,     0,    10,   255,   460,   265,
   456,   256,     0,   232,     0,     9,   257,   460,   265,   460,
   258,     0
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
  1951,  1954,  1957,  1966,  1973,  1976,  1998,  2000,  2003,  2013,
  2017,  2025,  2032,  2041,  2044,  2064,  2081,  2101,  2108,  2118,
  2122,  2134,  2159,  2184,  2189,  2197,  2205,  2214,  2232,  2241,
  2249,  2257,  2267,  2277,  2287,  2305,  2313,  2316,  2339,  2341,
  2345,  2354,  2358,  2366,  2373,  2382,  2385,  2388,  2391,  2396,
  2414,  2461,  2478,  2482,  2487,  2492,  2497,  2511,  2531,  2536,
  2541,  2565,  2620,  2624,  2629,  2637,  2700,  2708,  2715,  2722,
  2726,  2735,  2738,  2743,  2761,  2766,  2770,  2787,  2801,  2806,
  2813,  2826,  2834,  2842,  2850,  2854,  2863,  2874,  2886,  2903,
  2975,  2987,  2991,  3026,  3029,  3032,  3076,  3083,  3086,  3108,
  3110,  3114,  3122,  3126,  3134,  3141,  3151,  3153,  3158,  3173,
  3187,  3191,  3210,  3214,  3219,  3223,  3226,  3236,  3240,  3253,
  3280,  3321,  3345,  3350,  3356,  3667,  3672,  3681,  3690,  3699,
  3704,  3707,  3745,  3762,  3786,  3791,  3798,  3803,  3806,  3809,
  3818,  3826,  3829,  3841,  3851,  3863,  3872,  3875,  3879,  3881,
  3883,  3889,  3910,  3914,  3925,  4003,  4049,  4073,  4082,  4091,
  4096,  4105,  4114,  4131,  4135,  4169,  4178,  4232,  4248,  4251,
  4252,  4253,  4254,  4255,  4256,  4257,  4261,  4284,  4306,  4313,
  4316,  4337,  4339,  4343,  4351,  4355,  4364,  4371,  4374,  4376,
  4379,  4383,  4399,  4414,  4422,  4438,  4442,  4447,  4456,  4459,
  4464,  4469,  4474,  4479,  4484,  4488,  4527,  4532,  4537,  4547,
  4559,  4563,  4568,  4579,  4588,  4597,  4623,  4630,  4636,  4642,
  4648,  4656,  4678,  4685,  4691,  4702,  4713,  4726,  4741,  4756,
  4771,  4791,  4812,  4824,  4844,  4861,  4880,  4901,  4915,  4929,
  4936,  4970,  4983,  4997,  5010,  5023,  5030,  5032,  5039,  5041,
  5052,  5064,  5074,  5082,  5095,  5108,  5122,  5132,  5142,  5156,
  5170,  5188,  5207,  5218,  5233,  5248,  5263,  5278,  5293,  5303,
  5309,  5319,  5325,  5328,  5332,  5342,  5355,  5367,  5371,  5377,
  5381,  5385,  5390,  5399,  5412,  5416,  5422,  5426,  5430,  5434,
  5439,  5448,  5460,  5463,  5469,  5473,  5477,  5481,  5490,  5505,
  5508,  5514,  5518,  5522,  5527,  5537,  5543,  5549,  5558,  5562,
  5566,  5580,  5583,  5595,  5624,  5627,  5630,  5638,  5654,  5662,
  5665,  5686,  5688,  5691,  5702,  5705,  5713,  5721,  5767,  5772,
  5777,  5781,  5784,  5786,  5791,  5798,  5802,  5806,  5811,  5817,
  5823,  5836,  5847,  5850,  5858,  5886,  5897,  5897,  5903,  5912,
  5928,  5936,  5939,  5944,  5946,  5949,  5958,  5961,  5969,  5981,
  5992,  5997,  6002,  6020,  6029,  6033,  6038,  6048,  6055,  6060,
  6069,  6078,  6087,  6093,  6098,  6105,  6119,  6141,  6144,  6145,
  6146,  6149,  6153,  6157,  6165,  6172,  6179,  6203,  6210,  6222,
  6235,  6255,  6281,  6314,  6334,  6366,  6369,  6377,  6384,  6391,
  6395,  6399,  6403,  6407,  6417,  6422,  6427,  6447,  6454,  6464,
  6473,  6482,  6489,  6497,  6501,  6510,  6514,  6518,  6526,  6532,
  6536,  6544,  6551,  6559,  6566,  6574,  6581,  6589,  6593,  6601,
  6608,  6656,  6673,  6689,  6708,  6728,  6759,  6763,  6774,  6778,
  6793,  6799,  6805,  6811,  6822,  6827,  6839,  6849,  6865,  6868,
  6874,  6880,  6891,  6893,  6894,  6895,  6896,  6897,  6898,  6899,
  6900,  6901,  6902,  6903,  6904,  6905,  6906,  6907,  6908,  6909,
  6910,  6911,  6912,  6915,  6917,  6918,  6919,  6920,  6921,  6922,
  6923,  6924,  6925,  6926,  6927,  6928,  6929,  6930,  6931,  6932,
  6933,  6934,  6935,  6936,  6937,  6938,  6939,  6940,  6941,  6942,
  6943,  6944,  6945,  6946,  6947,  6948,  6949,  6950,  6951,  6952,
  6953,  6954,  6955,  6958,  6961,  6962,  6963,  6964,  6965,  6966,
  6967,  6983,  6988,  6994,  6997,  7002,  7010,  7013,  7016,  7026,
  7034,  7045,  7061,  7083,  7098,  7136,  7144,  7154,  7164,  7173,
  7178,  7183,  7188,  7203,  7208,  7213,  7232,  7241
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
   332,   332,   332,   333,   333,   334,   334,   334,   335,   335,
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
   421,   421,   421,   422,   422,   423,   423,   423,   423,   423,
   424,   424,   424,   424,   425,   425,   426,   426,   427,   427,
   427,   428,   428,   430,   429,   429,   431,   429,   429,   429,
   432,   432,   433,   433,   433,   434,   434,   435,   435,   435,
   435,   435,   437,   436,   438,   439,   438,   440,   440,   440,
   440,   440,   441,   440,   440,   442,   442,   443,   443,   443,
   443,   444,   444,   445,   445,   445,   445,   445,   445,   445,
   445,   445,   445,   445,   446,   446,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   448,
   448,   449,   449,   449,   449,   449,   449,   449,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   451,   451,
   451,   451,   452,   452,   452,   452,   452,   452,   452,   452,
   452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
   452,   452,   452,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
   453,   453,   453,   454,   454,   454,   454,   454,   454,   454,
   454,   455,   455,   455,   455,   456,   456,   456,   456,   457,
   457,   457,   457,   457,   457,   457,   457,   458,   458,   459,
   459,   460,   460,   460,   460,   460,   460,   461
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
     3,     3,     3,     0,     2,     3,     1,     1,     0,     2,
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
     3,     1,     1,     0,     2,     3,     4,     4,     3,     4,
     0,     4,     2,     2,     0,     2,     3,     4,     0,     5,
     5,     0,     2,     0,     6,     3,     0,     4,     3,     3,
     0,     2,     3,     1,     1,     0,     2,     3,     3,     3,
     3,     4,     0,     8,     0,     0,     3,     7,     7,     8,
    11,     6,     0,    10,     1,     3,     6,     1,     1,     1,
     1,     0,     3,     1,     2,     2,    12,     2,    15,     4,
    12,    17,    22,    12,     0,     2,     3,     4,     4,     3,
     2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     5,     2,     2,     3,     9,     3,
     2,     9,     2,     9,     2,     9,     5,     3,     2,     0,
     2,     6,     8,     8,    10,     1,     4,     1,     5,     4,
     4,     7,     4,     7,     5,     7,     5,     8,     0,     3,
     5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
     6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     0,     1,     1,     3,     1,     1,     3,     3,     3,
     5,     3,     4,     4,     6,     8,     8,     5,     5,     1,
     1,     1,     1,     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   740,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   741,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   742,     0,     0,   747,   743,    18,   744,   649,    42,
   204,   167,   180,   236,    91,   297,   379,   519,   551,     0,
     0,   636,     0,   638,     0,     0,     0,     0,    41,   575,
     0,   722,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   715,   714,   740,     0,     0,     0,
     0,     0,     0,   716,   717,   718,   719,   720,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   723,   674,     0,   724,   721,     0,     0,
     0,     0,     0,     0,     0,     0,    86,     0,     6,     0,
   209,     8,   205,   208,   207,   169,     9,   182,    10,   241,
    11,   237,   240,   239,   740,     0,     7,    92,    97,    96,
   302,    12,   298,   301,   300,   384,    13,   380,   383,   382,
   524,    14,   520,   523,   522,   556,    15,   552,   555,   554,
   563,     0,     0,     0,     0,   582,     0,     0,   740,    63,
     0,    61,   573,     0,    88,   595,     0,     0,   641,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   676,   677,     0,   726,     0,
   727,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   713,   640,   643,
   738,   645,     0,   647,     0,     0,   745,     0,   639,   650,
   740,     0,    44,    50,    53,    52,     0,     0,     0,     0,
     0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
   637,   584,     0,     0,     0,     0,     0,     0,     0,     0,
   595,     0,     0,   102,   595,    76,   740,    73,     0,    60,
    71,    80,     0,    57,     0,    62,     0,   739,   732,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   675,   725,     0,   730,
     0,   691,   690,   688,   689,   684,   686,   685,   687,   679,
   678,   680,   681,   682,   683,     0,     0,     0,     0,     0,
     0,     0,     0,    82,   722,     0,     0,     0,     0,     0,
   206,   210,     0,     0,   168,   170,     0,   102,     0,   181,
   183,     0,     0,     0,     0,     0,     0,   238,   242,     0,
     0,    85,     0,     0,     0,     0,   299,   303,     0,     0,
   389,   381,   385,   391,     0,     0,     0,     0,   521,   525,
     0,     0,     0,     0,     0,   553,   557,   565,     0,     0,
   585,   586,   102,   588,     0,     0,     0,     0,     0,     0,
     0,   580,   581,   578,   579,   576,     0,     0,     0,     0,
   595,   108,     0,     0,     0,    85,     0,     0,     0,    89,
     0,     0,   596,   733,   734,     0,     0,     0,     0,   692,
   693,   694,   695,   696,   697,   698,   699,   700,   701,     0,
   703,   704,   705,   706,   707,   708,     0,     0,     0,     0,
   728,   729,     0,     0,   646,     0,   748,   746,   652,   651,
     0,     0,    47,     0,    85,   740,     0,     0,     0,     0,
   216,     0,     0,   173,     0,   187,     0,     0,   289,     0,
   740,     0,   250,   267,   282,   102,     0,     0,     0,     0,
   740,     0,   309,   333,   740,     0,   392,     0,   740,     0,
   531,    88,     0,     0,   565,     0,     0,     0,   566,     0,
     0,   632,     0,     0,     0,     0,     0,     0,     0,     0,
   583,   582,     0,     0,     0,     0,   103,     0,     0,   715,
    78,    81,    72,     0,    77,     0,    66,    58,    65,   572,
   722,   722,     0,     0,     0,     0,     0,   722,     0,   630,
   630,   630,   601,   602,     0,     0,     0,   616,   617,   104,
   621,   623,   625,     0,     0,   629,     0,     0,     0,   644,
     0,     0,     0,     0,   642,   731,   712,   648,    90,     0,
     0,    64,     0,     0,     0,    45,     0,     0,   216,     0,
   213,   211,     0,     0,     0,   171,     0,   185,   184,     0,
   245,     0,   243,     0,     0,     0,     0,   102,    93,    99,
   306,     0,   304,     0,     0,     0,   386,     0,   414,     0,
   526,     0,     0,   529,   558,   566,   559,   561,   560,   564,
     0,     0,     0,     0,   102,     0,   590,     0,     0,     0,
   568,     0,     0,     0,     0,     0,   740,   653,   654,   655,
   656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
   666,   667,   668,   669,   670,   671,   672,     0,   149,     0,
     0,     0,     0,   140,   142,     0,     0,     0,     0,     0,
     0,     0,     0,   109,   110,   138,     0,   135,   721,   569,
     0,     0,    74,   595,    85,   613,   618,   102,   610,     0,
     0,   597,   600,   608,   609,   603,   604,   607,   605,   606,
   612,   611,     0,   614,   102,   620,     0,     0,     0,     0,
   628,   735,     0,     0,   702,   709,   710,   711,    87,     0,
    46,    49,    83,    51,     0,     0,   219,   214,   218,   212,
   175,   172,   189,   186,   291,   249,   244,   252,   246,   269,
   247,   284,   248,    94,     0,   305,   312,   307,   311,     0,
     0,     0,     0,   308,   334,   336,   335,   387,   395,   388,
   394,     0,   527,   535,   530,   534,   533,   528,   562,   567,
     0,   634,   633,     0,     0,     0,     0,     0,     0,   577,
   100,   101,   595,   570,   137,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   132,   131,   133,     0,   157,   155,
   152,   154,   153,   740,     0,   111,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   139,   164,    79,    75,     0,
     0,     0,     0,   598,   599,   631,     0,   106,     0,     0,
     0,     0,     0,     0,     0,    48,     0,    54,   215,     0,
     0,     0,     0,     0,     0,     0,    95,     0,   352,   352,
   363,   341,     0,     0,     0,   102,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
   448,   390,   415,   469,     0,     0,     0,   102,     0,     0,
     0,     0,     0,     0,   108,     0,     0,     0,     0,   108,
   108,     0,   134,     0,   378,     0,   130,   129,   126,   127,
   128,   122,   124,   123,   125,   118,   119,   114,   117,   120,
   115,   121,   156,   158,   160,     0,   162,     0,     0,   136,
     0,    59,    70,     0,     0,   102,   615,   105,   102,     0,
     0,     0,   627,   736,   737,     0,     0,     0,     0,     0,
     0,   102,   102,   102,   102,     0,     0,     0,   102,   217,
   220,     0,     0,   174,   176,     0,     0,     0,   188,   190,
     0,     0,     0,     0,   290,   292,     0,     0,     0,     0,
   104,   104,     0,     0,   251,   253,     0,     0,     0,   268,
   270,     0,     0,     0,   283,   285,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   722,   324,   310,   313,   369,
   369,   369,     0,     0,     0,     0,     0,   722,     0,     0,
     0,   393,   396,   405,     0,     0,   102,   102,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   424,   102,
     0,   477,     0,   484,     0,   492,   499,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   532,
   536,   635,     0,     0,     0,     0,     0,     0,     0,   147,
     0,   148,     0,   144,     0,     0,     0,   108,   377,     0,
   159,   161,     0,     0,     0,   574,    88,    68,     0,   107,
     0,     0,     0,    84,     0,     0,     0,     0,     0,   102,
     0,   102,     0,     0,     0,     0,     0,     0,   102,     0,
     0,     0,   164,   194,     0,     0,     0,     0,     0,    88,
     0,     0,   263,     0,     0,     0,     0,     0,     0,   278,
   280,     0,   274,   276,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   740,   319,     0,     0,     0,
     0,   108,     0,     0,     0,     0,   370,   371,   372,   373,
   374,   375,   376,     0,     0,   337,   353,     0,   338,     0,
   339,   364,     0,     0,     0,   346,   340,   342,     0,     0,
   408,     0,    88,     0,     0,     0,   412,     0,   410,     0,
     0,   416,     0,     0,   417,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   104,   104,   539,     0,     0,     0,     0,     0,     0,     0,
   571,     0,     0,   108,     0,   141,     0,     0,   112,   163,
     0,   165,    69,   102,     0,     0,     0,     0,   222,   223,
   228,   229,     0,   232,     0,   231,   225,   224,    85,   226,
   221,     0,   230,   178,   177,     0,     0,   191,   192,   293,
   294,   295,     0,   254,   255,     0,     0,     0,    85,   259,
   260,   261,   262,   271,    85,   273,    85,   272,   287,   286,
   288,   329,   327,   328,   317,   315,   316,   314,     0,   331,
   323,   330,   326,   318,     0,     0,     0,     0,     0,     0,
   360,   354,     0,   366,     0,     0,     0,   398,   397,    85,
   399,   406,   400,   403,   404,    85,   401,   402,     0,     0,
     0,   102,     0,     0,     0,     0,     0,     0,   102,     0,
     0,     0,     0,   102,     0,     0,   102,   418,   478,     0,
     0,   102,     0,     0,     0,     0,   419,   485,     0,     0,
     0,     0,     0,   102,   420,   493,     0,     0,     0,     0,
     0,     0,     0,     0,   421,   500,   102,     0,   102,   722,
   722,   722,     0,   722,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   470,   472,   471,   472,     0,   537,
     0,   722,     0,     0,     0,     0,     0,   116,     0,     0,
     0,   151,     0,     0,     0,     0,     0,     0,    55,   102,
   102,     0,   102,   179,   196,   193,   296,   256,     0,   257,
     0,   279,     0,   275,     0,   321,     0,     0,     0,   358,
   359,   361,     0,   357,   108,   365,   108,   343,   344,     0,
     0,     0,     0,   345,   347,   407,     0,   411,     0,   422,
   414,   423,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   440,     0,   414,     0,     0,     0,     0,     0,   414,
     0,     0,     0,     0,     0,     0,     0,     0,   414,     0,
     0,     0,     0,     0,   414,   414,     0,     0,   509,     0,
   453,     0,     0,     0,     0,     0,     0,   457,   458,     0,
     0,     0,     0,     0,     0,     0,   452,     0,     0,     0,
     0,   538,     0,     0,     0,     0,     0,     0,   150,     0,
     0,   143,   113,     0,   619,   622,   624,   626,     0,     0,
     0,     0,     0,     0,     0,     0,   281,   277,   331,     0,
   320,   325,     0,   355,   367,     0,     0,     0,     0,   409,
   413,     0,     0,   722,     0,   722,     0,     0,     0,     0,
     0,   102,     0,   481,   479,   480,   482,   102,     0,   488,
   486,   487,   489,   490,   102,   497,   495,     0,   494,   496,
   504,   503,   505,     0,     0,   501,   502,     0,     0,     0,
   102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   722,   473,     0,   542,   542,
     0,   722,     0,     0,     0,     0,     0,     0,   166,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   195,   197,     0,     0,     0,   332,   362,     0,     0,   348,
   349,   350,   351,   425,   427,     0,     0,     0,     0,     0,
     0,   433,     0,     0,   483,     0,   491,     0,   498,   507,
   508,   511,   506,   450,     0,     0,   431,   432,     0,     0,
     0,     0,     0,   463,   467,   468,     0,   466,     0,   447,
     0,   722,   476,   449,   369,   369,   594,     0,   587,   591,
     0,     0,     0,   146,     0,   235,   234,   227,   233,     0,
     0,     0,     0,     0,     0,     0,   258,   322,   108,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     0,     0,     0,   102,     0,   102,     0,     0,     0,     0,
     0,     0,   102,     0,   474,   475,     0,     0,     0,   547,
   541,     0,   543,   540,   722,     0,     0,     0,     0,   198,
   199,   200,   201,   202,   203,     0,     0,     0,   414,   435,
   436,     0,     0,     0,     0,   434,     0,     0,   414,     0,
     0,     0,     0,   102,     0,     0,   510,   512,     0,   430,
     0,   454,   455,   456,     0,     0,   460,     0,     0,     0,
     0,     0,     0,     0,   544,     0,     0,     0,   145,     0,
     0,     0,     0,     0,     0,     0,     0,   722,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   102,     0,     0,     0,   465,     0,   549,   550,   546,     0,
   108,   589,     0,     0,     0,   264,   356,   368,   426,   437,
   438,   439,     0,   414,     0,   444,   414,   518,   513,   516,
   517,   514,   515,   451,   429,     0,   414,   414,   459,     0,
   548,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   464,     0,   592,     0,    56,     0,     0,
   442,   414,   445,   428,     0,     0,   545,     0,     0,     0,
     0,   461,   462,     0,   265,     0,   443,     0,     0,     0,
     0,     0,   441,   593,    88,     0,     0,   266,     0,     0,
     0
};

static const short yydefgoto[] = {  2039,
     1,     2,     3,    22,    23,    24,   106,   180,   303,   651,
   304,  1047,  1659,   232,   489,   765,   233,   234,   608,   911,
  1035,   340,   486,   341,   535,   178,   402,   346,   403,   111,
   198,   432,   481,   482,  1515,   919,   597,   598,   754,  1006,
  1533,   755,   872,   873,  1354,   867,   906,  1028,  1030,   108,
   309,   416,   665,   931,  1065,   109,   310,   421,   667,   932,
  1070,  1387,  1664,  1762,   107,   183,   308,   412,   660,   930,
  1061,   110,   192,   311,   429,   674,   934,  1086,  1398,  1996,
  2029,   675,   935,  1091,  1245,  1407,  1242,  1405,   676,   936,
  1096,   670,   933,  1076,   112,   203,   314,   438,   684,   938,
  1109,  1420,  1669,  1262,  1558,   685,   835,  1113,  1288,  1437,
  1575,  1110,  1277,  1565,  1768,  1112,  1282,  1567,  1769,  1278,
   756,   113,   208,   315,   443,   568,   688,   943,  1123,  1292,
  1440,  1298,  1446,   842,   983,  1166,  1167,  1516,  1638,  1737,
  1317,  1469,  1319,  1478,  1321,  1486,  1322,  1496,  1718,  1853,
  1908,   114,   213,   316,   450,   692,   985,  1171,  1519,  1815,
  1873,  1961,  1924,   115,   218,   317,   457,    25,   318,   579,
   701,    79,   343,   225,   477,   333,   331,   347,   493,   778,
   984,    26,   105,   757,   269,   165,   166,   270,   271,    27,
   168,    57,    58
};

static const short yypact[] = {-32768,
-32768,    64,  4486,  -191,  -176,  -157,   569,   127,  2668,   131,
  -111,  -114,   -25,   -13,    62,    80,   101,   123,   159,   177,
    15,-32768,-32768,   632,-32768,-32768,    27,   115,   190,   394,
   450,   472,-32768,   492,   518,   529,   532,   542,-32768,   545,
-32768,   548,   554,   556,   562,   564,   572,   575,   590,   601,
   603,-32768,   385,   364,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   446,
    35,-32768,   401,-32768,   407,   430,   433,   436,-32768,-32768,
   395,  2332,  4297,  -108,   429,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   131,   131,   -59,   435,   234,   -60,   246,   301,
   323,   380,   391,   447,   458,   450,   567,  4297,  4297,   450,
   275,    90,   713,  4297,-32768,-32768,  -173,   718,   495,   540,
   546,   552,   560,-32768,-32768,-32768,-32768,-32768,   585,   615,
   623,   644,   651,   677,   681,   689,   697,   704,   716,   723,
   727,   747,   756,   757,   759,   761,   765,   766,   770,  4297,
  4297,  4297,  4057,  1155,-32768,   750,-32768,-32768,   755,  5190,
   814,  4057,    70,   469,    31,   817,-32768,   824,-32768,  1420,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   -14,   773,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   503,  2931,  5655,  1345,   776,   568,  1345,   132,-32768,
    19,-32768,-32768,   777,   598,-32768,  5221,  1892,-32768,   826,
   935,  4297,  4297,   131,  4297,  4297,  4297,  4297,  4297,  4297,
  4297,  4297,  4297,  4297,  4297,  4297,  4297,  4297,  4297,  4297,
  4297,  4297,  4297,  4297,   131,    50,    50,  5682,  1155,   409,
-32768,  4297,  4297,  4297,  4297,  4297,  4297,  4297,  4297,  4297,
  4297,  4297,  4297,  4297,  4297,  4297,  4297,-32768,-32768,-32768,
-32768,-32768,   170,-32768,  4297,   131,-32768,  4057,-32768,   737,
    98,   778,-32768,-32768,-32768,-32768,   192,    89,   104,   259,
   489,    86,-32768,   148,   345,   416,   566,   779,  4297,  4297,
-32768,-32768,    90,    90,    37,   780,   787,   788,   790,   792,
-32768,    90,   404,    48,-32768,  1028,   244,-32768,  4057,-32768,
-32768,-32768,   775,-32768,   793,-32768,    -4,-32768,-32768,   419,
   781,   791,  4276,  4412,   783,  1834,  5709,  5736,  5763,  5790,
  5817,  5844,  5871,  5898,  5925,  4444,  5952,  5979,  6006,  6033,
  6060,  6087,  4465,  4497,  4518,   800,-32768,-32768,  4057,  4184,
  4212,  2363,  1911,   702,   702,  1212,  1212,  1212,  1212,   294,
   294,    50,    50,    50,    50,  1053,  6114,   803,   200,  3184,
    24,   829,   830,-32768,  2501,   833,  4297,    38,  1062,   450,
-32768,-32768,   805,  1064,-32768,-32768,   809,    82,  1068,-32768,
-32768,   811,  1070,  1071,   815,   819,   820,-32768,-32768,   844,
   827,   224,  1079,  1081,   828,   838,-32768,-32768,  1098,   847,
-32768,-32768,-32768,-32768,  1099,   848,   450,   450,-32768,-32768,
   450,   852,   450,   131,  1104,-32768,-32768,-32768,  4239,  3505,
   912,-32768,    82,-32768,   860,  4057,   861,   863,   874,   264,
   880,-32768,-32768,-32768,-32768,-32768,  1134,   883,   884,   885,
-32768,-32768,   319,  4349,   879,   439,   442,  1031,    29,-32768,
  1137,  4415,-32768,-32768,-32768,  1159,  4297,  4297,  1158,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4297,
-32768,-32768,-32768,-32768,-32768,-32768,  4297,  4297,  4297,  1160,
  1155,-32768,  4297,  4297,-32768,  1161,-32768,-32768,-32768,  6708,
   905,  4297,-32768,    97,   333,   305,  1163,    97,  6141,   909,
-32768,  1166,    28,-32768,  1167,-32768,  1168,  1169,-32768,  1171,
   257,  1172,-32768,-32768,-32768,    82,   948,  1176,  1179,  1178,
   257,  1204,-32768,-32768,   257,  1205,-32768,   923,   257,  1206,
-32768,   598,  1207,  1208,-32768,  1209,  1210,  1227,   971,  4297,
  4297,-32768,  1231,   972,  4057,   459,  4057,  4057,  4057,  1233,
-32768,   776,  4297,  1237,   131,   335,-32768,  2211,  1236,  1230,
  6708,-32768,-32768,    20,-32768,    90,-32768,-32768,-32768,-32768,
  2945,  2945,   981,  1240,   182,  4297,  4297,  2945,  4297,  1241,
-32768,-32768,-32768,-32768,  4297,  1248,  2884,-32768,-32768,   995,
   996,  1004,  1006,  1007,  1269,-32768,  1015,  4539,  4560,-32768,
  6168,  6195,  6222,  6249,-32768,  6708,  6708,-32768,-32768,  5252,
    97,-32768,  1268,  1271,  1279,-32768,  1282,  1043,-32768,   155,
-32768,-32768,  1030,  1289,   473,-32768,   475,-32768,-32768,   477,
-32768,  1290,-32768,   485,   491,   497,  1291,    82,-32768,-32768,
-32768,  1294,-32768,   165,    43,  1295,-32768,   242,-32768,  1296,
-32768,   479,  1299,-32768,-32768,  1044,-32768,-32768,-32768,-32768,
   632,   558,  6276,  1046,    82,   500,-32768,   505,   507,   509,
-32768,  1042,  6303,  1054,  1055,  1304,   284,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1067,-32768,  1075,
  1076,  1078,  1084,-32768,-32768,  1314,  2211,  2211,  2211,  2211,
  1333,   130,  1332,  2829,  -146,  1085,  1085,-32768,  1086,-32768,
  4297,    33,-32768,-32768,   341,-32768,-32768,    82,-32768,   131,
   131,-32768,  6708,  6708,-32768,  6708,-32768,  1338,  1338,  1338,
  6708,-32768,  4057,  6708,    82,-32768,  4297,  4297,  4297,  4057,
-32768,-32768,  4297,  4297,-32768,-32768,-32768,-32768,-32768,  1340,
-32768,-32768,  1082,-32768,  1284,   255,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1341,-32768,-32768,-32768,-32768,  1089,
  1093,  1096,  1097,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2864,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  4297,-32768,-32768,  4297,  1101,  1100,  1106,  1109,  1111,-32768,
-32768,-32768,-32768,-32768,-32768,  1119,  1105,  1119,  2211,  1356,
  1359,  1110,  1127,  1143,  1132,  1132,  1132,  2656,-32768,-32768,
-32768,-32768,-32768,    21,  1123,-32768,  2211,  2211,  2211,  2211,
  2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,  2211,
  2211,  2211,  1396,  4297,  1977,-32768,  1144,  6708,-32768,   362,
  1142,   140,  1141,-32768,-32768,-32768,   526,-32768,   549,  4581,
  4602,  4623,   551,  6330,  6357,-32768,  4297,-32768,-32768,   774,
    -6,    10,    85,   683,   317,   137,-32768,  1562,-32768,-32768,
-32768,-32768,   487,    26,   -31,    51,  1151,  1153,  1156,  1157,
  1165,  1170,  1181,  1182,  1183,  1405,  1185,   180,   217,   220,
  1154,  1188,  1189,  1190,  1191,  1195,  1196,  1197,  1214,  1173,
  1211,  1216,  1218,  1219,  1220,  1222,  1217,  1221,  1224,-32768,
-32768,-32768,-32768,-32768,     7,  5283,  4644,    82,  4057,  4057,
  4057,  4057,   371,  1229,-32768,  1232,  3798,  1225,  1234,-32768,
-32768,  1239,-32768,  1152,-32768,  2211,  2534,  3309,  1454,  1454,
  1454,   846,   846,   846,   846,   466,   466,  1132,  1132,  1132,
  1132,  1132,-32768,-32768,-32768,  1242,  2829,   373,  3770,-32768,
  1411,-32768,-32768,   450,    19,    82,-32768,-32768,    82,  4297,
  4297,  4297,-32768,-32768,-32768,  5314,  1244,    90,    90,    90,
    90,    99,   141,    82,    82,  1226,   450,  1419,   153,-32768,
-32768,    57,  1421,-32768,-32768,  1235,  1423,  1424,-32768,-32768,
  1462,   133,  1483,   450,-32768,-32768,  1492,  1494,  1497,  1243,
   995,   995,    90,    90,-32768,-32768,  1498,    39,    40,-32768,
-32768,  1505,   450,  1506,-32768,-32768,  1507,  1508,  1510,   120,
   450,  1513,  1511,  1516,    90,  2945,-32768,-32768,-32768,   841,
  1410,  1253,    13,  1515,   450,    56,   131,  2945,   131,    60,
   450,-32768,-32768,-32768,   450,  1514,    82,    82,  1517,   450,
   450,   450,   450,   450,   450,   450,   450,   450,-32768,    82,
  4297,-32768,  4297,-32768,  4297,-32768,-32768,    90,   131,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,  1518,   450,  1265,  1272,  1262,   450,-32768,
-32768,-32768,  4297,  1264,   555,   574,   576,   594,  1524,-32768,
  1277,-32768,  2211,-32768,  1292,  1298,  1288,-32768,-32768,  4122,
-32768,-32768,  2211,  1302,   599,-32768,   598,-32768,  1301,-32768,
  4665,  4686,  4707,-32768,  1300,  1554,  1560,  1561,  1568,    82,
  1570,    82,  1571,  1572,  1573,   978,  1574,  1580,    82,  1585,
  1586,  1592,  1144,-32768,  1593,  1594,  1597,  1599,  1600,   598,
  1602,    42,  1306,  1605,  1604,  1613,  1627,  1629,  1630,-32768,
-32768,  1631,-32768,-32768,  1632,  1633,  1635,  1637,  1642,  1643,
  1645,  1646,  1647,  1649,  1650,   344,-32768,  1652,  1653,  1656,
  1657,-32768,  1607,  1661,  1663,  1412,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    90,  1664,-32768,-32768,  1413,-32768,    90,
-32768,-32768,  1415,  1668,  1677,-32768,-32768,-32768,  1676,  1680,
-32768,  1682,   598,  1683,  1684,  1686,-32768,  1691,-32768,  1692,
  1426,-32768,  1448,  1452,-32768,  1472,  1476,  1477,  1495,  1496,
  1499,  1500,  1502,  1503,  1459,  4728,   538,  4749,   722,  4770,
   102,   393,  1522,  1504,  1523,  1526,  1527,  1528,  1530,  1533,
  1525,  1535,  1537,  1538,  1539,  1540,  1542,  1544,  1545,  1543,
    68,    68,-32768,  1768,  5345,  1548,  1549,  1551,  1550,  1553,
-32768,    90,  6735,-32768,  4297,-32768,  1777,  1559,-32768,  2829,
    90,-32768,-32768,    82,  4297,  4297,  4297,    19,-32768,-32768,
-32768,-32768,  1555,-32768,  1556,-32768,-32768,-32768,  1558,-32768,
-32768,  1563,-32768,-32768,-32768,  1774,   604,-32768,-32768,-32768,
-32768,-32768,  1811,-32768,-32768,  1817,  1713,  1820,  1558,-32768,
-32768,-32768,-32768,-32768,   606,-32768,   612,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1565,  1575,
-32768,-32768,-32768,-32768,  1576,  1823,  1824,  1826,  1832,  1830,
-32768,-32768,  1844,-32768,  1851,  1852,   338,-32768,-32768,   649,
-32768,-32768,-32768,-32768,-32768,   656,-32768,-32768,  1854,  1601,
  1855,    82,   450,   450,  4297,  4297,  4297,   450,    82,    90,
  1856,  4297,  1608,    82,  4297,  4297,    82,-32768,-32768,  4297,
  1609,    82,  4297,  4297,  4297,  4297,-32768,-32768,  4297,  4297,
  4297,  1616,  4297,    82,-32768,-32768,  4297,  4297,   450,  1621,
  1622,  4297,  4297,  1628,-32768,-32768,    82,  1858,    82,  2945,
  2945,  2945,  4297,  2945,  1860,  1861,   450,   450,  4297,   450,
   450,    90,  1864,  1863,-32768,-32768,-32768,-32768,    25,-32768,
  1636,  2945,  4057,  1638,  4057,  4057,  1581,-32768,  1634,  4791,
  1644,-32768,  2211,  1648,  1641,  5376,  5407,  5438,-32768,    82,
    82,   978,    82,-32768,-32768,-32768,-32768,-32768,  1888,-32768,
  1893,-32768,  1899,-32768,  1902,-32768,   450,  1901,  1903,-32768,
-32768,-32768,  1651,-32768,-32768,-32768,-32768,-32768,-32768,  1119,
  1119,  1119,    90,-32768,-32768,-32768,   450,-32768,   450,-32768,
-32768,-32768,  1654,  1655,  1685,  4812,  4833,  4854,  1687,  1690,
  1688,-32768,  4875,-32768,  1904,   669,  1014,  1906,  4896,-32768,
  1907,  1045,  1080,  1348,  1381,  4917,  1478,  1509,-32768,  1536,
  1908,  1606,  1640,  1942,-32768,-32768,  1723,  1807,-32768,   374,
-32768,  1689,  1693,  1697,  1702,  4938,  1703,-32768,-32768,  1709,
  1710,  6384,  1698,  1704,  1711,   663,-32768,   375,   383,  1715,
  1716,-32768,  4297,  1719,   666,  4297,   668,   711,-32768,  1727,
  4297,-32768,  2829,  1725,-32768,-32768,-32768,-32768,  1726,  1734,
  1735,  1730,  1737,   524,  1989,  1733,-32768,-32768,  1575,  1740,
-32768,-32768,  1992,-32768,-32768,  1993,  1994,  1995,  1996,-32768,
-32768,  2940,  1997,  2945,  4297,  2945,  4297,  4297,   450,  1998,
   450,    82,  3127,-32768,-32768,-32768,-32768,    82,  3181,-32768,
-32768,-32768,-32768,-32768,    82,-32768,-32768,  3235,-32768,-32768,
-32768,-32768,-32768,  3420,  3474,-32768,-32768,   714,  2029,  4297,
    82,  2032,  2033,  4297,   131,   131,  4297,  4297,  2044,  2051,
  2052,   131,  2053,  1927,  2056,  2611,-32768,  2058,-32768,-32768,
  5469,  2945,  1802,  5500,  1809,  1816,  1833,  5531,-32768,  1835,
  2079,  2090,  2093,  2094,  2097,  4297,  4297,  4297,  4297,  4297,
-32768,-32768,  2000,  2096,  2098,-32768,-32768,  1839,  1842,-32768,
-32768,-32768,-32768,  2092,-32768,  1857,  6411,  1847,  4959,  4980,
  1848,-32768,  1859,  1849,-32768,  1853,-32768,   402,-32768,-32768,
-32768,-32768,-32768,-32768,  5001,   403,-32768,-32768,  6438,  1862,
  1866,  5022,  5043,-32768,-32768,-32768,   724,-32768,   131,-32768,
   131,  2945,-32768,-32768,   605,   872,-32768,  1865,-32768,-32768,
  1846,  4057,  4297,-32768,    19,-32768,-32768,-32768,-32768,  2109,
  1940,  2039,  2474,  2591,  3206,  2116,-32768,-32768,-32768,  1119,
  1868,  2115,  2119,  4297,  4297,  4297,  4297,  2120,    82,  4297,
  1869,  4297,   428,    82,  2121,    82,  2122,  2126,  2127,  4297,
  4297,  2128,    82,   726,-32768,-32768,  2131,  2132,  2133,-32768,
-32768,  1883,-32768,-32768,  2945,  4297,   728,  5562,  1876,-32768,
-32768,-32768,-32768,-32768,-32768,  1879,  1885,  1887,-32768,-32768,
-32768,  6465,  6492,  6519,  5064,-32768,  1897,  5085,-32768,  6546,
  2141,  2145,  4297,    82,  2157,    90,-32768,-32768,  1905,-32768,
   414,-32768,-32768,-32768,  6573,  6600,-32768,  1900,  2161,  2166,
  2165,  2172,  2177,    90,-32768,  1909,  5106,  1921,-32768,  4297,
  2184,  2185,  2186,  3528,  2188,  2189,  2190,  2945,  1935,  4297,
  3713,  1936,  2194,  2195,  3260,  2196,  2197,  2198,  2199,  2200,
    82,  1945,  1946,  2203,-32768,  1947,-32768,-32768,-32768,  2205,
-32768,-32768,  4297,  1950,  6627,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1953,-32768,  6654,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1961,-32768,-32768,-32768,  2213,
-32768,  1963,  5593,  4297,  2215,  2163,  4297,  3767,  1964,  3821,
  2219,  4006,  4060,-32768,  2221,-32768,  5127,-32768,    90,  5148,
-32768,-32768,-32768,-32768,  2223,  2224,-32768,  4297,  2226,  4297,
  4114,-32768,-32768,  5169,-32768,  6681,-32768,  4297,  2102,  2232,
  5624,  2265,-32768,-32768,   598,  2271,  2019,-32768,  2284,  2290,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   -17,-32768,-32768,  -273,  1223,-32768,-32768,
  1246,  -468,-32768,  -526,-32768,  -420,  -532,  -567,-32768,-32768,
-32768,-32768,   626,-32768,  -615,-32768,  -987,-32768,  -680,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1534,-32768,  1069,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1639,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   625,-32768,-32768,-32768,-32768,-32768,
-32768,  1357,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1103,
  -715,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1442,-32768,-32768,-32768,   954,   782,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   563,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1729,
-32768,  1614,-32768,  2181,-32768,  1714,  2077,  -325,-32768,   384,
    17,   -26,-32768,-32768,   946,  -518,  -565,  -155,   -81,-32768,
    -3,  -100,   -66
};


#define	YYLAST		6993


static const short yytable[] = {    28,
   167,   865,   174,   175,   693,   470,    56,  1181,  1283,   483,
   664,   559,  1186,  1187,   786,   169,   293,    70,   672,     4,
   609,   336,   336,   337,   337,     4,   531,    85,   682,  1640,
     4,   336,   686,   337,   662,   336,   690,   337,   431,   117,
    80,   229,   540,  1240,  1243,   766,   767,     4,  1395,   461,
   462,   464,   775,     5,     6,    71,    72,    73,   471,    74,
     4,   229,  1062,    -2,     4,   604,   875,   876,   877,   878,
   478,    11,     4,   478,  1063,    29,   294,   763,    30,   758,
   185,  1168,   350,   194,   200,   205,   210,   215,   220,   238,
   229,  1066,   607,    29,   229,  1067,  1068,    31,  1284,    56,
    56,   652,  1169,    28,   478,   230,    28,    28,    28,    28,
    28,    28,   221,   903,   655,   904,   226,   226,   235,  1480,
  1221,   478,  1285,   184,  1252,   230,   193,   199,   204,   209,
   214,   219,   880,    39,   881,     4,    52,   652,  1682,    53,
    54,  1641,   399,   355,  1033,    59,   479,   171,    60,   479,
   994,  1693,   996,   306,   230,   596,   172,  1699,   230,   830,
   831,   832,   833,   478,   376,   230,  1708,    71,    72,    73,
   408,    74,  1714,  1715,   409,   478,   307,    71,    72,    73,
   479,    74,  1071,   487,   410,   413,     4,    52,   997,  1481,
    53,    54,  1072,  1073,  1074,   398,   305,   479,   176,   414,
  1358,   230,   186,   187,  1034,   177,  1007,  1008,  1009,  1010,
  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,
  1021,  1022,  1092,   119,  1027,  1127,  1253,   342,   758,   758,
   758,   758,  1093,   433,  1094,   909,  1254,    61,     4,   479,
    56,  1482,   312,   434,     5,     6,    71,    72,    73,    62,
    74,   479,    29,   491,    71,    72,    73,  1064,    74,   435,
   492,    56,    11,   436,  1483,  1484,   762,    71,    72,    73,
  1170,    74,   882,  1069,  1425,  1286,  1287,    69,   480,     4,
   227,   338,  1125,   532,   339,   339,   297,    29,  1642,   118,
   663,   338,    56,    81,   339,   298,   231,   522,   339,   463,
   541,  1241,  1244,   287,   663,     4,   834,  1128,   235,   288,
   586,     5,     6,    71,    72,    73,   231,    74,  1291,   235,
   235,   235,  1297,   167,    63,  1190,   295,   195,   235,    11,
   785,   444,   764,     5,     6,    71,    72,    73,   169,    74,
   417,   883,    64,   430,   912,   231,   418,    82,  1075,   231,
   758,    11,   411,   577,   419,  1210,   231,    71,    72,    73,
   401,    74,    55,    65,    29,  1485,  1529,   415,   758,   758,
   758,   758,   758,   758,   758,   758,   758,   758,   758,   758,
   758,   758,   758,   758,     4,    66,   758,   537,   -64,   196,
     5,     6,    71,    72,    73,     4,    74,  1212,    29,    84,
  1095,     5,     6,    71,    72,    73,   543,    74,    11,  1219,
  1487,   437,  1087,    55,  1088,  1570,  1571,   807,   808,    11,
   552,    67,  1089,   770,   405,   396,   771,   827,   828,   706,
   562,   708,   709,   710,   379,   566,  1141,   406,   910,    68,
   439,   570,  1142,   572,   573,  1901,  1934,   574,   407,   576,
    56,     4,    83,  1572,     4,   528,  1941,     5,     6,    71,
    72,    73,     4,    74,   379,  1235,  1236,  1573,     5,     6,
    71,    72,    73,  1143,    74,    11,  1145,   440,    86,  1144,
  1488,   558,  1146,     4,   441,   342,    11,   758,   177,     5,
     6,    71,    72,    73,   715,    74,   181,   182,    87,    71,
    72,    73,  1353,    74,   839,   840,   485,    11,   188,   189,
    29,   445,  1360,  1902,   772,  1903,   653,   807,   929,   663,
   657,   590,   420,    29,    88,  1489,  1904,   446,   492,   167,
   167,  1998,  1490,  1491,  2000,    89,   167,   993,    90,  1905,
  1261,   284,   285,   286,  2002,  2003,   753,   287,    91,   447,
    29,    92,  1295,   288,    93,  1492,   422,  1906,  1493,  1494,
    94,   -64,    95,   190,   191,   851,  1198,   238,    96,  2021,
    97,    29,  1114,    32,   423,    33,   599,  1674,    98,  1675,
  1090,    99,  1115,   492,   424,   425,   197,    34,    35,    36,
   654,    56,   716,   426,   759,   427,   100,   177,   -67,   492,
   342,  1574,   235,   448,    37,   177,  1419,   101,   442,   102,
    29,    56,  1755,  1756,  1757,  1758,  1759,  1760,   104,  1031,
  1116,  1117,  1118,  1119,  1120,  1121,   492,   917,  1179,  1363,
  1192,  1719,  1735,   800,   923,   492,   116,  1193,  1720,  1736,
  1738,   103,   201,   202,    71,    72,    73,  1736,    74,   472,
   473,   474,   475,   206,   207,   119,  1495,   124,   837,  1851,
  1855,   451,  1393,   120,   758,   847,  1852,  1856,   476,   914,
   915,  1950,   378,   379,   758,  1695,   809,  1463,  1951,   449,
  1464,    28,   494,   379,   173,  1867,   121,  1868,    28,   122,
  1869,  1907,   123,  1465,  1466,  1467,   222,  1379,   179,  1396,
   829,   836,   603,   177,   841,   452,   379,   605,   846,   211,
   212,  1872,  1872,   898,   899,   900,   901,    80,   236,   902,
   216,   217,   707,   379,   239,  1442,  1267,  1268,  1269,  1270,
  1271,  1272,  1273,   296,  1870,   811,   812,   813,   814,   815,
   816,   844,   845,   759,   759,   759,   759,   818,   819,   885,
  1122,   240,   428,   820,   821,   453,   289,   454,   342,   822,
   823,   290,    38,   856,   379,   319,    56,    56,   857,   379,
   858,   379,   859,   379,  1206,  1207,  1208,  1209,  1077,   455,
  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1761,  1222,  1037,
   379,   273,   274,   275,   276,   277,   241,   278,   279,   280,
   281,  1468,   242,   282,   283,   284,   285,   286,   243,  1237,
  1238,   287,  1038,  1039,  1043,   379,   244,   288,  1347,   379,
   292,   852,   809,   299,    75,    76,    77,    78,   300,   456,
   351,  1260,   334,  1175,  1176,  1177,  1178,  1348,   379,  1349,
   379,   245,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
  1056,  1887,  1653,  1057,  1676,  1677,  1678,  1350,   379,  1058,
   345,  1471,  1362,   379,  1472,   759,  1545,  1546,  1871,  1552,
   177,   246,  1059,  1195,  1323,  1554,   177,  1473,  1474,   247,
  1004,  1475,  1476,   759,   759,   759,   759,   759,   759,   759,
   759,   759,   759,   759,   759,   759,   759,   759,   759,  1539,
   248,   759,   273,   274,   275,   276,   277,   249,   278,   279,
   280,   281,  1576,   177,   282,   283,   284,   285,   286,  1578,
   177,  1263,   287,  1264,  1265,  1266,  1733,  1734,   288,  1743,
   379,  1745,   379,   250,  1623,  1624,  1625,   251,  1627,   352,
  1126,   278,   279,   280,   281,   252,  1085,   282,   283,   284,
   285,   286,  1867,   253,  1868,   287,  1644,  1869,  1542,  1124,
   254,   288,  1267,  1268,  1269,  1270,  1271,  1272,  1273,   400,
  1274,  1275,   255,  1992,  1746,   379,  1792,  1793,  1551,   256,
   125,   126,     4,   257,  1553,  1477,  1555,  1862,  1863,  1919,
  1920,  1928,   379,  1267,  1268,  1269,  1270,  1271,  1272,  1273,
  1430,  1870,   759,   258,   779,   780,  1433,   134,   135,   136,
   137,   138,   259,   260,   758,   261,  1294,   262,  1296,  1577,
  1696,   263,   264,  1662,   167,  1579,   265,   164,   170,   313,
  1197,   342,   332,   344,   404,   484,   167,  1060,   495,   488,
   499,   458,   465,   547,   235,   235,   235,   235,  1324,   466,
   467,  1701,   468,  1217,   469,   496,   490,   520,   235,   525,
   527,   533,   534,   223,   224,   538,   542,   544,   545,   237,
  1230,   546,   548,   549,   550,   551,   556,   553,  1527,   235,
   235,   554,   555,   560,   557,   561,  1702,  1534,   584,  1247,
   563,   896,   897,   898,   899,   900,   901,  1255,  1257,   902,
   564,   235,   565,   569,  1276,   266,   267,   268,   578,   567,
   571,  1290,  1293,    56,   575,    56,  1299,  1300,  1776,   583,
  1778,  1301,   585,   587,  1888,   588,  1306,  1307,  1308,  1309,
  1310,  1311,  1312,  1313,  1314,  1874,   589,   591,   592,   593,
   594,   595,   602,   610,   235,    56,  1325,  1326,  1327,  1328,
  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,
   606,  1340,   272,   637,   640,  1344,   645,   648,   649,   656,
  1813,   659,   661,   666,   668,   669,  1818,   671,   673,   759,
   678,   677,   679,   680,   681,   689,  1591,   353,   354,   759,
   356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
   366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
   683,   687,   691,   694,   695,   697,   698,   380,   381,   382,
   383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
   393,   394,   395,   699,   700,   704,   705,   761,  1635,   711,
   397,   714,   760,   768,   769,   777,  1866,   273,   274,   275,
   276,   277,   782,   278,   279,   280,   281,   785,   787,   282,
   283,   284,   285,   286,   459,   460,   788,   287,   789,   790,
   235,   791,   792,   288,   801,   805,   235,   802,   273,   274,
   275,   276,   277,   803,   278,   279,   280,   281,   804,   532,
   282,   283,   284,   285,   286,   810,   817,   824,   287,  1679,
   826,   838,   843,   825,   288,   848,   860,   849,   854,  1926,
   864,   862,   863,   273,   274,   275,   276,   277,   874,   278,
   279,   280,   281,   866,   521,   282,   283,   284,   285,   286,
   855,   868,   869,   287,   870,   879,   884,  1517,  1517,   288,
   871,   905,  -673,   916,   927,   530,   926,   937,   235,   928,
   164,   939,   539,  1931,  1703,   940,  1879,   235,   941,   942,
   998,   995,   989,   999,   342,   988,  1000,  1645,   990,  1647,
  1648,   991,  1973,   992,  1267,  1268,  1269,  1270,  1271,  1272,
  1273,   753,  1280,  1001,  1002,   902,  1005,  1704,   273,   274,
   275,   276,   277,   913,   278,   279,   280,   281,  1023,  1032,
   282,   283,   284,   285,   286,  1036,  1029,  1130,   287,  1131,
   918,  1139,  1132,  1133,   288,  1189,  1147,  1196,   167,   167,
   167,  1134,   167,  1218,   301,  1223,  1135,  1225,  1226,   601,
     5,     6,    71,    72,    73,  1156,    74,  1136,  1137,  1138,
   167,  1140,   638,   639,  1148,  1149,  1150,  1151,    11,  1584,
  1585,  1152,  1153,  1154,  1589,   641,   235,   282,   283,   284,
   285,   286,   642,   643,   644,   287,  1227,  2036,   646,   647,
  1155,   288,  1158,  1157,  1159,  1160,  1161,   650,  1162,  1163,
  1165,  1184,   302,  1164,  1706,  1614,  1180,  1033,  1216,  1182,
  1263,  1185,  1264,  1265,  1266,  1188,  1231,  1224,  1232,  1191,
  1205,  1233,  1239,  1630,  1631,  1234,  1633,  1634,   235,  1246,
  1248,  1249,  1250,  1258,  1251,  1707,  1281,  1256,  1259,  1289,
  1302,  1341,  1339,  1305,  1343,   702,   703,  1346,  1342,   759,
  1351,  1267,  1268,  1269,  1270,  1271,  1272,  1273,   713,  1274,
  1275,  1352,  1709,   322,   323,   324,   325,   326,   327,   328,
   329,   330,  1357,  1670,  1355,  1356,   164,   164,  1361,  1368,
  1369,   773,   774,   164,   776,  1364,  1370,  1371,  1397,   235,
   781,  1129,   784,  1680,  1372,  1681,  1374,  1376,  1377,  1378,
  1380,   273,   274,   275,   276,   277,  1381,   278,   279,   280,
   281,  1383,  1384,   282,   283,   284,   285,   286,  1385,  1388,
  1389,   287,   167,  1390,   167,  1391,  1392,   288,  1394,  1399,
  1400,  1426,  1711,  1174,   273,   274,   275,   276,   277,  1401,
   278,   279,   280,   281,  1800,  1801,   282,   283,   284,   285,
   286,  1807,  1948,  1402,   287,  1403,  1404,  1406,  1408,  1409,
   288,  1410,  1097,  1411,  1098,  1099,  1712,  1100,  1412,  1413,
  1960,  1414,  1415,  1416,   167,  1417,  1418,  1101,  1421,  1422,
   167,  1199,  1423,  1424,  1200,  1427,  1877,  1428,  1429,  1432,
  1431,  1434,  1435,  1279,  1102,  1103,  1104,  1211,  1213,  1214,
  1215,  1436,  1438,  1449,  1220,  1781,  1439,  1783,  1441,  1443,
  1444,  1105,  1445,   892,   893,   894,   895,  1447,  1448,   896,
   897,   898,   899,   900,   901,  1450,   908,   902,  1864,  1451,
  1865,   273,   274,   275,   276,   277,  1461,   278,   279,   280,
   281,    56,    56,   282,   283,   284,   285,   286,    56,  1716,
   167,   287,   920,   921,   922,  2019,  1452,   288,   924,   925,
  1453,  1454,   273,   274,   275,   276,   277,  1106,   278,   279,
   280,   281,  1303,  1304,   282,   283,   284,   285,   286,  1455,
  1456,  1498,   287,  1457,  1458,  1315,  1459,  1460,   288,   273,
   274,   275,   276,   277,  1520,   278,   279,   280,   281,  1531,
  1544,   282,   283,   284,   285,   286,  1497,  1499,  1505,   287,
  1500,  1501,  1502,   167,  1503,   288,   986,  1504,  1506,   987,
  1514,  1507,  1508,  1509,  1510,    56,  1511,    56,  1512,  1513,
  1522,  1523,  1525,  1717,  1524,  1526,  1532,  1547,  1107,  1540,
  1541,   342,   177,  1548,  1549,  1108,  1550,  1543,  1556,  1560,
  1561,  1557,  1562,  1559,  1563,  1373,  1564,  1375,  1649,   273,
   274,   275,   276,   277,  1382,   278,   279,   280,   281,  1024,
  1566,   282,   283,   284,   285,   286,   167,  1568,  1569,   287,
  1580,  1582,  1592,  1581,  1621,   288,  1628,  1629,  1636,  1637,
  1594,  1600,  1046,   273,   274,   275,   276,   277,  1609,   278,
   279,   280,   281,  1615,  1616,   282,   283,   284,   285,   286,
  1619,  1650,  1665,   287,   125,   126,   127,  1666,  1643,   288,
  1646,  1652,   235,  1667,  1655,  1654,  1668,  1671,  1673,  1672,
  1694,  1683,  1697,  1700,  1710,   129,   130,   131,   132,  1684,
   235,   134,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,  1881,  1690,  1713,  1685,
  1722,  1689,  1691,  1721,  1723,  1730,   273,   274,   275,   276,
   277,  1731,   278,   279,   280,   281,  1724,  1726,   282,   283,
   284,   285,   286,  1727,  1728,  1732,   287,  1739,  1740,   125,
   126,   717,   288,  1742,  1747,  1201,  1202,  1203,  1749,  1535,
  1750,  1751,  1752,  1753,  1754,  1763,  1764,  1766,  1767,  1770,
  1771,  1772,  1773,  1775,  1782,   235,   134,   135,   136,   137,
   138,   718,   719,   720,   721,   722,   723,   724,   725,   726,
   727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
   737,   738,   739,   740,   741,  1794,   742,   743,  1797,  1798,
   273,   274,   275,   276,   277,  1882,   278,   279,   280,   281,
  1804,   164,   282,   283,   284,   285,   286,  1805,  1806,  1808,
   287,  1809,  1810,   164,  1814,  1819,   288,   273,   274,   275,
   276,   277,  1821,   278,   279,   280,   281,  1583,  1822,   282,
   283,   284,   285,   286,  1590,  1826,  1316,   287,  1318,  1595,
  1320,   500,  1598,   288,  1825,  1823,  1827,  1601,   744,  1828,
  1829,  1830,  1837,  1839,  1838,   745,  1840,  1841,  1876,  1611,
  1836,  1844,  1847,  1849,  1842,  1880,  1848,  1850,  1345,  1858,
  1886,  1890,  1620,  1859,  1622,  1891,  1896,  1910,  1912,  1875,
  1889,  1899,  1913,  1914,  1917,  1921,  1922,  1923,   160,  1925,
  1930,   663,  1932,   161,  1933,  1943,   162,   276,   277,  1944,
   278,   279,   280,   281,  1939,   349,   282,   283,   284,   285,
   286,  1947,  1949,  1954,   287,  1660,  1661,  1955,  1663,  1956,
   288,  1957,  1962,   273,   274,   275,   276,   277,  1958,   278,
   279,   280,   281,  1959,  1964,   282,   283,   284,   285,   286,
  1966,  1967,  1968,   287,  1970,  1971,  1972,  1974,  1977,   288,
  1978,  1979,  1981,  1982,  1983,  1984,  1985,  1987,  1988,  1989,
  1990,  1991,  1994,   125,   126,   717,   746,  1997,  2001,  2004,
  2005,  2008,   747,   748,  2009,  2014,  2012,  2017,   749,  2022,
  2023,   750,  2025,  2032,  1025,  1026,   751,   752,  2033,   753,
   134,   135,   136,   137,   138,   718,   719,   720,   721,   722,
   723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
   733,   734,   735,   736,   737,   738,   739,   740,   741,  2035,
   742,   743,   273,   274,   275,   276,   277,  2037,   278,   279,
   280,   281,  2038,  2040,   282,   283,   284,   285,   286,  2041,
   907,  1386,   287,  1765,  1228,  1518,  1111,   806,   288,  1639,
  1530,   228,  1816,   696,   335,   712,     0,     0,     0,     0,
  1536,  1537,  1538,     0,   850,     0,     0,  1784,  1229,     0,
     0,     0,     0,  1786,     0,     0,     0,     0,     0,     0,
  1788,     0,   744,     0,   125,   126,   127,   128,     0,   745,
    53,     0,     0,     0,     0,     0,  1796,     0,     0,     0,
     0,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1586,  1587,  1588,     0,     0,     0,     0,  1593,     0,     0,
  1596,  1597,     0,     0,     0,  1599,     0,     0,  1602,  1603,
  1604,  1605,     0,     0,  1606,  1607,  1608,     0,  1610,     0,
     0,     0,  1612,  1613,     0,     0,     0,  1617,  1618,     0,
     0,     0,     0,     0,     0,   164,   164,   164,  1626,   164,
   746,     0,     0,     0,  1632,     0,   747,   748,     0,     0,
     0,     0,   749,     0,     0,   750,     0,   164,     0,     0,
   751,   752,     0,   753,  1897,     0,     0,     0,     0,  1909,
  1883,  1911,     0,     0,     0,     0,     0,     0,  1918,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   125,   126,   536,   128,     0,     0,    53,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   129,   130,   131,   132,   133,  1946,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,     0,     0,     0,     0,     0,
     0,     0,   159,     0,     0,     0,     0,     0,     0,   230,
     0,     0,     0,     0,     0,     0,  1986,     0,   160,     0,
     0,     0,     0,   161,     0,     0,   162,     0,  1741,     0,
     0,  1744,     0,     0,   163,     0,  1748,  1884,   275,   276,
   277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
   284,   285,   286,   125,   126,   127,   287,     0,     0,     0,
     0,     0,   288,     0,     0,     0,     0,     0,     0,   164,
  1777,   164,  1779,  1780,   129,   130,   131,   132,     0,     0,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,  1795,     0,     0,     0,  1799,
    40,     0,  1802,  1803,    41,     0,     0,     0,     0,     0,
     0,   164,     0,     0,     0,     0,     0,   164,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1831,  1832,  1833,  1834,  1835,     0,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,    42,
     0,   159,     0,   288,     0,    43,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   160,    44,     0,
    45,     0,   161,     0,     0,   162,     0,   164,     0,     0,
   231,     0,    46,   163,     0,     0,    47,     0,  1878,   888,
   889,   890,   891,   892,   893,   894,   895,     0,    48,   896,
   897,   898,   899,   900,   901,     0,     0,   902,     0,  1892,
  1893,  1894,  1895,     0,     0,  1898,     0,  1900,     0,    49,
     0,     0,     0,     0,     0,  1915,  1916,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1811,
   164,  1927,  1812,     0,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,     0,     0,     0,  1945,     0,
   288,     0,     0,     0,    50,     0,    51,   160,     0,     0,
     0,     0,   161,     0,     0,   162,     0,     0,   944,     0,
     0,     0,     0,   163,     0,  1965,    71,    72,   945,     0,
    74,     0,     0,   164,     0,  1975,   125,   126,     4,   886,
   887,   888,   889,   890,   891,   892,   893,   894,   895,     0,
     0,   896,   897,   898,   899,   900,   901,     0,  1993,   902,
     0,  1003,     0,   134,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   320,  2007,
     0,     0,  2010,     0,   944,     0,     0,   125,   126,   127,
     0,     0,    71,    72,   945,     0,    74,     0,     0,     0,
     0,     0,     0,  2024,     0,  2026,     0,     0,   129,   130,
   131,   132,     0,  2031,   134,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,     0,
     0,     0,     0,     0,     0,   946,     0,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,     0,
     0,     0,   959,     0,     0,   960,     0,     0,   961,     0,
     0,   962,     0,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,   978,     0,
     0,     0,   979,     0,     0,     0,     0,   980,     0,     0,
   981,     0,   886,   887,   888,   889,   890,   891,   892,   893,
   894,   895,     0,     0,   896,   897,   898,   899,   900,   901,
     0,   946,   902,   947,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,     0,     0,     0,   959,     0,
     0,   960,     0,     0,   961,     0,     0,   962,     0,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,   978,     0,     0,   982,   979,     0,
   160,   944,     0,   980,     0,   161,   981,     0,   162,    71,
    72,   945,     0,    74,     0,     0,   783,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,   944,   125,   126,     4,   529,
   288,   160,     0,    71,    72,   945,   161,    74,     0,   162,
     0,     0,     0,  1774,     0,     0,     0,   163,     0,     0,
     0,     0,  1885,   134,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,     0,   944,
     0,     0,     0,     0,     0,     0,     0,    71,    72,   945,
     0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  1980,     0,   946,     0,
   947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
   957,   958,     0,     0,     0,   959,     0,     0,   960,     0,
     0,   961,     0,     0,   962,     0,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
   977,   978,     0,     0,     0,   979,     0,     0,     0,     0,
   980,     0,   946,   981,   947,   948,   949,   950,   951,   952,
   953,   954,   955,   956,   957,   958,     0,     0,     0,   959,
     0,     0,   960,     0,     0,   961,     0,     0,   962,     0,
   963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
   973,   974,   975,   976,   977,   978,     0,     0,     0,   979,
     0,     0,     0,     0,   980,     0,   946,   981,   947,   948,
   949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
  1785,     0,     0,   959,     0,     0,   960,     0,     0,   961,
     0,     0,   962,     0,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     0,     0,     0,   979,   944,     0,     0,     0,   980,     0,
   160,   981,    71,    72,   945,   161,    74,     0,   162,   273,
   274,   275,   276,   277,  1787,   278,   279,   280,   281,     0,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
     0,     0,     0,     0,     0,   288,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   944,     0,
     0,     0,     0,     0,     0,     0,    71,    72,   945,     0,
    74,     0,     0,   273,   274,   275,   276,   277,  1789,   278,
   279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     0,     0,   581,   287,     0,     0,     0,     0,     0,   288,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   944,     0,     0,     0,     0,     0,     0,     0,
    71,    72,   945,     0,    74,   889,   890,   891,   892,   893,
   894,   895,     0,     0,   896,   897,   898,   899,   900,   901,
     0,   946,   902,   947,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,     0,     0,     0,   959,     0,
     0,   960,     0,     0,   961,     0,     0,   962,     0,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,   978,     0,     0,     0,   979,     0,
     0,     0,     0,   980,     0,   946,   981,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,     0,
     0,     0,   959,     0,     0,   960,     0,     0,   961,     0,
     0,   962,     0,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,   978,     0,
     0,     0,   979,     0,     0,     0,     0,   980,     0,   946,
   981,   947,   948,   949,   950,   951,   952,   953,   954,   955,
   956,   957,   958,  1790,     0,     0,   959,     0,     0,   960,
     0,     0,   961,     0,     0,   962,     0,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
   976,   977,   978,     0,     0,     0,   979,   944,     0,     0,
     0,   980,     0,     0,   981,    71,    72,   945,     0,    74,
     0,     0,     0,     0,     0,     0,     0,  1791,   273,   274,
   275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,     0,
   582,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     0,   944,   125,   126,   127,     0,     0,     0,     0,    71,
    72,   945,     0,    74,     0,     0,     0,     0,     0,     0,
     0,  1969,     0,   129,   130,   131,   132,     0,     0,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,     0,   944,     0,     0,     0,     0,
     0,     0,     0,    71,    72,   945,     0,    74,  1194,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   946,     0,   947,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,     0,     0,
     0,   959,     0,     0,   960,     0,     0,   961,     0,     0,
   962,     0,   963,   964,   965,   966,   967,   968,   969,   970,
   971,   972,   973,   974,   975,   976,   977,   978,     0,     0,
     0,   979,     0,     0,     0,     0,   980,     0,   946,   981,
   947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
   957,   958,     0,     0,     0,   959,     0,     0,   960,     0,
     0,   961,     0,     0,   962,     0,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
   977,   978,     0,     0,     0,   979,     0,     0,     0,     0,
   980,     0,   946,   981,   947,   948,   949,   950,   951,   952,
   953,   954,   955,   956,   957,   958,  1976,     0,     0,   959,
     0,     0,   960,     0,     0,   961,     0,     0,   962,     0,
   963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
   973,   974,   975,   976,   977,   978,     0,     0,     0,   979,
   944,     0,     0,     0,   980,     0,   160,   981,    71,    72,
   945,   161,    74,     0,   162,     0,     0,     0,     0,     0,
  2011,   886,   887,   888,   889,   890,   891,   892,   893,   894,
   895,     0,     0,   896,   897,   898,   899,   900,   901,     0,
     0,   902,     0,     0,     0,     0,     0,     0,     0,   125,
   126,   127,  1183,     0,   944,     0,     0,     0,     0,     0,
     0,     0,    71,    72,   945,     0,    74,     0,     0,     0,
   129,   130,   131,   132,  2013,     0,   134,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,     0,     0,     0,     0,     0,     0,     0,   944,     0,
     0,     0,     0,     0,     0,     0,    71,    72,   945,  1359,
    74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   946,     0,   947,
   948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
   958,     0,     0,     0,   959,     0,     0,   960,     0,     0,
   961,     0,     0,   962,     0,   963,   964,   965,   966,   967,
   968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
   978,   523,     0,     0,   979,     0,     0,     0,     0,   980,
     0,   946,   981,   947,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,     0,     0,     0,   959,   524,
     0,   960,     0,     0,   961,     0,     0,   962,     0,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,   978,     0,   580,     0,   979,     0,
     0,     0,     0,   980,     0,   946,   981,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,  2015,
     0,     0,   959,     0,     0,   960,     0,     0,   961,     0,
     0,   962,     0,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,   978,   125,
   126,     4,   979,   160,     0,     0,     0,   980,   161,     0,
   981,   162,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  2016,     0,     0,   134,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   600,   126,     4,     0,   886,   887,   888,   889,   890,
   891,   892,   893,   894,   895,     0,     0,   896,   897,   898,
   899,   900,   901,     0,     0,   902,     0,  2027,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,     0,
     0,     0,     0,   288,     0,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,     0,     0,     0,
     0,   288,   273,   274,   275,   276,   277,     0,   278,   279,
   280,   281,     0,     0,   282,   283,   284,   285,   286,   611,
     4,     0,   287,     0,     0,     0,     5,     6,   288,     0,
     0,     0,     0,     0,     7,     8,     9,    10,     0,   273,
   274,   275,   276,   277,    11,   278,   279,   280,   281,     0,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
     0,     0,     0,     0,     0,   288,     0,     0,     0,     0,
   497,     0,     0,   160,     0,     0,     0,    12,   161,     0,
   612,   162,     0,    13,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    14,     0,    15,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    16,     0,   613,     0,    17,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   160,    18,     0,     0,     0,
   161,     0,     0,   162,     0,     0,     0,     0,     0,     0,
     0,     0,   614,     0,     0,     0,     0,    19,     0,     0,
     0,     0,     0,   615,   616,   617,   618,   619,   620,   621,
   622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
   632,   633,   634,   635,   636,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,     0,     0,     0,
     0,   288,    20,     0,    21,     0,   498,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,   273,   274,
   275,   276,   277,   288,   278,   279,   280,   281,   510,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,     0,
     0,     0,     0,     0,   288,     0,     0,     0,     0,   517,
   273,   274,   275,   276,   277,     0,   278,   279,   280,   281,
     0,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,   273,   274,   275,   276,   277,   288,   278,   279,   280,
   281,   518,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,   273,   274,   275,   276,   277,   288,   278,   279,
   280,   281,   519,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,   273,   274,   275,   276,   277,   288,   278,
   279,   280,   281,   793,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,   273,   274,   275,   276,   277,   288,
   278,   279,   280,   281,   794,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,   273,   274,   275,   276,   277,
   288,   278,   279,   280,   281,  1040,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,   273,   274,   275,   276,
   277,   288,   278,   279,   280,   281,  1041,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,   273,   274,   275,
   276,   277,   288,   278,   279,   280,   281,  1042,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,   273,   274,
   275,   276,   277,   288,   278,   279,   280,   281,  1173,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,   273,
   274,   275,   276,   277,   288,   278,   279,   280,   281,  1365,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
   273,   274,   275,   276,   277,   288,   278,   279,   280,   281,
  1366,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,   273,   274,   275,   276,   277,   288,   278,   279,   280,
   281,  1367,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,   273,   274,   275,   276,   277,   288,   278,   279,
   280,   281,  1462,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,   273,   274,   275,   276,   277,   288,   278,
   279,   280,   281,  1470,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,   273,   274,   275,   276,   277,   288,
   278,   279,   280,   281,  1479,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,   273,   274,   275,   276,   277,
   288,   278,   279,   280,   281,  1651,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,   273,   274,   275,   276,
   277,   288,   278,   279,   280,   281,  1686,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,   273,   274,   275,
   276,   277,   288,   278,   279,   280,   281,  1687,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,   273,   274,
   275,   276,   277,   288,   278,   279,   280,   281,  1688,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,   273,
   274,   275,   276,   277,   288,   278,   279,   280,   281,  1692,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
   273,   274,   275,   276,   277,   288,   278,   279,   280,   281,
  1698,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,   273,   274,   275,   276,   277,   288,   278,   279,   280,
   281,  1705,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,   273,   274,   275,   276,   277,   288,   278,   279,
   280,   281,  1725,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,   273,   274,   275,   276,   277,   288,   278,
   279,   280,   281,  1845,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,   273,   274,   275,   276,   277,   288,
   278,   279,   280,   281,  1846,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,   273,   274,   275,   276,   277,
   288,   278,   279,   280,   281,  1854,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,   273,   274,   275,   276,
   277,   288,   278,   279,   280,   281,  1860,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,   273,   274,   275,
   276,   277,   288,   278,   279,   280,   281,  1861,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,   273,   274,
   275,   276,   277,   288,   278,   279,   280,   281,  1938,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,   273,
   274,   275,   276,   277,   288,   278,   279,   280,   281,  1940,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
   273,   274,   275,   276,   277,   288,   278,   279,   280,   281,
  1963,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,   273,   274,   275,   276,   277,   288,   278,   279,   280,
   281,  2018,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,   273,   274,   275,   276,   277,   288,   278,   279,
   280,   281,  2020,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,   273,   274,   275,   276,   277,   288,   278,
   279,   280,   281,  2028,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,     0,     0,     0,     0,     0,   288,
     0,     0,     0,   291,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,     0,     0,     0,     0,     0,
   288,     0,     0,     0,   348,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,     0,     0,     0,
     0,   288,     0,     0,     0,   799,   273,   274,   275,   276,
   277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,     0,     0,     0,
     0,     0,   288,     0,     0,     0,  1172,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,     0,
     0,     0,     0,   288,     0,     0,     0,  1204,   273,   274,
   275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,     0,
     0,     0,     0,     0,   288,     0,     0,     0,  1521,   273,
   274,   275,   276,   277,     0,   278,   279,   280,   281,     0,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
     0,     0,     0,     0,     0,   288,     0,     0,     0,  1656,
   273,   274,   275,   276,   277,     0,   278,   279,   280,   281,
     0,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,     0,     0,     0,     0,     0,   288,     0,     0,     0,
  1657,   273,   274,   275,   276,   277,     0,   278,   279,   280,
   281,     0,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,     0,     0,     0,     0,     0,   288,     0,     0,
     0,  1658,   273,   274,   275,   276,   277,     0,   278,   279,
   280,   281,     0,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,     0,     0,     0,     0,     0,   288,     0,
     0,     0,  1817,   273,   274,   275,   276,   277,     0,   278,
   279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,     0,     0,     0,     0,     0,   288,
     0,     0,     0,  1820,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,     0,     0,     0,     0,     0,
   288,     0,     0,     0,  1824,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,     0,     0,     0,
     0,   288,     0,     0,     0,  1929,   273,   274,   275,   276,
   277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,     0,     0,     0,
     0,     0,   288,     0,     0,     0,  2006,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,     0,
     0,     0,     0,   288,     0,     0,     0,  2034,   273,   274,
   275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,     0,
   321,     0,     0,     0,   288,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,   377,     0,     0,
     0,   288,   273,   274,   275,   276,   277,     0,   278,   279,
   280,   281,     0,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,     0,     0,     0,   501,     0,   288,   273,
   274,   275,   276,   277,     0,   278,   279,   280,   281,     0,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
     0,     0,     0,   502,     0,   288,   273,   274,   275,   276,
   277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,     0,     0,     0,
   503,     0,   288,   273,   274,   275,   276,   277,     0,   278,
   279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,     0,     0,     0,   504,     0,   288,
   273,   274,   275,   276,   277,     0,   278,   279,   280,   281,
     0,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,     0,     0,     0,   505,     0,   288,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,     0,
     0,   506,     0,   288,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,     0,     0,     0,   507,     0,
   288,   273,   274,   275,   276,   277,     0,   278,   279,   280,
   281,     0,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,     0,     0,     0,   508,     0,   288,   273,   274,
   275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,     0,
     0,     0,   509,     0,   288,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,     0,     0,   511,
     0,   288,   273,   274,   275,   276,   277,     0,   278,   279,
   280,   281,     0,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,     0,     0,     0,   512,     0,   288,   273,
   274,   275,   276,   277,     0,   278,   279,   280,   281,     0,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
     0,     0,     0,   513,     0,   288,   273,   274,   275,   276,
   277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,     0,     0,     0,
   514,     0,   288,   273,   274,   275,   276,   277,     0,   278,
   279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,     0,     0,     0,   515,     0,   288,
   273,   274,   275,   276,   277,     0,   278,   279,   280,   281,
     0,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,     0,     0,     0,   516,     0,   288,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,     0,
     0,   526,     0,   288,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,     0,     0,     0,   658,     0,
   288,   273,   274,   275,   276,   277,     0,   278,   279,   280,
   281,     0,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,     0,     0,     0,   795,     0,   288,   273,   274,
   275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,     0,
     0,     0,   796,     0,   288,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,     0,     0,   797,
     0,   288,   273,   274,   275,   276,   277,     0,   278,   279,
   280,   281,     0,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,     0,     0,     0,   798,     0,   288,   273,
   274,   275,   276,   277,     0,   278,   279,   280,   281,     0,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
     0,   853,     0,     0,     0,   288,   273,   274,   275,   276,
   277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,     0,     0,     0,
   861,     0,   288,   273,   274,   275,   276,   277,     0,   278,
   279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,     0,     0,     0,  1044,     0,   288,
   273,   274,   275,   276,   277,     0,   278,   279,   280,   281,
     0,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,     0,     0,     0,  1045,     0,   288,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,     0,
     0,  1729,     0,   288,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,     0,     0,     0,  1843,     0,
   288,   273,   274,   275,   276,   277,     0,   278,   279,   280,
   281,     0,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,     0,     0,     0,  1857,     0,   288,   273,   274,
   275,   276,   277,     0,   278,   279,   280,   281,     0,     0,
   282,   283,   284,   285,   286,     0,     0,     0,   287,     0,
     0,     0,  1935,     0,   288,   273,   274,   275,   276,   277,
     0,   278,   279,   280,   281,     0,     0,   282,   283,   284,
   285,   286,     0,     0,     0,   287,     0,     0,     0,  1936,
     0,   288,   273,   274,   275,   276,   277,     0,   278,   279,
   280,   281,     0,     0,   282,   283,   284,   285,   286,     0,
     0,     0,   287,     0,     0,     0,  1937,     0,   288,   273,
   274,   275,   276,   277,     0,   278,   279,   280,   281,     0,
     0,   282,   283,   284,   285,   286,     0,     0,     0,   287,
     0,     0,     0,  1942,     0,   288,   273,   274,   275,   276,
   277,     0,   278,   279,   280,   281,     0,     0,   282,   283,
   284,   285,   286,     0,     0,     0,   287,     0,     0,     0,
  1952,     0,   288,   273,   274,   275,   276,   277,     0,   278,
   279,   280,   281,     0,     0,   282,   283,   284,   285,   286,
     0,     0,     0,   287,     0,     0,     0,  1953,     0,   288,
   273,   274,   275,   276,   277,     0,   278,   279,   280,   281,
     0,     0,   282,   283,   284,   285,   286,     0,     0,     0,
   287,     0,     0,     0,  1995,     0,   288,   273,   274,   275,
   276,   277,     0,   278,   279,   280,   281,     0,     0,   282,
   283,   284,   285,   286,     0,     0,     0,   287,     0,     0,
     0,  1999,     0,   288,   273,   274,   275,   276,   277,     0,
   278,   279,   280,   281,     0,     0,   282,   283,   284,   285,
   286,     0,     0,     0,   287,     0,     0,     0,  2030,     0,
   288,   273,   274,   275,   276,   277,     0,   278,   279,   280,
   281,     0,     0,   282,   283,   284,   285,   286,     0,     0,
     0,   287,     0,     0,     0,     0,     0,   288,   886,   887,
   888,   889,   890,   891,   892,   893,   894,   895,     0,     0,
   896,   897,   898,   899,   900,   901,     0,     0,   902,     0,
     0,     0,  1528
};

static const short yycheck[] = {     3,
    82,   717,   103,   104,   572,   331,    10,   995,  1112,   335,
   543,   432,  1000,  1001,   630,    82,   172,    21,   551,     5,
   489,     3,     3,     5,     5,     5,     3,    31,   561,     5,
     5,     3,   565,     5,     7,     3,   569,     5,   312,     5,
    24,     5,     5,     5,     5,   611,   612,     5,     7,   323,
   324,   325,   618,    11,    12,    13,    14,    15,   332,    17,
     5,     5,    69,     0,     5,   486,   747,   748,   749,   750,
    23,    29,     5,    23,    81,   267,     7,   604,   255,   598,
   107,    75,   238,   110,   111,   112,   113,   114,   115,   263,
     5,    82,    64,   267,     5,    86,    87,   255,    86,   103,
   104,     5,    96,   107,    23,    69,   110,   111,   112,   113,
   114,   115,   116,   260,   535,   262,   120,   121,   122,    18,
    64,    23,   110,   107,     5,    69,   110,   111,   112,   113,
   114,   115,     3,     7,     5,     5,     6,     5,  1581,     9,
    10,   117,   298,   244,     5,   257,    99,   256,   263,    99,
   866,  1594,   868,   180,    69,   481,   265,  1600,    69,   117,
   118,   119,   120,    23,   265,    69,  1609,    13,    14,    15,
    82,    17,  1615,  1616,    86,    23,   180,    13,    14,    15,
    99,    17,    98,   339,    96,    82,     5,     6,   869,    88,
     9,    10,   108,   109,   110,   296,   180,    99,   258,    96,
  1188,    69,   263,   264,    65,   265,   887,   888,   889,   890,
   891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
   901,   902,    86,   255,   905,   257,   107,   231,   747,   748,
   749,   750,    96,    86,    98,   762,   117,   263,     5,    99,
   244,   140,   257,    96,    11,    12,    13,    14,    15,   263,
    17,    99,   267,   258,    13,    14,    15,   264,    17,   112,
   265,   265,    29,   116,   163,   164,   247,    13,    14,    15,
   264,    17,   143,   264,  1262,   263,   264,   263,   231,     5,
     6,   263,   257,   260,   266,   266,   256,   267,   264,   255,
   263,   263,   296,   267,   266,   265,   260,   379,   266,   263,
   263,   263,   263,   254,   263,     5,   264,   257,   312,   260,
   466,    11,    12,    13,    14,    15,   260,    17,   263,   323,
   324,   325,   263,   405,   263,  1006,   257,     5,   332,    29,
   263,   315,   606,    11,    12,    13,    14,    15,   405,    17,
    82,   212,   263,   258,   765,   260,    88,   233,   264,   260,
   869,    29,   264,   454,    96,   257,   260,    13,    14,    15,
   263,    17,   232,   263,   267,   264,  1354,   264,   887,   888,
   889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
   899,   900,   901,   902,     5,   263,   905,   405,   257,    67,
    11,    12,    13,    14,    15,     5,    17,   257,   267,     6,
   264,    11,    12,    13,    14,    15,   410,    17,    29,   257,
    18,   264,    96,   232,    98,    78,    79,   263,   264,    29,
   424,   263,   106,   242,   233,   256,   245,   263,   264,   585,
   434,   587,   588,   589,   265,   439,   257,   246,   764,   263,
    96,   445,   263,   447,   448,    18,  1889,   451,   257,   453,
   454,     5,   263,   116,     5,   256,  1899,    11,    12,    13,
    14,    15,     5,    17,   265,  1081,  1082,   130,    11,    12,
    13,    14,    15,   257,    17,    29,   257,   133,     7,   263,
    88,   258,   263,     5,   140,   489,    29,  1006,   265,    11,
    12,    13,    14,    15,   595,    17,   263,   264,     7,    13,
    14,    15,  1183,    17,   263,   264,   263,    29,   263,   264,
   267,    96,  1193,    86,   615,    88,   534,   263,   264,   263,
   538,   258,   264,   267,     7,   133,    99,   112,   265,   611,
   612,  1974,   140,   141,  1977,     7,   618,   863,     7,   112,
  1106,   248,   249,   250,  1987,  1988,   263,   254,     7,   134,
   267,     7,  1118,   260,     7,   163,    68,   130,   166,   167,
     7,   257,     7,   263,   264,     8,  1035,   263,     7,  2012,
     7,   267,    86,     5,    86,     7,   258,  1565,     7,  1567,
   264,     7,    96,   265,    96,    97,   264,    19,    20,    21,
   258,   595,   258,   105,   598,   107,     7,   265,   258,   265,
   604,   264,   606,   188,    36,   265,   263,     7,   264,     7,
   267,   615,    89,    90,    91,    92,    93,    94,   255,   258,
   134,   135,   136,   137,   138,   139,   265,   783,   258,  1197,
   258,   258,   258,   651,   790,   265,   191,   265,   265,   265,
   258,   257,   263,   264,    13,    14,    15,   265,    17,   246,
   247,   248,   249,   263,   264,   255,   264,   263,   685,   258,
   258,    96,  1230,   257,  1183,   692,   265,   265,   265,   770,
   771,   258,   264,   265,  1193,     7,   660,   140,   265,   264,
   143,   685,   264,   265,   256,    81,   257,    83,   692,   257,
    86,   264,   257,   156,   157,   158,   130,  1216,   264,  1232,
   684,   685,   264,   265,   688,   140,   265,   266,   692,   263,
   264,  1815,  1816,   248,   249,   250,   251,   701,     6,   254,
   263,   264,   264,   265,     7,  1293,   122,   123,   124,   125,
   126,   127,   128,   265,   130,   263,   264,   263,   264,   263,
   264,   263,   264,   747,   748,   749,   750,   263,   264,   753,
   264,   257,   264,   263,   264,   190,     7,   192,   762,   263,
   264,     7,   194,   264,   265,   263,   770,   771,   264,   265,
   264,   265,   264,   265,  1048,  1049,  1050,  1051,    96,   214,
    98,    99,   100,   101,   102,   103,   104,   264,  1062,   264,
   265,   234,   235,   236,   237,   238,   257,   240,   241,   242,
   243,   264,   257,   246,   247,   248,   249,   250,   257,  1083,
  1084,   254,   264,   265,   264,   265,   257,   260,   264,   265,
     7,   264,   806,     7,   193,   194,   195,   196,     5,   264,
     5,  1105,   265,   989,   990,   991,   992,   264,   265,   264,
   265,   257,    69,    70,    71,    72,    73,    74,    75,    76,
    77,  1839,  1533,    80,  1570,  1571,  1572,   264,   265,    86,
   263,   140,   264,   265,   143,   869,   263,   264,   264,   264,
   265,   257,    99,  1029,  1148,   264,   265,   156,   157,   257,
   884,   160,   161,   887,   888,   889,   890,   891,   892,   893,
   894,   895,   896,   897,   898,   899,   900,   901,   902,  1368,
   257,   905,   234,   235,   236,   237,   238,   257,   240,   241,
   242,   243,   264,   265,   246,   247,   248,   249,   250,   264,
   265,    81,   254,    83,    84,    85,   264,   265,   260,   264,
   265,   264,   265,   257,  1500,  1501,  1502,   257,  1504,     5,
   944,   240,   241,   242,   243,   257,   264,   246,   247,   248,
   249,   250,    81,   257,    83,   254,  1522,    86,  1379,   943,
   257,   260,   122,   123,   124,   125,   126,   127,   128,   233,
   130,   131,   257,  1961,   264,   265,   263,   264,  1399,   257,
     3,     4,     5,   257,  1405,   264,  1407,   264,   265,   264,
   265,   264,   265,   122,   123,   124,   125,   126,   127,   128,
  1274,   130,  1006,   257,   621,   622,  1280,    30,    31,    32,
    33,    34,   257,   257,  1533,   257,  1117,   257,  1119,  1440,
     7,   257,   257,  1542,  1106,  1446,   257,    82,    83,   257,
  1034,  1035,   257,   257,   257,     8,  1118,   264,   258,   265,
   258,   263,   263,   418,  1048,  1049,  1050,  1051,  1149,   263,
   263,     7,   263,  1057,   263,   265,   264,   258,  1062,     7,
   258,   233,   233,   118,   119,   233,     5,   263,     5,   124,
  1074,   263,     5,   263,     5,     5,   233,   263,  1352,  1083,
  1084,   263,   263,     5,   258,     5,     7,  1361,   463,  1093,
   263,   246,   247,   248,   249,   250,   251,  1101,  1102,   254,
   263,  1105,     5,     5,   264,   160,   161,   162,     5,   263,
   263,  1115,  1116,  1117,   263,  1119,  1120,  1121,  1684,   208,
  1686,  1125,   263,   263,  1840,   263,  1130,  1131,  1132,  1133,
  1134,  1135,  1136,  1137,  1138,   264,   263,   258,     5,   257,
   257,   257,   264,     7,  1148,  1149,  1150,  1151,  1152,  1153,
  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
   130,  1165,     8,     5,     7,  1169,     7,     7,   264,     7,
  1736,   263,     7,     7,     7,     7,  1742,     7,     7,  1183,
   233,   556,     7,     5,     7,   263,  1460,   242,   243,  1193,
   245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
   255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     7,     7,     7,     7,     7,     7,     7,   272,   273,   274,
   275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
   285,   286,   287,     7,   264,     5,   265,     8,  1512,     7,
   295,     5,     7,   263,     5,     5,  1812,   234,   235,   236,
   237,   238,     5,   240,   241,   242,   243,   263,   263,   246,
   247,   248,   249,   250,   319,   320,   263,   254,   263,   263,
  1274,     3,   258,   260,     7,   233,  1280,     7,   234,   235,
   236,   237,   238,     5,   240,   241,   242,   243,     7,   260,
   246,   247,   248,   249,   250,     7,     7,     7,   254,  1573,
     7,     7,     7,   678,   260,     7,   265,   264,   263,  1875,
     7,   258,   258,   234,   235,   236,   237,   238,     5,   240,
   241,   242,   243,   257,   379,   246,   247,   248,   249,   250,
   705,   257,   257,   254,   257,     3,     5,  1341,  1342,   260,
   257,   257,   257,     6,   263,   400,     7,     7,  1352,    66,
   405,   263,   407,  1886,     7,   263,  1825,  1361,   263,   263,
     5,   257,   263,     5,  1368,   265,   257,  1523,   263,  1525,
  1526,   263,  1938,   263,   122,   123,   124,   125,   126,   127,
   128,   263,   130,   257,   242,   254,   264,     7,   234,   235,
   236,   237,   238,   768,   240,   241,   242,   243,     3,   258,
   246,   247,   248,   249,   250,   265,   263,   257,   254,   257,
   785,     7,   257,   257,   260,   264,   263,     7,  1500,  1501,
  1502,   257,  1504,     5,     5,     5,   257,     5,     5,   484,
    11,    12,    13,    14,    15,   263,    17,   257,   257,   257,
  1522,   257,   497,   498,   257,   257,   257,   257,    29,  1453,
  1454,   257,   257,   257,  1458,   510,  1460,   246,   247,   248,
   249,   250,   517,   518,   519,   254,     5,  2035,   523,   524,
   257,   260,   257,   263,   257,   257,   257,   532,   257,   263,
   257,   257,    63,   263,     7,  1489,   258,     5,   263,   258,
    81,   258,    83,    84,    85,   257,     5,   263,     5,   258,
   257,     5,     5,  1507,  1508,   263,  1510,  1511,  1512,     5,
     5,     5,     5,     3,     5,     7,   264,     5,     3,     5,
     7,   257,     5,     7,   263,   580,   581,   264,   257,  1533,
     7,   122,   123,   124,   125,   126,   127,   128,   593,   130,
   131,   265,     7,   199,   200,   201,   202,   203,   204,   205,
   206,   207,   265,  1557,   263,   258,   611,   612,   257,   260,
     7,   616,   617,   618,   619,   265,     7,     7,   263,  1573,
   625,   946,   627,  1577,     7,  1579,     7,     7,     7,     7,
     7,   234,   235,   236,   237,   238,     7,   240,   241,   242,
   243,     7,     7,   246,   247,   248,   249,   250,     7,     7,
     7,   254,  1684,     7,  1686,     7,     7,   260,     7,     5,
     7,     5,     7,   988,   234,   235,   236,   237,   238,     7,
   240,   241,   242,   243,  1725,  1726,   246,   247,   248,   249,
   250,  1732,  1906,     7,   254,     7,     7,     7,     7,     7,
   260,     7,    81,     7,    83,    84,     7,    86,     7,     7,
  1924,     7,     7,     7,  1736,     7,     7,    96,     7,     7,
  1742,  1036,     7,     7,  1039,     5,  1822,     5,   257,   257,
     7,   257,     5,   264,   113,   114,   115,  1052,  1053,  1054,
  1055,     5,     7,   258,  1059,  1689,     7,  1691,     7,     7,
     7,   130,     7,   240,   241,   242,   243,     7,     7,   246,
   247,   248,   249,   250,   251,   258,   761,   254,  1809,   258,
  1811,   234,   235,   236,   237,   238,   258,   240,   241,   242,
   243,  1725,  1726,   246,   247,   248,   249,   250,  1732,     7,
  1812,   254,   787,   788,   789,  2009,   265,   260,   793,   794,
   265,   265,   234,   235,   236,   237,   238,   186,   240,   241,
   242,   243,  1127,  1128,   246,   247,   248,   249,   250,   265,
   265,   258,   254,   265,   265,  1140,   265,   265,   260,   234,
   235,   236,   237,   238,     7,   240,   241,   242,   243,     3,
     7,   246,   247,   248,   249,   250,   265,   265,   264,   254,
   265,   265,   265,  1875,   265,   260,   851,   265,   264,   854,
   258,   265,   265,   265,   265,  1809,   265,  1811,   265,   265,
   263,   263,   263,     7,   264,   263,   258,     7,   257,   265,
   265,  1825,   265,     7,   112,   264,     7,   265,   264,     7,
     7,   257,     7,   258,     3,  1210,     7,  1212,   258,   234,
   235,   236,   237,   238,  1219,   240,   241,   242,   243,   904,
     7,   246,   247,   248,   249,   250,  1938,     7,     7,   254,
     7,     7,     7,   263,     7,   260,     7,     7,     5,     7,
   263,   263,   927,   234,   235,   236,   237,   238,   263,   240,
   241,   242,   243,   263,   263,   246,   247,   248,   249,   250,
   263,   258,     5,   254,     3,     4,     5,     5,   263,   260,
   263,   258,  1906,     5,   264,   258,     5,     7,   258,     7,
     7,   258,     7,     7,     7,    24,    25,    26,    27,   265,
  1924,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,     7,   258,     7,   265,
   258,   265,   265,   265,   258,   258,   234,   235,   236,   237,
   238,   258,   240,   241,   242,   243,   265,   265,   246,   247,
   248,   249,   250,   265,   265,   265,   254,   263,   263,     3,
     4,     5,   260,   265,   258,  1040,  1041,  1042,   264,  1364,
   265,   258,   258,   264,   258,     7,   264,   258,     7,     7,
     7,     7,     7,     7,     7,  2009,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,     7,    60,    61,     7,     7,
   234,   235,   236,   237,   238,     7,   240,   241,   242,   243,
     7,  1106,   246,   247,   248,   249,   250,     7,     7,     7,
   254,   135,     7,  1118,     7,   264,   260,   234,   235,   236,
   237,   238,   264,   240,   241,   242,   243,  1452,   263,   246,
   247,   248,   249,   250,  1459,     7,  1141,   254,  1143,  1464,
  1145,   258,  1467,   260,   260,   263,     7,  1472,   122,     7,
     7,     5,     7,   265,     7,   129,   265,    16,   263,  1484,
   111,   265,   265,   265,   258,     7,   258,   265,  1173,   258,
     5,     7,  1497,   258,  1499,     7,     7,     7,     7,   265,
   263,   263,     7,     7,     7,     5,     5,     5,   247,   257,
   265,   263,   258,   252,   258,     5,   255,   237,   238,     5,
   240,   241,   242,   243,   258,   264,   246,   247,   248,   249,
   250,     5,   258,   264,   254,  1540,  1541,     7,  1543,     4,
   260,     7,   264,   234,   235,   236,   237,   238,     7,   240,
   241,   242,   243,     7,   264,   246,   247,   248,   249,   250,
     7,     7,     7,   254,     7,     7,     7,   263,   263,   260,
     7,     7,     7,     7,     7,     7,     7,   263,   263,     7,
   264,     7,   263,     3,     4,     5,   240,   265,   258,     7,
   258,     7,   246,   247,    62,     7,   263,     7,   252,     7,
     7,   255,     7,   132,   258,   259,   260,   261,     7,   263,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,     5,
    60,    61,   234,   235,   236,   237,   238,     7,   240,   241,
   242,   243,   264,     0,   246,   247,   248,   249,   250,     0,
   757,  1223,   254,  1669,  1072,  1342,   940,   659,   260,  1518,
  1355,   121,  1740,   575,   228,   592,    -1,    -1,    -1,    -1,
  1365,  1366,  1367,    -1,   701,    -1,    -1,  1692,  1073,    -1,
    -1,    -1,    -1,  1698,    -1,    -1,    -1,    -1,    -1,    -1,
  1705,    -1,   122,    -1,     3,     4,     5,     6,    -1,   129,
     9,    -1,    -1,    -1,    -1,    -1,  1721,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
    -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1455,  1456,  1457,    -1,    -1,    -1,    -1,  1462,    -1,    -1,
  1465,  1466,    -1,    -1,    -1,  1470,    -1,    -1,  1473,  1474,
  1475,  1476,    -1,    -1,  1479,  1480,  1481,    -1,  1483,    -1,
    -1,    -1,  1487,  1488,    -1,    -1,    -1,  1492,  1493,    -1,
    -1,    -1,    -1,    -1,    -1,  1500,  1501,  1502,  1503,  1504,
   240,    -1,    -1,    -1,  1509,    -1,   246,   247,    -1,    -1,
    -1,    -1,   252,    -1,    -1,   255,    -1,  1522,    -1,    -1,
   260,   261,    -1,   263,  1849,    -1,    -1,    -1,    -1,  1854,
     7,  1856,    -1,    -1,    -1,    -1,    -1,    -1,  1863,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,  1904,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,  1951,    -1,   247,    -1,
    -1,    -1,    -1,   252,    -1,    -1,   255,    -1,  1643,    -1,
    -1,  1646,    -1,    -1,   263,    -1,  1651,     7,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,     3,     4,     5,   254,    -1,    -1,    -1,
    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,  1684,
  1685,  1686,  1687,  1688,    24,    25,    26,    27,    -1,    -1,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,  1720,    -1,    -1,    -1,  1724,
     3,    -1,  1727,  1728,     7,    -1,    -1,    -1,    -1,    -1,
    -1,  1736,    -1,    -1,    -1,    -1,    -1,  1742,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1756,  1757,  1758,  1759,  1760,    -1,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    62,
    -1,   231,    -1,   260,    -1,    68,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    81,    -1,
    83,    -1,   252,    -1,    -1,   255,    -1,  1812,    -1,    -1,
   260,    -1,    95,   263,    -1,    -1,    99,    -1,  1823,   236,
   237,   238,   239,   240,   241,   242,   243,    -1,   111,   246,
   247,   248,   249,   250,   251,    -1,    -1,   254,    -1,  1844,
  1845,  1846,  1847,    -1,    -1,  1850,    -1,  1852,    -1,   132,
    -1,    -1,    -1,    -1,    -1,  1860,  1861,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
  1875,  1876,   212,    -1,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,  1903,    -1,
   260,    -1,    -1,    -1,   187,    -1,   189,   247,    -1,    -1,
    -1,    -1,   252,    -1,    -1,   255,    -1,    -1,     5,    -1,
    -1,    -1,    -1,   263,    -1,  1930,    13,    14,    15,    -1,
    17,    -1,    -1,  1938,    -1,  1940,     3,     4,     5,   234,
   235,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,   251,    -1,  1963,   254,
    -1,   256,    -1,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,     8,  1994,
    -1,    -1,  1997,    -1,     5,    -1,    -1,     3,     4,     5,
    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    -1,    -1,    -1,  2018,    -1,  2020,    -1,    -1,    24,    25,
    26,    27,    -1,  2028,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
    -1,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,    -1,
   197,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
    -1,   142,   254,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,    -1,    -1,   264,   189,    -1,
   247,     5,    -1,   194,    -1,   252,   197,    -1,   255,    13,
    14,    15,    -1,    17,    -1,    -1,   263,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,     5,     3,     4,     5,     6,
   260,   247,    -1,    13,    14,    15,   252,    17,    -1,   255,
    -1,    -1,    -1,   264,    -1,    -1,    -1,   263,    -1,    -1,
    -1,    -1,     7,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,   142,    -1,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
   194,    -1,   142,   197,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   264,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,   194,    -1,
   247,   197,    13,    14,    15,   252,    17,    -1,   255,   234,
   235,   236,   237,   238,   264,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,   234,   235,   236,   237,   238,   264,   240,
   241,   242,   243,    -1,    -1,   246,   247,   248,   249,   250,
    -1,    -1,     8,   254,    -1,    -1,    -1,    -1,    -1,   260,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,   237,   238,   239,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,   251,
    -1,   142,   254,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,
    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,
   197,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   264,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,     5,    -1,    -1,
    -1,   194,    -1,    -1,   197,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,   234,   235,
   236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
   256,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,
    -1,     5,     3,     4,     5,    -1,    -1,    -1,    -1,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   264,    -1,    24,    25,    26,    27,    -1,    -1,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    69,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
   194,    -1,   142,   197,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   264,    -1,    -1,   159,
    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
     5,    -1,    -1,    -1,   194,    -1,   247,   197,    13,    14,
    15,   252,    17,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   264,   234,   235,   236,   237,   238,   239,   240,   241,   242,
   243,    -1,    -1,   246,   247,   248,   249,   250,   251,    -1,
    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     4,     5,   265,    -1,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    24,    25,    26,    27,   264,    -1,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,     8,
    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
   185,     8,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,
    -1,   142,   197,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,     8,
    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,    -1,     8,    -1,   189,    -1,
    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   264,
    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,     3,
     4,     5,   189,   247,    -1,    -1,    -1,   194,   252,    -1,
   197,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   264,    -1,    -1,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,     3,     4,     5,    -1,   234,   235,   236,   237,   238,
   239,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,   251,    -1,    -1,   254,    -1,   264,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,    -1,    -1,   260,    -1,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,   234,   235,   236,   237,   238,    -1,   240,   241,
   242,   243,    -1,    -1,   246,   247,   248,   249,   250,    75,
     5,    -1,   254,    -1,    -1,    -1,    11,    12,   260,    -1,
    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,   234,
   235,   236,   237,   238,    29,   240,   241,   242,   243,    -1,
    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
   265,    -1,    -1,   247,    -1,    -1,    -1,    62,   252,    -1,
   136,   255,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    95,    -1,   168,    -1,    99,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   247,   111,    -1,    -1,    -1,
   252,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   198,    -1,    -1,    -1,    -1,   132,    -1,    -1,
    -1,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
   216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
   226,   227,   228,   229,   230,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,   187,    -1,   189,    -1,   265,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,   234,   235,
   236,   237,   238,   260,   240,   241,   242,   243,   265,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,   265,
   234,   235,   236,   237,   238,    -1,   240,   241,   242,   243,
    -1,    -1,   246,   247,   248,   249,   250,    -1,    -1,    -1,
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
    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,
    -1,    -1,    -1,   264,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
   260,    -1,    -1,    -1,   264,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,    -1,   264,   234,   235,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
    -1,    -1,   260,    -1,    -1,    -1,   264,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
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
    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,
    -1,    -1,    -1,   264,   234,   235,   236,   237,   238,    -1,
   240,   241,   242,   243,    -1,    -1,   246,   247,   248,   249,
   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
   260,    -1,    -1,    -1,   264,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,    -1,   264,   234,   235,   236,   237,
   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,
   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
    -1,    -1,   260,    -1,    -1,    -1,   264,   234,   235,   236,
   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,   246,
   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
    -1,    -1,    -1,   260,    -1,    -1,    -1,   264,   234,   235,
   236,   237,   238,    -1,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
   256,    -1,    -1,    -1,   260,   234,   235,   236,   237,   238,
    -1,   240,   241,   242,   243,    -1,    -1,   246,   247,   248,
   249,   250,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,
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
    -1,   256,    -1,    -1,    -1,   260,   234,   235,   236,   237,
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
    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,   234,   235,
   236,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
   246,   247,   248,   249,   250,   251,    -1,    -1,   254,    -1,
    -1,    -1,   258
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
case 206:
#line 1979 "GetDP.y"
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
#line 2006 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2020 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2026 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 tmpstr, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2033 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2042 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2045 "GetDP.y"
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
#line 2067 "GetDP.y"
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
#line 2082 "GetDP.y"
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
#line 2102 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 219:
#line 2111 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 221:
#line 2125 "GetDP.y"
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
#line 2135 "GetDP.y"
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
#line 2160 "GetDP.y"
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
#line 2185 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 225:
#line 2190 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 226:
#line 2198 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 227:
#line 2206 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 228:
#line 2215 "GetDP.y"
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
#line 2233 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 230:
#line 2242 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 231:
#line 2250 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 232:
#line 2258 "GetDP.y"
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
#line 2268 "GetDP.y"
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
#line 2278 "GetDP.y"
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
#line 2288 "GetDP.y"
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
#line 2308 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 238:
#line 2319 "GetDP.y"
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
#line 2348 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 243:
#line 2361 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 244:
#line 2367 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 tmpstr, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 245:
#line 2374 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2383 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2386 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2389 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2392 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2399 "GetDP.y"
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
#line 2415 "GetDP.y"
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
#line 2464 "GetDP.y"
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
#line 2485 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 255:
#line 2488 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 256:
#line 2493 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2498 "GetDP.y"
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
#line 2512 "GetDP.y"
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
#line 2532 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 260:
#line 2537 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 261:
#line 2542 "GetDP.y"
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
#line 2566 "GetDP.y"
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
#line 2626 "GetDP.y"
{ 
      Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; 
    ;
    break;}
case 265:
#line 2630 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 266:
#line 2638 "GetDP.y"
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
#line 2703 "GetDP.y"
{ 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;
    break;}
case 268:
#line 2709 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;
    break;}
case 269:
#line 2718 "GetDP.y"
{ 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;
    break;}
case 271:
#line 2729 "GetDP.y"
{ 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 272:
#line 2736 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 273:
#line 2739 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2746 "GetDP.y"
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
#line 2762 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2768 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 277:
#line 2771 "GetDP.y"
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
#line 2790 "GetDP.y"
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
#line 2802 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 280:
#line 2809 "GetDP.y"
{ 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;
    break;}
case 281:
#line 2814 "GetDP.y"
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
#line 2829 "GetDP.y"
{ 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;
    break;}
case 283:
#line 2835 "GetDP.y"
{ 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 284:
#line 2845 "GetDP.y"
{ 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 286:
#line 2857 "GetDP.y"
{ 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 287:
#line 2864 "GetDP.y"
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
#line 2875 "GetDP.y"
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
#line 2889 "GetDP.y"
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
#line 2904 "GetDP.y"
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
#line 2978 "GetDP.y"
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
#line 2994 "GetDP.y"
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
#line 3027 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 295:
#line 3030 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 296:
#line 3033 "GetDP.y"
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
#line 3079 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 299:
#line 3089 "GetDP.y"
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
#line 3117 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 304:
#line 3129 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 305:
#line 3135 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 tmpstr, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 306:
#line 3142 "GetDP.y"
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
#line 3154 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 309:
#line 3160 "GetDP.y"
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
#line 3174 "GetDP.y"
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
#line 3194 "GetDP.y"
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
#line 3217 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 315:
#line 3220 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 316:
#line 3224 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 317:
#line 3227 "GetDP.y"
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
#line 3237 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 319:
#line 3241 "GetDP.y"
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
#line 3254 "GetDP.y"
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
#line 3281 "GetDP.y"
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
#line 3322 "GetDP.y"
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
#line 3346 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 324:
#line 3351 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
#line 3357 "GetDP.y"
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
#line 3668 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 327:
#line 3673 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3682 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3691 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3700 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 332:
#line 3708 "GetDP.y"
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
#line 3748 "GetDP.y"
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
#line 3763 "GetDP.y"
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
#line 3787 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 336:
#line 3792 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3801 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 338:
#line 3804 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 339:
#line 3807 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 340:
#line 3810 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 341:
#line 3821 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 343:
#line 3832 "GetDP.y"
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
#line 3842 "GetDP.y"
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
#line 3852 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 346:
#line 3866 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 348:
#line 3878 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 349:
#line 3880 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3882 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3884 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 352:
#line 3892 "GetDP.y"
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
#line 3917 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 355:
#line 3925 "GetDP.y"
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
#line 4004 "GetDP.y"
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
#line 4050 "GetDP.y"
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
#line 4074 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 359:
#line 4083 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 4092 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 361:
#line 4097 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4106 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 363:
#line 4117 "GetDP.y"
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
#line 4146 "GetDP.y"
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
#line 4170 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 367:
#line 4178 "GetDP.y"
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
#line 4233 "GetDP.y"
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
#line 4250 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 370:
#line 4251 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 371:
#line 4252 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 372:
#line 4253 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 373:
#line 4254 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 374:
#line 4255 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 375:
#line 4256 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 376:
#line 4257 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 377:
#line 4264 "GetDP.y"
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
#line 4285 "GetDP.y"
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
#line 4309 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 381:
#line 4319 "GetDP.y"
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
#line 4346 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 386:
#line 4358 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 387:
#line 4365 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 tmpstr, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 388:
#line 4372 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 389:
#line 4375 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 390:
#line 4377 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 392:
#line 4385 "GetDP.y"
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
#line 4400 "GetDP.y"
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
#line 4415 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 395:
#line 4425 "GetDP.y"
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
#line 4445 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 398:
#line 4448 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 399:
#line 4457 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 400:
#line 4460 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 401:
#line 4465 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 4470 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 403:
#line 4475 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 404:
#line 4480 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 406:
#line 4491 "GetDP.y"
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
#line 4528 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 408:
#line 4535 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 409:
#line 4538 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 410:
#line 4550 "GetDP.y"
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
#line 4560 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 412:
#line 4566 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 413:
#line 4569 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 4581 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 415:
#line 4589 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 416:
#line 4602 "GetDP.y"
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
#line 4624 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;
    break;}
case 418:
#line 4631 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 419:
#line 4637 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 420:
#line 4643 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 421:
#line 4649 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 422:
#line 4657 "GetDP.y"
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
#line 4679 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 424:
#line 4686 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 425:
#line 4692 "GetDP.y"
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
#line 4703 "GetDP.y"
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
#line 4714 "GetDP.y"
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
#line 4727 "GetDP.y"
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
#line 4742 "GetDP.y"
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
#line 4757 "GetDP.y"
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
#line 4772 "GetDP.y"
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
#line 4792 "GetDP.y"
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
#line 4813 "GetDP.y"
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
#line 4825 "GetDP.y"
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
#line 4845 "GetDP.y"
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
#line 4862 "GetDP.y"
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
#line 4881 "GetDP.y"
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
#line 4902 "GetDP.y"
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
#line 4916 "GetDP.y"
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
#line 4930 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;
    break;}
case 441:
#line 4938 "GetDP.y"
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
#line 4972 "GetDP.y"
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
#line 4985 "GetDP.y"
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
#line 4999 "GetDP.y"
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
#line 5012 "GetDP.y"
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
#line 5024 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 448:
#line 5033 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 450:
#line 5042 "GetDP.y"
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
#line 5053 "GetDP.y"
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
#line 5065 "GetDP.y"
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
#line 5075 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;
    break;}
case 454:
#line 5083 "GetDP.y"
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
#line 5096 "GetDP.y"
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
#line 5109 "GetDP.y"
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
#line 5123 "GetDP.y"
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
#line 5133 "GetDP.y"
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
#line 5143 "GetDP.y"
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
#line 5157 "GetDP.y"
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
#line 5171 "GetDP.y"
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
#line 5190 "GetDP.y"
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
#line 5208 "GetDP.y"
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
#line 5219 "GetDP.y"
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
#line 5234 "GetDP.y"
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
#line 5249 "GetDP.y"
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
#line 5264 "GetDP.y"
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
#line 5279 "GetDP.y"
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
#line 5294 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 470:
#line 5305 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 471:
#line 5310 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 472:
#line 5320 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 474:
#line 5330 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 475:
#line 5333 "GetDP.y"
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
#line 5343 "GetDP.y"
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
#line 5358 "GetDP.y"
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
#line 5374 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 480:
#line 5378 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 481:
#line 5382 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 5386 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 483:
#line 5391 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 484:
#line 5402 "GetDP.y"
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
#line 5419 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5423 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5427 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 489:
#line 5431 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5435 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 5440 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 492:
#line 5451 "GetDP.y"
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
#line 5466 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 5470 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 496:
#line 5474 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 497:
#line 5478 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 5482 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 499:
#line 5493 "GetDP.y"
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
#line 5511 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 5515 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 503:
#line 5519 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 504:
#line 5523 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 505:
#line 5528 "GetDP.y"
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
#line 5538 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5544 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 5550 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 509:
#line 5560 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 510:
#line 5563 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 511:
#line 5568 "GetDP.y"
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
#line 5586 "GetDP.y"
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
#line 5596 "GetDP.y"
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
#line 5625 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 516:
#line 5628 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 517:
#line 5631 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 518:
#line 5639 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 519:
#line 5656 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 521:
#line 5668 "GetDP.y"
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
case 524:
#line 5693 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 526:
#line 5707 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 527:
#line 5714 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 tmpstr, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 528:
#line 5722 "GetDP.y"
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
case 529:
#line 5768 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 530:
#line 5773 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 531:
#line 5779 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 532:
#line 5782 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 533:
#line 5785 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5787 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 535:
#line 5793 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 537:
#line 5804 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 538:
#line 5807 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 539:
#line 5813 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 540:
#line 5818 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 541:
#line 5824 "GetDP.y"
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
case 542:
#line 5838 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 544:
#line 5852 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 545:
#line 5859 "GetDP.y"
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
case 546:
#line 5887 "GetDP.y"
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
case 547:
#line 5897 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 548:
#line 5898 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 549:
#line 5904 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 550:
#line 5913 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 551:
#line 5930 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 553:
#line 5942 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 556:
#line 5951 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 558:
#line 5963 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 559:
#line 5970 "GetDP.y"
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
case 560:
#line 5982 "GetDP.y"
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
case 561:
#line 5993 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 562:
#line 5998 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 563:
#line 6004 "GetDP.y"
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
case 564:
#line 6021 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 565:
#line 6031 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 566:
#line 6034 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 567:
#line 6038 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 568:
#line 6051 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 569:
#line 6056 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 570:
#line 6061 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 6070 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 6079 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 573:
#line 6088 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 574:
#line 6094 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 575:
#line 6099 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 576:
#line 6108 "GetDP.y"
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
case 577:
#line 6120 "GetDP.y"
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
case 578:
#line 6143 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 579:
#line 6144 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 580:
#line 6145 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 581:
#line 6146 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 582:
#line 6152 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 583:
#line 6154 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 584:
#line 6160 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 585:
#line 6166 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6173 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 587:
#line 6182 "GetDP.y"
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
case 588:
#line 6204 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 589:
#line 6212 "GetDP.y"
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
case 590:
#line 6223 "GetDP.y"
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
case 591:
#line 6237 "GetDP.y"
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
case 592:
#line 6258 "GetDP.y"
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
case 593:
#line 6285 "GetDP.y"
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
case 594:
#line 6316 "GetDP.y"
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
case 595:
#line 6336 "GetDP.y"
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
case 597:
#line 6371 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 598:
#line 6378 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 599:
#line 6385 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 600:
#line 6392 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 6396 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 602:
#line 6400 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 603:
#line 6404 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 604:
#line 6408 "GetDP.y"
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
case 605:
#line 6418 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 6423 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 607:
#line 6428 "GetDP.y"
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
case 608:
#line 6448 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 609:
#line 6455 "GetDP.y"
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
case 610:
#line 6465 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 611:
#line 6474 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 612:
#line 6483 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 613:
#line 6490 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 614:
#line 6498 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 615:
#line 6502 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 616:
#line 6511 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 617:
#line 6515 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 618:
#line 6519 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 619:
#line 6527 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 620:
#line 6533 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 621:
#line 6537 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 622:
#line 6545 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 623:
#line 6552 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 624:
#line 6560 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 625:
#line 6567 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 626:
#line 6575 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 627:
#line 6582 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 628:
#line 6590 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 629:
#line 6594 "GetDP.y"
{
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;
    break;}
case 630:
#line 6603 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 631:
#line 6609 "GetDP.y"
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
case 632:
#line 6659 "GetDP.y"
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
case 633:
#line 6674 "GetDP.y"
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
case 634:
#line 6690 "GetDP.y"
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
case 635:
#line 6709 "GetDP.y"
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
case 636:
#line 6729 "GetDP.y"
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
	      vyyerror("Unknown For/EndFor loop control variable %s", Constant_S.Name) ;
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
case 637:
#line 6760 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 638:
#line 6764 "GetDP.y"
{
    ;
    break;}
case 640:
#line 6779 "GetDP.y"
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
case 641:
#line 6794 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6800 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 643:
#line 6806 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6812 "GetDP.y"
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
case 645:
#line 6823 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 646:
#line 6828 "GetDP.y"
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
case 647:
#line 6840 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 648:
#line 6850 "GetDP.y"
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
case 650:
#line 6869 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 651:
#line 6875 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 652:
#line 6881 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 653:
#line 6892 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 654:
#line 6893 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 655:
#line 6894 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 656:
#line 6895 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 657:
#line 6896 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 658:
#line 6897 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 659:
#line 6898 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 660:
#line 6899 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 661:
#line 6900 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 662:
#line 6901 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 663:
#line 6902 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 664:
#line 6903 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 665:
#line 6904 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 666:
#line 6905 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 667:
#line 6906 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 668:
#line 6907 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 669:
#line 6908 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 670:
#line 6909 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 671:
#line 6910 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 672:
#line 6911 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 673:
#line 6912 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 674:
#line 6916 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 675:
#line 6917 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 676:
#line 6918 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 677:
#line 6919 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 678:
#line 6920 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 679:
#line 6921 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 680:
#line 6922 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 681:
#line 6923 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 682:
#line 6924 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 683:
#line 6925 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 684:
#line 6926 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 685:
#line 6927 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 686:
#line 6928 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 687:
#line 6929 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 688:
#line 6930 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 689:
#line 6931 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 690:
#line 6932 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 691:
#line 6933 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 692:
#line 6934 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 693:
#line 6935 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 694:
#line 6936 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 695:
#line 6937 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6938 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 697:
#line 6939 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6940 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 699:
#line 6941 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 700:
#line 6942 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 701:
#line 6943 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 702:
#line 6944 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 703:
#line 6945 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 704:
#line 6946 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 705:
#line 6947 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 706:
#line 6948 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 707:
#line 6949 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 708:
#line 6950 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 709:
#line 6951 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 710:
#line 6952 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 711:
#line 6953 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 712:
#line 6954 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 713:
#line 6955 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 714:
#line 6960 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 715:
#line 6961 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 716:
#line 6962 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 717:
#line 6963 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 718:
#line 6964 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 719:
#line 6965 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 720:
#line 6966 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 721:
#line 6968 "GetDP.y"
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
case 722:
#line 6986 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 723:
#line 6989 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 724:
#line 6995 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 725:
#line 6998 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 726:
#line 7005 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 727:
#line 7011 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 728:
#line 7014 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 729:
#line 7017 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 730:
#line 7029 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 731:
#line 7035 "GetDP.y"
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
case 732:
#line 7046 "GetDP.y"
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
case 733:
#line 7062 "GetDP.y"
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
case 734:
#line 7084 "GetDP.y"
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
case 735:
#line 7099 "GetDP.y"
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
case 736:
#line 7137 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 737:
#line 7145 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 738:
#line 7157 "GetDP.y"
{ 
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 739:
#line 7165 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;
    break;}
case 740:
#line 7176 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 741:
#line 7179 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 742:
#line 7186 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 743:
#line 7189 "GetDP.y"
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
case 744:
#line 7204 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 745:
#line 7209 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 746:
#line 7214 "GetDP.y"
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
case 747:
#line 7233 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 748:
#line 7243 "GetDP.y"
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
#line 7254 "GetDP.y"



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

