
/*  A Bison parser, made from yacc.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

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
#define	tFlag	421
#define	tExit	422
#define	tBreak	423
#define	tHelp	424
#define	tCpu	425
#define	tDEF	426
#define	tAND	427
#define	tOR	428
#define	tNOTEQUAL	429
#define	tEQUAL	430
#define	tAPPROXEQUAL	431
#define	tLESSOREQUAL	432
#define	tGREATEROREQUAL	433
#define	tLESSLESS	434
#define	tGREATERGREATER	435
#define	tCROSSPRODUCT	436
#define	UNARYPREC	437

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.12 2000-10-06 15:24:54 geuzaine Exp $ */

  /*
    Modifs a faire (Patrick):
     - definir des structures avec valeurs par defaut, e.g. BasisFunction_D = ...
       (dans un fichier a part).

    Autres:
     - modif Affectation (etendue domaine definition) a indiquer dans getdp.texi



    CG
    Il faudrait inclure les listes (peut-etre recursives) au sein meme des
    expressions, afin de gerer les vecteurs, tenseurs, etc., directement, et
    pas par l'intermediaire d'une fonction de creation

   */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

/* bison est mal foutu */
#if !defined __cplusplus && !defined MSDOS && !defined _AIX
#include <alloca.h> 
#endif

#include "Data_Passive.h"
#include "Data_Active.h"
#include "Data_DefineE.h"

#include "ualloc.h"
#include "outil.h"

#include "Init_Problem.h"
#include "BF_Function.h"
#include "Quadrature.h"
#include "Cal_Value.h"

#include "Constant.h"
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
void Pos_InteractiveHelp(void);

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
extern int                     InteractiveCompute, InteractiveExit ;

List_T  * ConstantTable_L, * ListDummy_L ;
List_T  * ListOfInt_L, * ListOfTwoInt_L, * ListOfDouble_L, * ListOfDouble2_L ;
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


#line 184 "yacc.y"
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		1530
#define	YYFLAG		-32768
#define	YYNTBASE	203

#define YYTRANSLATE(x) ((unsigned)(x) <= 437 ? yytranslate[x] : 384)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   191,     2,   193,   194,   188,     2,     2,   200,
   201,   186,   184,   199,   185,   202,   187,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   178,
     2,   179,   172,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   197,     2,   198,   192,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   195,     2,   196,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
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
   166,   167,   168,   169,   170,   171,   173,   174,   175,   176,
   177,   180,   181,   182,   183,   189,   190
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    75,    78,    79,    82,    83,    84,    88,    93,    99,
   100,   107,   113,   115,   116,   117,   125,   128,   130,   133,
   135,   137,   139,   141,   142,   146,   151,   153,   155,   159,
   160,   164,   169,   171,   175,   182,   184,   189,   193,   194,
   198,   205,   206,   208,   213,   214,   217,   221,   222,   225,
   231,   238,   246,   248,   249,   253,   258,   263,   264,   267,
   268,   271,   273,   274,   275,   283,   287,   291,   298,   302,
   306,   310,   314,   318,   322,   326,   330,   334,   338,   342,
   346,   350,   354,   357,   360,   363,   367,   369,   373,   376,
   378,   381,   382,   388,   393,   398,   399,   407,   414,   417,
   420,   423,   426,   430,   433,   437,   440,   444,   446,   450,
   451,   455,   462,   469,   470,   475,   476,   479,   483,   488,
   489,   494,   495,   498,   502,   506,   511,   512,   517,   518,
   521,   525,   529,   534,   535,   540,   541,   544,   548,   552,
   557,   558,   563,   564,   567,   571,   575,   579,   583,   587,
   591,   592,   595,   599,   601,   602,   605,   609,   614,   618,
   623,   629,   630,   635,   636,   639,   643,   647,   651,   655,
   659,   663,   671,   675,   679,   683,   687,   691,   699,   707,
   715,   716,   719,   723,   725,   726,   729,   733,   738,   742,
   747,   752,   757,   762,   763,   768,   769,   772,   776,   780,
   785,   790,   794,   798,   799,   800,   801,   820,   821,   826,
   827,   830,   834,   838,   840,   844,   845,   849,   850,   855,
   856,   859,   863,   867,   871,   872,   877,   878,   881,   885,
   891,   895,   899,   904,   905,   908,   912,   914,   915,   918,
   922,   927,   931,   936,   941,   942,   947,   948,   951,   955,
   959,   963,   967,   968,   975,   979,   980,   986,   990,   994,
   998,  1002,  1003,  1007,  1008,  1011,  1016,  1021,  1026,  1031,
  1032,  1035,  1039,  1043,  1047,  1048,  1051,  1055,  1059,  1063,
  1067,  1068,  1071,  1072,  1073,  1083,  1087,  1091,  1095,  1096,
  1099,  1103,  1104,  1105,  1115,  1116,  1118,  1120,  1122,  1124,
  1126,  1128,  1133,  1137,  1138,  1141,  1145,  1147,  1148,  1151,
  1155,  1160,  1165,  1166,  1172,  1173,  1178,  1179,  1182,  1186,
  1190,  1194,  1198,  1202,  1206,  1210,  1214,  1217,  1221,  1222,
  1226,  1228,  1232,  1233,  1237,  1238,  1241,  1245,  1249,  1254,
  1259,  1264,  1269,  1275,  1281,  1284,  1292,  1304,  1312,  1320,
  1330,  1342,  1356,  1372,  1373,  1381,  1382,  1390,  1398,  1402,
  1404,  1406,  1407,  1410,  1414,  1418,  1421,  1422,  1425,  1429,
  1433,  1437,  1441,  1446,  1447,  1450,  1454,  1458,  1462,  1466,
  1470,  1475,  1476,  1479,  1483,  1487,  1491,  1495,  1500,  1501,
  1504,  1508,  1512,  1516,  1520,  1524,  1529,  1534,  1539,  1540,
  1545,  1546,  1549,  1553,  1557,  1561,  1565,  1569,  1573,  1574,
  1577,  1581,  1583,  1584,  1587,  1591,  1596,  1601,  1605,  1610,
  1611,  1616,  1617,  1620,  1624,  1628,  1633,  1634,  1640,  1646,
  1647,  1650,  1651,  1658,  1662,  1663,  1668,  1672,  1676,  1677,
  1680,  1684,  1686,  1687,  1690,  1694,  1698,  1702,  1706,  1711,
  1712,  1721,  1722,  1723,  1727,  1735,  1744,  1763,  1766,  1771,
  1773,  1775,  1777,  1779,  1782,  1807,  1810,  1811,  1826,  1835,
  1856,  1886,  1925,  1926,  1929,  1933,  1938,  1943,  1947,  1950,
  1954,  1958,  1962,  1966,  1970,  1974,  1978,  1982,  1986,  1990,
  1994,  1998,  1999,  2002,  2003,  2007,  2009,  2013,  2014,  2016,
  2020,  2022,  2024,  2028,  2032,  2036,  2043,  2048,  2053,  2060,
  2070,  2076,  2077,  2081,  2087,  2093,  2095,  2097,  2099,  2101,
  2103,  2105,  2107,  2109,  2111,  2113,  2115,  2117,  2119,  2121,
  2123,  2125,  2127,  2129,  2131,  2133,  2135,  2137,  2141,  2144,
  2147,  2151,  2155,  2159,  2163,  2167,  2171,  2175,  2179,  2183,
  2187,  2191,  2195,  2199,  2203,  2208,  2213,  2218,  2223,  2228,
  2233,  2238,  2243,  2248,  2253,  2260,  2265,  2270,  2275,  2280,
  2285,  2290,  2297,  2304,  2311,  2317,  2320,  2322,  2324,  2326,
  2328,  2330,  2332,  2334,  2336,  2338
};

static const short yyrhs[] = {    -1,
   204,   205,     0,     0,     0,   205,   206,   207,     0,    41,
   195,   210,   196,     0,    77,   195,   230,   196,     0,    48,
   195,   261,   196,     0,    61,   195,   246,   196,     0,    63,
   195,   252,   196,     0,    73,   195,   268,   196,     0,    86,
   195,   289,   196,     0,   103,   195,   315,   196,     0,   136,
   195,   345,   196,     0,   138,   195,   357,   196,     0,   361,
     0,   378,     0,     9,   383,     0,   208,     0,   167,     7,
     0,   169,     7,     0,   170,     7,     0,     0,   209,   365,
     0,     0,     0,   210,   211,   212,     0,     5,   171,   214,
     7,     0,     5,   229,   171,   214,     7,     0,     0,     5,
   227,   171,   213,   214,     7,     0,    42,   197,   225,   198,
     7,     0,   378,     0,     0,     0,   218,   197,   215,   219,
   216,   220,   198,     0,   193,   222,     0,   214,     0,     5,
   228,     0,    49,     0,     5,     0,   222,     0,    43,     0,
     0,   226,   221,   222,     0,   226,    44,     5,   228,     0,
     5,     0,   224,     0,   195,   223,   196,     0,     0,   223,
   226,   224,     0,   223,   226,   185,   224,     0,     3,     0,
     3,     8,     3,     0,     3,     8,   197,   381,   198,     3,
     0,     5,     0,     5,   195,   381,   196,     0,     5,   195,
   196,     0,     0,   225,   226,     5,     0,   225,   226,     5,
   195,   381,   196,     0,     0,   199,     0,   195,   193,   381,
   196,     0,     0,   195,   196,     0,   195,   381,   196,     0,
     0,   230,   231,     0,    45,   197,   232,   198,     7,     0,
     5,   197,   198,   171,   233,     7,     0,     5,   197,   217,
   198,   171,   233,     7,     0,   378,     0,     0,   232,   226,
     5,     0,    10,   197,   381,   198,     0,    77,   197,     5,
   198,     0,     0,   234,   235,     0,     0,   236,   237,     0,
   240,     0,     0,     0,   237,   172,   238,   237,     8,   239,
   237,     0,   237,   186,   237,     0,   237,   189,   237,     0,
    40,   197,   237,   199,   237,   198,     0,   237,   187,   237,
     0,   237,   184,   237,     0,   237,   185,   237,     0,   237,
   188,   237,     0,   237,   192,   237,     0,   237,   178,   237,
     0,   237,   179,   237,     0,   237,   180,   237,     0,   237,
   181,   237,     0,   237,   176,   237,     0,   237,   175,   237,
     0,   237,   177,   237,     0,   237,   173,   237,     0,   237,
   174,   237,     0,   185,   237,     0,   184,   237,     0,   191,
   237,     0,   200,   237,   201,     0,   382,     0,   380,   243,
   245,     0,     5,   314,     0,   314,     0,   314,   243,     0,
     0,    96,   241,   197,   235,   198,     0,    37,   197,   314,
   198,     0,    39,   197,   314,   198,     0,     0,    38,   242,
   197,   235,   199,   217,   198,     0,   178,     5,   179,   197,
   235,   198,     0,   194,     5,     0,   194,   157,     0,   194,
   114,     0,   194,     3,     0,   240,   193,     3,     0,   193,
     3,     0,   197,   202,   198,     0,   197,   198,     0,   197,
   244,   198,     0,   237,     0,   244,   199,   237,     0,     0,
   195,   376,   196,     0,   195,    49,   197,   217,   198,   196,
     0,   195,    46,   197,     5,   198,   196,     0,     0,   246,
   195,   247,   196,     0,     0,   247,   248,     0,    74,     5,
     7,     0,    62,   195,   249,   196,     0,     0,   249,   195,
   250,   196,     0,     0,   250,   251,     0,    49,   217,     7,
     0,    49,    43,     7,     0,    61,     5,   245,     7,     0,
     0,   252,   195,   253,   196,     0,     0,   253,   254,     0,
    74,     5,     7,     0,    66,   233,     7,     0,    62,   195,
   255,   196,     0,     0,   255,   195,   256,   196,     0,     0,
   256,   257,     0,    64,     5,     7,     0,    65,     5,     7,
     0,    62,   195,   258,   196,     0,     0,   258,   195,   259,
   196,     0,     0,   259,   260,     0,    67,     5,     7,     0,
    68,   381,     7,     0,    69,   381,     7,     0,    70,   381,
     7,     0,    71,   381,     7,     0,    72,   381,     7,     0,
     0,   261,   262,     0,   195,   263,   196,     0,   378,     0,
     0,   263,   264,     0,    74,     5,     7,     0,    74,     5,
   227,     7,     0,    64,     5,     7,     0,    62,   195,   265,
   196,     0,    62,     5,   195,   265,   196,     0,     0,   265,
   195,   266,   196,     0,     0,   266,   267,     0,    64,     5,
     7,     0,    49,   217,     7,     0,    50,   217,     7,     0,
    56,   233,     7,     0,    55,   233,     7,     0,    60,     5,
     7,     0,    57,   195,     3,   226,     3,   196,     7,     0,
    51,   217,     7,     0,    52,   217,     7,     0,    77,   233,
     7,     0,    54,   233,     7,     0,    53,   233,     7,     0,
    77,   197,   233,   199,   233,   198,     7,     0,    54,   197,
   233,   199,   233,   198,     7,     0,    53,   197,   233,   199,
   233,   198,     7,     0,     0,   268,   269,     0,   195,   270,
   196,     0,   378,     0,     0,   270,   271,     0,    74,     5,
     7,     0,    74,     5,   227,     7,     0,    64,     5,     7,
     0,    75,   195,   272,   196,     0,    80,   195,   278,   196,
     0,    82,   195,   283,   196,     0,    48,   195,   286,   196,
     0,     0,   272,   195,   273,   196,     0,     0,   273,   274,
     0,    74,     5,     7,     0,    76,     5,     7,     0,    76,
     5,   227,     7,     0,    77,     5,   275,     7,     0,    78,
   217,     7,     0,    79,   217,     7,     0,     0,     0,     0,
   195,    87,     5,     7,    86,     5,   227,     7,   276,    41,
   217,     7,   277,   103,     5,   228,     7,   196,     0,     0,
   278,   195,   279,   196,     0,     0,   279,   280,     0,    74,
     5,     7,     0,    81,   281,     7,     0,     5,     0,   195,
   282,   196,     0,     0,   282,   226,     5,     0,     0,   283,
   195,   284,   196,     0,     0,   284,   285,     0,    74,     5,
     7,     0,    64,     5,     7,     0,    76,     5,     7,     0,
     0,   286,   195,   287,   196,     0,     0,   287,   288,     0,
    76,     5,     7,     0,    79,   218,    85,     5,     7,     0,
    83,   218,     7,     0,    84,   221,     7,     0,    85,     5,
   228,     7,     0,     0,   289,   290,     0,   195,   291,   196,
     0,   378,     0,     0,   291,   292,     0,    74,     5,     7,
     0,    74,     5,   227,     7,     0,    64,     5,     7,     0,
    87,   195,   293,   196,     0,    91,   195,   299,   196,     0,
     0,   293,   195,   294,   196,     0,     0,   294,   295,     0,
    74,     5,     7,     0,    64,    82,     7,     0,    64,    92,
     7,     0,    64,     5,     7,     0,     0,    88,     5,   228,
   296,   298,     7,     0,    89,     3,     7,     0,     0,   197,
   297,   235,   198,     7,     0,   102,   217,     7,     0,    63,
     5,     7,     0,    61,     5,     7,     0,    90,     3,     7,
     0,     0,   197,     5,   198,     0,     0,   299,   300,     0,
    92,   195,   305,   196,     0,    93,   195,   305,   196,     0,
    94,   195,   309,   196,     0,    95,   195,   301,   196,     0,
     0,   301,   302,     0,    64,     5,     7,     0,    85,     5,
     7,     0,   195,   303,   196,     0,     0,   303,   304,     0,
    58,   314,     7,     0,    59,   314,     7,     0,    91,   314,
     7,     0,   102,   217,     7,     0,     0,   305,   306,     0,
     0,     0,   313,   197,   307,   235,   308,   199,   235,   198,
     7,     0,   102,   217,     7,     0,    61,     5,     7,     0,
    63,     5,     7,     0,     0,   309,   310,     0,   102,   217,
     7,     0,     0,     0,   313,   197,   311,   235,   312,   199,
   314,   198,     7,     0,     0,    96,     0,    97,     0,    98,
     0,    99,     0,   100,     0,   101,     0,   195,     5,     5,
   196,     0,   195,     5,   196,     0,     0,   315,   316,     0,
   195,   317,   196,     0,   378,     0,     0,   317,   318,     0,
    74,     5,     7,     0,    74,     5,   227,     7,     0,   104,
   195,   320,   196,     0,     0,   111,   319,   195,   327,   196,
     0,     0,   320,   195,   321,   196,     0,     0,   321,   322,
     0,    74,     5,     7,     0,    64,     5,     7,     0,   105,
   323,     7,     0,   106,   383,     7,     0,   109,   325,     7,
     0,   110,     5,     7,     0,   107,   375,     7,     0,   108,
   383,     7,     0,     5,   228,     0,   195,   324,   196,     0,
     0,   324,   226,     5,     0,     5,     0,   195,   326,   196,
     0,     0,   326,   226,     5,     0,     0,   327,   328,     0,
     5,     5,     7,     0,   113,   233,     7,     0,   121,   195,
   334,   196,     0,   125,   195,   336,   196,     0,   128,   195,
   338,   196,     0,   131,   195,   340,   196,     0,     5,   197,
     5,   198,     7,     0,   113,   197,   233,   198,     7,     0,
   168,     7,     0,   117,   197,   233,   198,   195,   327,   196,
     0,   117,   197,   233,   198,   195,   327,   196,   118,   195,
   327,   196,     0,   115,   197,     5,   199,   233,   198,     7,
     0,   120,   197,     5,   199,   233,   198,     7,     0,   116,
   197,     5,   199,     5,   199,   375,   198,     7,     0,   119,
   197,     5,   199,   381,   199,   375,   199,   381,   198,     7,
     0,   121,   197,   381,   199,   381,   199,   233,   199,   233,
   198,   195,   327,   196,     0,   125,   197,   381,   199,   381,
   199,   233,   199,   381,   199,   381,   198,   195,   327,   196,
     0,     0,   143,   329,   197,   331,   332,   198,     7,     0,
     0,   144,   330,   197,   331,   332,   198,     7,     0,   134,
   197,   217,   199,   233,   198,     7,     0,   135,     6,     7,
     0,   373,     0,     5,     0,     0,   332,   333,     0,   199,
   154,   383,     0,   199,   157,   375,     0,   199,   375,     0,
     0,   334,   335,     0,   122,   381,     7,     0,   123,   381,
     7,     0,   114,   233,     7,     0,   124,   233,     7,     0,
   111,   195,   327,   196,     0,     0,   336,   337,     0,   122,
   381,     7,     0,   123,   381,     7,     0,   114,   233,     7,
     0,   126,   381,     7,     0,   127,   381,     7,     0,   111,
   195,   327,   196,     0,     0,   338,   339,     0,   129,   381,
     7,     0,   130,   233,     7,     0,    66,   381,     7,     0,
   166,   381,     7,     0,   111,   195,   327,   196,     0,     0,
   340,   341,     0,   129,   381,     7,     0,   132,   381,     7,
     0,    66,   381,     7,     0,   166,   381,     7,     0,   104,
     5,     7,     0,   133,   195,   342,   196,     0,   111,   195,
   327,   196,     0,   112,   195,   327,   196,     0,     0,   342,
   195,   343,   196,     0,     0,   343,   344,     0,    64,     5,
     7,     0,    87,     5,     7,     0,   102,   217,     7,     0,
    66,   381,     7,     0,    77,   233,     7,     0,   166,     5,
     7,     0,     0,   345,   346,     0,   195,   347,   196,     0,
   378,     0,     0,   347,   348,     0,    74,     5,     7,     0,
    74,     5,   227,     7,     0,   105,     5,   228,     7,     0,
   137,     5,     7,     0,    87,   195,   349,   196,     0,     0,
   349,   195,   350,   196,     0,     0,   350,   351,     0,    74,
     5,     7,     0,    64,     5,     7,     0,    55,   195,   352,
   196,     0,     0,   352,    92,   195,   353,   196,     0,   352,
     5,   195,   353,   196,     0,     0,   353,   354,     0,     0,
   313,   197,   355,   235,   198,     7,     0,    64,     5,     7,
     0,     0,   102,   356,   217,     7,     0,    61,     5,     7,
     0,    63,     5,     7,     0,     0,   357,   358,     0,   195,
   359,   196,     0,   378,     0,     0,   359,   360,     0,    74,
     5,     7,     0,   139,     5,     7,     0,   159,     5,     7,
     0,   141,   383,     7,     0,   111,   195,   363,   196,     0,
     0,   138,     5,   140,     5,   362,   195,   363,   196,     0,
     0,     0,   363,   364,   365,     0,   142,   197,   366,   368,
   370,   198,     7,     0,   143,   197,   366,   146,   217,   370,
   198,     7,     0,   143,   197,   366,   146,   217,   153,     5,
   195,   381,   199,   381,   196,   195,   381,   196,   370,   198,
     7,     0,     5,   199,     0,     5,   367,     5,   199,     0,
   186,     0,   187,     0,   184,     0,   185,     0,   146,   217,
     0,   148,   195,   195,   381,   199,   381,   199,   381,   196,
   195,   381,   199,   381,   199,   381,   196,   195,   381,   199,
   381,   199,   381,   196,   196,     0,   147,   217,     0,     0,
   147,   195,   233,   199,   233,   199,   233,   196,   195,   375,
   369,   199,   375,   196,     0,   149,   195,   381,   199,   381,
   199,   381,   196,     0,   150,   195,   195,   381,   199,   381,
   199,   381,   196,   195,   381,   199,   381,   199,   381,   196,
   196,   195,   381,   196,     0,   151,   195,   195,   381,   199,
   381,   199,   381,   196,   195,   381,   199,   381,   199,   381,
   196,   195,   381,   199,   381,   199,   381,   196,   196,   195,
   381,   199,   381,   196,     0,   152,   195,   195,   381,   199,
   381,   199,   381,   196,   195,   381,   199,   381,   199,   381,
   196,   195,   381,   199,   381,   199,   381,   196,   195,   381,
   199,   381,   199,   381,   196,   196,   195,   381,   199,   381,
   199,   381,   196,     0,     0,   370,   371,     0,   199,   154,
   383,     0,   199,   154,   179,   383,     0,   199,   154,   183,
   383,     0,   199,   155,   381,     0,   199,   162,     0,   199,
   163,   381,     0,   199,   158,   381,     0,   199,   159,     5,
     0,   199,   160,   372,     0,   199,   161,   372,     0,   199,
   159,   372,     0,   199,   156,   381,     0,   199,   157,   375,
     0,   199,   145,     5,     0,   199,   165,     5,     0,   199,
   164,   381,     0,   199,    55,   375,     0,     0,   372,     6,
     0,     0,   195,   374,   196,     0,   233,     0,   374,   199,
   233,     0,     0,   381,     0,   195,   376,   196,     0,   381,
     0,   377,     0,   376,   199,   381,     0,   376,   199,   377,
     0,   381,     8,   381,     0,   381,     8,   197,   381,   198,
   381,     0,     5,   171,   381,     7,     0,     5,   171,     6,
     7,     0,     5,   171,   195,   376,   196,     7,     0,     5,
   171,    47,   197,     5,   199,     5,   198,     7,     0,    11,
   197,   379,   198,     7,     0,     0,   379,   226,     5,     0,
   379,   226,     5,   171,   381,     0,   379,   226,     5,   171,
     6,     0,    17,     0,    18,     0,    19,     0,    20,     0,
    21,     0,    22,     0,    23,     0,    24,     0,    25,     0,
    26,     0,    27,     0,    28,     0,    29,     0,    30,     0,
    31,     0,    32,     0,    33,     0,    34,     0,    35,     0,
    36,     0,     5,     0,   382,     0,   200,   381,   201,     0,
   185,   381,     0,   191,   381,     0,   381,   185,   381,     0,
   381,   184,   381,     0,   381,   186,   381,     0,   381,   187,
   381,     0,   381,   188,   381,     0,   381,   192,   381,     0,
   381,   178,   381,     0,   381,   179,   381,     0,   381,   180,
   381,     0,   381,   181,   381,     0,   381,   176,   381,     0,
   381,   175,   381,     0,   381,   173,   381,     0,   381,   174,
   381,     0,    17,   197,   381,   198,     0,    18,   197,   381,
   198,     0,    19,   197,   381,   198,     0,    20,   197,   381,
   198,     0,    21,   197,   381,   198,     0,    22,   197,   381,
   198,     0,    23,   197,   381,   198,     0,    24,   197,   381,
   198,     0,    25,   197,   381,   198,     0,    26,   197,   381,
   198,     0,    27,   197,   381,   199,   381,   198,     0,    28,
   197,   381,   198,     0,    29,   197,   381,   198,     0,    30,
   197,   381,   198,     0,    31,   197,   381,   198,     0,    32,
   197,   381,   198,     0,    33,   197,   381,   198,     0,    34,
   197,   381,   199,   381,   198,     0,    35,   197,   381,   199,
   381,   198,     0,    36,   197,   381,   199,   381,   198,     0,
   381,   172,   381,     8,   381,     0,   381,   193,     0,     4,
     0,     3,     0,    12,     0,    13,     0,    14,     0,    15,
     0,    16,     0,     5,     0,     6,     0,     5,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   313,   350,   388,   391,   394,   397,   400,   401,   402,   403,
   404,   405,   406,   407,   408,   410,   412,   414,   419,   428,
   432,   445,   447,   455,   469,   472,   473,   476,   481,   484,
   486,   489,   491,   495,   503,   514,   523,   532,   539,   574,
   579,   589,   592,   606,   611,   614,   663,   675,   701,   706,
   721,   739,   760,   766,   775,   789,   823,   836,   856,   860,
   870,   887,   887,   890,   896,   899,   902,   912,   915,   918,
   922,   942,   986,   990,   993,  1010,  1019,  1026,  1029,  1035,
  1041,  1048,  1052,  1065,  1080,  1094,  1100,  1106,  1112,  1118,
  1124,  1130,  1136,  1142,  1148,  1154,  1160,  1166,  1172,  1178,
  1184,  1190,  1197,  1203,  1205,  1214,  1218,  1224,  1302,  1336,
  1346,  1359,  1361,  1372,  1378,  1384,  1386,  1415,  1439,  1450,
  1456,  1463,  1469,  1480,  1494,  1497,  1498,  1501,  1504,  1507,
  1512,  1514,  1521,  1546,  1553,  1558,  1563,  1567,  1574,  1579,
  1584,  1589,  1595,  1599,  1604,  1607,  1636,  1644,  1649,  1658,
  1662,  1671,  1674,  1679,  1684,  1689,  1697,  1701,  1712,  1721,
  1726,  1731,  1736,  1748,  1752,  1807,  1810,  1813,  1816,  1819,
  1828,  1835,  1838,  1860,  1863,  1873,  1877,  1885,  1892,  1900,
  1903,  1923,  1940,  1962,  1972,  1976,  1987,  2011,  2036,  2041,
  2049,  2057,  2067,  2083,  2090,  2096,  2102,  2110,  2118,  2126,
  2144,  2152,  2155,  2178,  2182,  2191,  2195,  2203,  2210,  2218,
  2221,  2224,  2227,  2232,  2250,  2285,  2300,  2304,  2309,  2314,
  2319,  2331,  2355,  2410,  2414,  2418,  2427,  2490,  2496,  2501,
  2506,  2510,  2517,  2522,  2540,  2545,  2549,  2566,  2572,  2579,
  2586,  2590,  2597,  2606,  2617,  2634,  2706,  2718,  2722,  2742,
  2756,  2759,  2762,  2806,  2813,  2816,  2838,  2842,  2850,  2854,
  2862,  2869,  2878,  2880,  2885,  2900,  2916,  2933,  2937,  2942,
  2946,  2949,  2958,  2997,  3021,  3026,  3032,  3182,  3187,  3196,
  3205,  3210,  3213,  3251,  3268,  3294,  3299,  3302,  3305,  3310,
  3318,  3321,  3332,  3342,  3354,  3363,  3366,  3370,  3372,  3374,
  3380,  3398,  3402,  3413,  3474,  3520,  3544,  3553,  3565,  3582,
  3586,  3620,  3629,  3683,  3699,  3702,  3703,  3704,  3705,  3706,
  3707,  3711,  3727,  3743,  3750,  3753,  3774,  3778,  3786,  3790,
  3799,  3806,  3809,  3811,  3816,  3832,  3849,  3864,  3868,  3873,
  3881,  3884,  3889,  3894,  3899,  3909,  3916,  3955,  3960,  3965,
  3975,  3987,  3991,  3996,  4007,  4016,  4023,  4043,  4050,  4056,
  4062,  4068,  4076,  4092,  4099,  4105,  4116,  4127,  4143,  4155,
  4177,  4198,  4211,  4225,  4232,  4234,  4241,  4243,  4253,  4263,
  4273,  4283,  4289,  4292,  4296,  4305,  4316,  4328,  4332,  4338,
  4342,  4346,  4351,  4360,  4373,  4377,  4383,  4387,  4391,  4395,
  4400,  4409,  4421,  4424,  4430,  4434,  4438,  4443,  4452,  4467,
  4470,  4476,  4480,  4484,  4489,  4499,  4505,  4511,  4520,  4524,
  4528,  4542,  4545,  4556,  4585,  4588,  4591,  4599,  4613,  4621,
  4624,  4645,  4648,  4659,  4662,  4670,  4678,  4724,  4729,  4734,
  4738,  4742,  4750,  4754,  4758,  4767,  4772,  4778,  4784,  4796,
  4807,  4810,  4818,  4846,  4856,  4856,  4862,  4871,  4887,  4895,
  4898,  4903,  4906,  4915,  4918,  4926,  4938,  4948,  4953,  4958,
  4976,  4985,  4989,  4994,  5002,  5009,  5018,  5041,  5053,  5075,
  5078,  5079,  5080,  5083,  5092,  5108,  5115,  5129,  5139,  5147,
  5160,  5178,  5203,  5218,  5221,  5229,  5236,  5243,  5247,  5251,
  5255,  5259,  5268,  5273,  5278,  5298,  5305,  5312,  5320,  5328,
  5335,  5346,  5353,  5399,  5405,  5409,  5414,  5419,  5422,  5423,
  5427,  5432,  5441,  5444,  5453,  5461,  5478,  5486,  5492,  5504,
  5548,  5552,  5555,  5561,  5567,  5578,  5580,  5581,  5582,  5583,
  5584,  5585,  5586,  5587,  5588,  5589,  5590,  5591,  5592,  5593,
  5594,  5595,  5596,  5597,  5598,  5599,  5601,  5603,  5604,  5605,
  5606,  5607,  5608,  5609,  5610,  5611,  5612,  5613,  5614,  5615,
  5616,  5617,  5618,  5619,  5620,  5621,  5622,  5623,  5624,  5625,
  5626,  5627,  5628,  5629,  5630,  5631,  5632,  5633,  5634,  5635,
  5636,  5637,  5638,  5639,  5640,  5641,  5644,  5647,  5648,  5649,
  5650,  5651,  5652,  5653,  5670,  5675
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tInclude","tConstant","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct",
"tGroup","tDefineGroup","tAll","tInSupport","tDefineFunction","tList","tListAlt",
"tConstraint","tRegion","tSubRegion","tRegionRef","tSubRegionRef","tFilter",
"tCoefficient","tValue","tTimeFunction","tBranch","tNode","tLoop","tNameOfResolution",
"tJacobian","tCase","tIntegration","tType","tSubType","tCriterion","tGeoElement",
"tNumberOfPoints","tMaxNumberOfPoints","tNumberOfDivisions","tMaxNumberOfDivisions",
"tStoppingCriterion","tFunctionSpace","tName","tBasisFunction","tNameOfCoef",
"tFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity",
"tEntityType","tEntitySubType","tNameOfConstraint","tFormulation","tQuantity",
"tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham",
"tGlobalTerm","tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof","tJacNL","tNeverDt",
"tIn","tResolution","tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency",
"tSolver","tOriginSystem","tDestinationSystem","tOperation","tOperationEnd",
"tSetTime","tDTime","tSetFrequency","tFourierTransform","tIf","tElse","tLanczos",
"tUpdate","tTimeLoopTheta","tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta",
"tGamma","tIterativeLoop","tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction",
"tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates","tSystemCommand",
"tPostProcessing","tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost",
"tAppend","tPlot","tPrint","tWrite","tAdapt","tOnRegion","tOnGrid","tOnCut",
"tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension",
"tTimeStep","tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing",
"tTarget","tSort","tFlag","tExit","tBreak","tHelp","tCpu","tDEF","'?'","tAND",
"tOR","tNOTEQUAL","tEQUAL","tAPPROXEQUAL","'<'","'>'","tLESSOREQUAL","tGREATEROREQUAL",
"tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'","'%'","tCROSSPRODUCT",
"UNARYPREC","'!'","'^'","'#'","'$'","'{'","'}'","'['","']'","','","'('","')'",
"'.'","Stats","@1","ProblemDefinitions","@2","ProblemDefinition","Interactive",
"@3","Groups","@4","Group","@5","ReducedGroupRHS","@6","@7","GroupRHS","FunctionForGroup",
"ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup","ListOfRegion",
"RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex",
"Index","Functions","Function","DefineFunctions","Expression","@8","WholeQuantityExpression",
"@9","WholeQuantity","@10","@11","WholeQuantity_Single","@12","@13","ArgumentsForFunction",
"RecursiveListOfQuantity","ParametersForFunction","JacobianMethods","JacobianMethod",
"JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods",
"IntegrationMethod","IntegrationMethodTerm","IntegrationCases","IntegrationCase",
"IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@14","@15","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","GlobalQuantities","GlobalQuantity",
"GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm",
"Formulations","BracedFormulation","Formulation","FormulationTerm","DefineQuantities",
"DefineQuantity","DefineQuantityTerm","@16","@17","IndexInFunctionSpace","Equations",
"EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@18","@19","GlobalTerm",
"GlobalTermTerm","@20","@21","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@22","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@23","@24","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@25","@26","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@27","PostSubOperations","@28",
"PostSubOperation","PostQuantitiesToPlot","Combination","PlotSubType","@29",
"PlotOptions","PlotOption","ParsedStrings","ListOfExpression","RecursiveListOfExpression",
"ListOfDouble","RecursiveListOfDouble","DottedFExpr","Affectation","DefineConstants",
"NameForFunction","FExpr","OneFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   204,   203,   205,   206,   205,   207,   207,   207,   207,   207,
   207,   207,   207,   207,   207,   207,   207,   207,   207,   208,
   208,   208,   209,   208,   210,   211,   210,   212,   212,   213,
   212,   212,   212,   215,   216,   214,   214,   217,   217,   218,
   218,   219,   219,   220,   220,   220,   221,   222,   222,   223,
   223,   223,   224,   224,   224,   224,   224,   224,   225,   225,
   225,   226,   226,   227,   228,   228,   229,   230,   230,   231,
   231,   231,   231,   232,   232,   233,   233,   234,   233,   236,
   235,   237,   238,   239,   237,   237,   237,   237,   237,   237,
   237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
   237,   237,   237,   237,   237,   240,   240,   240,   240,   240,
   240,   241,   240,   240,   240,   242,   240,   240,   240,   240,
   240,   240,   240,   240,   243,   243,   243,   244,   244,   245,
   245,   245,   245,   246,   246,   247,   247,   248,   248,   249,
   249,   250,   250,   251,   251,   251,   252,   252,   253,   253,
   254,   254,   254,   255,   255,   256,   256,   257,   257,   257,
   258,   258,   259,   259,   260,   260,   260,   260,   260,   260,
   261,   261,   262,   262,   263,   263,   264,   264,   264,   264,
   264,   265,   265,   266,   266,   267,   267,   267,   267,   267,
   267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
   268,   268,   269,   269,   270,   270,   271,   271,   271,   271,
   271,   271,   271,   272,   272,   273,   273,   274,   274,   274,
   274,   274,   274,   275,   276,   277,   275,   278,   278,   279,
   279,   280,   280,   281,   281,   282,   282,   283,   283,   284,
   284,   285,   285,   285,   286,   286,   287,   287,   288,   288,
   288,   288,   288,   289,   289,   290,   290,   291,   291,   292,
   292,   292,   292,   292,   293,   293,   294,   294,   295,   295,
   295,   295,   296,   295,   295,   297,   295,   295,   295,   295,
   295,   298,   298,   299,   299,   300,   300,   300,   300,   301,
   301,   302,   302,   302,   303,   303,   304,   304,   304,   304,
   305,   305,   307,   308,   306,   306,   306,   306,   309,   309,
   310,   311,   312,   310,   313,   313,   313,   313,   313,   313,
   313,   314,   314,   315,   315,   316,   316,   317,   317,   318,
   318,   318,   319,   318,   320,   320,   321,   321,   322,   322,
   322,   322,   322,   322,   322,   322,   323,   323,   324,   324,
   325,   325,   326,   326,   327,   327,   328,   328,   328,   328,
   328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
   328,   328,   328,   329,   328,   330,   328,   328,   328,   331,
   331,   332,   332,   333,   333,   333,   334,   334,   335,   335,
   335,   335,   335,   336,   336,   337,   337,   337,   337,   337,
   337,   338,   338,   339,   339,   339,   339,   339,   340,   340,
   341,   341,   341,   341,   341,   341,   341,   341,   342,   342,
   343,   343,   344,   344,   344,   344,   344,   344,   345,   345,
   346,   346,   347,   347,   348,   348,   348,   348,   348,   349,
   349,   350,   350,   351,   351,   351,   352,   352,   352,   353,
   353,   355,   354,   354,   356,   354,   354,   354,   357,   357,
   358,   358,   359,   359,   360,   360,   360,   360,   360,   362,
   361,   363,   364,   363,   365,   365,   365,   366,   366,   367,
   367,   367,   367,   368,   368,   368,   369,   368,   368,   368,
   368,   368,   370,   370,   371,   371,   371,   371,   371,   371,
   371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
   371,   372,   372,   373,   373,   374,   374,   375,   375,   375,
   376,   376,   376,   376,   377,   377,   378,   378,   378,   378,
   378,   379,   379,   379,   379,   380,   380,   380,   380,   380,
   380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
   380,   380,   380,   380,   380,   380,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   382,   382,   382,   382,
   382,   382,   382,   382,   383,   383
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     2,     2,     0,     2,     0,     0,     3,     4,     5,     0,
     6,     5,     1,     0,     0,     7,     2,     1,     2,     1,
     1,     1,     1,     0,     3,     4,     1,     1,     3,     0,
     3,     4,     1,     3,     6,     1,     4,     3,     0,     3,
     6,     0,     1,     4,     0,     2,     3,     0,     2,     5,
     6,     7,     1,     0,     3,     4,     4,     0,     2,     0,
     2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
     2,     0,     5,     4,     4,     0,     7,     6,     2,     2,
     2,     2,     3,     2,     3,     2,     3,     1,     3,     0,
     3,     6,     6,     0,     4,     0,     2,     3,     4,     0,
     4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
     3,     3,     4,     0,     4,     0,     2,     3,     3,     4,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     0,     2,     3,     1,     0,     2,     3,     4,     3,     4,
     5,     0,     4,     0,     2,     3,     3,     3,     3,     3,
     3,     7,     3,     3,     3,     3,     3,     7,     7,     7,
     0,     2,     3,     1,     0,     2,     3,     4,     3,     4,
     4,     4,     4,     0,     4,     0,     2,     3,     3,     4,
     4,     3,     3,     0,     0,     0,    18,     0,     4,     0,
     2,     3,     3,     1,     3,     0,     3,     0,     4,     0,
     2,     3,     3,     3,     0,     4,     0,     2,     3,     5,
     3,     3,     4,     0,     2,     3,     1,     0,     2,     3,
     4,     3,     4,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     0,     6,     3,     0,     5,     3,     3,     3,
     3,     0,     3,     0,     2,     4,     4,     4,     4,     0,
     2,     3,     3,     3,     0,     2,     3,     3,     3,     3,
     0,     2,     0,     0,     9,     3,     3,     3,     0,     2,
     3,     0,     0,     9,     0,     1,     1,     1,     1,     1,
     1,     4,     3,     0,     2,     3,     1,     0,     2,     3,
     4,     4,     0,     5,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     2,     3,     0,     3,
     1,     3,     0,     3,     0,     2,     3,     3,     4,     4,
     4,     4,     5,     5,     2,     7,    11,     7,     7,     9,
    11,    13,    15,     0,     7,     0,     7,     7,     3,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     3,     4,     0,
     4,     0,     2,     3,     3,     4,     0,     5,     5,     0,
     2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     3,     3,     3,     4,     0,
     8,     0,     0,     3,     7,     8,    18,     2,     4,     1,
     1,     1,     1,     2,    24,     2,     0,    14,     8,    20,
    29,    38,     0,     2,     3,     4,     4,     3,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     0,     2,     0,     3,     1,     3,     0,     1,     3,
     1,     1,     3,     3,     3,     6,     4,     4,     6,     9,
     5,     0,     3,     5,     5,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
     4,     6,     6,     6,     5,     2,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    23,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,     0,   606,   605,    18,   532,    25,
   171,   134,   147,   201,    68,   254,   324,   429,     0,   459,
    20,    21,    22,     0,     0,    24,   598,   597,   604,     0,
   599,   600,   601,   602,   603,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   557,    62,    26,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   528,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   559,   560,
     0,   522,   521,     0,   527,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   596,     0,    63,     0,     6,     0,   175,     8,   172,   174,
   136,     9,   149,    10,   205,    11,   202,   204,     0,     0,
     7,    69,    73,   258,    12,   255,   257,   328,    13,   325,
   327,   433,    14,   430,   432,   470,   463,    15,   460,   462,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   558,     0,   573,
   574,   572,   571,   567,   568,   569,   570,   562,   561,   563,
   564,   565,   566,   531,   533,     0,     0,    27,    33,     0,
     0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
   482,   483,   480,   481,   478,     0,     0,     0,     0,     0,
     0,     0,     0,   493,     0,   575,   576,   577,   578,   579,
   580,   581,   582,   583,   584,     0,   586,   587,   588,   589,
   590,   591,     0,     0,     0,     0,   529,   524,   523,     0,
   525,     0,     0,     0,     0,     0,     0,    59,     0,     0,
     0,   173,   176,     0,     0,   135,   137,     0,    78,     0,
   148,   150,     0,     0,     0,     0,     0,     0,   203,   206,
    65,    40,     0,     0,    38,     0,     0,    62,     0,     0,
     0,     0,   256,   259,     0,     0,   333,   326,   329,     0,
     0,     0,     0,   431,   434,   472,     0,     0,     0,     0,
     0,   461,   464,     0,   484,    78,   486,     0,     0,     0,
     0,     0,     0,   493,     0,     0,     0,     0,     0,     0,
   595,   535,   534,   604,     0,     0,     0,    30,     0,    62,
     0,   182,     0,     0,   140,     0,   154,     0,     0,     0,
    80,     0,   245,     0,     0,   214,   228,   238,     0,    39,
    53,    56,    50,    37,    48,    78,     0,    34,     0,     0,
     0,     0,   265,   284,     0,   335,     0,     0,   440,    65,
     0,   473,     0,   472,     0,     0,     0,   479,     0,     0,
     0,     0,     0,     0,     0,     0,   494,     0,     0,   585,
   592,   593,   594,     0,     0,    28,     0,    67,     0,    41,
     0,     0,     0,   182,     0,   179,   177,     0,     0,     0,
   138,     0,     0,     0,   152,    79,     0,   151,     0,   209,
   207,     0,     0,     0,     0,    66,     0,     0,    62,     0,
    78,     0,    70,    75,   262,   260,     0,     0,     0,   330,
     0,     0,   355,   435,     0,     0,     0,   438,   471,     0,
   465,   473,   466,   468,   467,    78,     0,     0,     0,     0,
     0,   475,   518,     0,     0,     0,     0,   518,     0,   512,
   512,   512,   499,     0,     0,     0,     0,     0,   530,   526,
    64,     0,    29,    32,    60,     0,   184,   180,   178,   142,
   139,   156,   153,     0,     0,   604,   536,   537,   538,   539,
   540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,   554,   555,     0,   116,     0,     0,
   112,     0,     0,     0,     0,     0,     0,     0,     0,    81,
    82,   110,     0,   107,   247,   213,   208,   216,   210,   230,
   211,   240,   212,    54,     0,    58,     0,    49,     0,    71,
     0,    43,    35,    42,   261,   267,   263,     0,     0,     0,
     0,   264,   285,   331,   337,   332,     0,   436,   442,   439,
   437,   474,   469,     0,     0,     0,     0,     0,     0,     0,
   511,   519,   508,     0,     0,   495,   498,   506,   507,   501,
   502,   505,   503,   504,   500,   510,   509,     0,   476,    31,
     0,   181,     0,     0,     0,    76,    77,   109,     0,     0,
     0,     0,     0,     0,   104,   103,   105,   124,   122,   119,
   121,   120,     0,     0,    83,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   111,   130,     0,     0,     0,     0,     0,
    57,     0,    51,    72,    62,     0,   301,   301,   309,   290,
     0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   374,   376,     0,   334,   356,     0,
    78,     0,     0,     0,     0,     0,     0,   496,   497,   513,
     0,     0,     0,     0,     0,     0,    78,    78,    78,    78,
     0,     0,     0,    78,   183,   185,     0,     0,   141,   143,
     0,     0,     0,   155,   157,     0,    80,     0,     0,    80,
     0,     0,   323,   106,     0,   101,   102,    99,    98,   100,
    94,    95,    96,    97,    90,    91,    86,    89,    92,    87,
    93,   123,   126,     0,   128,     0,     0,   108,     0,     0,
     0,     0,     0,   246,   248,     0,     0,     0,     0,     0,
   215,   217,     0,     0,   229,   231,     0,     0,     0,   239,
   241,     0,    52,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   266,   276,   268,   315,   315,   315,     0,
     0,     0,     0,     0,   518,     0,     0,     0,   336,   338,
     0,     0,    78,     0,     0,     0,    78,     0,     0,   387,
     0,   394,     0,   402,   409,     0,     0,     0,     0,   365,
     0,     0,     0,   441,   443,     0,     0,     0,     0,     0,
     0,   520,     0,    61,     0,     0,     0,     0,    78,     0,
    78,     0,     0,     0,     0,     0,     0,    78,     0,     0,
     0,   130,   161,     0,     0,   114,     0,   115,     0,     0,
    80,   322,     0,   125,   127,     0,     0,     0,     0,     0,
     0,     0,    47,     0,    65,     0,     0,   224,     0,     0,
     0,   234,   236,     0,     0,     0,     0,    55,    36,     0,
     0,     0,     0,     0,     0,     0,     0,    65,     0,     0,
     0,    80,     0,     0,   316,   317,   318,   319,   320,   321,
     0,   286,   302,     0,   287,     0,   288,   310,     0,     0,
     0,   295,   289,   291,     0,     0,    65,   349,     0,     0,
     0,     0,   351,   353,     0,     0,   357,     0,     0,   358,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   379,   514,   514,   447,     0,     0,     0,     0,
   489,     0,     0,     0,     0,   187,   188,   193,   194,     0,
   197,     0,   196,   190,   189,    62,   191,   186,     0,   195,
   145,   144,     0,     0,   158,   159,     0,     0,   113,     0,
    84,   129,     0,     0,   131,   249,     0,   251,   252,     0,
   218,   219,     0,     0,     0,   222,   223,   232,    62,   233,
   243,   242,   244,    65,    45,   280,   279,   272,   270,   271,
   269,   273,   275,   281,   278,     0,     0,     0,     0,   303,
     0,   312,     0,     0,     0,   340,   339,   347,    62,   341,
   342,   345,   346,    62,   343,   344,     0,     0,    78,     0,
     0,     0,    78,     0,    78,     0,     0,    78,   359,   388,
     0,     0,    78,     0,     0,     0,     0,   360,   395,     0,
     0,     0,     0,    78,     0,   361,   403,     0,     0,     0,
     0,     0,     0,     0,     0,   362,   410,    78,   381,    78,
   382,   380,   382,     0,   445,   444,   518,     0,     0,     0,
     0,     0,    78,    78,     0,    78,   146,   163,   160,     0,
    88,   118,     0,     0,     0,     0,   253,   220,     0,   221,
   235,     0,    46,   282,     0,   307,   308,   306,    80,   311,
    80,   292,   293,     0,     0,     0,     0,   294,   296,   348,
     0,   352,     0,   363,   364,     0,     0,   355,     0,     0,
   355,     0,     0,     0,     0,     0,   355,     0,     0,     0,
     0,     0,     0,     0,   355,     0,     0,     0,     0,     0,
   355,   355,     0,     0,   419,     0,     0,   516,     0,     0,
     0,     0,     0,   446,   487,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   117,    85,     0,     0,   250,
     0,   237,     0,     0,   277,   304,   313,     0,     0,     0,
     0,   350,   354,     0,   518,     0,   518,     0,     0,   391,
   389,   390,   392,    78,     0,   398,   396,   397,   399,   400,
    78,   406,     0,   404,   405,   407,   413,   415,     0,     0,
   411,   412,     0,   414,     0,   515,    78,     0,   518,   383,
     0,   450,   450,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
   164,   133,   132,     0,     0,   274,     0,     0,   297,   298,
   299,   300,   368,     0,   366,     0,   369,   393,     0,   401,
     0,   408,   417,   418,   421,   416,   378,   517,   375,     0,
   518,   386,   377,   315,   315,   518,     0,     0,     0,     0,
   493,   200,   199,   192,   198,     0,     0,     0,     0,     0,
     0,     0,   283,    80,     0,     0,     0,     0,    78,     0,
     0,   384,   385,     0,     0,     0,   455,   449,     0,   451,
   448,     0,     0,     0,     0,     0,     0,   165,   166,   167,
   168,   169,   170,     0,     0,     0,   370,   355,     0,     0,
     0,     0,     0,    78,     0,     0,     0,   420,   422,     0,
     0,     0,     0,   452,   488,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   457,   458,   454,     0,    80,     0,     0,
     0,     0,   477,   225,   305,   314,   367,   371,   355,     0,
   423,   426,   427,   424,   425,   428,   456,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   372,   355,   453,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   226,   373,     0,   490,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
     0,     0,     0,   485,     0,     0,     0,     0,     0,   227,
     0,     0,     0,     0,     0,     0,   491,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   492,     0,     0,     0
};

static const short yydefgoto[] = {  1528,
     1,     2,     3,    20,    21,    22,    84,   146,   228,   439,
   315,   472,   695,   316,   317,   593,   814,   914,   394,   469,
   395,   370,   144,   286,   390,   287,    89,   162,   318,   380,
   381,   456,   457,   570,   765,  1153,   571,   653,   650,   684,
   786,   788,    86,   231,   297,   450,   644,   750,    87,   232,
   302,   452,   645,   755,  1024,  1235,  1311,    85,   149,   230,
   293,   445,   643,   746,    88,   157,   233,   310,   463,   687,
   802,  1045,  1463,  1491,   464,   688,   806,   924,  1049,   465,
   689,   811,   459,   686,   795,    90,   166,   236,   324,   478,
   696,   826,  1164,   942,  1244,   479,   603,   830,   964,  1075,
  1179,   827,   953,  1169,  1317,   829,   958,  1171,  1318,   954,
   572,    91,   170,   237,   329,   407,   482,   701,   840,   969,
  1079,   975,  1084,   607,   719,   858,   859,  1131,  1220,  1290,
   986,  1100,   988,  1109,   990,  1117,   991,  1127,  1283,  1371,
  1409,    92,   174,   238,   335,   486,   720,   865,  1134,  1344,
  1380,  1438,  1413,    94,   179,   240,   343,    23,   239,   412,
   490,    46,   182,   246,   254,  1294,   353,   427,   632,  1132,
  1219,   621,   121,   122,    24,    83,   573,   622,    82,    28
};

static const short yypact[] = {-32768,
-32768,    39,  2342,   -73,   258,   -67,   -61,   -55,   -17,    -8,
     2,    49,    82,    96,   106,    59,   288,   299,   327,-32768,
-32768,   214,-32768,-32768,   892,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   221,-32768,
-32768,-32768,-32768,   173,   204,-32768,-32768,-32768,-32768,   381,
-32768,-32768,-32768,-32768,-32768,   211,   219,   228,   233,   248,
   256,   261,   343,   348,   351,   355,   359,   372,   389,   394,
   418,   428,   430,   432,   435,   454,  1814,  1814,  1814,  1814,
   509,-32768,   304,   241,    23,   178,   346,    51,   122,   121,
   157,   164,   467,   168,   474,   474,-32768,  1814,  1814,  1814,
  1814,  1814,  1814,  1814,  1814,  1814,  1814,  1814,  1814,  1814,
  1814,  1814,  1814,  1814,  1814,  1814,  1814,   481,   362,   362,
    69,-32768,   392,  1553,-32768,  1814,  1814,  1814,  1814,  1814,
  1814,  1814,  1814,  1814,  1814,  1814,  1814,  1814,  1814,  1814,
-32768,   489,-32768,   505,-32768,   160,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   100,   502,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   531,  1110,   369,  3270,  3297,  3324,  3351,  3378,  3405,  3432,
  3459,  3486,  3513,  2363,  3540,  3567,  3594,  3621,  3648,  3675,
  2385,  2407,  2429,   411,   627,  1814,  1489,-32768,   970,  1032,
  1032,  1195,  1195,   333,   333,   333,   333,   584,   584,   362,
   362,   362,   362,-32768,   471,    22,   510,-32768,-32768,   136,
   273,   230,   332,    16,-32768,   179,   353,   647,   491,   365,
-32768,-32768,-32768,-32768,-32768,   700,    89,    88,   524,   530,
   534,   536,   538,-32768,    89,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1814,-32768,-32768,-32768,-32768,
-32768,-32768,  1814,  1814,  1814,   732,-32768,-32768,   392,  1814,
  4495,  1814,  1523,   941,  1557,   569,   575,-32768,    61,   744,
   748,-32768,-32768,   562,   754,-32768,-32768,   566,   118,   759,
-32768,-32768,   571,   768,   773,   603,   615,   622,-32768,-32768,
  -152,-32768,    21,   631,-32768,   625,   630,   364,   827,   831,
   643,   646,-32768,-32768,   842,   660,-32768,-32768,-32768,   845,
   706,   897,   898,-32768,-32768,-32768,   925,   736,   927,   258,
   928,-32768,-32768,   739,-32768,   118,-32768,   745,  1814,   746,
   747,   753,   376,   790,  3702,  3729,  3756,  3783,   751,  3810,
  4495,-32768,  4495,   782,   944,  1814,  3945,-32768,   191,   384,
   786,-32768,   975,    10,-32768,   990,-32768,   801,   810,  1005,
-32768,  1006,-32768,  1012,    50,-32768,-32768,-32768,   824,-32768,
  1013,   847,-32768,-32768,-32768,   118,   866,-32768,  1033,  1038,
  1037,   110,-32768,-32768,   128,-32768,   855,   163,-32768,   856,
  1046,   859,  1050,-32768,  1051,  1052,  1056,-32768,   865,  1814,
  2451,  1814,  1814,  1814,  1058,  2302,-32768,  1061,   390,-32768,
-32768,-32768,-32768,  1063,  1814,-32768,  3970,-32768,   191,-32768,
  1066,  1068,  1073,-32768,   410,-32768,-32768,   875,  1077,   413,
-32768,   443,  1814,  1084,-32768,-32768,   640,-32768,   445,-32768,
-32768,  1087,   496,   508,   549,-32768,    11,  1591,   182,  1088,
   118,    20,-32768,-32768,-32768,-32768,  1089,   560,   618,-32768,
  1092,   601,-32768,-32768,  1094,   605,  1100,-32768,-32768,   214,
-32768,   916,-32768,-32768,-32768,   118,  2473,  1814,  2495,  2517,
  2539,-32768,  1625,  1108,    90,  1814,  1814,  1625,  1814,  1114,
-32768,-32768,-32768,  1814,  1814,  1116,   932,  1117,-32768,  4495,
-32768,  1121,-32768,-32768,   934,   609,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  3837,   933,   -21,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   936,-32768,   938,   940,
-32768,  1125,   640,   640,   640,  1135,   186,  1134,   640,  4517,
   947,   950,   950,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1814,-32768,  3995,-32768,    28,-32768,
  1145,-32768,-32768,-32768,-32768,-32768,-32768,   958,   964,   965,
   966,-32768,-32768,-32768,-32768,-32768,   159,-32768,-32768,-32768,
-32768,-32768,-32768,   971,  1814,  2561,  1814,  1814,  1814,  1814,
-32768,  4495,-32768,   258,   258,-32768,  4495,  4495,-32768,  4495,
-32768,  1166,  1166,  1166,  4495,  4495,-32768,  1814,-32768,-32768,
  1814,-32768,   547,    -2,     5,-32768,-32768,-32768,   978,  1002,
   978,   640,  1003,  1027,  1017,  1017,  1017,-32768,-32768,-32768,
-32768,-32768,    43,  2309,-32768,   640,   640,   640,   640,   640,
   640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
   640,  1212,   854,-32768,  1019,   552,   315,   259,   275,  3864,
-32768,   345,-32768,-32768,   608,   972,-32768,-32768,-32768,-32768,
   313,    15,   111,  1030,  1031,  1069,  1071,  1072,   220,   334,
  1070,  1075,  1074,  1257,-32768,-32768,  1266,-32768,-32768,    -6,
   118,  2583,  1814,  2605,  2627,  2649,   183,-32768,-32768,-32768,
  2671,  4020,    89,    89,    89,    89,   129,   174,   118,   118,
  1081,  1272,  1273,   175,-32768,-32768,   137,  1274,-32768,-32768,
  1095,  1290,  1291,-32768,-32768,  1104,-32768,  1105,  2341,-32768,
  1107,  1118,-32768,-32768,   640,  2254,  2254,   602,   602,   602,
   807,   807,   807,   807,  1140,  1140,   177,   177,   177,  1017,
  1017,-32768,-32768,  1119,  4517,   614,  1218,-32768,  1310,    92,
    92,  1313,  1315,-32768,-32768,  1316,  1325,  1330,    89,    89,
-32768,-32768,  1334,    66,-32768,-32768,  1339,  1343,  1345,-32768,
-32768,  1348,-32768,  1156,   167,  1353,  1354,   262,  1355,  1356,
  1360,  1374,    89,-32768,-32768,-32768,  1270,  1602,   929,   282,
  1379,  1380,    67,   258,  1625,   258,    94,  1381,-32768,-32768,
  1383,  1390,   118,  1389,  1392,  1393,   118,  1394,  1395,-32768,
  1814,-32768,  1814,-32768,-32768,    89,  1397,  1204,  1208,-32768,
  1213,  1401,  1405,-32768,-32768,  1215,  1814,  4045,  1814,  1814,
  1814,-32768,  1814,-32768,  1406,  1407,  1408,  1409,   118,  1412,
   118,  1418,  1423,  1424,  1434,  1431,  1432,   118,  1436,  1439,
  1440,  1019,-32768,  1441,  1442,-32768,  1251,-32768,   640,  1214,
-32768,-32768,  2157,-32768,-32768,   640,  1255,  1256,   239,  1447,
  1370,  1450,-32768,  1453,   856,  1454,   170,  1267,  1456,  1457,
  1458,-32768,-32768,  1463,  1464,  1465,  1466,-32768,-32768,  1469,
    21,  1468,  1470,  1471,  1472,  1473,  1475,   856,  1477,  1478,
  1479,-32768,  1484,  1485,-32768,-32768,-32768,-32768,-32768,-32768,
    89,-32768,-32768,  1279,-32768,    89,-32768,-32768,  1298,  1492,
  1494,-32768,-32768,-32768,  1524,  1525,   856,-32768,  1526,  1527,
  1556,  1558,-32768,-32768,  1559,  1561,-32768,  1332,  1366,-32768,
  1398,  1399,  1403,  1400,  1433,   318,  2693,   738,  2715,   421,
  2259,  1435,-32768,   126,   126,-32768,  1595,  1624,  1438,  4070,
-32768,  4095,  4120,  4145,  4170,-32768,-32768,-32768,-32768,  1437,
-32768,  1467,-32768,-32768,-32768,  1474,-32768,-32768,  1486,-32768,
-32768,-32768,  1628,   620,-32768,-32768,    89,  3249,-32768,  1490,
-32768,  4517,  1657,    89,-32768,-32768,  1659,-32768,-32768,  1660,
-32768,-32768,  1661,  1582,  1663,-32768,-32768,-32768,   264,-32768,
-32768,-32768,-32768,   856,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1493,  1664,  1665,  1669,-32768,
  1677,-32768,  1685,  1687,   240,-32768,-32768,-32768,   271,-32768,
-32768,-32768,-32768,   284,-32768,-32768,  1688,  1700,   118,  1704,
  1515,  1814,   118,  1516,   118,  1814,  1814,   118,-32768,-32768,
  1814,  1517,   118,  1814,  1814,  1814,  1814,-32768,-32768,  1814,
  1814,  1518,  1814,   118,  1814,-32768,-32768,  1814,  1710,  1521,
  1522,  1814,  1814,  1529,  1814,-32768,-32768,   118,-32768,   118,
-32768,-32768,-32768,    24,-32768,-32768,  1625,  1540,  1541,  1549,
  1552,  1554,   118,   118,  1715,   118,-32768,-32768,-32768,  1555,
-32768,-32768,   640,  1563,  1564,  1712,-32768,-32768,  1716,-32768,
-32768,  1717,-32768,  1566,  1713,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   978,   978,   978,    89,-32768,-32768,-32768,
  1746,-32768,  1747,-32768,-32768,  1572,  1560,-32768,  2737,  1586,
-32768,  1748,   830,   930,  1749,  2759,-32768,  1753,  1113,  1248,
  1593,  1776,  2781,  1845,-32768,  1872,  1757,  1895,  1917,  1781,
-32768,-32768,  1940,  1964,-32768,  1988,  1592,-32768,   289,   621,
   623,  1594,  1597,-32768,-32768,  1814,  1814,  1814,  1814,  1814,
  1596,  1598,  1599,  1601,   551,-32768,  4517,  1604,  1605,-32768,
  1786,-32768,  1792,  1795,-32768,-32768,-32768,  1796,  1797,  1798,
  1799,-32768,-32768,  1801,  1625,   194,  1625,  1804,   331,-32768,
-32768,-32768,-32768,   118,   607,-32768,-32768,-32768,-32768,-32768,
   118,-32768,  1221,-32768,-32768,-32768,-32768,-32768,  1562,  1738,
-32768,-32768,   634,-32768,  1805,-32768,   118,  1806,  1162,-32768,
  1807,-32768,-32768,  1610,  2803,  2825,  2847,  2869,  4195,  1808,
  1815,  1816,  1817,  1851,  1814,  1814,  1814,  1814,  1814,-32768,
-32768,-32768,-32768,  1735,  1662,-32768,  1666,  1668,-32768,-32768,
-32768,-32768,-32768,  1670,  1743,  1671,-32768,-32768,  1672,-32768,
  1675,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   258,
  1625,-32768,-32768,   437,  1211,  1625,  1814,  1814,  1814,  1814,
-32768,-32768,-32768,-32768,-32768,  1855,  2015,  2042,  2065,  2087,
  2110,  1870,-32768,-32768,   978,  1869,  1682,  1814,   118,  1814,
   347,-32768,-32768,  1873,  1875,  1879,-32768,-32768,  1691,-32768,
-32768,  1696,  2891,  2913,  2935,  2957,   655,-32768,-32768,-32768,
-32768,-32768,-32768,  1698,  1699,  1701,-32768,-32768,  3891,  1702,
  2979,  1889,  1814,   118,  1891,    89,  1898,-32768,-32768,  1900,
  1901,  1902,    89,-32768,-32768,  1814,  1814,  1814,  1814,  1903,
  1904,  1905,  1909,  1770,  1913,  1730,  1814,  1919,  2134,  1921,
  1922,  1924,  1925,-32768,-32768,-32768,  1928,-32768,  4220,  4245,
  4270,  4295,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3918,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1741,  1745,  1762,
  1758,  1764,  1926,  1802,  1778,  1934,  1814,  1782,  1814,  1814,
    89,-32768,-32768,-32768,  3001,  1814,  3023,  3045,  1935,  1859,
  1814,  4320,  1814,  1814,-32768,-32768,  3067,-32768,  3089,  3111,
  1840,  1814,  1814,  1814,  1939,  4345,  4370,  4395,   856,  1769,
  1785,  1787,  1976,-32768,  1790,  1814,  1793,  1814,  3133,-32768,
  3155,  1814,  1814,  3177,  4420,  1814,-32768,  4445,  1800,  1791,
  1814,  3199,  1814,  3221,  1814,  4470,-32768,  1991,  1992,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -247,-32768,-32768,  -242,    72,-32768,-32768,  1173,  -463,-32768,
  -489,-32768,  -310,  -370,  -408,-32768,-32768,-32768,-32768,  -335,
-32768,  -738,-32768,  -523,-32768,-32768,-32768,-32768,-32768,  1427,
-32768,  1109,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1565,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1299,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -822,
  -526,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1161,-32768,-32768,-32768,  1009,   873,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   714,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1614,
-32768,  1520,  1912,-32768,-32768,-32768,  -351,-32768,   388,-32768,
-32768,  -490,  -604,  1809,   895,-32768,-32768,   -25,  -445,  -339
};


#define	YYLAST		4709


static const short yytable[] = {    81,
   416,   487,   429,   449,   345,   347,   959,   400,   594,   648,
   419,   574,   354,   584,   462,   727,   447,   629,   897,   841,
   311,   900,   391,   391,   392,   392,  1256,     4,  1222,  1259,
   391,   477,   392,     6,   481,  1265,   365,   485,    -2,   655,
   656,   657,   389,  1273,   -41,   664,   747,   762,   861,  1279,
  1280,   119,   120,   123,   124,     4,   461,   862,   748,   443,
   470,     6,   592,    39,   312,   371,   751,   863,   752,   753,
   922,   967,   184,   185,   186,   187,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   202,   203,   311,   311,    26,    27,   440,    25,   973,   693,
   209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,  1223,   476,   574,   574,   574,
   378,   441,   756,   574,   758,     4,   159,   378,   759,    29,
  1129,     6,     6,    30,   480,   591,   312,   312,   378,    31,
   312,   311,   766,   767,   768,   769,   770,   771,   772,   773,
   774,   775,   776,   777,   778,   779,   780,   781,   589,   785,
   614,     4,  1030,   702,   226,   626,   160,     6,     4,   484,
     6,   913,     4,   568,     6,  -556,  1042,    32,     6,   890,
   279,   281,   909,   378,   378,   312,    33,   379,   659,   864,
   660,   522,   284,   749,   379,   440,    34,   289,   702,   290,
   754,   227,   813,  1066,   448,   379,   574,   585,   313,   291,
   930,   842,   692,   314,   393,   393,   285,   147,   148,  1224,
   574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
   574,   574,   574,   574,   574,   574,  1424,   574,   763,   312,
   355,   903,   319,    35,   448,   155,   156,   356,   357,   358,
   379,   379,   320,    40,   360,   372,   361,   363,    81,   367,
   923,   968,    26,    27,   205,   321,   934,   206,   624,   322,
    25,   703,   625,   704,   705,   706,    36,   707,   708,   709,
   313,   313,   346,   710,   728,   729,   711,  1464,   974,   712,
    37,   298,   713,   714,    41,   299,   234,  1174,  1175,   661,
    38,   715,   716,   300,   448,    42,   703,   843,   704,   705,
   706,  1480,   707,   708,   709,   164,   165,   161,   710,   574,
  1130,   711,   448,   421,   712,   879,   717,   713,   714,   313,
  1176,   292,   803,    43,   294,   702,   715,   716,   807,   804,
   437,  1177,   662,   935,   971,   960,   295,   391,   808,   392,
   809,   168,   169,   936,   718,    44,    45,   448,   172,   173,
    93,   717,   177,   178,   448,   680,   961,   844,   681,    95,
   881,   888,   151,   152,   323,  1028,   831,   588,   872,   303,
   143,   206,  1032,   313,   815,   866,   832,    97,   796,  1325,
   797,   798,   799,   800,   497,   304,   499,   500,   501,   207,
    96,   880,   882,   883,   884,   305,   306,    98,   889,   520,
  1402,   307,  1403,   308,   850,    99,   851,   833,   834,   835,
   836,   837,   838,  1404,   100,   301,   325,   534,  1094,   101,
  1246,  1095,  1247,  1405,  1035,  1178,   145,   206,   337,  1096,
  1097,  1098,   587,   703,   102,   704,   705,   706,  1406,   707,
   708,   709,   103,   574,   805,   710,   326,   104,   711,  1161,
   574,   712,   143,   327,   713,   714,  1180,  1055,   296,   143,
   810,   176,   616,   715,   716,   338,   962,   963,   181,  1182,
   627,   628,   143,   630,  1286,   204,  1111,  1287,   635,   636,
   875,   876,   877,   878,   970,   224,   972,  1374,   717,  1375,
  1376,   142,   143,   339,   891,   340,  1040,   979,   839,   225,
   801,   983,  1407,  1099,   255,   125,   135,   136,   137,   138,
   139,  1379,  1379,   341,   140,   141,  1328,   309,   852,  1062,
   853,  1112,   945,   946,   947,   948,   949,   950,  1377,   105,
   153,   154,  1408,  1010,   106,  1012,  1043,   107,   328,  1113,
  1114,   108,  1019,   140,   141,   109,   919,   920,  1078,   690,
   342,   399,   143,   126,   127,   128,   129,   130,   110,   131,
   132,   133,   134,   425,   426,   135,   136,   137,   138,   139,
   941,   442,   143,   140,   141,   111,  1115,   518,   426,   722,
   112,   724,   725,   726,   123,   733,   734,   735,   736,   737,
   738,   739,   740,   741,   527,   528,   742,   530,   531,   276,
   743,   702,   731,   992,   113,   732,  1116,  1304,  1305,  1306,
  1307,  1308,  1309,   744,   114,  1395,   115,   789,   116,  1237,
   790,   117,  1378,   277,   791,   792,   793,   532,   533,   575,
   576,   283,    47,    48,   536,  1163,  1225,  1248,  1249,  1250,
   118,    51,    52,    53,    54,    55,   537,   538,   539,   540,
   541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
   551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
   126,   127,   128,   129,   130,   336,   131,   132,   133,   134,
   578,   579,   135,   136,   137,   138,   139,   868,   235,  1458,
   140,   141,   580,   581,   344,  1145,   288,   574,  1069,   598,
   599,   600,   601,  1071,   241,   242,   243,   244,   348,   703,
   330,   704,   705,   706,   349,   707,   708,   709,   350,   245,
   351,   710,   352,   331,   711,   561,   359,   712,  1162,   368,
   713,   714,   745,   582,   583,   369,  1310,   794,   373,   715,
   716,   332,   374,  1186,   596,   597,   375,  1190,   376,  1192,
   377,   123,  1195,   382,  1324,   383,  1326,  1198,  1181,   137,
   138,   139,   384,  1183,   717,   140,   141,   385,  1207,   671,
   672,   673,   674,   333,  1150,   675,   676,   677,   678,   679,
   680,  1155,  1217,   681,  1218,   605,   606,   386,  1342,   609,
   610,   396,  1330,   527,   642,   -44,   143,  1231,  1232,   387,
  1234,   905,   906,   602,  1148,  1149,   388,   562,  1288,  1289,
  1291,  1289,   397,   563,   564,   987,   398,   989,  1335,  1336,
   565,   401,   566,   567,   568,   402,  1261,   403,  1396,   569,
   404,  1000,   334,  1002,  1003,  1004,   405,  1005,  1102,   408,
  1373,  1103,  1420,   426,   406,  1382,    47,    48,   536,  1104,
  1105,   911,   912,  1106,  1107,    51,    52,    53,    54,    55,
   537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
   547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
   557,   558,   559,   560,    47,    48,    49,    50,   633,   634,
   409,   410,   411,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,  1329,   413,
   414,   415,   417,  1108,  1251,  1331,  1262,   418,    76,   420,
   422,   423,   428,    47,    48,   364,    50,   424,   434,   561,
   436,  1338,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   282,   -41,   150,
   444,   446,   158,   163,   167,   171,   175,    76,   180,   312,
   675,   676,   677,   678,   679,   680,   451,   453,   681,  1387,
  1372,   126,   127,   128,   129,   130,   454,   131,   132,   133,
   134,   455,   458,   135,   136,   137,   138,   139,   460,   466,
   467,   140,   141,  1421,   945,   946,   947,   948,   949,   950,
   956,   562,   816,  1400,   817,   818,   471,   563,   564,   473,
   229,   468,   474,   475,   565,   819,   566,   567,   568,   483,
   389,   783,   488,   569,   489,   784,   491,   493,   494,   820,
   821,   822,   495,   496,   502,   517,  1189,   366,  1430,   519,
  1193,  1194,   523,   823,   524,  1196,    77,   525,  1199,  1200,
  1201,  1202,    78,   529,  1203,  1204,    79,  1206,   535,  1208,
  1503,    80,  1209,   577,   590,   595,  1213,  1214,   604,  1216,
   608,   126,   127,   128,   129,   130,   611,   131,   132,   133,
   134,   613,   623,   135,   136,   137,   138,   139,   631,  1267,
   637,   140,   141,   639,   957,    77,   638,   640,   641,   654,
   647,    78,   649,   313,   651,    79,   652,   658,   663,   682,
    80,   126,   127,   128,   129,   130,   683,   131,   132,   133,
   134,   694,   697,   135,   136,   137,   138,   139,   698,   699,
   700,   140,   141,  1432,    47,    48,    49,   824,   825,   721,
  1437,   730,   568,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,   757,   760,
  1295,  1296,  1297,  1298,  1299,   761,   129,   130,   681,   131,
   132,   133,   134,   787,   782,   135,   136,   137,   138,   139,
    47,    48,    49,   140,   141,   702,   845,   846,  1479,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,  1268,   247,   248,   249,   250,   251,
   252,   253,   857,   907,   854,   847,   908,   848,   849,   855,
   856,  1374,   860,  1375,  1376,   885,   886,   887,   892,  1357,
  1358,  1359,  1360,  1361,   126,   127,   128,   129,   130,   893,
   131,   132,   133,   134,   894,   895,   135,   136,   137,   138,
   139,   896,   898,   901,   140,   141,   945,   946,   947,   948,
   949,   950,  1377,   902,   910,  1340,   904,   913,  1341,   915,
   916,  1383,  1384,  1385,  1386,   677,   678,   679,   680,   917,
   943,   681,   944,   703,   918,   704,   705,   706,   921,   707,
   708,   709,  1399,   925,  1401,   710,    77,   926,   711,   927,
   928,   712,    78,   929,   713,   714,   620,   932,   933,   937,
   938,    80,   939,   715,   716,   945,   946,   947,   948,   949,
   950,   951,   131,   132,   133,   134,   940,  1429,   135,   136,
   137,   138,   139,   965,   966,   976,   140,   141,   717,   977,
  1439,  1440,  1441,  1442,   978,   980,   981,   982,   984,   985,
   994,  1450,    77,   993,   995,   997,  1381,   996,    78,   998,
   999,  1029,  1006,  1007,  1008,  1009,  1332,    80,  1011,   126,
   127,   128,   129,   130,  1013,   131,   132,   133,   134,  1014,
  1015,   135,   136,   137,   138,   139,  1016,  1017,  1018,   140,
   141,  1475,  1020,  1477,  1478,  1021,  1022,  1025,  1026,  1027,
  1482,  1033,  1034,  1036,  1037,  1487,  1038,  1489,  1490,  1039,
  1041,  1044,  1046,  1047,  1048,   952,  1496,  1497,  1498,  1050,
  1051,  1052,  1053,  1054,  1056,  1070,  1057,  1058,  1059,  1060,
  1509,  1061,  1511,  1063,  1064,  1065,  1514,  1515,  1067,  1068,
  1518,    47,    48,    49,  1072,  1522,  1073,  1524,  1074,  1526,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    47,    48,    49,   362,  1087,
  1076,  1077,  1080,  1081,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    47,
    48,    49,  1082,  1088,  1083,  1085,   702,  1086,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    47,    48,    49,  1089,  1090,  1092,  1269,
  1091,  1135,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    47,    48,    49,
  1136,  1093,  1137,  1128,  1147,  1143,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,  1154,   943,  1156,   944,  1144,  1157,  1158,  1159,  1160,
  1166,  1167,   143,    77,   703,  1168,   704,   705,   706,    78,
   707,   708,   709,  1170,  1146,   280,   710,  1152,    80,   711,
  1165,  1172,   712,  1173,  1184,   713,   714,   945,   946,   947,
   948,   949,   950,   951,   715,   716,  1185,    77,  1187,  1188,
  1191,  1197,  1205,    78,  1210,  1211,  1212,  1233,  1240,  1245,
  1241,  1242,    80,  1215,   126,   127,   128,   129,   130,   717,
   131,   132,   133,   134,  1226,  1227,   135,   136,   137,   138,
   139,    77,   702,  1228,   140,   141,  1229,    78,  1230,   366,
  1252,  1253,  1236,   208,  1260,  1263,    80,  1333,  1255,  1266,
  1238,  1239,  1243,  1275,   126,   127,   128,   129,   130,  1254,
   131,   132,   133,   134,   702,    77,   135,   136,   137,   138,
   139,    78,  1270,  1258,   140,   141,   586,  1278,  1292,  1285,
    80,  1293,  1314,  1300,  1302,  1301,  1315,   955,  1303,  1312,
  1313,  1316,  1319,  1320,  1321,  1322,   702,  1323,  1346,    77,
  1327,  1337,  1339,  1343,  1352,    78,    47,    48,    49,   620,
  1362,  1353,  1354,  1355,    80,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
   703,  1272,   704,   705,   706,  1356,   707,   708,   709,  1363,
  1367,  1388,   710,   702,  1364,   711,  1365,  1366,   712,  1368,
  1369,   713,   714,  1370,  1394,  1397,  1398,  1410,  1274,  1411,
   715,   716,   703,  1412,   704,   705,   706,  1414,   707,   708,
   709,  1415,   448,  1428,   710,  1431,  1422,   711,  1423,  1426,
   712,  1276,  1433,   713,   714,   717,  1434,  1435,  1436,  1443,
  1444,  1445,   715,   716,   703,  1446,   704,   705,   706,  1448,
   707,   708,   709,  1277,  1449,  1451,   710,  1453,  1454,   711,
  1455,  1456,   712,  1334,  1457,   713,   714,   717,  1466,  1467,
  1474,  1485,  1495,  1499,   715,   716,  1281,   126,   127,   128,
   129,   130,  1469,   131,   132,   133,   134,  1468,  1470,   135,
   136,   137,   138,   139,  1504,  1447,  1471,   140,   141,   717,
  1282,   703,  1473,   704,   705,   706,  1476,   707,   708,   709,
  1505,  1506,  1507,   710,  1508,  1521,   711,   931,  1510,   712,
  1529,  1530,   713,   714,  1284,  1520,   828,  1472,    77,   685,
  1023,   715,   716,  1133,    78,  1221,  1345,   183,   526,   612,
     0,     0,     0,    80,   278,     0,   126,   127,   128,   129,
   130,  1389,   131,   132,   133,   134,   717,   492,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,     0,   126,   127,   128,   129,   130,  1390,   131,
   132,   133,   134,     0,  1486,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,   126,   127,   128,   129,
   130,  1391,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1392,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,   126,   127,   128,   129,   130,  1393,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,   126,   127,   128,   129,   130,
  1452,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,   126,
   127,   128,   129,   130,  1031,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,     0,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,     0,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,  1118,   140,   141,     0,   665,   666,
   667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
   675,   676,   677,   678,   679,   680,     4,     0,   681,     0,
     5,     0,     6,     0,     0,     0,   503,     0,     0,     0,
     0,     0,  1119,     0,     0,     0,     0,     0,     0,  1120,
  1121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     7,     0,     0,     0,     0,  1122,     0,     8,
  1123,  1124,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     9,     0,    10,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    11,     0,     0,     0,    12,     0,
     0,     0,     0,     0,  1125,     0,     0,    13,   668,   669,
   670,   671,   672,   673,   674,     0,     0,   675,   676,   677,
   678,   679,   680,     0,    14,   681,   504,     0,     0,     0,
     0,     0,     0,     0,  1126,   505,   506,   507,   508,   509,
   510,   511,   512,   513,   514,   515,   516,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    15,     0,    16,
   665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     0,     0,   675,   676,   677,   678,   679,   680,     0,     0,
   681,     0,     0,     0,     0,     0,     0,     0,    17,   764,
    18,    19,   665,   666,   667,   668,   669,   670,   671,   672,
   673,   674,     0,     0,   675,   676,   677,   678,   679,   680,
     0,     0,   681,     0,   126,   127,   128,   129,   130,   899,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,   266,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,   273,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,   274,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,   275,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,   498,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,   615,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,   617,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,   618,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,   619,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,   723,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,   867,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,   869,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,   870,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,   871,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,   873,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1101,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1110,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1257,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1264,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1271,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1347,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1348,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1349,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1350,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1416,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1417,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1418,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1419,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1427,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1481,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1483,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1484,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1492,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1493,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,  1494,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,   126,   127,   128,   129,
   130,  1512,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,  1513,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,  1516,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,   126,   127,   128,   129,   130,  1523,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,     0,  1525,
   665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     0,     0,   675,   676,   677,   678,   679,   680,     0,     0,
   681,   126,   127,   128,   129,   130,  1151,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   256,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   257,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   258,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   259,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   260,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   261,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   262,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   263,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   264,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   265,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   267,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   268,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   269,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   270,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   271,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   272,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   430,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   431,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   432,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   433,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   435,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   646,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   812,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,  1425,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,  1465,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
   438,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,   521,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
   691,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,   874,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1001,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1138,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1139,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1140,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1141,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1142,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1351,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1459,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1460,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1461,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1462,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1488,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1500,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1501,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1502,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1517,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
  1519,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,  1527,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   665,   666,
   667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
   675,   676,   677,   678,   679,   680,     0,     0,   681
};

static const short yycheck[] = {    25,
   340,   410,   354,   374,   247,   248,   829,   318,   472,   536,
   346,   457,   255,     3,   385,   620,     7,   508,   757,     5,
     5,   760,     3,     3,     5,     5,  1188,     5,     5,  1191,
     3,   402,     5,    11,   405,  1197,   284,   408,     0,   563,
   564,   565,   195,  1205,   197,   569,    49,     5,    55,  1211,
  1212,    77,    78,    79,    80,     5,     7,    64,    61,   370,
   396,    11,    43,     5,    49,     5,    62,    74,    64,    65,
     5,     5,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,     5,     5,     5,     6,     5,   171,     5,   589,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,    92,     7,   563,   564,   565,
    10,   369,   649,   569,   651,     5,     5,    10,   652,   197,
     5,    11,    11,   195,     7,   471,    49,    49,    10,   195,
    49,     5,   666,   667,   668,   669,   670,   671,   672,   673,
   674,   675,   676,   677,   678,   679,   680,   681,   469,   683,
   496,     5,   901,     5,     5,   505,    45,    11,     5,     7,
    11,     5,     5,   195,    11,   197,     7,   195,    11,    43,
   206,   207,   787,    10,    10,    49,   195,    77,     3,   196,
     5,   439,   171,   196,    77,     5,   195,    62,     5,    64,
   196,    42,   692,   942,   195,    77,   652,   197,   193,    74,
    44,   197,   185,   198,   195,   195,   195,   195,   196,   196,
   666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
   676,   677,   678,   679,   680,   681,  1398,   683,   196,    49,
   266,   765,    64,   195,   195,   195,   196,   273,   274,   275,
    77,    77,    74,   195,   280,   195,   282,   283,   284,   285,
   195,   195,     5,     6,   196,    87,     5,   199,   179,    91,
   171,   113,   183,   115,   116,   117,   195,   119,   120,   121,
   193,   193,   195,   125,   624,   625,   128,  1449,   195,   131,
   195,    62,   134,   135,     7,    66,   197,    58,    59,   114,
   195,   143,   144,    74,   195,     7,   113,   197,   115,   116,
   117,  1473,   119,   120,   121,   195,   196,   196,   125,   765,
   195,   128,   195,   349,   131,   197,   168,   134,   135,   193,
    91,   196,    74,     7,    62,     5,   143,   144,    64,    81,
   366,   102,   157,    82,   835,    64,    74,     3,    74,     5,
    76,   195,   196,    92,   196,   142,   143,   195,   195,   196,
   140,   168,   195,   196,   195,   189,    85,   703,   192,   197,
   197,   197,   195,   196,   196,   899,    64,   196,   196,    48,
   199,   199,   906,   193,   695,   721,    74,     7,    74,   196,
    76,    77,    78,    79,   420,    64,   422,   423,   424,     8,
   197,   737,   738,   739,   740,    74,    75,   197,   744,   435,
    64,    80,    66,    82,   195,   197,   197,   105,   106,   107,
   108,   109,   110,    77,   197,   196,    74,   453,   111,   197,
  1169,   114,  1171,    87,   196,   196,   196,   199,    74,   122,
   123,   124,   468,   113,   197,   115,   116,   117,   102,   119,
   120,   121,   197,   899,   196,   125,   104,   197,   128,   196,
   906,   131,   199,   111,   134,   135,   196,   931,   196,   199,
   196,     5,   498,   143,   144,   111,   195,   196,     5,   196,
   506,   507,   199,   509,   196,     5,    66,   199,   514,   515,
   733,   734,   735,   736,   834,     7,   836,    61,   168,    63,
    64,   198,   199,   139,   747,   141,   915,   843,   196,     5,
   196,   847,   166,   196,   146,     7,   184,   185,   186,   187,
   188,  1344,  1345,   159,   192,   193,   196,   196,   195,   938,
   197,   111,    96,    97,    98,    99,   100,   101,   102,   197,
   195,   196,   196,   879,   197,   881,   917,   197,   196,   129,
   130,   197,   888,   192,   193,   197,   799,   800,   967,   585,
   196,   198,   199,   172,   173,   174,   175,   176,   197,   178,
   179,   180,   181,   198,   199,   184,   185,   186,   187,   188,
   823,   198,   199,   192,   193,   197,   166,   198,   199,   615,
   197,   617,   618,   619,   620,    49,    50,    51,    52,    53,
    54,    55,    56,    57,   195,   196,    60,   195,   196,   199,
    64,     5,   638,   856,   197,   641,   196,    67,    68,    69,
    70,    71,    72,    77,   197,  1364,   197,    76,   197,  1153,
    79,   197,   196,     7,    83,    84,    85,   195,   196,   195,
   196,   171,     3,     4,     5,  1054,  1137,  1174,  1175,  1176,
   197,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
   172,   173,   174,   175,   176,   195,   178,   179,   180,   181,
   195,   196,   184,   185,   186,   187,   188,   723,   197,  1438,
   192,   193,   195,   196,     5,  1016,   197,  1153,   951,    92,
    93,    94,    95,   956,   184,   185,   186,   187,   195,   113,
    74,   115,   116,   117,   195,   119,   120,   121,   195,   199,
   195,   125,   195,    87,   128,    96,     5,   131,  1049,   171,
   134,   135,   196,   195,   196,   171,   196,   196,     5,   143,
   144,   105,     5,  1089,   195,   196,   195,  1093,     5,  1095,
   195,   787,  1098,     5,  1255,   195,  1257,  1103,  1079,   186,
   187,   188,     5,  1084,   168,   192,   193,     5,  1114,   178,
   179,   180,   181,   137,  1027,   184,   185,   186,   187,   188,
   189,  1034,  1128,   192,  1130,   195,   196,   195,  1289,   195,
   196,   171,   196,   195,   196,   198,   199,  1143,  1144,   195,
  1146,   198,   199,   196,   195,   196,   195,   178,   198,   199,
   198,   199,   198,   184,   185,   851,   197,   853,   195,   196,
   191,     5,   193,   194,   195,     5,     7,   195,  1365,   200,
   195,   867,   196,   869,   870,   871,     5,   873,   111,     5,
  1341,   114,   198,   199,   195,  1346,     3,     4,     5,   122,
   123,   790,   791,   126,   127,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,     3,     4,     5,     6,   511,   512,
   195,     5,     5,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,  1264,     5,
   195,     5,     5,   196,  1177,  1271,     7,   199,    47,   195,
   195,   195,   153,     3,     4,     5,     6,   195,   198,    96,
     7,  1287,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     8,   197,    85,
   195,     7,    88,    89,    90,    91,    92,    47,    94,    49,
   184,   185,   186,   187,   188,   189,     7,   197,   192,  1351,
  1340,   172,   173,   174,   175,   176,   197,   178,   179,   180,
   181,     7,     7,   184,   185,   186,   187,   188,     7,   196,
     8,   192,   193,  1394,    96,    97,    98,    99,   100,   101,
   102,   178,    61,  1369,    63,    64,   171,   184,   185,     7,
   146,   195,     5,     7,   191,    74,   193,   194,   195,   195,
   195,   198,     7,   200,   196,   202,     7,     7,     7,    88,
    89,    90,     7,   199,     7,     5,  1092,   193,  1404,     7,
  1096,  1097,     7,   102,     7,  1101,   185,     5,  1104,  1105,
  1106,  1107,   191,     7,  1110,  1111,   195,  1113,     5,  1115,
  1499,   200,  1118,     7,     7,     7,  1122,  1123,     7,  1125,
     7,   172,   173,   174,   175,   176,     7,   178,   179,   180,
   181,   196,     5,   184,   185,   186,   187,   188,     5,     7,
     5,   192,   193,     7,   196,   185,   195,     7,   195,     5,
   198,   191,   197,   193,   197,   195,   197,     3,     5,   193,
   200,   172,   173,   174,   175,   176,   197,   178,   179,   180,
   181,     7,   195,   184,   185,   186,   187,   188,   195,   195,
   195,   192,   193,  1406,     3,     4,     5,   196,   197,   199,
  1413,     6,   195,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,   197,   197,
  1226,  1227,  1228,  1229,  1230,   179,   175,   176,   192,   178,
   179,   180,   181,   195,     3,   184,   185,   186,   187,   188,
     3,     4,     5,   192,   193,     5,   197,   197,  1471,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,     7,   146,   147,   148,   149,   150,
   151,   152,     6,    46,   195,   197,    49,   197,   197,   195,
   197,    61,     7,    63,    64,   195,     5,     5,     5,  1305,
  1306,  1307,  1308,  1309,   172,   173,   174,   175,   176,   195,
   178,   179,   180,   181,     5,     5,   184,   185,   186,   187,
   188,   198,   198,   197,   192,   193,    96,    97,    98,    99,
   100,   101,   102,   196,     5,   154,   198,     5,   157,     5,
     5,  1347,  1348,  1349,  1350,   186,   187,   188,   189,     5,
    61,   192,    63,   113,     5,   115,   116,   117,     5,   119,
   120,   121,  1368,     5,  1370,   125,   185,     5,   128,     5,
     3,   131,   191,   198,   134,   135,   195,     5,     5,     5,
     5,   200,     3,   143,   144,    96,    97,    98,    99,   100,
   101,   102,   178,   179,   180,   181,     3,  1403,   184,   185,
   186,   187,   188,     5,     5,     5,   192,   193,   168,     7,
  1416,  1417,  1418,  1419,     5,     7,     5,     5,     5,     5,
   197,  1427,   185,     7,   197,     5,   196,   195,   191,     5,
   196,   198,     7,     7,     7,     7,   196,   200,     7,   172,
   173,   174,   175,   176,     7,   178,   179,   180,   181,     7,
     7,   184,   185,   186,   187,   188,     3,     7,     7,   192,
   193,  1467,     7,  1469,  1470,     7,     7,     7,     7,   199,
  1476,   197,   197,     7,    85,  1481,     7,  1483,  1484,     7,
     7,   195,     7,     7,     7,   196,  1492,  1493,  1494,     7,
     7,     7,     7,     5,     7,   197,     7,     7,     7,     7,
  1506,     7,  1508,     7,     7,     7,  1512,  1513,     5,     5,
  1516,     3,     4,     5,   197,  1521,     5,  1523,     5,  1525,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,     3,     4,     5,     6,   198,
     7,     7,     7,     7,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,     3,
     4,     5,     7,   198,     7,     7,     5,     7,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     3,     4,     5,   199,   199,   199,     7,
   198,     7,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     3,     4,     5,
     7,   199,   195,   199,     7,   199,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,     5,    61,     5,    63,   199,     7,     7,    87,     7,
     7,     7,   199,   185,   113,     7,   115,   116,   117,   191,
   119,   120,   121,     7,   199,   197,   125,   198,   200,   128,
   198,     7,   131,     7,     7,   134,   135,    96,    97,    98,
    99,   100,   101,   102,   143,   144,     7,   185,     5,   195,
   195,   195,   195,   191,     5,   195,   195,     3,     7,     7,
     5,     5,   200,   195,   172,   173,   174,   175,   176,   168,
   178,   179,   180,   181,   195,   195,   184,   185,   186,   187,
   188,   185,     5,   195,   192,   193,   195,   191,   195,   193,
     5,     5,   198,   201,     7,     7,   200,   196,   199,     7,
   198,   198,   197,     7,   172,   173,   174,   175,   176,   198,
   178,   179,   180,   181,     5,   185,   184,   185,   186,   187,
   188,   191,     7,   198,   192,   193,   196,     7,   195,   198,
   200,   195,     7,   198,   196,   198,     5,   196,   198,   196,
   196,     7,     7,     7,     7,     7,     5,     7,   199,   185,
     7,     7,     7,     7,     7,   191,     3,     4,     5,   195,
    86,     7,     7,     7,   200,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
   113,     7,   115,   116,   117,     5,   119,   120,   121,   198,
   118,     7,   125,     5,   199,   128,   199,   198,   131,   199,
   199,   134,   135,   199,     5,     7,   195,     5,     7,     5,
   143,   144,   113,     5,   115,   116,   117,   197,   119,   120,
   121,   196,   195,     5,   125,     5,   198,   128,   198,   198,
   131,     7,     5,   134,   135,   168,     7,     7,     7,     7,
     7,     7,   143,   144,   113,     7,   115,   116,   117,     7,
   119,   120,   121,     7,   195,     7,   125,     7,     7,   128,
     7,     7,   131,   196,     7,   134,   135,   168,   198,   195,
     7,     7,   103,     5,   143,   144,     7,   172,   173,   174,
   175,   176,   195,   178,   179,   180,   181,   196,   195,   184,
   185,   186,   187,   188,   196,   196,    41,   192,   193,   168,
     7,   113,   195,   115,   116,   117,   195,   119,   120,   121,
   196,   195,     7,   125,   195,   195,   128,   815,   196,   131,
     0,     0,   134,   135,     7,   196,   698,   196,   185,   573,
   892,   143,   144,   995,   191,  1133,  1293,    96,   444,   490,
    -1,    -1,    -1,   200,   206,    -1,   172,   173,   174,   175,
   176,     7,   178,   179,   180,   181,   168,   414,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
    -1,    -1,    -1,   172,   173,   174,   175,   176,     7,   178,
   179,   180,   181,    -1,   196,   184,   185,   186,   187,   188,
    -1,    -1,    -1,   192,   193,    -1,   172,   173,   174,   175,
   176,     7,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,     7,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
    -1,   172,   173,   174,   175,   176,     7,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   172,   173,   174,   175,   176,
     7,   178,   179,   180,   181,    -1,    -1,   184,   185,   186,
   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,   172,
   173,   174,   175,   176,     8,   178,   179,   180,   181,    -1,
    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,
   193,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
    -1,    -1,    -1,   172,   173,   174,   175,   176,    -1,   178,
   179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
    -1,    -1,    -1,   192,   193,    -1,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,    -1,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
    -1,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   172,   173,   174,   175,   176,
    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,   186,
   187,   188,    -1,    -1,    66,   192,   193,    -1,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,   189,     5,    -1,   192,    -1,
     9,    -1,    11,    -1,    -1,    -1,    55,    -1,    -1,    -1,
    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,   111,
   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    41,    -1,    -1,    -1,    -1,   129,    -1,    48,
   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,
    -1,    -1,    -1,    -1,   166,    -1,    -1,    86,   175,   176,
   177,   178,   179,   180,   181,    -1,    -1,   184,   185,   186,
   187,   188,   189,    -1,   103,   192,   145,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   196,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,   189,    -1,    -1,
   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,   201,
   169,   170,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,   189,
    -1,    -1,   192,    -1,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,   172,   173,   174,   175,   176,   199,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,   172,   173,   174,   175,
   176,   199,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   199,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
   172,   173,   174,   175,   176,   199,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,   172,   173,   174,   175,   176,   199,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,    -1,   199,
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,   189,    -1,    -1,
   192,   172,   173,   174,   175,   176,   198,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,    -1,    -1,   198,   172,   173,
   174,   175,   176,    -1,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
    -1,    -1,    -1,    -1,   198,   172,   173,   174,   175,   176,
    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,   186,
   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
    -1,   198,   172,   173,   174,   175,   176,    -1,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,   172,
   173,   174,   175,   176,    -1,   178,   179,   180,   181,    -1,
    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,
   193,    -1,    -1,    -1,    -1,   198,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
    -1,    -1,   198,   172,   173,   174,   175,   176,    -1,   178,
   179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,
   172,   173,   174,   175,   176,    -1,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,    -1,    -1,    -1,    -1,   198,   172,   173,   174,
   175,   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,
   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,
    -1,    -1,    -1,   198,   172,   173,   174,   175,   176,    -1,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,
   198,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,    -1,    -1,   198,   172,   173,
   174,   175,   176,    -1,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
    -1,    -1,    -1,    -1,   198,   172,   173,   174,   175,   176,
    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,   186,
   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
    -1,   198,   172,   173,   174,   175,   176,    -1,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,   172,
   173,   174,   175,   176,    -1,   178,   179,   180,   181,    -1,
    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,
   193,    -1,    -1,    -1,    -1,   198,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
    -1,    -1,   198,   172,   173,   174,   175,   176,    -1,   178,
   179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,
   172,   173,   174,   175,   176,    -1,   178,   179,   180,   181,
    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
   192,   193,    -1,    -1,    -1,    -1,   198,   172,   173,   174,
   175,   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,
   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,
    -1,    -1,    -1,   198,   172,   173,   174,   175,   176,    -1,
   178,   179,   180,   181,    -1,    -1,   184,   185,   186,   187,
   188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,
   198,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,    -1,    -1,   198,   172,   173,
   174,   175,   176,    -1,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,   193,
    -1,    -1,    -1,    -1,   198,   172,   173,   174,   175,   176,
    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,   186,
   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
    -1,   198,   172,   173,   174,   175,   176,    -1,   178,   179,
   180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,   198,   172,
   173,   174,   175,   176,    -1,   178,   179,   180,   181,    -1,
    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,   192,
   193,    -1,    -1,    -1,    -1,   198,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
   196,   172,   173,   174,   175,   176,    -1,   178,   179,   180,
   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,
    -1,   192,   193,    -1,    -1,   196,   172,   173,   174,   175,
   176,    -1,   178,   179,   180,   181,    -1,    -1,   184,   185,
   186,   187,   188,    -1,    -1,    -1,   192,   193,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
   184,   185,   186,   187,   188,   189,    -1,    -1,   192
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
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

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

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
     int count;
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
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/usr/local/share/bison.simple"

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
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
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
#line 314 "yacc.y"
{ if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfDouble_L  = List_Create(20, 10, sizeof(double)) ;
	ListOfDouble2_L = List_Create(20, 10, sizeof(double)) ;
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
#line 350 "yacc.y"
{ if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfDouble_L) ; List_Delete(ListOfDouble2_L) ;
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
#line 392 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 415 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 430 "yacc.y"
{ InteractiveExit = 1; ;
    break;}
case 21:
#line 433 "yacc.y"
{ Pos_InteractiveHelp(); ;
    break;}
case 23:
#line 447 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 24:
#line 455 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 26:
#line 472 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 28:
#line 479 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 29:
#line 482 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 30:
#line 485 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 31:
#line 487 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 34:
#line 498 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 35:
#line 503 "yacc.y"
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
case 36:
#line 515 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 37:
#line 524 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 38:
#line 535 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 39:
#line 540 "yacc.y"
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
case 40:
#line 577 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 41:
#line 580 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 42:
#line 591 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 43:
#line 593 "yacc.y"
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
case 44:
#line 609 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 45:
#line 612 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 46:
#line 615 "yacc.y"
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
case 47:
#line 666 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 48:
#line 678 "yacc.y"
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
case 49:
#line 702 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 50:
#line 709 "yacc.y"
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
case 51:
#line 722 "yacc.y"
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
case 52:
#line 740 "yacc.y"
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
case 53:
#line 763 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 54:
#line 767 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 55:
#line 776 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!yyvsp[-2].d || (yyvsp[-5].i<yyvsp[0].i && yyvsp[-2].d<0) || (yyvsp[-5].i>yyvsp[0].i && yyvsp[-2].d>0)){
	vyyerror("Wrong Increment in '%d :[%d] %d'", yyvsp[-5].i, (int)yyvsp[-2].d, yyvsp[0].i) ;
	List_Add(ListOfInt_L, &(yyvsp[-5].i)) ;
      }
      else
	for(j=yyvsp[-5].i ; (yyvsp[-2].d>0)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; j+=(int)yyvsp[-2].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 56:
#line 790 "yacc.y"
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
case 57:
#line 824 "yacc.y"
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
case 58:
#line 837 "yacc.y"
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
case 60:
#line 861 "yacc.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 61:
#line 871 "yacc.y"
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
case 64:
#line 893 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 65:
#line 898 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 66:
#line 899 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 67:
#line 904 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 71:
#line 923 "yacc.y"
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
case 72:
#line 943 "yacc.y"
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
	    vyyerror("Redefinition of Piece-wise Function: %s [%d]",
		     Expression_P->Name, ExpressionPerRegion_S.RegionIndex) ;
	  else
	    List_Add(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
		     &ExpressionPerRegion_S) ;
	}
	if (yyvsp[-4].i == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group Right Hand Side") ;
    ;
    break;}
case 75:
#line 994 "yacc.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 76:
#line 1014 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 77:
#line 1020 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 78:
#line 1026 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 79:
#line 1029 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 80:
#line 1037 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 81:
#line 1041 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 83:
#line 1053 "yacc.y"
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
case 84:
#line 1066 "yacc.y"
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
case 85:
#line 1080 "yacc.y"
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
case 86:
#line 1095 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 87:
#line 1101 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 88:
#line 1107 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1113 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1119 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1125 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1131 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1137 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1143 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1149 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1155 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1161 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1167 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1173 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1179 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1185 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1191 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1198 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 105:
#line 1206 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1219 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 108:
#line 1225 "yacc.y"
{

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-2].c,fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = yyvsp[-1].i ;
	if (yyvsp[-1].i < 0)  vyyerror("Uncompatible Argument for Function: %s", yyvsp[-2].c) ;
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
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 &&
		      (yyvsp[-1].i)%2 == 0)) {
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
	      WholeQuantity_S.Case.Function.NbrParameters !=
	      List_Nbr(ListOfDouble_L)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     yyvsp[-2].c, List_Nbr(ListOfDouble_L), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 &&
		   (List_Nbr(ListOfDouble_L))%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of even number)",
		     yyvsp[-2].c, List_Nbr(ListOfDouble_L)) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr(ListOfDouble_L) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read(ListOfDouble_L, i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }
	}

	else {
	  vyyerror("Unknown Function: %s", yyvsp[-2].c) ;
	  /*
	  vyyerror("Unknown Function: %s %s\n   (or any user-defined function)", 
		   $1, Get_Valid_SXF2N(F_Function)) ;
		   */
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 109:
#line 1303 "yacc.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Type for Quantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(QuantityFromFS_Type)) ;
      Free(yyvsp[-1].c) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;

      switch(WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity) {
      case QUANTITY_DOF :
	if (Current_DofIndexInWholeQuantity == -1)
	  Current_DofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else if (Current_DofIndexInWholeQuantity == -2)
	  yyerror("Dof Definition out of Context") ;
	else
	  yyerror("More than one Dof Definition in Expression") ;
	break ;
      case QUANTITY_NODOF :
	if (Current_DofIndexInWholeQuantity == -2)
	  yyerror("NoDof Definition out of Context") ;
	else if (Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else
	  yyerror("More than one NoDof Definition in Expression") ;
	break ;
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 110:
#line 1337 "yacc.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 111:
#line 1347 "yacc.y"
{ 
      if(yyvsp[0].i!=3 && yyvsp[0].i!=4) 
	vyyerror("Wrong number of arguments for Quantity Evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 112:
#line 1360 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 113:
#line 1362 "yacc.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	yyerror("Dof definition out of context") ;
    ;
    break;}
case 114:
#line 1373 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 115:
#line 1379 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 116:
#line 1385 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 117:
#line 1387 "yacc.y"
{ WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", yyvsp[-1].i) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[., ConnectedTo .]'");

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
	  vyyerror("Dof Definition out of Context (in Trace Operator)");
      }

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 118:
#line 1416 "yacc.y"
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
case 119:
#line 1440 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError) 
	vyyerror("Unknown Current Value: $%s %s", yyvsp[0].c, Get_Valid_SXP(Current_Value)) ;
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1451 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 121:
#line 1457 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1464 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 123:
#line 1470 "yacc.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      /*
      if ($3 <= 0 || $3 > 6)  
	vyyerror("Index of SaveValue out of order: %d", $3) ;
      */
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 124:
#line 1481 "yacc.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      /*
      if ($2 <= 0 || $2 > 6)  
	vyyerror("Index of SaveValue out of order: %d", $2) ;
      */
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1496 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 126:
#line 1497 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 127:
#line 1498 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 128:
#line 1503 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 129:
#line 1504 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 130:
#line 1510 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 132:
#line 1515 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 133:
#line 1522 "yacc.y"
{
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
	List_Reset(ListOfDouble_L) ;
      }
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", yyvsp[-2].c) ;
	  List_Reset(ListOfDouble_L) ;
	}
	else
	  List_Reset(ListOfDouble_L) ;
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(ListOfDouble_L, &d) ;
	  }
    ;
    break;}
case 134:
#line 1549 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 135:
#line 1554 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 136:
#line 1561 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianPerRegion = NULL ; ;
    break;}
case 138:
#line 1570 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 139:
#line 1575 "yacc.y"
{ JacobianMethod_S.JacobianPerRegion = yyvsp[-1].l ; ;
    break;}
case 140:
#line 1582 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 141:
#line 1585 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 142:
#line 1592 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 144:
#line 1602 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 145:
#line 1605 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 146:
#line 1608 "yacc.y"
{ JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, yyvsp[-2].c, &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (List_Nbr(ListOfDouble_L) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read(ListOfDouble_L, i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else {
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   yyvsp[-2].c, List_Nbr(ListOfDouble_L), JacobianCase_S.NbrParameters) ;
	}
      }
      else  vyyerror("Unknown Type of Jacobian: %s %s", 
		     yyvsp[-2].c, Get_Valid_SXD1N(Jacobian_Type)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 147:
#line 1639 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 148:
#line 1645 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 149:
#line 1652 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.Method = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 151:
#line 1665 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 152:
#line 1672 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 153:
#line 1675 "yacc.y"
{ IntegrationMethod_S.Method = yyvsp[-1].l ; ;
    break;}
case 154:
#line 1682 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 155:
#line 1685 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 156:
#line 1692 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 158:
#line 1704 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 159:
#line 1713 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 160:
#line 1722 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 161:
#line 1729 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 162:
#line 1732 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 163:
#line 1739 "yacc.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 165:
#line 1755 "yacc.y"
{ QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Element: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Element_Type)) ;

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
	case NEWTONCOTES : 
	  Get_FunctionForDefine
	    (FunctionForNewtonCotes, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	default : 
	  yyerror("Incompatible Type of Integration Method") ;
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
	  yyerror("Incompatible Type of Integration Method") ;
	  break ;
	}
	break ;

      default :
	yyerror("Incompatible Type of Integration Method") ;
	break ;
      }

      if (FlagError)  vyyerror("Bad Type of Integration for Element: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 166:
#line 1808 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 167:
#line 1811 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 168:
#line 1814 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 169:
#line 1817 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 170:
#line 1820 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 171:
#line 1831 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 173:
#line 1841 "yacc.y"
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
case 175:
#line 1866 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 177:
#line 1880 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 178:
#line 1886 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 179:
#line 1893 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 180:
#line 1901 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 181:
#line 1904 "yacc.y"
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
case 182:
#line 1926 "yacc.y"
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
case 183:
#line 1941 "yacc.y"
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
case 184:
#line 1965 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 186:
#line 1979 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 187:
#line 1988 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 188:
#line 2012 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 189:
#line 2037 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 190:
#line 2042 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 191:
#line 2050 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 192:
#line 2058 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 193:
#line 2068 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
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
case 194:
#line 2084 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 195:
#line 2091 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 196:
#line 2097 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 197:
#line 2103 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 198:
#line 2111 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 199:
#line 2119 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 200:
#line 2127 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 201:
#line 2147 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 203:
#line 2158 "yacc.y"
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
case 205:
#line 2185 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 207:
#line 2198 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 208:
#line 2204 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 209:
#line 2211 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 210:
#line 2219 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 211:
#line 2222 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 212:
#line 2225 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2228 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 214:
#line 2235 "yacc.y"
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
case 215:
#line 2251 "yacc.y"
{
      if (!Nbr_Index) {
	if ( (i = List_ISearchSeq(yyvsp[-3].l, BasisFunction_S.Name, 
				  fcmp_BasisFunction_Name)) < 0 )
	  BasisFunction_S.Num = Num_BasisFunction++ ;
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
				      fcmp_BasisFunction_Name)) < 0 )
	      BasisFunction_S.Num = Num_BasisFunction++ ;
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
case 216:
#line 2288 "yacc.y"
{ 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    ;
    break;}
case 218:
#line 2307 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 219:
#line 2310 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 220:
#line 2315 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 221:
#line 2320 "yacc.y"
{
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError)  vyyerror("Unknown Function for BasisFunction: %s %s", 
			       yyvsp[-2].c, Get_Valid_SX3F2N(BF_Function)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 222:
#line 2332 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 223:
#line 2356 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;

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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 225:
#line 2416 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 226:
#line 2419 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 227:
#line 2428 "yacc.y"
{
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for Multiple Formulation: %s {}", yyvsp[-12].c) ;

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
	  vyyerror("Only 1 Region needed in Group: %s", Group_S.Name) ;

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
	  vyyerror("Unknown DefineQuantity %s in Formulation %s", yyvsp[-15].c,
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
case 228:
#line 2493 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 229:
#line 2497 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 230:
#line 2504 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 232:
#line 2513 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 233:
#line 2518 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 234:
#line 2525 "yacc.y"
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
case 235:
#line 2541 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 236:
#line 2547 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 237:
#line 2550 "yacc.y"
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
case 238:
#line 2569 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 239:
#line 2573 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 240:
#line 2582 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 242:
#line 2593 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 243:
#line 2598 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 244:
#line 2607 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 245:
#line 2620 "yacc.y"
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
case 246:
#line 2635 "yacc.y"
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
case 247:
#line 2709 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 249:
#line 2725 "yacc.y"
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
case 250:
#line 2743 "yacc.y"
{
      if (!Nbr_Index) {
	Type_Function = yyvsp[-3].i ;
	Type_SuppList = SUPPLIST_NONE ;
	Constraint_Index =
	  List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c, fcmp_Constraint_Name) ;
      }
      else {
	vyyerror("New syntax for Constraint needed in multiple FunctionSpace") ;
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 251:
#line 2757 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 252:
#line 2760 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2763 "yacc.y"
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
case 254:
#line 2809 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 256:
#line 2819 "yacc.y"
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
case 258:
#line 2845 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 260:
#line 2857 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 261:
#line 2863 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 262:
#line 2870 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 264:
#line 2881 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2887 "yacc.y"
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
case 266:
#line 2901 "yacc.y"
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
case 267:
#line 2919 "yacc.y"
{ DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    ;
    break;}
case 269:
#line 2940 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 270:
#line 2943 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 271:
#line 2947 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 272:
#line 2950 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 273:
#line 2959 "yacc.y"
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
case 274:
#line 2998 "yacc.y"
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
case 275:
#line 3022 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 276:
#line 3027 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 277:
#line 3033 "yacc.y"
{ 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = yyvsp[-2].l ;
      DefineQuantity_S.IntegralQuantity.DofIndexInWholeQuantity = 
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(DefineQuantity_S.IntegralQuantity.WholeQuantity, 0) ;

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
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }
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
	    if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;
	    if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_DOF ;

	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }

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
	  }

	}

      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 5){
	
	/* EXPR  TIME  GF_FUNCTION  OPER  DOF */
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
	    if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){

	      DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
		(WholeQuantity_P+0)->Case.Expression.Index ;

	      if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
		DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PSCA_DOF ;
	      if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
		DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PVEC_DOF ;
	      
	      DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
		(WholeQuantity_P+1)->Case.Function.NbrParameters ;
	      DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
		(WholeQuantity_P+1)->Case.Function.Para ;	    
	    }
	  }

	}

      }


    ;
    break;}
case 278:
#line 3183 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 279:
#line 3188 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 280:
#line 3197 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 3206 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 283:
#line 3214 "yacc.y"
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
case 284:
#line 3254 "yacc.y"
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
case 285:
#line 3269 "yacc.y"
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
	      vyyerror("Multiple GlobalEquation not yet implemented in yacc ...") ; 

	    List_Read(ListOfEquationTerm, k, &Formulation_S.Equation) ;

	    List_Add(Formulation_S.Equation, &EquationTerm_S) ;
	  }
	yyval.l = Formulation_S.Equation ;
      }
    ;
    break;}
case 286:
#line 3297 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 287:
#line 3300 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 288:
#line 3303 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 289:
#line 3306 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 290:
#line 3313 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 292:
#line 3324 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3333 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 294:
#line 3343 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 295:
#line 3357 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 297:
#line 3369 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 298:
#line 3371 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 299:
#line 3373 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 300:
#line 3375 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 301:
#line 3383 "yacc.y"
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
      EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.Active = NULL ;
    ;
    break;}
case 303:
#line 3405 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 304:
#line 3413 "yacc.y"
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
case 305:
#line 3475 "yacc.y"
{ 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer(yyvsp[-2].l, 0) ;

      if (List_Nbr(yyvsp[-2].l) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  yyerror("Missing DefineQuantity in Equation");
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
	yyerror("Unrecognized Quantity Structure in Equation");
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
case 306:
#line 3521 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 307:
#line 3545 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3554 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3568 "yacc.y"
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
case 311:
#line 3597 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 312:
#line 3621 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 313:
#line 3629 "yacc.y"
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
case 314:
#line 3684 "yacc.y"
{ EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;
    break;}
case 315:
#line 3701 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 316:
#line 3702 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 317:
#line 3703 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 318:
#line 3704 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 319:
#line 3705 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 320:
#line 3706 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 321:
#line 3707 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 322:
#line 3714 "yacc.y"
{ Quantity_TypeOperator = Get_DefineForString(Operator_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Operator: %s %s", 
		 yyvsp[-2].c, Get_Valid_SXD(Operator_Type)) ;
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 323:
#line 3728 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 324:
#line 3746 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 326:
#line 3756 "yacc.y"
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
case 328:
#line 3781 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 330:
#line 3793 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 331:
#line 3800 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 332:
#line 3807 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 333:
#line 3810 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 334:
#line 3812 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 335:
#line 3818 "yacc.y"
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
case 336:
#line 3833 "yacc.y"
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
case 337:
#line 3852 "yacc.y"
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
    ;
    break;}
case 339:
#line 3871 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 340:
#line 3874 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 341:
#line 3882 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 342:
#line 3885 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 343:
#line 3890 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 344:
#line 3895 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 345:
#line 3900 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 346:
#line 3910 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 347:
#line 3919 "yacc.y"
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
case 348:
#line 3956 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 349:
#line 3963 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 350:
#line 3966 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 351:
#line 3978 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 352:
#line 3988 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 353:
#line 3994 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 354:
#line 3997 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 355:
#line 4009 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 356:
#line 4017 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 357:
#line 4028 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Type of Operation: %s %s", 
		 yyvsp[-2].c, Get_Valid_SXD(Operation_Type)) ;
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 358:
#line 4044 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 359:
#line 4051 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 360:
#line 4057 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 361:
#line 4063 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 362:
#line 4069 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 363:
#line 4077 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-4].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Type of Operation: %s %s", 
		 yyvsp[-4].c, Get_Valid_SXD(Operation_Type)) ;
      Free(yyvsp[-4].c) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-2].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 364:
#line 4093 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 365:
#line 4100 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 366:
#line 4106 "yacc.y"
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
case 367:
#line 4117 "yacc.y"
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
case 368:
#line 4128 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = yyvsp[-2].i ;
      
      if(DefineSystem_S.FrequencyValue == NULL)
	DefineSystem_S.FrequencyValue = 
	  List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
    ;
    break;}
case 369:
#line 4144 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 370:
#line 4156 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(Operation_P->Case.FourierTransform.Frequency, &Value) ;
      }
    ;
    break;}
case 371:
#line 4178 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)yyvsp[-6].d ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;
    break;}
case 372:
#line 4200 "yacc.y"
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
case 373:
#line 4213 "yacc.y"
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
case 374:
#line 4226 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 376:
#line 4235 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 378:
#line 4244 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 379:
#line 4254 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 380:
#line 4265 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 381:
#line 4274 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 382:
#line 4284 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 384:
#line 4294 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 385:
#line 4297 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 386:
#line 4306 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 387:
#line 4319 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 389:
#line 4335 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 390:
#line 4339 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 391:
#line 4343 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 392:
#line 4347 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 393:
#line 4352 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 394:
#line 4363 "yacc.y"
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
case 396:
#line 4380 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 397:
#line 4384 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 398:
#line 4388 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 399:
#line 4392 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 400:
#line 4396 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4401 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 4412 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 404:
#line 4427 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 405:
#line 4431 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 406:
#line 4435 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 407:
#line 4439 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 408:
#line 4444 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 409:
#line 4455 "yacc.y"
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
case 411:
#line 4473 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 412:
#line 4477 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 413:
#line 4481 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 414:
#line 4485 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 415:
#line 4490 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 416:
#line 4500 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 417:
#line 4506 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 418:
#line 4512 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 419:
#line 4522 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 420:
#line 4525 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 421:
#line 4530 "yacc.y"
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
case 423:
#line 4548 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 424:
#line 4557 "yacc.y"
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
	  vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 425:
#line 4586 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 426:
#line 4589 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 427:
#line 4592 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 428:
#line 4600 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 429:
#line 4615 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 431:
#line 4627 "yacc.y"
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
case 433:
#line 4650 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 435:
#line 4664 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 436:
#line 4671 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 437:
#line 4679 "yacc.y"
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
case 438:
#line 4725 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 439:
#line 4730 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 440:
#line 4736 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 441:
#line 4739 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 442:
#line 4744 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.Type = NONCUMULATIVE ;
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 444:
#line 4756 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 445:
#line 4759 "yacc.y"
{ PostQuantity_S.Type =
	Get_DefineForString(PostQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of PostQuantity: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(PostQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 446:
#line 4768 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 447:
#line 4774 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 448:
#line 4779 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 449:
#line 4785 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, yyvsp[-3].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s %s",
		 yyvsp[-3].c, Get_Valid_SXD(PostQuantityTerm_EvaluationType)) ;
      Free(yyvsp[-3].c) ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 450:
#line 4798 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 452:
#line 4812 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 453:
#line 4819 "yacc.y"
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
	    vyyerror("Mixed quantity types in term: %d != %d", PostQuantityTerm_S.Type, j) ;
	}
	if (PostQuantityTerm_S.Type == 0)  PostQuantityTerm_S.Type = LOCALQUANTITY ;
      }

    ;
    break;}
case 454:
#line 4847 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 455:
#line 4856 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 456:
#line 4857 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 457:
#line 4863 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 458:
#line 4872 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 459:
#line 4889 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 461:
#line 4901 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 463:
#line 4908 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 465:
#line 4920 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 466:
#line 4927 "yacc.y"
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
case 467:
#line 4939 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 468:
#line 4949 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 469:
#line 4954 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 470:
#line 4960 "yacc.y"
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
case 471:
#line 4977 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 472:
#line 4987 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 473:
#line 4990 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 474:
#line 4994 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 475:
#line 5005 "yacc.y"
{
      PostSubOperation_S.Type = POP_PLOT ;
    ;
    break;}
case 476:
#line 5010 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[-3].i) ;
    ;
    break;}
case 477:
#line 5022 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", yyvsp[-13].i) ;

      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-11].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = yyvsp[-9].d ;
      PostSubOperation_S.Case.WithArgument.x[1] = yyvsp[-7].d ;
      PostSubOperation_S.Case.WithArgument.n = (int)yyvsp[-4].d ;
    ;
    break;}
case 478:
#line 5044 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 479:
#line 5054 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-3].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-3].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;

      if((k=((struct PostQuantity*)
	     List_Pointer(InteractivePostProcessing_S.PostQuantity, i))->Type) == 
	 ((struct PostQuantity*)List_Pointer(InteractivePostProcessing_S.PostQuantity, j))->Type){
	vyyerror("PostQuantities '%s' and '%s' should not be of same type (%s)", 
		 yyvsp[-3].c, yyvsp[-1].c, Get_StringForDefine(PostQuantity_Type, k)) ;
      }      
      Free(yyvsp[-3].c) ; Free(yyvsp[-1].c) ;
    ;
    break;}
case 480:
#line 5077 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 481:
#line 5078 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 482:
#line 5079 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 483:
#line 5080 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 484:
#line 5086 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 485:
#line 5095 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONCUT_2D ;
      PostSubOperation_S.Case.OnCut.x[0] = yyvsp[-20].d ;
      PostSubOperation_S.Case.OnCut.y[0] = yyvsp[-18].d ;
      PostSubOperation_S.Case.OnCut.z[0] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnCut.x[1] = yyvsp[-13].d ;
      PostSubOperation_S.Case.OnCut.y[1] = yyvsp[-11].d ;
      PostSubOperation_S.Case.OnCut.z[1] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnCut.x[2] = yyvsp[-6].d ;
      PostSubOperation_S.Case.OnCut.y[2] = yyvsp[-4].d ;
      PostSubOperation_S.Case.OnCut.z[2] = yyvsp[-2].d ;
    ;
    break;}
case 486:
#line 5109 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 487:
#line 5117 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = yyvsp[-7].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = yyvsp[-5].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = yyvsp[-3].i ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[0], &Value) ;
      }
    ;
    break;}
case 488:
#line 5130 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 489:
#line 5140 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 490:
#line 5149 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_1D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-14].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-12].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-7].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
    ;
    break;}
case 491:
#line 5163 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_2D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-25].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-23].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-21].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-18].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-14].d ;
      PostSubOperation_S.Case.OnGrid.x[2] = yyvsp[-11].d ;
      PostSubOperation_S.Case.OnGrid.y[2] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.z[2] = yyvsp[-7].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-1].d ;
    ;
    break;}
case 492:
#line 5182 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_3D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-34].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-32].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-30].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-27].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-25].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-23].d ;
      PostSubOperation_S.Case.OnGrid.x[2] = yyvsp[-20].d ;
      PostSubOperation_S.Case.OnGrid.y[2] = yyvsp[-18].d ;
      PostSubOperation_S.Case.OnGrid.z[2] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.x[3] = yyvsp[-13].d ;
      PostSubOperation_S.Case.OnGrid.y[3] = yyvsp[-11].d ;
      PostSubOperation_S.Case.OnGrid.z[3] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)yyvsp[-1].d ;
    ;
    break;}
case 493:
#line 5205 "yacc.y"
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
      PostSubOperation_S.Value_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Sort = 0 ;
    ;
    break;}
case 495:
#line 5223 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 496:
#line 5230 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 497:
#line 5237 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 498:
#line 5244 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 499:
#line 5248 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 500:
#line 5252 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 501:
#line 5256 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 502:
#line 5260 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 503:
#line 5269 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 504:
#line 5274 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 505:
#line 5279 "yacc.y"
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
case 506:
#line 5299 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Plot") ;  	
    ;
    break;}
case 507:
#line 5306 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 508:
#line 5313 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 509:
#line 5321 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 510:
#line 5329 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 511:
#line 5336 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 512:
#line 5348 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 513:
#line 5354 "yacc.y"
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
	  if (FlagError) {
	    vyyerror("Unknown Tag in Format: %s %s", tmp, 
		     Get_Valid_SXD(PostSubOperation_FormatTag)) ;
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
case 514:
#line 5401 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 516:
#line 5412 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 517:
#line 5415 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 518:
#line 5421 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 519:
#line 5422 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 521:
#line 5430 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 522:
#line 5433 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 523:
#line 5442 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 524:
#line 5445 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 525:
#line 5456 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 526:
#line 5462 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      if(!yyvsp[-2].d || (yyvsp[-5].d<yyvsp[0].d && yyvsp[-2].d<0) || (yyvsp[-5].d>yyvsp[0].d && yyvsp[-2].d>0)){
        vyyerror("Wrong Increment in '%g :[%g] %g'", yyvsp[-5].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(ListOfDouble2_L, &(yyvsp[-5].d)) ;
      }
      else 
	for(d=yyvsp[-5].d ; (yyvsp[-2].d>0)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; d+=yyvsp[-2].d)
	  List_Add(ListOfDouble2_L, &d) ;
   ;
    break;}
case 527:
#line 5481 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 528:
#line 5487 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 529:
#line 5493 "yacc.y"
{
      Constant_S.Name = yyvsp[-5].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      Constant_S.Value.ListOfFloat =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &d) ;
	List_Add(Constant_S.Value.ListOfFloat, &d) ;
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 530:
#line 5505 "yacc.y"
{
      Constant_S.Name = yyvsp[-8].c ; Constant_S.Type = VAR_LISTOFFLOAT ;

      Constant1_S.Name = yyvsp[-4].c ; Constant2_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[-4].c) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", yyvsp[-4].c) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", yyvsp[-2].c) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 yyvsp[-4].c, List_Nbr(Constant1_S.Value.ListOfFloat),
			 yyvsp[-2].c, List_Nbr(Constant2_S.Value.ListOfFloat)) ;
	      }
	      else {
		Constant_S.Value.ListOfFloat =
		  List_Create(List_Nbr(Constant1_S.Value.ListOfFloat)*2, 1,
			      sizeof(double)) ;
		for(i=0 ; i<List_Nbr(Constant1_S.Value.ListOfFloat) ; i++) {
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d) ;
		  List_Add(Constant_S.Value.ListOfFloat, &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add(Constant_S.Value.ListOfFloat, &d) ;
		}
	      }
	    }
	}
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 533:
#line 5556 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 534:
#line 5562 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 535:
#line 5568 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 536:
#line 5579 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 537:
#line 5580 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 538:
#line 5581 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 539:
#line 5582 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 540:
#line 5583 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 541:
#line 5584 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 542:
#line 5585 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 543:
#line 5586 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 544:
#line 5587 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 545:
#line 5588 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 546:
#line 5589 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 547:
#line 5590 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 548:
#line 5591 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 549:
#line 5592 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 550:
#line 5593 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 551:
#line 5594 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 552:
#line 5595 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 553:
#line 5596 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 554:
#line 5597 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 555:
#line 5598 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 556:
#line 5599 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 557:
#line 5602 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 558:
#line 5603 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 559:
#line 5604 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 560:
#line 5605 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 561:
#line 5606 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 562:
#line 5607 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 563:
#line 5608 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 564:
#line 5609 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 565:
#line 5610 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 566:
#line 5611 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 567:
#line 5612 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 568:
#line 5613 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 569:
#line 5614 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 570:
#line 5615 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 571:
#line 5616 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 572:
#line 5617 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 573:
#line 5618 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 574:
#line 5619 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 575:
#line 5620 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 576:
#line 5621 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 577:
#line 5622 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 578:
#line 5623 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 579:
#line 5624 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 580:
#line 5625 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 581:
#line 5626 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 582:
#line 5627 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 583:
#line 5628 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 584:
#line 5629 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 585:
#line 5630 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 586:
#line 5631 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 587:
#line 5632 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 588:
#line 5633 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 589:
#line 5634 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 590:
#line 5635 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 591:
#line 5636 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 592:
#line 5637 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 593:
#line 5638 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 594:
#line 5639 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 595:
#line 5640 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 596:
#line 5641 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 597:
#line 5646 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 598:
#line 5647 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 599:
#line 5648 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 600:
#line 5649 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 601:
#line 5650 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 602:
#line 5651 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 603:
#line 5652 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 604:
#line 5654 "yacc.y"
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
case 605:
#line 5673 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 606:
#line 5676 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.c = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  yyval.c = Constant_S.Value.Char ;
	else {
	  vyyerror("Char Constant needed: %s", yyvsp[0].c) ;  yyval.c = NULL ;
	}
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/usr/local/share/bison.simple"

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
}
#line 5692 "yacc.y"



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
  else                       vyyerror("Bad Group Right Hand Side") ;

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
    fprintf(stderr, "Error ('%s' line %ld): %s on '%s'\n", 
	    yyname, yylinenum, s, yytext) ;
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
      fprintf(stderr, "%s^\n%s%s\n\n", space2, space1, s) ;
    }
  }

  ErrorLevel=1 ;
}

void  vyyerror (char *fmt, ...){
  int      i, nn ;
  char space1[32] = "";
  va_list  args;

  if(!InteractiveLevel){
    fprintf (stderr, "Error ('%s' line %ld): ", yyname, yylinenum);
    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    va_end (args);
    fprintf (stderr, "\n");
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
      }
      fprintf(stderr, "%s", space1) ;
      va_start (args, fmt);
      vfprintf (stderr, fmt, args);
      va_end (args);
      fprintf (stderr, "\n\n");
    }
  }

  ErrorLevel=1 ;
}


