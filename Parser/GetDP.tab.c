
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
#define	tComma	466
#define	tTimeStep	467
#define	tHarmonicToTime	468
#define	tFormat	469
#define	tHeader	470
#define	tFooter	471
#define	tSkin	472
#define	tSmoothing	473
#define	tTarget	474
#define	tSort	475
#define	tIso	476
#define	tNoNewLine	477
#define	tDecomposeInSimplex	478
#define	tChangeOfValues	479
#define	tTimeLegend	480
#define	tFrequencyLegend	481
#define	tEigenvalueLegend	482
#define	tEvaluationPoints	483
#define	tStore	484
#define	tLastTimeStepOnly	485
#define	tStr	486
#define	tDate	487
#define	tDEF	488
#define	tOR	489
#define	tAND	490
#define	tEQUAL	491
#define	tNOTEQUAL	492
#define	tAPPROXEQUAL	493
#define	tLESSOREQUAL	494
#define	tGREATEROREQUAL	495
#define	tLESSLESS	496
#define	tGREATERGREATER	497
#define	tCROSSPRODUCT	498
#define	UNARYPREC	499
#define	tSHOW	500

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.110 2007-03-24 10:15:07 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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

void hack_fsetpos(void) ;
void hack_fsetpos_printf(void) ;

void Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				int (*fcmp)(const void *a, const void *b)) ;
int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
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

int      Nbr_Index, Flag_MultipleIndex, Flag1 ;
List_T  * ListOfFormulation ;
List_T  * ListOfBasisFunction, * ListOfEntityIndex ;

List_T  * ListOfInt_Lnew ;
int     * ListOfInt_P ;

char     tmpstr[1024] ;

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


#line 183 "GetDP.y"
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



#define	YYFINAL		2045
#define	YYFLAG		-32768
#define	YYNTBASE	269

#define YYTRANSLATE(x) ((unsigned)(x) <= 500 ? yytranslate[x] : 459)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   253,     2,   261,   262,   251,     2,     2,   256,
   257,   249,   247,   266,   248,   260,   250,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   241,
     2,   243,   235,   267,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   258,     2,   259,   255,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   264,     2,   265,   268,     2,     2,     2,     2,
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
   227,   228,   229,   230,   231,   232,   233,   234,   236,   237,
   238,   239,   240,   242,   244,   245,   246,   252,   254,   263
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   154,   159,   165,   171,   177,   179,   185,
   187,   189,   190,   191,   210,   211,   218,   221,   223,   225,
   228,   230,   232,   234,   236,   237,   241,   245,   247,   249,
   253,   254,   258,   263,   265,   269,   273,   277,   283,   289,
   297,   299,   300,   304,   311,   312,   314,   319,   320,   323,
   327,   328,   331,   337,   344,   352,   354,   356,   357,   361,
   366,   371,   372,   375,   379,   380,   384,   386,   390,   391,
   394,   396,   397,   398,   406,   410,   414,   421,   425,   429,
   433,   437,   441,   445,   449,   453,   457,   461,   465,   469,
   473,   477,   480,   483,   486,   490,   492,   496,   499,   501,
   504,   505,   511,   512,   520,   521,   533,   543,   548,   553,
   554,   562,   569,   572,   575,   578,   581,   585,   588,   592,
   596,   599,   603,   605,   609,   610,   614,   621,   622,   627,
   628,   631,   635,   640,   641,   646,   647,   650,   654,   658,
   663,   664,   669,   670,   673,   677,   681,   686,   687,   692,
   693,   696,   700,   704,   709,   710,   715,   716,   719,   723,
   727,   731,   735,   739,   743,   744,   747,   751,   753,   755,
   756,   759,   763,   768,   772,   777,   783,   784,   789,   792,
   793,   796,   800,   804,   808,   812,   816,   820,   828,   832,
   836,   840,   844,   848,   856,   864,   872,   873,   876,   880,
   882,   884,   885,   888,   891,   895,   900,   904,   909,   914,
   919,   924,   925,   930,   933,   934,   937,   941,   945,   950,
   955,   963,   967,   971,   975,   979,   980,   981,   982,  1001,
  1002,  1007,  1008,  1011,  1015,  1019,  1023,  1025,  1029,  1030,
  1034,  1036,  1040,  1041,  1045,  1046,  1051,  1054,  1055,  1058,
  1062,  1066,  1070,  1071,  1076,  1079,  1080,  1083,  1087,  1091,
  1095,  1099,  1100,  1103,  1107,  1109,  1111,  1112,  1115,  1119,
  1124,  1128,  1133,  1138,  1139,  1144,  1147,  1148,  1151,  1155,
  1159,  1163,  1167,  1171,  1172,  1178,  1182,  1183,  1189,  1193,
  1197,  1201,  1205,  1209,  1210,  1214,  1215,  1218,  1221,  1224,
  1229,  1234,  1239,  1244,  1245,  1248,  1252,  1256,  1260,  1261,
  1264,  1268,  1272,  1276,  1280,  1281,  1284,  1285,  1286,  1296,
  1300,  1304,  1308,  1311,  1315,  1321,  1322,  1325,  1329,  1330,
  1331,  1341,  1342,  1344,  1346,  1348,  1350,  1352,  1354,  1356,
  1361,  1365,  1366,  1369,  1373,  1375,  1377,  1378,  1381,  1385,
  1390,  1395,  1396,  1402,  1404,  1405,  1410,  1413,  1416,  1417,
  1420,  1424,  1428,  1432,  1436,  1440,  1444,  1448,  1452,  1454,
  1456,  1460,  1461,  1465,  1467,  1471,  1472,  1476,  1477,  1480,
  1484,  1488,  1493,  1498,  1503,  1508,  1514,  1520,  1523,  1531,
  1543,  1551,  1565,  1577,  1587,  1595,  1603,  1611,  1621,  1631,
  1641,  1653,  1665,  1677,  1683,  1701,  1715,  1731,  1743,  1757,
  1758,  1766,  1767,  1775,  1783,  1795,  1801,  1807,  1817,  1827,
  1837,  1843,  1849,  1861,  1871,  1886,  1901,  1909,  1922,  1933,
  1941,  1949,  1957,  1959,  1961,  1963,  1964,  1967,  1971,  1975,
  1978,  1979,  1982,  1986,  1990,  1994,  1998,  2003,  2004,  2007,
  2011,  2015,  2019,  2023,  2027,  2032,  2033,  2036,  2040,  2044,
  2048,  2052,  2057,  2058,  2061,  2065,  2069,  2073,  2077,  2081,
  2086,  2091,  2096,  2097,  2102,  2103,  2106,  2110,  2114,  2118,
  2122,  2126,  2130,  2131,  2134,  2138,  2140,  2142,  2143,  2146,
  2150,  2155,  2159,  2163,  2168,  2169,  2174,  2177,  2180,  2181,
  2184,  2188,  2193,  2194,  2200,  2206,  2207,  2210,  2211,  2218,
  2222,  2226,  2230,  2234,  2235,  2238,  2242,  2244,  2246,  2247,
  2250,  2254,  2258,  2262,  2266,  2271,  2272,  2281,  2282,  2283,
  2287,  2295,  2303,  2312,  2324,  2331,  2332,  2343,  2345,  2349,
  2356,  2358,  2360,  2362,  2364,  2365,  2369,  2371,  2374,  2377,
  2390,  2393,  2409,  2414,  2427,  2445,  2468,  2481,  2482,  2485,
  2489,  2494,  2499,  2503,  2506,  2509,  2513,  2517,  2521,  2525,
  2529,  2532,  2536,  2540,  2544,  2548,  2552,  2556,  2560,  2566,
  2569,  2572,  2576,  2586,  2590,  2593,  2603,  2606,  2616,  2619,
  2629,  2635,  2639,  2642,  2643,  2646,  2653,  2662,  2671,  2682,
  2684,  2689,  2691,  2697,  2702,  2707,  2715,  2720,  2728,  2734,
  2738,  2742,  2750,  2756,  2765,  2766,  2770,  2776,  2782,  2784,
  2786,  2788,  2790,  2792,  2794,  2796,  2798,  2800,  2802,  2804,
  2806,  2808,  2810,  2812,  2814,  2816,  2818,  2820,  2822,  2824,
  2826,  2830,  2833,  2836,  2840,  2844,  2848,  2852,  2856,  2860,
  2864,  2868,  2872,  2876,  2880,  2884,  2888,  2892,  2897,  2902,
  2907,  2912,  2917,  2922,  2927,  2932,  2937,  2942,  2949,  2954,
  2959,  2964,  2969,  2974,  2979,  2986,  2993,  3000,  3006,  3009,
  3011,  3013,  3015,  3017,  3019,  3021,  3023,  3025,  3026,  3028,
  3030,  3034,  3036,  3038,  3042,  3046,  3050,  3056,  3060,  3065,
  3070,  3077,  3086,  3095,  3101,  3107,  3109,  3111,  3113,  3115,
  3117,  3122,  3129,  3131
};

static const short yyrhs[] = {    -1,
   270,   271,     0,     0,     0,   271,   272,   273,     0,    62,
   264,   276,   265,     0,    99,   264,   297,   265,     0,    68,
   264,   332,   265,     0,    81,   264,   317,   265,     0,    83,
   264,   323,   265,     0,    95,   264,   339,   265,     0,   111,
   264,   362,   265,     0,   132,   264,   388,   265,     0,   187,
   264,   418,   265,     0,   189,   264,   429,   265,     0,   433,
     0,   447,     0,    22,   457,     0,   274,     0,    19,     7,
     0,    19,   194,     7,     0,    19,    21,     7,     0,    19,
    36,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    62,     7,     0,    21,    99,     7,     0,    21,
    68,     7,     0,    21,    81,     7,     0,    21,    83,     7,
     0,    21,    95,     7,     0,    21,   111,     7,     0,    21,
   132,     7,     0,    21,   187,     7,     0,    21,   189,     7,
     0,    21,     3,     7,     0,     0,   275,   437,     0,     0,
   276,   277,     0,   456,   234,   281,     7,     0,     5,   296,
   234,   281,     7,     0,     5,   294,   234,   281,     7,     0,
    63,   258,   292,   259,     7,     0,   278,     0,   456,   247,
   234,   281,     7,     0,   447,     0,   446,     0,     0,     0,
   456,   258,   450,   259,   234,    66,   279,   258,   261,   289,
   280,   266,   261,   289,   266,   450,   259,     7,     0,     0,
   285,   258,   286,   282,   287,   259,     0,   261,   289,     0,
   281,     0,   456,     0,   456,   295,     0,    69,     0,     5,
     0,   289,     0,    64,     0,     0,   293,   288,   289,     0,
   293,    65,   456,     0,     5,     0,   291,     0,   264,   290,
   265,     0,     0,   290,   293,   291,     0,   290,   293,   248,
   291,     0,     3,     0,   256,   450,   257,     0,   267,   453,
   267,     0,     3,     8,   450,     0,   256,   450,   257,     8,
   450,     0,     3,     8,   450,     8,   450,     0,   256,   450,
   257,     8,   450,     8,   450,     0,   456,     0,     0,   292,
   293,     5,     0,   292,   293,     5,   264,   450,   265,     0,
     0,   266,     0,   264,   261,   450,   265,     0,     0,   264,
   265,     0,   264,   450,   265,     0,     0,   297,   298,     0,
    67,   258,   299,   259,     7,     0,     5,   258,   259,   234,
   300,     7,     0,     5,   258,   283,   259,   234,   300,     7,
     0,   447,     0,   446,     0,     0,   299,   293,     5,     0,
    23,   258,   450,   259,     0,    99,   258,     5,   259,     0,
     0,   301,   304,     0,   249,   249,   249,     0,     0,   264,
   303,   265,     0,   300,     0,   303,   266,   300,     0,     0,
   305,   306,     0,   309,     0,     0,     0,   306,   235,   307,
   306,     8,   308,   306,     0,   306,   249,   306,     0,   306,
   252,   306,     0,    58,   258,   306,   266,   306,   259,     0,
   306,   250,   306,     0,   306,   247,   306,     0,   306,   248,
   306,     0,   306,   251,   306,     0,   306,   255,   306,     0,
   306,   241,   306,     0,   306,   243,   306,     0,   306,   242,
   306,     0,   306,   244,   306,     0,   306,   238,   306,     0,
   306,   239,   306,     0,   306,   240,   306,     0,   306,   237,
   306,     0,   306,   236,   306,     0,   248,   306,     0,   247,
   306,     0,   253,   306,     0,   256,   306,   257,     0,   451,
     0,   449,   314,   316,     0,     5,   387,     0,   387,     0,
   387,   314,     0,     0,   122,   310,   258,   304,   259,     0,
     0,   129,   311,   258,   304,   266,     3,   259,     0,     0,
    60,   258,     5,   258,   312,   304,   259,   259,   264,   450,
   265,     0,    61,   258,     5,   259,   264,   450,   266,   450,
   265,     0,    55,   258,   387,   259,     0,    57,   258,   387,
   259,     0,     0,    56,   313,   258,   304,   266,   283,   259,
     0,   241,     5,   243,   258,   304,   259,     0,   262,     5,
     0,   262,   213,     0,   262,   143,     0,   262,     3,     0,
   309,   261,     3,     0,   261,     3,     0,   309,   263,   450,
     0,   258,   260,   259,     0,   258,   259,     0,   258,   315,
   259,     0,   306,     0,   315,   266,   306,     0,     0,   264,
   453,   265,     0,   264,    69,   258,   283,   259,   265,     0,
     0,   317,   264,   318,   265,     0,     0,   318,   319,     0,
    96,     5,     7,     0,    82,   264,   320,   265,     0,     0,
   320,   264,   321,   265,     0,     0,   321,   322,     0,    69,
   283,     7,     0,    69,    64,     7,     0,    81,     5,   316,
     7,     0,     0,   323,   264,   324,   265,     0,     0,   324,
   325,     0,    96,     5,     7,     0,    88,   300,     7,     0,
    82,   264,   326,   265,     0,     0,   326,   264,   327,   265,
     0,     0,   327,   328,     0,    86,     5,     7,     0,    87,
     5,     7,     0,    82,   264,   329,   265,     0,     0,   329,
   264,   330,   265,     0,     0,   330,   331,     0,    89,     5,
     7,     0,    90,   450,     7,     0,    91,   450,     7,     0,
    92,   450,     7,     0,    93,   450,     7,     0,    94,   450,
     7,     0,     0,   332,   333,     0,   264,   334,   265,     0,
   447,     0,   446,     0,     0,   334,   335,     0,    96,   456,
     7,     0,    96,     5,   294,     7,     0,    86,     5,     7,
     0,    82,   264,   336,   265,     0,    82,     5,   264,   336,
   265,     0,     0,   336,   264,   337,   265,     0,   336,   446,
     0,     0,   337,   338,     0,    86,     5,     7,     0,    69,
   283,     7,     0,    70,   283,     7,     0,    76,   300,     7,
     0,    75,   300,     7,     0,    80,   456,     7,     0,    77,
   264,   451,   293,   451,   265,     7,     0,    71,   283,     7,
     0,    72,   283,     7,     0,    99,   300,     7,     0,    74,
   300,     7,     0,    73,   300,     7,     0,    99,   258,   300,
   266,   300,   259,     7,     0,    74,   258,   300,   266,   300,
   259,     7,     0,    73,   258,   300,   266,   300,   259,     7,
     0,     0,   339,   340,     0,   264,   341,   265,     0,   447,
     0,   446,     0,     0,   341,   342,     0,   341,   446,     0,
    96,   456,     7,     0,    96,     5,   294,     7,     0,    86,
     5,     7,     0,    97,   264,   343,   265,     0,   105,   264,
   349,   265,     0,   107,   264,   356,   265,     0,    68,   264,
   359,   265,     0,     0,   343,   264,   344,   265,     0,   343,
   446,     0,     0,   344,   345,     0,    96,     5,     7,     0,
    98,     5,     7,     0,    98,     5,   294,     7,     0,    99,
     5,   346,     7,     0,   100,   264,     5,   293,     5,   265,
     7,     0,   101,   302,     7,     0,   102,   302,     7,     0,
   103,   283,     7,     0,   104,   283,     7,     0,     0,     0,
     0,   264,   112,     5,     7,   111,     5,   294,     7,   347,
    62,   284,     7,   348,   132,     5,   295,     7,   265,     0,
     0,   349,   264,   350,   265,     0,     0,   350,   351,     0,
    96,     5,     7,     0,   106,   352,     7,     0,    98,   354,
     7,     0,     5,     0,   264,   353,   265,     0,     0,   353,
   293,     5,     0,     5,     0,   264,   355,   265,     0,     0,
   355,   293,     5,     0,     0,   356,   264,   357,   265,     0,
   356,   446,     0,     0,   357,   358,     0,    96,   456,     7,
     0,    86,     5,     7,     0,    98,     5,     7,     0,     0,
   359,   264,   360,   265,     0,   359,   446,     0,     0,   360,
   361,     0,    98,     5,     7,     0,   108,   285,     7,     0,
   109,   288,     7,     0,   110,   456,     7,     0,     0,   362,
   363,     0,   264,   364,   265,     0,   447,     0,   446,     0,
     0,   364,   365,     0,    96,   456,     7,     0,    96,     5,
   294,     7,     0,    86,     5,     7,     0,   112,   264,   366,
   265,     0,   116,   264,   372,   265,     0,     0,   366,   264,
   367,   265,     0,   366,   446,     0,     0,   367,   368,     0,
    96,   456,     7,     0,    86,   107,     7,     0,    86,   117,
     7,     0,    86,     5,     7,     0,   186,   452,     7,     0,
     0,   113,   456,   369,   371,     7,     0,   114,     3,     7,
     0,     0,   258,   370,   304,   259,     7,     0,   130,   283,
     7,     0,    83,     5,     7,     0,    84,     5,     7,     0,
    81,     5,     7,     0,   115,     3,     7,     0,     0,   258,
   456,   259,     0,     0,   372,   373,     0,   372,   447,     0,
   372,   446,     0,   117,   264,   378,   265,     0,   118,   264,
   378,   265,     0,   119,   264,   382,   265,     0,   120,   264,
   374,   265,     0,     0,   374,   375,     0,    86,     5,     7,
     0,   110,     5,     7,     0,   264,   376,   265,     0,     0,
   376,   377,     0,    78,   387,     7,     0,    79,   387,     7,
     0,   116,   387,     7,     0,   130,   283,     7,     0,     0,
   378,   379,     0,     0,     0,   386,   258,   380,   304,   381,
   266,   304,   259,     7,     0,   130,   283,     7,     0,    81,
     5,     7,     0,    83,     5,     7,     0,   131,     7,     0,
    84,     5,     7,     0,    85,   258,     3,   259,     7,     0,
     0,   382,   383,     0,   130,   283,     7,     0,     0,     0,
   386,   258,   384,   304,   385,   266,   387,   259,     7,     0,
     0,   122,     0,   123,     0,   124,     0,   125,     0,   126,
     0,   127,     0,   128,     0,   264,     5,   456,   265,     0,
   264,   456,   265,     0,     0,   388,   389,     0,   264,   390,
   265,     0,   447,     0,   446,     0,     0,   390,   391,     0,
    96,   456,     7,     0,    96,     5,   294,     7,     0,   133,
   264,   393,   265,     0,     0,   140,   392,   264,   400,   265,
     0,   446,     0,     0,   393,   264,   394,   265,     0,   393,
   446,     0,   393,   447,     0,     0,   394,   395,     0,    96,
   456,     7,     0,    86,     5,     7,     0,   134,   396,     7,
     0,   135,   457,     7,     0,   138,   398,     7,     0,   139,
   456,     7,     0,   136,   452,     7,     0,   137,   457,     7,
     0,   446,     0,   456,     0,   264,   397,   265,     0,     0,
   397,   293,   456,     0,   456,     0,   264,   399,   265,     0,
     0,   399,   293,   456,     0,     0,   400,   401,     0,     5,
   456,     7,     0,   142,   300,     7,     0,   155,   264,   407,
   265,     0,   159,   264,   409,   265,     0,   162,   264,   411,
   265,     0,   165,   264,   413,   265,     0,     5,   258,   456,
   259,     7,     0,   142,   258,   300,   259,     7,     0,   153,
     7,     0,    15,   258,   300,   259,   264,   400,   265,     0,
    15,   258,   300,   259,   264,   400,   265,    16,   264,   400,
   265,     0,   144,   258,   456,   266,   300,   259,     7,     0,
   171,   258,   456,   266,   300,   266,   300,   266,   300,   266,
   300,   259,     7,     0,   171,   258,   456,   266,   300,   266,
   300,   266,   300,   259,     7,     0,   171,   258,   456,   266,
   300,   266,   300,   259,     7,     0,   172,   258,   456,   266,
   452,   259,     7,     0,   173,   258,   456,   266,   452,   259,
     7,     0,   151,   258,   456,   266,   300,   259,     7,     0,
   152,   258,   456,   266,   283,   266,   456,   259,     7,     0,
   145,   258,   456,   266,   456,   266,   452,   259,     7,     0,
   146,   258,   456,   266,   456,   266,   450,   259,     7,     0,
   147,   258,   456,   266,   450,   266,   452,   266,   450,   259,
     7,     0,   148,   258,   456,   266,   450,   266,   450,   266,
   450,   259,     7,     0,   149,   258,   456,   266,   450,   266,
   450,   266,   450,   259,     7,     0,   154,   258,   300,   259,
     7,     0,   150,   258,   456,   266,   456,   266,   456,   266,
   450,   266,   452,   266,   450,   266,   450,   259,     7,     0,
   155,   258,   450,   266,   450,   266,   300,   266,   300,   259,
   264,   400,   265,     0,   159,   258,   450,   266,   450,   266,
   300,   266,   450,   266,   450,   259,   264,   400,   265,     0,
   162,   258,   450,   266,   450,   266,   300,   259,   264,   400,
   265,     0,   162,   258,   450,   266,   450,   266,   300,   266,
   450,   259,   264,   400,   265,     0,     0,   194,   402,   258,
   404,   405,   259,     7,     0,     0,   197,   403,   258,   404,
   405,   259,     7,     0,   168,   258,   283,   266,   300,   259,
     7,     0,   168,   258,   283,   266,   300,   266,   450,   266,
   300,   259,     7,     0,   189,   258,   456,   259,     7,     0,
   170,   258,   457,   259,     7,     0,   174,   258,   456,   266,
   452,   266,   450,   259,     7,     0,   175,   258,   456,   266,
   450,   266,   457,   259,     7,     0,   176,   258,   456,   266,
   452,   266,   457,   259,     7,     0,   177,   264,   456,   265,
     7,     0,   178,   264,   456,   265,     7,     0,   184,   264,
   456,   266,   283,   266,   457,   266,   300,   265,     7,     0,
   184,   264,   456,   266,   283,   266,   457,   265,     7,     0,
   179,   258,   456,   266,   456,   266,   450,   266,   450,   259,
   264,   400,   265,     7,     0,   180,   258,   456,   266,   456,
   266,   450,   266,   450,   259,   264,   400,   265,     7,     0,
   181,   258,   456,   266,   450,   259,     7,     0,   185,   264,
     5,   266,     5,   266,   135,   457,   266,     4,   265,     7,
     0,   185,   264,     5,   266,     5,   266,   135,   457,   265,
     7,     0,   185,   264,     5,   266,     5,   265,     7,     0,
   182,   258,   456,   266,   456,   259,     7,     0,   183,   258,
   456,   266,   456,   259,     7,     0,   446,     0,   302,     0,
   456,     0,     0,   405,   406,     0,   266,   209,   457,     0,
   266,   213,   452,     0,   266,   452,     0,     0,   407,   408,
     0,   156,   450,     7,     0,   157,   450,     7,     0,   143,
   300,     7,     0,   158,   300,     7,     0,   140,   264,   400,
   265,     0,     0,   409,   410,     0,   156,   450,     7,     0,
   157,   450,     7,     0,   143,   300,     7,     0,   160,   450,
     7,     0,   161,   450,     7,     0,   140,   264,   400,   265,
     0,     0,   411,   412,     0,   163,   450,     7,     0,    88,
   450,     7,     0,   164,   300,     7,     0,    18,   450,     7,
     0,   140,   264,   400,   265,     0,     0,   413,   414,     0,
   163,   450,     7,     0,   166,   450,     7,     0,    88,   450,
     7,     0,    18,   450,     7,     0,   133,   456,     7,     0,
   167,   264,   415,   265,     0,   140,   264,   400,   265,     0,
   141,   264,   400,   265,     0,     0,   415,   264,   416,   265,
     0,     0,   416,   417,     0,    86,     5,     7,     0,   112,
     5,     7,     0,   130,   283,     7,     0,    88,   450,     7,
     0,    99,   300,     7,     0,    18,     5,     7,     0,     0,
   418,   419,     0,   264,   420,   265,     0,   447,     0,   446,
     0,     0,   420,   421,     0,    96,   456,     7,     0,    96,
     5,   294,     7,     0,   134,   456,     7,     0,   188,   456,
     7,     0,   112,   264,   422,   265,     0,     0,   422,   264,
   423,   265,     0,   422,   447,     0,   422,   446,     0,     0,
   423,   424,     0,    96,   456,     7,     0,    75,   264,   425,
   265,     0,     0,   425,   117,   264,   426,   265,     0,   425,
     5,   264,   426,   265,     0,     0,   426,   427,     0,     0,
   386,   258,   428,   304,   259,     7,     0,    86,     5,     7,
     0,   130,   283,     7,     0,    81,     5,     7,     0,    83,
     5,     7,     0,     0,   429,   430,     0,   264,   431,   265,
     0,   447,     0,   446,     0,     0,   431,   432,     0,    96,
   456,     7,     0,   190,   456,     7,     0,   215,     5,     7,
     0,   192,   457,     7,     0,   140,   264,   435,   265,     0,
     0,   189,   456,   191,   456,   434,   264,   435,   265,     0,
     0,     0,   435,   436,   437,     0,   193,   258,   439,   442,
   443,   259,     7,     0,   194,   258,   439,   442,   443,   259,
     7,     0,   194,   258,     6,   266,   300,   443,   259,     7,
     0,   194,   258,     6,   266,   232,   258,   457,   259,   443,
   259,     7,     0,   196,   258,     6,   443,   259,     7,     0,
     0,   195,   258,   283,   438,   266,   130,   283,   443,   259,
     7,     0,   446,     0,   456,   441,   266,     0,   456,   441,
   440,     5,   441,   266,     0,   249,     0,   250,     0,   247,
     0,   248,     0,     0,   258,   283,   259,     0,   199,     0,
   200,   283,     0,   201,   283,     0,   203,   264,   264,   453,
   265,   264,   453,   265,   264,   453,   265,   265,     0,   202,
   283,     0,   202,   264,   300,   266,   300,   266,   300,   265,
   264,   452,   266,   452,   266,   452,   265,     0,   204,   264,
   453,   265,     0,   205,   264,   264,   453,   265,   264,   453,
   265,   265,   264,   450,   265,     0,   206,   264,   264,   453,
   265,   264,   453,   265,   264,   453,   265,   265,   264,   450,
   266,   450,   265,     0,   207,   264,   264,   453,   265,   264,
   453,   265,   264,   453,   265,   264,   453,   265,   265,   264,
   450,   266,   450,   266,   450,   265,     0,   200,   283,   208,
     5,   264,   450,   266,   450,   265,   264,   450,   265,     0,
     0,   443,   444,     0,   266,   209,   457,     0,   266,   209,
   243,   457,     0,   266,   209,   246,   457,     0,   266,   210,
   450,     0,   266,   218,     0,   266,   219,     0,   266,   214,
   450,     0,   266,   215,     5,     0,   266,   216,   445,     0,
   266,   217,   445,     0,   266,   215,   445,     0,   266,   212,
     0,   266,   211,   450,     0,   266,   213,   452,     0,   266,
   198,     5,     0,   266,   221,     5,     0,   266,   220,   450,
     0,   266,    75,   452,     0,   266,   222,   450,     0,   266,
   222,   264,   453,   265,     0,   266,   223,     0,   266,   224,
     0,   266,   136,   452,     0,   266,   168,   264,   300,   266,
   300,   266,   300,   265,     0,   266,   225,   302,     0,   266,
   226,     0,   266,   226,   264,   450,   266,   450,   266,   450,
   265,     0,   266,   227,     0,   266,   227,   264,   450,   266,
   450,   266,   450,   265,     0,   266,   228,     0,   266,   228,
   264,   450,   266,   450,   266,   450,   265,     0,   266,   229,
   264,   453,   265,     0,   266,   230,     3,     0,   266,   231,
     0,     0,   445,     6,     0,    13,   256,   450,     8,   450,
   257,     0,    13,   256,   450,     8,   450,     8,   450,   257,
     0,    13,     5,   130,   264,   450,     8,   450,   265,     0,
    13,     5,   130,   264,   450,     8,   450,     8,   450,   265,
     0,    14,     0,    15,   256,   450,   257,     0,    17,     0,
    29,   258,   448,   259,     7,     0,   456,   234,   452,     7,
     0,   456,   234,     6,     7,     0,   456,   234,   232,   258,
   457,   259,     7,     0,   456,   234,   458,     7,     0,   456,
   234,    28,   258,   457,   259,     7,     0,    11,   256,     6,
   257,     7,     0,    11,   456,     7,     0,    11,   261,     7,
     0,    11,   256,     6,   266,   453,   257,     7,     0,    12,
   256,   456,   257,     7,     0,    12,   256,   456,   257,   258,
   450,   259,     7,     0,     0,   448,   293,     5,     0,   448,
   293,     5,   234,   450,     0,   448,   293,     5,   234,     6,
     0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
     0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
     0,    45,     0,    46,     0,    47,     0,    48,     0,    49,
     0,    50,     0,    51,     0,    52,     0,    53,     0,    54,
     0,   456,     0,   451,     0,   256,   450,   257,     0,   248,
   450,     0,   253,   450,     0,   450,   248,   450,     0,   450,
   247,   450,     0,   450,   249,   450,     0,   450,   250,   450,
     0,   450,   251,   450,     0,   450,   255,   450,     0,   450,
   241,   450,     0,   450,   243,   450,     0,   450,   242,   450,
     0,   450,   244,   450,     0,   450,   238,   450,     0,   450,
   239,   450,     0,   450,   237,   450,     0,   450,   236,   450,
     0,    35,   258,   450,   259,     0,    36,   258,   450,   259,
     0,    37,   258,   450,   259,     0,    38,   258,   450,   259,
     0,    39,   258,   450,   259,     0,    40,   258,   450,   259,
     0,    41,   258,   450,   259,     0,    42,   258,   450,   259,
     0,    43,   258,   450,   259,     0,    44,   258,   450,   259,
     0,    45,   258,   450,   266,   450,   259,     0,    46,   258,
   450,   259,     0,    47,   258,   450,   259,     0,    48,   258,
   450,   259,     0,    49,   258,   450,   259,     0,    50,   258,
   450,   259,     0,    51,   258,   450,   259,     0,    52,   258,
   450,   266,   450,   259,     0,    53,   258,   450,   266,   450,
   259,     0,    54,   258,   450,   266,   450,   259,     0,   450,
   235,   450,     8,   450,     0,   450,   261,     0,     4,     0,
     3,     0,    30,     0,    31,     0,    32,     0,    33,     0,
    34,     0,   456,     0,     0,   450,     0,   454,     0,   264,
   453,   265,     0,   450,     0,   454,     0,   453,   266,   450,
     0,   453,   266,   454,     0,   450,     8,   450,     0,   450,
     8,   450,     8,   450,     0,     5,   264,   265,     0,     5,
   264,   453,   265,     0,    24,   258,     5,   259,     0,    25,
   258,     5,   266,     5,   259,     0,    26,   258,   450,   266,
   450,   266,   450,   259,     0,    27,   258,   450,   266,   450,
   266,   450,   259,     0,     5,   268,   264,   450,   265,     0,
   455,   268,   264,   450,   265,     0,     5,     0,   455,     0,
     6,     0,   456,     0,   458,     0,    10,   256,   457,   257,
     0,    10,   256,   457,   266,   453,   257,     0,   233,     0,
     9,   258,   457,   266,   457,   259,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   339,   356,   376,   379,   382,   385,   388,   389,   390,   391,
   392,   393,   394,   395,   396,   398,   400,   402,   407,   416,
   419,   421,   423,   425,   427,   429,   431,   433,   435,   437,
   439,   441,   443,   445,   447,   449,   451,   453,   455,   458,
   466,   480,   483,   487,   492,   498,   504,   506,   508,   511,
   513,   516,   528,   535,   543,   554,   562,   571,   578,   593,
   623,   628,   639,   642,   646,   651,   654,   670,   683,   692,
   697,   704,   711,   720,   728,   735,   746,   755,   763,   777,
   790,   825,   829,   839,   856,   856,   859,   865,   868,   872,
   881,   884,   887,   891,   911,   955,   957,   961,   964,   981,
   990,   997,  1000,  1004,  1010,  1016,  1020,  1025,  1030,  1036,
  1043,  1047,  1060,  1075,  1089,  1095,  1101,  1107,  1113,  1119,
  1125,  1131,  1137,  1143,  1149,  1155,  1161,  1167,  1173,  1179,
  1185,  1192,  1198,  1200,  1209,  1213,  1219,  1293,  1327,  1336,
  1348,  1350,  1362,  1364,  1376,  1378,  1392,  1404,  1410,  1416,
  1418,  1447,  1473,  1486,  1492,  1499,  1505,  1512,  1519,  1529,
  1532,  1533,  1536,  1539,  1542,  1547,  1550,  1563,  1570,  1575,
  1580,  1584,  1591,  1596,  1601,  1606,  1612,  1616,  1621,  1624,
  1660,  1668,  1673,  1682,  1686,  1695,  1698,  1703,  1708,  1713,
  1721,  1725,  1737,  1747,  1752,  1757,  1762,  1774,  1778,  1828,
  1831,  1834,  1837,  1840,  1849,  1856,  1859,  1866,  1868,  1871,
  1880,  1884,  1893,  1901,  1910,  1913,  1929,  1936,  1941,  1948,
  1958,  1962,  1974,  1979,  1985,  1990,  1998,  2006,  2015,  2033,
  2042,  2050,  2058,  2068,  2078,  2088,  2106,  2114,  2117,  2124,
  2126,  2130,  2138,  2140,  2144,  2153,  2161,  2170,  2173,  2176,
  2179,  2184,  2192,  2209,  2216,  2233,  2237,  2242,  2247,  2252,
  2266,  2286,  2291,  2296,  2301,  2330,  2334,  2339,  2349,  2411,
  2419,  2426,  2433,  2437,  2446,  2449,  2454,  2472,  2477,  2481,
  2498,  2512,  2517,  2524,  2537,  2545,  2551,  2558,  2566,  2570,
  2579,  2590,  2602,  2609,  2646,  2653,  2665,  2669,  2704,  2707,
  2710,  2723,  2730,  2733,  2740,  2742,  2746,  2753,  2757,  2766,
  2774,  2784,  2786,  2791,  2797,  2802,  2806,  2825,  2829,  2834,
  2838,  2841,  2851,  2855,  2863,  2887,  2892,  2898,  3209,  3214,
  3223,  3232,  3241,  3246,  3249,  3287,  3294,  3299,  3304,  3311,
  3316,  3319,  3322,  3331,  3339,  3342,  3354,  3364,  3376,  3385,
  3388,  3392,  3394,  3396,  3402,  3423,  3427,  3438,  3516,  3570,
  3575,  3584,  3593,  3598,  3607,  3616,  3633,  3637,  3652,  3661,
  3715,  3731,  3734,  3735,  3736,  3737,  3738,  3739,  3740,  3744,
  3767,  3789,  3796,  3799,  3806,  3808,  3812,  3820,  3824,  3833,
  3841,  3844,  3846,  3849,  3853,  3859,  3864,  3869,  3876,  3892,
  3896,  3901,  3910,  3913,  3918,  3923,  3928,  3933,  3938,  3942,
  3953,  3958,  3963,  3973,  3985,  3989,  3994,  4005,  4014,  4023,
  4049,  4056,  4062,  4068,  4074,  4082,  4104,  4111,  4117,  4128,
  4139,  4152,  4167,  4182,  4197,  4217,  4238,  4250,  4270,  4287,
  4306,  4327,  4341,  4355,  4362,  4396,  4409,  4423,  4436,  4449,
  4456,  4458,  4465,  4467,  4478,  4490,  4500,  4508,  4521,  4534,
  4548,  4558,  4568,  4582,  4596,  4614,  4633,  4644,  4659,  4674,
  4689,  4704,  4719,  4729,  4735,  4745,  4751,  4754,  4758,  4768,
  4782,  4794,  4798,  4804,  4808,  4812,  4817,  4826,  4839,  4843,
  4849,  4853,  4857,  4861,  4866,  4875,  4887,  4890,  4896,  4900,
  4904,  4908,  4917,  4932,  4935,  4941,  4945,  4949,  4954,  4964,
  4970,  4976,  4985,  4989,  4993,  5007,  5010,  5022,  5051,  5054,
  5057,  5065,  5081,  5089,  5092,  5099,  5101,  5104,  5114,  5117,
  5125,  5133,  5146,  5151,  5156,  5160,  5163,  5165,  5170,  5177,
  5181,  5185,  5190,  5196,  5202,  5215,  5226,  5229,  5237,  5265,
  5276,  5281,  5290,  5306,  5314,  5317,  5322,  5324,  5327,  5336,
  5339,  5347,  5359,  5370,  5375,  5380,  5398,  5407,  5411,  5416,
  5426,  5433,  5438,  5447,  5456,  5465,  5471,  5476,  5483,  5497,
  5519,  5522,  5523,  5524,  5527,  5531,  5535,  5543,  5550,  5557,
  5581,  5588,  5600,  5613,  5633,  5659,  5692,  5712,  5745,  5748,
  5763,  5777,  5791,  5795,  5799,  5803,  5807,  5817,  5822,  5827,
  5847,  5851,  5858,  5868,  5877,  5886,  5893,  5901,  5905,  5914,
  5918,  5922,  5930,  5936,  5940,  5948,  5955,  5963,  5970,  5978,
  5985,  5993,  5997,  6005,  6012,  6060,  6077,  6093,  6113,  6133,
  6171,  6175,  6186,  6190,  6205,  6211,  6217,  6223,  6239,  6244,
  6260,  6265,  6277,  6287,  6303,  6306,  6312,  6318,  6329,  6331,
  6332,  6333,  6334,  6335,  6336,  6337,  6338,  6339,  6340,  6341,
  6342,  6343,  6344,  6345,  6346,  6347,  6348,  6349,  6350,  6353,
  6355,  6356,  6357,  6358,  6359,  6360,  6361,  6362,  6363,  6364,
  6365,  6366,  6367,  6368,  6369,  6370,  6371,  6372,  6373,  6374,
  6375,  6376,  6377,  6378,  6379,  6380,  6381,  6382,  6383,  6384,
  6385,  6386,  6387,  6388,  6389,  6390,  6391,  6393,  6395,  6398,
  6401,  6402,  6403,  6404,  6405,  6406,  6407,  6423,  6428,  6434,
  6437,  6442,  6450,  6453,  6456,  6466,  6474,  6485,  6501,  6523,
  6538,  6576,  6584,  6594,  6604,  6613,  6618,  6623,  6628,  6643,
  6648,  6653,  6672,  6681
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
"tWithArgument","tFile","tDepth","tDimension","tComma","tTimeStep","tHarmonicToTime",
"tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget","tSort","tIso",
"tNoNewLine","tDecomposeInSimplex","tChangeOfValues","tTimeLegend","tFrequencyLegend",
"tEigenvalueLegend","tEvaluationPoints","tStore","tLastTimeStepOnly","tStr",
"tDate","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'",
"tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'",
"'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['",
"']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","'@'","'~'","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","Group","MovingBand2DGroup",
"@4","@5","ReducedGroupRHS","@6","GroupRHS","GroupRHS_MultipleIndex","FunctionForGroup",
"ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup","ListOfRegion",
"RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex",
"Index","Functions","Function","DefineFunctions","Expression","@7","ListOfExpression",
"RecursiveListOfExpression","WholeQuantityExpression","@8","WholeQuantity","@9",
"@10","WholeQuantity_Single","@11","@12","@13","@14","ArgumentsForFunction",
"RecursiveListOfQuantity","ParametersForFunction","JacobianMethods","JacobianMethod",
"JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods",
"IntegrationMethod","IntegrationMethodTerm","IntegrationCases","IntegrationCase",
"IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@15","@16","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@17","@18","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@19","@20","GlobalTerm","GlobalTermTerm","@21","@22","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@23","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@24","@25","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@26","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@27","PostSubOperations","@28","PostSubOperation","@29","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Loop","Affectation","DefineConstants","NameForFunction","FExpr",
"OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","StringIndex","String__Index",
"CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   270,   269,   271,   272,   271,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   274,
   274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
   274,   274,   274,   274,   274,   274,   274,   274,   274,   275,
   274,   276,   276,   277,   277,   277,   277,   277,   277,   277,
   277,   279,   280,   278,   282,   281,   281,   283,   283,   284,
   285,   285,   286,   286,   287,   287,   287,   288,   289,   289,
   290,   290,   290,   291,   291,   291,   291,   291,   291,   291,
   291,   292,   292,   292,   293,   293,   294,   295,   295,   296,
   297,   297,   298,   298,   298,   298,   298,   299,   299,   300,
   300,   301,   300,   300,   302,   302,   303,   303,   305,   304,
   306,   307,   308,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   309,   309,   309,   309,   309,   309,
   310,   309,   311,   309,   312,   309,   309,   309,   309,   313,
   309,   309,   309,   309,   309,   309,   309,   309,   309,   314,
   314,   314,   315,   315,   316,   316,   316,   317,   317,   318,
   318,   319,   319,   320,   320,   321,   321,   322,   322,   322,
   323,   323,   324,   324,   325,   325,   325,   326,   326,   327,
   327,   328,   328,   328,   329,   329,   330,   330,   331,   331,
   331,   331,   331,   331,   332,   332,   333,   333,   333,   334,
   334,   335,   335,   335,   335,   335,   336,   336,   336,   337,
   337,   338,   338,   338,   338,   338,   338,   338,   338,   338,
   338,   338,   338,   338,   338,   338,   339,   339,   340,   340,
   340,   341,   341,   341,   342,   342,   342,   342,   342,   342,
   342,   343,   343,   343,   344,   344,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   346,   347,   348,   346,   349,
   349,   350,   350,   351,   351,   351,   352,   352,   353,   353,
   354,   354,   355,   355,   356,   356,   356,   357,   357,   358,
   358,   358,   359,   359,   359,   360,   360,   361,   361,   361,
   361,   362,   362,   363,   363,   363,   364,   364,   365,   365,
   365,   365,   365,   366,   366,   366,   367,   367,   368,   368,
   368,   368,   368,   369,   368,   368,   370,   368,   368,   368,
   368,   368,   368,   371,   371,   372,   372,   372,   372,   373,
   373,   373,   373,   374,   374,   375,   375,   375,   376,   376,
   377,   377,   377,   377,   378,   378,   380,   381,   379,   379,
   379,   379,   379,   379,   379,   382,   382,   383,   384,   385,
   383,   386,   386,   386,   386,   386,   386,   386,   386,   387,
   387,   388,   388,   389,   389,   389,   390,   390,   391,   391,
   391,   392,   391,   391,   393,   393,   393,   393,   394,   394,
   395,   395,   395,   395,   395,   395,   395,   395,   395,   396,
   396,   397,   397,   398,   398,   399,   399,   400,   400,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   402,
   401,   403,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   404,   404,   405,   405,   406,   406,   406,
   407,   407,   408,   408,   408,   408,   408,   409,   409,   410,
   410,   410,   410,   410,   410,   411,   411,   412,   412,   412,
   412,   412,   413,   413,   414,   414,   414,   414,   414,   414,
   414,   414,   415,   415,   416,   416,   417,   417,   417,   417,
   417,   417,   418,   418,   419,   419,   419,   420,   420,   421,
   421,   421,   421,   421,   422,   422,   422,   422,   423,   423,
   424,   424,   425,   425,   425,   426,   426,   428,   427,   427,
   427,   427,   427,   429,   429,   430,   430,   430,   431,   431,
   432,   432,   432,   432,   432,   434,   433,   435,   436,   435,
   437,   437,   437,   437,   437,   438,   437,   437,   439,   439,
   440,   440,   440,   440,   441,   441,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   443,   443,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   445,   445,   446,   446,   446,   446,   446,
   446,   446,   447,   447,   447,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   448,   448,   448,   448,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   451,
   451,   451,   451,   451,   451,   451,   451,   452,   452,   452,
   452,   453,   453,   453,   453,   454,   454,   454,   454,   454,
   454,   454,   454,   455,   455,   456,   456,   457,   457,   457,
   457,   457,   457,   458
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     2,     4,     5,     5,     5,     1,     5,     1,
     1,     0,     0,    18,     0,     6,     2,     1,     1,     2,
     1,     1,     1,     1,     0,     3,     3,     1,     1,     3,
     0,     3,     4,     1,     3,     3,     3,     5,     5,     7,
     1,     0,     3,     6,     0,     1,     4,     0,     2,     3,
     0,     2,     5,     6,     7,     1,     1,     0,     3,     4,
     4,     0,     2,     3,     0,     3,     1,     3,     0,     2,
     1,     0,     0,     7,     3,     3,     6,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     2,     2,     2,     3,     1,     3,     2,     1,     2,
     0,     5,     0,     7,     0,    11,     9,     4,     4,     0,
     7,     6,     2,     2,     2,     2,     3,     2,     3,     3,
     2,     3,     1,     3,     0,     3,     6,     0,     4,     0,
     2,     3,     4,     0,     4,     0,     2,     3,     3,     4,
     0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
     2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     0,     2,     3,     1,     1,     0,
     2,     3,     4,     3,     4,     5,     0,     4,     2,     0,
     2,     3,     3,     3,     3,     3,     3,     7,     3,     3,
     3,     3,     3,     7,     7,     7,     0,     2,     3,     1,
     1,     0,     2,     2,     3,     4,     3,     4,     4,     4,
     4,     0,     4,     2,     0,     2,     3,     3,     4,     4,
     7,     3,     3,     3,     3,     0,     0,     0,    18,     0,
     4,     0,     2,     3,     3,     3,     1,     3,     0,     3,
     1,     3,     0,     3,     0,     4,     2,     0,     2,     3,
     3,     3,     0,     4,     2,     0,     2,     3,     3,     3,
     3,     0,     2,     3,     1,     1,     0,     2,     3,     4,
     3,     4,     4,     0,     4,     2,     0,     2,     3,     3,
     3,     3,     3,     0,     5,     3,     0,     5,     3,     3,
     3,     3,     3,     0,     3,     0,     2,     2,     2,     4,
     4,     4,     4,     0,     2,     3,     3,     3,     0,     2,
     3,     3,     3,     3,     0,     2,     0,     0,     9,     3,
     3,     3,     2,     3,     5,     0,     2,     3,     0,     0,
     9,     0,     1,     1,     1,     1,     1,     1,     1,     4,
     3,     0,     2,     3,     1,     1,     0,     2,     3,     4,
     4,     0,     5,     1,     0,     4,     2,     2,     0,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
     3,     0,     3,     1,     3,     0,     3,     0,     2,     3,
     3,     4,     4,     4,     4,     5,     5,     2,     7,    11,
     7,    13,    11,     9,     7,     7,     7,     9,     9,     9,
    11,    11,    11,     5,    17,    13,    15,    11,    13,     0,
     7,     0,     7,     7,    11,     5,     5,     9,     9,     9,
     5,     5,    11,     9,    14,    14,     7,    12,    10,     7,
     7,     7,     1,     1,     1,     0,     2,     3,     3,     2,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     4,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     1,     0,     2,     3,
     4,     3,     3,     4,     0,     4,     2,     2,     0,     2,
     3,     4,     0,     5,     5,     0,     2,     0,     6,     3,
     3,     3,     3,     0,     2,     3,     1,     1,     0,     2,
     3,     3,     3,     3,     4,     0,     8,     0,     0,     3,
     7,     7,     8,    11,     6,     0,    10,     1,     3,     6,
     1,     1,     1,     1,     0,     3,     1,     2,     2,    12,
     2,    15,     4,    12,    17,    22,    12,     0,     2,     3,
     4,     4,     3,     2,     2,     3,     3,     3,     3,     3,
     2,     3,     3,     3,     3,     3,     3,     3,     5,     2,
     2,     3,     9,     3,     2,     9,     2,     9,     2,     9,
     5,     3,     2,     0,     2,     6,     8,     8,    10,     1,
     4,     1,     5,     4,     4,     7,     4,     7,     5,     3,
     3,     7,     5,     8,     0,     3,     5,     5,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     4,     4,     4,
     4,     4,     4,     4,     4,     4,     4,     6,     4,     4,
     4,     4,     4,     4,     6,     6,     6,     5,     2,     1,
     1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
     3,     1,     1,     3,     3,     3,     5,     3,     4,     4,
     6,     8,     8,     5,     5,     1,     1,     1,     1,     1,
     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   746,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   747,     0,     0,     0,
     0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
    27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   748,     0,     0,   753,   749,    18,   750,
   655,    42,   205,   168,   181,   237,    91,   302,   382,   523,
   554,     0,     0,   640,     0,   642,     0,     0,     0,     0,
    41,   578,     0,   728,     0,     0,   651,   650,     0,    26,
    25,    24,    22,    23,    21,    39,    29,    31,    32,    33,
    34,    30,    35,    36,    37,    38,     0,     0,    85,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   721,   720,
   746,     0,     0,     0,     0,     0,     0,   722,   723,   724,
   725,   726,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   729,   680,     0,
   730,   727,     0,     0,     0,     0,     0,     0,     0,     0,
    86,     0,   746,     0,     6,    43,    48,    51,    50,     0,
   210,     8,   206,   209,   208,   170,     9,   183,    10,   242,
    11,   238,   241,   240,   746,     0,     7,    92,    97,    96,
   307,    12,   303,   306,   305,   387,    13,   383,   386,   385,
   528,    14,   524,   527,   526,   559,    15,   555,   558,   557,
   566,     0,     0,     0,     0,   585,     0,     0,   746,    61,
     0,    58,   576,     0,    59,   598,     0,     0,   645,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   682,   683,     0,   732,     0,
   733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   719,   644,   647,
   744,   649,     0,   653,     0,     0,   751,     0,   643,   656,
     0,     0,     0,    82,   728,     0,     0,     0,     0,     0,
     0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
   641,   587,     0,     0,     0,     0,     0,     0,     0,     0,
   598,     0,     0,   102,   598,    74,     0,    71,     0,    57,
    69,    81,     0,     0,     0,   745,   738,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   681,   731,     0,   736,     0,   697,
   696,   694,   695,   690,   692,   691,   693,   685,   684,   686,
   687,   688,   689,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    85,   746,     0,     0,     0,     0,     0,     0,
   207,   211,     0,     0,   169,   171,     0,   102,     0,   182,
   184,     0,     0,     0,     0,     0,     0,   239,   243,   244,
     0,     0,    85,     0,     0,     0,     0,   304,   308,     0,
     0,   392,   384,   388,   394,     0,     0,     0,     0,   525,
   529,     0,     0,     0,     0,     0,   556,   560,   568,     0,
     0,   588,   589,   102,   591,     0,     0,     0,     0,     0,
     0,     0,   583,   584,   581,   582,   579,     0,     0,     0,
     0,     0,   598,   109,     0,     0,     0,    85,     0,     0,
    64,    55,    63,     0,     0,   599,   739,   740,     0,     0,
     0,     0,   698,   699,   700,   701,   702,   703,   704,   705,
   706,   707,     0,   709,   710,   711,   712,   713,   714,     0,
     0,     0,     0,   734,   735,     0,     0,   652,     0,   754,
   752,   658,   657,     0,    90,    62,     0,     0,     0,     0,
    44,     0,     0,     0,   217,     0,   746,     0,   174,     0,
   188,     0,     0,   293,     0,   746,     0,   252,   270,   285,
   102,     0,     0,     0,     0,   746,     0,   314,   336,   746,
     0,   395,     0,   746,     0,   535,     0,     0,     0,   568,
     0,     0,     0,   569,     0,     0,   636,     0,     0,     0,
     0,     0,     0,     0,     0,   586,   585,     0,     0,     0,
     0,     0,   103,     0,     0,    77,    75,    70,     0,    76,
     0,    85,   575,   728,   728,     0,     0,     0,     0,     0,
   611,   728,     0,   634,   634,   634,   604,   605,     0,     0,
     0,   620,   621,   105,   625,   627,   629,     0,     0,   633,
     0,     0,     0,   648,     0,     0,     0,     0,   646,   737,
   718,   654,    87,    46,    45,    47,    83,    49,     0,   217,
     0,   214,     0,     0,   212,     0,   172,     0,   186,   185,
     0,   247,     0,   245,     0,     0,     0,     0,   102,    93,
    99,   311,     0,   309,     0,     0,     0,   389,     0,   418,
     0,   530,     0,   532,   533,   561,   569,   562,   564,   563,
   567,     0,     0,     0,     0,   102,     0,   593,     0,     0,
     0,   571,     0,     0,     0,     0,   104,     0,   746,   659,
   660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
   670,   671,   672,   673,   674,   675,   676,   677,   678,     0,
   150,     0,     0,     0,     0,   141,   143,     0,     0,     0,
     0,     0,     0,     0,     0,   110,   111,   139,     0,   136,
   727,   572,     0,     0,     0,    72,   598,     0,     0,   617,
   622,   102,   614,     0,     0,   600,   603,   612,   613,   606,
   607,   610,   608,   609,   616,   615,     0,   618,   102,   624,
     0,     0,     0,     0,   632,   741,     0,     0,   708,   715,
   716,   717,     0,    52,     0,   220,   215,   219,   213,   176,
   173,   190,   187,   296,   251,   295,   246,   255,   248,   254,
   272,   249,   288,   250,   287,    94,     0,   310,   317,   312,
   316,     0,     0,     0,     0,   313,   337,   339,   338,   390,
   399,   391,   397,   398,     0,   531,   539,   534,   538,   537,
   565,   570,     0,   638,   637,     0,     0,     0,     0,     0,
     0,   580,   100,   101,   598,   573,   138,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   133,   132,   134,     0,
   158,   156,   153,   155,   154,   746,     0,   112,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   140,   165,    79,
    78,    73,     0,    56,    68,     0,     0,     0,   601,   602,
   635,     0,   107,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
    95,     0,   355,   355,   366,   344,     0,     0,     0,   102,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   450,   452,   393,   419,   473,     0,     0,
     0,   102,     0,     0,     0,     0,     0,     0,   109,     0,
     0,     0,     0,   109,   109,     0,   135,     0,   381,     0,
   131,   130,   127,   128,   129,   123,   125,   124,   126,   119,
   120,   115,   118,   121,   116,   122,   157,   159,   161,     0,
   163,     0,     0,   137,     0,     0,    67,    66,   102,   619,
   106,   102,     0,     0,     0,   631,   742,   743,    84,     0,
     0,     0,     0,     0,   102,   102,   102,   102,     0,     0,
     0,   102,   218,   221,     0,     0,   175,   177,     0,     0,
     0,   189,   191,     0,     0,     0,     0,   294,   297,     0,
     0,     0,     0,   105,   105,     0,     0,   253,   256,     0,
     0,     0,   271,   273,     0,     0,     0,   286,   289,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   728,   327,
   315,   318,   372,   372,   372,     0,     0,     0,     0,     0,
   728,     0,     0,     0,   396,   400,   409,     0,     0,   102,
   102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   428,   102,     0,   481,     0,   488,     0,   496,   503,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   536,   540,   639,     0,     0,     0,     0,     0,
     0,     0,   148,     0,   149,     0,   145,     0,     0,     0,
   109,   380,     0,   160,   162,     0,     0,     0,    80,   577,
     0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
   102,     0,   102,     0,     0,     0,     0,     0,     0,   102,
     0,     0,     0,   165,   195,     0,     0,     0,     0,     0,
     0,     0,     0,   266,     0,     0,     0,     0,     0,     0,
   281,   283,     0,   277,   279,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   324,     0,     0,     0,
     0,   109,     0,     0,     0,     0,   373,   374,   375,   376,
   377,   378,   379,     0,     0,   340,   356,     0,   341,     0,
   342,   367,     0,     0,     0,   349,   343,   345,     0,     0,
   412,     0,   410,     0,     0,     0,   416,     0,   414,     0,
     0,   420,     0,     0,   421,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   105,   105,   543,     0,     0,     0,     0,     0,     0,     0,
   574,     0,     0,   109,     0,   142,     0,     0,   113,   164,
     0,   166,   102,     0,     0,     0,    53,   223,   224,   229,
   230,     0,   233,     0,   232,   226,   225,    85,   227,   222,
     0,   231,   179,   178,     0,     0,   192,   193,   298,   299,
   300,   301,   257,   258,     0,     0,     0,    85,   262,   263,
   264,   265,   274,    85,   276,    85,   275,   291,   290,   292,
   332,   330,   331,   322,   320,   321,   319,   334,   326,   333,
   329,   323,     0,     0,     0,     0,     0,     0,   363,   357,
     0,   369,     0,     0,     0,   402,   401,    85,   403,   404,
   407,   408,    85,   405,   406,     0,     0,     0,   102,     0,
     0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
   102,     0,     0,   102,   422,   482,     0,     0,   102,     0,
     0,     0,     0,   423,   489,     0,     0,     0,     0,     0,
   102,   424,   497,     0,     0,     0,     0,     0,     0,     0,
     0,   425,   504,   102,     0,   102,   728,   728,   728,     0,
   728,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   474,   476,   475,   476,     0,   541,     0,   728,     0,
     0,     0,     0,     0,   117,     0,     0,     0,   152,     0,
     0,     0,     0,     0,     0,     0,   102,   102,     0,   102,
   180,   197,   194,   259,     0,   260,     0,   282,     0,   278,
     0,     0,     0,     0,   361,   362,   364,     0,   360,   109,
   368,   109,   346,   347,     0,     0,     0,     0,   348,   350,
   411,     0,   415,     0,   426,   418,   427,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   444,     0,   418,     0,
     0,     0,     0,     0,   418,     0,     0,     0,     0,     0,
     0,     0,     0,   418,     0,     0,     0,     0,     0,   418,
   418,     0,     0,   513,     0,   457,     0,     0,     0,     0,
     0,     0,   461,   462,     0,     0,     0,     0,     0,     0,
     0,   456,     0,     0,     0,     0,   542,     0,     0,     0,
     0,     0,     0,   151,     0,     0,   144,   114,     0,   623,
   626,   628,   630,     0,     0,     0,     0,     0,     0,     0,
     0,   284,   280,     0,   325,   328,     0,   358,   370,     0,
     0,     0,     0,   413,   417,     0,     0,   728,     0,   728,
     0,     0,     0,     0,     0,   102,     0,   485,   483,   484,
   486,   102,     0,   492,   490,   491,   493,   494,   102,   501,
   499,     0,   498,   500,   508,   507,   509,     0,     0,   505,
   506,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   728,
   477,     0,   546,   546,     0,   728,     0,     0,     0,     0,
     0,     0,   167,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   196,   198,     0,     0,   335,   365,
     0,     0,   351,   352,   353,   354,   429,   431,     0,     0,
     0,     0,     0,     0,   437,     0,     0,   487,     0,   495,
     0,   502,   511,   512,   515,   510,   454,     0,     0,   435,
   436,     0,     0,     0,     0,     0,   467,   471,   472,     0,
   470,     0,   451,     0,   728,   480,   453,   372,   372,   597,
     0,   590,   594,     0,     0,     0,   147,     0,   236,   235,
   228,   234,     0,     0,     0,     0,     0,     0,     0,   261,
   109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   102,     0,     0,     0,     0,   102,     0,   102,     0,     0,
     0,     0,     0,     0,   102,     0,   478,   479,     0,     0,
     0,     0,   545,     0,   547,   544,   728,     0,     0,     0,
     0,   199,   200,   201,   202,   203,   204,     0,     0,     0,
   418,   439,   440,     0,     0,     0,     0,   438,     0,     0,
   418,     0,     0,     0,     0,   102,     0,     0,   514,   516,
     0,   434,     0,   458,   459,   460,     0,     0,   464,     0,
     0,     0,     0,     0,     0,     0,   548,     0,     0,     0,
   146,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   102,     0,     0,     0,   469,     0,   552,   553,
   550,   551,   109,   592,     0,     0,     0,   267,   359,   371,
   430,   441,   442,   443,     0,   418,     0,   448,   418,   522,
   517,   520,   521,   518,   519,   455,   433,     0,   418,   418,
   463,     0,     0,     0,     0,    54,     0,     0,     0,     0,
     0,     0,     0,     0,   468,     0,   595,     0,     0,     0,
   446,   418,   449,   432,     0,     0,   549,     0,     0,    88,
     0,     0,   465,   466,     0,   268,     0,    60,     0,   447,
     0,     0,    89,     0,     0,     0,   445,   596,    88,     0,
     0,   269,     0,     0,     0
};

static const short yydefgoto[] = {  2043,
     1,     2,     3,    22,    23,    24,   110,   186,   187,   942,
  1546,   242,   622,   243,  2019,   244,   502,   778,   927,   350,
   498,   351,   413,   182,   312,  2028,   313,   115,   208,   443,
   493,   494,  1522,   934,   613,   614,   766,  1020,  1540,   767,
   884,   885,  1364,   879,   918,  1042,  1044,   112,   319,   426,
   676,   945,  1078,   113,   320,   431,   678,   946,  1083,  1396,
  1669,  1766,   111,   193,   318,   422,   671,   944,  1074,   114,
   202,   321,   439,   685,   948,  1099,  1407,  1997,  2032,   686,
   949,  1104,  1256,  1416,  1253,  1414,   687,   950,  1109,   681,
   947,  1089,   116,   213,   324,   449,   695,   952,  1122,  1428,
  1272,  1563,   696,   847,  1126,  1298,  1445,  1580,  1123,  1287,
  1570,  1771,  1125,  1292,  1572,  1772,  1288,   768,   117,   218,
   325,   454,   583,   699,   957,  1136,  1302,  1448,  1308,  1453,
   855,   997,  1179,  1180,  1523,  1643,  1741,  1327,  1476,  1329,
  1485,  1331,  1493,  1332,  1503,  1722,  1855,  1910,   118,   223,
   326,   461,   703,   999,  1184,  1526,  1818,  1875,  1963,   119,
   228,   327,   468,    25,   328,   594,   712,    81,   353,   235,
   488,   343,   341,   355,   506,   792,   998,    26,   109,   769,
   279,   169,   170,   280,   281,    27,   172,    59,    60
};

static const short yypact[] = {-32768,
-32768,    71,  4612,  -166,   104,  -138,   834,   149,  2120,   130,
   -55,   -58,   -53,   -20,   -12,    -9,    53,    56,    90,   103,
    42,-32768,-32768,   534,-32768,-32768,    -2,   161,   134,   434,
   362,   438,   443,   453,-32768,   513,   519,   525,   536,   548,
-32768,   558,-32768,   563,   585,   596,   599,   619,   629,   631,
   637,   664,   674,-32768,   192,   285,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   384,    82,-32768,   338,-32768,   421,   437,   439,   445,
-32768,-32768,   359,  2503,  4242,   -47,-32768,-32768,   556,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   130,   130,   123,   114,
    50,   -76,   242,   158,   179,   228,   248,   344,   363,   443,
   638,  4242,  4242,   443,   742,    51,   785,  4242,-32768,-32768,
  -103,   786,   537,   543,   557,   564,   586,-32768,-32768,-32768,
-32768,-32768,   590,   592,   598,   613,   626,   634,   659,   663,
   677,   681,   693,   726,   739,   748,   754,   758,   768,   774,
   782,   783,   788,  4242,  4242,  4242,  4137,  4078,-32768,   819,
-32768,-32768,   833,  2587,   853,  4137,    92,   607,   -32,   868,
-32768,   924,   -42,   790,-32768,-32768,-32768,-32768,-32768,   270,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -229,   791,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   694,  4106,  5662,  1104,   795,   789,  1104,  -101,-32768,
    73,-32768,-32768,   796,-32768,-32768,  5197,   616,-32768,  1051,
  1057,  4242,  4242,   130,  4242,  4242,  4242,  4242,  4242,  4242,
  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,
  4242,  4242,  4242,  4242,   130,  -155,  -155,  5689,  4078,   511,
-32768,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,  4242,
  4242,  4242,  4242,  4242,  4242,  4242,  4242,-32768,-32768,-32768,
-32768,-32768,    13,-32768,  4242,   130,-32768,  4137,-32768,   830,
  1339,   831,   837,-32768,  2451,   842,  4242,   423,   324,   407,
   738,    22,-32768,   711,   549,   671,   835,   804,  4242,  4242,
-32768,-32768,    51,    51,    21,   805,   821,   823,   828,   832,
-32768,    51,   288,   121,-32768,  1075,  4242,-32768,  4137,-32768,
-32768,-32768,   836,    77,   127,-32768,-32768,   524,   838,   840,
  1659,  3774,   839,  5716,  5743,  5770,  5797,  5824,  5851,  5878,
  5905,  5932,  5959,  4133,  5986,  6013,  6040,  6067,  6094,  6121,
  4226,  4477,  4498,   845,-32768,-32768,  4137,  4184,  4289,  2479,
  2323,  1943,  1943,   949,   949,   949,   949,   318,   318,  -155,
  -155,  -155,  -155,  1100,  6148,   849,   105,  4190,  4242,  5228,
    55,    55,   167,  -183,  1102,    55,  6175,    49,  1105,  1108,
-32768,-32768,   859,  1127,-32768,-32768,   869,   159,  1129,-32768,
-32768,   872,  1132,  1133,   875,   885,   886,-32768,-32768,-32768,
   918,   894,   235,  1149,  1150,   892,   910,-32768,-32768,  1185,
   928,-32768,-32768,-32768,-32768,  1190,   937,   443,   443,-32768,
-32768,   443,   938,   443,   130,  1200,-32768,-32768,-32768,  4310,
  3692,   998,-32768,   159,-32768,   944,  4137,   945,   948,   955,
   287,   961,-32768,-32768,-32768,-32768,-32768,  1216,   966,   967,
   975,   987,-32768,-32768,   315,  4242,  6202,   538,   544,  1107,
-32768,-32768,-32768,  1231,  4442,-32768,-32768,-32768,  1234,  4242,
  4242,  1235,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  4242,-32768,-32768,-32768,-32768,-32768,-32768,  4242,
  4242,  4242,  1237,  4078,-32768,  4242,  4242,-32768,  1238,-32768,
-32768,-32768,  6769,  5259,-32768,-32768,  1239,  1240,  1241,  1236,
-32768,  1242,  1019,   990,-32768,  1248,   430,  1251,-32768,  1253,
-32768,  1254,  1261,-32768,  1266,   430,  1267,-32768,-32768,-32768,
   159,  1046,  1275,  1279,  1278,   430,  1283,-32768,-32768,   430,
  1284,-32768,  1022,   430,  1285,-32768,  1287,  1288,  1289,-32768,
  1290,  1292,  1294,  1048,  4242,  4242,-32768,  1309,  1050,  4137,
   552,  4137,  4137,  4137,  1311,-32768,   795,  4242,  1319,   130,
  1080,   325,-32768,  1997,  1323,  4338,  1329,-32768,     8,-32768,
    51,   346,-32768,  2607,  2607,  1074,  1335,   208,  4242,  4242,
-32768,  2607,  4242,  1336,-32768,-32768,-32768,-32768,  4242,  1341,
  2117,-32768,-32768,  1086,  1088,  1089,  1090,  1092,  1357,-32768,
  1103,  4519,  4567,-32768,  6229,  6256,  6283,  6310,-32768,  6769,
  6769,-32768,-32768,-32768,-32768,-32768,  1097,-32768,  1297,-32768,
   137,-32768,  1106,  1359,-32768,   568,-32768,   602,-32768,-32768,
   370,-32768,  1387,-32768,   573,   615,   582,  1388,   159,-32768,
-32768,-32768,  1389,-32768,   587,    81,  1390,-32768,   485,-32768,
  1391,-32768,   510,-32768,-32768,-32768,  1099,-32768,-32768,-32768,
-32768,   534,  1028,  6337,  1135,   159,   617,-32768,   647,   650,
   667,-32768,  1134,  6364,  1142,  1143,-32768,  1402,   501,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1156,
-32768,  1157,  1163,  1164,  1165,-32768,-32768,  1420,  1997,  1997,
  1997,  1997,  1423,   245,  1427,  6821,  -131,  1176,  1176,-32768,
  1177,-32768,  4242,  4242,    67,-32768,-32768,  1178,    69,-32768,
-32768,   159,-32768,   130,   130,-32768,  6769,  6769,-32768,  6769,
-32768,  1430,  1430,  1430,  6769,-32768,  4137,  6769,   159,-32768,
  4242,  4242,  4242,  4137,-32768,-32768,  4242,  4242,-32768,-32768,
-32768,-32768,  4242,-32768,   661,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1431,-32768,-32768,-32768,
-32768,  1180,  1186,  1192,  1196,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2728,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  4242,-32768,-32768,  4242,  1195,  1199,  1213,  1221,
  1222,-32768,-32768,-32768,-32768,-32768,-32768,  1224,  1233,  1224,
  1997,  1484,  1485,  1243,  1247,  1249,  1244,  1244,  1244,  4013,
-32768,-32768,-32768,-32768,-32768,     5,  1230,-32768,  1997,  1997,
  1997,  1997,  1997,  1997,  1997,  1997,  1997,  1997,  1997,  1997,
  1997,  1997,  1997,  1997,  1493,  4242,  1726,-32768,  1245,  6769,
  4365,-32768,   351,-32768,-32768,   443,    73,  1252,-32768,-32768,
-32768,   672,-32768,   678,  4588,  4609,  4630,   682,  6391,  6418,
  5290,  1250,-32768,  1548,   135,    99,   778,  1082,   178,   151,
-32768,  4370,-32768,-32768,-32768,-32768,   422,    64,    52,   155,
  1255,  1259,  1263,  1264,  1265,  1273,  1286,  1293,  1302,  1490,
  1304,   139,   160,   252,  1246,  1305,  1307,  1308,  1313,  1314,
  1315,  1316,  1318,  1260,  1272,  1320,  1324,  1330,  1331,  1333,
  1281,  1337,  1344,-32768,-32768,-32768,-32768,-32768,    87,  5321,
  4651,   159,  4137,  4137,  4137,  4137,   365,  1310,-32768,  1334,
  2534,  1346,  1338,-32768,-32768,  1348,-32768,  1312,-32768,  1997,
  4163,  2375,  1306,  1306,  1306,   980,   980,   980,   980,   236,
   236,  1244,  1244,  1244,  1244,  1244,-32768,-32768,-32768,  1340,
  6821,   373,  3951,-32768,  4242,  1491,-32768,-32768,   159,-32768,
-32768,   159,  4242,  4242,  4242,-32768,-32768,-32768,-32768,  1258,
    51,    51,    51,    51,   172,   282,   159,   159,  1345,   443,
  1495,   703,-32768,-32768,   133,  1501,-32768,-32768,  1347,  1502,
  1520,-32768,-32768,  1538,    32,  1589,   443,-32768,-32768,  1607,
  1608,  1609,  1351,  1086,  1086,    51,    51,-32768,-32768,  1611,
    72,    78,-32768,-32768,  1621,   443,  1622,-32768,-32768,  1624,
  1628,  1633,    98,   443,   443,  1636,  1637,    51,  2607,-32768,
-32768,-32768,  1986,  2156,  2193,   126,  1638,   443,    79,   130,
  2607,   130,    83,   443,-32768,-32768,-32768,   443,  1634,   159,
   159,  1635,   443,   443,   443,   443,   443,   443,   443,   443,
   443,-32768,   159,  4242,-32768,  4242,-32768,  4242,-32768,-32768,
    51,   130,   443,   443,   443,   443,   443,   443,   443,   443,
   443,   443,   443,   443,   443,   443,  1639,   443,  1393,  1394,
  1381,   443,-32768,-32768,-32768,  4242,  1383,   684,   688,   691,
   697,  1642,-32768,  1380,-32768,  1997,-32768,  1392,  1395,  1406,
-32768,-32768,  1232,-32768,-32768,  1997,  1397,   700,  6769,-32768,
  1412,-32768,  4672,  4693,  4714,    73,  1646,  1650,  1672,  1673,
   159,  1675,   159,  1676,  1677,  1678,  1184,  1679,  1681,   159,
  1682,  1684,  1686,  1245,-32768,  1692,  1697,  1698,  1704,  1705,
  1709,  1710,    14,  1454,  1714,  1715,  1716,  1717,  1718,  1721,
-32768,-32768,  1725,-32768,-32768,  1727,  1729,  1730,  1731,  1733,
  1735,  1736,  1737,  1738,  1739,  1740,-32768,  1742,  1743,  1745,
  1746,-32768,  1749,  1750,  1780,  1463,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    51,  1781,-32768,-32768,  1531,-32768,    51,
-32768,-32768,  1532,  1786,  1797,-32768,-32768,-32768,  1796,  1803,
-32768,  1808,-32768,  1809,  1810,  1812,-32768,  1813,-32768,  1814,
  1563,-32768,  1572,  1577,-32768,  1571,  1579,  1581,  1583,  1584,
  1585,  1587,  1588,  1590,  1598,  4735,     2,  4756,   734,  4777,
   317,   801,  1592,  1600,  1595,  1596,  1597,  1615,  1616,  1617,
  1578,  1610,  1619,  1620,  1623,  1626,  1627,  1649,  1651,  1640,
    84,    84,-32768,  1867,  5352,  1652,  1655,  1658,  1660,  1663,
-32768,    51,  6796,-32768,  4242,-32768,  1884,  1645,-32768,  6821,
    51,-32768,   159,  4242,  4242,  4242,-32768,-32768,-32768,-32768,
-32768,  1662,-32768,  1667,-32768,-32768,-32768,  1668,-32768,-32768,
  1674,-32768,-32768,-32768,  1881,   705,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1931,  1829,  1935,  1668,-32768,-32768,
-32768,-32768,-32768,   708,-32768,   712,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1687,-32768,-32768,
-32768,-32768,  1688,  1939,  1944,  1945,  1947,  1946,-32768,-32768,
  1948,-32768,  1954,  1955,   333,-32768,-32768,   717,-32768,-32768,
-32768,-32768,   723,-32768,-32768,  1956,  1690,  1957,   159,   443,
   443,  4242,  4242,  4242,   443,   159,    51,  1959,  4242,  1706,
   159,  4242,  4242,   159,-32768,-32768,  4242,  1707,   159,  4242,
  4242,  4242,  4242,-32768,-32768,  4242,  4242,  4242,  1708,  4242,
   159,-32768,-32768,  4242,  4242,   443,  1711,  1712,  4242,  4242,
  1719,-32768,-32768,   159,  1961,   159,  2607,  2607,  2607,  4242,
  2607,  1962,  1973,   443,   443,  4242,   443,   443,    51,  1976,
  1984,-32768,-32768,-32768,-32768,    63,-32768,  1732,  2607,  4137,
  1734,  4137,  4137,  1744,-32768,  1748,  4798,  1751,-32768,  1997,
  1752,  1728,  5383,  5414,  5445,  1747,   159,   159,  1184,   159,
-32768,-32768,-32768,-32768,  1989,-32768,  1990,-32768,  1994,-32768,
  1999,   443,  1998,  2001,-32768,-32768,-32768,  1753,-32768,-32768,
-32768,-32768,-32768,-32768,  1224,  1224,  1224,    51,-32768,-32768,
-32768,   443,-32768,   443,-32768,-32768,-32768,  1755,  1754,  1757,
  4819,  4840,  4861,  1759,  1756,  1760,-32768,  4882,-32768,  2009,
  1084,  1169,  2010,  4903,-32768,  2011,  1204,  1291,  1426,  1459,
  4924,  1557,  1591,-32768,  1629,  2012,  1837,  2096,  2014,-32768,
-32768,  2168,  2427,-32768,   414,-32768,  1790,  1800,  1801,  1795,
  4945,  1798,-32768,-32768,  1811,  1816,  6445,  1804,  1824,  1823,
   725,-32768,   418,   424,  1826,  1827,-32768,  4242,  1828,   728,
  4242,   730,   736,-32768,  1834,  4242,-32768,  6821,  1830,-32768,
-32768,-32768,-32768,  1835,  1840,  1842,  1839,  1843,   929,  2055,
  1841,-32768,-32768,  1848,-32768,-32768,  2108,-32768,-32768,  2111,
  2118,  2121,  2122,-32768,-32768,  2782,  2123,  2607,  4242,  2607,
  4242,  4242,   443,  2124,   443,   159,  2836,-32768,-32768,-32768,
-32768,   159,  3021,-32768,-32768,-32768,-32768,-32768,   159,-32768,
-32768,  3075,-32768,-32768,-32768,-32768,-32768,  3129,  3314,-32768,
-32768,   740,  2125,  4242,   159,  2126,  2127,  4242,   130,   130,
  4242,  4242,  2128,  2129,  2135,   130,  2136,  2037,  2137,  2555,
-32768,  2138,-32768,-32768,  5476,  2607,  1859,  5507,  1909,  1882,
  1912,  5538,-32768,    73,  2171,  2172,  2176,  2189,  2192,  4242,
  4242,  4242,  4242,  4242,-32768,-32768,  2088,  2195,-32768,-32768,
  1934,  1940,-32768,-32768,-32768,-32768,  2191,-32768,  1949,  6472,
  1950,  4966,  4987,  1951,-32768,  1963,  1952,-32768,  1964,-32768,
   433,-32768,-32768,-32768,-32768,-32768,-32768,  5008,   504,-32768,
-32768,  6499,  1966,  1969,  5029,  5050,-32768,-32768,-32768,   744,
-32768,   130,-32768,   130,  2607,-32768,-32768,   994,  2143,-32768,
  1967,-32768,-32768,  1941,  4137,  4242,-32768,  1968,-32768,-32768,
-32768,-32768,  2214,  2807,  2861,  3100,  3154,  3393,  2218,-32768,
-32768,  1224,  1971,  2225,  2229,  4242,  4242,  4242,  4242,  2235,
   159,  4242,  1982,  4242,   912,   159,  2240,   159,  2241,  2242,
  2247,  4242,  4242,  2248,   159,   764,-32768,-32768,  2251,  2252,
  2255,    51,-32768,  2004,-32768,-32768,  2607,  4242,   769,  5569,
  4242,-32768,-32768,-32768,-32768,-32768,-32768,  2008,  2015,  2017,
-32768,-32768,-32768,  6526,  6553,  6580,  5071,-32768,  2018,  5092,
-32768,  6607,  2258,  2280,  4242,   159,  2283,    51,-32768,-32768,
  2030,-32768,   514,-32768,-32768,-32768,  6634,  6661,-32768,  2025,
  2284,  2288,  2286,  2287,  2292,  2293,-32768,  2039,  5113,  2040,
-32768,  6688,  2295,  2299,  2301,  3368,  2303,  2306,  2307,  2607,
  2058,  4242,  3422,  2060,  2318,  2321,  3447,  2322,  2329,  2334,
  2335,  2341,   159,  2085,  2086,  2345,-32768,  2090,-32768,-32768,
-32768,-32768,-32768,-32768,  4242,  2089,  2349,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2092,-32768,  6715,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2100,-32768,-32768,
-32768,  2353,  2102,  5600,  4242,-32768,  2300,  4242,  3607,  2099,
  3661,  2357,  3715,  3900,-32768,  2359,-32768,  5134,   443,  5155,
-32768,-32768,-32768,-32768,  2360,  2361,-32768,  4242,  2364,  2113,
  4242,  3954,-32768,-32768,  5176,-32768,  2107,-32768,  6742,-32768,
  4242,  2243,-32768,  2371,  5631,  2374,-32768,-32768,  2113,  2373,
  2119,-32768,  2382,  2385,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,     3,-32768,  -276,-32768,  1301,-32768,-32768,  1327,  -351,
-32768,  -466,-32768,  -401,  -552,   348,-32768,-32768,-32768,-32768,
   518,-32768,  -611,-32768,  -992,-32768,  -613,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1625,-32768,  1154,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1720,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1438,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1094,  -714,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
 -1580,-32768,-32768,-32768,  1041,   870,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   652,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1807,-32768,  1689,-32768,  2273,
-32768,  1792,  2162,  -325,-32768,   402,   113,   -66,-32768,-32768,
   449,  -435,  -589,  -175,   -80,-32768,    -3,   -99,   -46
};


#define	YYLAST		7076


static const short yytable[] = {    28,
   303,    32,   503,   171,   674,  1686,    58,   178,   179,     4,
   346,   550,     4,   683,   877,   481,  1194,    72,  1697,   495,
  1404,  1199,  1200,   693,  1703,   239,   239,   697,   322,    89,
  1293,   701,   800,  1712,   780,   781,   546,   173,    29,  1718,
  1719,   574,   789,   189,   195,   442,     4,   204,   210,   215,
   220,   225,   230,   554,     4,   239,   472,   473,   475,   546,
     5,     6,    73,    74,    75,   482,    76,  1645,     4,   346,
    -2,     4,   358,   925,   -62,   346,  1251,     4,    11,   346,
   248,     4,  1254,     4,    29,     4,   121,     4,     4,   240,
   240,     5,     6,    73,    74,    75,   619,    76,   304,   297,
   240,    29,  1263,    58,    58,   298,   190,    28,     4,    11,
    28,    28,    28,    28,    28,    28,   231,    33,   183,   240,
   236,   236,   245,   240,     5,     6,    73,    74,    75,   915,
    76,   916,   407,   926,     4,    54,    82,   239,    55,    56,
   501,  1470,    11,   489,  1471,   887,   888,   889,   890,    73,
    74,    75,   776,    76,   363,    41,   -62,  1472,  1473,  1474,
   248,  1181,     4,  1008,    29,  1010,    29,   612,     5,     6,
    73,    74,    75,   499,    76,   384,   184,   489,   770,  1646,
  1079,   489,  1182,   205,  1080,  1081,    11,   196,   197,     5,
     6,    73,    74,    75,   489,    76,  1232,   842,   843,   844,
   845,   240,    61,  1075,  1264,    62,   406,    11,  1368,   175,
    63,  1294,     4,    54,  1265,  1076,    55,    56,   176,   490,
   779,   311,   188,   194,   307,    29,   203,   209,   214,   219,
   224,   229,     4,   308,   171,  1295,  1105,   352,     5,     6,
    73,    74,    75,    64,    76,   206,  1106,   892,  1107,   893,
    58,    65,     4,   490,    66,   775,    11,   490,     5,     6,
    73,    74,    75,   347,    76,    83,  1475,  1011,   173,   404,
   490,    58,    29,  1100,   349,  1101,    11,   673,   387,  1433,
   441,   241,   241,  1102,   474,  1021,  1022,  1023,  1024,  1025,
  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
  1036,   601,    58,  1041,   489,    71,   535,   123,   922,  1140,
  1936,   241,   555,   191,   192,   241,    67,   415,   245,    68,
  1943,  1138,   347,   770,   770,   770,   770,  1647,   347,   245,
   245,   245,   347,   349,  1487,  1252,   348,   122,   245,   349,
   348,  1255,  1301,   349,   777,   846,  1307,   799,     4,   305,
   352,  1183,   491,    69,     5,     6,    73,    74,    75,    30,
    76,   541,    57,  1082,    31,   592,    70,     4,    87,   492,
   387,  1536,    11,     5,     6,    73,    74,    75,   185,    76,
   490,   180,    73,    74,    75,   504,    76,   894,   181,  1296,
  1297,    11,   505,   241,    84,  1999,  1154,    85,  2001,  1077,
   816,   817,  1155,   492,  1488,   423,  1203,   492,  2003,  2004,
  1575,  1576,  1141,   547,   548,  1108,   558,  1156,   552,   424,
   492,   200,   201,  1157,   717,   549,   719,   720,   721,  1221,
   567,  2022,   181,   440,    73,    74,    75,   455,    76,    86,
    57,   577,  1103,   207,    88,   770,   581,     4,  1577,   107,
   784,   923,   585,   785,   587,   588,  1489,   895,   589,    90,
   591,    58,  1578,   770,   770,   770,   770,   770,   770,   770,
   770,   770,   770,   770,   770,   770,   770,   770,   770,  1490,
  1491,   770,  1246,  1247,   910,   911,   912,   913,   427,     4,
   914,   211,   212,   573,   428,     5,     6,    73,    74,    75,
   181,    76,   429,   315,   418,   198,   199,  1127,   419,  1158,
   726,   216,   217,    11,     4,  1159,   316,  1128,   420,    91,
     5,     6,    73,    74,    75,    92,    76,   317,   786,  1271,
   492,    93,   168,   174,   483,   484,   485,   486,    11,  1223,
   108,  1305,    94,   171,   171,   605,    73,    74,    75,  1007,
    76,   171,   505,   487,    95,  1129,  1130,  1131,  1132,  1133,
  1134,    73,    74,    75,    96,    76,   294,   295,   296,    97,
   233,   234,   297,   615,   120,  1048,   247,  1678,   298,  1679,
   505,  1492,  1363,   728,   770,    73,    74,    75,   425,    76,
   505,    98,  1370,   123,    73,    74,    75,  1579,    76,    73,
    74,    75,    99,    76,   -65,   100,    58,   221,   222,  1046,
   771,   181,   276,   277,   278,   352,   505,   245,   129,   130,
   131,   932,   128,  1192,    58,   101,   226,   227,   938,   849,
   505,  1205,   854,   824,   825,   102,   860,   103,  1206,   133,
   134,   135,   136,   104,   450,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   105,   430,  1723,    73,    74,    75,  1739,    76,   124,  1724,
   106,   451,  1742,  1740,   929,   930,  1135,   421,   452,  1740,
  1405,  1853,    28,   673,   125,    28,   126,    29,  1854,    28,
   361,   362,   127,   364,   365,   366,   367,   368,   369,   370,
   371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
   381,   382,   383,  1874,  1874,   489,    77,    78,    79,    80,
   388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
   398,   399,   400,   401,   402,   403,     4,   237,   851,   852,
    73,    74,    75,   405,    76,   771,   771,   771,   771,   410,
   770,   897,  1857,   168,   765,   417,   456,   232,    29,  1858,
   770,   352,  1952,   857,   858,   386,   387,   470,   471,  1953,
    58,    58,   457,   818,  1217,  1218,  1219,  1220,   507,   387,
   246,  1388,   249,   826,   250,   497,   444,   830,  1233,   835,
   251,   490,   618,   181,   458,   432,   445,   841,   848,   387,
   620,   853,   177,   453,   252,   859,   718,   387,  1494,  1248,
  1249,   253,   446,   433,    82,   299,   447,  1188,  1189,  1190,
  1191,   820,   821,   434,   435,   534,   828,   829,    34,   300,
    35,  1270,   436,   254,   437,   833,   834,   255,  1889,   256,
   839,   840,    36,    37,    38,   257,   543,   544,   459,   302,
  1680,  1681,  1682,   164,  1377,   822,   823,  1208,   165,    39,
   258,   166,   306,  1478,   309,  1084,  1479,   771,   831,   832,
   357,   868,   387,   259,  1333,  1085,  1086,  1087,  1495,  1480,
  1481,   260,  1018,  1482,  1483,   771,   771,   771,   771,   771,
   771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
   771,   869,   387,   771,   870,   387,   261,  1628,  1629,  1630,
   262,  1632,  1047,   352,   816,   943,  1658,   818,   310,  1903,
   462,   871,   387,  1496,   263,   460,  1050,   387,   264,  1649,
  1497,  1498,  1051,  1052,   616,   562,  1056,   387,  1357,   387,
   265,   492,  1358,   387,  1139,  1359,   387,   329,   652,   653,
  1230,  1360,   387,  1499,  1372,   387,  1500,  1501,  1552,  1553,
  1993,   655,  1558,   181,   463,   448,  1560,   181,   656,   657,
   658,  1581,   181,   266,   660,   661,  1549,  1583,   181,  1737,
  1738,   599,  1747,   387,  1749,   387,   267,  1904,  1484,  1905,
  1750,   387,   438,  1795,  1796,   268,  1557,  1438,  1864,  1865,
  1906,   269,  1559,  1441,  1561,   270,   771,  1759,  1760,  1761,
  1762,  1763,  1764,  1907,   464,   271,   465,    40,  1921,  1922,
  1304,   272,  1306,  1930,   387,   863,   793,   794,   171,   273,
   274,  1908,  1088,   713,   714,   275,  1582,   314,   323,   466,
   171,  1584,   342,   354,   344,   359,   724,   245,   245,   245,
   245,   360,  1334,   408,   411,  1502,  1228,   469,   476,  1137,
   412,   245,   168,   168,  1869,   416,  1870,   787,   788,  1871,
   168,   790,   496,  1241,   477,  1534,   478,   795,   688,   798,
  1699,   479,   245,   245,  1541,   480,   508,   512,  1779,   467,
  1781,   500,  1258,   533,   770,   509,   538,   540,   551,   556,
  1266,  1267,   557,  1667,   245,  1277,  1278,  1279,  1280,  1281,
  1282,  1283,   559,  1872,  1300,  1303,    58,  1890,    58,  1309,
  1310,   560,   561,   563,  1311,   564,   565,   566,   568,  1316,
  1317,  1318,  1319,  1320,  1321,  1322,  1323,  1324,   569,   570,
  1816,   571,   572,   575,   576,   578,  1821,   245,    58,  1335,
  1336,  1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,
  1346,  1347,  1348,   579,  1350,  1700,  1909,  1090,  1354,  1091,
  1092,  1093,  1094,  1095,  1096,  1097,   129,   130,     4,   580,
  1596,   582,   771,  1765,   584,   292,   293,   294,   295,   296,
   586,   590,   771,   297,   593,   598,   837,   600,   602,   298,
  1705,   603,   352,   138,   139,   140,   141,   142,   604,   606,
   607,   920,   921,   608,   609,  1868,   908,   909,   910,   911,
   912,   913,   610,   867,   914,   611,   621,   623,   651,  1369,
   667,   654,  1640,   659,   662,   664,   665,   666,   668,   935,
   936,   937,   669,   670,   672,   939,   940,   675,  1873,   677,
   679,   941,   283,   284,   285,   286,   287,   680,   288,   289,
   290,   291,   682,   684,   292,   293,   294,   295,   296,   689,
   245,   690,   297,   691,   692,   700,   245,  1928,   298,   694,
   698,   702,   864,   704,   705,   706,   708,  1706,   709,   928,
   710,  1683,   332,   333,   334,   335,   336,   337,   338,   339,
   340,  1000,   711,   715,  1001,   716,   933,   722,   283,   284,
   285,   286,   287,   725,   288,   289,   290,   291,   727,   772,
   292,   293,   294,   295,   296,  1933,   774,   782,   297,   783,
   791,   129,   130,     4,   298,   796,  1098,  1524,  1524,   799,
  1975,   801,   802,   803,  1650,   804,  1652,  1653,   245,   805,
   813,   806,   814,   861,  1038,   819,   409,   245,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   827,   836,   838,   850,   856,   866,   872,
   874,   875,  1828,   283,   284,   285,   286,   287,   876,   288,
   289,   290,   291,   878,   880,   292,   293,   294,   295,   296,
   881,   882,   883,   297,   886,   891,   171,   171,   171,   298,
   171,   896,  1707,   917,  -679,   931,   924,   951,   283,   284,
   285,   286,   287,   953,   288,   289,   290,   291,   171,   954,
   292,   293,   294,   295,   296,   955,  1589,  1590,   297,   956,
  1002,  1594,  1003,   245,   298,  1708,   898,   899,   900,   901,
   902,   903,   904,   905,   906,   907,  1004,  1142,   908,   909,
   910,   911,   912,   913,  1005,  1006,   914,   765,  1012,  1013,
  1009,  1016,  1619,  1209,  1019,  1037,  1152,  1210,   914,  1229,
  1014,  1213,  1214,  1215,  1015,  1234,  1236,  1060,  1043,  1160,
  1635,  1636,  1143,  1638,  1639,   245,  1144,  1049,  1216,  1187,
  1145,  1146,  1147,  1169,  1237,   283,   284,   285,   286,   287,
  1148,   288,   289,   290,   291,  1170,   771,   292,   293,   294,
   295,   296,  1238,  1149,  1176,   297,   904,   905,   906,   907,
  1150,   298,   908,   909,   910,   911,   912,   913,  1674,  1151,
   914,  1153,  1161,  1710,  1162,  1163,  1211,   168,  1193,  1212,
  1164,  1165,  1166,  1167,   245,  1168,  1202,  1171,  1684,   168,
  1685,  1172,  1222,  1224,  1225,  1226,   164,  1173,  1174,  1231,
  1175,   165,  1195,   925,   166,  1926,  1198,  1711,  1204,   409,
  1177,  1178,  1326,  1197,  1328,  1201,  1330,   171,  1227,   171,
  1235,  1242,  1243,  1244,  1245,  1250,  1061,  1062,  1063,  1064,
  1065,  1066,  1067,  1068,  1069,  1257,  1259,  1070,  1260,  1803,
  1804,  1950,  1261,  1071,  1355,  1713,  1810,  1262,  1268,  1269,
  1312,  1315,  1299,  1349,  1353,  1362,  1072,  1356,  1361,  1879,
  1351,  1352,  1378,  1366,  1371,  1365,  1379,  1313,  1314,   171,
   283,   284,   285,   286,   287,   171,   288,   289,   290,   291,
  1325,  1367,   292,   293,   294,   295,   296,  1373,  1380,  1381,
   297,  1383,  1385,  1386,  1387,  1389,   298,  1390,  1392,  1784,
  1393,  1786,  1394,   283,   284,   285,   286,   287,  1397,   288,
   289,   290,   291,  1398,  1399,   292,   293,   294,   295,   296,
  1400,  1401,  1866,   297,  1867,  1402,  1403,  1406,  1408,   298,
  1437,  1409,  1410,  1411,  1412,    58,    58,  1413,   129,   130,
   729,  1415,    58,  1417,   171,  1418,  1419,  1420,  1382,  1421,
  1384,  1422,  1423,  1424,  1425,  1426,  1427,  1391,  1429,  1430,
   352,  1431,  1432,  1434,  1435,   138,   139,   140,   141,   142,
   730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
   740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
   750,   751,   752,   753,  1436,   754,   755,  1439,  1440,  1442,
  1443,   283,   284,   285,   286,   287,   171,   288,   289,   290,
   291,  1444,  1446,   292,   293,   294,   295,   296,    58,  1447,
    58,   297,  1073,  1537,  1449,  1450,  1451,   298,  1452,  1454,
  1455,  1456,  1543,  1544,  1545,   283,   284,   285,   286,   287,
  1457,   288,   289,   290,   291,  1458,  1459,   292,   293,   294,
   295,   296,  1512,  1715,  1460,   297,  1461,   756,  1462,  1463,
  1464,   298,  1465,  1466,   757,  1467,  1468,  1504,  1505,   171,
  1506,  1507,  1508,   283,   284,   285,   286,   287,   245,   288,
   289,   290,   291,  1527,  1513,   292,   293,   294,   295,   296,
  1509,  1510,  1511,   297,  1514,  1515,  1538,  1551,  1516,   298,
  1542,  1517,  1518,   283,   284,   285,   286,   287,  1521,   288,
   289,   290,   291,  1539,   245,   292,   293,   294,   295,   296,
  1591,  1592,  1593,   297,  1519,  1529,  1520,  1598,  1530,   298,
  1601,  1602,  1531,  1532,   510,  1604,  1533,  1547,  1607,  1608,
  1609,  1610,  1548,   181,  1611,  1612,  1613,  1554,  1615,  1550,
  1555,  1556,  1617,  1618,  1562,  1565,  1564,  1622,  1623,  1568,
  1566,  1567,  1569,  1586,  1571,   168,   168,   168,  1631,   168,
  1573,  1574,  1585,  1587,  1637,  1597,   758,  1626,  1633,  1599,
  1605,  1614,   759,   760,  1620,  1621,  1588,   168,   761,  1634,
  1641,   762,  1624,  1595,  1039,  1040,   763,   764,  1600,   765,
  1642,  1603,  1660,  1670,  1671,  1648,  1606,  1651,  1672,   129,
   130,   729,  1654,  1673,  1675,  2020,  1655,  1676,  1616,  1657,
  1659,  1677,  1664,  1687,  1694,  1698,  1701,  1704,  1714,  1688,
  1717,  1625,  1689,  1627,  1693,  1695,   138,   139,   140,   141,
   142,   730,   731,   732,   733,   734,   735,   736,   737,   738,
   739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
   749,   750,   751,   752,   753,  1725,   754,   755,  1726,  1727,
  1728,  1767,  1734,  1730,  1665,  1666,  1273,  1668,  1274,  1275,
  1276,   283,   284,   285,   286,   287,  1731,   288,   289,   290,
   291,  1732,  1735,   292,   293,   294,   295,   296,  1736,  1743,
  1744,   297,  1751,  1746,  1753,  1754,  1745,   298,  1755,  1748,
  1756,  1758,  1716,  1757,  1752,  1768,  1769,  1277,  1278,  1279,
  1280,  1281,  1282,  1283,  1770,  1284,  1285,  1773,   756,   129,
   130,     4,    42,  1822,  1774,   757,    43,  1775,  1776,  1778,
  1785,  1797,  1800,  1801,  1807,  1808,   168,  1780,   168,  1782,
  1783,  1809,  1811,  1813,  1817,  1825,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,  1812,  1798,  1824,  1720,  1826,  1802,  1829,  1830,  1805,
  1806,    44,  1831,   288,   289,   290,   291,    45,   168,   292,
   293,   294,   295,   296,   168,  1832,  1833,   297,  1839,  1841,
    46,  1840,    47,   298,  1878,  1842,  1843,  1844,  1834,  1835,
  1836,  1837,  1838,  1787,    48,  1846,  1849,  1851,    49,  1789,
  1882,  1850,  1888,  1869,  1860,  1870,  1791,  1861,  1871,  1852,
    50,  1892,  1877,  1881,  1891,  1893,  1273,   758,  1274,  1275,
  1276,  1898,  1799,   759,   760,  1901,  1912,  1914,  1915,   761,
  1286,    51,   762,  1916,  1919,  1923,  1924,   763,   764,  1925,
   765,  1927,  1945,   168,  1277,  1278,  1279,  1280,  1281,  1282,
  1283,   673,  1872,  1934,  1880,  1935,  1941,  1277,  1278,  1279,
  1280,  1281,  1282,  1283,  1946,  1284,  1285,  1949,  1951,  1956,
  1957,  1958,  1959,  1960,  1894,  1895,  1896,  1897,  1961,  1962,
  1900,  1968,  1902,  1964,  1966,  1969,    52,  1970,    53,  1972,
  1917,  1918,  1973,  1974,  1277,  1278,  1279,  1280,  1281,  1282,
  1283,  1976,  1290,  1979,  1980,   168,  1929,  1981,  1983,  1932,
   283,   284,   285,   286,   287,  1984,   288,   289,   290,   291,
  1985,  1986,   292,   293,   294,   295,   296,  1987,  1989,  1990,
   297,  1991,  1995,  1947,  1992,  1996,   298,  1998,  2002,  2005,
  2006,  2009,  2012,  2014,   164,  2017,  2023,  2024,  1899,   165,
  2026,  2033,   166,  1911,  2036,  1913,  2027,  2037,  2039,  2041,
   797,  2044,  1920,  2042,  2045,  1239,  2040,  1395,   168,   815,
  1977,  1124,  1525,   919,  1644,  1819,   707,   238,   723,   345,
   862,     0,   283,   284,   285,   286,   287,  1876,   288,   289,
   290,   291,  1240,  1994,   292,   293,   294,   295,   296,     0,
  1289,     0,   297,  1948,     0,     0,     0,     0,   298,     0,
     0,     0,     0,  1721,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  2008,     0,     0,  2010,     0,     0,     0,
     0,     0,     0,   129,   130,   414,   132,  1291,     0,    55,
     0,     0,     0,     0,     0,     0,  2025,     0,     0,  2029,
  1988,     0,     0,     0,   133,   134,   135,   136,   137,  2035,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   129,   130,   131,   132,     0,
     0,    55,     0,     0,     0,     0,     0,     0,     0,   240,
     0,     0,     0,     0,     0,     0,   133,   134,   135,   136,
   137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   129,   130,   131,
   286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,   133,   134,
   135,   136,     0,   298,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   129,
   130,   131,   901,   902,   903,   904,   905,   906,   907,     0,
     0,   908,   909,   910,   911,   912,   913,     0,     0,   914,
   133,   134,   135,   136,     0,     0,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,   163,     0,     0,     0,     0,   298,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   164,     0,
     0,     0,     0,   165,     0,     0,   166,     0,     0,     0,
     0,   241,     0,     0,   167,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,   958,   297,   163,     0,     0,     0,     0,   298,
    73,    74,   959,     0,    76,     0,     0,     0,     0,     0,
   164,     0,     0,     0,     0,   165,     0,     0,   166,     0,
     0,     0,     0,  1814,     0,     0,   167,  1815,   898,   899,
   900,   901,   902,   903,   904,   905,   906,   907,     0,     0,
   908,   909,   910,   911,   912,   913,   958,     0,   914,     0,
     0,     0,     0,     0,    73,    74,   959,     0,    76,  1196,
     0,     0,   164,     0,     0,     0,     0,   165,     0,     0,
   166,     0,     0,  1883,     0,     0,     0,     0,   167,     0,
     0,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
   958,   297,     0,     0,     0,     0,     0,   298,    73,    74,
   959,   301,    76,     0,   164,     0,     0,     0,     0,   165,
     0,     0,   166,     0,     0,     0,     0,  1884,     0,   960,
   167,   961,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,     0,     0,     0,   973,     0,     0,   974,
     0,     0,   975,     0,     0,   976,     0,   977,   978,   979,
   980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
   990,   991,   992,     0,     0,     0,   993,     0,     0,     0,
     0,   994,     0,   960,   995,   961,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,     0,     0,     0,
   973,     0,     0,   974,     0,     0,   975,     0,     0,   976,
     0,   977,   978,   979,   980,   981,   982,   983,   984,   985,
   986,   987,   988,   989,   990,   991,   992,     0,     0,     0,
   993,     0,     0,     0,     0,   994,     0,   960,   995,   961,
   962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
   972,     0,   996,     0,   973,     0,     0,   974,     0,     0,
   975,     0,     0,   976,     0,   977,   978,   979,   980,   981,
   982,   983,   984,   985,   986,   987,   988,   989,   990,   991,
   992,     0,     0,     0,   993,   958,     0,     0,     0,   994,
     0,     0,   995,    73,    74,   959,     0,    76,     0,     0,
     0,   283,   284,   285,   286,   287,  1777,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,     0,     0,     0,     0,     0,   298,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   958,
     0,     0,     0,     0,     0,     0,     0,    73,    74,   959,
     0,    76,     0,     0,     0,   283,   284,   285,   286,   287,
  1788,   288,   289,   290,   291,     0,  1885,   292,   293,   294,
   295,   296,     0,     0,     0,   297,     0,     0,     0,     0,
     0,   298,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   958,     0,     0,     0,     0,     0,     0,
     0,    73,    74,   959,     0,    76,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1886,     0,   960,     0,   961,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,     0,     0,     0,   973,
     0,     0,   974,     0,     0,   975,     0,     0,   976,     0,
   977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
   987,   988,   989,   990,   991,   992,     0,     0,     0,   993,
     0,     0,     0,     0,   994,     0,   960,   995,   961,   962,
   963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     0,     0,     0,   973,     0,     0,   974,     0,     0,   975,
     0,     0,   976,     0,   977,   978,   979,   980,   981,   982,
   983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     0,     0,     0,   993,     0,     0,     0,     0,   994,     0,
   960,   995,   961,   962,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,     0,  1790,     0,   973,     0,     0,
   974,     0,     0,   975,     0,     0,   976,     0,   977,   978,
   979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
   989,   990,   991,   992,     0,     0,     0,   993,   958,     0,
     0,     0,   994,     0,     0,   995,    73,    74,   959,     0,
    76,     0,     0,     0,   283,   284,   285,   286,   287,  1792,
   288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,     0,     0,
   298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   958,     0,     0,     0,     0,     0,     0,     0,
    73,    74,   959,     0,    76,     0,     0,     0,   283,   284,
   285,   286,   287,  1793,   288,   289,   290,   291,     0,  1887,
   292,   293,   294,   295,   296,     0,     0,     0,   297,     0,
     0,     0,     0,     0,   298,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   958,     0,     0,     0,
     0,     0,     0,     0,    73,    74,   959,     0,    76,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1982,     0,   960,     0,   961,   962,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
     0,     0,   973,     0,     0,   974,     0,     0,   975,     0,
     0,   976,     0,   977,   978,   979,   980,   981,   982,   983,
   984,   985,   986,   987,   988,   989,   990,   991,   992,     0,
     0,     0,   993,     0,     0,     0,     0,   994,     0,   960,
   995,   961,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,     0,     0,     0,   973,     0,     0,   974,
     0,     0,   975,     0,     0,   976,     0,   977,   978,   979,
   980,   981,   982,   983,   984,   985,   986,   987,   988,   989,
   990,   991,   992,     0,     0,     0,   993,     0,     0,     0,
     0,   994,     0,   960,   995,   961,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,     0,  1794,     0,
   973,     0,     0,   974,     0,     0,   975,     0,     0,   976,
     0,   977,   978,   979,   980,   981,   982,   983,   984,   985,
   986,   987,   988,   989,   990,   991,   992,     0,     0,     0,
   993,   958,     0,     0,     0,   994,     0,     0,   995,    73,
    74,   959,     0,    76,     0,     0,     0,   283,   284,   285,
   286,   287,  1971,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,     0,     0,
     0,     0,     0,   298,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   958,     0,     0,     0,     0,
     0,     0,     0,    73,    74,   959,     0,    76,     0,     0,
     0,   283,   284,   285,   286,   287,  1978,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,   596,
     0,   297,     0,     0,     0,     0,     0,   298,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   958,
     0,     0,     0,     0,     0,     0,     0,    73,    74,   959,
     0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   960,     0,
   961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
   971,   972,     0,     0,     0,   973,     0,     0,   974,     0,
     0,   975,     0,     0,   976,     0,   977,   978,   979,   980,
   981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
   991,   992,     0,     0,     0,   993,     0,     0,     0,     0,
   994,     0,   960,   995,   961,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,     0,     0,     0,   973,
     0,     0,   974,     0,     0,   975,     0,     0,   976,     0,
   977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
   987,   988,   989,   990,   991,   992,     0,     0,     0,   993,
     0,     0,     0,     0,   994,     0,   960,   995,   961,   962,
   963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     0,  2011,     0,   973,     0,     0,   974,     0,     0,   975,
     0,     0,   976,     0,   977,   978,   979,   980,   981,   982,
   983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     0,     0,     0,   993,   958,     0,     0,     0,   994,     0,
     0,   995,    73,    74,   959,     0,    76,     0,     0,     0,
     0,     0,     0,     0,     0,  2013,   283,   284,   285,   286,
   287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,     0,   597,     0,
     0,     0,   298,   129,   130,   131,     0,     0,   958,     0,
     0,     0,     0,     0,     0,     0,    73,    74,   959,     0,
    76,     0,     0,     0,   133,   134,   135,   136,     0,  2015,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,     0,     0,     0,   283,   284,
   285,   286,   287,     0,   288,   289,   290,   291,     0,  1207,
   292,   293,   294,   295,   296,     0,     0,     0,   297,     0,
     0,     0,     0,     0,   298,     0,     0,     0,     0,   511,
     0,   960,     0,   961,   962,   963,   964,   965,   966,   967,
   968,   969,   970,   971,   972,     0,     0,     0,   973,     0,
     0,   974,     0,     0,   975,     0,     0,   976,     0,   977,
   978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
   988,   989,   990,   991,   992,   282,     0,     0,   993,     0,
     0,     0,     0,   994,     0,   960,   995,   961,   962,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
     0,     0,   973,   330,     0,   974,     0,     0,   975,     0,
     0,   976,     0,   977,   978,   979,   980,   981,   982,   983,
   984,   985,   986,   987,   988,   989,   990,   991,   992,   129,
   130,   131,   993,     0,     0,     0,     0,   994,     0,     0,
   995,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   133,   134,   135,   136,  2016,     0,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   536,   129,   130,     4,   542,     0,     0,   164,     0,
     0,     0,     0,   165,     0,     0,   166,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  2030,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   129,   130,     4,   898,   899,   900,
   901,   902,   903,   904,   905,   906,   907,     0,     0,   908,
   909,   910,   911,   912,   913,     0,     0,   914,     0,  1017,
     0,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   537,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   283,   284,   285,   286,   287,   595,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,     0,     0,   298,     0,
   283,   284,   285,   286,   287,   773,   288,   289,   290,   291,
     0,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,     0,     0,     0,     0,     0,   298,   283,   284,   285,
   286,   287,  1045,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,   164,     0,     0,   297,     0,   165,
     0,     0,   166,   298,     0,     0,     0,     0,   523,   900,
   901,   902,   903,   904,   905,   906,   907,     0,     0,   908,
   909,   910,   911,   912,   913,     0,     0,   914,   283,   284,
   285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
   292,   293,   294,   295,   296,     0,     0,   164,   297,     0,
     0,     0,   165,     0,   298,   166,     0,     0,     0,     0,
  1110,     0,  1111,  1112,     0,  1113,     0,     0,     0,     0,
   283,   284,   285,   286,   287,  1114,   288,   289,   290,   291,
     0,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,     0,  1115,  1116,  1117,     0,   298,     0,     0,   164,
     0,   530,     0,     0,   165,     0,     0,   166,     0,  1118,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   624,     0,     0,     0,
     0,     0,     0,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,   283,   284,   285,   286,   287,   298,
   288,   289,   290,   291,     0,  1119,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,     0,     0,
   298,     0,   283,   284,   285,   286,   287,   625,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,     0,     0,   298,   283,
   284,   285,   286,   287,     0,   288,   289,   290,   291,   626,
     0,   292,   293,   294,   295,   296,     4,     0,     0,   297,
     0,     0,     5,     6,     0,   298,     0,  1120,     0,     0,
     7,     8,     9,    10,  1121,     0,     0,     0,     0,   627,
    11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
   638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
   648,   649,   650,    12,     0,     0,     0,     0,     0,    13,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    14,     0,    15,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
    17,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,    18,   292,   293,   294,   295,   296,     0,     0,
     0,   297,   283,   284,   285,   286,   287,   298,   288,   289,
   290,   291,   531,    19,   292,   293,   294,   295,   296,     0,
     0,     0,   297,   283,   284,   285,   286,   287,   298,   288,
   289,   290,   291,   532,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,     0,     0,     0,     0,   298,
     0,     0,     0,     0,   807,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
    21,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,   283,   284,   285,   286,   287,   298,   288,   289,
   290,   291,   808,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,   283,   284,   285,   286,   287,   298,   288,
   289,   290,   291,  1053,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,   283,   284,   285,   286,   287,   298,
   288,   289,   290,   291,  1054,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,   283,   284,   285,   286,   287,
   298,   288,   289,   290,   291,  1055,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,   283,   284,   285,   286,
   287,   298,   288,   289,   290,   291,  1186,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,   283,   284,   285,
   286,   287,   298,   288,   289,   290,   291,  1374,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,   283,   284,
   285,   286,   287,   298,   288,   289,   290,   291,  1375,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,   283,
   284,   285,   286,   287,   298,   288,   289,   290,   291,  1376,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
   283,   284,   285,   286,   287,   298,   288,   289,   290,   291,
  1469,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,   283,   284,   285,   286,   287,   298,   288,   289,   290,
   291,  1477,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,   283,   284,   285,   286,   287,   298,   288,   289,
   290,   291,  1486,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,   283,   284,   285,   286,   287,   298,   288,
   289,   290,   291,  1656,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,   283,   284,   285,   286,   287,   298,
   288,   289,   290,   291,  1690,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,   283,   284,   285,   286,   287,
   298,   288,   289,   290,   291,  1691,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,   283,   284,   285,   286,
   287,   298,   288,   289,   290,   291,  1692,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,   283,   284,   285,
   286,   287,   298,   288,   289,   290,   291,  1696,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,   283,   284,
   285,   286,   287,   298,   288,   289,   290,   291,  1702,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,   283,
   284,   285,   286,   287,   298,   288,   289,   290,   291,  1709,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
   283,   284,   285,   286,   287,   298,   288,   289,   290,   291,
  1729,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,   283,   284,   285,   286,   287,   298,   288,   289,   290,
   291,  1847,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,   283,   284,   285,   286,   287,   298,   288,   289,
   290,   291,  1848,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,   283,   284,   285,   286,   287,   298,   288,
   289,   290,   291,  1856,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,   283,   284,   285,   286,   287,   298,
   288,   289,   290,   291,  1862,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,   283,   284,   285,   286,   287,
   298,   288,   289,   290,   291,  1863,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,   283,   284,   285,   286,
   287,   298,   288,   289,   290,   291,  1940,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,   283,   284,   285,
   286,   287,   298,   288,   289,   290,   291,  1942,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,   283,   284,
   285,   286,   287,   298,   288,   289,   290,   291,  1965,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,   283,
   284,   285,   286,   287,   298,   288,   289,   290,   291,  2018,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
   283,   284,   285,   286,   287,   298,   288,   289,   290,   291,
  2021,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,   283,   284,   285,   286,   287,   298,   288,   289,   290,
   291,  2031,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,     0,     0,     0,     0,     0,   298,     0,     0,
     0,   356,   283,   284,   285,   286,   287,     0,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,     0,     0,   298,     0,
     0,     0,   545,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,     0,     0,     0,     0,   298,
     0,     0,     0,   663,   283,   284,   285,   286,   287,     0,
   288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,     0,     0,
   298,     0,     0,     0,  1059,   283,   284,   285,   286,   287,
     0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,     0,     0,     0,     0,
     0,   298,     0,     0,     0,  1185,   283,   284,   285,   286,
   287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,     0,     0,     0,
     0,     0,   298,     0,     0,     0,  1528,   283,   284,   285,
   286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,     0,     0,
     0,     0,     0,   298,     0,     0,     0,  1661,   283,   284,
   285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,     0,
     0,     0,     0,     0,   298,     0,     0,     0,  1662,   283,
   284,   285,   286,   287,     0,   288,   289,   290,   291,     0,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
     0,     0,     0,     0,     0,   298,     0,     0,     0,  1663,
   283,   284,   285,   286,   287,     0,   288,   289,   290,   291,
     0,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,     0,     0,     0,     0,     0,   298,     0,     0,     0,
  1820,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,     0,     0,     0,     0,     0,   298,     0,     0,
     0,  1823,   283,   284,   285,   286,   287,     0,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,     0,     0,   298,     0,
     0,     0,  1827,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,     0,     0,     0,     0,   298,
     0,     0,     0,  1931,   283,   284,   285,   286,   287,     0,
   288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,     0,     0,
   298,     0,     0,     0,  2007,   283,   284,   285,   286,   287,
     0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,     0,     0,     0,     0,
     0,   298,     0,     0,     0,  2038,   283,   284,   285,   286,
   287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,     0,   331,     0,
     0,     0,   298,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,   385,     0,     0,     0,   298,
   283,   284,   285,   286,   287,     0,   288,   289,   290,   291,
     0,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,     0,     0,     0,   513,     0,   298,   283,   284,   285,
   286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,     0,     0,
     0,   514,     0,   298,   283,   284,   285,   286,   287,     0,
   288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,   515,     0,
   298,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,     0,     0,     0,   516,     0,   298,   283,   284,
   285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,     0,
     0,     0,   517,     0,   298,   283,   284,   285,   286,   287,
     0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,     0,     0,     0,   518,
     0,   298,   283,   284,   285,   286,   287,     0,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,   519,     0,   298,   283,
   284,   285,   286,   287,     0,   288,   289,   290,   291,     0,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
     0,     0,     0,   520,     0,   298,   283,   284,   285,   286,
   287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,     0,     0,     0,
   521,     0,   298,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,     0,     0,   522,     0,   298,
   283,   284,   285,   286,   287,     0,   288,   289,   290,   291,
     0,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,     0,     0,     0,   524,     0,   298,   283,   284,   285,
   286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,     0,     0,
     0,   525,     0,   298,   283,   284,   285,   286,   287,     0,
   288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,   526,     0,
   298,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,     0,     0,     0,   527,     0,   298,   283,   284,
   285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,     0,
     0,     0,   528,     0,   298,   283,   284,   285,   286,   287,
     0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,     0,     0,     0,   529,
     0,   298,   283,   284,   285,   286,   287,     0,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,   539,     0,   298,   283,
   284,   285,   286,   287,     0,   288,   289,   290,   291,     0,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
     0,     0,     0,   553,     0,   298,   283,   284,   285,   286,
   287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,     0,   617,     0,
     0,     0,   298,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,     0,     0,   809,     0,   298,
   283,   284,   285,   286,   287,     0,   288,   289,   290,   291,
     0,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,     0,     0,     0,   810,     0,   298,   283,   284,   285,
   286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,     0,     0,
     0,   811,     0,   298,   283,   284,   285,   286,   287,     0,
   288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,   812,     0,
   298,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,     0,   865,     0,     0,     0,   298,   283,   284,
   285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,     0,
     0,     0,   873,     0,   298,   283,   284,   285,   286,   287,
     0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,     0,     0,     0,  1057,
     0,   298,   283,   284,   285,   286,   287,     0,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,  1058,     0,   298,   283,
   284,   285,   286,   287,     0,   288,   289,   290,   291,     0,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
     0,     0,     0,  1733,     0,   298,   283,   284,   285,   286,
   287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,     0,     0,     0,
  1845,     0,   298,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,     0,     0,  1859,     0,   298,
   283,   284,   285,   286,   287,     0,   288,   289,   290,   291,
     0,     0,   292,   293,   294,   295,   296,     0,     0,     0,
   297,     0,     0,     0,  1937,     0,   298,   283,   284,   285,
   286,   287,     0,   288,   289,   290,   291,     0,     0,   292,
   293,   294,   295,   296,     0,     0,     0,   297,     0,     0,
     0,  1938,     0,   298,   283,   284,   285,   286,   287,     0,
   288,   289,   290,   291,     0,     0,   292,   293,   294,   295,
   296,     0,     0,     0,   297,     0,     0,     0,  1939,     0,
   298,   283,   284,   285,   286,   287,     0,   288,   289,   290,
   291,     0,     0,   292,   293,   294,   295,   296,     0,     0,
     0,   297,     0,     0,     0,  1944,     0,   298,   283,   284,
   285,   286,   287,     0,   288,   289,   290,   291,     0,     0,
   292,   293,   294,   295,   296,     0,     0,     0,   297,     0,
     0,     0,  1954,     0,   298,   283,   284,   285,   286,   287,
     0,   288,   289,   290,   291,     0,     0,   292,   293,   294,
   295,   296,     0,     0,     0,   297,     0,     0,     0,  1955,
     0,   298,   283,   284,   285,   286,   287,     0,   288,   289,
   290,   291,     0,     0,   292,   293,   294,   295,   296,     0,
     0,     0,   297,     0,     0,     0,  1967,     0,   298,   283,
   284,   285,   286,   287,     0,   288,   289,   290,   291,     0,
     0,   292,   293,   294,   295,   296,     0,     0,     0,   297,
     0,     0,     0,  2000,     0,   298,   283,   284,   285,   286,
   287,     0,   288,   289,   290,   291,     0,     0,   292,   293,
   294,   295,   296,     0,     0,     0,   297,     0,     0,     0,
  2034,     0,   298,   283,   284,   285,   286,   287,     0,   288,
   289,   290,   291,     0,     0,   292,   293,   294,   295,   296,
     0,     0,     0,   297,     0,     0,     0,     0,     0,   298,
   898,   899,   900,   901,   902,   903,   904,   905,   906,   907,
     0,     0,   908,   909,   910,   911,   912,   913,     0,     0,
   914,     0,     0,     0,  1535,   898,   899,   900,   901,   902,
   903,   904,   905,   906,   907,     0,     0,   908,   909,   910,
   911,   912,   913,     0,     0,   914
};

static const short yycheck[] = {     3,
   176,     5,   354,    84,   557,  1586,    10,   107,   108,     5,
     3,   413,     5,   566,   729,   341,  1009,    21,  1599,   345,
     7,  1014,  1015,   576,  1605,     5,     5,   580,   258,    33,
  1125,   584,   644,  1614,   624,   625,     5,    84,   268,  1620,
  1621,   443,   632,   110,   111,   322,     5,   114,   115,   116,
   117,   118,   119,     5,     5,     5,   333,   334,   335,     5,
    11,    12,    13,    14,    15,   342,    17,     5,     5,     3,
     0,     5,   248,     5,   258,     3,     5,     5,    29,     3,
   264,     5,     5,     5,   268,     5,     5,     5,     5,    69,
    69,    11,    12,    13,    14,    15,   498,    17,     7,   255,
    69,   268,     5,   107,   108,   261,   110,   111,     5,    29,
   114,   115,   116,   117,   118,   119,   120,   256,     5,    69,
   124,   125,   126,    69,    11,    12,    13,    14,    15,   261,
    17,   263,   308,    65,     5,     6,    24,     5,     9,    10,
    64,   140,    29,    23,   143,   759,   760,   761,   762,    13,
    14,    15,   619,    17,   254,     7,   258,   156,   157,   158,
   264,    75,     5,   878,   268,   880,   268,   493,    11,    12,
    13,    14,    15,   349,    17,   275,    63,    23,   614,   117,
    82,    23,    96,     5,    86,    87,    29,   264,   265,    11,
    12,    13,    14,    15,    23,    17,    64,   117,   118,   119,
   120,    69,   258,    69,   107,   264,   306,    29,  1201,   257,
   264,    86,     5,     6,   117,    81,     9,    10,   266,    99,
   622,   264,   110,   111,   257,   268,   114,   115,   116,   117,
   118,   119,     5,   266,   315,   110,    86,   241,    11,    12,
    13,    14,    15,   264,    17,    67,    96,     3,    98,     5,
   254,   264,     5,    99,   264,   248,    29,    99,    11,    12,
    13,    14,    15,   256,    17,   268,   265,   881,   315,   257,
    99,   275,   268,    96,   267,    98,    29,   264,   266,  1272,
   259,   261,   261,   106,   264,   899,   900,   901,   902,   903,
   904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
   914,   477,   306,   917,    23,   264,   387,   256,   775,   258,
  1891,   261,   264,   264,   265,   261,   264,   315,   322,   264,
  1901,   258,   256,   759,   760,   761,   762,   265,   256,   333,
   334,   335,   256,   267,    18,   264,   264,   256,   342,   267,
   264,   264,   264,   267,   621,   265,   264,   264,     5,   258,
   354,   265,   232,   264,    11,    12,    13,    14,    15,   256,
    17,   257,   233,   265,   261,   465,   264,     5,     7,   249,
   266,  1364,    29,    11,    12,    13,    14,    15,   265,    17,
    99,   259,    13,    14,    15,   259,    17,   143,   266,   264,
   265,    29,   266,   261,   234,  1976,   258,   264,  1979,   265,
   264,   265,   264,   249,    88,    82,  1020,   249,  1989,  1990,
    78,    79,   258,   411,   412,   265,   420,   258,   416,    96,
   249,   264,   265,   264,   600,   259,   602,   603,   604,   258,
   434,  2012,   266,   321,    13,    14,    15,   325,    17,     6,
   233,   445,   265,   265,     7,   881,   450,     5,   116,   258,
   243,   777,   456,   246,   458,   459,   140,   213,   462,     7,
   464,   465,   130,   899,   900,   901,   902,   903,   904,   905,
   906,   907,   908,   909,   910,   911,   912,   913,   914,   163,
   164,   917,  1094,  1095,   249,   250,   251,   252,    82,     5,
   255,   264,   265,   259,    88,    11,    12,    13,    14,    15,
   266,    17,    96,   234,    82,   264,   265,    86,    86,   258,
   610,   264,   265,    29,     5,   264,   247,    96,    96,     7,
    11,    12,    13,    14,    15,     7,    17,   258,   628,  1119,
   249,     7,    84,    85,   247,   248,   249,   250,    29,   258,
   256,  1131,     7,   624,   625,   259,    13,    14,    15,   875,
    17,   632,   266,   266,     7,   134,   135,   136,   137,   138,
   139,    13,    14,    15,     7,    17,   249,   250,   251,     7,
   122,   123,   255,   259,   191,   927,   128,  1570,   261,  1572,
   266,   265,  1196,   259,  1020,    13,    14,    15,   265,    17,
   266,     7,  1206,   256,    13,    14,    15,   265,    17,    13,
    14,    15,     7,    17,   259,     7,   610,   264,   265,   259,
   614,   266,   164,   165,   166,   619,   266,   621,     3,     4,
     5,   797,   264,   259,   628,     7,   264,   265,   804,   696,
   266,   259,   699,   264,   265,     7,   703,     7,   266,    24,
    25,    26,    27,     7,    96,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     7,   265,   259,    13,    14,    15,   259,    17,   258,   266,
     7,   133,   259,   266,   784,   785,   265,   265,   140,   266,
  1243,   259,   696,   264,   258,   699,   258,   268,   266,   703,
   252,   253,   258,   255,   256,   257,   258,   259,   260,   261,
   262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
   272,   273,   274,  1818,  1819,    23,   193,   194,   195,   196,
   282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
   292,   293,   294,   295,   296,   297,     5,     6,   264,   265,
    13,    14,    15,   305,    17,   759,   760,   761,   762,   311,
  1196,   765,   259,   315,   264,   317,    96,   130,   268,   266,
  1206,   775,   259,   264,   265,   265,   266,   329,   330,   266,
   784,   785,   112,   671,  1061,  1062,  1063,  1064,   265,   266,
     6,  1227,     7,   681,   258,   347,    86,   685,  1075,   687,
   258,    99,   265,   266,   134,    68,    96,   695,   696,   266,
   267,   699,   257,   265,   258,   703,   265,   266,    18,  1096,
  1097,   258,   112,    86,   712,     7,   116,  1003,  1004,  1005,
  1006,   264,   265,    96,    97,   387,   264,   265,     5,     7,
     7,  1118,   105,   258,   107,   264,   265,   258,  1841,   258,
   264,   265,    19,    20,    21,   258,   408,   409,   188,     7,
  1575,  1576,  1577,   248,  1216,   264,   265,  1043,   253,    36,
   258,   256,   266,   140,     7,    98,   143,   881,   264,   265,
   265,   265,   266,   258,  1161,   108,   109,   110,    88,   156,
   157,   258,   896,   160,   161,   899,   900,   901,   902,   903,
   904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
   914,   265,   266,   917,   265,   266,   258,  1507,  1508,  1509,
   258,  1511,   926,   927,   264,   265,  1540,   815,     5,    18,
    96,   265,   266,   133,   258,   265,   265,   266,   258,  1529,
   140,   141,   265,   266,   496,   428,   265,   266,   265,   266,
   258,   249,   265,   266,   958,   265,   266,   264,   510,   511,
   258,   265,   266,   163,   265,   266,   166,   167,   264,   265,
  1963,   523,   265,   266,   140,   265,   265,   266,   530,   531,
   532,   265,   266,   258,   536,   537,  1388,   265,   266,   265,
   266,   474,   265,   266,   265,   266,   258,    86,   265,    88,
   265,   266,   265,   264,   265,   258,  1408,  1284,   265,   266,
    99,   258,  1414,  1290,  1416,   258,  1020,    89,    90,    91,
    92,    93,    94,   112,   190,   258,   192,   194,   265,   266,
  1130,   258,  1132,   265,   266,     8,   635,   636,  1119,   258,
   258,   130,   265,   595,   596,   258,  1448,   258,   258,   215,
  1131,  1453,   258,   258,   266,     5,   608,  1061,  1062,  1063,
  1064,     5,  1162,   234,   234,   265,  1070,   264,   264,   957,
   234,  1075,   624,   625,    81,   234,    83,   629,   630,    86,
   632,   633,     8,  1087,   264,  1362,   264,   639,   571,   641,
     7,   264,  1096,  1097,  1371,   264,   259,   259,  1688,   265,
  1690,   266,  1106,   259,  1540,   266,     7,   259,     7,     5,
  1114,  1115,     5,  1549,  1118,   122,   123,   124,   125,   126,
   127,   128,   264,   130,  1128,  1129,  1130,  1842,  1132,  1133,
  1134,     5,   264,     5,  1138,   264,     5,     5,   264,  1143,
  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,   264,   264,
  1740,   234,   259,     5,     5,   264,  1746,  1161,  1162,  1163,
  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
  1174,  1175,  1176,   264,  1178,     7,   265,    96,  1182,    98,
    99,   100,   101,   102,   103,   104,     3,     4,     5,     5,
  1467,   264,  1196,   265,     5,   247,   248,   249,   250,   251,
   264,   264,  1206,   255,     5,   208,   689,   264,   264,   261,
     7,   264,  1216,    30,    31,    32,    33,    34,   264,   259,
     5,   773,   774,   258,   258,  1815,   247,   248,   249,   250,
   251,   252,   258,   716,   255,   249,   130,     7,     5,     8,
     5,     7,  1519,     7,     7,     7,     7,     7,     7,   801,
   802,   803,   234,   264,     7,   807,   808,     7,   265,     7,
     7,   813,   235,   236,   237,   238,   239,     7,   241,   242,
   243,   244,     7,     7,   247,   248,   249,   250,   251,   234,
  1284,     7,   255,     5,     7,   264,  1290,  1877,   261,     7,
     7,     7,   265,     7,     7,     7,     7,     7,     7,   782,
     7,  1578,   199,   200,   201,   202,   203,   204,   205,   206,
   207,   863,   265,     5,   866,   266,   799,     7,   235,   236,
   237,   238,   239,     5,   241,   242,   243,   244,   249,     7,
   247,   248,   249,   250,   251,  1888,     8,   264,   255,     5,
     5,     3,     4,     5,   261,     5,   265,  1351,  1352,   264,
  1940,   264,   264,   264,  1530,   264,  1532,  1533,  1362,     3,
   264,   259,    66,   265,   916,     7,   261,  1371,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,     7,     7,     7,     7,     7,   264,   266,
   259,   259,  1754,   235,   236,   237,   238,   239,     7,   241,
   242,   243,   244,   258,   258,   247,   248,   249,   250,   251,
   258,   258,   258,   255,     5,     3,  1507,  1508,  1509,   261,
  1511,     5,     7,   258,   258,     6,   259,     7,   235,   236,
   237,   238,   239,   264,   241,   242,   243,   244,  1529,   264,
   247,   248,   249,   250,   251,   264,  1460,  1461,   255,   264,
   266,  1465,   264,  1467,   261,     7,   235,   236,   237,   238,
   239,   240,   241,   242,   243,   244,   264,   960,   247,   248,
   249,   250,   251,   252,   264,   264,   255,   264,     5,     5,
   258,   243,  1496,  1045,   265,     3,     7,     7,   255,     5,
   258,  1053,  1054,  1055,   258,     5,     5,   258,   264,   264,
  1514,  1515,   258,  1517,  1518,  1519,   258,   266,   261,  1002,
   258,   258,   258,   264,     5,   235,   236,   237,   238,   239,
   258,   241,   242,   243,   244,   264,  1540,   247,   248,   249,
   250,   251,     5,   258,   264,   255,   241,   242,   243,   244,
   258,   261,   247,   248,   249,   250,   251,   252,  1562,   258,
   255,   258,   258,     7,   258,   258,  1049,  1119,   259,  1052,
   258,   258,   258,   258,  1578,   258,   265,   258,  1582,  1131,
  1584,   258,  1065,  1066,  1067,  1068,   248,   258,   258,  1072,
   258,   253,   259,     5,   256,  1872,   259,     7,   259,   261,
   264,   258,  1154,   258,  1156,   258,  1158,  1688,   264,  1690,
   264,     5,     5,     5,   264,     5,    69,    70,    71,    72,
    73,    74,    75,    76,    77,     5,     5,    80,     5,  1729,
  1730,  1908,     5,    86,  1186,     7,  1736,     5,     3,     3,
     7,     7,     5,     5,   264,   266,    99,   265,     7,  1825,
   258,   258,     7,   259,   258,   264,     7,  1140,  1141,  1740,
   235,   236,   237,   238,   239,  1746,   241,   242,   243,   244,
  1153,   266,   247,   248,   249,   250,   251,   266,     7,     7,
   255,     7,     7,     7,     7,     7,   261,     7,     7,  1693,
     7,  1695,     7,   235,   236,   237,   238,   239,     7,   241,
   242,   243,   244,     7,     7,   247,   248,   249,   250,   251,
     7,     7,  1812,   255,  1814,     7,     7,   264,     5,   261,
   258,     7,     7,     7,     7,  1729,  1730,     7,     3,     4,
     5,     7,  1736,     7,  1815,     7,     7,     7,  1221,     7,
  1223,     7,     7,     7,     7,     7,     7,  1230,     7,     7,
  1754,     7,     7,     5,     5,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,     5,    60,    61,     7,   258,   258,
     5,   235,   236,   237,   238,   239,  1877,   241,   242,   243,
   244,     5,     7,   247,   248,   249,   250,   251,  1812,     7,
  1814,   255,   265,  1365,     7,     7,     7,   261,     7,     7,
     7,   259,  1374,  1375,  1376,   235,   236,   237,   238,   239,
   259,   241,   242,   243,   244,   259,   266,   247,   248,   249,
   250,   251,   265,     7,   266,   255,   266,   122,   266,   266,
   266,   261,   266,   266,   129,   266,   259,   266,   259,  1940,
   266,   266,   266,   235,   236,   237,   238,   239,  1872,   241,
   242,   243,   244,     7,   265,   247,   248,   249,   250,   251,
   266,   266,   266,   255,   266,   266,     3,     7,   266,   261,
  1373,   266,   266,   235,   236,   237,   238,   239,   259,   241,
   242,   243,   244,   259,  1908,   247,   248,   249,   250,   251,
  1462,  1463,  1464,   255,   266,   264,   266,  1469,   264,   261,
  1472,  1473,   265,   264,   266,  1477,   264,   266,  1480,  1481,
  1482,  1483,   266,   266,  1486,  1487,  1488,     7,  1490,   266,
   112,     7,  1494,  1495,   258,     7,   259,  1499,  1500,     3,
     7,     7,     7,   264,     7,  1507,  1508,  1509,  1510,  1511,
     7,     7,     7,     7,  1516,     7,   241,     7,     7,   264,
   264,   264,   247,   248,   264,   264,  1459,  1529,   253,     7,
     5,   256,   264,  1466,   259,   260,   261,   262,  1471,   264,
     7,  1474,   265,     5,     5,   264,  1479,   264,     5,     3,
     4,     5,   259,     5,     7,  2009,   259,     7,  1491,   259,
   259,   259,   266,   259,   259,     7,     7,     7,     7,   266,
     7,  1504,   266,  1506,   266,   266,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,   266,    60,    61,   259,   259,
   266,     7,   259,   266,  1547,  1548,    81,  1550,    83,    84,
    85,   235,   236,   237,   238,   239,   266,   241,   242,   243,
   244,   266,   259,   247,   248,   249,   250,   251,   266,   264,
   264,   255,   259,   266,   265,   261,  1648,   261,   259,  1651,
   259,   259,     7,   265,  1656,   265,   259,   122,   123,   124,
   125,   126,   127,   128,     7,   130,   131,     7,   122,     3,
     4,     5,     3,   265,     7,   129,     7,     7,     7,     7,
     7,     7,     7,     7,     7,     7,  1688,  1689,  1690,  1691,
  1692,     7,     7,     7,     7,   264,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,   135,  1724,   265,     7,   264,  1728,     7,     7,  1731,
  1732,    62,     7,   241,   242,   243,   244,    68,  1740,   247,
   248,   249,   250,   251,  1746,     7,     5,   255,   111,   266,
    81,     7,    83,   261,   264,   266,    16,   259,  1760,  1761,
  1762,  1763,  1764,  1696,    95,   266,   266,   266,    99,  1702,
     7,   259,     5,    81,   259,    83,  1709,   259,    86,   266,
   111,     7,   266,   266,   264,     7,    81,   241,    83,    84,
    85,     7,  1725,   247,   248,   264,     7,     7,     7,   253,
   265,   132,   256,     7,     7,     5,     5,   261,   262,     5,
   264,   258,     5,  1815,   122,   123,   124,   125,   126,   127,
   128,   264,   130,   259,  1826,   259,   259,   122,   123,   124,
   125,   126,   127,   128,     5,   130,   131,     5,   259,   265,
     7,     4,     7,     7,  1846,  1847,  1848,  1849,     7,     7,
  1852,     7,  1854,   265,   265,     7,   187,     7,   189,     7,
  1862,  1863,     7,     7,   122,   123,   124,   125,   126,   127,
   128,   264,   130,   264,     7,  1877,  1878,     7,     7,  1881,
   235,   236,   237,   238,   239,     7,   241,   242,   243,   244,
     7,     7,   247,   248,   249,   250,   251,     7,   264,   264,
   255,     7,   264,  1905,   265,     7,   261,   266,   259,     7,
   259,    62,   264,     7,   248,     7,     7,     7,  1851,   253,
     7,   265,   256,  1856,   132,  1858,   264,     7,     5,     7,
   264,     0,  1865,   265,     0,  1085,  2039,  1234,  1940,   670,
  1942,   954,  1352,   769,  1525,  1744,   590,   125,   607,   238,
   712,    -1,   235,   236,   237,   238,   239,   265,   241,   242,
   243,   244,  1086,  1965,   247,   248,   249,   250,   251,    -1,
   265,    -1,   255,  1906,    -1,    -1,    -1,    -1,   261,    -1,
    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1995,    -1,    -1,  1998,    -1,    -1,    -1,
    -1,    -1,    -1,     3,     4,     5,     6,   265,    -1,     9,
    -1,    -1,    -1,    -1,    -1,    -1,  2018,    -1,    -1,  2021,
  1953,    -1,    -1,    -1,    24,    25,    26,    27,    28,  2031,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     3,     4,     5,     6,    -1,
    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
    28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    24,    25,
    26,    27,    -1,   261,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
     4,     5,   238,   239,   240,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,   252,    -1,    -1,   255,
    24,    25,    26,    27,    -1,    -1,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,   232,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,
    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,
    -1,   261,    -1,    -1,   264,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,     5,   255,   232,    -1,    -1,    -1,    -1,   261,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
   248,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,
    -1,    -1,    -1,   209,    -1,    -1,   264,   213,   235,   236,
   237,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,   252,     5,    -1,   255,    -1,
    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,   266,
    -1,    -1,   248,    -1,    -1,    -1,    -1,   253,    -1,    -1,
   256,    -1,    -1,     7,    -1,    -1,    -1,    -1,   264,    -1,
    -1,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
     5,   255,    -1,    -1,    -1,    -1,    -1,   261,    13,    14,
    15,   265,    17,    -1,   248,    -1,    -1,    -1,    -1,   253,
    -1,    -1,   256,    -1,    -1,    -1,    -1,     7,    -1,   142,
   264,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,   194,    -1,   142,   197,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
    -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
   189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,    -1,   265,    -1,   159,    -1,    -1,   162,    -1,    -1,
   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
   185,    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,   194,
    -1,    -1,   197,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,   235,   236,   237,   238,   239,   265,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    -1,   235,   236,   237,   238,   239,
   265,   241,   242,   243,   244,    -1,     7,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     7,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,
   142,   197,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,    -1,   265,    -1,   159,    -1,    -1,
   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
   182,   183,   184,   185,    -1,    -1,    -1,   189,     5,    -1,
    -1,    -1,   194,    -1,    -1,   197,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,   235,   236,   237,   238,   239,   265,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,   235,   236,
   237,   238,   239,   265,   241,   242,   243,   244,    -1,     7,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     7,    -1,   142,    -1,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,
   197,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,   194,    -1,   142,   197,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,    -1,   265,    -1,
   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
    -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
   189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,   235,   236,   237,
   238,   239,   265,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,   235,   236,   237,   238,   239,   265,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,     8,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
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
    -1,   265,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,   194,    -1,
    -1,   197,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   265,   235,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,    -1,
    -1,    -1,   261,     3,     4,     5,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    24,    25,    26,    27,    -1,   265,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,    -1,    -1,   235,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    69,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,   266,
    -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,     8,    -1,    -1,   189,    -1,
    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
    -1,    -1,   159,     8,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,     3,
     4,     5,   189,    -1,    -1,    -1,    -1,   194,    -1,    -1,
   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    24,    25,    26,    27,   265,    -1,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,     8,     3,     4,     5,     6,    -1,    -1,   248,    -1,
    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,     3,     4,     5,   235,   236,   237,
   238,   239,   240,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,   252,    -1,    -1,   255,    -1,   257,
    -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,     8,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   235,   236,   237,   238,   239,     8,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
   235,   236,   237,   238,   239,     8,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,    -1,    -1,    -1,    -1,   261,   235,   236,   237,
   238,   239,     8,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,   248,    -1,    -1,   255,    -1,   253,
    -1,    -1,   256,   261,    -1,    -1,    -1,    -1,   266,   237,
   238,   239,   240,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,   252,    -1,    -1,   255,   235,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,   248,   255,    -1,
    -1,    -1,   253,    -1,   261,   256,    -1,    -1,    -1,    -1,
    81,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,    -1,
   235,   236,   237,   238,   239,    96,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,   113,   114,   115,    -1,   261,    -1,    -1,   248,
    -1,   266,    -1,    -1,   253,    -1,    -1,   256,    -1,   130,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
    -1,    -1,    -1,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,   235,   236,   237,   238,   239,   261,
   241,   242,   243,   244,    -1,   186,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   261,    -1,   235,   236,   237,   238,   239,   136,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,   235,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,   168,
    -1,   247,   248,   249,   250,   251,     5,    -1,    -1,   255,
    -1,    -1,    11,    12,    -1,   261,    -1,   258,    -1,    -1,
    19,    20,    21,    22,   265,    -1,    -1,    -1,    -1,   198,
    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
   229,   230,   231,    62,    -1,    -1,    -1,    -1,    -1,    68,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
    99,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,   111,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,   235,   236,   237,   238,   239,   261,   241,   242,
   243,   244,   266,   132,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,   235,   236,   237,   238,   239,   261,   241,
   242,   243,   244,   266,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
   189,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,   235,   236,   237,   238,   239,   261,   241,   242,
   243,   244,   266,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,   235,   236,   237,   238,   239,   261,   241,
   242,   243,   244,   266,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,   235,   236,   237,   238,   239,   261,
   241,   242,   243,   244,   266,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,   235,   236,   237,   238,   239,
   261,   241,   242,   243,   244,   266,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,   235,   236,   237,   238,
   239,   261,   241,   242,   243,   244,   266,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,   235,   236,   237,
   238,   239,   261,   241,   242,   243,   244,   266,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,   235,   236,
   237,   238,   239,   261,   241,   242,   243,   244,   266,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,   235,
   236,   237,   238,   239,   261,   241,   242,   243,   244,   266,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
   235,   236,   237,   238,   239,   261,   241,   242,   243,   244,
   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,   235,   236,   237,   238,   239,   261,   241,   242,   243,
   244,   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,   235,   236,   237,   238,   239,   261,   241,   242,
   243,   244,   266,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,   235,   236,   237,   238,   239,   261,   241,
   242,   243,   244,   266,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,   235,   236,   237,   238,   239,   261,
   241,   242,   243,   244,   266,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,   235,   236,   237,   238,   239,
   261,   241,   242,   243,   244,   266,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,   235,   236,   237,   238,
   239,   261,   241,   242,   243,   244,   266,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,   235,   236,   237,
   238,   239,   261,   241,   242,   243,   244,   266,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,   235,   236,
   237,   238,   239,   261,   241,   242,   243,   244,   266,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,   235,
   236,   237,   238,   239,   261,   241,   242,   243,   244,   266,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
   235,   236,   237,   238,   239,   261,   241,   242,   243,   244,
   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,   235,   236,   237,   238,   239,   261,   241,   242,   243,
   244,   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,   235,   236,   237,   238,   239,   261,   241,   242,
   243,   244,   266,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,   235,   236,   237,   238,   239,   261,   241,
   242,   243,   244,   266,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,   235,   236,   237,   238,   239,   261,
   241,   242,   243,   244,   266,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,   235,   236,   237,   238,   239,
   261,   241,   242,   243,   244,   266,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,   235,   236,   237,   238,
   239,   261,   241,   242,   243,   244,   266,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,   235,   236,   237,
   238,   239,   261,   241,   242,   243,   244,   266,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,   235,   236,
   237,   238,   239,   261,   241,   242,   243,   244,   266,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,   235,
   236,   237,   238,   239,   261,   241,   242,   243,   244,   266,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
   235,   236,   237,   238,   239,   261,   241,   242,   243,   244,
   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,   235,   236,   237,   238,   239,   261,   241,   242,   243,
   244,   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   235,   236,   237,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
    -1,    -1,   265,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
    -1,    -1,    -1,   265,   235,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   261,    -1,    -1,    -1,   265,   235,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
    -1,   261,    -1,    -1,    -1,   265,   235,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
    -1,    -1,   261,    -1,    -1,    -1,   265,   235,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,   235,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,   235,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   235,   236,   237,   238,   239,    -1,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
   265,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   235,   236,   237,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
    -1,    -1,   265,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
    -1,    -1,    -1,   265,   235,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   261,    -1,    -1,    -1,   265,   235,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
    -1,   261,    -1,    -1,    -1,   265,   235,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,    -1,
    -1,    -1,   261,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,   257,    -1,    -1,    -1,   261,
   235,   236,   237,   238,   239,    -1,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   235,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
   261,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   235,   236,   237,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
   259,    -1,   261,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   235,   236,   237,   238,   239,    -1,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   235,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
   261,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   235,   236,   237,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,    -1,
    -1,    -1,   261,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   235,   236,   237,   238,   239,    -1,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   235,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
   261,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,   257,    -1,    -1,    -1,   261,   235,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   235,   236,   237,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
   259,    -1,   261,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   235,   236,   237,   238,   239,    -1,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   235,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
   261,   235,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   235,   236,   237,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   235,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   235,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
   259,    -1,   261,   235,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
   235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,   252,    -1,    -1,
   255,    -1,    -1,    -1,   259,   235,   236,   237,   238,   239,
   240,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,   252,    -1,    -1,   255
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
#line 340 "GetDP.y"
{ if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfPointer_L = List_Create(10, 10, sizeof(void *)) ;
	ListOfPointer2_L= List_Create(10, 10, sizeof(void *)) ;
	ListOfChar_L    = List_Create(128, 128, sizeof(char)) ;

	ListOfFormulation       = List_Create(5,5, sizeof(int)) ;

	ListOfBasisFunction     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfEntityIndex       = List_Create(5,5, sizeof(int)) ;
      }
    ;
    break;}
case 2:
#line 356 "GetDP.y"
{ if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfEntityIndex) ;
      }
    ;
    break;}
case 4:
#line 380 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; ;
    break;}
case 18:
#line 403 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 418 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 420 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 422 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 424 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 426 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 428 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 430 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 432 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 434 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 436 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 438 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 440 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 442 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 444 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 446 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 448 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 450 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 452 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 454 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 456 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 458 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 466 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 44:
#line 490 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 45:
#line 493 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 46:
#line 499 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, yyvsp[-4].c, 0, 0) ;
    ;
    break;}
case 49:
#line 509 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 52:
#line 519 "GetDP.y"
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
case 53:
#line 529 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 54:
#line 536 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 546 "GetDP.y"
{
      Group_S.FunctionType = yyvsp[-2].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      Group_S.InitialList = yyvsp[0].l ;
    ;
    break;}
case 56:
#line 555 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = yyvsp[-1].l ;
      yyval.i = -1 ;
    ;
    break;}
case 57:
#line 563 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 574 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 59:
#line 579 "GetDP.y"
{
      if ( !strcmp(yyvsp[0].c, "All") ) {
	yyval.i = -3;
      }
      else if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) >= 0 ) {
	List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
      }
      else {
	yyval.i = -2 ; vyyerror("Unknown Group: %s", yyvsp[0].c) ;
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 60:
#line 596 "GetDP.y"
{
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) >= 0 )
	  List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d", yyvsp[-1].c, k+1) ;
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
case 61:
#line 626 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 629 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 641 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 642 "GetDP.y"
{ yyval.l = NULL ; ;
    break;}
case 65:
#line 649 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 652 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
#line 655 "GetDP.y"
{
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) >= 0 ) {
	if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	     ELEMENTLIST ) {
	  yyval.l = List_Create( 1, 5, sizeof(int)) ;
	  List_Add(yyval.l, &i) ;
	}
	else  vyyerror("Not a Support of Element Type: %s", yyvsp[0].c) ;
      }
      else  vyyerror("Unknown Region for Support: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 68:
#line 673 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 686 "GetDP.y"
{
      yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;
    break;}
case 70:
#line 693 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 700 "GetDP.y"
{
      yyval.l = List_Create( 5, 5, sizeof(int)) ;
    ;
    break;}
case 72:
#line 705 "GetDP.y"
{
      yyval.l = yyvsp[-2].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;
    break;}
case 73:
#line 712 "GetDP.y"
{
      yyval.l = yyvsp[-3].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
    ;
    break;}
case 74:
#line 723 "GetDP.y"
{
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ;
    ;
    break;}
case 75:
#line 729 "GetDP.y"
{
      i = (int)yyvsp[-1].d ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
    ;
    break;}
case 76:
#line 736 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;
    break;}
case 77:
#line 747 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 78:
#line 756 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)yyvsp[-3].d ; (yyvsp[-3].d<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-3].d<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 764 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || (yyvsp[-4].i<(int)yyvsp[-2].d && (int)yyvsp[0].d<0) || (yyvsp[-4].i>(int)yyvsp[-2].d && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, (int)yyvsp[-2].d, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; ((int)yyvsp[0].d>0)?(j<=yyvsp[-2].d):(j>=yyvsp[-2].d) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 80:
#line 778 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || ((int)yyvsp[-5].d<(int)yyvsp[-2].d && (int)yyvsp[0].d<0) || ((int)yyvsp[-5].d>(int)yyvsp[-2].d && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", (int)yyvsp[-5].d, (int)yyvsp[-2].d, (int)yyvsp[0].d) ;
	 i = (int)yyvsp[-5].d ; List_Add(ListOfInt_L, &i) ;
      }
      else
	for(j=(int)yyvsp[-5].d ; ((int)yyvsp[0].d>0)?(j<=(int)yyvsp[-2].d):(j>=(int)yyvsp[-2].d) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 81:
#line 791 "GetDP.y"
{
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
case 83:
#line 830 "GetDP.y"
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
#line 840 "GetDP.y"
{ 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(tmpstr, "%s_%d", yyvsp[-3].c, k+1) ;
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
#line 862 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 867 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 868 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 873 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 94:
#line 892 "GetDP.y"
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
#line 912 "GetDP.y"
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
#line 965 "GetDP.y"
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
#line 985 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 991 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 997 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1000 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1005 "GetDP.y"
{ Expression_S.Type = UNDEFINED_EXP ; 
      yyval.i = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;
    break;}
case 105:
#line 1012 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 107:
#line 1023 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1026 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 109:
#line 1032 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 110:
#line 1036 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 112:
#line 1048 "GetDP.y"
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
case 113:
#line 1061 "GetDP.y"
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
case 114:
#line 1075 "GetDP.y"
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
case 115:
#line 1090 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1096 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1102 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1108 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1114 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1120 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1126 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1132 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1138 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1144 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1150 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1156 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1162 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1168 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1174 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1180 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1186 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 132:
#line 1193 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 134:
#line 1201 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 136:
#line 1214 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1220 "GetDP.y"
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
case 138:
#line 1294 "GetDP.y"
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
case 139:
#line 1328 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1337 "GetDP.y"
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
case 141:
#line 1349 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 142:
#line 1351 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 143:
#line 1363 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 144:
#line 1365 "GetDP.y"
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
case 145:
#line 1377 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 146:
#line 1379 "GetDP.y"
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
case 147:
#line 1393 "GetDP.y"
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
case 148:
#line 1405 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1411 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 150:
#line 1417 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 151:
#line 1419 "GetDP.y"
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
case 152:
#line 1448 "GetDP.y"
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
case 153:
#line 1474 "GetDP.y"
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
case 154:
#line 1487 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1493 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1500 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1506 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1513 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1520 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 160:
#line 1531 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 161:
#line 1532 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 162:
#line 1533 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 163:
#line 1538 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 164:
#line 1539 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 165:
#line 1545 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 166:
#line 1548 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 167:
#line 1551 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;
    break;}
case 168:
#line 1566 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 169:
#line 1571 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 170:
#line 1578 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 172:
#line 1587 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 173:
#line 1592 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 174:
#line 1599 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 175:
#line 1602 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 176:
#line 1609 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 178:
#line 1619 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 179:
#line 1622 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 180:
#line 1625 "GetDP.y"
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
case 181:
#line 1663 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 182:
#line 1669 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 183:
#line 1676 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 185:
#line 1689 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 186:
#line 1696 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 187:
#line 1699 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 188:
#line 1706 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 189:
#line 1709 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 190:
#line 1716 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 192:
#line 1728 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 193:
#line 1738 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 194:
#line 1748 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 195:
#line 1755 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 196:
#line 1758 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 197:
#line 1765 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 199:
#line 1781 "GetDP.y"
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
case 200:
#line 1829 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1832 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1835 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1838 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 204:
#line 1841 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 205:
#line 1852 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 207:
#line 1862 "GetDP.y"
{
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;
    break;}
case 210:
#line 1874 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;
    break;}
case 212:
#line 1887 "GetDP.y"
{
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 213:
#line 1894 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-2].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 214:
#line 1902 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 215:
#line 1911 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 216:
#line 1914 "GetDP.y"
{
      if (!Constraint_S.MultiConstraintPerRegion)
	Constraint_S.MultiConstraintPerRegion =
	  List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

      MultiConstraintPerRegion_S.Name = yyvsp[-3].c ;
      MultiConstraintPerRegion_S.ConstraintPerRegion = yyvsp[-1].l ;
      MultiConstraintPerRegion_S.Active = NULL ;

      List_Add(Constraint_S.MultiConstraintPerRegion, 
	       &MultiConstraintPerRegion_S) ;
    ;
    break;}
case 217:
#line 1932 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;
    break;}
case 218:
#line 1937 "GetDP.y"
{
      List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
    ;
    break;}
case 219:
#line 1942 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 220:
#line 1951 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 222:
#line 1965 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 223:
#line 1975 "GetDP.y"
{ 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
    ;
    break;}
case 224:
#line 1980 "GetDP.y"
{ 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
    ;
    break;}
case 225:
#line 1986 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 226:
#line 1991 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 227:
#line 1999 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 228:
#line 2007 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 229:
#line 2016 "GetDP.y"
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
case 230:
#line 2034 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 231:
#line 2043 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 232:
#line 2051 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 233:
#line 2059 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 234:
#line 2069 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 235:
#line 2079 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 236:
#line 2089 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 237:
#line 2109 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 239:
#line 2120 "GetDP.y"
{
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;
    break;}
case 242:
#line 2133 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;
    break;}
case 245:
#line 2147 "GetDP.y"
{
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 246:
#line 2154 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-2].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 247:
#line 2162 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 248:
#line 2171 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2174 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2177 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 251:
#line 2180 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 252:
#line 2187 "GetDP.y"
{
      yyval.l = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;
    break;}
case 253:
#line 2193 "GetDP.y"
{
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
    ;
    break;}
case 254:
#line 2210 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 255:
#line 2219 "GetDP.y"
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
case 257:
#line 2240 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 258:
#line 2243 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 259:
#line 2248 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 260:
#line 2253 "GetDP.y"
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
case 261:
#line 2267 "GetDP.y"
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
case 262:
#line 2287 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 263:
#line 2292 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 264:
#line 2297 "GetDP.y"
{
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
    ;
    break;}
case 265:
#line 2302 "GetDP.y"
{
      BasisFunction_S.EntityIndex = Num_Group(&Group_S, "BF_Entity", yyvsp[-1].i) ;
      if (Group_S.InitialList)
	List_Sort(Group_S.InitialList, fcmp_int) ;  /* Needed for Global Region */

      if (BasisFunction_S.GlobalBasisFunction) { /* Function to be defined before Entity */
	if (Group_S.FunctionType == GLOBAL) {
	  if (List_Nbr(BasisFunction_S.GlobalBasisFunction) ==
	      List_Nbr(Group_S.InitialList)) {
	    for (k = 0 ; k < List_Nbr(Group_S.InitialList) ; k++)
	      if (*((int*)List_Pointer(Group_S.InitialList, k)) !=
		  *((int*)List_Pointer(BasisFunction_S.GlobalBasisFunction, k))) {
		vyyerror("Bad correspondance between Group and Entity (elements differ)") ;
		break ;
	      }
	  }
	  else if (List_Nbr(Group_S.InitialList) != 0 ||
		   GlobalBasisFunction_S.EntityIndex != -1)
	    vyyerror("Bad correspondance between Group and Entity (#BF %d, #Global %d)",
		     List_Nbr(BasisFunction_S.GlobalBasisFunction),
		     List_Nbr(Group_S.InitialList)) ;
	}
	else  vyyerror("Bad correspondance between Group and Entity (Entity must be Global)") ;
      }
    ;
    break;}
case 267:
#line 2336 "GetDP.y"
{
      Nbr_Index = yyvsp[-1].i ;
    ;
    break;}
case 268:
#line 2340 "GetDP.y"
{
      Flag1 = Flag_MultipleIndex;
      if (Flag_MultipleIndex)
	Msg(WARNING, "Old way to define Group, remove \'{}\' to use one Group");
      /* Will be the new way to define Group
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", $6) ;
      */
    ;
    break;}
case 269:
#line 2350 "GetDP.y"
{
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", yyvsp[-12].c) ;

      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-11].i, 1, sizeof(struct GlobalBasisFunction)) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {

	if (!Flag1) { /* New way: only one group with all the single regions is given */
	  List_Read(Group_S.InitialList, k, &i) ;
	  GlobalBasisFunction_S.EntityIndex = i ;
	}
	else { /* Old way */
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
	}

	sprintf(tmpstr, "%s_%d", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) >= 0) {
	  GlobalBasisFunction_S.FormulationIndex = i ;
	  List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-15].c, 
				   fcmp_DefineQuantity_Name)) >= 0)
	    GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  else {
	    vyyerror("Unknown Quantity '%s' in Formulation '%s'", yyvsp[-15].c,
		     Formulation_S.Name) ;
	    break ;
	  }
	}
	else
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;

	sprintf(tmpstr, "%s_%d", yyvsp[-3].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				 fcmp_Resolution_Name)) >= 0)
	  GlobalBasisFunction_S.ResolutionIndex = i ;
	else
	  vyyerror("Unknown Resolution: %s {%d}", yyvsp[-3].c, k+1) ;

	GlobalBasisFunction_S.QuantityStorage = NULL ;
	List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      Free(yyvsp[-15].c) ; Free(yyvsp[-12].c) ; Free(yyvsp[-3].c) ;
    ;
    break;}
case 270:
#line 2414 "GetDP.y"
{ 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;
    break;}
case 271:
#line 2420 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;
    break;}
case 272:
#line 2429 "GetDP.y"
{ 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;
    break;}
case 274:
#line 2440 "GetDP.y"
{ 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 275:
#line 2447 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2450 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 277:
#line 2457 "GetDP.y"
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
case 278:
#line 2473 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 279:
#line 2479 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 280:
#line 2482 "GetDP.y"
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
case 281:
#line 2501 "GetDP.y"
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
case 282:
#line 2513 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 283:
#line 2520 "GetDP.y"
{ 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;
    break;}
case 284:
#line 2525 "GetDP.y"
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
case 285:
#line 2540 "GetDP.y"
{ 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;
    break;}
case 286:
#line 2546 "GetDP.y"
{ 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 287:
#line 2552 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 288:
#line 2561 "GetDP.y"
{ 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 290:
#line 2573 "GetDP.y"
{ 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 291:
#line 2580 "GetDP.y"
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
case 292:
#line 2591 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 2605 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;
    break;}
case 294:
#line 2610 "GetDP.y"
{
      Group_S.FunctionType = Type_Function ;
      Group_S.SuppListType = Type_SuppList ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }

      if (Constraint_Index >= 0) {
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
    ;
    break;}
case 295:
#line 2647 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 296:
#line 2656 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 298:
#line 2672 "GetDP.y"
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
case 299:
#line 2705 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 300:
#line 2708 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 301:
#line 2711 "GetDP.y"
{
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c, fcmp_Constraint_Name) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 302:
#line 2726 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 304:
#line 2736 "GetDP.y"
{
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;
    break;}
case 307:
#line 2749 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;
    break;}
case 309:
#line 2760 "GetDP.y"
{
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 310:
#line 2767 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-2].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 311:
#line 2775 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 313:
#line 2787 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 314:
#line 2793 "GetDP.y"
{
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;
    break;}
case 315:
#line 2798 "GetDP.y"
{
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;
    break;}
case 317:
#line 2809 "GetDP.y"
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
case 319:
#line 2832 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 320:
#line 2835 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 321:
#line 2839 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 322:
#line 2842 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 323:
#line 2852 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 324:
#line 2856 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;
    break;}
case 325:
#line 2864 "GetDP.y"
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
case 326:
#line 2888 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 327:
#line 2893 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 328:
#line 2899 "GetDP.y"
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
case 329:
#line 3210 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 330:
#line 3215 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 331:
#line 3224 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 332:
#line 3233 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 333:
#line 3242 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 335:
#line 3250 "GetDP.y"
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
case 336:
#line 3290 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;
    break;}
case 337:
#line 3295 "GetDP.y"
{
      List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
    ;
    break;}
case 338:
#line 3300 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 339:
#line 3305 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 340:
#line 3314 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 341:
#line 3317 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 342:
#line 3320 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 343:
#line 3323 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 344:
#line 3334 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 346:
#line 3345 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 347:
#line 3355 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 348:
#line 3365 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 349:
#line 3379 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 351:
#line 3391 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 352:
#line 3393 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 353:
#line 3395 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 354:
#line 3397 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 355:
#line 3405 "GetDP.y"
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
case 357:
#line 3430 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 358:
#line 3438 "GetDP.y"
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
case 359:
#line 3517 "GetDP.y"
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
      else if (List_Nbr(yyvsp[-2].l) == 2 &&
	       ( (WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION ) ) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = 
	  CWQ_FCT_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.BuiltInFunction_Equ = 
	  (WholeQuantity_P+1)->Case.Function.Fct ;
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
case 360:
#line 3571 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;
    break;}
case 361:
#line 3576 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 3585 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 363:
#line 3594 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 364:
#line 3599 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 365:
#line 3608 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 366:
#line 3619 "GetDP.y"
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
case 368:
#line 3648 "GetDP.y"
{
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;
    break;}
case 369:
#line 3653 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 370:
#line 3661 "GetDP.y"
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
case 371:
#line 3716 "GetDP.y"
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
case 372:
#line 3733 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 373:
#line 3734 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 374:
#line 3735 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 375:
#line 3736 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 376:
#line 3737 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 377:
#line 3738 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 378:
#line 3739 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 379:
#line 3740 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 380:
#line 3747 "GetDP.y"
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
case 381:
#line 3768 "GetDP.y"
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
case 382:
#line 3792 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 384:
#line 3802 "GetDP.y"
{
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;
    break;}
case 387:
#line 3815 "GetDP.y"
{
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;
    break;}
case 389:
#line 3827 "GetDP.y"
{
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 390:
#line 3834 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-2].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 391:
#line 3842 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 392:
#line 3845 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 393:
#line 3847 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 395:
#line 3855 "GetDP.y"
{
      yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;
    break;}
case 396:
#line 3860 "GetDP.y"
{
      List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
    ;
    break;}
case 397:
#line 3865 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 398:
#line 3870 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 399:
#line 3879 "GetDP.y"
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
case 401:
#line 3899 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 402:
#line 3902 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 403:
#line 3911 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 404:
#line 3914 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 405:
#line 3919 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 406:
#line 3924 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 407:
#line 3929 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 408:
#line 3934 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 410:
#line 3945 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 411:
#line 3954 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 412:
#line 3961 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 413:
#line 3964 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 3976 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 415:
#line 3986 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 416:
#line 3992 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 417:
#line 3995 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 418:
#line 4007 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 419:
#line 4015 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 420:
#line 4028 "GetDP.y"
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
case 421:
#line 4050 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;
    break;}
case 422:
#line 4057 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 423:
#line 4063 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 424:
#line 4069 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 425:
#line 4075 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 426:
#line 4083 "GetDP.y"
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
case 427:
#line 4105 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 428:
#line 4112 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 429:
#line 4118 "GetDP.y"
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
case 430:
#line 4129 "GetDP.y"
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
case 431:
#line 4140 "GetDP.y"
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
case 432:
#line 4153 "GetDP.y"
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
case 433:
#line 4168 "GetDP.y"
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
case 434:
#line 4183 "GetDP.y"
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
case 435:
#line 4198 "GetDP.y"
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
case 436:
#line 4218 "GetDP.y"
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
case 437:
#line 4239 "GetDP.y"
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
case 438:
#line 4251 "GetDP.y"
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
case 439:
#line 4271 "GetDP.y"
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
case 440:
#line 4288 "GetDP.y"
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
case 441:
#line 4307 "GetDP.y"
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
case 442:
#line 4328 "GetDP.y"
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
case 443:
#line 4342 "GetDP.y"
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
case 444:
#line 4356 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;
    break;}
case 445:
#line 4364 "GetDP.y"
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
case 446:
#line 4398 "GetDP.y"
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
case 447:
#line 4411 "GetDP.y"
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
case 448:
#line 4425 "GetDP.y"
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
case 449:
#line 4438 "GetDP.y"
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
case 450:
#line 4450 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 452:
#line 4459 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 454:
#line 4468 "GetDP.y"
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
case 455:
#line 4479 "GetDP.y"
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
case 456:
#line 4491 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 457:
#line 4501 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;
    break;}
case 458:
#line 4509 "GetDP.y"
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
case 459:
#line 4522 "GetDP.y"
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
case 460:
#line 4535 "GetDP.y"
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
case 461:
#line 4549 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 462:
#line 4559 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 463:
#line 4569 "GetDP.y"
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
case 464:
#line 4583 "GetDP.y"
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
case 465:
#line 4597 "GetDP.y"
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
case 466:
#line 4616 "GetDP.y"
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
case 467:
#line 4634 "GetDP.y"
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
case 468:
#line 4645 "GetDP.y"
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
case 469:
#line 4660 "GetDP.y"
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
case 470:
#line 4675 "GetDP.y"
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
case 471:
#line 4690 "GetDP.y"
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
case 472:
#line 4705 "GetDP.y"
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
case 473:
#line 4720 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 474:
#line 4731 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 475:
#line 4736 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 476:
#line 4746 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 478:
#line 4756 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 479:
#line 4759 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 480:
#line 4769 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 481:
#line 4785 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 483:
#line 4801 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 484:
#line 4805 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 485:
#line 4809 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 486:
#line 4813 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 487:
#line 4818 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 488:
#line 4829 "GetDP.y"
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
case 490:
#line 4846 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 4850 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 492:
#line 4854 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 493:
#line 4858 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 494:
#line 4862 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 495:
#line 4867 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 496:
#line 4878 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 498:
#line 4893 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 499:
#line 4897 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 500:
#line 4901 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 501:
#line 4905 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 4909 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 503:
#line 4920 "GetDP.y"
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
case 505:
#line 4938 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 506:
#line 4942 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 507:
#line 4946 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 508:
#line 4950 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 509:
#line 4955 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 510:
#line 4965 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 511:
#line 4971 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 512:
#line 4977 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 513:
#line 4987 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 514:
#line 4990 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 515:
#line 4995 "GetDP.y"
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
case 517:
#line 5013 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 518:
#line 5023 "GetDP.y"
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
case 519:
#line 5052 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 520:
#line 5055 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 521:
#line 5058 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 522:
#line 5066 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 523:
#line 5083 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 525:
#line 5095 "GetDP.y"
{
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;
    break;}
case 528:
#line 5106 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;
    break;}
case 530:
#line 5119 "GetDP.y"
{
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 531:
#line 5126 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-2].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 532:
#line 5134 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c,
			       fcmp_Formulation_Name)) < 0){
	vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
      }
      else {
	PostProcessing_S.FormulationIndex = i ;
	List_Read(Problem_S.Formulation, i, &Formulation_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 533:
#line 5147 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 534:
#line 5152 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 535:
#line 5158 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 536:
#line 5161 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 537:
#line 5164 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 538:
#line 5166 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 539:
#line 5172 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 541:
#line 5183 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 542:
#line 5186 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 543:
#line 5192 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 544:
#line 5197 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 545:
#line 5203 "GetDP.y"
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
case 546:
#line 5217 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 548:
#line 5231 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 549:
#line 5238 "GetDP.y"
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
case 550:
#line 5266 "GetDP.y"
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
case 551:
#line 5277 "GetDP.y"
{
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 552:
#line 5282 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 553:
#line 5291 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 554:
#line 5308 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 556:
#line 5320 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 559:
#line 5329 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 561:
#line 5341 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 562:
#line 5348 "GetDP.y"
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
case 563:
#line 5360 "GetDP.y"
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
case 564:
#line 5371 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 565:
#line 5376 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 566:
#line 5382 "GetDP.y"
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
case 567:
#line 5399 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 568:
#line 5409 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 569:
#line 5412 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 570:
#line 5416 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 571:
#line 5429 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 572:
#line 5434 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 573:
#line 5439 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 574:
#line 5448 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 575:
#line 5457 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 576:
#line 5466 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 577:
#line 5472 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 578:
#line 5477 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 579:
#line 5486 "GetDP.y"
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
case 580:
#line 5498 "GetDP.y"
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
case 581:
#line 5521 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 582:
#line 5522 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 583:
#line 5523 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 584:
#line 5524 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 585:
#line 5530 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 586:
#line 5532 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 587:
#line 5538 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 588:
#line 5544 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 589:
#line 5551 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 590:
#line 5560 "GetDP.y"
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
case 591:
#line 5582 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 592:
#line 5590 "GetDP.y"
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
case 593:
#line 5601 "GetDP.y"
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
case 594:
#line 5615 "GetDP.y"
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
case 595:
#line 5636 "GetDP.y"
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
case 596:
#line 5663 "GetDP.y"
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
case 597:
#line 5694 "GetDP.y"
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
case 598:
#line 5714 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Comma = 0 ;
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
case 600:
#line 5750 "GetDP.y"
{ 
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = yyvsp[0].c ; 
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen(yyvsp[0].c)+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, yyvsp[0].c);
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
	Free(yyvsp[0].c);
      }
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 601:
#line 5764 "GetDP.y"
{ 
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = yyvsp[0].c ; 
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen(yyvsp[0].c)+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, yyvsp[0].c);
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
	Free(yyvsp[0].c);
      }
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 602:
#line 5778 "GetDP.y"
{ 
      if(!PostOperation_S.AppendString){
	PostSubOperation_S.FileOut = yyvsp[0].c ; 
      }
      else{
	PostSubOperation_S.FileOut =
	  (char *)Malloc((strlen(yyvsp[0].c)+strlen(PostOperation_S.AppendString)+1)*sizeof(char));
	strcpy(PostSubOperation_S.FileOut, yyvsp[0].c);
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
	Free(yyvsp[0].c);
      }
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 603:
#line 5792 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 604:
#line 5796 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 605:
#line 5800 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 606:
#line 5804 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 607:
#line 5808 "GetDP.y"
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
case 608:
#line 5818 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 609:
#line 5823 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 610:
#line 5828 "GetDP.y"
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
case 611:
#line 5848 "GetDP.y"
{ 
      PostSubOperation_S.Comma = 1 ; 
    ;
    break;}
case 612:
#line 5852 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 613:
#line 5859 "GetDP.y"
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
case 614:
#line 5869 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 615:
#line 5878 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 616:
#line 5887 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 617:
#line 5894 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 618:
#line 5902 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 619:
#line 5906 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 620:
#line 5915 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 621:
#line 5919 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 622:
#line 5923 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 623:
#line 5931 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 624:
#line 5937 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 625:
#line 5941 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 626:
#line 5949 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 627:
#line 5956 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 628:
#line 5964 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 629:
#line 5971 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 630:
#line 5979 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 631:
#line 5986 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 632:
#line 5994 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 633:
#line 5998 "GetDP.y"
{
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;
    break;}
case 634:
#line 6007 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 635:
#line 6013 "GetDP.y"
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
case 636:
#line 6063 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 637:
#line 6078 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
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
case 638:
#line 6094 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-6].c ;      
      Constant_S.Name = yyvsp[-6].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-3].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      /* hack_fsetpos_printf(); */
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 639:
#line 6114 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-8].c ;      
      Constant_S.Name = yyvsp[-8].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-5].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
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
case 640:
#line 6134 "GetDP.y"
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
	  fsetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	  /* fsetpos() seems to position the file just after the For
	     but with one additional character (the one after EndFor)
	     at the beginning.  I do not understand why there is such
	     a mixing of two separate data. hack_fsetpos() removes the
	     useless additional character. */
	  hack_fsetpos();
	  /* hack_fsetpos_printf(); */
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	}
      }
    ;
    break;}
case 641:
#line 6172 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 642:
#line 6176 "GetDP.y"
{
    ;
    break;}
case 644:
#line 6191 "GetDP.y"
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
case 645:
#line 6206 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 646:
#line 6212 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 647:
#line 6218 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 648:
#line 6224 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;

    if (!(File = fopen(yyvsp[-2].c, "r"))) 
      Constant_S.Value.ListOfFloat = NULL ;
    else{
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
    }

    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 649:
#line 6240 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 650:
#line 6245 "GetDP.y"
{
      Constant_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  printf("%s: %g\n", yyvsp[-1].c, Constant_S.Value.Float);
	else
	  printf("%s: Dimension %d\n", yyvsp[-1].c, List_Nbr(Constant_S.Value.ListOfFloat));
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    printf(" (%d) %g\n", i, d);
	  }
    ;
    break;}
case 651:
#line 6261 "GetDP.y"
{
      Msg(INFO, "Line number: %d", yylinenum);
    ;
    break;}
case 652:
#line 6266 "GetDP.y"
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
case 653:
#line 6278 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 654:
#line 6288 "GetDP.y"
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
case 656:
#line 6307 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 657:
#line 6313 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 658:
#line 6319 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 659:
#line 6330 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 660:
#line 6331 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 661:
#line 6332 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 662:
#line 6333 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 663:
#line 6334 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 664:
#line 6335 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 665:
#line 6336 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 666:
#line 6337 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 667:
#line 6338 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 668:
#line 6339 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 669:
#line 6340 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 670:
#line 6341 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 671:
#line 6342 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 672:
#line 6343 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 673:
#line 6344 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 674:
#line 6345 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 675:
#line 6346 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 676:
#line 6347 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 677:
#line 6348 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 678:
#line 6349 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 679:
#line 6350 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 680:
#line 6354 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 681:
#line 6355 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 682:
#line 6356 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 683:
#line 6357 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 684:
#line 6358 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 685:
#line 6359 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 686:
#line 6360 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 687:
#line 6361 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 688:
#line 6362 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 689:
#line 6363 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 690:
#line 6364 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 691:
#line 6365 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 692:
#line 6366 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 693:
#line 6367 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 694:
#line 6368 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 695:
#line 6369 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 696:
#line 6370 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 697:
#line 6371 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 698:
#line 6372 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 699:
#line 6373 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 700:
#line 6374 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 701:
#line 6375 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 702:
#line 6376 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 703:
#line 6377 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 704:
#line 6378 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 705:
#line 6379 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 706:
#line 6380 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 707:
#line 6381 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 708:
#line 6382 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 709:
#line 6383 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 710:
#line 6384 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 711:
#line 6385 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 712:
#line 6386 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 713:
#line 6387 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 714:
#line 6388 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 715:
#line 6389 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 716:
#line 6390 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 717:
#line 6391 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 718:
#line 6393 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 719:
#line 6395 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 720:
#line 6400 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 721:
#line 6401 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 722:
#line 6402 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 723:
#line 6403 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 724:
#line 6404 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 725:
#line 6405 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 726:
#line 6406 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 727:
#line 6408 "GetDP.y"
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
case 728:
#line 6426 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 729:
#line 6429 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 730:
#line 6435 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 731:
#line 6438 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 732:
#line 6445 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 733:
#line 6451 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 734:
#line 6454 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 735:
#line 6457 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 736:
#line 6469 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 737:
#line 6475 "GetDP.y"
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
case 738:
#line 6486 "GetDP.y"
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
case 739:
#line 6502 "GetDP.y"
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
case 740:
#line 6524 "GetDP.y"
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
case 741:
#line 6539 "GetDP.y"
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
case 742:
#line 6577 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 743:
#line 6585 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 744:
#line 6597 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 745:
#line 6605 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;
    break;}
case 746:
#line 6616 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 747:
#line 6619 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 748:
#line 6626 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 749:
#line 6629 "GetDP.y"
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
case 750:
#line 6644 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 751:
#line 6649 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 752:
#line 6654 "GetDP.y"
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
case 753:
#line 6673 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 754:
#line 6683 "GetDP.y"
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
#line 6694 "GetDP.y"



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
    sprintf(tmpstr, "%s_%d", Name, Num_Index) ;
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
    sprintf(tmpstr, "%s_%d", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(tmpstr, "%s_%d_%d", Name, Num_Index1,Num_Index2) ;

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

