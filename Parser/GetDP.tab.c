/* A Bison parser, made from GetDP.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	tINT	257
# define	tFLOAT	258
# define	tSTRING	259
# define	tBIGSTR	260
# define	tEND	261
# define	tDOTS	262
# define	tStrCat	263
# define	tInclude	264
# define	tConstant	265
# define	tList	266
# define	tListAlt	267
# define	tLinSpace	268
# define	tLogSpace	269
# define	tDefineConstant	270
# define	tPi	271
# define	t0D	272
# define	t1D	273
# define	t2D	274
# define	t3D	275
# define	tExp	276
# define	tLog	277
# define	tLog10	278
# define	tSqrt	279
# define	tSin	280
# define	tAsin	281
# define	tCos	282
# define	tAcos	283
# define	tTan	284
# define	tAtan	285
# define	tAtan2	286
# define	tSinh	287
# define	tCosh	288
# define	tTanh	289
# define	tFabs	290
# define	tFloor	291
# define	tCeil	292
# define	tFmod	293
# define	tModulo	294
# define	tHypot	295
# define	tSolidAngle	296
# define	tTrace	297
# define	tOrder	298
# define	tCrossProduct	299
# define	tMHTransform	300
# define	tMHJacNL	301
# define	tGroup	302
# define	tDefineGroup	303
# define	tAll	304
# define	tInSupport	305
# define	tMovingBand2D	306
# define	tDefineFunction	307
# define	tConstraint	308
# define	tRegion	309
# define	tSubRegion	310
# define	tRegionRef	311
# define	tSubRegionRef	312
# define	tFilter	313
# define	tCoefficient	314
# define	tValue	315
# define	tTimeFunction	316
# define	tBranch	317
# define	tNode	318
# define	tLoop	319
# define	tNameOfResolution	320
# define	tJacobian	321
# define	tCase	322
# define	tIntegration	323
# define	tFMMIntegration	324
# define	tMatrix	325
# define	tType	326
# define	tSubType	327
# define	tCriterion	328
# define	tGeoElement	329
# define	tNumberOfPoints	330
# define	tMaxNumberOfPoints	331
# define	tNumberOfDivisions	332
# define	tMaxNumberOfDivisions	333
# define	tStoppingCriterion	334
# define	tFunctionSpace	335
# define	tName	336
# define	tBasisFunction	337
# define	tNameOfCoef	338
# define	tFunction	339
# define	tdFunction	340
# define	tSubFunction	341
# define	tSupport	342
# define	tEntity	343
# define	tSubSpace	344
# define	tNameOfBasisFunction	345
# define	tGlobalQuantity	346
# define	tEntityType	347
# define	tEntitySubType	348
# define	tNameOfConstraint	349
# define	tFormulation	350
# define	tQuantity	351
# define	tNameOfSpace	352
# define	tIndexOfSystem	353
# define	tSymmetry	354
# define	tEquation	355
# define	tGalerkin	356
# define	tdeRham	357
# define	tGlobalTerm	358
# define	tGlobalEquation	359
# define	tDt	360
# define	tDtDof	361
# define	tDtDt	362
# define	tDtDtDof	363
# define	tJacNL	364
# define	tNeverDt	365
# define	tDtNL	366
# define	tIn	367
# define	tResolution	368
# define	tDefineSystem	369
# define	tNameOfFormulation	370
# define	tNameOfMesh	371
# define	tFrequency	372
# define	tSolver	373
# define	tOriginSystem	374
# define	tDestinationSystem	375
# define	tOperation	376
# define	tOperationEnd	377
# define	tSetTime	378
# define	tDTime	379
# define	tSetFrequency	380
# define	tFourierTransform	381
# define	tFourierTransformJ	382
# define	tIf	383
# define	tElse	384
# define	tLanczos	385
# define	tPerturbation	386
# define	tUpdate	387
# define	tUpdateConstraint	388
# define	tBreak	389
# define	tTimeLoopTheta	390
# define	tTime0	391
# define	tTimeMax	392
# define	tTheta	393
# define	tTimeLoopNewmark	394
# define	tBeta	395
# define	tGamma	396
# define	tIterativeLoop	397
# define	tNbrMaxIteration	398
# define	tRelaxationFactor	399
# define	tIterativeTimeReduction	400
# define	tDivisionCoefficient	401
# define	tChangeOfState	402
# define	tChangeOfCoordinates	403
# define	tSystemCommand	404
# define	tGenerateFMMGroups	405
# define	tGenerateOnly	406
# define	tGenerateOnlyJac	407
# define	tSolveJac_AdaptRelax	408
# define	tSaveSolutionExtendedMH	409
# define	tInit_MovingBand2D	410
# define	tMesh_MovingBand2D	411
# define	tGenerate_MH_Moving	412
# define	tGenerateGroup	413
# define	tGenerateJacGroup	414
# define	tSaveMesh	415
# define	tPostProcessing	416
# define	tNameOfSystem	417
# define	tPostOperation	418
# define	tNameOfPostProcessing	419
# define	tUsingPost	420
# define	tAppend	421
# define	tPlot	422
# define	tPrint	423
# define	tPrintGroup	424
# define	tEcho	425
# define	tWrite	426
# define	tAdapt	427
# define	tOnGlobal	428
# define	tOnRegion	429
# define	tOnElementsOf	430
# define	tOnGrid	431
# define	tOnSection	432
# define	tOnPoint	433
# define	tOnLine	434
# define	tOnPlane	435
# define	tOnBox	436
# define	tWithArgument	437
# define	tFile	438
# define	tDepth	439
# define	tDimension	440
# define	tTimeStep	441
# define	tHarmonicToTime	442
# define	tFormat	443
# define	tHeader	444
# define	tFooter	445
# define	tSkin	446
# define	tSmoothing	447
# define	tTarget	448
# define	tSort	449
# define	tIso	450
# define	tNoNewLine	451
# define	tDecomposeInSimplex	452
# define	tChangeOfValues	453
# define	tFlag	454
# define	tHelp	455
# define	tCpu	456
# define	tCheck	457
# define	tDEF	458
# define	tOR	459
# define	tAND	460
# define	tEQUAL	461
# define	tNOTEQUAL	462
# define	tAPPROXEQUAL	463
# define	tLESSOREQUAL	464
# define	tGREATEROREQUAL	465
# define	tLESSLESS	466
# define	tGREATERGREATER	467
# define	tCROSSPRODUCT	468
# define	UNARYPREC	469
# define	tSHOW	470

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.53 2003-03-23 05:54:18 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to "getdp@geuz.org".
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
#include "Constant.h"
#include "Message.h"
#include "Magic.h"

char  tmp[MAX_STRING_LENGTH] ;


void  Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				 int (*fcmp)(const void *a, const void *b)) ;

int  fcmp_Constant                 (const void *a, const void *b) ;
int  fcmp_Expression_Name          (const void *a, const void *b) ;
int  fcmp_Group_Name               (const void *a, const void *b) ;
int  fcmp_Constraint_Name          (const void *a, const void *b) ;
int  fcmp_JacobianMethod_Name      (const void *a, const void *b) ;
int  fcmp_IntegrationMethod_Name   (const void *a, const void *b) ;
int  fcmp_BasisFunction_Name       (const void *a, const void *b) ;
int  fcmp_FunctionSpace_Name       (const void *a, const void *b) ;
int  fcmp_BasisFunction_NameOfCoef (const void *a, const void *b) ;
int  fcmp_SubSpace_Name            (const void *a, const void *b) ;
int  fcmp_GlobalQuantity_Name      (const void *a, const void *b) ;
int  fcmp_Formulation_Name         (const void *a, const void *b) ;
int  fcmp_DefineQuantity_Name      (const void *a, const void *b) ;
int  fcmp_DefineSystem_Name        (const void *a, const void *b) ;
int  fcmp_Resolution_Name          (const void *a, const void *b) ;
int  fcmp_PostProcessing_Name      (const void *a, const void *b) ;
int  fcmp_PostQuantity_Name        (const void *a, const void *b) ;
int  fcmp_PostOperation_Name       (const void *a, const void *b) ;

int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) ;
int  Add_Expression(struct Expression * Expression_P, char * Name, int Flag_Plus) ;
void Pro_DefineQuantityIndex(List_T * WholeQuantity_L,int DefineQuantityIndexEqu,
			     int * NbrQuantityIndex, int ** QuantityIndexTable,
			     int ** QuantityTraceGroupIndexTable) ;
void Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) ;
void Help(char *topic);

char  *strsave(char *string) ;
void  yyerror(char *s) ;
void  vyyerror(char *fmt, ...) ;
int   yylex();

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

char     StringAux1[255], * Save_Name ;

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

double   d, Value ;


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


#line 196 "GetDP.y"
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
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		1795
#define	YYFLAG		-32768
#define	YYNTBASE	237

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 470 ? yytranslate[x] : 425)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   223,     2,   231,   232,   221,     2,     2,
     226,   227,   219,   217,   236,   218,   230,   220,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     211,     2,   213,   205,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   228,     2,   229,   225,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   234,     2,   235,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   206,
     207,   208,   209,   210,   212,   214,   215,   216,   222,   224,
     233
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     1,     4,     5,     6,    10,    15,    20,    25,
      30,    35,    40,    45,    50,    55,    60,    62,    64,    67,
      69,    72,    76,    80,    84,    88,    92,    96,    99,   102,
     106,   110,   114,   118,   122,   126,   130,   134,   138,   142,
     146,   147,   150,   151,   152,   156,   161,   167,   168,   175,
     181,   183,   185,   186,   187,   206,   207,   208,   216,   219,
     221,   224,   226,   228,   230,   232,   233,   237,   242,   244,
     246,   250,   251,   255,   260,   262,   266,   272,   274,   279,
     283,   284,   288,   295,   296,   298,   303,   304,   307,   311,
     312,   315,   321,   328,   336,   338,   339,   343,   348,   353,
     354,   357,   358,   362,   364,   368,   369,   372,   374,   375,
     376,   384,   388,   392,   399,   403,   407,   411,   415,   419,
     423,   427,   431,   435,   439,   443,   447,   451,   455,   458,
     461,   464,   468,   470,   474,   477,   479,   482,   483,   489,
     490,   502,   512,   517,   522,   523,   531,   538,   541,   544,
     547,   550,   554,   557,   561,   565,   568,   572,   574,   578,
     579,   583,   590,   591,   596,   597,   600,   604,   609,   610,
     615,   616,   619,   623,   627,   632,   633,   638,   639,   642,
     646,   650,   655,   656,   661,   662,   665,   669,   673,   678,
     679,   684,   685,   688,   692,   696,   700,   704,   708,   712,
     713,   716,   720,   722,   723,   726,   730,   735,   739,   744,
     750,   751,   756,   757,   760,   764,   768,   772,   776,   780,
     784,   792,   796,   800,   804,   808,   812,   820,   828,   836,
     837,   840,   844,   846,   847,   850,   854,   859,   863,   868,
     873,   878,   883,   884,   889,   890,   893,   897,   901,   906,
     911,   919,   923,   927,   931,   932,   933,   934,   953,   954,
     959,   960,   963,   967,   971,   975,   977,   981,   982,   986,
     988,   992,   993,   997,   998,  1003,  1004,  1007,  1011,  1015,
    1019,  1020,  1025,  1026,  1029,  1033,  1037,  1041,  1046,  1047,
    1050,  1054,  1056,  1057,  1060,  1064,  1069,  1073,  1078,  1083,
    1084,  1089,  1090,  1093,  1097,  1101,  1105,  1109,  1110,  1117,
    1121,  1122,  1128,  1132,  1136,  1140,  1144,  1148,  1149,  1153,
    1154,  1157,  1162,  1167,  1172,  1177,  1178,  1181,  1185,  1189,
    1193,  1194,  1197,  1201,  1205,  1209,  1213,  1214,  1217,  1218,
    1219,  1229,  1233,  1237,  1241,  1245,  1251,  1252,  1255,  1259,
    1260,  1261,  1271,  1272,  1274,  1276,  1278,  1280,  1282,  1284,
    1286,  1291,  1295,  1296,  1299,  1303,  1305,  1306,  1309,  1313,
    1318,  1323,  1324,  1330,  1331,  1336,  1337,  1340,  1344,  1348,
    1352,  1356,  1360,  1364,  1368,  1372,  1375,  1379,  1380,  1384,
    1386,  1390,  1391,  1395,  1396,  1399,  1403,  1407,  1412,  1417,
    1422,  1427,  1433,  1439,  1442,  1450,  1462,  1470,  1484,  1492,
    1500,  1508,  1518,  1528,  1538,  1550,  1568,  1582,  1598,  1610,
    1624,  1625,  1633,  1634,  1642,  1650,  1656,  1662,  1672,  1682,
    1688,  1694,  1708,  1718,  1733,  1741,  1749,  1751,  1753,  1754,
    1757,  1761,  1765,  1768,  1769,  1772,  1776,  1780,  1784,  1788,
    1793,  1794,  1797,  1801,  1805,  1809,  1813,  1817,  1822,  1823,
    1826,  1830,  1834,  1838,  1842,  1847,  1848,  1851,  1855,  1859,
    1863,  1867,  1871,  1876,  1881,  1886,  1887,  1892,  1893,  1896,
    1900,  1904,  1908,  1912,  1916,  1920,  1921,  1924,  1928,  1930,
    1931,  1934,  1938,  1943,  1948,  1952,  1957,  1958,  1963,  1964,
    1967,  1971,  1976,  1977,  1983,  1989,  1990,  1993,  1994,  2001,
    2005,  2006,  2011,  2015,  2019,  2020,  2023,  2027,  2029,  2030,
    2033,  2037,  2041,  2045,  2049,  2054,  2055,  2064,  2065,  2066,
    2070,  2078,  2086,  2095,  2096,  2107,  2114,  2118,  2125,  2127,
    2129,  2131,  2133,  2134,  2138,  2140,  2143,  2146,  2159,  2162,
    2178,  2183,  2196,  2214,  2237,  2250,  2251,  2254,  2258,  2263,
    2268,  2272,  2275,  2278,  2282,  2286,  2290,  2294,  2298,  2302,
    2306,  2310,  2314,  2318,  2322,  2326,  2332,  2335,  2338,  2342,
    2352,  2356,  2357,  2360,  2365,  2370,  2376,  2377,  2381,  2387,
    2393,  2395,  2397,  2399,  2401,  2403,  2405,  2407,  2409,  2411,
    2413,  2415,  2417,  2419,  2421,  2423,  2425,  2427,  2429,  2431,
    2433,  2435,  2437,  2441,  2444,  2447,  2451,  2455,  2459,  2463,
    2467,  2471,  2475,  2479,  2483,  2487,  2491,  2495,  2499,  2503,
    2508,  2513,  2518,  2523,  2528,  2533,  2538,  2543,  2548,  2553,
    2560,  2565,  2570,  2575,  2580,  2585,  2590,  2597,  2604,  2611,
    2617,  2620,  2622,  2624,  2626,  2628,  2630,  2632,  2634,  2636,
    2637,  2639,  2641,  2645,  2647,  2649,  2653,  2657,  2661,  2667,
    2671,  2676,  2681,  2688,  2697,  2706,  2708,  2710
};
static const short yyrhs[] =
{
      -1,   238,   239,     0,     0,     0,   239,   240,   241,     0,
      48,   234,   244,   235,     0,    85,   234,   267,   235,     0,
      54,   234,   301,   235,     0,    67,   234,   286,   235,     0,
      69,   234,   292,   235,     0,    81,   234,   308,   235,     0,
      96,   234,   331,   235,     0,   114,   234,   357,   235,     0,
     162,   234,   387,   235,     0,   164,   234,   399,   235,     0,
     403,     0,   416,     0,    10,   424,     0,   242,     0,   201,
       7,     0,   201,   169,     7,     0,   201,   203,     7,     0,
     201,    23,     7,     0,   201,   202,     7,     0,   201,   201,
       7,     0,   201,     5,     7,     0,   202,     7,     0,   203,
       7,     0,   203,    48,     7,     0,   203,    85,     7,     0,
     203,    54,     7,     0,   203,    67,     7,     0,   203,    69,
       7,     0,   203,    81,     7,     0,   203,    96,     7,     0,
     203,   114,     7,     0,   203,   162,     7,     0,   203,   164,
       7,     0,   203,     3,     7,     0,     0,   243,   407,     0,
       0,     0,   244,   245,   246,     0,     5,   204,   251,     7,
       0,     5,   266,   204,   251,     7,     0,     0,     5,   264,
     204,   247,   251,     7,     0,    49,   228,   262,   229,     7,
       0,   248,     0,   416,     0,     0,     0,     5,   228,     3,
     229,   204,    52,   249,   228,   231,   259,   250,   236,   231,
     259,   236,   419,   229,     7,     0,     0,     0,   255,   228,
     252,   256,   253,   257,   229,     0,   231,   259,     0,   251,
       0,     5,   265,     0,    55,     0,     5,     0,   259,     0,
      50,     0,     0,   263,   258,   259,     0,   263,    51,     5,
     265,     0,     5,     0,   261,     0,   234,   260,   235,     0,
       0,   260,   263,   261,     0,   260,   263,   218,   261,     0,
       3,     0,     3,     8,   419,     0,     3,     8,     3,     8,
     419,     0,     5,     0,     5,   234,   419,   235,     0,     5,
     234,   235,     0,     0,   262,   263,     5,     0,   262,   263,
       5,   234,   419,   235,     0,     0,   236,     0,   234,   231,
     419,   235,     0,     0,   234,   235,     0,   234,   419,   235,
       0,     0,   267,   268,     0,    53,   228,   269,   229,     7,
       0,     5,   228,   229,   204,   270,     7,     0,     5,   228,
     254,   229,   204,   270,     7,     0,   416,     0,     0,   269,
     263,     5,     0,    11,   228,   419,   229,     0,    85,   228,
       5,   229,     0,     0,   271,   274,     0,     0,   234,   273,
     235,     0,   270,     0,   273,   236,   270,     0,     0,   275,
     276,     0,   279,     0,     0,     0,   276,   205,   277,   276,
       8,   278,   276,     0,   276,   219,   276,     0,   276,   222,
     276,     0,    45,   228,   276,   236,   276,   229,     0,   276,
     220,   276,     0,   276,   217,   276,     0,   276,   218,   276,
       0,   276,   221,   276,     0,   276,   225,   276,     0,   276,
     211,   276,     0,   276,   213,   276,     0,   276,   212,   276,
       0,   276,   214,   276,     0,   276,   208,   276,     0,   276,
     209,   276,     0,   276,   210,   276,     0,   276,   207,   276,
       0,   276,   206,   276,     0,   218,   276,     0,   217,   276,
       0,   223,   276,     0,   226,   276,   227,     0,   420,     0,
     418,   283,   285,     0,     5,   356,     0,   356,     0,   356,
     283,     0,     0,   106,   280,   228,   274,   229,     0,     0,
      46,   228,     5,   228,   281,   274,   229,   229,   234,   419,
     235,     0,    47,   228,     5,   229,   234,   419,   236,   419,
     235,     0,    42,   228,   356,   229,     0,    44,   228,   356,
     229,     0,     0,    43,   282,   228,   274,   236,   254,   229,
       0,   211,     5,   213,   228,   274,   229,     0,   232,     5,
       0,   232,   187,     0,   232,   125,     0,   232,     3,     0,
     279,   231,     3,     0,   231,     3,     0,   279,   233,     3,
       0,   228,   230,   229,     0,   228,   229,     0,   228,   284,
     229,     0,   276,     0,   284,   236,   276,     0,     0,   234,
     422,   235,     0,   234,    55,   228,   254,   229,   235,     0,
       0,   286,   234,   287,   235,     0,     0,   287,   288,     0,
      82,     5,     7,     0,    68,   234,   289,   235,     0,     0,
     289,   234,   290,   235,     0,     0,   290,   291,     0,    55,
     254,     7,     0,    55,    50,     7,     0,    67,     5,   285,
       7,     0,     0,   292,   234,   293,   235,     0,     0,   293,
     294,     0,    82,     5,     7,     0,    74,   270,     7,     0,
      68,   234,   295,   235,     0,     0,   295,   234,   296,   235,
       0,     0,   296,   297,     0,    72,     5,     7,     0,    73,
       5,     7,     0,    68,   234,   298,   235,     0,     0,   298,
     234,   299,   235,     0,     0,   299,   300,     0,    75,     5,
       7,     0,    76,   419,     7,     0,    77,   419,     7,     0,
      78,   419,     7,     0,    79,   419,     7,     0,    80,   419,
       7,     0,     0,   301,   302,     0,   234,   303,   235,     0,
     416,     0,     0,   303,   304,     0,    82,     5,     7,     0,
      82,     5,   264,     7,     0,    72,     5,     7,     0,    68,
     234,   305,   235,     0,    68,     5,   234,   305,   235,     0,
       0,   305,   234,   306,   235,     0,     0,   306,   307,     0,
      72,     5,     7,     0,    55,   254,     7,     0,    56,   254,
       7,     0,    62,   270,     7,     0,    61,   270,     7,     0,
      66,     5,     7,     0,    63,   234,     3,   263,     3,   235,
       7,     0,    57,   254,     7,     0,    58,   254,     7,     0,
      85,   270,     7,     0,    60,   270,     7,     0,    59,   270,
       7,     0,    85,   228,   270,   236,   270,   229,     7,     0,
      60,   228,   270,   236,   270,   229,     7,     0,    59,   228,
     270,   236,   270,   229,     7,     0,     0,   308,   309,     0,
     234,   310,   235,     0,   416,     0,     0,   310,   311,     0,
      82,     5,     7,     0,    82,     5,   264,     7,     0,    72,
       5,     7,     0,    83,   234,   312,   235,     0,    90,   234,
     318,   235,     0,    92,   234,   325,   235,     0,    54,   234,
     328,   235,     0,     0,   312,   234,   313,   235,     0,     0,
     313,   314,     0,    82,     5,     7,     0,    84,     5,     7,
       0,    84,     5,   264,     7,     0,    85,     5,   315,     7,
       0,    86,   234,     5,   263,     5,   235,     7,     0,    87,
     272,     7,     0,    88,   254,     7,     0,    89,   254,     7,
       0,     0,     0,     0,   234,    97,     5,     7,    96,     5,
     264,     7,   316,    48,   254,     7,   317,   114,     5,   265,
       7,   235,     0,     0,   318,   234,   319,   235,     0,     0,
     319,   320,     0,    82,     5,     7,     0,    91,   321,     7,
       0,    84,   323,     7,     0,     5,     0,   234,   322,   235,
       0,     0,   322,   263,     5,     0,     5,     0,   234,   324,
     235,     0,     0,   324,   263,     5,     0,     0,   325,   234,
     326,   235,     0,     0,   326,   327,     0,    82,     5,     7,
       0,    72,     5,     7,     0,    84,     5,     7,     0,     0,
     328,   234,   329,   235,     0,     0,   329,   330,     0,    84,
       5,     7,     0,    93,   255,     7,     0,    94,   258,     7,
       0,    95,     5,   265,     7,     0,     0,   331,   332,     0,
     234,   333,   235,     0,   416,     0,     0,   333,   334,     0,
      82,     5,     7,     0,    82,     5,   264,     7,     0,    72,
       5,     7,     0,    97,   234,   335,   235,     0,   101,   234,
     341,   235,     0,     0,   335,   234,   336,   235,     0,     0,
     336,   337,     0,    82,     5,     7,     0,    72,    92,     7,
       0,    72,   102,     7,     0,    72,     5,     7,     0,     0,
      98,     5,   265,   338,   340,     7,     0,    99,     3,     7,
       0,     0,   228,   339,   274,   229,     7,     0,   113,   254,
       7,     0,    69,     5,     7,     0,    70,     5,     7,     0,
      67,     5,     7,     0,   100,     3,     7,     0,     0,   228,
       5,   229,     0,     0,   341,   342,     0,   102,   234,   347,
     235,     0,   103,   234,   347,   235,     0,   104,   234,   351,
     235,     0,   105,   234,   343,   235,     0,     0,   343,   344,
       0,    72,     5,     7,     0,    95,     5,     7,     0,   234,
     345,   235,     0,     0,   345,   346,     0,    64,   356,     7,
       0,    65,   356,     7,     0,   101,   356,     7,     0,   113,
     254,     7,     0,     0,   347,   348,     0,     0,     0,   355,
     228,   349,   274,   350,   236,   274,   229,     7,     0,   113,
     254,     7,     0,    67,     5,     7,     0,    69,     5,     7,
       0,    70,     5,     7,     0,    71,   228,     3,   229,     7,
       0,     0,   351,   352,     0,   113,   254,     7,     0,     0,
       0,   355,   228,   353,   274,   354,   236,   356,   229,     7,
       0,     0,   106,     0,   107,     0,   108,     0,   109,     0,
     110,     0,   111,     0,   112,     0,   234,     5,     5,   235,
       0,   234,     5,   235,     0,     0,   357,   358,     0,   234,
     359,   235,     0,   416,     0,     0,   359,   360,     0,    82,
       5,     7,     0,    82,     5,   264,     7,     0,   115,   234,
     362,   235,     0,     0,   122,   361,   234,   369,   235,     0,
       0,   362,   234,   363,   235,     0,     0,   363,   364,     0,
      82,     5,     7,     0,    72,     5,     7,     0,   116,   365,
       7,     0,   117,   424,     7,     0,   120,   367,     7,     0,
     121,     5,     7,     0,   118,   421,     7,     0,   119,   424,
       7,     0,     5,   265,     0,   234,   366,   235,     0,     0,
     366,   263,     5,     0,     5,     0,   234,   368,   235,     0,
       0,   368,   263,     5,     0,     0,   369,   370,     0,     5,
       5,     7,     0,   124,   270,     7,     0,   136,   234,   376,
     235,     0,   140,   234,   378,   235,     0,   143,   234,   380,
     235,     0,   146,   234,   382,   235,     0,     5,   228,     5,
     229,     7,     0,   124,   228,   270,   229,     7,     0,   135,
       7,     0,   129,   228,   270,   229,   234,   369,   235,     0,
     129,   228,   270,   229,   234,   369,   235,   130,   234,   369,
     235,     0,   126,   228,     5,   236,   270,   229,     7,     0,
     151,   228,     5,   236,   270,   236,   270,   236,   270,   236,
     270,   229,     7,     0,   152,   228,     5,   236,   421,   229,
       7,     0,   153,   228,     5,   236,   421,   229,     7,     0,
     133,   228,     5,   236,   270,   229,     7,     0,   134,   228,
       5,   236,   254,   236,     5,   229,     7,     0,   127,   228,
       5,   236,     5,   236,   421,   229,     7,     0,   128,   228,
       5,   236,     5,   236,   419,   229,     7,     0,   131,   228,
       5,   236,   419,   236,   421,   236,   419,   229,     7,     0,
     132,   228,     5,   236,     5,   236,     5,   236,   419,   236,
     421,   236,   419,   236,   419,   229,     7,     0,   136,   228,
     419,   236,   419,   236,   270,   236,   270,   229,   234,   369,
     235,     0,   140,   228,   419,   236,   419,   236,   270,   236,
     419,   236,   419,   229,   234,   369,   235,     0,   143,   228,
     419,   236,   419,   236,   270,   229,   234,   369,   235,     0,
     143,   228,   419,   236,   419,   236,   270,   236,   419,   229,
     234,   369,   235,     0,     0,   169,   371,   228,   373,   374,
     229,     7,     0,     0,   172,   372,   228,   373,   374,   229,
       7,     0,   149,   228,   254,   236,   270,   229,     7,     0,
     164,   228,     5,   229,     7,     0,   150,   228,   424,   229,
       7,     0,   154,   228,     5,   236,   421,   236,   419,   229,
       7,     0,   155,   228,     5,   236,   419,   236,   424,   229,
       7,     0,   156,   234,     5,   235,     7,     0,   157,   234,
       5,   235,     7,     0,   161,   234,     5,   236,   254,   236,
     424,   236,   424,   236,   270,   235,     7,     0,   161,   234,
       5,   236,   254,   236,   424,   235,     7,     0,   158,   228,
       5,   236,     5,   236,   419,   236,   419,   229,   234,   369,
     235,     7,     0,   159,   228,     5,   236,     5,   229,     7,
       0,   160,   228,     5,   236,     5,   229,     7,     0,   272,
       0,     5,     0,     0,   374,   375,     0,   236,   184,   424,
       0,   236,   187,   421,     0,   236,   421,     0,     0,   376,
     377,     0,   137,   419,     7,     0,   138,   419,     7,     0,
     125,   270,     7,     0,   139,   270,     7,     0,   122,   234,
     369,   235,     0,     0,   378,   379,     0,   137,   419,     7,
       0,   138,   419,     7,     0,   125,   270,     7,     0,   141,
     419,     7,     0,   142,   419,     7,     0,   122,   234,   369,
     235,     0,     0,   380,   381,     0,   144,   419,     7,     0,
      74,   419,     7,     0,   145,   270,     7,     0,   200,   419,
       7,     0,   122,   234,   369,   235,     0,     0,   382,   383,
       0,   144,   419,     7,     0,   147,   419,     7,     0,    74,
     419,     7,     0,   200,   419,     7,     0,   115,     5,     7,
       0,   148,   234,   384,   235,     0,   122,   234,   369,   235,
       0,   123,   234,   369,   235,     0,     0,   384,   234,   385,
     235,     0,     0,   385,   386,     0,    72,     5,     7,     0,
      97,     5,     7,     0,   113,   254,     7,     0,    74,   419,
       7,     0,    85,   270,     7,     0,   200,     5,     7,     0,
       0,   387,   388,     0,   234,   389,   235,     0,   416,     0,
       0,   389,   390,     0,    82,     5,     7,     0,    82,     5,
     264,     7,     0,   116,     5,   265,     7,     0,   163,     5,
       7,     0,    97,   234,   391,   235,     0,     0,   391,   234,
     392,   235,     0,     0,   392,   393,     0,    82,     5,     7,
       0,    61,   234,   394,   235,     0,     0,   394,   102,   234,
     395,   235,     0,   394,     5,   234,   395,   235,     0,     0,
     395,   396,     0,     0,   355,   228,   397,   274,   229,     7,
       0,    72,     5,     7,     0,     0,   113,   398,   254,     7,
       0,    67,     5,     7,     0,    69,     5,     7,     0,     0,
     399,   400,     0,   234,   401,   235,     0,   416,     0,     0,
     401,   402,     0,    82,     5,     7,     0,   165,     5,     7,
       0,   189,     5,     7,     0,   167,   424,     7,     0,   122,
     234,   405,   235,     0,     0,   164,     5,   166,     5,   404,
     234,   405,   235,     0,     0,     0,   405,   406,   407,     0,
     168,   228,   409,   412,   413,   229,     7,     0,   169,   228,
     409,   412,   413,   229,     7,     0,   169,   228,     6,   236,
     419,   413,   229,     7,     0,     0,   170,   228,   254,   408,
     236,   113,   254,   413,   229,     7,     0,   171,   228,     6,
     413,   229,     7,     0,     5,   411,   236,     0,     5,   411,
     410,     5,   411,   236,     0,   219,     0,   220,     0,   217,
       0,   218,     0,     0,   228,   254,   229,     0,   174,     0,
     175,   254,     0,   176,   254,     0,   178,   234,   234,   422,
     235,   234,   422,   235,   234,   422,   235,   235,     0,   177,
     254,     0,   177,   234,   270,   236,   270,   236,   270,   235,
     234,   421,   236,   421,   236,   421,   235,     0,   179,   234,
     422,   235,     0,   180,   234,   234,   422,   235,   234,   422,
     235,   235,   234,   419,   235,     0,   181,   234,   234,   422,
     235,   234,   422,   235,   234,   422,   235,   235,   234,   419,
     236,   419,   235,     0,   182,   234,   234,   422,   235,   234,
     422,   235,   234,   422,   235,   234,   422,   235,   235,   234,
     419,   236,   419,   236,   419,   235,     0,   175,   254,   183,
       5,   234,   419,   236,   419,   235,   234,   419,   235,     0,
       0,   413,   414,     0,   236,   184,   424,     0,   236,   184,
     213,   424,     0,   236,   184,   216,   424,     0,   236,   185,
     419,     0,   236,   192,     0,   236,   193,     0,   236,   188,
     419,     0,   236,   189,     5,     0,   236,   190,   415,     0,
     236,   191,   415,     0,   236,   189,   415,     0,   236,   186,
     419,     0,   236,   187,   421,     0,   236,   173,     5,     0,
     236,   195,     5,     0,   236,   194,   419,     0,   236,    61,
     421,     0,   236,   196,   419,     0,   236,   196,   234,   422,
     235,     0,   236,   197,     0,   236,   198,     0,   236,   118,
     421,     0,   236,   149,   234,   270,   236,   270,   236,   270,
     235,     0,   236,   199,   272,     0,     0,   415,     6,     0,
       5,   204,   421,     7,     0,     5,   204,     6,     7,     0,
      16,   228,   417,   229,     7,     0,     0,   417,   263,     5,
       0,   417,   263,     5,   204,   419,     0,   417,   263,     5,
     204,     6,     0,    22,     0,    23,     0,    24,     0,    25,
       0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,     5,     0,   420,     0,   226,   419,   227,
       0,   218,   419,     0,   223,   419,     0,   419,   218,   419,
       0,   419,   217,   419,     0,   419,   219,   419,     0,   419,
     220,   419,     0,   419,   221,   419,     0,   419,   225,   419,
       0,   419,   211,   419,     0,   419,   213,   419,     0,   419,
     212,   419,     0,   419,   214,   419,     0,   419,   208,   419,
       0,   419,   209,   419,     0,   419,   207,   419,     0,   419,
     206,   419,     0,    22,   228,   419,   229,     0,    23,   228,
     419,   229,     0,    24,   228,   419,   229,     0,    25,   228,
     419,   229,     0,    26,   228,   419,   229,     0,    27,   228,
     419,   229,     0,    28,   228,   419,   229,     0,    29,   228,
     419,   229,     0,    30,   228,   419,   229,     0,    31,   228,
     419,   229,     0,    32,   228,   419,   236,   419,   229,     0,
      33,   228,   419,   229,     0,    34,   228,   419,   229,     0,
      35,   228,   419,   229,     0,    36,   228,   419,   229,     0,
      37,   228,   419,   229,     0,    38,   228,   419,   229,     0,
      39,   228,   419,   236,   419,   229,     0,    40,   228,   419,
     236,   419,   229,     0,    41,   228,   419,   236,   419,   229,
       0,   419,   205,   419,     8,   419,     0,   419,   231,     0,
       4,     0,     3,     0,    17,     0,    18,     0,    19,     0,
      20,     0,    21,     0,     5,     0,     0,   419,     0,   423,
       0,   234,   422,   235,     0,   419,     0,   423,     0,   422,
     236,   419,     0,   422,   236,   423,     0,   419,     8,   419,
       0,   419,     8,   419,     8,   419,     0,     5,   234,   235,
       0,     5,   234,   422,   235,     0,    12,   228,     5,   229,
       0,    13,   228,     5,   236,     5,   229,     0,    14,   228,
     419,   236,   419,   236,   419,   229,     0,    15,   228,   419,
     236,   419,   236,   419,   229,     0,     6,     0,     5,     0,
       9,   228,   424,   236,   424,   229,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   346,   346,   418,   421,   421,   427,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   440,   442,   444,   449,
     458,   461,   463,   465,   467,   469,   471,   473,   475,   477,
     479,   481,   483,   485,   487,   489,   491,   493,   495,   497,
     500,   500,   522,   525,   525,   529,   534,   537,   537,   542,
     544,   546,   551,   551,   551,   577,   577,   577,   605,   614,
     621,   656,   661,   672,   675,   689,   694,   697,   746,   759,
     785,   790,   805,   823,   844,   850,   859,   873,   907,   920,
     940,   944,   954,   971,   971,   974,   980,   983,   986,   996,
     999,  1002,  1006,  1026,  1070,  1074,  1077,  1094,  1103,  1110,
    1110,  1118,  1124,  1128,  1133,  1138,  1138,  1151,  1155,  1155,
    1155,  1197,  1203,  1209,  1215,  1221,  1227,  1233,  1239,  1245,
    1251,  1257,  1263,  1269,  1275,  1281,  1287,  1293,  1300,  1306,
    1308,  1317,  1321,  1327,  1401,  1435,  1444,  1456,  1456,  1469,
    1469,  1485,  1497,  1503,  1509,  1509,  1540,  1564,  1577,  1583,
    1590,  1596,  1603,  1610,  1620,  1623,  1624,  1627,  1630,  1633,
    1638,  1641,  1655,  1662,  1667,  1672,  1676,  1683,  1688,  1693,
    1698,  1704,  1708,  1713,  1716,  1752,  1760,  1765,  1774,  1778,
    1787,  1790,  1795,  1800,  1805,  1813,  1817,  1829,  1839,  1844,
    1849,  1854,  1866,  1870,  1920,  1923,  1926,  1929,  1932,  1941,
    1948,  1951,  1973,  1976,  1986,  1990,  1998,  2005,  2014,  2017,
    2037,  2054,  2076,  2086,  2090,  2102,  2126,  2151,  2156,  2164,
    2172,  2182,  2199,  2207,  2214,  2221,  2230,  2239,  2248,  2267,
    2275,  2278,  2301,  2305,  2314,  2318,  2326,  2333,  2342,  2345,
    2348,  2351,  2356,  2374,  2421,  2437,  2441,  2446,  2451,  2456,
    2470,  2490,  2495,  2519,  2574,  2578,  2578,  2578,  2655,  2661,
    2666,  2671,  2675,  2682,  2685,  2690,  2708,  2713,  2717,  2734,
    2748,  2753,  2757,  2770,  2776,  2783,  2790,  2794,  2801,  2811,
    2822,  2839,  2911,  2923,  2927,  2961,  2964,  2967,  3011,  3018,
    3021,  3043,  3047,  3055,  3059,  3067,  3074,  3084,  3086,  3091,
    3106,  3122,  3140,  3144,  3149,  3153,  3156,  3166,  3166,  3229,
    3234,  3234,  3552,  3557,  3566,  3575,  3584,  3589,  3592,  3630,
    3647,  3673,  3678,  3681,  3684,  3689,  3697,  3700,  3712,  3722,
    3734,  3743,  3746,  3750,  3752,  3754,  3760,  3780,  3784,  3784,
    3784,  3919,  3943,  3952,  3961,  3970,  3980,  3997,  4001,  4035,
    4035,  4035,  4114,  4117,  4118,  4119,  4120,  4121,  4122,  4123,
    4127,  4150,  4172,  4179,  4182,  4203,  4207,  4215,  4219,  4228,
    4235,  4238,  4238,  4245,  4261,  4278,  4294,  4298,  4303,  4312,
    4315,  4320,  4325,  4330,  4335,  4342,  4381,  4386,  4391,  4401,
    4413,  4417,  4422,  4433,  4442,  4449,  4475,  4482,  4488,  4494,
    4500,  4508,  4530,  4537,  4543,  4554,  4565,  4578,  4593,  4613,
    4634,  4646,  4666,  4683,  4702,  4723,  4757,  4770,  4784,  4797,
    4810,  4810,  4819,  4819,  4828,  4838,  4848,  4856,  4869,  4882,
    4891,  4900,  4914,  4927,  4944,  4958,  4976,  4982,  4992,  4998,
    5001,  5005,  5015,  5029,  5041,  5045,  5051,  5055,  5059,  5064,
    5073,  5086,  5090,  5096,  5100,  5104,  5108,  5113,  5122,  5134,
    5137,  5143,  5147,  5151,  5155,  5164,  5179,  5182,  5188,  5192,
    5196,  5201,  5211,  5217,  5223,  5232,  5236,  5240,  5254,  5257,
    5269,  5298,  5301,  5304,  5312,  5328,  5336,  5339,  5360,  5363,
    5374,  5377,  5385,  5393,  5439,  5444,  5449,  5453,  5457,  5464,
    5468,  5472,  5477,  5483,  5489,  5502,  5513,  5516,  5516,  5552,
    5563,  5563,  5569,  5578,  5594,  5602,  5605,  5610,  5613,  5622,
    5625,  5633,  5645,  5656,  5661,  5666,  5666,  5693,  5697,  5697,
    5710,  5716,  5720,  5726,  5726,  5735,  5742,  5756,  5778,  5781,
    5782,  5783,  5786,  5790,  5794,  5802,  5809,  5816,  5840,  5847,
    5859,  5872,  5892,  5918,  5951,  5971,  5995,  5998,  6006,  6013,
    6020,  6024,  6028,  6032,  6036,  6046,  6051,  6056,  6076,  6083,
    6092,  6101,  6110,  6117,  6125,  6129,  6138,  6142,  6146,  6154,
    6160,  6168,  6175,  6221,  6238,  6244,  6248,  6251,  6257,  6263,
    6274,  6276,  6277,  6278,  6279,  6280,  6281,  6282,  6283,  6284,
    6285,  6286,  6287,  6288,  6289,  6290,  6291,  6292,  6293,  6294,
    6295,  6298,  6300,  6301,  6302,  6303,  6304,  6305,  6306,  6307,
    6308,  6309,  6310,  6311,  6312,  6313,  6314,  6315,  6316,  6317,
    6318,  6319,  6320,  6321,  6322,  6323,  6324,  6325,  6326,  6327,
    6328,  6329,  6330,  6331,  6332,  6333,  6334,  6335,  6336,  6337,
    6338,  6341,  6344,  6345,  6346,  6347,  6348,  6349,  6350,  6366,
    6371,  6377,  6380,  6385,  6393,  6396,  6399,  6409,  6417,  6428,
    6444,  6466,  6481,  6519,  6527,  6537,  6542,  6557
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "tINT", "tFLOAT", "tSTRING", "tBIGSTR", 
  "tEND", "tDOTS", "tStrCat", "tInclude", "tConstant", "tList", 
  "tListAlt", "tLinSpace", "tLogSpace", "tDefineConstant", "tPi", "t0D", 
  "t1D", "t2D", "t3D", "tExp", "tLog", "tLog10", "tSqrt", "tSin", "tAsin", 
  "tCos", "tAcos", "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", 
  "tFabs", "tFloor", "tCeil", "tFmod", "tModulo", "tHypot", "tSolidAngle", 
  "tTrace", "tOrder", "tCrossProduct", "tMHTransform", "tMHJacNL", 
  "tGroup", "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", 
  "tDefineFunction", "tConstraint", "tRegion", "tSubRegion", "tRegionRef", 
  "tSubRegionRef", "tFilter", "tCoefficient", "tValue", "tTimeFunction", 
  "tBranch", "tNode", "tLoop", "tNameOfResolution", "tJacobian", "tCase", 
  "tIntegration", "tFMMIntegration", "tMatrix", "tType", "tSubType", 
  "tCriterion", "tGeoElement", "tNumberOfPoints", "tMaxNumberOfPoints", 
  "tNumberOfDivisions", "tMaxNumberOfDivisions", "tStoppingCriterion", 
  "tFunctionSpace", "tName", "tBasisFunction", "tNameOfCoef", "tFunction", 
  "tdFunction", "tSubFunction", "tSupport", "tEntity", "tSubSpace", 
  "tNameOfBasisFunction", "tGlobalQuantity", "tEntityType", 
  "tEntitySubType", "tNameOfConstraint", "tFormulation", "tQuantity", 
  "tNameOfSpace", "tIndexOfSystem", "tSymmetry", "tEquation", "tGalerkin", 
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDt", "tDtDof", "tDtDt", 
  "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL", "tIn", "tResolution", 
  "tDefineSystem", "tNameOfFormulation", "tNameOfMesh", "tFrequency", 
  "tSolver", "tOriginSystem", "tDestinationSystem", "tOperation", 
  "tOperationEnd", "tSetTime", "tDTime", "tSetFrequency", 
  "tFourierTransform", "tFourierTransformJ", "tIf", "tElse", "tLanczos", 
  "tPerturbation", "tUpdate", "tUpdateConstraint", "tBreak", 
  "tTimeLoopTheta", "tTime0", "tTimeMax", "tTheta", "tTimeLoopNewmark", 
  "tBeta", "tGamma", "tIterativeLoop", "tNbrMaxIteration", 
  "tRelaxationFactor", "tIterativeTimeReduction", "tDivisionCoefficient", 
  "tChangeOfState", "tChangeOfCoordinates", "tSystemCommand", 
  "tGenerateFMMGroups", "tGenerateOnly", "tGenerateOnlyJac", 
  "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH", "tInit_MovingBand2D", 
  "tMesh_MovingBand2D", "tGenerate_MH_Moving", "tGenerateGroup", 
  "tGenerateJacGroup", "tSaveMesh", "tPostProcessing", "tNameOfSystem", 
  "tPostOperation", "tNameOfPostProcessing", "tUsingPost", "tAppend", 
  "tPlot", "tPrint", "tPrintGroup", "tEcho", "tWrite", "tAdapt", 
  "tOnGlobal", "tOnRegion", "tOnElementsOf", "tOnGrid", "tOnSection", 
  "tOnPoint", "tOnLine", "tOnPlane", "tOnBox", "tWithArgument", "tFile", 
  "tDepth", "tDimension", "tTimeStep", "tHarmonicToTime", "tFormat", 
  "tHeader", "tFooter", "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", 
  "tNoNewLine", "tDecomposeInSimplex", "tChangeOfValues", "tFlag", 
  "tHelp", "tCpu", "tCheck", "tDEF", "'?'", "tOR", "tAND", "tEQUAL", 
  "tNOTEQUAL", "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", 
  "tGREATEROREQUAL", "tLESSLESS", "tGREATERGREATER", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", 
  "Stats", "@1", "ProblemDefinitions", "@2", "ProblemDefinition", 
  "Interactive", "@3", "Groups", "@4", "Group", "@5", "MovingBand2DGroup", 
  "@6", "@7", "ReducedGroupRHS", "@8", "@9", "GroupRHS", 
  "FunctionForGroup", "ListOfRegionOrAll", "SuppListOfRegion", 
  "SuppListTypeForGroup", "ListOfRegion", "RecursiveListOfRegion", 
  "IRegion", "DefineGroups", "Comma", "DefineDimension", "MultipleIndex", 
  "Index", "Functions", "Function", "DefineFunctions", "Expression", 
  "@10", "ListOfExpression", "RecursiveListOfExpression", 
  "WholeQuantityExpression", "@11", "WholeQuantity", "@12", "@13", 
  "WholeQuantity_Single", "@14", "@15", "@16", "ArgumentsForFunction", 
  "RecursiveListOfQuantity", "ParametersForFunction", "JacobianMethods", 
  "JacobianMethod", "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod", 
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase", 
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase", 
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint", 
  "ConstraintTerm", "ConstraintCases", "ConstraintCase", 
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace", 
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction", 
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@17", "@18", 
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction", 
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef", 
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@19", 
  "@20", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@21", 
  "@22", "GlobalTerm", "GlobalTermTerm", "@23", "@24", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@25", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@26", "@27", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@28", "@29", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@30", 
  "PostSubOperations", "@31", "PostSubOperation", "@32", 
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport", 
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", 
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", 
  "OneFExpr", "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", 
  "CharExpr", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,   238,   237,   239,   240,   239,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     243,   242,   244,   245,   244,   246,   246,   247,   246,   246,
     246,   246,   249,   250,   248,   252,   253,   251,   251,   254,
     254,   255,   255,   256,   256,   257,   257,   257,   258,   259,
     259,   260,   260,   260,   261,   261,   261,   261,   261,   261,
     262,   262,   262,   263,   263,   264,   265,   265,   266,   267,
     267,   268,   268,   268,   268,   269,   269,   270,   270,   271,
     270,   272,   272,   273,   273,   275,   274,   276,   277,   278,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   279,   279,   279,   279,   279,   279,   280,   279,   281,
     279,   279,   279,   279,   282,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   283,   283,   283,   284,   284,   285,
     285,   285,   286,   286,   287,   287,   288,   288,   289,   289,
     290,   290,   291,   291,   291,   292,   292,   293,   293,   294,
     294,   294,   295,   295,   296,   296,   297,   297,   297,   298,
     298,   299,   299,   300,   300,   300,   300,   300,   300,   301,
     301,   302,   302,   303,   303,   304,   304,   304,   304,   304,
     305,   305,   306,   306,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   308,
     308,   309,   309,   310,   310,   311,   311,   311,   311,   311,
     311,   311,   312,   312,   313,   313,   314,   314,   314,   314,
     314,   314,   314,   314,   315,   316,   317,   315,   318,   318,
     319,   319,   320,   320,   320,   321,   321,   322,   322,   323,
     323,   324,   324,   325,   325,   326,   326,   327,   327,   327,
     328,   328,   329,   329,   330,   330,   330,   330,   331,   331,
     332,   332,   333,   333,   334,   334,   334,   334,   334,   335,
     335,   336,   336,   337,   337,   337,   337,   338,   337,   337,
     339,   337,   337,   337,   337,   337,   337,   340,   340,   341,
     341,   342,   342,   342,   342,   343,   343,   344,   344,   344,
     345,   345,   346,   346,   346,   346,   347,   347,   349,   350,
     348,   348,   348,   348,   348,   348,   351,   351,   352,   353,
     354,   352,   355,   355,   355,   355,   355,   355,   355,   355,
     356,   356,   357,   357,   358,   358,   359,   359,   360,   360,
     360,   361,   360,   362,   362,   363,   363,   364,   364,   364,
     364,   364,   364,   364,   364,   365,   365,   366,   366,   367,
     367,   368,   368,   369,   369,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     371,   370,   372,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   373,   373,   374,   374,
     375,   375,   375,   376,   376,   377,   377,   377,   377,   377,
     378,   378,   379,   379,   379,   379,   379,   379,   380,   380,
     381,   381,   381,   381,   381,   382,   382,   383,   383,   383,
     383,   383,   383,   383,   383,   384,   384,   385,   385,   386,
     386,   386,   386,   386,   386,   387,   387,   388,   388,   389,
     389,   390,   390,   390,   390,   390,   391,   391,   392,   392,
     393,   393,   394,   394,   394,   395,   395,   397,   396,   396,
     398,   396,   396,   396,   399,   399,   400,   400,   401,   401,
     402,   402,   402,   402,   402,   404,   403,   405,   406,   405,
     407,   407,   407,   408,   407,   407,   409,   409,   410,   410,
     410,   410,   411,   411,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   413,   413,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   415,   415,   416,   416,   416,   417,   417,   417,   417,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   420,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   421,   422,   422,   422,   422,   423,   423,   423,
     423,   423,   423,   423,   423,   424,   424,   424
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     0,     2,     0,     0,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     2,     1,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     2,     0,     0,     3,     4,     5,     0,     6,     5,
       1,     1,     0,     0,    18,     0,     0,     7,     2,     1,
       2,     1,     1,     1,     1,     0,     3,     4,     1,     1,
       3,     0,     3,     4,     1,     3,     5,     1,     4,     3,
       0,     3,     6,     0,     1,     4,     0,     2,     3,     0,
       2,     5,     6,     7,     1,     0,     3,     4,     4,     0,
       2,     0,     3,     1,     3,     0,     2,     1,     0,     0,
       7,     3,     3,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     3,     1,     3,     2,     1,     2,     0,     5,     0,
      11,     9,     4,     4,     0,     7,     6,     2,     2,     2,
       2,     3,     2,     3,     3,     2,     3,     1,     3,     0,
       3,     6,     0,     4,     0,     2,     3,     4,     0,     4,
       0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
       3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
       4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     4,     3,     4,     5,
       0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
       7,     3,     3,     3,     3,     3,     7,     7,     7,     0,
       2,     3,     1,     0,     2,     3,     4,     3,     4,     4,
       4,     4,     0,     4,     0,     2,     3,     3,     4,     4,
       7,     3,     3,     3,     0,     0,     0,    18,     0,     4,
       0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
       3,     0,     3,     0,     4,     0,     2,     3,     3,     3,
       0,     4,     0,     2,     3,     3,     3,     4,     0,     2,
       3,     1,     0,     2,     3,     4,     3,     4,     4,     0,
       4,     0,     2,     3,     3,     3,     3,     0,     6,     3,
       0,     5,     3,     3,     3,     3,     3,     0,     3,     0,
       2,     4,     4,     4,     4,     0,     2,     3,     3,     3,
       0,     2,     3,     3,     3,     3,     0,     2,     0,     0,
       9,     3,     3,     3,     3,     5,     0,     2,     3,     0,
       0,     9,     0,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     2,     3,     1,     0,     2,     3,     4,
       4,     0,     5,     0,     4,     0,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     0,     3,     1,
       3,     0,     3,     0,     2,     3,     3,     4,     4,     4,
       4,     5,     5,     2,     7,    11,     7,    13,     7,     7,
       7,     9,     9,     9,    11,    17,    13,    15,    11,    13,
       0,     7,     0,     7,     7,     5,     5,     9,     9,     5,
       5,    13,     9,    14,     7,     7,     1,     1,     0,     2,
       3,     3,     2,     0,     2,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     3,     4,     0,     2,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     3,     4,     4,     4,     0,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     0,     2,     3,     1,     0,
       2,     3,     4,     4,     3,     4,     0,     4,     0,     2,
       3,     4,     0,     5,     5,     0,     2,     0,     6,     3,
       0,     4,     3,     3,     0,     2,     3,     1,     0,     2,
       3,     3,     3,     3,     4,     0,     8,     0,     0,     3,
       7,     7,     8,     0,    10,     6,     3,     6,     1,     1,
       1,     1,     0,     3,     1,     2,     2,    12,     2,    15,
       4,    12,    17,    22,    12,     0,     2,     3,     4,     4,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     2,     2,     3,     9,
       3,     0,     2,     4,     4,     5,     0,     3,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
       4,     4,     4,     4,     4,     4,     6,     6,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     3,     1,     1,     3,     3,     3,     5,     3,
       4,     4,     6,     8,     8,     1,     1,     6
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    19,     0,    16,    17,   659,   676,   675,     0,    18,
     586,    42,   199,   162,   175,   229,    89,   288,   362,   485,
       0,   514,     0,    20,     0,     0,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   652,   651,   658,
       0,     0,     0,     0,     0,   653,   654,   655,   656,   657,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   660,   611,     0,   661,     0,    83,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    23,    21,    25,    24,    22,    39,    29,    31,
      32,    33,    34,    30,    35,    36,    37,    38,     0,     0,
       0,     0,     0,   584,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   658,   613,
     614,     0,   663,     0,   664,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   650,   583,     0,     0,    84,     0,     6,     0,   203,
       8,   200,   202,   164,     9,   177,    10,   233,    11,   230,
     232,     0,     0,     7,    90,    94,   292,    12,   289,   291,
     366,    13,   363,   365,   489,    14,   486,   488,   525,   518,
      15,   515,   517,   542,     0,     0,     0,    86,    61,     0,
      59,   533,     0,   555,   669,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     612,   662,     0,   667,     0,   628,   627,   625,   626,   621,
     623,   622,   624,   616,   615,   617,   618,   619,   620,     0,
     585,   587,     0,     0,    44,    50,    51,     0,     0,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,     0,
     544,     0,     0,     0,     0,     0,     0,     0,     0,   555,
       0,   555,     0,    60,    74,    77,    71,    58,    69,     0,
      55,     0,   670,   671,     0,     0,     0,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,     0,   640,   641,
     642,   643,   644,   645,     0,     0,     0,   665,   666,     0,
       0,     0,     0,   659,     0,     0,     0,     0,    80,     0,
       0,     0,   201,   204,     0,     0,   163,   165,     0,    99,
       0,   176,   178,     0,     0,     0,     0,     0,     0,   231,
     234,     0,     0,    83,     0,     0,     0,     0,   290,   293,
       0,     0,   371,   364,   367,     0,     0,     0,     0,   487,
     490,   527,     0,     0,     0,     0,     0,   516,   519,     0,
     540,   541,   538,   539,   536,     0,   545,   546,    99,   548,
       0,     0,     0,     0,     0,     0,   555,     0,    87,     0,
       0,    83,     0,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,   668,   649,   677,   589,   588,   658,
       0,     0,     0,     0,    47,     0,    83,     0,   210,     0,
       0,   168,     0,   182,     0,     0,     0,   105,     0,   280,
       0,     0,   242,   258,   273,    99,     0,     0,     0,     0,
       0,   299,   319,     0,   373,     0,     0,   496,    86,     0,
     528,     0,   527,     0,     0,     0,   543,   542,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   652,    75,
      79,     0,    70,     0,     0,    64,    56,    63,   535,   659,
     659,     0,     0,     0,     0,     0,   659,     0,   581,   581,
     581,   561,   562,     0,     0,     0,   576,   577,   101,   672,
       0,     0,   639,   646,   647,   648,    45,     0,     0,    88,
       0,    62,     0,     0,     0,   210,     0,   207,   205,     0,
       0,     0,   166,     0,     0,     0,   180,   100,     0,   179,
       0,   237,   235,     0,     0,     0,     0,     0,    99,    91,
      96,   296,   294,     0,     0,     0,   368,     0,     0,   393,
     491,     0,     0,     0,   494,   526,     0,   520,   528,   521,
     523,   522,     0,     0,    99,     0,   550,     0,     0,     0,
     530,     0,   531,     0,    78,     0,    72,   555,    83,   573,
     578,    99,   570,     0,     0,   557,   560,   568,   569,   563,
     564,   567,   565,   566,   572,   571,     0,   574,    99,   580,
       0,     0,     0,    85,     0,    46,    49,    81,     0,   212,
     208,   206,   170,   167,   184,   181,     0,     0,   658,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,     0,
     144,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   135,     0,   132,   282,
     241,   236,   244,   238,   260,   239,   275,   240,    92,     0,
     295,   301,   297,     0,     0,     0,     0,   298,   320,   369,
     375,   370,     0,   492,   498,   495,   493,   529,   524,   537,
       0,     0,     0,     0,     0,     0,   532,    76,    73,     0,
       0,     0,     0,   558,   559,   582,     0,   103,     0,   673,
     674,    52,    48,     0,   209,     0,     0,     0,    97,    98,
     134,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     128,   130,     0,   152,   150,   147,   149,   148,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
     159,     0,     0,     0,     0,    93,     0,   336,   336,   346,
     325,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   420,   422,   372,   394,     0,     0,    99,     0,     0,
       0,     0,     0,    57,    68,     0,     0,    99,   575,   102,
      99,     0,     0,     0,     0,     0,     0,    99,    99,    99,
      99,     0,     0,     0,    99,   211,   213,     0,     0,   169,
     171,     0,     0,     0,   183,   185,     0,   105,     0,     0,
       0,     0,   105,     0,   131,     0,   361,     0,   127,   126,
     123,   124,   125,   119,   121,   120,   122,   115,   116,   111,
     114,   117,   112,   118,   151,   153,   155,     0,   157,     0,
       0,   133,     0,     0,     0,     0,   281,   283,     0,     0,
       0,     0,   101,     0,     0,   243,   245,     0,     0,     0,
     259,   261,     0,     0,     0,   274,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   310,   300,   302,   352,
     352,   352,     0,     0,     0,     0,     0,   659,     0,     0,
       0,   374,   376,     0,     0,    99,     0,     0,     0,     0,
      99,     0,     0,     0,     0,   403,     0,   443,     0,   450,
       0,   458,   465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   497,   499,     0,     0,     0,     0,     0,     0,   534,
      86,    66,     0,   104,     0,    82,     0,     0,     0,     0,
      99,     0,    99,     0,     0,     0,     0,     0,     0,    99,
       0,     0,     0,   159,   189,     0,     0,   142,     0,   143,
       0,   139,     0,     0,   105,   360,     0,   154,   156,     0,
       0,     0,     0,     0,     0,    86,     0,     0,   254,     0,
       0,     0,     0,     0,   269,   271,     0,   265,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,   105,     0,     0,     0,     0,   353,
     354,   355,   356,   357,   358,   359,     0,   321,   337,     0,
     322,     0,   323,   347,     0,     0,     0,   330,   324,   326,
       0,     0,    86,   387,     0,     0,     0,     0,   389,   391,
       0,     0,   395,     0,     0,   396,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   101,   502,     0,     0,
       0,     0,     0,     0,     0,    67,    99,     0,   215,   216,
     221,   222,     0,   225,     0,   224,   218,   217,    83,   219,
     214,     0,   223,   173,   172,     0,     0,   186,   187,     0,
       0,   105,     0,   138,     0,   109,   158,     0,   160,   284,
     285,   286,     0,   246,   247,     0,     0,     0,    83,   251,
     252,   253,   262,    83,   264,    83,   263,   278,   277,   279,
     315,   313,   314,   306,   304,   305,   303,   307,   309,   316,
     312,     0,     0,     0,     0,     0,     0,   338,     0,   349,
       0,     0,     0,   378,   377,   385,    83,   379,   380,   383,
     384,    83,   381,   382,     0,     0,    99,     0,     0,     0,
       0,     0,    99,     0,     0,     0,    99,     0,     0,    99,
     397,   444,     0,     0,    99,     0,     0,     0,     0,   398,
     451,     0,     0,     0,     0,    99,     0,   399,   459,     0,
       0,     0,     0,     0,     0,     0,     0,   400,   466,    99,
       0,    99,   659,   659,   659,     0,     0,     0,     0,     0,
       0,     0,     0,   437,   436,   438,   438,     0,   500,     0,
     659,     0,     0,     0,     0,     0,    53,    99,    99,     0,
      99,   174,   191,   188,     0,   113,     0,     0,   146,     0,
       0,   287,   248,     0,   249,     0,   270,     0,   266,     0,
     317,     0,   342,   343,   344,     0,   341,   105,   348,   105,
     327,   328,     0,     0,     0,     0,   329,   331,   386,     0,
     390,     0,   401,   402,     0,     0,     0,   393,     0,     0,
       0,     0,     0,   393,     0,     0,     0,     0,     0,   393,
       0,     0,     0,     0,     0,     0,     0,   393,     0,     0,
       0,     0,     0,   393,   393,     0,     0,   475,     0,     0,
     426,     0,     0,     0,     0,     0,   429,   430,     0,     0,
       0,     0,   425,     0,     0,     0,     0,   501,     0,     0,
       0,     0,     0,     0,   579,     0,     0,     0,     0,     0,
       0,   145,     0,     0,   110,     0,     0,     0,   272,   268,
       0,     0,   311,     0,   339,   350,     0,     0,     0,     0,
     388,   392,     0,   659,     0,     0,   659,     0,     0,     0,
      99,     0,   447,   445,   446,   448,    99,     0,   454,   452,
     453,   455,   456,    99,   461,     0,   460,   462,   463,   469,
     471,     0,     0,   467,   468,     0,   470,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   659,   439,
       0,   505,   505,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,   192,     0,     0,   161,     0,     0,     0,   308,   345,
       0,     0,   332,   333,   334,   335,   406,     0,     0,   404,
       0,     0,   410,     0,     0,   449,     0,   457,     0,   464,
     473,   474,   477,   472,   424,     0,   408,   409,     0,     0,
       0,   434,   435,     0,   421,     0,   659,   442,   423,   352,
     352,   554,     0,   547,   551,     0,     0,     0,   228,   227,
     220,   226,     0,     0,     0,     0,     0,     0,     0,   141,
       0,   250,   318,   105,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   440,   441,     0,     0,     0,   510,   504,     0,
     506,   503,   659,     0,     0,     0,   193,   194,   195,   196,
     197,   198,     0,     0,     0,     0,   412,   413,   393,     0,
       0,   411,     0,     0,   393,     0,     0,     0,    99,     0,
       0,     0,   476,   478,     0,   427,   428,     0,   432,     0,
       0,     0,     0,     0,   507,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     0,   659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,    99,   512,
     513,   509,     0,   105,   549,     0,     0,     0,   255,   340,
     351,   405,   414,     0,   393,     0,   418,   393,   479,   482,
     483,   480,   481,   484,     0,   393,     0,   511,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   552,     0,    54,     0,     0,   416,   393,   419,   407,
       0,   431,   508,     0,     0,     0,     0,   433,     0,   256,
       0,   417,     0,     0,     0,     0,     0,   415,   553,    86,
       0,     0,   257,     0,     0,     0
};

static const short yydefgoto[] =
{
    1793,     1,     2,     3,    20,    21,    22,   110,   198,   294,
     560,   295,   871,  1455,   240,   443,   628,   241,   242,   526,
     750,   866,   327,   441,   328,   466,   196,   366,   323,   367,
     115,   214,   393,   476,   477,  1334,   758,   577,   578,   704,
     907,  1359,   705,   777,  1211,   772,   809,   929,   931,   112,
     298,   377,   571,   766,   890,   113,   299,   382,   573,   767,
     895,  1206,  1460,  1551,   111,   201,   297,   373,   566,   765,
     886,   114,   209,   300,   390,   584,   812,   946,  1227,  1752,
    1783,   585,   813,   951,  1089,  1235,  1086,  1233,   586,   814,
     956,   580,   811,   937,   116,   218,   303,   399,   594,   816,
     968,  1370,  1104,  1471,   595,   728,   972,  1129,  1262,  1387,
     969,  1118,  1377,  1560,   971,  1123,  1379,  1561,  1119,   706,
     117,   222,   304,   404,   495,   598,   821,   982,  1134,  1266,
    1140,  1271,   732,   854,  1017,  1018,  1335,  1443,  1529,  1155,
    1291,  1157,  1300,  1159,  1308,  1160,  1318,  1515,  1635,  1683,
     118,   226,   305,   410,   602,   855,  1022,  1337,  1599,  1650,
    1723,  1693,   120,   231,   307,   418,    23,   306,   500,   606,
      66,   329,   234,   425,   309,   319,   331,   446,   641,    24,
     109,   707,   104,   105,   106,   173,   107,    29
};

static const short yypact[] =
{
  -32768,-32768,   126,  3128,   -37,   216,   -49,   -44,   -41,   -27,
      30,    62,   103,   170,   173,   181,    14,   417,   217,  1494,
  -32768,-32768,   332,-32768,-32768,  1795,-32768,-32768,   198,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
      72,-32768,   306,-32768,   445,   449,   466,   533,   535,-32768,
     538,-32768,   553,   559,   573,   576,   601,   603,   609,   615,
     649,   663,   296,   298,   344,   433,-32768,-32768,-32768,   294,
     721,   488,   507,   526,   534,-32768,-32768,-32768,-32768,-32768,
     607,   652,   655,   658,   666,   675,   678,   680,   698,   705,
     714,   723,   732,   738,   739,   745,   748,   760,   761,   762,
    2966,  2966,  2966,  2888,  1071,-32768,   740,-32768,   216,   -40,
     350,     9,   -93,   -30,    86,    98,    90,   124,   131,   783,
     133,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   794,   236,
      99,   823,   664,-32768,   909,   988,  2966,  2966,  2966,  2966,
    2966,  2966,  2966,  2966,  2966,  2966,  2966,  2966,  2966,  2966,
    2966,  2966,  2966,  2966,  2966,  2966,  2966,  2966,-32768,   -79,
     -79,  3909,  1071,    57,-32768,  2966,  2966,  2966,  2966,  2966,
    2966,  2966,  2966,  2966,  2966,  2966,  2966,  2966,  2966,  2966,
    2966,-32768,-32768,   759,   989,-32768,   994,-32768,   157,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,   -26,   785,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   786,   640,   781,   640,   -65,-32768,    32,
  -32768,-32768,   790,-32768,-32768,   212,   792,   795,  1780,  2876,
    1707,  3936,  3963,  3990,  4017,  4044,  4071,  4098,  4125,  4152,
    2910,  4179,  4206,  4233,  4260,  4287,  4314,  2949,  3127,  3148,
  -32768,-32768,  2888,  1302,  3039,  1424,  1814,  2987,  2987,   710,
     710,   710,   710,   313,   313,   -79,   -79,   -79,   -79,   216,
  -32768,   815,   263,   802,-32768,-32768,-32768,   146,    71,   149,
      94,   140,-32768,   357,    79,   364,   799,   803,    99,   519,
  -32768,    99,    99,    67,   805,   806,   808,   809,   810,-32768,
    2966,-32768,   812,-32768,  1029,   811,-32768,-32768,-32768,   844,
  -32768,   -10,-32768,-32768,  1036,  2966,  2966,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  2966,-32768,-32768,
  -32768,-32768,-32768,-32768,  2966,  2966,  2966,  1071,-32768,  2966,
    2966,   853,  2927,  1711,  1080,  2591,   881,   892,-32768,    24,
    1092,  1094,-32768,-32768,   867,  1097,-32768,-32768,   869,   112,
    1101,-32768,-32768,   873,  1103,  1104,   876,   879,   882,-32768,
  -32768,   911,   890,    -2,  1115,  1116,   888,   889,-32768,-32768,
    1119,   891,-32768,-32768,-32768,  1121,   896,  1126,  1133,-32768,
  -32768,-32768,  1134,   932,  1164,   216,  1165,-32768,-32768,   950,
  -32768,-32768,-32768,-32768,-32768,  1176,   999,-32768,   112,-32768,
     949,  2888,   951,   952,   956,     4,  4746,    80,-32768,  3005,
     746,   280,  1086,    66,  1203,  3116,-32768,   982,  3169,  3190,
    4341,  4368,  4395,  4422,  4746,  4746,-32768,-32768,  4746,   175,
    1205,   986,  2966,  3568,-32768,   130,    81,   983,-32768,  1211,
      37,-32768,  1212,-32768,   992,   993,  1215,-32768,  1216,-32768,
    1217,    38,-32768,-32768,-32768,   112,  1022,  1220,  1231,  1230,
      85,-32768,-32768,    89,-32768,  1004,   102,-32768,  1005,  1233,
    1010,  1240,-32768,  1243,  1245,  1246,-32768,   786,  1250,  1020,
    2888,   343,  2888,  2888,  2888,  1251,   166,  1252,  1256,  4746,
  -32768,  3599,-32768,   154,    99,-32768,-32768,-32768,-32768,  1834,
    1834,  1034,  1261,   119,  2966,  2966,  1834,  2966,  1264,-32768,
  -32768,-32768,-32768,  2966,  1265,  1124,-32768,-32768,  1037,-32768,
    2966,  2966,-32768,-32768,-32768,-32768,-32768,  1068,  3630,-32768,
     130,-32768,  1266,  1267,  1270,-32768,   148,-32768,-32768,  1050,
    1279,   369,-32768,   380,  2966,  1282,-32768,-32768,  1666,-32768,
     397,-32768,-32768,  1287,   399,   401,   409,  1288,   112,-32768,
  -32768,-32768,-32768,  1290,   411,   366,-32768,  1292,   431,-32768,
  -32768,  1294,   440,  1296,-32768,-32768,   332,-32768,  1069,-32768,
  -32768,-32768,  1075,  1073,   112,   472,-32768,   491,   497,   509,
  -32768,  1298,-32768,  2966,-32768,    29,-32768,-32768,   213,-32768,
  -32768,   112,-32768,   216,   216,-32768,  4746,  4746,-32768,  4746,
  -32768,  1311,  1311,  1311,  4746,-32768,  2888,  4746,   112,-32768,
    4449,  4476,  1271,-32768,  1315,-32768,-32768,  1095,   522,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  4503,  1105,   189,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1102,
  -32768,  1109,  1111,  1112,  1113,-32768,  1330,  1666,  1666,  1666,
    1666,  1340,   128,  1339,  4821,   253,  1117,  1117,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1342,
  -32768,-32768,-32768,  1118,  1120,  1125,  1127,-32768,-32768,-32768,
  -32768,-32768,   851,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    2966,  1110,  1128,  1130,  1136,  1141,-32768,  4746,-32768,   228,
    1131,   165,  1140,-32768,-32768,-32768,   555,-32768,   560,-32768,
  -32768,-32768,-32768,  2966,-32768,  1032,    77,   231,-32768,-32768,
  -32768,  1149,  1158,  1149,  1666,  1348,  1350,  1159,  1143,  1163,
    1163,  1163,  4798,-32768,-32768,-32768,-32768,-32768,    26,-32768,
    1666,  1666,  1666,  1666,  1666,  1666,  1666,  1666,  1666,  1666,
    1666,  1666,  1666,  1666,  1666,  1666,  1386,  1387,  1031,-32768,
    1162,   578,   565,   371,   336,-32768,  1809,-32768,-32768,-32768,
  -32768,    92,    69,    83,  1175,  1181,  1187,  1189,  1191,  1192,
    1194,  1198,  1420,   197,   270,   325,  1196,  1200,  1213,  1214,
    1222,  1223,  1224,  1225,  1206,  1209,  1226,  1228,  1241,  1210,
    1244,-32768,-32768,-32768,-32768,    73,  3211,   112,  2888,  2888,
    2888,  2888,  1432,-32768,-32768,  1388,    32,   112,-32768,-32768,
     112,  1247,  3661,    99,    99,    99,    99,   106,   145,   112,
     112,  1227,  1463,  1468,   147,-32768,-32768,   110,  1471,-32768,
  -32768,  1259,  1473,  1489,-32768,-32768,  1273,-32768,  1275,  2843,
    1268,  1276,-32768,  1284,-32768,  1289,-32768,  1666,  4840,  4858,
    4873,  4873,  4873,   807,   807,   807,   807,   521,   521,  1163,
    1163,  1163,  1163,  1163,-32768,-32768,-32768,  1297,  4821,   247,
    2849,-32768,  1512,   116,  1520,  1525,-32768,-32768,  1526,  1530,
    1531,  1303,  1037,    99,    99,-32768,-32768,  1533,    33,    34,
  -32768,-32768,  1535,  1536,  1538,-32768,-32768,  1540,  1541,  1542,
      96,  1544,  1545,  1496,  1548,    99,-32768,-32768,-32768,   846,
    1065,   517,    55,  1547,  1549,    35,   216,  1834,   216,    36,
    1550,-32768,-32768,  1551,  1552,   112,  1555,  1554,  1559,  1560,
     112,  1562,  1563,  1564,  1565,-32768,  2966,-32768,  2966,-32768,
    2966,-32768,-32768,    99,   216,  1567,  1568,  1569,  1571,  1573,
    1580,  1586,  1592,  1594,  1596,  1597,  1598,  1328,  1376,  1371,
    1604,-32768,-32768,  2966,  1377,   562,   567,   571,   597,-32768,
    1005,-32768,  1374,-32768,  1380,-32768,  1606,  1612,  1617,  1632,
     112,  1639,   112,  1640,  1641,  1644,  1649,  1647,  1650,   112,
    1652,  1653,  1654,  1162,-32768,  1655,  1656,-32768,  1428,-32768,
    1666,-32768,  1431,  1437,-32768,-32768,  3066,-32768,-32768,  1666,
    1439,   612,  1661,  1665,  1667,  1005,  1669,   104,  1443,  1673,
    1672,  1674,  1712,  1713,-32768,-32768,  1714,-32768,-32768,  1715,
    1720,  1747,  1748,  1749,  1750,  1751,  1755,  1757,  1758,  1760,
    1005,  1796,  1797,  1798,-32768,  1675,  1801,  1806,  1490,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,    99,-32768,-32768,  1574,
  -32768,    99,-32768,-32768,  1613,  1835,  1837,-32768,-32768,-32768,
    1836,  1838,  1005,-32768,  1843,  1873,  1875,  1878,-32768,-32768,
    1879,  1880,-32768,  1534,  1615,-32768,  1657,  1658,  1659,  1670,
    1660,  1668,  1681,  1687,  3232,   592,  3253,   667,  3274,   413,
     407,  1694,  1676,  1695,  1697,  1699,  1703,  1705,  1671,  1709,
    1710,  1725,  1726,  1732,  1682,    68,    68,-32768,  1881,  3692,
    1716,  1722,  1734,  1736,  1738,-32768,   112,    32,-32768,-32768,
  -32768,-32768,  1737,-32768,  1739,-32768,-32768,-32768,  1740,-32768,
  -32768,  1742,-32768,-32768,-32768,  1883,   620,-32768,-32768,    99,
    4773,-32768,  2966,-32768,  1718,-32768,  4821,    99,-32768,-32768,
  -32768,-32768,  1894,-32768,-32768,  1895,  1813,  1896,  1740,-32768,
  -32768,-32768,-32768,   633,-32768,   641,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  1752,  1942,  1973,  1976,  1981,  1989,-32768,  1995,-32768,
    1996,  1997,   315,-32768,-32768,-32768,   657,-32768,-32768,-32768,
  -32768,   683,-32768,-32768,  1999,  2000,   112,  2003,  2004,  1776,
    2966,  2007,   112,    99,  2966,  1781,   112,  2966,  2966,   112,
  -32768,-32768,  2966,  1783,   112,  2966,  2966,  2966,  2966,-32768,
  -32768,  2966,  2966,  1785,  2966,   112,  2966,-32768,-32768,  2966,
    2009,  1786,  1790,  2966,  2966,  1802,  2966,-32768,-32768,   112,
    2023,   112,  1834,  1834,  1834,  2966,  2031,  2033,  2036,  2038,
    2041,    99,  2040,-32768,-32768,-32768,-32768,    10,-32768,  1815,
    1834,  2888,  1816,  2888,  2888,  1818,-32768,   112,   112,  2045,
     112,-32768,-32768,-32768,  1822,-32768,  1825,  3295,-32768,  1666,
    1826,-32768,-32768,  2051,-32768,  2053,-32768,  2054,-32768,  2056,
    1845,  2055,-32768,-32768,-32768,  1851,-32768,-32768,-32768,-32768,
  -32768,-32768,  1149,  1149,  1149,    99,-32768,-32768,-32768,  2058,
  -32768,  2059,-32768,-32768,  1852,  1829,  1830,-32768,  3316,  1846,
    1855,  1849,  3337,-32768,  2080,   180,   300,  2081,  3358,-32768,
    2083,   356,   632,   653,  1107,  3379,  1160,-32768,  1193,  2098,
    1375,  1409,  2099,-32768,-32768,  1746,  2431,-32768,  2458,  1882,
  -32768,  1872,  1884,  1891,  1874,  3400,-32768,-32768,  1892,  1898,
    1900,  1899,-32768,   260,   312,  1897,  1903,-32768,  2966,  1916,
     686,  2966,   702,   704,-32768,  1917,  1905,  1926,  1921,  1928,
     518,-32768,  1929,  2966,  4821,  1925,  2102,  1932,-32768,-32768,
    2127,  2167,-32768,  2168,-32768,-32768,  2169,  2172,  2174,  2175,
  -32768,-32768,  2177,  1834,  2966,  1331,  1834,  2194,  2193,  2197,
     112,  1943,-32768,-32768,-32768,-32768,   112,  1990,-32768,-32768,
  -32768,-32768,-32768,   112,-32768,  2037,-32768,-32768,-32768,-32768,
  -32768,  2086,  2133,-32768,-32768,   654,-32768,  2196,   112,  2198,
    2200,  2966,   216,  2966,  2201,  2204,   216,  2209,  1756,-32768,
    2216,-32768,-32768,  3723,  1834,  1969,  3754,  1992,  1994,  1993,
    2223,  2224,  2226,  2241,  2244,  2966,  2966,  2966,  2966,  2966,
  -32768,-32768,  2017,  3785,-32768,  2156,  2246,  2025,-32768,-32768,
    2020,  2027,-32768,-32768,-32768,-32768,-32768,  2042,  4530,  2140,
    2039,  2044,-32768,  2048,  2060,-32768,  2062,-32768,   320,-32768,
  -32768,-32768,-32768,-32768,-32768,  2063,-32768,-32768,  4557,  2049,
    3421,-32768,-32768,   709,-32768,   216,  1834,-32768,-32768,  1122,
    1325,-32768,  2064,-32768,-32768,  2061,  2888,    32,-32768,-32768,
  -32768,-32768,  2267,  2479,  2506,  2527,  2554,  2575,  2966,-32768,
    2296,-32768,-32768,-32768,  1149,  2303,  2310,  2069,  2966,  2966,
    2311,   112,  2966,  2085,  2966,   347,   112,  2315,  2317,  2966,
    2318,   216,-32768,-32768,  2322,  2337,  2338,-32768,-32768,  2117,
  -32768,-32768,  1834,  2966,   711,  2110,-32768,-32768,-32768,-32768,
  -32768,-32768,  3816,  2113,  2119,  2121,-32768,-32768,-32768,  4584,
    3442,-32768,  2122,  3463,-32768,  4611,  2349,  2966,   112,  2354,
      99,  2361,-32768,-32768,  2131,-32768,-32768,  4638,-32768,  2134,
    2364,  2366,  2367,    99,-32768,  2141,  3484,  2157,  2966,-32768,
    2384,  2387,  2388,  2180,  2389,  1834,  2163,  2966,  2229,  2165,
    2399,  2626,  2406,  2407,  2410,  2411,   112,  2186,   112,-32768,
  -32768,-32768,  2414,-32768,-32768,  2966,  2189,  4665,-32768,-32768,
  -32768,-32768,-32768,  2203,-32768,  4692,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  2212,-32768,  2207,-32768,  2214,  3847,
    2966,  2437,  2398,  2966,  2276,  2219,  2323,  2453,  2372,  2454,
    2455,-32768,  3505,-32768,    99,  3526,-32768,-32768,-32768,-32768,
    2460,-32768,-32768,  2966,  2461,  2966,  2419,-32768,  3547,-32768,
    4719,-32768,  2966,  2356,  2464,  3878,  2480,-32768,-32768,  1005,
    2481,  2254,-32768,  2490,  2491,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  -266,-32768,-32768,  -285,  1561,-32768,
  -32768,  1575,  -439,-32768,  -425,-32768,  -323,  -460,  -491,-32768,
  -32768,-32768,-32768,  -385,-32768,  -536,-32768,  -889,-32768,  -517,
  -32768,-32768,-32768,-32768,-32768,-32768,  1803,-32768,  1440,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1937,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1679,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -962,  -663,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768, -1304,-32768,-32768,-32768,  1338,  1180,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   985,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2018,-32768,
    1913,-32768,  2396,-32768,  2030,  2302,  -299,-32768,   410,   595,
  -32768,-32768,  -100,  -448,  -512,  -136,   -35,   -97
};


#define	YYLAST		5098


static const short yytable[] =
{
     169,   170,   171,   172,   527,   770,   245,   603,  1058,  1124,
     570,   193,   649,  1063,     4,  1445,   392,   629,   630,    40,
     435,   583,   437,   419,   638,     6,   426,   427,   429,   467,
     593,   905,   324,   597,   325,   324,   601,   325,  1084,  1087,
    1132,  1138,   172,   509,   568,   582,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   174,   324,
     488,   325,   237,  1333,   983,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,     4,   592,  1485,   474,     4,   596,   460,   626,  1491,
     587,  1096,     6,   211,   237,  1497,     6,   174,   896,   600,
     898,  1224,  1446,  1505,     6,   237,   525,   474,   523,  1511,
    1512,   561,   238,   474,    26,    27,    -2,  1125,    28,     4,
     708,   784,   887,   785,  1019,   561,     4,   516,     4,   374,
       6,   203,   204,   564,   888,   237,   190,     6,   383,     6,
    1126,   212,   191,   375,   238,  1020,   474,   324,   474,   325,
    1051,   400,   292,   -62,   973,   238,   384,    25,   475,   322,
     864,   238,   357,     6,   974,  1214,   385,   386,    25,    30,
     779,   780,   781,   782,   387,   238,   388,  1493,  1097,   194,
      31,   475,   361,    32,   401,   238,   195,   475,  1098,   562,
     748,   402,   301,   719,   205,   206,   293,    33,   975,   976,
     977,   978,   979,   980,   369,  1251,   865,   378,   370,   444,
     436,    26,    27,   379,    49,    28,   445,   487,   371,   741,
     475,   380,   475,   515,   195,   448,   449,   358,   119,   627,
     445,   233,   235,   199,   200,  1447,   752,   450,    41,   708,
     708,   708,   708,   786,   451,   452,   453,   899,   468,   454,
     455,   906,   458,   757,    34,   463,   326,  1085,  1088,  1133,
    1139,   569,   569,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,  1127,
    1128,   928,   271,   272,   654,   511,    35,   984,   239,   891,
     326,   428,   648,   892,   893,   751,   376,  1494,  1021,   517,
     563,   985,   889,   121,   403,   787,   445,   195,   504,   569,
     207,   208,  1356,   569,   216,   217,   708,   981,   749,   389,
     239,   172,   633,   213,  1040,   634,   569,    36,   569,   519,
     521,   239,   708,   708,   708,   708,   708,   708,   708,   708,
     708,   708,   708,   708,   708,   708,   708,   708,   220,   221,
     708,   239,   558,  1499,  1703,   224,   225,   229,   230,   391,
    1708,   239,   625,  1042,   615,  1049,   617,   618,   619,  1382,
    1383,   372,   659,   660,   381,   176,   177,   178,   179,   180,
    1066,   181,   182,   183,   184,   621,   174,   185,   186,   187,
     188,   189,   445,   -62,    37,   190,  1080,    38,   952,   142,
     172,   191,   172,   172,   172,    39,  1384,  -610,   953,  1676,
     954,  1677,    42,   703,    43,   996,   108,  1031,  1385,   394,
    1754,   997,  1678,  1756,   636,   637,   635,   639,   986,   395,
      44,  1758,   -65,   644,  1679,   647,   405,   332,   272,   195,
     650,   651,   122,   947,   396,   948,   123,   862,   397,   708,
    1680,   406,   949,  1776,   445,  1136,   894,   363,   723,   724,
     725,   726,  1024,   124,   666,   174,  1068,   174,   174,   174,
     407,  1309,  1032,  1069,   806,  1033,   807,  1302,  1474,  1527,
    1475,   364,  1041,  1043,  1044,  1045,  1528,   365,   998,  1050,
      62,    63,    64,    65,   999,   176,   177,   178,   179,   180,
     756,   181,   182,   183,   184,   522,   195,   185,   186,   187,
     188,   189,  1310,   747,   138,   190,   139,   408,   142,  1311,
    1312,   191,   187,   188,   189,  1303,   753,   754,   190,  1185,
     125,  1530,   126,  1210,   191,   127,   172,  1681,  1528,  1633,
    1386,  1313,  1216,  1000,  1314,  1315,  1634,  1304,  1305,  1001,
     128,   176,   177,   178,   179,   180,   129,   181,   182,   183,
     184,   955,   140,   185,   186,   187,   188,   189,   616,   272,
     130,   190,  1682,   131,  1222,   197,    45,   191,  1036,  1037,
    1038,  1039,   398,  1544,  1545,  1546,  1547,  1548,  1549,   409,
    1144,   727,  1052,   662,   663,  1149,   950,  1316,   132,  1247,
     133,   174,   708,  1306,   664,   665,   134,  1225,    46,    47,
      48,   708,   135,  1109,  1110,  1111,  1112,  1113,  1114,  1115,
    1121,   709,   710,   712,   713,   714,   715,  1649,  1649,  1500,
     856,  1265,  1317,   716,   717,   721,   722,   938,  1307,   939,
     940,   941,   942,   943,   944,  1192,   136,  1194,  1081,  1082,
    1501,   141,   932,   872,  1201,   730,   731,    67,    68,    69,
     137,   933,   934,   935,   734,   735,    71,    72,    73,    74,
    1103,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   202,   742,   272,   210,
     215,   219,   223,   227,  1285,   232,   144,  1286,  1161,  1476,
    1477,  1478,  1025,  1026,  1027,  1028,   743,   272,   143,  1287,
    1288,  1289,   744,   272,  1664,   145,   420,   421,   422,   423,
     801,   802,   803,   804,   745,   272,   805,   192,  1346,    67,
      68,   168,  1122,  1550,   146,   424,   659,   764,   172,   172,
     172,   172,   147,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   228,  1293,
     868,   272,  1294,   296,  1071,   869,   870,  1181,   272,   233,
     945,  1345,  1182,   272,  1295,  1296,  1183,   272,  1297,  1298,
    1432,  1433,  1434,   936,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   174,   174,   174,   174,  1290,  1449,   243,
     172,  1256,  1184,   272,  1748,   148,  1258,   176,   177,   178,
     179,   180,  1464,   181,   182,   183,   184,  1218,   272,   185,
     186,   187,   188,   189,  1352,  1353,   822,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,  1366,   195,
     185,   186,   187,   188,   189,  1349,  1368,   195,   190,  1135,
     149,  1137,   100,   150,   191,   412,   151,   101,  1582,  1583,
     102,  1394,  1388,   195,   152,   174,  1154,  1400,  1156,   244,
    1158,  1404,  1299,   153,  1407,  1365,   154,  1162,   155,  1410,
    1367,   708,  1369,  1105,   246,  1106,  1107,  1108,  1390,   195,
    1419,  1535,   272,  1179,  1354,   413,   156,   185,   186,   187,
     188,   189,  1360,   157,  1429,   190,  1431,  1537,   272,  1538,
     272,   191,   158,  1389,  1640,  1641,  1697,   272,  1391,   642,
     643,   159,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,
     160,  1665,  1456,  1457,   100,  1459,   161,   162,   414,   101,
     415,  1567,   102,   163,  1570,   823,   164,   824,   825,   826,
     827,   520,   828,   829,   830,   831,   832,   833,   165,   166,
     167,   834,   416,   247,   835,   289,   290,   836,  1401,   291,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   302,   308,   850,  1597,   320,   330,   362,
     851,   333,  1602,   852,   799,   800,   801,   802,   803,   804,
     368,   334,   805,   411,    67,    68,   668,   439,   417,   430,
     431,   447,   432,   433,   434,   440,  1441,   438,    75,    76,
      77,    78,    79,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   175,
     442,  1117,   456,   461,  1643,   464,   853,   873,   874,   875,
     876,   877,   878,   879,   880,   881,   465,   469,   882,   470,
    1479,   471,   472,   473,   883,  1574,   478,   479,   480,   481,
     482,  1576,  1357,   483,  1502,   485,   484,   884,  1578,   486,
     489,   490,   491,   492,   493,   494,   496,    67,    68,   168,
     497,   498,  1105,  1585,  1106,  1107,  1108,   695,   499,   501,
    1695,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   502,  1504,  1655,   503,
     505,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,   506,
    1398,   507,   508,   510,  1402,   512,   513,  1405,  1406,  1644,
     514,  1645,  1408,  1733,  1646,  1411,  1412,  1413,  1414,   524,
    1506,  1415,  1416,  1700,  1418,  1450,  1420,  1452,  1453,  1421,
     528,   549,   556,  1425,  1426,   557,  1428,   565,   567,   572,
     574,   575,   576,   579,   581,  1435,   588,   589,  1109,  1110,
    1111,  1112,  1113,  1114,  1115,  1647,   590,   591,   599,   322,
     604,   172,   696,   172,   172,   605,  1672,   607,   697,   698,
     609,  1684,   610,   611,   699,   613,   614,   700,   620,   622,
     926,   927,   701,   702,   623,   703,   632,   885,   631,   640,
     645,   648,   652,   655,   656,   657,   176,   177,   178,   179,
     180,   462,   181,   182,   183,   184,   661,   667,   185,   186,
     187,   188,   189,  1712,   711,   718,   190,   720,  1790,   729,
    1120,   733,   191,   736,   738,   746,   174,   740,   174,   174,
     359,   739,   176,   177,   178,   179,   180,   755,   181,   182,
     183,   184,   762,   761,   185,   186,   187,   188,   189,   763,
     771,  1744,   190,  1746,   769,   778,   822,   773,   191,   774,
     775,   776,   100,   783,   788,   808,   857,   101,  1533,   815,
     102,  1536,   817,   900,   818,   901,   903,  1648,   646,   819,
     863,   820,   858,  1553,   859,   176,   177,   178,   179,   180,
     860,   181,   182,   183,   184,   861,   867,   185,   186,   187,
     188,   189,  1508,   703,  1568,   190,   897,   902,   805,   924,
     925,   191,  1644,  1030,  1645,  1714,   930,  1646,   176,   177,
     178,   179,   180,   987,   181,   182,   183,   184,  1722,   988,
     185,   186,   187,   188,   189,   989,  1509,   990,   190,   991,
     992,  1588,   993,  1590,   191,  1589,   994,   995,  1003,  1593,
    1002,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1647,  1029,
    1010,  1004,  1005,  1011,  1015,  1613,  1614,  1615,  1616,  1617,
    1006,  1007,  1008,  1009,  1012,   823,  1013,   824,   825,   826,
     827,  1046,   828,   829,   830,   831,   832,   833,  1047,  1014,
    1654,   834,  1016,  1048,   835,  1034,  1053,   836,  1055,  1774,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,  1054,  1056,   850,  1061,    50,  1642,  1101,
     851,    51,  1057,   852,  1059,  1062,   172,   176,   177,   178,
     179,   180,  1064,   181,   182,   183,   184,  1072,  1662,   185,
     186,   187,   188,   189,  1065,   864,  1067,   190,  1669,  1670,
    1075,  1076,  1673,   191,  1675,  1077,  1078,  1079,  1083,  1687,
    1090,  1091,    52,  1092,  1689,  1093,  1094,  1095,    53,  1099,
    1100,  1102,  1130,  1696,  1131,  1141,  1175,  1143,  1142,  1146,
    1651,    54,  1145,    55,  1147,  1148,  1569,  1150,  1151,  1152,
    1153,   174,  1163,  1164,  1165,    56,  1166,  1711,  1167,    57,
     176,   177,   178,   179,   180,  1168,   181,   182,   183,   184,
      58,  1169,   185,   186,   187,   188,   189,  1170,  1727,  1171,
     190,  1172,  1173,  1174,  1176,  1177,   191,  1735,    59,  1178,
    1186,  1187,  1180,  1188,   176,   177,   178,   179,   180,  1189,
     181,   182,   183,   184,  1190,  1749,   185,   186,   187,   188,
     189,   178,   179,   180,   190,   181,   182,   183,   184,  1191,
     191,   185,   186,   187,   188,   189,  1193,  1195,  1196,   190,
    1762,  1197,  1198,  1765,  1199,   191,    60,  1200,    61,  1202,
    1203,  1204,  1207,  1208,  1209,  1212,  1213,  1217,  1219,    67,
      68,   668,  1220,  1778,  1221,  1780,  1223,  1226,  1228,  1229,
    1252,  1230,  1785,    75,    76,    77,    78,    79,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,    67,    68,   459,    70,  1255,  1231,
    1232,  1234,  1236,    71,    72,    73,    74,  1237,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,  1513,  1238,  1239,  1240,  1241,  1242,    67,
      68,    69,  1243,  1274,  1244,  1245,   238,  1246,    71,    72,
      73,    74,   695,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    67,    68,
      69,    70,  1257,  1248,  1249,  1250,  1253,    71,    72,    73,
      74,  1254,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    67,    68,    69,
    1260,  1259,  1261,  1263,  1275,  1264,    71,    72,    73,    74,
    1267,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   957,   696,   958,   959,
    1268,   960,  1269,   697,   698,  1270,  1272,  1273,  1338,   699,
    1351,   961,   700,  1276,  1277,  1278,  1280,   701,   702,  1279,
     703,  1361,  1362,  1364,  1281,  1320,  1326,   962,   963,   964,
    1363,  1332,   176,   177,   178,   179,   180,  1282,   181,   182,
     183,   184,   965,  1283,   185,   186,   187,   188,   189,   100,
    1319,  1321,   190,  1322,   101,  1323,   337,   102,   191,  1324,
    1595,  1325,   239,  1596,  1327,   103,  1328,  1358,   822,  1372,
    1340,   176,   177,   178,   179,   180,  1341,   181,   182,   183,
     184,  1329,  1330,   185,   186,   187,   188,   189,  1331,  1342,
    1343,   190,  1344,  1347,   100,  1348,   195,   191,  1350,   101,
    1373,  1371,   102,  1374,  1375,   176,   177,   178,   179,   180,
     103,   181,   182,   183,   184,   822,  1376,   185,   186,   187,
     188,   189,  1378,  1380,  1381,   190,  1392,  1393,  1395,  1396,
    1397,   191,  1399,   100,  1422,  1403,   335,  1409,   101,  1417,
    1423,   102,   179,   180,  1424,   181,   182,   183,   184,   103,
    1430,   185,   186,   187,   188,   189,  1427,   966,  1436,   190,
    1437,  1438,   822,  1439,   967,   191,  1440,  1442,  1458,  1448,
    1451,  1461,   100,  1454,  1462,  1465,  1466,   101,  1467,  1468,
     102,  1469,  1472,  1480,  1481,  1483,  1484,   823,   103,   824,
     825,   826,   827,  1470,   828,   829,   830,   831,   832,   833,
    1473,  1482,  1487,   834,  1488,  1489,   835,  1492,  1495,   836,
    1498,   822,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,  1507,  1510,   850,  1518,  1555,
    1521,  1517,   851,  1519,   823,   852,   824,   825,   826,   827,
    1520,   828,   829,   830,   831,   832,   833,  1524,  1523,  1525,
     834,  1531,  1557,   835,  1540,  1526,   836,  1532,   822,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,  1534,  1539,   850,  1541,  1542,  1543,  1552,   851,
    1554,   823,   852,   824,   825,   826,   827,  1556,   828,   829,
     830,   831,   832,   833,  1558,  1559,  1562,   834,  1575,  1563,
     835,  1564,  1565,   836,  1566,   822,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,  1571,
    1572,   850,  1573,  1584,  1603,  1586,   851,  1587,  1591,   852,
     823,  1592,   824,   825,   826,   827,  1594,   828,   829,   830,
     831,   832,   833,  1598,  1607,  1577,   834,  1605,  1606,   835,
    1608,  1609,   836,  1610,   822,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,  1611,  1612,
     850,  1618,  1620,  1621,  1622,   851,  1623,   823,   852,   824,
     825,   826,   827,  1624,   828,   829,   830,   831,   832,   833,
    1627,  1625,  1579,   834,  1656,  1628,   835,  1630,  1638,   836,
    1629,   822,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,  1653,  1631,   850,  1632,  1636,
    1652,  1663,   851,  1668,   823,   852,   824,   825,   826,   827,
    1666,   828,   829,   830,   831,   832,   833,  1667,  1671,  1674,
     834,  1580,  1685,   835,  1686,  1688,   836,  1690,   822,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,  1691,  1692,   850,  1694,  1698,   569,  1701,   851,
    1702,  1706,   852,   823,  1710,   824,   825,   826,   827,  1713,
     828,   829,   830,   831,   832,   833,  1715,  1716,  1581,   834,
    1718,  1719,   835,  1720,  1721,   836,  1724,   822,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,  1728,  1726,   850,  1729,  1730,  1732,  1734,   851,  1737,
     823,   852,   824,   825,   826,   827,  1738,   828,   829,   830,
     831,   832,   833,  1740,  1741,  1731,   834,  1742,  1743,   835,
    1745,  1747,   836,  1750,   822,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,  1514,  1753,
     850,  1757,  1759,  1760,  1763,   851,  1764,   823,   852,   824,
     825,   826,   827,  1767,   828,   829,   830,   831,   832,   833,
    1769,  1771,  1772,   834,  1736,  1516,   835,  1777,  1779,   836,
    1786,  1787,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,  1789,  1657,   850,  1791,  1792,
    1794,  1795,   851,  1205,  1073,   852,   823,   970,   824,   825,
     826,   827,   658,   828,   829,   830,   831,   832,   833,  1074,
     810,  1766,   834,  1658,  1336,   835,  1444,  1600,   836,   737,
     608,   837,   838,   839,   840,   841,   842,   843,   844,   845,
     846,   847,   848,   849,  1659,   236,   850,   612,   321,     0,
       0,   851,     0,   823,   852,   824,   825,   826,   827,     0,
     828,   829,   830,   831,   832,   833,     0,     0,  1768,   834,
       0,  1660,   835,     0,     0,   836,     0,     0,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,     0,  1661,   850,     0,     0,     0,     0,   851,     0,
       0,   852,     0,     0,    67,    68,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1770,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,  1739,     0,     0,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,  1781,     0,   190,     0,     0,     0,
       0,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,     0,     0,   191,     0,     0,   100,
       0,     0,     0,     0,   101,     0,     0,   102,     0,     0,
       0,     0,   462,     0,     0,     0,     0,     0,     0,     0,
       0,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,    67,    68,    69,     0,     0,   191,     0,     0,
       0,    71,    72,    73,    74,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    67,    68,    69,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,  1070,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      67,    68,   168,   457,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    67,
      68,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   518,    68,
     168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   360,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   798,     0,     0,
     799,   800,   801,   802,   803,   804,     0,   100,   805,     0,
       0,     0,   101,     0,  1215,   102,     0,     0,     0,  1060,
       0,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,     0,   100,   191,     0,     0,
       0,   101,   336,     0,   102,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     4,     0,   190,     0,     0,     5,     0,
       0,   191,     0,     0,     6,   100,   347,     0,     0,     0,
     101,     0,     0,   102,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     7,   529,     0,     0,
     191,     0,     8,     0,   100,   354,     0,     0,     0,   101,
       0,     0,   102,     0,     0,     9,     0,    10,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,    11,
       0,     0,   190,    12,     0,     0,     0,     0,   191,     0,
       0,     0,     0,   100,    13,     0,     0,     0,   101,     0,
       0,   102,     0,     0,   530,     0,     0,     0,     0,     0,
       0,     0,    14,     0,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   531,     0,     0,     0,     0,
     191,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,     0,     0,   799,   800,   801,   802,   803,   804,   532,
      15,   805,    16,     0,     0,     0,     0,     0,     0,     0,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    19,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,   355,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,   356,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,   550,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,   551,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,  1023,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,  1284,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
     177,   178,   179,   180,   191,   181,   182,   183,   184,  1292,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
    1301,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
     184,  1463,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,  1486,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1490,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,  1496,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,  1503,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,  1522,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,  1639,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,  1705,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
     177,   178,   179,   180,   191,   181,   182,   183,   184,  1707,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
    1725,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
     184,  1773,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,  1775,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1782,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
       0,     0,     0,   559,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
     191,     0,     0,     0,   624,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
       0,   191,     0,     0,     0,   653,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   191,     0,     0,     0,  1035,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   191,     0,     0,     0,  1339,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,     0,     0,   191,     0,     0,     0,  1601,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,     0,     0,   191,     0,     0,     0,  1604,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,     0,     0,   191,     0,     0,     0,
    1619,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,     0,     0,   191,     0,     0,
       0,  1699,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   191,     0,
       0,     0,  1761,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
       0,     0,     0,  1788,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,   270,     0,     0,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,   338,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,   339,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,   340,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,   341,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,   342,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     343,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,   344,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,   345,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,   346,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,   348,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,   349,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,   350,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,   351,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,   352,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,   353,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     552,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,   553,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,   554,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,   555,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,   759,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,   760,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,   768,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,  1626,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,  1637,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,  1704,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
    1709,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,  1717,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,  1751,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,  1755,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,  1784,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,     0,     0,   191,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   798,     0,     0,
     799,   800,   801,   802,   803,   804,     0,     0,   805,     0,
       0,     0,  1355,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,     0,     0,   799,   800,   801,   802,   803,
     804,     0,     0,   805,     0,   904,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,     0,     0,   799,   800,
     801,   802,   803,   804,     0,     0,   805,   791,   792,   793,
     794,   795,   796,   797,   798,     0,     0,   799,   800,   801,
     802,   803,   804,     0,     0,   805,   792,   793,   794,   795,
     796,   797,   798,     0,     0,   799,   800,   801,   802,   803,
     804,     0,     0,   805,   795,   796,   797,   798,     0,     0,
     799,   800,   801,   802,   803,   804,     0,     0,   805
};

static const short yycheck[] =
{
     100,   101,   102,   103,   443,   668,   142,   498,   897,   971,
     470,   108,   548,   902,     5,     5,   301,   529,   530,     5,
     319,   481,   321,   308,   536,    16,   311,   312,   313,     5,
     490,     5,     3,   493,     5,     3,   496,     5,     5,     5,
       5,     5,   142,   428,     7,     7,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   103,     3,
     393,     5,     5,     5,     5,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     5,     7,  1397,    11,     5,     7,   363,   523,  1403,
     485,     5,    16,     5,     5,  1409,    16,   142,   771,     7,
     773,     7,   102,  1417,    16,     5,    50,    11,   441,  1423,
    1424,     5,    55,    11,     5,     6,     0,    72,     9,     5,
     578,     3,    55,     5,    61,     5,     5,   436,     5,    68,
      16,   234,   235,   466,    67,     5,   225,    16,    54,    16,
      95,    53,   231,    82,    55,    82,    11,     3,    11,     5,
      50,    82,     5,   228,    72,    55,    72,   204,    85,   234,
       5,    55,   272,    16,    82,  1064,    82,    83,   204,   228,
     697,   698,   699,   700,    90,    55,    92,     7,    92,   229,
     234,    85,   289,   234,   115,    55,   236,    85,   102,   465,
     625,   122,   228,   588,   234,   235,    49,   234,   116,   117,
     118,   119,   120,   121,    68,  1104,    51,    68,    72,   229,
     320,     5,     6,    74,     7,     9,   236,   229,    82,   614,
      85,    82,    85,   229,   236,   335,   336,   272,   166,   524,
     236,     5,     6,   234,   235,   235,   631,   347,   234,   697,
     698,   699,   700,   125,   354,   355,   356,   774,   234,   359,
     360,   235,   362,   648,   234,   365,   234,   234,   234,   234,
     234,   234,   234,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,   234,
     235,   808,   235,   236,   560,   431,   234,   228,   231,    68,
     234,   234,   234,    72,    73,   628,   235,     7,   235,   229,
     229,   228,   235,     7,   235,   187,   236,   236,   415,   234,
     234,   235,  1211,   234,   234,   235,   774,   235,   627,   235,
     231,   431,   213,   235,   228,   216,   234,   234,   234,   439,
     440,   231,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   234,   235,
     808,   231,   462,     7,  1668,   234,   235,   234,   235,   229,
    1674,   231,   218,   228,   510,   228,   512,   513,   514,    64,
      65,   235,   234,   235,   235,   205,   206,   207,   208,   209,
     907,   211,   212,   213,   214,   229,   431,   217,   218,   219,
     220,   221,   236,   228,   234,   225,   942,   234,    72,   234,
     510,   231,   512,   513,   514,   234,   101,   228,    82,    72,
      84,    74,     5,   234,     7,   228,   228,   866,   113,    72,
    1734,   234,    85,  1737,   534,   535,   533,   537,   823,    82,
      23,  1745,   229,   543,    97,   545,    82,   235,   236,   236,
     550,   551,     7,    82,    97,    84,     7,   229,   101,   907,
     113,    97,    91,  1767,   236,   977,   235,   204,   102,   103,
     104,   105,   857,     7,   574,   510,   229,   512,   513,   514,
     116,    74,   867,   236,   231,   870,   233,    74,  1377,   229,
    1379,   228,   877,   878,   879,   880,   236,   234,   228,   884,
     168,   169,   170,   171,   234,   205,   206,   207,   208,   209,
     646,   211,   212,   213,   214,   235,   236,   217,   218,   219,
     220,   221,   115,   623,   228,   225,   228,   163,   234,   122,
     123,   231,   219,   220,   221,   122,   633,   634,   225,  1030,
       7,   229,     7,  1060,   231,     7,   646,   200,   236,   229,
     235,   144,  1069,   228,   147,   148,   236,   144,   145,   234,
       7,   205,   206,   207,   208,   209,     7,   211,   212,   213,
     214,   235,   228,   217,   218,   219,   220,   221,   235,   236,
       7,   225,   235,     7,  1075,   235,   169,   231,   873,   874,
     875,   876,   235,    75,    76,    77,    78,    79,    80,   235,
     985,   235,   887,   234,   235,   990,   235,   200,     7,  1100,
       7,   646,  1060,   200,   234,   235,     7,  1077,   201,   202,
     203,  1069,     7,   106,   107,   108,   109,   110,   111,   112,
     113,   234,   235,   234,   235,   234,   235,  1599,  1600,     7,
     740,  1132,   235,   234,   235,   234,   235,    82,   235,    84,
      85,    86,    87,    88,    89,  1040,     7,  1042,   943,   944,
       7,   228,    84,   763,  1049,   234,   235,     3,     4,     5,
       7,    93,    94,    95,   234,   235,    12,    13,    14,    15,
     965,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   111,   235,   236,   114,
     115,   116,   117,   118,   122,   120,   228,   125,  1003,  1382,
    1383,  1384,   858,   859,   860,   861,   235,   236,     7,   137,
     138,   139,   235,   236,  1623,   228,   217,   218,   219,   220,
     219,   220,   221,   222,   235,   236,   225,     7,  1187,     3,
       4,     5,   235,   235,   228,   236,   234,   235,   858,   859,
     860,   861,   228,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     5,   122,
     235,   236,   125,   198,   930,   235,   236,   235,   236,     5,
     235,  1186,   235,   236,   137,   138,   235,   236,   141,   142,
    1322,  1323,  1324,   235,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   858,   859,   860,   861,   235,  1340,     6,
     930,  1116,   235,   236,  1723,   228,  1121,   205,   206,   207,
     208,   209,  1359,   211,   212,   213,   214,   235,   236,   217,
     218,   219,   220,   221,   234,   235,     5,   225,   205,   206,
     207,   208,   209,   231,   211,   212,   213,   214,   235,   236,
     217,   218,   219,   220,   221,  1198,   235,   236,   225,   976,
     228,   978,   218,   228,   231,    82,   228,   223,   234,   235,
     226,  1276,   235,   236,   228,   930,   996,  1282,   998,   235,
    1000,  1286,   235,   228,  1289,  1228,   228,  1004,   228,  1294,
    1233,  1359,  1235,    67,     5,    69,    70,    71,   235,   236,
    1305,   235,   236,  1023,  1209,   122,   228,   217,   218,   219,
     220,   221,  1217,   228,  1319,   225,  1321,   235,   236,   235,
     236,   231,   228,  1266,   235,   236,   235,   236,  1271,   539,
     540,   228,   106,   107,   108,   109,   110,   111,   112,   113,
     228,  1624,  1347,  1348,   218,  1350,   228,   228,   165,   223,
     167,  1483,   226,   228,  1486,   124,   228,   126,   127,   128,
     129,   235,   131,   132,   133,   134,   135,   136,   228,   228,
     228,   140,   189,     5,   143,   236,     7,   146,  1283,     5,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   228,   228,   164,  1528,   236,   228,   204,
     169,   229,  1534,   172,   217,   218,   219,   220,   221,   222,
     228,   236,   225,   234,     3,     4,     5,     8,   235,   234,
     234,     5,   234,   234,   234,   234,  1331,   235,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     8,
     236,   235,   229,     3,  1596,   204,   235,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   204,     5,    66,     5,
    1385,   234,     5,   234,    72,  1490,     5,   234,     5,     5,
     234,  1496,  1212,   234,     7,   204,   234,    85,  1503,   229,
       5,     5,   234,   234,     5,   234,     5,     3,     4,     5,
     234,     5,    67,  1518,    69,    70,    71,   106,     5,     5,
    1652,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   234,     7,  1607,     5,
       5,   106,   107,   108,   109,   110,   111,   112,   113,   229,
    1280,     5,   183,   234,  1284,   234,   234,  1287,  1288,    67,
     234,    69,  1292,  1705,    72,  1295,  1296,  1297,  1298,   113,
       7,  1301,  1302,  1663,  1304,  1341,  1306,  1343,  1344,  1309,
       7,   229,     7,  1313,  1314,   229,  1316,   234,     7,     7,
     228,   228,     7,     7,     7,  1325,   204,     7,   106,   107,
     108,   109,   110,   111,   112,   113,     5,     7,   234,   234,
       7,  1341,   211,  1343,  1344,   235,  1631,     7,   217,   218,
       7,  1636,     7,     7,   223,     5,   236,   226,     7,     7,
     229,   230,   231,   232,     8,   234,     5,   235,   234,     5,
       5,   234,   204,     7,     7,     5,   205,   206,   207,   208,
     209,   231,   211,   212,   213,   214,     7,     5,   217,   218,
     219,   220,   221,  1678,     7,     7,   225,     7,  1789,     7,
     235,     7,   231,     7,   235,     7,  1341,   234,  1343,  1344,
       8,   236,   205,   206,   207,   208,   209,     6,   211,   212,
     213,   214,     7,    52,   217,   218,   219,   220,   221,   234,
     228,  1716,   225,  1718,   229,     5,     5,   228,   231,   228,
     228,   228,   218,     3,     5,   228,   236,   223,  1448,     7,
     226,  1451,   234,     5,   234,     5,   213,   235,   234,   234,
     229,   234,   234,  1463,   234,   205,   206,   207,   208,   209,
     234,   211,   212,   213,   214,   234,   236,   217,   218,   219,
     220,   221,     7,   234,  1484,   225,   228,   228,   225,     3,
       3,   231,    67,     5,    69,  1680,   234,    72,   205,   206,
     207,   208,   209,   228,   211,   212,   213,   214,  1693,   228,
     217,   218,   219,   220,   221,   228,     7,   228,   225,   228,
     228,  1521,   228,  1523,   231,  1522,   228,     7,   228,  1526,
     234,   106,   107,   108,   109,   110,   111,   112,   113,     7,
     234,   228,   228,   234,   234,  1545,  1546,  1547,  1548,  1549,
     228,   228,   228,   228,   228,   124,   228,   126,   127,   128,
     129,   234,   131,   132,   133,   134,   135,   136,     5,   228,
    1606,   140,   228,     5,   143,   228,     5,   146,     5,  1764,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   234,     5,   164,   228,     3,  1595,     3,
     169,     7,   229,   172,   229,   229,  1606,   205,   206,   207,
     208,   209,   228,   211,   212,   213,   214,     5,  1618,   217,
     218,   219,   220,   221,   235,     5,   229,   225,  1628,  1629,
       5,     5,  1632,   231,  1634,     5,     5,   234,     5,  1639,
       5,     5,    48,     5,  1641,     5,     5,     5,    54,     5,
       5,     3,     5,  1653,     5,     5,   228,     5,     7,     5,
     235,    67,     7,    69,     5,     5,   235,     5,     5,     5,
       5,  1606,     5,     5,     5,    81,     5,  1677,     5,    85,
     205,   206,   207,   208,   209,     5,   211,   212,   213,   214,
      96,     5,   217,   218,   219,   220,   221,     5,  1698,     5,
     225,     5,     5,     5,   228,   234,   231,  1707,   114,     5,
     236,   231,   235,     7,   205,   206,   207,   208,   209,     7,
     211,   212,   213,   214,     7,  1725,   217,   218,   219,   220,
     221,   207,   208,   209,   225,   211,   212,   213,   214,     7,
     231,   217,   218,   219,   220,   221,     7,     7,     7,   225,
    1750,     7,     3,  1753,     7,   231,   162,     7,   164,     7,
       7,     7,     7,     7,   236,   234,   229,   228,     7,     3,
       4,     5,     7,  1773,     7,  1775,     7,   234,     5,     7,
       5,     7,  1782,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     3,     4,     5,     6,   228,     7,
       7,     7,     7,    12,    13,    14,    15,     7,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     7,     7,     7,     7,     7,     7,     3,
       4,     5,     7,   229,     7,     7,    55,     7,    12,    13,
      14,    15,   106,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     3,     4,
       5,     6,   228,     7,     7,     7,     5,    12,    13,    14,
      15,     5,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     3,     4,     5,
       5,   228,     5,     7,   229,     7,    12,    13,    14,    15,
       7,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    67,   211,    69,    70,
       7,    72,     7,   217,   218,     7,     7,     7,     7,   223,
       7,    82,   226,   236,   236,   236,   236,   231,   232,   229,
     234,     7,     7,     7,   236,   229,   235,    98,    99,   100,
      97,   229,   205,   206,   207,   208,   209,   236,   211,   212,
     213,   214,   113,   236,   217,   218,   219,   220,   221,   218,
     236,   236,   225,   236,   223,   236,   229,   226,   231,   236,
     184,   236,   231,   187,   235,   234,   236,   229,     5,     7,
     234,   205,   206,   207,   208,   209,   234,   211,   212,   213,
     214,   236,   236,   217,   218,   219,   220,   221,   236,   235,
     234,   225,   234,   236,   218,   236,   236,   231,   236,   223,
       7,   229,   226,     7,     3,   205,   206,   207,   208,   209,
     234,   211,   212,   213,   214,     5,     7,   217,   218,   219,
     220,   221,     7,     7,     7,   225,     7,     7,     5,     5,
     234,   231,     5,   218,     5,   234,   236,   234,   223,   234,
     234,   226,   208,   209,   234,   211,   212,   213,   214,   234,
       7,   217,   218,   219,   220,   221,   234,   228,     7,   225,
       7,     5,     5,     5,   235,   231,     5,     7,     3,   234,
     234,   229,   218,   235,   229,   229,     5,   223,     5,     5,
     226,     5,     7,     5,     5,   236,   236,   124,   234,   126,
     127,   128,   129,   228,   131,   132,   133,   134,   135,   136,
     229,   229,   236,   140,   229,   236,   143,     7,     7,   146,
       7,     5,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,     7,     7,   164,   236,     7,
     236,   229,   169,   229,   124,   172,   126,   127,   128,   129,
     229,   131,   132,   133,   134,   135,   136,   229,   236,   229,
     140,   234,     5,   143,   229,   236,   146,   234,     5,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   236,   236,   164,   229,   235,   229,   229,   169,
     235,   124,   172,   126,   127,   128,   129,   235,   131,   132,
     133,   134,   135,   136,     7,     7,     7,   140,   235,     7,
     143,     7,     7,   146,     7,     5,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,     5,
       7,   164,     5,     7,   235,     7,   169,     7,     7,   172,
     124,     7,   126,   127,   128,   129,     7,   131,   132,   133,
     134,   135,   136,     7,   231,   235,   140,   235,   234,   143,
       7,     7,   146,     7,     5,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,     7,     5,
     164,   234,    96,     7,   229,   169,   236,   124,   172,   126,
     127,   128,   129,   236,   131,   132,   133,   134,   135,   136,
     130,   229,   235,   140,     7,   236,   143,   229,   229,   146,
     236,     5,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   234,   236,   164,   236,   236,
     236,     5,   169,   234,   124,   172,   126,   127,   128,   129,
       7,   131,   132,   133,   134,   135,   136,     7,     7,   234,
     140,   235,     7,   143,     7,     7,   146,     5,     5,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,     5,     5,   164,   228,   236,   234,   229,   169,
     229,   229,   172,   124,     5,   126,   127,   128,   129,     5,
     131,   132,   133,   134,   135,   136,     5,   236,   235,   140,
     236,     7,   143,     7,     7,   146,   235,     5,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,     7,   235,   164,     7,     7,     7,   234,   169,   234,
     124,   172,   126,   127,   128,   129,     7,   131,   132,   133,
     134,   135,   136,     7,     7,   235,   140,     7,     7,   143,
     234,     7,   146,   234,     5,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,     7,   236,
     164,   229,   235,   229,     7,   169,    48,   124,   172,   126,
     127,   128,   129,   234,   131,   132,   133,   134,   135,   136,
       7,     7,     7,   140,   235,     7,   143,     7,     7,   146,
     114,     7,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,     5,     7,   164,     7,   235,
       0,     0,   169,  1053,   933,   172,   124,   818,   126,   127,
     128,   129,   565,   131,   132,   133,   134,   135,   136,   934,
     707,   235,   140,     7,  1176,   143,  1336,  1532,   146,   606,
     502,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,     7,   139,   164,   507,   236,    -1,
      -1,   169,    -1,   124,   172,   126,   127,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,    -1,    -1,   235,   140,
      -1,     7,   143,    -1,    -1,   146,    -1,    -1,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,    -1,     7,   164,    -1,    -1,    -1,    -1,   169,    -1,
      -1,   172,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     7,    -1,    -1,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,    -1,    -1,   217,   218,
     219,   220,   221,    -1,   235,    -1,   225,    -1,    -1,    -1,
      -1,    -1,   231,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,   205,   206,   207,   208,   209,   231,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
     231,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,   205,   206,   207,   208,   209,   231,   211,   212,
     213,   214,    -1,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,   231,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
      -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,   225,
     205,   206,   207,   208,   209,   231,   211,   212,   213,   214,
      -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,   218,
      -1,    -1,    -1,    -1,   223,    -1,    -1,   226,    -1,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,     3,     4,     5,    -1,    -1,   231,    -1,    -1,
      -1,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    55,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     8,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,    -1,
     217,   218,   219,   220,   221,   222,    -1,   218,   225,    -1,
      -1,    -1,   223,    -1,     8,   226,    -1,    -1,    -1,   236,
      -1,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,   218,   231,    -1,    -1,
      -1,   223,   236,    -1,   226,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,    -1,    -1,   217,   218,   219,
     220,   221,    -1,     5,    -1,   225,    -1,    -1,    10,    -1,
      -1,   231,    -1,    -1,    16,   218,   236,    -1,    -1,    -1,
     223,    -1,    -1,   226,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,    -1,    48,    61,    -1,    -1,
     231,    -1,    54,    -1,   218,   236,    -1,    -1,    -1,   223,
      -1,    -1,   226,    -1,    -1,    67,    -1,    69,   211,   212,
     213,   214,    -1,    -1,   217,   218,   219,   220,   221,    81,
      -1,    -1,   225,    85,    -1,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,   218,    96,    -1,    -1,    -1,   223,    -1,
      -1,   226,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,   149,    -1,    -1,    -1,    -1,
     231,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,   222,   173,
     162,   225,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,   203,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,   205,   206,   207,   208,   209,   231,   211,
     212,   213,   214,   236,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,   205,   206,   207,   208,   209,   231,
     211,   212,   213,   214,   236,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,   205,   206,   207,   208,   209,
     231,   211,   212,   213,   214,   236,    -1,   217,   218,   219,
     220,   221,    -1,    -1,    -1,   225,   205,   206,   207,   208,
     209,   231,   211,   212,   213,   214,   236,    -1,   217,   218,
     219,   220,   221,    -1,    -1,    -1,   225,   205,   206,   207,
     208,   209,   231,   211,   212,   213,   214,   236,    -1,   217,
     218,   219,   220,   221,    -1,    -1,    -1,   225,   205,   206,
     207,   208,   209,   231,   211,   212,   213,   214,   236,    -1,
     217,   218,   219,   220,   221,    -1,    -1,    -1,   225,   205,
     206,   207,   208,   209,   231,   211,   212,   213,   214,   236,
      -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,   225,
     205,   206,   207,   208,   209,   231,   211,   212,   213,   214,
     236,    -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     225,   205,   206,   207,   208,   209,   231,   211,   212,   213,
     214,   236,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,   205,   206,   207,   208,   209,   231,   211,   212,
     213,   214,   236,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,   205,   206,   207,   208,   209,   231,   211,
     212,   213,   214,   236,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,   205,   206,   207,   208,   209,   231,
     211,   212,   213,   214,   236,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,   205,   206,   207,   208,   209,
     231,   211,   212,   213,   214,   236,    -1,   217,   218,   219,
     220,   221,    -1,    -1,    -1,   225,   205,   206,   207,   208,
     209,   231,   211,   212,   213,   214,   236,    -1,   217,   218,
     219,   220,   221,    -1,    -1,    -1,   225,   205,   206,   207,
     208,   209,   231,   211,   212,   213,   214,   236,    -1,   217,
     218,   219,   220,   221,    -1,    -1,    -1,   225,   205,   206,
     207,   208,   209,   231,   211,   212,   213,   214,   236,    -1,
     217,   218,   219,   220,   221,    -1,    -1,    -1,   225,   205,
     206,   207,   208,   209,   231,   211,   212,   213,   214,   236,
      -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,   225,
     205,   206,   207,   208,   209,   231,   211,   212,   213,   214,
     236,    -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     225,   205,   206,   207,   208,   209,   231,   211,   212,   213,
     214,   236,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,   205,   206,   207,   208,   209,   231,   211,   212,
     213,   214,   236,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,   205,   206,   207,   208,   209,   231,   211,
     212,   213,   214,   236,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,    -1,   235,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
     231,    -1,    -1,    -1,   235,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,    -1,    -1,   217,   218,   219,
     220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,   231,    -1,    -1,    -1,   235,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,    -1,    -1,   217,   218,
     219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,   231,    -1,    -1,    -1,   235,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,    -1,   217,
     218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,   231,    -1,    -1,    -1,   235,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,    -1,
     217,   218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,   235,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
      -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,   235,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,
     235,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
      -1,   235,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,   231,    -1,
      -1,    -1,   235,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,    -1,   235,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,    -1,   227,    -1,    -1,    -1,
     231,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,   231,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,    -1,
     217,   218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,    -1,   231,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,    -1,    -1,   217,   218,   219,
     220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,   231,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,   231,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
      -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,   231,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,    -1,    -1,   217,   218,
     219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     229,    -1,   231,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,   231,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,   231,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,    -1,   217,
     218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,   231,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,
     231,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,   231,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,    -1,
     217,   218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,    -1,   231,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,    -1,    -1,   217,   218,   219,
     220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,   231,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,   231,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
      -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,   231,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,    -1,    -1,   217,   218,
     219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     229,    -1,   231,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,   231,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,   231,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,    -1,   217,
     218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,   231,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,
     231,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,   231,   205,   206,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,    -1,
     217,   218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,    -1,   231,   205,   206,   207,   208,   209,
      -1,   211,   212,   213,   214,    -1,    -1,   217,   218,   219,
     220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,   231,   205,   206,   207,   208,   209,    -1,   211,   212,
     213,   214,    -1,    -1,   217,   218,   219,   220,   221,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,   231,   205,
     206,   207,   208,   209,    -1,   211,   212,   213,   214,    -1,
      -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,   231,   205,   206,   207,   208,
     209,    -1,   211,   212,   213,   214,    -1,    -1,   217,   218,
     219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     229,    -1,   231,   205,   206,   207,   208,   209,    -1,   211,
     212,   213,   214,    -1,    -1,   217,   218,   219,   220,   221,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,   231,
     205,   206,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,   231,   205,   206,   207,
     208,   209,    -1,   211,   212,   213,   214,    -1,    -1,   217,
     218,   219,   220,   221,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,   231,   205,   206,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,    -1,   217,   218,   219,   220,
     221,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,
     231,   205,   206,   207,   208,   209,    -1,   211,   212,   213,
     214,    -1,    -1,   217,   218,   219,   220,   221,    -1,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,   231,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,    -1,
     217,   218,   219,   220,   221,   222,    -1,    -1,   225,    -1,
      -1,    -1,   229,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    -1,    -1,   217,   218,   219,   220,   221,
     222,    -1,    -1,   225,    -1,   227,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,    -1,   217,   218,
     219,   220,   221,   222,    -1,    -1,   225,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,    -1,   217,   218,   219,
     220,   221,   222,    -1,    -1,   225,   208,   209,   210,   211,
     212,   213,   214,    -1,    -1,   217,   218,   219,   220,   221,
     222,    -1,    -1,   225,   211,   212,   213,   214,    -1,    -1,
     217,   218,   219,   220,   221,   222,    -1,    -1,   225
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

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

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
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
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
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
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 1:
#line 347 "GetDP.y"
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
#line 381 "GetDP.y"
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
#line 422 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 445 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 460 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 462 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 464 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 466 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 468 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 470 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 472 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 474 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 476 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 478 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 480 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 482 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 484 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 486 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 488 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 490 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 492 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 494 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 496 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 498 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 500 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 508 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 525 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 532 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 535 "GetDP.y"
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
case 52:
#line 554 "GetDP.y"
{ 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      List_Add(Group_S.InitialList, &(yyvsp[-3].i)) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;
    break;}
case 53:
#line 563 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 54:
#line 570 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 580 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 56:
#line 585 "GetDP.y"
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
case 57:
#line 597 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 606 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 59:
#line 617 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 60:
#line 622 "GetDP.y"
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
	  sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1,
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
#line 659 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 662 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 674 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 676 "GetDP.y"
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
case 65:
#line 692 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 695 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
#line 698 "GetDP.y"
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
	  sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1, fcmp_Group_Name))
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
case 68:
#line 749 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 762 "GetDP.y"
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
case 70:
#line 786 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 793 "GetDP.y"
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
case 72:
#line 806 "GetDP.y"
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
case 73:
#line 824 "GetDP.y"
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
case 74:
#line 847 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 75:
#line 851 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 76:
#line 860 "GetDP.y"
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
case 77:
#line 874 "GetDP.y"
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
case 78:
#line 908 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-3].c, (int)yyvsp[-1].d) ;
      if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1, fcmp_Group_Name)) < 0 ) {
	vyyerror("Unknown Group: %s {%d}", yyvsp[-3].c, (int)yyvsp[-1].d) ;
	List_Reset(ListOfInt_L) ; yyval.l = ListOfInt_L ;
      }
      else
	yyval.l = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free(yyvsp[-3].c) ;
    ;
    break;}
case 79:
#line 921 "GetDP.y"
{
      Flag_MultipleIndex = 1 ;
      List_Reset(ListOfInitialList0_L) ;
      yyval.l = ListOfInitialList0_L ;
      for (k = 1 ; k <= Nbr_Index ; k++) {
	sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1, fcmp_Group_Name)) < 0 ) {
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
case 81:
#line 945 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 82:
#line 955 "GetDP.y"
{ 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(StringAux1, "%s_%d_", yyvsp[-3].c, k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1,
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
case 85:
#line 977 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 86:
#line 982 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 87:
#line 983 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 88:
#line 988 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 92:
#line 1007 "GetDP.y"
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
case 93:
#line 1027 "GetDP.y"
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
case 96:
#line 1078 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 97:
#line 1098 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 98:
#line 1104 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 99:
#line 1110 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 100:
#line 1113 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 101:
#line 1120 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 103:
#line 1131 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 104:
#line 1134 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 105:
#line 1140 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 106:
#line 1144 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 108:
#line 1156 "GetDP.y"
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
case 109:
#line 1169 "GetDP.y"
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
case 110:
#line 1183 "GetDP.y"
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
case 111:
#line 1198 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 112:
#line 1204 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 113:
#line 1210 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 114:
#line 1216 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1222 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1228 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1234 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1240 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1246 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1252 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1258 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1264 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1270 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1276 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1282 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1288 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1294 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1301 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 130:
#line 1309 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 132:
#line 1322 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 133:
#line 1328 "GetDP.y"
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
case 134:
#line 1402 "GetDP.y"
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
case 135:
#line 1436 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1445 "GetDP.y"
{ 
      if(yyvsp[0].i!=3 && yyvsp[0].i!=4) 
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[-1].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1457 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 138:
#line 1459 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 139:
#line 1470 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 140:
#line 1472 "GetDP.y"
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
case 141:
#line 1486 "GetDP.y"
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
case 142:
#line 1498 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 143:
#line 1504 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 144:
#line 1510 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 145:
#line 1512 "GetDP.y"
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
case 146:
#line 1541 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = yyvsp[-1].l ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-4].c,
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp(yyvsp[-4].c, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
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
case 147:
#line 1565 "GetDP.y"
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
case 148:
#line 1578 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1584 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 150:
#line 1591 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 151:
#line 1597 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1604 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1611 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1622 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 155:
#line 1623 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 156:
#line 1624 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 157:
#line 1629 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 158:
#line 1630 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 159:
#line 1636 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 160:
#line 1639 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 161:
#line 1642 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 162:
#line 1658 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 163:
#line 1663 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 164:
#line 1670 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 166:
#line 1679 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 167:
#line 1684 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 168:
#line 1691 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 169:
#line 1694 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 170:
#line 1701 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 172:
#line 1711 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 173:
#line 1714 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 174:
#line 1717 "GetDP.y"
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
case 175:
#line 1755 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 176:
#line 1761 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 177:
#line 1768 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 179:
#line 1781 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 180:
#line 1788 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 181:
#line 1791 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 182:
#line 1798 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 183:
#line 1801 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 184:
#line 1808 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 186:
#line 1820 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 187:
#line 1830 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 188:
#line 1840 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 189:
#line 1847 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 190:
#line 1850 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 191:
#line 1857 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 193:
#line 1873 "GetDP.y"
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
case 194:
#line 1921 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 195:
#line 1924 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 196:
#line 1927 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 197:
#line 1930 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 198:
#line 1933 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 199:
#line 1944 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 201:
#line 1954 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.Constraint, &Constraint_S) ;
      else {
	Save_Name = strsave(Constraint_S.Name) ;  Free(Constraint_S.Name) ;
	if (List_Nbr(ListOfConstraintPerRegion))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				       StringAux1, fcmp_Constraint_Name) ;
	    Constraint_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfConstraintPerRegion, k,
		      &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Problem_S.Constraint, &Constraint_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 203:
#line 1979 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 205:
#line 1993 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 206:
#line 1999 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 207:
#line 2006 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 208:
#line 2015 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 209:
#line 2018 "GetDP.y"
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
case 210:
#line 2040 "GetDP.y"
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
case 211:
#line 2055 "GetDP.y"
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
case 212:
#line 2079 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 214:
#line 2093 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 215:
#line 2103 "GetDP.y"
{ 
      if (!Nbr_Index)
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
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
case 216:
#line 2127 "GetDP.y"
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
case 217:
#line 2152 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 218:
#line 2157 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 219:
#line 2165 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 220:
#line 2173 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 221:
#line 2183 "GetDP.y"
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
case 222:
#line 2200 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 223:
#line 2208 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 224:
#line 2215 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 225:
#line 2222 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 226:
#line 2231 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 227:
#line 2240 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 228:
#line 2249 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 229:
#line 2270 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 231:
#line 2281 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
      else {
	Save_Name = strsave(FunctionSpace_S.Name) ;  Free(FunctionSpace_S.Name) ;
	if (List_Nbr(ListOfBasisFunction))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				       StringAux1, fcmp_FunctionSpace_Name) ;
	    FunctionSpace_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfBasisFunction , k, &FunctionSpace_S.BasisFunction) ;
	    if (List_Nbr(ListOfConstraintInFS))
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	    List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 233:
#line 2308 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 235:
#line 2321 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 236:
#line 2327 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 237:
#line 2334 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 238:
#line 2343 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 239:
#line 2346 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2349 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2352 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2359 "GetDP.y"
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
case 243:
#line 2375 "GetDP.y"
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
case 244:
#line 2424 "GetDP.y"
{ 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SubFunction = NULL ; 
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    ;
    break;}
case 246:
#line 2444 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 247:
#line 2447 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 248:
#line 2452 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 249:
#line 2457 "GetDP.y"
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
case 250:
#line 2471 "GetDP.y"
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
case 251:
#line 2491 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 252:
#line 2496 "GetDP.y"
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
case 253:
#line 2520 "GetDP.y"
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
case 255:
#line 2580 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 256:
#line 2583 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 257:
#line 2592 "GetDP.y"
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

	sprintf(StringAux1, "%s_%d_", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, StringAux1,
				 fcmp_Formulation_Name)) < 0)
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;
	else {
	  GlobalBasisFunction_S.FormulationIndex = i ;

	  sprintf(StringAux1, "%s_%d_", yyvsp[-3].c, k+1) ;
	  if ((i = List_ISearchSeq(Problem_S.Resolution, StringAux1,
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
case 258:
#line 2658 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 259:
#line 2662 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 260:
#line 2669 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 262:
#line 2678 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 263:
#line 2683 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 264:
#line 2686 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2693 "GetDP.y"
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
case 266:
#line 2709 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 267:
#line 2715 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 268:
#line 2718 "GetDP.y"
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
case 269:
#line 2737 "GetDP.y"
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
case 270:
#line 2749 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 271:
#line 2755 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 272:
#line 2758 "GetDP.y"
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
case 273:
#line 2773 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 274:
#line 2777 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 275:
#line 2786 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 277:
#line 2797 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 278:
#line 2802 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 279:
#line 2812 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 280:
#line 2825 "GetDP.y"
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
case 281:
#line 2840 "GetDP.y"
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
case 282:
#line 2914 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 284:
#line 2930 "GetDP.y"
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
case 285:
#line 2962 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 286:
#line 2965 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 287:
#line 2968 "GetDP.y"
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
	    sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Constraint, StringAux1,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s {%d}", StringAux1, k+1) ;
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
case 288:
#line 3014 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 290:
#line 3024 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.Formulation, &Formulation_S) ;
      else {
	Save_Name = strsave(Formulation_S.Name) ;  Free(Formulation_S.Name) ;
	if (List_Nbr(ListOfDefineQuantity))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       StringAux1, fcmp_Formulation_Name) ;
	    Formulation_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Read(ListOfEquationTerm  , k, &Formulation_S.Equation      ) ;
	    List_Add(Problem_S.Formulation, &Formulation_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 292:
#line 3050 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 294:
#line 3062 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 295:
#line 3068 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 296:
#line 3075 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 298:
#line 3087 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 299:
#line 3093 "GetDP.y"
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
case 300:
#line 3107 "GetDP.y"
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
case 301:
#line 3125 "GetDP.y"
{ DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    ;
    break;}
case 303:
#line 3147 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 304:
#line 3150 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 305:
#line 3154 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 306:
#line 3157 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 307:
#line 3167 "GetDP.y"
{
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-1].c,
				   fcmp_FunctionSpace_Name)) < 0)
	    vyyerror("Unknown FunctionSpace: %s", yyvsp[-1].c) ;
	  else
	    DefineQuantity_S.FunctionSpaceIndex = i ;
	}
	else{ 
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-1].c) ;
	}
      }
      else {
	List_Reset(ListOfFunctionSpaceIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-1].c,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s", yyvsp[-1].c) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	  else {
	    sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, StringAux1,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s {%d}", StringAux1, k+1) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	}
      }
    ;
    break;}
case 308:
#line 3206 "GetDP.y"
{ /* attention : doit disparaitre.  */
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
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 309:
#line 3230 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 310:
#line 3235 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 311:
#line 3241 "GetDP.y"
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
	  
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	    
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
case 312:
#line 3553 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 313:
#line 3558 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 314:
#line 3567 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 315:
#line 3576 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 316:
#line 3585 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 318:
#line 3593 "GetDP.y"
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
case 319:
#line 3633 "GetDP.y"
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
case 320:
#line 3648 "GetDP.y"
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
case 321:
#line 3676 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 322:
#line 3679 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 323:
#line 3682 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 324:
#line 3685 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 325:
#line 3692 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 327:
#line 3703 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3713 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3723 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 330:
#line 3737 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 332:
#line 3749 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 333:
#line 3751 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 334:
#line 3753 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 335:
#line 3755 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 336:
#line 3763 "GetDP.y"
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
    ;
    break;}
case 338:
#line 3787 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 339:
#line 3795 "GetDP.y"
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
case 340:
#line 3874 "GetDP.y"
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
case 341:
#line 3920 "GetDP.y"
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
case 342:
#line 3944 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 343:
#line 3953 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 344:
#line 3962 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3971 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 346:
#line 3983 "GetDP.y"
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
case 348:
#line 4012 "GetDP.y"
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
case 349:
#line 4036 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 350:
#line 4044 "GetDP.y"
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
case 351:
#line 4099 "GetDP.y"
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
case 352:
#line 4116 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 353:
#line 4117 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 354:
#line 4118 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 355:
#line 4119 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 356:
#line 4120 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 357:
#line 4121 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 358:
#line 4122 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 359:
#line 4123 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 360:
#line 4130 "GetDP.y"
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
case 361:
#line 4151 "GetDP.y"
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
case 362:
#line 4175 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 364:
#line 4185 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.Resolution, &Resolution_S) ;
      else {
	Save_Name = strsave(Resolution_S.Name) ;  Free(Resolution_S.Name) ;
	if (List_Nbr(ListOfDefineSystem))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				       StringAux1, fcmp_Resolution_Name) ;
	    Resolution_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Problem_S.Resolution, &Resolution_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 366:
#line 4210 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 368:
#line 4222 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 369:
#line 4229 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 370:
#line 4236 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 371:
#line 4239 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 372:
#line 4241 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 373:
#line 4247 "GetDP.y"
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
case 374:
#line 4262 "GetDP.y"
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
case 375:
#line 4281 "GetDP.y"
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
case 377:
#line 4301 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 378:
#line 4304 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 379:
#line 4313 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 380:
#line 4316 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 381:
#line 4321 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 382:
#line 4326 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 383:
#line 4331 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 384:
#line 4336 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 385:
#line 4345 "GetDP.y"
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
	    sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, StringAux1,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-1].c, k+1) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 386:
#line 4382 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 387:
#line 4389 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 388:
#line 4392 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 389:
#line 4404 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 390:
#line 4414 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 391:
#line 4420 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 392:
#line 4423 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 393:
#line 4435 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 394:
#line 4443 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 395:
#line 4454 "GetDP.y"
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
case 396:
#line 4476 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 397:
#line 4483 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 398:
#line 4489 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 399:
#line 4495 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 400:
#line 4501 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 401:
#line 4509 "GetDP.y"
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
case 402:
#line 4531 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 403:
#line 4538 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 404:
#line 4544 "GetDP.y"
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
case 405:
#line 4555 "GetDP.y"
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
case 406:
#line 4566 "GetDP.y"
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
case 407:
#line 4579 "GetDP.y"
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
case 408:
#line 4594 "GetDP.y"
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
case 409:
#line 4614 "GetDP.y"
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
case 410:
#line 4635 "GetDP.y"
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
case 411:
#line 4647 "GetDP.y"
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
case 412:
#line 4667 "GetDP.y"
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
case 413:
#line 4684 "GetDP.y"
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
case 414:
#line 4703 "GetDP.y"
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
	List_Read(yyvsp[-4].l, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete(yyvsp[-4].l);
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;
    break;}
case 415:
#line 4725 "GetDP.y"
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
	List_Read(yyvsp[-6].l, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete(yyvsp[-6].l);
      Operation_P->Case.Perturbation.Shift = yyvsp[-4].d ;
      Operation_P->Case.Perturbation.PertFreq = (int)yyvsp[-2].d ;
    ;
    break;}
case 416:
#line 4759 "GetDP.y"
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
case 417:
#line 4772 "GetDP.y"
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
case 418:
#line 4786 "GetDP.y"
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
case 419:
#line 4799 "GetDP.y"
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
case 420:
#line 4811 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 422:
#line 4820 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 424:
#line 4829 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 425:
#line 4839 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 426:
#line 4849 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 427:
#line 4857 "GetDP.y"
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
case 428:
#line 4870 "GetDP.y"
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
case 429:
#line 4883 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
      Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 430:
#line 4892 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 431:
#line 4901 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-8].i) ;
      Operation_P->Case.SaveMesh.MeshFileBase = yyvsp[-6].c ;
      Operation_P->Case.SaveMesh.Format = yyvsp[-4].c ;
      Operation_P->Case.SaveMesh.ExprIndex = yyvsp[-2].i ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 432:
#line 4915 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-4].i) ;
      Operation_P->Case.SaveMesh.MeshFileBase = yyvsp[-2].c ;
      Operation_P->Case.SaveMesh.Format = NULL ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 433:
#line 4928 "GetDP.y"
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
case 434:
#line 4945 "GetDP.y"
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
case 435:
#line 4959 "GetDP.y"
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
case 436:
#line 4978 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 437:
#line 4983 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 438:
#line 4993 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 440:
#line 5003 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 441:
#line 5006 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 442:
#line 5016 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 443:
#line 5032 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 445:
#line 5048 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 446:
#line 5052 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 447:
#line 5056 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 448:
#line 5060 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 449:
#line 5065 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 450:
#line 5076 "GetDP.y"
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
case 452:
#line 5093 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 453:
#line 5097 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 454:
#line 5101 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 455:
#line 5105 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 456:
#line 5109 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 457:
#line 5114 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 458:
#line 5125 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 460:
#line 5140 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 461:
#line 5144 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 462:
#line 5148 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 463:
#line 5152 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 464:
#line 5156 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 465:
#line 5167 "GetDP.y"
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
case 467:
#line 5185 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 468:
#line 5189 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 469:
#line 5193 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 470:
#line 5197 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 471:
#line 5202 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 472:
#line 5212 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 473:
#line 5218 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 474:
#line 5224 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 475:
#line 5234 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 476:
#line 5237 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 477:
#line 5242 "GetDP.y"
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
case 479:
#line 5260 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 480:
#line 5270 "GetDP.y"
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
case 481:
#line 5299 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 482:
#line 5302 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 483:
#line 5305 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 484:
#line 5313 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 485:
#line 5330 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 487:
#line 5342 "GetDP.y"
{
      if (!Nbr_Index)
	List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
      else {
	Save_Name = strsave(PostProcessing_S.Name) ;  Free(PostProcessing_S.Name) ;
	if (List_Nbr(ListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       StringAux1, fcmp_Formulation_Name) ;
	    PostProcessing_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfFormulation, k, &PostProcessing_S.FormulationIndex) ;
	    List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
	  }
	Free(Save_Name) ;
      }
    ;
    break;}
case 489:
#line 5365 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 491:
#line 5379 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 492:
#line 5386 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 493:
#line 5394 "GetDP.y"
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
	    sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, StringAux1,
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
case 494:
#line 5440 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 495:
#line 5445 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 496:
#line 5451 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 497:
#line 5454 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 498:
#line 5459 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 500:
#line 5470 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 501:
#line 5473 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 502:
#line 5479 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 503:
#line 5484 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 504:
#line 5490 "GetDP.y"
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
case 505:
#line 5504 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 507:
#line 5518 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 508:
#line 5525 "GetDP.y"
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
case 509:
#line 5553 "GetDP.y"
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
case 510:
#line 5563 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 511:
#line 5564 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 512:
#line 5570 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 513:
#line 5579 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 514:
#line 5596 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 516:
#line 5608 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 518:
#line 5615 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 520:
#line 5627 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 521:
#line 5634 "GetDP.y"
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
case 522:
#line 5646 "GetDP.y"
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
case 523:
#line 5657 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 524:
#line 5662 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 525:
#line 5668 "GetDP.y"
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
case 526:
#line 5685 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 527:
#line 5695 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 528:
#line 5698 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 529:
#line 5702 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 530:
#line 5713 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 531:
#line 5717 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 532:
#line 5721 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 533:
#line 5727 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 534:
#line 5732 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 535:
#line 5736 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 536:
#line 5745 "GetDP.y"
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
case 537:
#line 5757 "GetDP.y"
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
case 538:
#line 5780 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 539:
#line 5781 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 540:
#line 5782 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 541:
#line 5783 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 542:
#line 5789 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 543:
#line 5791 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 544:
#line 5797 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 545:
#line 5803 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 546:
#line 5810 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 547:
#line 5819 "GetDP.y"
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
case 548:
#line 5841 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 549:
#line 5849 "GetDP.y"
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
case 550:
#line 5860 "GetDP.y"
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
case 551:
#line 5874 "GetDP.y"
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
case 552:
#line 5895 "GetDP.y"
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
case 553:
#line 5922 "GetDP.y"
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
case 554:
#line 5953 "GetDP.y"
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
case 555:
#line 5973 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Dimension = _ALL ;
      PostSubOperation_S.Adapt = 0 ;
      PostSubOperation_S.Target = -1. ;
      PostSubOperation_S.HarmonicToTime = 1 ;
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
    ;
    break;}
case 557:
#line 6000 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 558:
#line 6007 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 559:
#line 6014 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 560:
#line 6021 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 561:
#line 6025 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 562:
#line 6029 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 563:
#line 6033 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 564:
#line 6037 "GetDP.y"
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
case 565:
#line 6047 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 566:
#line 6052 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 567:
#line 6057 "GetDP.y"
{
      PostSubOperation_S.FormatChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FormatTag_L  = List_Copy(ListOfInt_L) ;

      printf("--> string: \"");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatChar_L);i++){
	List_Read(PostSubOperation_S.FormatChar_L, i, &tmp[0]) ;
	printf("%c", tmp[0]);
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
case 568:
#line 6077 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 569:
#line 6084 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 570:
#line 6093 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 571:
#line 6102 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 572:
#line 6111 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 573:
#line 6118 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 574:
#line 6126 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 575:
#line 6130 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 576:
#line 6139 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 577:
#line 6143 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 578:
#line 6147 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 579:
#line 6155 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 580:
#line 6161 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 581:
#line 6170 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 582:
#line 6176 "GetDP.y"
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
	  } while(i<strlen(yyvsp[0].c)) ;
	  strncpy(tmp, &yyvsp[0].c[j], i-j); 
	  tmp[i-j] = '\0'; 
	  k = Get_DefineForString(PostSubOperation_FormatTag, tmp, &FlagError) ;
	  if (FlagError){
	    vyyerror("Unknown Tag in Format: %s", tmp);
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
      } while (i<strlen(yyvsp[0].c)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 583:
#line 6224 "GetDP.y"
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
case 584:
#line 6239 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 587:
#line 6252 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 588:
#line 6258 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 589:
#line 6264 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 590:
#line 6275 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 591:
#line 6276 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 592:
#line 6277 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 593:
#line 6278 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 594:
#line 6279 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 595:
#line 6280 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 596:
#line 6281 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 597:
#line 6282 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 598:
#line 6283 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 599:
#line 6284 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 600:
#line 6285 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 601:
#line 6286 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 602:
#line 6287 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 603:
#line 6288 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 604:
#line 6289 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 605:
#line 6290 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 606:
#line 6291 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 607:
#line 6292 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 608:
#line 6293 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 609:
#line 6294 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 610:
#line 6295 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 611:
#line 6299 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 612:
#line 6300 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 613:
#line 6301 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 614:
#line 6302 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 615:
#line 6303 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 616:
#line 6304 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 617:
#line 6305 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 618:
#line 6306 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 619:
#line 6307 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 620:
#line 6308 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 621:
#line 6309 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 622:
#line 6310 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 623:
#line 6311 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 624:
#line 6312 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 625:
#line 6313 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 626:
#line 6314 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 627:
#line 6315 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 628:
#line 6316 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 629:
#line 6317 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 630:
#line 6318 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 631:
#line 6319 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 632:
#line 6320 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 633:
#line 6321 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 634:
#line 6322 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 635:
#line 6323 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 636:
#line 6324 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 637:
#line 6325 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 638:
#line 6326 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 639:
#line 6327 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 640:
#line 6328 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 641:
#line 6329 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 642:
#line 6330 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 643:
#line 6331 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 644:
#line 6332 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 645:
#line 6333 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 646:
#line 6334 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 647:
#line 6335 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 648:
#line 6336 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 649:
#line 6337 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 650:
#line 6338 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 651:
#line 6343 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 652:
#line 6344 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 653:
#line 6345 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 654:
#line 6346 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 655:
#line 6347 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 656:
#line 6348 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 657:
#line 6349 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 658:
#line 6351 "GetDP.y"
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
case 659:
#line 6369 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 660:
#line 6372 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 661:
#line 6378 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 662:
#line 6381 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 663:
#line 6388 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 664:
#line 6394 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 665:
#line 6397 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 666:
#line 6400 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 667:
#line 6412 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 668:
#line 6418 "GetDP.y"
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
case 669:
#line 6429 "GetDP.y"
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
case 670:
#line 6445 "GetDP.y"
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
case 671:
#line 6467 "GetDP.y"
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
case 672:
#line 6482 "GetDP.y"
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
case 673:
#line 6520 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 674:
#line 6528 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 675:
#line 6540 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 676:
#line 6543 "GetDP.y"
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
case 677:
#line 6558 "GetDP.y"
{
      yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
    ;
    break;}
}

#line 705 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
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

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 6572 "GetDP.y"



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
    sprintf(StringAux1, "_%s_%d", Name, List_Nbr(Problem_S.Group)) ;
    Group_P->Name = strsave(StringAux1) ;
    break ;
  case 2 :
    sprintf(StringAux1, "%s_%d_", Name, Num_Index) ;
    Group_P->Name = strsave(StringAux1) ;
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
    sprintf(StringAux1, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strsave(StringAux1) ;
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
    case WQ_CAST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Cast.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_TRACE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Trace.WholeQuantity, 
	 (WholeQuantity_P+i)->Case.Trace.InIndex) ;
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


