/* $Id: yacc.tab.c,v 1.8 2000-09-07 18:47:27 geuzaine Exp $ */

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
#define	tDegree	294
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
#define	tPostProcessing	390
#define	tNameOfSystem	391
#define	tPostOperation	392
#define	tNameOfPostProcessing	393
#define	tUsingPost	394
#define	tAppend	395
#define	tPlot	396
#define	tPrint	397
#define	tWrite	398
#define	tAdapt	399
#define	tOnRegion	400
#define	tOnGrid	401
#define	tOnCut	402
#define	tOnPoint	403
#define	tOnLine	404
#define	tOnPlane	405
#define	tOnBox	406
#define	tWithArgument	407
#define	tFile	408
#define	tDepth	409
#define	tDimension	410
#define	tTimeStep	411
#define	tHarmonicToTime	412
#define	tFormat	413
#define	tHeader	414
#define	tFooter	415
#define	tSkin	416
#define	tSmoothing	417
#define	tTarget	418
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

#line 1 "yacc.y"


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
#if !defined MSDOS && !defined __cplusplus
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


#line 183 "yacc.y"
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



#define	YYFINAL		1525
#define	YYFLAG		-32768
#define	YYNTBASE	201

#define YYTRANSLATE(x) ((unsigned)(x) <= 435 ? yytranslate[x] : 382)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   189,     2,   191,   192,   186,     2,     2,   198,
   199,   184,   182,   197,   183,   200,   185,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   176,
     2,   177,   170,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   195,     2,   196,   190,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   193,     2,   194,     2,     2,     2,     2,     2,
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
   166,   167,   168,   169,   171,   172,   173,   174,   175,   178,
   179,   180,   181,   187,   188
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
  1330,  1342,  1356,  1372,  1373,  1381,  1382,  1390,  1398,  1400,
  1402,  1403,  1406,  1410,  1414,  1417,  1418,  1421,  1425,  1429,
  1433,  1437,  1442,  1443,  1446,  1450,  1454,  1458,  1462,  1466,
  1471,  1472,  1475,  1479,  1483,  1487,  1491,  1496,  1497,  1500,
  1504,  1508,  1512,  1516,  1520,  1525,  1530,  1535,  1536,  1541,
  1542,  1545,  1549,  1553,  1557,  1561,  1565,  1569,  1570,  1573,
  1577,  1579,  1580,  1583,  1587,  1592,  1597,  1601,  1606,  1607,
  1612,  1613,  1616,  1620,  1624,  1629,  1630,  1636,  1642,  1643,
  1646,  1647,  1654,  1658,  1659,  1664,  1668,  1672,  1673,  1676,
  1680,  1682,  1683,  1686,  1690,  1694,  1698,  1702,  1707,  1708,
  1717,  1718,  1719,  1723,  1731,  1740,  1759,  1762,  1767,  1769,
  1771,  1773,  1775,  1778,  1803,  1806,  1807,  1822,  1831,  1852,
  1882,  1921,  1922,  1925,  1929,  1934,  1939,  1943,  1946,  1950,
  1954,  1958,  1962,  1966,  1970,  1974,  1978,  1982,  1986,  1990,
  1991,  1994,  1995,  1999,  2001,  2005,  2006,  2008,  2012,  2014,
  2016,  2020,  2024,  2028,  2035,  2040,  2045,  2052,  2062,  2068,
  2069,  2073,  2079,  2085,  2087,  2089,  2091,  2093,  2095,  2097,
  2099,  2101,  2103,  2105,  2107,  2109,  2111,  2113,  2115,  2117,
  2119,  2121,  2123,  2125,  2127,  2129,  2133,  2136,  2139,  2143,
  2147,  2151,  2155,  2159,  2163,  2167,  2171,  2175,  2179,  2183,
  2187,  2191,  2195,  2200,  2205,  2210,  2215,  2220,  2225,  2230,
  2235,  2240,  2245,  2252,  2257,  2262,  2267,  2272,  2277,  2282,
  2289,  2296,  2303,  2309,  2312,  2314,  2316,  2318,  2320,  2322,
  2324,  2326,  2328,  2330
};

static const short yyrhs[] = {    -1,
   202,   203,     0,     0,     0,   203,   204,   205,     0,    41,
   193,   208,   194,     0,    77,   193,   228,   194,     0,    48,
   193,   259,   194,     0,    61,   193,   244,   194,     0,    63,
   193,   250,   194,     0,    73,   193,   266,   194,     0,    86,
   193,   287,   194,     0,   103,   193,   313,   194,     0,   135,
   193,   343,   194,     0,   137,   193,   355,   194,     0,   359,
     0,   376,     0,     9,   381,     0,   206,     0,   165,     7,
     0,   167,     7,     0,   168,     7,     0,     0,   207,   363,
     0,     0,     0,   208,   209,   210,     0,     5,   169,   212,
     7,     0,     5,   227,   169,   212,     7,     0,     0,     5,
   225,   169,   211,   212,     7,     0,    42,   195,   223,   196,
     7,     0,   376,     0,     0,     0,   216,   195,   213,   217,
   214,   218,   196,     0,   191,   220,     0,   212,     0,     5,
   226,     0,    49,     0,     5,     0,   220,     0,    43,     0,
     0,   224,   219,   220,     0,   224,    44,     5,   226,     0,
     5,     0,   222,     0,   193,   221,   194,     0,     0,   221,
   224,   222,     0,   221,   224,   183,   222,     0,     3,     0,
     3,     8,     3,     0,     3,     8,   195,   379,   196,     3,
     0,     5,     0,     5,   193,   379,   194,     0,     5,   193,
   194,     0,     0,   223,   224,     5,     0,   223,   224,     5,
   193,   379,   194,     0,     0,   197,     0,   193,   191,   379,
   194,     0,     0,   193,   194,     0,   193,   379,   194,     0,
     0,   228,   229,     0,    45,   195,   230,   196,     7,     0,
     5,   195,   196,   169,   231,     7,     0,     5,   195,   215,
   196,   169,   231,     7,     0,   376,     0,     0,   230,   224,
     5,     0,    10,   195,   379,   196,     0,    77,   195,     5,
   196,     0,     0,   232,   233,     0,     0,   234,   235,     0,
   238,     0,     0,     0,   235,   170,   236,   235,     8,   237,
   235,     0,   235,   184,   235,     0,   235,   187,   235,     0,
    40,   195,   235,   197,   235,   196,     0,   235,   185,   235,
     0,   235,   182,   235,     0,   235,   183,   235,     0,   235,
   186,   235,     0,   235,   190,   235,     0,   235,   176,   235,
     0,   235,   177,   235,     0,   235,   178,   235,     0,   235,
   179,   235,     0,   235,   174,   235,     0,   235,   173,   235,
     0,   235,   175,   235,     0,   235,   171,   235,     0,   235,
   172,   235,     0,   183,   235,     0,   182,   235,     0,   189,
   235,     0,   198,   235,   199,     0,   380,     0,   378,   241,
   243,     0,     5,   312,     0,   312,     0,   312,   241,     0,
     0,    96,   239,   195,   233,   196,     0,    37,   195,   312,
   196,     0,    39,   195,   312,   196,     0,     0,    38,   240,
   195,   233,   197,   215,   196,     0,   176,     5,   177,   195,
   233,   196,     0,   192,     5,     0,   192,   156,     0,   192,
   114,     0,   192,     3,     0,   238,   191,     3,     0,   191,
     3,     0,   195,   200,   196,     0,   195,   196,     0,   195,
   242,   196,     0,   235,     0,   242,   197,   235,     0,     0,
   193,   374,   194,     0,   193,    49,   195,   215,   196,   194,
     0,   193,    46,   195,     5,   196,   194,     0,     0,   244,
   193,   245,   194,     0,     0,   245,   246,     0,    74,     5,
     7,     0,    62,   193,   247,   194,     0,     0,   247,   193,
   248,   194,     0,     0,   248,   249,     0,    49,   215,     7,
     0,    49,    43,     7,     0,    61,     5,   243,     7,     0,
     0,   250,   193,   251,   194,     0,     0,   251,   252,     0,
    74,     5,     7,     0,    66,   231,     7,     0,    62,   193,
   253,   194,     0,     0,   253,   193,   254,   194,     0,     0,
   254,   255,     0,    64,     5,     7,     0,    65,     5,     7,
     0,    62,   193,   256,   194,     0,     0,   256,   193,   257,
   194,     0,     0,   257,   258,     0,    67,     5,     7,     0,
    68,   379,     7,     0,    69,   379,     7,     0,    70,   379,
     7,     0,    71,   379,     7,     0,    72,   379,     7,     0,
     0,   259,   260,     0,   193,   261,   194,     0,   376,     0,
     0,   261,   262,     0,    74,     5,     7,     0,    74,     5,
   225,     7,     0,    64,     5,     7,     0,    62,   193,   263,
   194,     0,    62,     5,   193,   263,   194,     0,     0,   263,
   193,   264,   194,     0,     0,   264,   265,     0,    64,     5,
     7,     0,    49,   215,     7,     0,    50,   215,     7,     0,
    56,   231,     7,     0,    55,   231,     7,     0,    60,     5,
     7,     0,    57,   193,     3,   224,     3,   194,     7,     0,
    51,   215,     7,     0,    52,   215,     7,     0,    77,   231,
     7,     0,    54,   231,     7,     0,    53,   231,     7,     0,
    77,   195,   231,   197,   231,   196,     7,     0,    54,   195,
   231,   197,   231,   196,     7,     0,    53,   195,   231,   197,
   231,   196,     7,     0,     0,   266,   267,     0,   193,   268,
   194,     0,   376,     0,     0,   268,   269,     0,    74,     5,
     7,     0,    74,     5,   225,     7,     0,    64,     5,     7,
     0,    75,   193,   270,   194,     0,    80,   193,   276,   194,
     0,    82,   193,   281,   194,     0,    48,   193,   284,   194,
     0,     0,   270,   193,   271,   194,     0,     0,   271,   272,
     0,    74,     5,     7,     0,    76,     5,     7,     0,    76,
     5,   225,     7,     0,    77,     5,   273,     7,     0,    78,
   215,     7,     0,    79,   215,     7,     0,     0,     0,     0,
   193,    87,     5,     7,    86,     5,   225,     7,   274,    41,
   215,     7,   275,   103,     5,   226,     7,   194,     0,     0,
   276,   193,   277,   194,     0,     0,   277,   278,     0,    74,
     5,     7,     0,    81,   279,     7,     0,     5,     0,   193,
   280,   194,     0,     0,   280,   224,     5,     0,     0,   281,
   193,   282,   194,     0,     0,   282,   283,     0,    74,     5,
     7,     0,    64,     5,     7,     0,    76,     5,     7,     0,
     0,   284,   193,   285,   194,     0,     0,   285,   286,     0,
    76,     5,     7,     0,    79,   216,    85,     5,     7,     0,
    83,   216,     7,     0,    84,   219,     7,     0,    85,     5,
   226,     7,     0,     0,   287,   288,     0,   193,   289,   194,
     0,   376,     0,     0,   289,   290,     0,    74,     5,     7,
     0,    74,     5,   225,     7,     0,    64,     5,     7,     0,
    87,   193,   291,   194,     0,    91,   193,   297,   194,     0,
     0,   291,   193,   292,   194,     0,     0,   292,   293,     0,
    74,     5,     7,     0,    64,    82,     7,     0,    64,    92,
     7,     0,    64,     5,     7,     0,     0,    88,     5,   226,
   294,   296,     7,     0,    89,     3,     7,     0,     0,   195,
   295,   233,   196,     7,     0,   102,   215,     7,     0,    63,
     5,     7,     0,    61,     5,     7,     0,    90,     3,     7,
     0,     0,   195,     5,   196,     0,     0,   297,   298,     0,
    92,   193,   303,   194,     0,    93,   193,   303,   194,     0,
    94,   193,   307,   194,     0,    95,   193,   299,   194,     0,
     0,   299,   300,     0,    64,     5,     7,     0,    85,     5,
     7,     0,   193,   301,   194,     0,     0,   301,   302,     0,
    58,   312,     7,     0,    59,   312,     7,     0,    91,   312,
     7,     0,   102,   215,     7,     0,     0,   303,   304,     0,
     0,     0,   311,   195,   305,   233,   306,   197,   233,   196,
     7,     0,   102,   215,     7,     0,    61,     5,     7,     0,
    63,     5,     7,     0,     0,   307,   308,     0,   102,   215,
     7,     0,     0,     0,   311,   195,   309,   233,   310,   197,
   312,   196,     7,     0,     0,    96,     0,    97,     0,    98,
     0,    99,     0,   100,     0,   101,     0,   193,     5,     5,
   194,     0,   193,     5,   194,     0,     0,   313,   314,     0,
   193,   315,   194,     0,   376,     0,     0,   315,   316,     0,
    74,     5,     7,     0,    74,     5,   225,     7,     0,   104,
   193,   318,   194,     0,     0,   111,   317,   193,   325,   194,
     0,     0,   318,   193,   319,   194,     0,     0,   319,   320,
     0,    74,     5,     7,     0,    64,     5,     7,     0,   105,
   321,     7,     0,   106,   381,     7,     0,   109,   323,     7,
     0,   110,     5,     7,     0,   107,   373,     7,     0,   108,
   381,     7,     0,     5,   226,     0,   193,   322,   194,     0,
     0,   322,   224,     5,     0,     5,     0,   193,   324,   194,
     0,     0,   324,   224,     5,     0,     0,   325,   326,     0,
     5,     5,     7,     0,   113,   231,     7,     0,   121,   193,
   332,   194,     0,   125,   193,   334,   194,     0,   128,   193,
   336,   194,     0,   131,   193,   338,   194,     0,     5,   195,
     5,   196,     7,     0,   113,   195,   231,   196,     7,     0,
   166,     7,     0,   117,   195,   231,   196,   193,   325,   194,
     0,   117,   195,   231,   196,   193,   325,   194,   118,   193,
   325,   194,     0,   115,   195,     5,   197,   231,   196,     7,
     0,   120,   195,     5,   197,   231,   196,     7,     0,   116,
   195,     5,   197,     5,   197,   373,   196,     7,     0,   119,
   195,     5,   197,   379,   197,   373,   197,   379,   196,     7,
     0,   121,   195,   379,   197,   379,   197,   231,   197,   231,
   196,   193,   325,   194,     0,   125,   195,   379,   197,   379,
   197,   231,   197,   379,   197,   379,   196,   193,   325,   194,
     0,     0,   142,   327,   195,   329,   330,   196,     7,     0,
     0,   143,   328,   195,   329,   330,   196,     7,     0,   134,
   195,   215,   197,   231,   196,     7,     0,   371,     0,     5,
     0,     0,   330,   331,     0,   197,   153,   381,     0,   197,
   156,   373,     0,   197,   373,     0,     0,   332,   333,     0,
   122,   379,     7,     0,   123,   379,     7,     0,   114,   231,
     7,     0,   124,   231,     7,     0,   111,   193,   325,   194,
     0,     0,   334,   335,     0,   122,   379,     7,     0,   123,
   379,     7,     0,   114,   231,     7,     0,   126,   379,     7,
     0,   127,   379,     7,     0,   111,   193,   325,   194,     0,
     0,   336,   337,     0,   129,   379,     7,     0,   130,   231,
     7,     0,    66,   379,     7,     0,   164,   379,     7,     0,
   111,   193,   325,   194,     0,     0,   338,   339,     0,   129,
   379,     7,     0,   132,   379,     7,     0,    66,   379,     7,
     0,   164,   379,     7,     0,   104,     5,     7,     0,   133,
   193,   340,   194,     0,   111,   193,   325,   194,     0,   112,
   193,   325,   194,     0,     0,   340,   193,   341,   194,     0,
     0,   341,   342,     0,    64,     5,     7,     0,    87,     5,
     7,     0,   102,   215,     7,     0,    66,   379,     7,     0,
    77,   231,     7,     0,   164,     5,     7,     0,     0,   343,
   344,     0,   193,   345,   194,     0,   376,     0,     0,   345,
   346,     0,    74,     5,     7,     0,    74,     5,   225,     7,
     0,   105,     5,   226,     7,     0,   136,     5,     7,     0,
    87,   193,   347,   194,     0,     0,   347,   193,   348,   194,
     0,     0,   348,   349,     0,    74,     5,     7,     0,    64,
     5,     7,     0,    55,   193,   350,   194,     0,     0,   350,
    92,   193,   351,   194,     0,   350,     5,   193,   351,   194,
     0,     0,   351,   352,     0,     0,   311,   195,   353,   233,
   196,     7,     0,    64,     5,     7,     0,     0,   102,   354,
   215,     7,     0,    61,     5,     7,     0,    63,     5,     7,
     0,     0,   355,   356,     0,   193,   357,   194,     0,   376,
     0,     0,   357,   358,     0,    74,     5,     7,     0,   138,
     5,     7,     0,   158,     5,     7,     0,   140,   381,     7,
     0,   111,   193,   361,   194,     0,     0,   137,     5,   139,
     5,   360,   193,   361,   194,     0,     0,     0,   361,   362,
   363,     0,   141,   195,   364,   366,   368,   196,     7,     0,
   142,   195,   364,   145,   215,   368,   196,     7,     0,   142,
   195,   364,   145,   215,   152,     5,   193,   379,   197,   379,
   194,   193,   379,   194,   368,   196,     7,     0,     5,   197,
     0,     5,   365,     5,   197,     0,   184,     0,   185,     0,
   182,     0,   183,     0,   145,   215,     0,   147,   193,   193,
   379,   197,   379,   197,   379,   194,   193,   379,   197,   379,
   197,   379,   194,   193,   379,   197,   379,   197,   379,   194,
   194,     0,   146,   215,     0,     0,   146,   193,   231,   197,
   231,   197,   231,   194,   193,   373,   367,   197,   373,   194,
     0,   148,   193,   379,   197,   379,   197,   379,   194,     0,
   149,   193,   193,   379,   197,   379,   197,   379,   194,   193,
   379,   197,   379,   197,   379,   194,   194,   193,   379,   194,
     0,   150,   193,   193,   379,   197,   379,   197,   379,   194,
   193,   379,   197,   379,   197,   379,   194,   193,   379,   197,
   379,   197,   379,   194,   194,   193,   379,   197,   379,   194,
     0,   151,   193,   193,   379,   197,   379,   197,   379,   194,
   193,   379,   197,   379,   197,   379,   194,   193,   379,   197,
   379,   197,   379,   194,   193,   379,   197,   379,   197,   379,
   194,   194,   193,   379,   197,   379,   197,   379,   194,     0,
     0,   368,   369,     0,   197,   153,   381,     0,   197,   153,
   177,   381,     0,   197,   153,   181,   381,     0,   197,   154,
   379,     0,   197,   161,     0,   197,   162,   379,     0,   197,
   157,   379,     0,   197,   158,     5,     0,   197,   159,   370,
     0,   197,   160,   370,     0,   197,   158,   370,     0,   197,
   155,   379,     0,   197,   156,   373,     0,   197,   144,     5,
     0,   197,   163,   379,     0,   197,    55,   373,     0,     0,
   370,     6,     0,     0,   193,   372,   194,     0,   231,     0,
   372,   197,   231,     0,     0,   379,     0,   193,   374,   194,
     0,   379,     0,   375,     0,   374,   197,   379,     0,   374,
   197,   375,     0,   379,     8,   379,     0,   379,     8,   195,
   379,   196,   379,     0,     5,   169,   379,     7,     0,     5,
   169,     6,     7,     0,     5,   169,   193,   374,   194,     7,
     0,     5,   169,    47,   195,     5,   197,     5,   196,     7,
     0,    11,   195,   377,   196,     7,     0,     0,   377,   224,
     5,     0,   377,   224,     5,   169,   379,     0,   377,   224,
     5,   169,     6,     0,    17,     0,    18,     0,    19,     0,
    20,     0,    21,     0,    22,     0,    23,     0,    24,     0,
    25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
    30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
    35,     0,    36,     0,     5,     0,   380,     0,   198,   379,
   199,     0,   183,   379,     0,   189,   379,     0,   379,   183,
   379,     0,   379,   182,   379,     0,   379,   184,   379,     0,
   379,   185,   379,     0,   379,   186,   379,     0,   379,   190,
   379,     0,   379,   176,   379,     0,   379,   177,   379,     0,
   379,   178,   379,     0,   379,   179,   379,     0,   379,   174,
   379,     0,   379,   173,   379,     0,   379,   171,   379,     0,
   379,   172,   379,     0,    17,   195,   379,   196,     0,    18,
   195,   379,   196,     0,    19,   195,   379,   196,     0,    20,
   195,   379,   196,     0,    21,   195,   379,   196,     0,    22,
   195,   379,   196,     0,    23,   195,   379,   196,     0,    24,
   195,   379,   196,     0,    25,   195,   379,   196,     0,    26,
   195,   379,   196,     0,    27,   195,   379,   197,   379,   196,
     0,    28,   195,   379,   196,     0,    29,   195,   379,   196,
     0,    30,   195,   379,   196,     0,    31,   195,   379,   196,
     0,    32,   195,   379,   196,     0,    33,   195,   379,   196,
     0,    34,   195,   379,   197,   379,   196,     0,    35,   195,
   379,   197,   379,   196,     0,    36,   195,   379,   197,   379,
   196,     0,   379,   170,   379,     8,   379,     0,   379,   191,
     0,     4,     0,     3,     0,    12,     0,    13,     0,    14,
     0,    15,     0,    16,     0,     5,     0,     6,     0,     5,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   312,   349,   387,   390,   393,   396,   399,   400,   401,   402,
   403,   404,   405,   406,   407,   409,   411,   413,   418,   427,
   431,   444,   446,   454,   468,   471,   472,   475,   480,   483,
   485,   488,   490,   494,   502,   513,   522,   531,   538,   573,
   578,   588,   591,   605,   610,   613,   662,   674,   700,   705,
   720,   738,   759,   765,   774,   788,   822,   835,   855,   859,
   869,   886,   886,   889,   895,   898,   901,   911,   914,   917,
   921,   941,   985,   989,   992,  1009,  1018,  1025,  1028,  1034,
  1040,  1047,  1051,  1064,  1079,  1093,  1099,  1105,  1111,  1117,
  1123,  1129,  1135,  1141,  1147,  1153,  1159,  1165,  1171,  1177,
  1183,  1189,  1196,  1202,  1204,  1213,  1217,  1223,  1301,  1335,
  1345,  1358,  1360,  1371,  1377,  1383,  1385,  1414,  1438,  1449,
  1455,  1462,  1468,  1479,  1493,  1496,  1497,  1500,  1503,  1506,
  1511,  1513,  1520,  1545,  1552,  1557,  1562,  1566,  1573,  1578,
  1583,  1588,  1594,  1598,  1603,  1606,  1635,  1643,  1648,  1657,
  1661,  1670,  1673,  1678,  1683,  1688,  1696,  1700,  1711,  1720,
  1725,  1730,  1735,  1747,  1751,  1806,  1809,  1812,  1815,  1818,
  1827,  1834,  1837,  1859,  1862,  1872,  1876,  1884,  1891,  1899,
  1902,  1922,  1939,  1961,  1971,  1975,  1986,  2010,  2035,  2040,
  2048,  2056,  2066,  2082,  2089,  2095,  2101,  2109,  2117,  2125,
  2143,  2151,  2154,  2177,  2181,  2190,  2194,  2202,  2209,  2217,
  2220,  2223,  2226,  2231,  2249,  2284,  2299,  2303,  2308,  2313,
  2318,  2330,  2354,  2409,  2413,  2417,  2426,  2489,  2495,  2500,
  2505,  2509,  2516,  2521,  2539,  2544,  2548,  2565,  2571,  2578,
  2585,  2589,  2596,  2605,  2616,  2633,  2705,  2717,  2721,  2741,
  2755,  2758,  2761,  2805,  2812,  2815,  2837,  2841,  2849,  2853,
  2861,  2868,  2877,  2879,  2884,  2899,  2915,  2932,  2936,  2941,
  2945,  2948,  2957,  2996,  3020,  3025,  3031,  3181,  3186,  3195,
  3204,  3209,  3212,  3250,  3267,  3293,  3298,  3301,  3304,  3309,
  3317,  3320,  3331,  3341,  3353,  3362,  3365,  3369,  3371,  3373,
  3379,  3397,  3401,  3412,  3473,  3519,  3543,  3552,  3564,  3581,
  3585,  3619,  3628,  3682,  3698,  3701,  3702,  3703,  3704,  3705,
  3706,  3710,  3726,  3742,  3749,  3752,  3773,  3777,  3785,  3789,
  3798,  3805,  3808,  3810,  3815,  3831,  3848,  3863,  3867,  3872,
  3880,  3883,  3888,  3893,  3898,  3908,  3915,  3954,  3959,  3964,
  3974,  3986,  3990,  3995,  4006,  4015,  4022,  4042,  4049,  4055,
  4061,  4067,  4075,  4091,  4098,  4104,  4115,  4126,  4142,  4154,
  4176,  4197,  4210,  4224,  4231,  4233,  4240,  4242,  4255,  4265,
  4275,  4281,  4284,  4288,  4297,  4308,  4320,  4324,  4330,  4334,
  4338,  4343,  4352,  4365,  4369,  4375,  4379,  4383,  4387,  4392,
  4401,  4413,  4416,  4422,  4426,  4430,  4435,  4444,  4459,  4462,
  4468,  4472,  4476,  4481,  4491,  4497,  4503,  4512,  4516,  4520,
  4534,  4537,  4548,  4577,  4580,  4583,  4591,  4605,  4613,  4616,
  4637,  4640,  4651,  4654,  4662,  4670,  4716,  4721,  4726,  4730,
  4734,  4742,  4746,  4750,  4759,  4764,  4770,  4776,  4788,  4799,
  4802,  4810,  4838,  4848,  4848,  4854,  4863,  4879,  4887,  4890,
  4895,  4898,  4907,  4910,  4918,  4930,  4940,  4945,  4950,  4968,
  4977,  4981,  4986,  4994,  5001,  5010,  5033,  5045,  5067,  5070,
  5071,  5072,  5075,  5084,  5100,  5107,  5121,  5131,  5139,  5152,
  5170,  5195,  5209,  5212,  5220,  5227,  5234,  5238,  5242,  5246,
  5250,  5259,  5264,  5269,  5289,  5296,  5303,  5311,  5318,  5329,
  5336,  5382,  5388,  5392,  5397,  5402,  5405,  5406,  5410,  5415,
  5424,  5427,  5436,  5444,  5461,  5469,  5475,  5487,  5531,  5535,
  5538,  5544,  5550,  5561,  5563,  5564,  5565,  5566,  5567,  5568,
  5569,  5570,  5571,  5572,  5573,  5574,  5575,  5576,  5577,  5578,
  5579,  5580,  5581,  5582,  5584,  5586,  5587,  5588,  5589,  5590,
  5591,  5592,  5593,  5594,  5595,  5596,  5597,  5598,  5599,  5600,
  5601,  5602,  5603,  5604,  5605,  5606,  5607,  5608,  5609,  5610,
  5611,  5612,  5613,  5614,  5615,  5616,  5617,  5618,  5619,  5620,
  5621,  5622,  5623,  5624,  5627,  5630,  5631,  5632,  5633,  5634,
  5635,  5636,  5653,  5658
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tInclude","tConstant","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tDegree","tCrossProduct",
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
"tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates","tPostProcessing",
"tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend",
"tPlot","tPrint","tWrite","tAdapt","tOnRegion","tOnGrid","tOnCut","tOnPoint",
"tOnLine","tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension",
"tTimeStep","tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing",
"tTarget","tFlag","tExit","tBreak","tHelp","tCpu","tDEF","'?'","tAND","tOR",
"tNOTEQUAL","tEQUAL","tAPPROXEQUAL","'<'","'>'","tLESSOREQUAL","tGREATEROREQUAL",
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
   202,   201,   203,   204,   203,   205,   205,   205,   205,   205,
   205,   205,   205,   205,   205,   205,   205,   205,   205,   206,
   206,   206,   207,   206,   208,   209,   208,   210,   210,   211,
   210,   210,   210,   213,   214,   212,   212,   215,   215,   216,
   216,   217,   217,   218,   218,   218,   219,   220,   220,   221,
   221,   221,   222,   222,   222,   222,   222,   222,   223,   223,
   223,   224,   224,   225,   226,   226,   227,   228,   228,   229,
   229,   229,   229,   230,   230,   231,   231,   232,   231,   234,
   233,   235,   236,   237,   235,   235,   235,   235,   235,   235,
   235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
   235,   235,   235,   235,   235,   238,   238,   238,   238,   238,
   238,   239,   238,   238,   238,   240,   238,   238,   238,   238,
   238,   238,   238,   238,   241,   241,   241,   242,   242,   243,
   243,   243,   243,   244,   244,   245,   245,   246,   246,   247,
   247,   248,   248,   249,   249,   249,   250,   250,   251,   251,
   252,   252,   252,   253,   253,   254,   254,   255,   255,   255,
   256,   256,   257,   257,   258,   258,   258,   258,   258,   258,
   259,   259,   260,   260,   261,   261,   262,   262,   262,   262,
   262,   263,   263,   264,   264,   265,   265,   265,   265,   265,
   265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
   266,   266,   267,   267,   268,   268,   269,   269,   269,   269,
   269,   269,   269,   270,   270,   271,   271,   272,   272,   272,
   272,   272,   272,   273,   274,   275,   273,   276,   276,   277,
   277,   278,   278,   279,   279,   280,   280,   281,   281,   282,
   282,   283,   283,   283,   284,   284,   285,   285,   286,   286,
   286,   286,   286,   287,   287,   288,   288,   289,   289,   290,
   290,   290,   290,   290,   291,   291,   292,   292,   293,   293,
   293,   293,   294,   293,   293,   295,   293,   293,   293,   293,
   293,   296,   296,   297,   297,   298,   298,   298,   298,   299,
   299,   300,   300,   300,   301,   301,   302,   302,   302,   302,
   303,   303,   305,   306,   304,   304,   304,   304,   307,   307,
   308,   309,   310,   308,   311,   311,   311,   311,   311,   311,
   311,   312,   312,   313,   313,   314,   314,   315,   315,   316,
   316,   316,   317,   316,   318,   318,   319,   319,   320,   320,
   320,   320,   320,   320,   320,   320,   321,   321,   322,   322,
   323,   323,   324,   324,   325,   325,   326,   326,   326,   326,
   326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
   326,   326,   326,   327,   326,   328,   326,   326,   329,   329,
   330,   330,   331,   331,   331,   332,   332,   333,   333,   333,
   333,   333,   334,   334,   335,   335,   335,   335,   335,   335,
   336,   336,   337,   337,   337,   337,   337,   338,   338,   339,
   339,   339,   339,   339,   339,   339,   339,   340,   340,   341,
   341,   342,   342,   342,   342,   342,   342,   343,   343,   344,
   344,   345,   345,   346,   346,   346,   346,   346,   347,   347,
   348,   348,   349,   349,   349,   350,   350,   350,   351,   351,
   353,   352,   352,   354,   352,   352,   352,   355,   355,   356,
   356,   357,   357,   358,   358,   358,   358,   358,   360,   359,
   361,   362,   361,   363,   363,   363,   364,   364,   365,   365,
   365,   365,   366,   366,   366,   367,   366,   366,   366,   366,
   366,   368,   368,   369,   369,   369,   369,   369,   369,   369,
   369,   369,   369,   369,   369,   369,   369,   369,   369,   370,
   370,   371,   371,   372,   372,   373,   373,   373,   374,   374,
   374,   374,   375,   375,   376,   376,   376,   376,   376,   377,
   377,   377,   377,   378,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   378,   379,   379,   379,   379,   379,   379,
   379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
   379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
   379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
   379,   379,   379,   379,   380,   380,   380,   380,   380,   380,
   380,   380,   381,   381
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
    11,    13,    15,     0,     7,     0,     7,     7,     1,     1,
     0,     2,     3,     3,     2,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     4,     4,     0,     4,     0,
     2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     4,     4,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     5,     5,     0,     2,
     0,     6,     3,     0,     4,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     3,     3,     3,     4,     0,     8,
     0,     0,     3,     7,     8,    18,     2,     4,     1,     1,
     1,     1,     2,    24,     2,     0,    14,     8,    20,    29,
    38,     0,     2,     3,     4,     4,     3,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     3,     1,     3,     0,     1,     3,     1,     1,
     3,     3,     3,     6,     4,     4,     6,     9,     5,     0,
     3,     5,     5,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     6,     4,     4,     4,     4,     4,     4,     6,
     6,     6,     5,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    23,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,     0,   604,   603,    18,   530,    25,
   171,   134,   147,   201,    68,   254,   324,   428,     0,   458,
    20,    21,    22,     0,     0,    24,   596,   595,   602,     0,
   597,   598,   599,   600,   601,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   555,    62,    26,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   526,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   557,   558,
     0,   520,   519,     0,   525,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   594,     0,    63,     0,     6,     0,   175,     8,   172,   174,
   136,     9,   149,    10,   205,    11,   202,   204,     0,     0,
     7,    69,    73,   258,    12,   255,   257,   328,    13,   325,
   327,   432,    14,   429,   431,   469,   462,    15,   459,   461,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   556,     0,   571,
   572,   570,   569,   565,   566,   567,   568,   560,   559,   561,
   562,   563,   564,   529,   531,     0,     0,    27,    33,     0,
     0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
   481,   482,   479,   480,   477,     0,     0,     0,     0,     0,
     0,     0,     0,   492,     0,   573,   574,   575,   576,   577,
   578,   579,   580,   581,   582,     0,   584,   585,   586,   587,
   588,   589,     0,     0,     0,     0,   527,   522,   521,     0,
   523,     0,     0,     0,     0,     0,     0,    59,     0,     0,
     0,   173,   176,     0,     0,   135,   137,     0,    78,     0,
   148,   150,     0,     0,     0,     0,     0,     0,   203,   206,
    65,    40,     0,     0,    38,     0,     0,    62,     0,     0,
     0,     0,   256,   259,     0,     0,   333,   326,   329,     0,
     0,     0,     0,   430,   433,   471,     0,     0,     0,     0,
     0,   460,   463,     0,   483,    78,   485,     0,     0,     0,
     0,     0,     0,   492,     0,     0,     0,     0,     0,     0,
   593,   533,   532,   602,     0,     0,     0,    30,     0,    62,
     0,   182,     0,     0,   140,     0,   154,     0,     0,     0,
    80,     0,   245,     0,     0,   214,   228,   238,     0,    39,
    53,    56,    50,    37,    48,    78,     0,    34,     0,     0,
     0,     0,   265,   284,     0,   335,     0,     0,   439,    65,
     0,   472,     0,   471,     0,     0,     0,   478,     0,     0,
     0,     0,     0,     0,     0,     0,   493,     0,     0,   583,
   590,   591,   592,     0,     0,    28,     0,    67,     0,    41,
     0,     0,     0,   182,     0,   179,   177,     0,     0,     0,
   138,     0,     0,     0,   152,    79,     0,   151,     0,   209,
   207,     0,     0,     0,     0,    66,     0,     0,    62,     0,
    78,     0,    70,    75,   262,   260,     0,     0,     0,   330,
     0,     0,   355,   434,     0,     0,     0,   437,   470,     0,
   464,   472,   465,   467,   466,    78,     0,     0,     0,     0,
     0,   474,   516,     0,     0,     0,     0,   516,     0,   510,
   510,   510,   498,     0,     0,     0,     0,   528,   524,    64,
     0,    29,    32,    60,     0,   184,   180,   178,   142,   139,
   156,   153,     0,     0,   602,   534,   535,   536,   537,   538,
   539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
   549,   550,   551,   552,   553,     0,   116,     0,     0,   112,
     0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
   110,     0,   107,   247,   213,   208,   216,   210,   230,   211,
   240,   212,    54,     0,    58,     0,    49,     0,    71,     0,
    43,    35,    42,   261,   267,   263,     0,     0,     0,     0,
   264,   285,   331,   337,   332,     0,   435,   441,   438,   436,
   473,   468,     0,     0,     0,     0,     0,     0,     0,   509,
   517,   507,     0,     0,   494,   497,   505,   506,   500,   501,
   504,   502,   503,   499,   508,     0,   475,    31,     0,   181,
     0,     0,     0,    76,    77,   109,     0,     0,     0,     0,
     0,     0,   104,   103,   105,   124,   122,   119,   121,   120,
     0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   111,   130,     0,     0,     0,     0,     0,    57,     0,
    51,    72,    62,     0,   301,   301,   309,   290,     0,     0,
    78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   374,   376,     0,   334,   356,     0,    78,     0,     0,
     0,     0,     0,     0,   495,   496,   511,     0,     0,     0,
     0,     0,     0,    78,    78,    78,    78,     0,     0,     0,
    78,   183,   185,     0,     0,   141,   143,     0,     0,     0,
   155,   157,     0,    80,     0,     0,    80,     0,     0,   323,
   106,     0,   101,   102,    99,    98,   100,    94,    95,    96,
    97,    90,    91,    86,    89,    92,    87,    93,   123,   126,
     0,   128,     0,     0,   108,     0,     0,     0,     0,     0,
   246,   248,     0,     0,     0,     0,     0,   215,   217,     0,
     0,   229,   231,     0,     0,     0,   239,   241,     0,    52,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   266,   276,   268,   315,   315,   315,     0,     0,     0,     0,
     0,   516,     0,     0,     0,   336,   338,     0,     0,    78,
     0,     0,     0,    78,     0,     0,   386,     0,   393,     0,
   401,   408,     0,     0,     0,   365,     0,     0,     0,   440,
   442,     0,     0,     0,     0,     0,     0,   518,     0,    61,
     0,     0,     0,     0,    78,     0,    78,     0,     0,     0,
     0,     0,     0,    78,     0,     0,     0,   130,   161,     0,
     0,   114,     0,   115,     0,     0,    80,   322,     0,   125,
   127,     0,     0,     0,     0,     0,     0,     0,    47,     0,
    65,     0,     0,   224,     0,     0,     0,   234,   236,     0,
     0,     0,     0,    55,    36,     0,     0,     0,     0,     0,
     0,     0,     0,    65,     0,     0,     0,    80,     0,     0,
   316,   317,   318,   319,   320,   321,     0,   286,   302,     0,
   287,     0,   288,   310,     0,     0,     0,   295,   289,   291,
     0,     0,    65,   349,     0,     0,     0,     0,   351,   353,
     0,     0,   357,     0,     0,   358,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   512,   512,
   446,     0,     0,     0,     0,   488,     0,     0,     0,     0,
   187,   188,   193,   194,     0,   197,     0,   196,   190,   189,
    62,   191,   186,     0,   195,   145,   144,     0,     0,   158,
   159,     0,     0,   113,     0,    84,   129,     0,     0,   131,
   249,     0,   251,   252,     0,   218,   219,     0,     0,     0,
   222,   223,   232,    62,   233,   243,   242,   244,    65,    45,
   280,   279,   272,   270,   271,   269,   273,   275,   281,   278,
     0,     0,     0,     0,   303,     0,   312,     0,     0,     0,
   340,   339,   347,    62,   341,   342,   345,   346,    62,   343,
   344,     0,     0,    78,     0,     0,     0,    78,     0,    78,
     0,     0,    78,   359,   387,     0,     0,    78,     0,     0,
     0,     0,   360,   394,     0,     0,     0,     0,    78,     0,
   361,   402,     0,     0,     0,     0,     0,     0,     0,     0,
   362,   409,    78,   380,    78,   381,   379,   381,     0,   444,
   443,   516,     0,     0,     0,     0,     0,    78,    78,     0,
    78,   146,   163,   160,     0,    88,   118,     0,     0,     0,
     0,   253,   220,     0,   221,   235,     0,    46,   282,     0,
   307,   308,   306,    80,   311,    80,   292,   293,     0,     0,
     0,     0,   294,   296,   348,     0,   352,     0,   363,   364,
     0,     0,   355,     0,     0,   355,     0,     0,     0,     0,
     0,   355,     0,     0,     0,     0,     0,     0,     0,   355,
     0,     0,     0,     0,     0,   355,   355,     0,     0,   418,
     0,     0,   514,     0,     0,     0,     0,     0,   445,   486,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   117,    85,     0,     0,   250,     0,   237,     0,     0,   277,
   304,   313,     0,     0,     0,     0,   350,   354,     0,   516,
     0,   516,     0,     0,   390,   388,   389,   391,    78,     0,
   397,   395,   396,   398,   399,    78,   405,     0,   403,   404,
   406,   412,   414,     0,     0,   410,   411,     0,   413,     0,
   513,    78,     0,   516,   382,     0,   449,   449,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   162,   164,   133,   132,     0,     0,
   274,     0,     0,   297,   298,   299,   300,   368,     0,   366,
     0,   369,   392,     0,   400,     0,   407,   416,   417,   420,
   415,   378,   515,   375,     0,   516,   385,   377,   315,   315,
   516,     0,     0,     0,     0,   492,   200,   199,   192,   198,
     0,     0,     0,     0,     0,     0,     0,   283,    80,     0,
     0,     0,     0,    78,     0,     0,   383,   384,     0,     0,
     0,   454,   448,     0,   450,   447,     0,     0,     0,     0,
     0,     0,   165,   166,   167,   168,   169,   170,     0,     0,
     0,   370,   355,     0,     0,     0,     0,     0,    78,     0,
     0,     0,   419,   421,     0,     0,     0,     0,   451,   487,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   456,   457,
   453,     0,    80,     0,     0,     0,     0,   476,   225,   305,
   314,   367,   371,   355,     0,   422,   425,   426,   423,   424,
   427,   455,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   372,   355,   452,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
   373,     0,   489,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    65,     0,     0,     0,     0,   484,     0,
     0,     0,     0,     0,   227,     0,     0,     0,     0,     0,
     0,   490,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   491,     0,     0,     0
};

static const short yydefgoto[] = {  1523,
     1,     2,     3,    20,    21,    22,    84,   146,   228,   439,
   315,   472,   693,   316,   317,   592,   811,   910,   394,   469,
   395,   370,   144,   286,   390,   287,    89,   162,   318,   380,
   381,   456,   457,   569,   762,  1148,   570,   651,   648,   682,
   783,   785,    86,   231,   297,   450,   642,   747,    87,   232,
   302,   452,   643,   752,  1019,  1230,  1306,    85,   149,   230,
   293,   445,   641,   743,    88,   157,   233,   310,   463,   685,
   799,  1040,  1458,  1486,   464,   686,   803,   920,  1044,   465,
   687,   808,   459,   684,   792,    90,   166,   236,   324,   478,
   694,   823,  1159,   938,  1239,   479,   602,   827,   960,  1070,
  1174,   824,   949,  1164,  1312,   826,   954,  1166,  1313,   950,
   571,    91,   170,   237,   329,   407,   482,   699,   837,   965,
  1074,   971,  1079,   606,   716,   854,   855,  1126,  1215,  1285,
   982,  1095,   984,  1104,   986,  1112,   987,  1122,  1278,  1366,
  1404,    92,   174,   238,   335,   486,   717,   861,  1129,  1339,
  1375,  1433,  1408,    94,   179,   240,   343,    23,   239,   412,
   490,    46,   182,   246,   254,  1289,   353,   427,   631,  1127,
  1214,   620,   121,   122,    24,    83,   572,   621,    82,    28
};

static const short yypact[] = {-32768,
-32768,    71,   430,   -69,   272,   -39,   -32,   -28,   -19,    -7,
     4,    58,   118,   134,   150,    15,   172,   371,   375,-32768,
-32768,   267,-32768,-32768,  1210,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   262,-32768,
-32768,-32768,-32768,   208,   217,-32768,-32768,-32768,-32768,   407,
-32768,-32768,-32768,-32768,-32768,   221,   225,   230,   234,   239,
   245,   247,   253,   260,   288,   299,   303,   314,   318,   320,
   333,   344,   358,   383,   390,   401,  1620,  1620,  1620,  1620,
   926,-32768,   235,   180,    22,   244,   264,    25,    23,    51,
    88,   115,   471,   127,   538,   538,-32768,  1620,  1620,  1620,
  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,
  1620,  1620,  1620,  1620,  1620,  1620,  1620,   545,   270,   270,
   -27,-32768,   818,  2198,-32768,  1620,  1620,  1620,  1620,  1620,
  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,
-32768,   550,-32768,   594,-32768,   324,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -47,   412,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   341,   740,   458,  3165,  3192,  3219,  3246,  3273,  3300,  3327,
  3354,  3381,  3408,  2258,  3435,  3462,  3489,  3516,  3543,  3570,
  2280,  2302,  2324,   420,   602,  1620,  1277,-32768,  2074,  4427,
  4427,  4443,  4443,   560,   560,   560,   560,   167,   167,   270,
   270,   270,   270,-32768,   451,    -1,   433,-32768,-32768,   -14,
   148,   202,   285,    16,-32768,   281,   273,   372,   437,   406,
-32768,-32768,-32768,-32768,-32768,   630,   135,    93,   444,   452,
   484,   488,   499,-32768,   135,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1620,-32768,-32768,-32768,-32768,
-32768,-32768,  1620,  1620,  1620,   691,-32768,-32768,   818,  1620,
  4390,  1620,  1484,  1154,  1397,   532,   534,-32768,    54,   703,
   718,-32768,-32768,   535,   733,-32768,-32768,   547,    62,   748,
-32768,-32768,   548,   756,   757,   572,   581,   582,-32768,-32768,
  -144,-32768,    20,   600,-32768,   580,   583,   305,   775,   776,
   589,   590,-32768,-32768,   780,   593,-32768,-32768,-32768,   784,
   597,   787,   789,-32768,-32768,-32768,   791,   604,   802,   272,
   805,-32768,-32768,   616,-32768,    62,-32768,   621,  1620,   629,
   634,   636,   308,   664,  3597,  3624,  3651,  3678,   638,  3705,
  4390,-32768,  4390,   640,   823,  1620,  3840,-32768,   141,   315,
   643,-32768,   824,     8,-32768,   830,-32768,   644,   648,   838,
-32768,   839,-32768,   845,    30,-32768,-32768,-32768,   657,-32768,
   846,   660,-32768,-32768,-32768,    62,   726,-32768,   890,   891,
   892,    31,-32768,-32768,    60,-32768,   707,    63,-32768,   735,
   919,   737,   925,-32768,   927,   930,   932,-32768,   744,  1620,
  2346,  1620,  1620,  1620,   935,  2170,-32768,   938,   322,-32768,
-32768,-32768,-32768,   937,  1620,-32768,  3865,-32768,   141,-32768,
   941,   943,   944,-32768,   276,-32768,-32768,   760,   946,   338,
-32768,   348,  1620,   978,-32768,-32768,   942,-32768,   355,-32768,
-32768,   977,   362,   367,   369,-32768,    10,  1518,   -22,   979,
    62,    21,-32768,-32768,-32768,-32768,   980,   376,   442,-32768,
   986,   378,-32768,-32768,   998,   380,   999,-32768,-32768,   267,
-32768,   813,-32768,-32768,-32768,    62,  2368,  1620,  2390,  2412,
  2434,-32768,  1586,  1006,   153,  1620,  1620,  1586,  1620,  1009,
-32768,-32768,-32768,  1620,  1620,   792,  1008,-32768,  4390,-32768,
  1010,-32768,-32768,   825,   408,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  3732,   827,    76,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   829,-32768,   833,   834,-32768,
  1020,   942,   942,   942,  1027,    39,  1026,   942,  4412,   841,
   848,   848,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1620,-32768,  3890,-32768,    38,-32768,  1032,
-32768,-32768,-32768,-32768,-32768,-32768,   859,   860,   868,   870,
-32768,-32768,-32768,-32768,-32768,   197,-32768,-32768,-32768,-32768,
-32768,-32768,   867,  1620,  2456,  1620,  1620,  1620,  1620,-32768,
  4390,-32768,   272,   272,-32768,  4390,  4390,-32768,  4390,-32768,
  1035,  1035,  1035,  4390,  4390,  1620,-32768,-32768,  1620,-32768,
  2239,    -3,    85,-32768,-32768,-32768,   872,   873,   872,   942,
   875,   896,   900,   900,   900,-32768,-32768,-32768,-32768,-32768,
    52,  2174,-32768,   942,   942,   942,   942,   942,   942,   942,
   942,   942,   942,   942,   942,   942,   942,   942,   942,  1076,
   844,-32768,   893,   736,   555,   -34,   280,  3759,-32768,   345,
-32768,-32768,   416,   516,-32768,-32768,-32768,-32768,  2233,    14,
    59,   887,   899,   906,   911,   912,   188,   199,   898,   920,
   924,-32768,-32768,  1107,-32768,-32768,    80,    62,  2478,  1620,
  2500,  2522,  2544,     2,-32768,-32768,-32768,  2566,  3915,   135,
   135,   135,   135,   166,   175,    62,    62,   922,  1115,  1116,
   184,-32768,-32768,   128,  1117,-32768,-32768,   934,  1118,  1123,
-32768,-32768,   936,-32768,   940,  2228,-32768,   950,   945,-32768,
-32768,   942,  1149,  1149,  4459,  4459,  4459,  1475,  1475,  1475,
  1475,   397,   397,    75,    75,    75,   900,   900,-32768,-32768,
   959,  4412,   419,   889,-32768,  1125,   129,   129,  1141,  1156,
-32768,-32768,  1157,  1159,  1160,   135,   135,-32768,-32768,  1187,
    90,-32768,-32768,  1188,  1189,  1190,-32768,-32768,  1151,-32768,
  1011,   111,  1197,  1199,    91,  1201,  1203,  1207,  1208,   135,
-32768,-32768,-32768,   525,  1283,   704,    79,  1212,  1213,    92,
   272,  1586,   272,   112,  1214,-32768,-32768,  1205,  1215,    62,
  1245,  1253,  1259,    62,  1260,  1261,-32768,  1620,-32768,  1620,
-32768,-32768,   135,  1074,  1075,-32768,  1078,  1267,  1268,-32768,
-32768,  1080,  1620,  3940,  1620,  1620,  1620,-32768,  1620,-32768,
  1276,  1278,  1279,  1280,    62,  1281,    62,  1307,  1308,  1309,
  1318,  1322,  1323,    62,  1334,  1335,  1341,   893,-32768,  1342,
  1343,-32768,  1087,-32768,   942,  1155,-32768,-32768,  2097,-32768,
-32768,   942,  1158,  1164,     9,  1357,  1286,  1358,-32768,  1365,
   735,  1369,    87,  1185,  1370,  1383,  1384,-32768,-32768,  1387,
  1388,  1389,  1391,-32768,-32768,  1399,    20,  1398,  1400,  1427,
  1428,  1429,  1431,   735,  1434,  1435,  1436,-32768,  1401,  1439,
-32768,-32768,-32768,-32768,-32768,-32768,   135,-32768,-32768,  1250,
-32768,   135,-32768,-32768,  1252,  1443,  1444,-32768,-32768,-32768,
  1445,  1448,   735,-32768,  1449,  1450,  1451,  1452,-32768,-32768,
  1454,  1458,-32768,  1254,  1271,-32768,  1272,  1273,  1275,  1282,
  1284,   576,  2588,  1015,  2610,   336,   623,  1287,   122,   122,
-32768,  1461,  1466,  1292,  3965,-32768,  3990,  4015,  4040,  4065,
-32768,-32768,-32768,-32768,  1295,-32768,  1297,-32768,-32768,-32768,
  1327,-32768,-32768,  1328,-32768,-32768,-32768,  1467,   479,-32768,
-32768,   135,  3144,-32768,  1330,-32768,  4412,  1522,   135,-32768,
-32768,  1523,-32768,-32768,  1473,-32768,-32768,  1558,  1442,  1559,
-32768,-32768,-32768,    69,-32768,-32768,-32768,-32768,   735,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1376,  1566,  1567,  1570,-32768,  1571,-32768,  1572,  1574,   278,
-32768,-32768,-32768,    73,-32768,-32768,-32768,-32768,   179,-32768,
-32768,  1575,  1576,    62,  1579,  1392,  1620,    62,  1394,    62,
  1620,  1620,    62,-32768,-32768,  1620,  1403,    62,  1620,  1620,
  1620,  1620,-32768,-32768,  1620,  1620,  1404,  1620,    62,  1620,
-32768,-32768,  1620,  1587,  1433,  1437,  1620,  1620,  1438,  1620,
-32768,-32768,    62,-32768,    62,-32768,-32768,-32768,    26,-32768,
-32768,  1586,  1470,  1471,  1476,  1485,  1486,    62,    62,  1590,
    62,-32768,-32768,-32768,  1432,-32768,-32768,   942,  1481,  1489,
  1659,-32768,-32768,  1624,-32768,-32768,  1676,-32768,  1492,  1681,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   872,   872,
   872,   135,-32768,-32768,-32768,  1685,-32768,  1686,-32768,-32768,
  1496,  1497,-32768,  2632,  1499,-32768,  1689,  1077,  1184,  1692,
  2654,-32768,  1693,  1385,  1715,  1738,  1760,  2676,  1782,-32768,
  1804,  1696,  1826,  1848,  1704,-32768,-32768,  1870,  1895,-32768,
  1918,  1517,-32768,   196,   478,   489,  1500,  1525,-32768,-32768,
  1620,  1620,  1620,  1620,  1620,  1528,  1529,  1532,  1531,   382,
-32768,  4412,  1534,  1535,-32768,  1712,-32768,  1725,  1726,-32768,
-32768,-32768,  1727,  1729,  1733,  1737,-32768,-32768,  1744,  1586,
   302,  1586,  1745,   563,-32768,-32768,-32768,-32768,    62,   605,
-32768,-32768,-32768,-32768,-32768,    62,-32768,  1555,-32768,-32768,
-32768,-32768,-32768,  1589,  1622,-32768,-32768,   519,-32768,  1747,
-32768,    62,  1750,   635,-32768,  1751,-32768,-32768,  1551,  2698,
  2720,  2742,  2764,  4090,  1752,  1753,  1754,  1755,  1758,  1620,
  1620,  1620,  1620,  1620,-32768,-32768,-32768,-32768,  1680,  1577,
-32768,  1573,  1580,-32768,-32768,-32768,-32768,-32768,  1578,  1650,
  1581,-32768,-32768,  1583,-32768,  1584,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   272,  1586,-32768,-32768,   949,   958,
  1586,  1620,  1620,  1620,  1620,-32768,-32768,-32768,-32768,-32768,
  1764,  1940,  1962,  1984,  2006,  2028,  1767,-32768,-32768,   872,
  1769,  1592,  1620,    62,  1620,   298,-32768,-32768,  1777,  1781,
  1785,-32768,-32768,  1596,-32768,-32768,  1593,  2786,  2808,  2830,
  2852,   518,-32768,-32768,-32768,-32768,-32768,-32768,  1600,  1601,
  1605,-32768,-32768,  3786,  1606,  2874,  1800,  1620,    62,  1801,
   135,  1803,-32768,-32768,  1805,  1807,  1808,   135,-32768,-32768,
  1620,  1620,  1620,  1620,  1810,  1812,  1813,  1817,  1679,  1821,
  1639,  1620,  1827,  2050,  1829,  1830,  1832,  1833,-32768,-32768,
-32768,  1835,-32768,  4115,  4140,  4165,  4190,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  3813,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1647,  1653,  1654,  1656,  1657,  1806,  1710,  1658,
  1852,  1620,  1670,  1620,  1620,   135,-32768,-32768,-32768,  2896,
  1620,  2918,  2940,  1857,  1741,  1620,  4215,  1620,  1620,-32768,
-32768,  2962,-32768,  2984,  3006,  1762,  1620,  1620,  1620,  1862,
  4240,  4265,  4290,   735,  1674,  1677,  1687,  1863,-32768,  1688,
  1620,  1684,  1620,  3028,-32768,  3050,  1620,  1620,  3072,  4315,
  1620,-32768,  4340,  1701,  1697,  1620,  3094,  1620,  3116,  1620,
  4365,-32768,  1874,  1879,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -239,-32768,-32768,  -245,   -71,-32768,-32768,  1070,  -463,-32768,
  -527,-32768,  -307,  -373,  -405,-32768,-32768,-32768,-32768,  -330,
-32768,  -740,-32768,  -375,-32768,-32768,-32768,-32768,-32768,  1324,
-32768,  1025,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1459,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1222,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -818,
  -528,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1055,-32768,-32768,-32768,   929,   798,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   639,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1526,
-32768,  1472,  1845,-32768,-32768,-32768,  -348,-32768,   220,-32768,
-32768,  -486,  -580,  1742,  1059,-32768,-32768,   -25,  -439,  -336
};


#define	YYLAST		4649


static const short yytable[] = {    81,
   449,   345,   347,   416,   487,   429,   646,   955,   593,   354,
   400,   462,   583,   893,   447,   419,   896,   573,   838,    39,
   311,   628,   391,   391,   392,   392,     4,   159,   477,     4,
  1217,   481,     6,     6,   485,     6,   461,   476,   724,   800,
   391,   657,   392,   658,   365,   744,   801,   289,   389,   290,
   -41,   119,   120,   123,   124,     4,   759,   745,   371,   291,
   691,     6,   443,   591,   312,   470,   480,   160,   378,   484,
    -2,   378,   184,   185,   186,   187,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   202,   203,     4,  1037,   918,   930,   963,   311,     6,    25,
   209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   909,   969,  1218,   753,     4,
   755,    25,   573,   573,   573,     6,  1124,  1251,   573,   441,
  1254,     4,   311,   440,   857,   379,  1260,     6,   379,   311,
   590,   312,   956,   858,  1268,   440,   748,   234,   749,   750,
  1274,  1275,   659,   859,   926,    29,  1025,    26,    27,   802,
    30,   588,   810,   957,    31,   613,   205,   284,   625,   206,
   886,   587,   931,    32,   143,   378,   312,   312,    41,   292,
   279,   281,   932,   312,   378,    33,   653,   654,   655,   312,
   746,   285,   662,   378,   660,   868,    34,  1061,   206,   521,
   448,   700,  1030,   905,   584,   206,   313,    40,   839,   294,
   573,   314,   393,   393,   147,   148,   161,   155,   156,  1219,
   690,   295,   448,   448,   573,   573,   573,   573,   573,   573,
   573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
   355,   573,   379,   164,   165,   760,   372,   356,   357,   358,
    35,   379,   448,   840,   360,   448,   361,   363,    81,   367,
   379,   678,  1156,   298,   679,   143,  1175,   299,   567,   143,
  -554,   958,   959,   860,   756,   300,    26,    27,   751,   448,
   168,   169,   919,   313,   964,   346,   725,   726,   763,   764,
   765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
   775,   776,   777,   778,   970,   782,   700,   172,   173,   701,
    36,   702,   703,   704,  1125,   705,   706,   707,   313,   177,
   178,   708,   573,   421,   709,   313,    37,   710,   226,   623,
   711,   313,   303,   624,     6,  1169,  1170,  1419,   712,   713,
   437,   296,    38,   804,   319,   967,   325,   391,   304,   392,
   137,   138,   139,   805,   320,   806,   140,   141,   305,   306,
   875,  1397,   714,  1398,   307,   227,   308,   321,  1171,   877,
   841,   322,  1177,   145,  1399,   143,   326,    42,   884,  1172,
   847,    43,   848,   327,  1400,   812,   899,   862,  1459,  1281,
   715,   849,  1282,   850,   497,   301,   499,   500,   501,  1401,
    93,  1106,    95,   876,   878,   879,   880,    44,    45,   519,
   885,    96,  1475,    97,   701,    98,   702,   703,   704,    99,
   705,   706,   707,  1241,   100,  1242,   708,   533,   101,   709,
   142,   143,   710,   102,     4,   711,   151,   152,     5,   103,
     6,   104,   586,   712,   713,   330,  1107,   105,  1299,  1300,
  1301,  1302,  1303,  1304,   106,   573,   153,   154,   331,   140,
   141,  1402,   573,  1050,  1108,  1109,   328,   714,   526,   527,
     7,  1173,   615,   807,   323,   176,   332,     8,   309,   337,
   626,   627,   107,   629,   871,   872,   873,   874,   634,   635,
     9,  1403,    10,   108,   966,  1320,   968,   109,   887,  1110,
   399,   143,    11,   425,   426,  1035,    12,   333,   110,   975,
   442,   143,   111,   979,   112,    13,   338,   517,   426,  1023,
  1374,  1374,   241,   242,   243,   244,  1027,   113,  1057,  1111,
   529,   530,    14,   597,   598,   599,   600,   245,   114,  1038,
   531,   532,   181,   339,  1005,   340,  1007,   574,   575,   204,
   915,   916,   115,  1014,   577,   578,   224,  1073,   688,   579,
   580,   581,   582,   341,    15,   334,    16,   700,   595,   596,
   604,   605,   608,   609,   937,  1305,   813,   116,   814,   815,
   675,   676,   677,   678,   117,   939,   679,   940,   719,   816,
   721,   722,   723,   123,    17,   118,    18,    19,   225,   342,
   526,   640,   255,   817,   818,   819,   235,   988,   277,   700,
   728,   -44,   143,   729,   901,   902,   276,   820,  1390,   283,
   941,   942,   943,   944,   945,   946,   947,   288,   793,   336,
   794,   795,   796,   797,   344,   601,   348,    47,    48,    49,
  1243,  1244,  1245,  1158,   349,  1220,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,  1143,  1144,  1283,  1284,   701,   350,   702,   703,   704,
   351,   705,   706,   707,  1286,  1284,  1089,   708,  1113,  1090,
   709,   352,  1453,   710,   864,   359,   711,  1091,  1092,  1093,
   368,  1064,   369,  1140,   712,   713,  1066,   373,   573,   821,
   822,  1330,  1331,  1415,   426,   907,   908,   701,   948,   702,
   703,   704,   374,   705,   706,   707,  1114,   375,   714,   708,
   632,   633,   709,  1115,  1116,   710,  1157,   376,   711,   377,
   383,   135,   136,   137,   138,   139,   712,   713,   798,   140,
   141,  1117,   382,  1181,  1118,  1119,  1323,  1185,   123,  1187,
   384,   385,  1190,  1319,   386,  1321,  1176,  1193,   396,  1094,
   714,  1178,  1232,   387,   388,   397,  1145,   398,  1202,   401,
   402,   403,   404,  1150,   405,   406,  1120,  1335,   408,   409,
  1336,   410,  1212,   411,  1213,   413,   414,  1337,  1325,   941,
   942,   943,   944,   945,   946,   952,   415,  1226,  1227,   417,
  1229,   786,   418,   420,   787,   428,  1121,    77,   788,   789,
   790,   422,   983,    78,   985,   207,   423,   619,   424,   436,
   446,  1391,    80,   434,   -41,   444,   451,   995,   453,   997,
   998,   999,   454,  1000,   455,   458,    47,    48,   535,  1368,
   466,   460,   468,   467,  1377,    51,    52,    53,    54,    55,
   536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
   546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
   556,   557,   558,   559,   247,   248,   249,   250,   251,   252,
   253,    47,    48,    49,   471,   474,   473,   953,   475,   483,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   488,  1246,   389,  1324,   791,
   489,   491,   125,   493,   903,  1326,   494,   904,   495,   560,
   496,   502,   516,   518,    47,    48,   535,   522,   524,   523,
   366,  1333,   528,    51,    52,    53,    54,    55,   536,   537,
   538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
   548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
   558,   559,   534,   576,   636,   589,   594,   126,   127,   128,
   129,   130,   603,   131,   132,   133,   134,  1382,  1367,   135,
   136,   137,   138,   139,   607,   610,   612,   140,   141,  1369,
   622,  1370,  1371,   630,   637,  1416,   638,   639,  1369,   561,
  1370,  1371,   645,   647,   652,   562,   563,   649,   650,   656,
   661,   680,   564,  1395,   565,   566,   567,   560,   692,   780,
   727,   568,   681,   781,   941,   942,   943,   944,   945,   946,
  1372,   695,   696,   941,   942,   943,   944,   945,   946,  1372,
   697,  1184,   698,   718,   567,  1188,  1189,   754,  1425,   757,
  1191,    77,   758,  1194,  1195,  1196,  1197,    78,   779,  1198,
  1199,   842,  1201,  1256,  1203,   784,    80,  1204,  1498,   679,
   851,  1208,  1209,   843,  1211,   126,   127,   128,   129,   130,
   844,   131,   132,   133,   134,   845,   846,   135,   136,   137,
   138,   139,   852,   856,   881,   140,   141,   561,   853,   882,
   883,   888,   890,   562,   563,  1097,   889,   891,  1098,   906,
   564,   892,   565,   566,   567,   894,  1099,  1100,   898,   568,
  1101,  1102,  1373,   150,   897,   909,   158,   163,   167,   171,
   175,  1376,   180,   924,   900,  1427,    47,    48,   364,    50,
   911,   912,  1432,   913,   914,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
  1257,   917,   921,   922,   923,  1290,  1291,  1292,  1293,  1294,
    76,   928,   312,   929,   229,   933,   925,   934,  1103,   935,
   936,   973,    47,    48,    49,    50,   961,   962,   972,   974,
  1474,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   126,   127,   128,   129,
   130,   976,   131,   132,   133,   134,    76,   977,   135,   136,
   137,   138,   139,   978,   980,   981,   140,   141,   989,   990,
   991,   992,   993,   994,  1352,  1353,  1354,  1355,  1356,    47,
    48,    49,  1001,  1022,  1002,  1003,  1004,  1006,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1008,  1009,  1010,  1378,  1379,  1380,  1381,
  1011,   666,   667,   668,   669,   670,   671,   672,  1012,  1013,
   673,   674,   675,   676,   677,   678,    77,  1394,   679,  1396,
  1015,  1016,    78,   939,   313,   940,    79,  1017,  1020,  1021,
  1024,    80,  1028,   126,   127,   128,   129,   130,  1029,   131,
   132,   133,   134,  1031,  1033,   135,   136,   137,   138,   139,
  1032,  1034,  1424,   140,   141,  1036,  1041,  1039,   941,   942,
   943,   944,   945,   946,   947,  1434,  1435,  1436,  1437,  1042,
  1043,  1262,    77,  1045,  1046,  1047,  1445,  1048,    78,    47,
    48,    49,    79,  1049,  1051,  1062,  1052,    80,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1053,  1054,  1055,  1470,  1056,  1472,  1473,
  1058,  1059,  1060,  1063,  1065,  1477,  1067,  1068,  1069,  1082,
  1482,  1071,  1484,  1485,  1072,  1075,  1076,  1077,  1078,    77,
  1080,  1491,  1492,  1493,  1081,    78,  1083,  1130,  1084,  1085,
  1086,   280,  1131,  1142,    80,  1504,   951,  1506,  1087,  1152,
  1088,  1509,  1510,  1123,  1132,  1513,    47,    48,    49,   362,
  1517,  1138,  1519,  1139,  1521,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    47,    48,    49,   143,  1141,  1147,  1149,  1151,  1154,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,   126,   127,   128,   129,   130,   700,
   131,   132,   133,   134,  1153,  1155,   135,   136,   137,   138,
   139,  1160,  1161,  1162,   140,   141,  1163,  1165,  1167,    77,
  1168,  1179,  1180,  1182,  1183,    78,  1186,   366,    47,    48,
    49,  1205,  1228,   700,    80,  1192,  1200,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    47,    48,    49,  1206,   700,  1231,  1236,  1207,
  1210,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   673,   674,   675,   676,
   677,   678,  1221,  1222,   679,  1235,    77,   701,  1223,   702,
   703,   704,    78,   705,   706,   707,  1233,  1224,  1225,   708,
  1237,    80,   709,   700,  1234,   710,  1238,  1240,   711,  1247,
  1248,  1249,  1287,  1250,  1253,  1255,   712,   713,  1258,  1261,
    77,   701,  1270,   702,   703,   704,    78,   705,   706,   707,
  1273,   585,  1280,   708,   700,    80,   709,  1288,  1309,   710,
   714,  1263,   711,  1295,  1296,  1297,  1298,  1307,  1308,  1310,
   712,   713,  1311,  1314,   701,  1315,   702,   703,   704,  1316,
   705,   706,   707,  1317,  1264,   700,   708,  1341,  1327,   709,
  1318,  1322,   710,  1332,   714,   711,  1334,  1338,  1347,  1348,
  1349,  1350,  1351,   712,   713,  1357,  1265,  1362,    77,  1359,
  1383,  1389,  1358,  1361,    78,  1392,  1360,  1363,   619,  1364,
  1365,  1405,  1328,    80,  1393,  1406,  1410,   714,  1267,  1407,
  1409,   701,   448,   702,   703,   704,  1417,   705,   706,   707,
  1418,  1421,    77,   708,  1423,  1426,   709,  1428,    78,   710,
  1269,  1429,   711,  1430,  1431,  1329,  1438,    80,  1439,  1440,
   712,   713,   701,  1441,   702,   703,   704,  1443,   705,   706,
   707,  1444,  1271,  1446,   708,  1448,  1449,   709,  1450,  1451,
   710,  1452,  1461,   711,   714,  1462,  1466,  1463,  1464,  1465,
  1468,   712,   713,   701,  1272,   702,   703,   704,  1469,   705,
   706,   707,  1471,  1480,  1490,   708,  1494,  1499,   709,  1502,
  1500,   710,  1442,  1524,   711,   714,  1276,  1505,  1525,  1501,
  1503,   927,   712,   713,   126,   127,   128,   129,   130,  1516,
   131,   132,   133,   134,  1515,   683,   135,   136,   137,   138,
   139,  1277,   525,  1467,   140,   141,   714,   126,   127,   128,
   129,   130,  1018,   131,   132,   133,   134,   825,  1128,   135,
   136,   137,   138,   139,  1279,  1216,  1340,   140,   141,   126,
   127,   128,   129,   130,  1481,   131,   132,   133,   134,   492,
   183,   135,   136,   137,   138,   139,  1384,   278,     0,   140,
   141,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,   611,     0,   135,   136,   137,   138,   139,  1385,     0,
     0,   140,   141,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
  1386,     0,     0,   140,   141,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,  1387,     0,     0,   140,   141,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,  1388,     0,     0,   140,   141,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,  1447,     0,     0,   140,
   141,     0,     0,     0,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,   282,     0,     0,   140,   141,     0,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,  1026,     0,     0,   140,   141,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,   503,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,   663,   664,   665,   666,
   667,   668,   669,   670,   671,   672,     0,     0,   673,   674,
   675,   676,   677,   678,     0,     0,   679,   730,   731,   732,
   733,   734,   735,   736,   737,   738,   828,     0,   739,     0,
     0,     0,   740,     0,     0,     0,   829,     0,     0,     0,
     0,     0,     0,   504,     0,   741,     0,     0,     0,     0,
     0,     0,   505,   506,   507,   508,   509,   510,   511,   512,
   513,   514,   515,     0,     0,     0,     0,   830,   831,   832,
   833,   834,   835,   663,   664,   665,   666,   667,   668,   669,
   670,   671,   672,     0,     0,   673,   674,   675,   676,   677,
   678,     0,     0,   679,     0,     0,     0,   126,   127,   128,
   129,   130,   761,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,     0,     0,     0,   208,   663,   664,   665,
   666,   667,   668,   669,   670,   671,   672,     0,     0,   673,
   674,   675,   676,   677,   678,     0,     0,   679,     0,     0,
     0,     0,     0,     0,   895,     0,   836,   126,   127,   128,
   129,   130,   742,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,   266,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,   273,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,   274,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
   275,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,   498,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,   614,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,   616,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,   617,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
   618,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,   720,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,   863,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,   865,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,   866,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
   867,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,   869,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1096,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1105,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1252,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1259,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1266,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1342,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1343,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1344,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1345,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1411,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1412,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1413,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1414,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1422,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1476,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1478,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1479,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1487,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1488,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1489,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1507,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1508,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1511,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1518,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,     0,  1520,   663,   664,   665,   666,   667,   668,   669,
   670,   671,   672,     0,     0,   673,   674,   675,   676,   677,
   678,     0,     0,   679,   126,   127,   128,   129,   130,  1146,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   256,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   257,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   258,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   259,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   260,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   261,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   262,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   263,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   264,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   265,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   267,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   268,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   269,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   270,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   271,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   272,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   430,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   431,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   432,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   433,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   435,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   644,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   809,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,  1420,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,  1460,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,   438,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,   520,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,   689,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,   870,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,   996,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1133,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1134,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1135,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1136,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1137,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1346,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1454,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1455,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1456,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1457,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1483,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1495,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1496,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1497,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1512,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,  1514,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,  1522,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   663,   664,   665,   666,   667,   668,   669,   670,   671,
   672,     0,     0,   673,   674,   675,   676,   677,   678,   129,
   130,   679,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   669,   670,   671,   672,     0,     0,
   673,   674,   675,   676,   677,   678,     0,     0,   679
};

static const short yycheck[] = {    25,
   374,   247,   248,   340,   410,   354,   535,   826,   472,   255,
   318,   385,     3,   754,     7,   346,   757,   457,     5,     5,
     5,   508,     3,     3,     5,     5,     5,     5,   402,     5,
     5,   405,    11,    11,   408,    11,     7,     7,   619,    74,
     3,     3,     5,     5,   284,    49,    81,    62,   193,    64,
   195,    77,    78,    79,    80,     5,     5,    61,     5,    74,
   588,    11,   370,    43,    49,   396,     7,    45,    10,     7,
     0,    10,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,     5,     7,     5,     5,     5,     5,    11,   169,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,     5,     5,    92,   647,     5,
   649,   169,   562,   563,   564,    11,     5,  1183,   568,   369,
  1186,     5,     5,     5,    55,    77,  1192,    11,    77,     5,
   471,    49,    64,    64,  1200,     5,    62,   195,    64,    65,
  1206,  1207,   114,    74,    44,   195,   897,     5,     6,   194,
   193,   469,   690,    85,   193,   496,   194,   169,   505,   197,
    43,   194,    82,   193,   197,    10,    49,    49,     7,   194,
   206,   207,    92,    49,    10,   193,   562,   563,   564,    49,
   194,   193,   568,    10,   156,   194,   193,   938,   197,   439,
   193,     5,   194,   784,   195,   197,   191,   193,   195,    62,
   650,   196,   193,   193,   193,   194,   194,   193,   194,   194,
   183,    74,   193,   193,   664,   665,   666,   667,   668,   669,
   670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
   266,   681,    77,   193,   194,   194,   193,   273,   274,   275,
   193,    77,   193,   195,   280,   193,   282,   283,   284,   285,
    77,   187,   194,    62,   190,   197,   194,    66,   193,   197,
   195,   193,   194,   194,   650,    74,     5,     6,   194,   193,
   193,   194,   193,   191,   193,   193,   623,   624,   664,   665,
   666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
   676,   677,   678,   679,   193,   681,     5,   193,   194,   113,
   193,   115,   116,   117,   193,   119,   120,   121,   191,   193,
   194,   125,   762,   349,   128,   191,   193,   131,     5,   177,
   134,   191,    48,   181,    11,    58,    59,  1393,   142,   143,
   366,   194,   193,    64,    64,   832,    74,     3,    64,     5,
   184,   185,   186,    74,    74,    76,   190,   191,    74,    75,
   195,    64,   166,    66,    80,    42,    82,    87,    91,   195,
   701,    91,   194,   194,    77,   197,   104,     7,   195,   102,
   193,     7,   195,   111,    87,   693,   762,   718,  1444,   194,
   194,   193,   197,   195,   420,   194,   422,   423,   424,   102,
   139,    66,   195,   734,   735,   736,   737,   141,   142,   435,
   741,   195,  1468,     7,   113,   195,   115,   116,   117,   195,
   119,   120,   121,  1164,   195,  1166,   125,   453,   195,   128,
   196,   197,   131,   195,     5,   134,   193,   194,     9,   195,
    11,   195,   468,   142,   143,    74,   111,   195,    67,    68,
    69,    70,    71,    72,   195,   895,   193,   194,    87,   190,
   191,   164,   902,   927,   129,   130,   194,   166,   193,   194,
    41,   194,   498,   194,   194,     5,   105,    48,   194,    74,
   506,   507,   195,   509,   730,   731,   732,   733,   514,   515,
    61,   194,    63,   195,   831,   194,   833,   195,   744,   164,
   196,   197,    73,   196,   197,   911,    77,   136,   195,   840,
   196,   197,   195,   844,   195,    86,   111,   196,   197,   895,
  1339,  1340,   182,   183,   184,   185,   902,   195,   934,   194,
   193,   194,   103,    92,    93,    94,    95,   197,   195,   913,
   193,   194,     5,   138,   875,   140,   877,   193,   194,     5,
   796,   797,   195,   884,   193,   194,     7,   963,   584,   193,
   194,   193,   194,   158,   135,   194,   137,     5,   193,   194,
   193,   194,   193,   194,   820,   194,    61,   195,    63,    64,
   184,   185,   186,   187,   195,    61,   190,    63,   614,    74,
   616,   617,   618,   619,   165,   195,   167,   168,     5,   194,
   193,   194,   145,    88,    89,    90,   195,   853,     7,     5,
   636,   196,   197,   639,   196,   197,   197,   102,  1359,   169,
    96,    97,    98,    99,   100,   101,   102,   195,    74,   193,
    76,    77,    78,    79,     5,   194,   193,     3,     4,     5,
  1169,  1170,  1171,  1049,   193,  1132,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,   193,   194,   196,   197,   113,   193,   115,   116,   117,
   193,   119,   120,   121,   196,   197,   111,   125,    66,   114,
   128,   193,  1433,   131,   720,     5,   134,   122,   123,   124,
   169,   947,   169,  1011,   142,   143,   952,     5,  1148,   194,
   195,   193,   194,   196,   197,   787,   788,   113,   194,   115,
   116,   117,     5,   119,   120,   121,   104,   193,   166,   125,
   511,   512,   128,   111,   112,   131,  1044,     5,   134,   193,
   193,   182,   183,   184,   185,   186,   142,   143,   194,   190,
   191,   129,     5,  1084,   132,   133,   194,  1088,   784,  1090,
     5,     5,  1093,  1250,   193,  1252,  1074,  1098,   169,   194,
   166,  1079,  1148,   193,   193,   196,  1022,   195,  1109,     5,
     5,   193,   193,  1029,     5,   193,   164,   153,     5,   193,
   156,     5,  1123,     5,  1125,     5,   193,  1284,   194,    96,
    97,    98,    99,   100,   101,   102,     5,  1138,  1139,     5,
  1141,    76,   197,   193,    79,   152,   194,   183,    83,    84,
    85,   193,   848,   189,   850,     8,   193,   193,   193,     7,
     7,  1360,   198,   196,   195,   193,     7,   863,   195,   865,
   866,   867,   195,   869,     7,     7,     3,     4,     5,  1336,
   194,     7,   193,     8,  1341,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,   145,   146,   147,   148,   149,   150,
   151,     3,     4,     5,   169,     5,     7,   194,     7,   193,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,     7,  1172,   193,  1259,   194,
   194,     7,     7,     7,    46,  1266,     7,    49,     7,    96,
   197,     7,     5,     7,     3,     4,     5,     7,     5,     7,
   191,  1282,     7,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,     5,     7,   193,     7,     7,   170,   171,   172,
   173,   174,     7,   176,   177,   178,   179,  1346,  1335,   182,
   183,   184,   185,   186,     7,     7,   194,   190,   191,    61,
     5,    63,    64,     5,     7,  1389,     7,   193,    61,   176,
    63,    64,   196,   195,     5,   182,   183,   195,   195,     3,
     5,   191,   189,  1364,   191,   192,   193,    96,     7,   196,
     6,   198,   195,   200,    96,    97,    98,    99,   100,   101,
   102,   193,   193,    96,    97,    98,    99,   100,   101,   102,
   193,  1087,   193,   197,   193,  1091,  1092,   195,  1399,   195,
  1096,   183,   177,  1099,  1100,  1101,  1102,   189,     3,  1105,
  1106,   195,  1108,     7,  1110,   193,   198,  1113,  1494,   190,
   193,  1117,  1118,   195,  1120,   170,   171,   172,   173,   174,
   195,   176,   177,   178,   179,   195,   195,   182,   183,   184,
   185,   186,   193,     7,   193,   190,   191,   176,   195,     5,
     5,     5,     5,   182,   183,   111,   193,     5,   114,     5,
   189,   196,   191,   192,   193,   196,   122,   123,   194,   198,
   126,   127,   194,    85,   195,     5,    88,    89,    90,    91,
    92,   194,    94,     3,   196,  1401,     3,     4,     5,     6,
     5,     5,  1408,     5,     5,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     7,     5,     5,     5,     5,  1221,  1222,  1223,  1224,  1225,
    47,     5,    49,     5,   146,     5,   196,     5,   194,     3,
     3,     7,     3,     4,     5,     6,     5,     5,     5,     5,
  1466,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,   170,   171,   172,   173,
   174,     7,   176,   177,   178,   179,    47,     5,   182,   183,
   184,   185,   186,     5,     5,     5,   190,   191,   195,   195,
   193,     5,     5,   194,  1300,  1301,  1302,  1303,  1304,     3,
     4,     5,     7,   197,     7,     7,     7,     7,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     7,     7,     7,  1342,  1343,  1344,  1345,
     3,   173,   174,   175,   176,   177,   178,   179,     7,     7,
   182,   183,   184,   185,   186,   187,   183,  1363,   190,  1365,
     7,     7,   189,    61,   191,    63,   193,     7,     7,     7,
   196,   198,   195,   170,   171,   172,   173,   174,   195,   176,
   177,   178,   179,     7,     7,   182,   183,   184,   185,   186,
    85,     7,  1398,   190,   191,     7,     7,   193,    96,    97,
    98,    99,   100,   101,   102,  1411,  1412,  1413,  1414,     7,
     7,     7,   183,     7,     7,     7,  1422,     7,   189,     3,
     4,     5,   193,     5,     7,     5,     7,   198,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     7,     7,     7,  1462,     7,  1464,  1465,
     7,     7,     7,     5,   195,  1471,   195,     5,     5,   196,
  1476,     7,  1478,  1479,     7,     7,     7,     7,     7,   183,
     7,  1487,  1488,  1489,     7,   189,   196,     7,   197,   197,
   196,   195,     7,     7,   198,  1501,   194,  1503,   197,     7,
   197,  1507,  1508,   197,   193,  1511,     3,     4,     5,     6,
  1516,   197,  1518,   197,  1520,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     3,     4,     5,   197,   197,   196,     5,     5,    87,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,   170,   171,   172,   173,   174,     5,
   176,   177,   178,   179,     7,     7,   182,   183,   184,   185,
   186,   196,     7,     7,   190,   191,     7,     7,     7,   183,
     7,     7,     7,     5,   193,   189,   193,   191,     3,     4,
     5,     5,     3,     5,   198,   193,   193,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,     3,     4,     5,   193,     5,   196,     5,   193,
   193,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,   182,   183,   184,   185,
   186,   187,   193,   193,   190,     7,   183,   113,   193,   115,
   116,   117,   189,   119,   120,   121,   196,   193,   193,   125,
     5,   198,   128,     5,   196,   131,   195,     7,   134,     5,
     5,   196,   193,   197,   196,     7,   142,   143,     7,     7,
   183,   113,     7,   115,   116,   117,   189,   119,   120,   121,
     7,   194,   196,   125,     5,   198,   128,   193,     7,   131,
   166,     7,   134,   196,   196,   194,   196,   194,   194,     5,
   142,   143,     7,     7,   113,     7,   115,   116,   117,     7,
   119,   120,   121,     7,     7,     5,   125,   197,   194,   128,
     7,     7,   131,     7,   166,   134,     7,     7,     7,     7,
     7,     7,     5,   142,   143,    86,     7,   118,   183,   197,
     7,     5,   196,   196,   189,     7,   197,   197,   193,   197,
   197,     5,   194,   198,   193,     5,   194,   166,     7,     5,
   195,   113,   193,   115,   116,   117,   196,   119,   120,   121,
   196,   196,   183,   125,     5,     5,   128,     5,   189,   131,
     7,     7,   134,     7,     7,   194,     7,   198,     7,     7,
   142,   143,   113,     7,   115,   116,   117,     7,   119,   120,
   121,   193,     7,     7,   125,     7,     7,   128,     7,     7,
   131,     7,   196,   134,   166,   193,    41,   194,   193,   193,
   193,   142,   143,   113,     7,   115,   116,   117,     7,   119,
   120,   121,   193,     7,   103,   125,     5,   194,   128,     7,
   194,   131,   194,     0,   134,   166,     7,   194,     0,   193,
   193,   812,   142,   143,   170,   171,   172,   173,   174,   193,
   176,   177,   178,   179,   194,   572,   182,   183,   184,   185,
   186,     7,   444,   194,   190,   191,   166,   170,   171,   172,
   173,   174,   888,   176,   177,   178,   179,   696,   990,   182,
   183,   184,   185,   186,     7,  1128,  1288,   190,   191,   170,
   171,   172,   173,   174,   194,   176,   177,   178,   179,   414,
    96,   182,   183,   184,   185,   186,     7,   206,    -1,   190,
   191,   170,   171,   172,   173,   174,    -1,   176,   177,   178,
   179,   490,    -1,   182,   183,   184,   185,   186,     7,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,    -1,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
     7,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,     7,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,     7,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,     7,    -1,    -1,   190,
   191,    -1,    -1,    -1,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,     8,    -1,    -1,   190,   191,    -1,   170,   171,   172,
   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,     8,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,    -1,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,    -1,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,    55,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   170,   171,   172,   173,   174,    -1,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,    -1,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,    -1,    -1,   182,   183,
   184,   185,   186,   187,    -1,    -1,   190,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    64,    -1,    60,    -1,
    -1,    -1,    64,    -1,    -1,    -1,    74,    -1,    -1,    -1,
    -1,    -1,    -1,   144,    -1,    77,    -1,    -1,    -1,    -1,
    -1,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,    -1,    -1,    -1,    -1,   105,   106,   107,
   108,   109,   110,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
   187,    -1,    -1,   190,    -1,    -1,    -1,   170,   171,   172,
   173,   174,   199,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   199,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,   187,    -1,    -1,   190,    -1,    -1,
    -1,    -1,    -1,    -1,   197,    -1,   194,   170,   171,   172,
   173,   174,   194,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,   197,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,   197,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,   197,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,   197,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,   197,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,   197,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,   170,   171,   172,
   173,   174,   197,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,   170,
   171,   172,   173,   174,   197,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   197,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,   170,   171,   172,   173,   174,   197,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,   170,   171,   172,   173,   174,
   197,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,
    -1,    -1,   197,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
   187,    -1,    -1,   190,   170,   171,   172,   173,   174,   196,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,
   196,   170,   171,   172,   173,   174,    -1,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,    -1,    -1,    -1,    -1,   196,   170,   171,
   172,   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,
   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,
    -1,    -1,    -1,    -1,   196,   170,   171,   172,   173,   174,
    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,
    -1,   196,   170,   171,   172,   173,   174,    -1,   176,   177,
   178,   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,
    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,   196,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,    -1,    -1,   196,   170,   171,   172,   173,
   174,    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,
   184,   185,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,
    -1,    -1,   196,   170,   171,   172,   173,   174,    -1,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,   196,
   170,   171,   172,   173,   174,    -1,   176,   177,   178,   179,
    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,
   190,   191,    -1,    -1,    -1,    -1,   196,   170,   171,   172,
   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,    -1,
    -1,    -1,    -1,   196,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,
   196,   170,   171,   172,   173,   174,    -1,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,    -1,    -1,    -1,    -1,   196,   170,   171,
   172,   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,
   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,
    -1,    -1,    -1,    -1,   196,   170,   171,   172,   173,   174,
    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,
    -1,   196,   170,   171,   172,   173,   174,    -1,   176,   177,
   178,   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,
    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,   196,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,    -1,    -1,   196,   170,   171,   172,   173,
   174,    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,
   184,   185,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,
    -1,    -1,   196,   170,   171,   172,   173,   174,    -1,   176,
   177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,   196,
   170,   171,   172,   173,   174,    -1,   176,   177,   178,   179,
    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,
   190,   191,    -1,    -1,    -1,    -1,   196,   170,   171,   172,
   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,   182,
   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,    -1,
    -1,    -1,    -1,   196,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,
   196,   170,   171,   172,   173,   174,    -1,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,    -1,
    -1,   190,   191,    -1,    -1,    -1,    -1,   196,   170,   171,
   172,   173,   174,    -1,   176,   177,   178,   179,    -1,    -1,
   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,   191,
    -1,    -1,    -1,    -1,   196,   170,   171,   172,   173,   174,
    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
   185,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,
    -1,   196,   170,   171,   172,   173,   174,    -1,   176,   177,
   178,   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,
    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,   196,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,    -1,    -1,   194,   170,   171,   172,   173,   174,    -1,
   176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
   186,    -1,    -1,    -1,   190,   191,    -1,    -1,   194,   170,
   171,   172,   173,   174,    -1,   176,   177,   178,   179,    -1,
    -1,   182,   183,   184,   185,   186,    -1,    -1,    -1,   190,
   191,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,    -1,    -1,   182,   183,   184,   185,   186,   187,   173,
   174,   190,   176,   177,   178,   179,    -1,    -1,   182,   183,
   184,   185,   186,    -1,    -1,    -1,   190,   191,   176,   177,
   178,   179,    -1,    -1,   182,   183,   184,   185,   186,    -1,
    -1,    -1,   190,   191,   176,   177,   178,   179,    -1,    -1,
   182,   183,   184,   185,   186,   187,    -1,    -1,   190
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
#line 313 "yacc.y"
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
#line 349 "yacc.y"
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
#line 391 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 414 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 429 "yacc.y"
{ InteractiveExit = 1; ;
    break;}
case 21:
#line 432 "yacc.y"
{ Pos_InteractiveHelp(); ;
    break;}
case 23:
#line 446 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 24:
#line 454 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 26:
#line 471 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 28:
#line 478 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 29:
#line 481 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 30:
#line 484 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 31:
#line 486 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 34:
#line 497 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 35:
#line 502 "yacc.y"
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
#line 514 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 37:
#line 523 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 38:
#line 534 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 39:
#line 539 "yacc.y"
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
#line 576 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 41:
#line 579 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 42:
#line 590 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 43:
#line 592 "yacc.y"
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
#line 608 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 45:
#line 611 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 46:
#line 614 "yacc.y"
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
#line 665 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 48:
#line 677 "yacc.y"
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
#line 701 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 50:
#line 708 "yacc.y"
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
#line 721 "yacc.y"
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
#line 739 "yacc.y"
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
#line 762 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 54:
#line 766 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 55:
#line 775 "yacc.y"
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
#line 789 "yacc.y"
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
#line 823 "yacc.y"
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
#line 836 "yacc.y"
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
#line 860 "yacc.y"
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
#line 870 "yacc.y"
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
#line 892 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 65:
#line 897 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 66:
#line 898 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 67:
#line 903 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 71:
#line 922 "yacc.y"
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
#line 942 "yacc.y"
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
#line 993 "yacc.y"
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
#line 1013 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 77:
#line 1019 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 78:
#line 1025 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 79:
#line 1028 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 80:
#line 1036 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 81:
#line 1040 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 83:
#line 1052 "yacc.y"
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
#line 1065 "yacc.y"
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
#line 1079 "yacc.y"
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
#line 1094 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 87:
#line 1100 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 88:
#line 1106 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1112 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1118 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1124 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1130 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1136 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1142 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1148 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1154 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1160 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1166 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1172 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1178 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1184 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1190 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1197 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 105:
#line 1205 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1218 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 108:
#line 1224 "yacc.y"
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
#line 1302 "yacc.y"
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
#line 1336 "yacc.y"
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
#line 1346 "yacc.y"
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
#line 1359 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 113:
#line 1361 "yacc.y"
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
#line 1372 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 115:
#line 1378 "yacc.y"
{ WholeQuantity_S.Type = WQ_DEGREE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 116:
#line 1384 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 117:
#line 1386 "yacc.y"
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
#line 1415 "yacc.y"
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
#line 1439 "yacc.y"
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
#line 1450 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 121:
#line 1456 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1463 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 123:
#line 1469 "yacc.y"
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
#line 1480 "yacc.y"
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
#line 1495 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 126:
#line 1496 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 127:
#line 1497 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 128:
#line 1502 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 129:
#line 1503 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 130:
#line 1509 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 132:
#line 1514 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 133:
#line 1521 "yacc.y"
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
#line 1548 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 135:
#line 1553 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 136:
#line 1560 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianPerRegion = NULL ; ;
    break;}
case 138:
#line 1569 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 139:
#line 1574 "yacc.y"
{ JacobianMethod_S.JacobianPerRegion = yyvsp[-1].l ; ;
    break;}
case 140:
#line 1581 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 141:
#line 1584 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 142:
#line 1591 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 144:
#line 1601 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 145:
#line 1604 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 146:
#line 1607 "yacc.y"
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
#line 1638 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 148:
#line 1644 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 149:
#line 1651 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.Method = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 151:
#line 1664 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 152:
#line 1671 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 153:
#line 1674 "yacc.y"
{ IntegrationMethod_S.Method = yyvsp[-1].l ; ;
    break;}
case 154:
#line 1681 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 155:
#line 1684 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 156:
#line 1691 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 158:
#line 1703 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 159:
#line 1712 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 160:
#line 1721 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 161:
#line 1728 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 162:
#line 1731 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 163:
#line 1738 "yacc.y"
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
#line 1754 "yacc.y"
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
#line 1807 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 167:
#line 1810 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 168:
#line 1813 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 169:
#line 1816 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 170:
#line 1819 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 171:
#line 1830 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 173:
#line 1840 "yacc.y"
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
#line 1865 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 177:
#line 1879 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 178:
#line 1885 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 179:
#line 1892 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 180:
#line 1900 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 181:
#line 1903 "yacc.y"
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
#line 1925 "yacc.y"
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
#line 1940 "yacc.y"
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
#line 1964 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 186:
#line 1978 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 187:
#line 1987 "yacc.y"
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
#line 2011 "yacc.y"
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
#line 2036 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 190:
#line 2041 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 191:
#line 2049 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 192:
#line 2057 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 193:
#line 2067 "yacc.y"
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
#line 2083 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 195:
#line 2090 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 196:
#line 2096 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 197:
#line 2102 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 198:
#line 2110 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 199:
#line 2118 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 200:
#line 2126 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 201:
#line 2146 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 203:
#line 2157 "yacc.y"
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
#line 2184 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 207:
#line 2197 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 208:
#line 2203 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 209:
#line 2210 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 210:
#line 2218 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 211:
#line 2221 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 212:
#line 2224 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2227 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 214:
#line 2234 "yacc.y"
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
#line 2250 "yacc.y"
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
#line 2287 "yacc.y"
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
#line 2306 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 219:
#line 2309 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 220:
#line 2314 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 221:
#line 2319 "yacc.y"
{
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Degree,
	 &BasisFunction_S.ElementType) ;
      if (FlagError)  vyyerror("Unknown Function for BasisFunction: %s %s", 
			       yyvsp[-2].c, Get_Valid_SX3F2N(BF_Function)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 222:
#line 2331 "yacc.y"
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
#line 2355 "yacc.y"
{
      if (!Nbr_Index) {
	if (yyvsp[-1].i >= 0) {
	  BasisFunction_S.EntityIndex = yyvsp[-1].i ;
	  if (Group_S.InitialList)
	    List_Tri(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	}
	else if (yyvsp[-1].i == -1) {
	  if (Group_S.InitialList)
	    List_Tri(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
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
#line 2415 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 226:
#line 2418 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 227:
#line 2427 "yacc.y"
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
      List_Tri(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;


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
#line 2492 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 229:
#line 2496 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 230:
#line 2503 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 232:
#line 2512 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 233:
#line 2517 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 234:
#line 2524 "yacc.y"
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
#line 2540 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 236:
#line 2546 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 237:
#line 2549 "yacc.y"
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
#line 2568 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 239:
#line 2572 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 240:
#line 2581 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 242:
#line 2592 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 243:
#line 2597 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 244:
#line 2606 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 245:
#line 2619 "yacc.y"
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
#line 2634 "yacc.y"
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
#line 2708 "yacc.y"
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
#line 2724 "yacc.y"
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
#line 2742 "yacc.y"
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
#line 2756 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 252:
#line 2759 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2762 "yacc.y"
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
#line 2808 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 256:
#line 2818 "yacc.y"
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
#line 2844 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 260:
#line 2856 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 261:
#line 2862 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 262:
#line 2869 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 264:
#line 2880 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2886 "yacc.y"
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
#line 2900 "yacc.y"
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
#line 2918 "yacc.y"
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
#line 2939 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 270:
#line 2942 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 271:
#line 2946 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 272:
#line 2949 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 273:
#line 2958 "yacc.y"
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
#line 2997 "yacc.y"
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
#line 3021 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 276:
#line 3026 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 277:
#line 3032 "yacc.y"
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
#line 3182 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 279:
#line 3187 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 280:
#line 3196 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 3205 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 283:
#line 3213 "yacc.y"
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
#line 3253 "yacc.y"
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
#line 3268 "yacc.y"
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
#line 3296 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 287:
#line 3299 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 288:
#line 3302 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 289:
#line 3305 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 290:
#line 3312 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 292:
#line 3323 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3332 "yacc.y"
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
#line 3342 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 295:
#line 3356 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 297:
#line 3368 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 298:
#line 3370 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 299:
#line 3372 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 300:
#line 3374 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 301:
#line 3382 "yacc.y"
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
#line 3404 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 304:
#line 3412 "yacc.y"
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
#line 3474 "yacc.y"
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
#line 3520 "yacc.y"
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
#line 3544 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3553 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3567 "yacc.y"
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
#line 3596 "yacc.y"
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
#line 3620 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 313:
#line 3628 "yacc.y"
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
#line 3683 "yacc.y"
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
#line 3700 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 316:
#line 3701 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 317:
#line 3702 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 318:
#line 3703 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 319:
#line 3704 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 320:
#line 3705 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 321:
#line 3706 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 322:
#line 3713 "yacc.y"
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
#line 3727 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 324:
#line 3745 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 326:
#line 3755 "yacc.y"
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
#line 3780 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 330:
#line 3792 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 331:
#line 3799 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 332:
#line 3806 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 333:
#line 3809 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 334:
#line 3811 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 335:
#line 3817 "yacc.y"
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
#line 3832 "yacc.y"
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
#line 3851 "yacc.y"
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
#line 3870 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 340:
#line 3873 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 341:
#line 3881 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 342:
#line 3884 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 343:
#line 3889 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 344:
#line 3894 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 345:
#line 3899 "yacc.y"
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
#line 3909 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 347:
#line 3918 "yacc.y"
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
#line 3955 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 349:
#line 3962 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 350:
#line 3965 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 351:
#line 3977 "yacc.y"
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
#line 3987 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 353:
#line 3993 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 354:
#line 3996 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 355:
#line 4008 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 356:
#line 4016 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 357:
#line 4027 "yacc.y"
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
#line 4043 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 359:
#line 4050 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 360:
#line 4056 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 361:
#line 4062 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 362:
#line 4068 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 363:
#line 4076 "yacc.y"
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
#line 4092 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 365:
#line 4099 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 366:
#line 4105 "yacc.y"
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
#line 4116 "yacc.y"
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
#line 4127 "yacc.y"
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
#line 4143 "yacc.y"
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
#line 4155 "yacc.y"
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
#line 4177 "yacc.y"
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
#line 4199 "yacc.y"
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
#line 4212 "yacc.y"
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
#line 4225 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 376:
#line 4234 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 378:
#line 4243 "yacc.y"
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
#line 4257 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 380:
#line 4266 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 381:
#line 4276 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 383:
#line 4286 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 384:
#line 4289 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 385:
#line 4298 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 386:
#line 4311 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 388:
#line 4327 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 389:
#line 4331 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 390:
#line 4335 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 391:
#line 4339 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 392:
#line 4344 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 393:
#line 4355 "yacc.y"
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
case 395:
#line 4372 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 396:
#line 4376 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 397:
#line 4380 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 398:
#line 4384 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 399:
#line 4388 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 400:
#line 4393 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 401:
#line 4404 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 403:
#line 4419 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 404:
#line 4423 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 405:
#line 4427 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 406:
#line 4431 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 407:
#line 4436 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 408:
#line 4447 "yacc.y"
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
case 410:
#line 4465 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 411:
#line 4469 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 412:
#line 4473 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 413:
#line 4477 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 414:
#line 4482 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 415:
#line 4492 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 416:
#line 4498 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 417:
#line 4504 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 418:
#line 4514 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 419:
#line 4517 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 420:
#line 4522 "yacc.y"
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
case 422:
#line 4540 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 423:
#line 4549 "yacc.y"
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
case 424:
#line 4578 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 425:
#line 4581 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 426:
#line 4584 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 427:
#line 4592 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 428:
#line 4607 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 430:
#line 4619 "yacc.y"
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
case 432:
#line 4642 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 434:
#line 4656 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 435:
#line 4663 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 436:
#line 4671 "yacc.y"
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
case 437:
#line 4717 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 438:
#line 4722 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 439:
#line 4728 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 440:
#line 4731 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 441:
#line 4736 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.Type = NONCUMULATIVE ;
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 443:
#line 4748 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 444:
#line 4751 "yacc.y"
{ PostQuantity_S.Type =
	Get_DefineForString(PostQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of PostQuantity: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(PostQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 445:
#line 4760 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 446:
#line 4766 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 447:
#line 4771 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 448:
#line 4777 "yacc.y"
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
case 449:
#line 4790 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 451:
#line 4804 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 452:
#line 4811 "yacc.y"
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
case 453:
#line 4839 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 454:
#line 4848 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 455:
#line 4849 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 456:
#line 4855 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 457:
#line 4864 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 458:
#line 4881 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 460:
#line 4893 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 462:
#line 4900 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 464:
#line 4912 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 465:
#line 4919 "yacc.y"
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
case 466:
#line 4931 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 467:
#line 4941 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 468:
#line 4946 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 469:
#line 4952 "yacc.y"
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
case 470:
#line 4969 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 471:
#line 4979 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 472:
#line 4982 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 473:
#line 4986 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 474:
#line 4997 "yacc.y"
{
      PostSubOperation_S.Type = POP_PLOT ;
    ;
    break;}
case 475:
#line 5002 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[-3].i) ;
    ;
    break;}
case 476:
#line 5014 "yacc.y"
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
case 477:
#line 5036 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 478:
#line 5046 "yacc.y"
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
case 479:
#line 5069 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 480:
#line 5070 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 481:
#line 5071 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 482:
#line 5072 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 483:
#line 5078 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 484:
#line 5087 "yacc.y"
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
case 485:
#line 5101 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 486:
#line 5109 "yacc.y"
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
case 487:
#line 5122 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 488:
#line 5132 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 489:
#line 5141 "yacc.y"
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
case 490:
#line 5155 "yacc.y"
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
case 491:
#line 5174 "yacc.y"
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
case 492:
#line 5197 "yacc.y"
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
    ;
    break;}
case 494:
#line 5214 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 495:
#line 5221 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 496:
#line 5228 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 497:
#line 5235 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 498:
#line 5239 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 499:
#line 5243 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 500:
#line 5247 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 501:
#line 5251 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 502:
#line 5260 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 503:
#line 5265 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 504:
#line 5270 "yacc.y"
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
case 505:
#line 5290 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Plot") ;  	
    ;
    break;}
case 506:
#line 5297 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 507:
#line 5304 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 508:
#line 5312 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 509:
#line 5319 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 510:
#line 5331 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 511:
#line 5337 "yacc.y"
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
case 512:
#line 5384 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 514:
#line 5395 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 515:
#line 5398 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 516:
#line 5404 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 517:
#line 5405 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 519:
#line 5413 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 520:
#line 5416 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 521:
#line 5425 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 522:
#line 5428 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 523:
#line 5439 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 524:
#line 5445 "yacc.y"
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
case 525:
#line 5464 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 526:
#line 5470 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 527:
#line 5476 "yacc.y"
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
case 528:
#line 5488 "yacc.y"
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
case 531:
#line 5539 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 532:
#line 5545 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 533:
#line 5551 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 534:
#line 5562 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 535:
#line 5563 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 536:
#line 5564 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 537:
#line 5565 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 538:
#line 5566 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 539:
#line 5567 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 540:
#line 5568 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 541:
#line 5569 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 542:
#line 5570 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 543:
#line 5571 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 544:
#line 5572 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 545:
#line 5573 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 546:
#line 5574 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 547:
#line 5575 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 548:
#line 5576 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 549:
#line 5577 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 550:
#line 5578 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 551:
#line 5579 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 552:
#line 5580 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 553:
#line 5581 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 554:
#line 5582 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 555:
#line 5585 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 556:
#line 5586 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 557:
#line 5587 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 558:
#line 5588 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 559:
#line 5589 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 560:
#line 5590 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 561:
#line 5591 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 562:
#line 5592 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 563:
#line 5593 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 564:
#line 5594 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 565:
#line 5595 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 566:
#line 5596 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 567:
#line 5597 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 568:
#line 5598 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 569:
#line 5599 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 570:
#line 5600 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 571:
#line 5601 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 572:
#line 5602 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 573:
#line 5603 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 574:
#line 5604 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 575:
#line 5605 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 576:
#line 5606 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 577:
#line 5607 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 578:
#line 5608 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 579:
#line 5609 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 580:
#line 5610 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 581:
#line 5611 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 582:
#line 5612 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 583:
#line 5613 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 584:
#line 5614 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 585:
#line 5615 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 586:
#line 5616 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 587:
#line 5617 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 588:
#line 5618 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 589:
#line 5619 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 590:
#line 5620 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 591:
#line 5621 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 592:
#line 5622 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 593:
#line 5623 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 594:
#line 5624 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 595:
#line 5629 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 596:
#line 5630 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 597:
#line 5631 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 598:
#line 5632 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 599:
#line 5633 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 600:
#line 5634 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 601:
#line 5635 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 602:
#line 5637 "yacc.y"
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
case 603:
#line 5656 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 604:
#line 5659 "yacc.y"
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
#line 5675 "yacc.y"



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
    case WQ_DEGREE :
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
  List_Tri(ListOfTwoInt_L, fcmp_int) ;
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


