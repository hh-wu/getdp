
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
#define	tDefineConstant	282
#define	tPi	283
#define	t0D	284
#define	t1D	285
#define	t2D	286
#define	t3D	287
#define	tExp	288
#define	tLog	289
#define	tLog10	290
#define	tSqrt	291
#define	tSin	292
#define	tAsin	293
#define	tCos	294
#define	tAcos	295
#define	tTan	296
#define	tAtan	297
#define	tAtan2	298
#define	tSinh	299
#define	tCosh	300
#define	tTanh	301
#define	tFabs	302
#define	tFloor	303
#define	tCeil	304
#define	tFmod	305
#define	tModulo	306
#define	tHypot	307
#define	tSolidAngle	308
#define	tTrace	309
#define	tOrder	310
#define	tCrossProduct	311
#define	tDofValue	312
#define	tMHTransform	313
#define	tMHJacNL	314
#define	tGroup	315
#define	tDefineGroup	316
#define	tAll	317
#define	tInSupport	318
#define	tMovingBand2D	319
#define	tDefineFunction	320
#define	tConstraint	321
#define	tRegion	322
#define	tSubRegion	323
#define	tRegionRef	324
#define	tSubRegionRef	325
#define	tFilter	326
#define	tCoefficient	327
#define	tValue	328
#define	tTimeFunction	329
#define	tBranch	330
#define	tNode	331
#define	tLoop	332
#define	tNameOfResolution	333
#define	tJacobian	334
#define	tCase	335
#define	tIntegration	336
#define	tFMMIntegration	337
#define	tMatrix	338
#define	tType	339
#define	tSubType	340
#define	tCriterion	341
#define	tGeoElement	342
#define	tNumberOfPoints	343
#define	tMaxNumberOfPoints	344
#define	tNumberOfDivisions	345
#define	tMaxNumberOfDivisions	346
#define	tStoppingCriterion	347
#define	tFunctionSpace	348
#define	tName	349
#define	tBasisFunction	350
#define	tNameOfCoef	351
#define	tFunction	352
#define	tdFunction	353
#define	tSubFunction	354
#define	tSubdFunction	355
#define	tSupport	356
#define	tEntity	357
#define	tSubSpace	358
#define	tNameOfBasisFunction	359
#define	tGlobalQuantity	360
#define	tEntityType	361
#define	tEntitySubType	362
#define	tNameOfConstraint	363
#define	tFormulation	364
#define	tQuantity	365
#define	tNameOfSpace	366
#define	tIndexOfSystem	367
#define	tSymmetry	368
#define	tEquation	369
#define	tGalerkin	370
#define	tdeRham	371
#define	tGlobalTerm	372
#define	tGlobalEquation	373
#define	tDt	374
#define	tDtDof	375
#define	tDtDt	376
#define	tDtDtDof	377
#define	tJacNL	378
#define	tNeverDt	379
#define	tDtNL	380
#define	tIn	381
#define	tFull_Matrix	382
#define	tResolution	383
#define	tDefineSystem	384
#define	tNameOfFormulation	385
#define	tNameOfMesh	386
#define	tFrequency	387
#define	tSolver	388
#define	tOriginSystem	389
#define	tDestinationSystem	390
#define	tOperation	391
#define	tOperationEnd	392
#define	tSetTime	393
#define	tDTime	394
#define	tSetFrequency	395
#define	tFourierTransform	396
#define	tFourierTransformJ	397
#define	tLanczos	398
#define	tPerturbation	399
#define	tUpdate	400
#define	tUpdateConstraint	401
#define	tBreak	402
#define	tTimeLoopTheta	403
#define	tTime0	404
#define	tTimeMax	405
#define	tTheta	406
#define	tTimeLoopNewmark	407
#define	tBeta	408
#define	tGamma	409
#define	tIterativeLoop	410
#define	tNbrMaxIteration	411
#define	tRelaxationFactor	412
#define	tIterativeTimeReduction	413
#define	tDivisionCoefficient	414
#define	tChangeOfState	415
#define	tChangeOfCoordinates	416
#define	tChangeOfCoordinates2	417
#define	tSystemCommand	418
#define	tGenerateFMMGroups	419
#define	tGenerateOnly	420
#define	tGenerateOnlyJac	421
#define	tSolveJac_AdaptRelax	422
#define	tSaveSolutionExtendedMH	423
#define	tSaveSolutionMHtoTime	424
#define	tInit_MovingBand2D	425
#define	tMesh_MovingBand2D	426
#define	tGenerate_MH_Moving	427
#define	tGenerate_MH_Moving_Separate	428
#define	tAdd_MH_Moving	429
#define	tGenerateGroup	430
#define	tGenerateJacGroup	431
#define	tSaveMesh	432
#define	tDeformeMesh	433
#define	tDummyFrequency	434
#define	tPostProcessing	435
#define	tNameOfSystem	436
#define	tPostOperation	437
#define	tNameOfPostProcessing	438
#define	tUsingPost	439
#define	tAppend	440
#define	tPlot	441
#define	tPrint	442
#define	tPrintGroup	443
#define	tEcho	444
#define	tWrite	445
#define	tAdapt	446
#define	tOnGlobal	447
#define	tOnRegion	448
#define	tOnElementsOf	449
#define	tOnGrid	450
#define	tOnSection	451
#define	tOnPoint	452
#define	tOnLine	453
#define	tOnPlane	454
#define	tOnBox	455
#define	tWithArgument	456
#define	tFile	457
#define	tDepth	458
#define	tDimension	459
#define	tTimeStep	460
#define	tHarmonicToTime	461
#define	tFormat	462
#define	tHeader	463
#define	tFooter	464
#define	tSkin	465
#define	tSmoothing	466
#define	tTarget	467
#define	tSort	468
#define	tIso	469
#define	tNoNewLine	470
#define	tDecomposeInSimplex	471
#define	tChangeOfValues	472
#define	tFrequencyLegend	473
#define	tStr	474
#define	tDate	475
#define	tDEF	476
#define	tOR	477
#define	tAND	478
#define	tEQUAL	479
#define	tNOTEQUAL	480
#define	tAPPROXEQUAL	481
#define	tLESSOREQUAL	482
#define	tGREATEROREQUAL	483
#define	tLESSLESS	484
#define	tGREATERGREATER	485
#define	tCROSSPRODUCT	486
#define	UNARYPREC	487
#define	tSHOW	488

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.66 2004-03-05 18:18:04 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
#include "Constant.h"
#include "Message.h"
#include "Magic.h"

#define MAX_OPEN_FILES  256 

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
int  fcmp_PostSave_Name            (const void *a, const void *b) ;

struct Value *  Add_PostSave(char * Name) ;

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

char  *strsave(char *string) ;
void  yyerror(char *s) ;
void  vyyerror(char *fmt, ...) ;
int   yylex();
void  skip_until (char *skip, char *until);

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
static char  tmpstring[1024] ;

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


static int ImbricatedLoop = 0;
static fpos_t yyposImbricatedLoopsTab[10];
static int yylinenoImbricatedLoopsTab[10];
static double LoopControlVariablesTab[10][3];
static char *LoopControlVariablesNameTab[10];

time_t date_info;

char   buff[128];



#line 218 "GetDP.y"
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



#define	YYFINAL		1990
#define	YYFLAG		-32768
#define	YYNTBASE	257

#define YYTRANSLATE(x) ((unsigned)(x) <= 488 ? yytranslate[x] : 450)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   241,     2,   249,   250,   239,     2,     2,   244,
   245,   237,   235,   254,   236,   248,   238,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   229,
     2,   231,   223,   255,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   246,     2,   247,   243,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   252,     2,   253,   256,     2,     2,     2,     2,
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
   217,   218,   219,   220,   221,   222,   224,   225,   226,   227,
   228,   230,   232,   233,   234,   240,   242,   251
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
   492,   498,   499,   511,   521,   526,   531,   532,   540,   547,
   550,   553,   556,   559,   563,   566,   570,   574,   581,   585,
   588,   592,   594,   598,   599,   603,   610,   611,   616,   617,
   620,   624,   629,   630,   635,   636,   639,   643,   647,   652,
   653,   658,   659,   662,   666,   670,   675,   676,   681,   682,
   685,   689,   693,   698,   699,   704,   705,   708,   712,   716,
   720,   724,   728,   732,   733,   735,   738,   742,   744,   745,
   748,   752,   757,   761,   766,   772,   773,   778,   781,   782,
   785,   789,   793,   797,   801,   805,   809,   817,   821,   825,
   829,   833,   837,   845,   853,   861,   862,   865,   869,   871,
   873,   874,   877,   881,   886,   890,   895,   900,   905,   910,
   911,   916,   917,   920,   924,   928,   933,   938,   946,   950,
   954,   958,   962,   963,   964,   965,   984,   985,   990,   991,
   994,   998,  1002,  1006,  1008,  1012,  1013,  1017,  1019,  1023,
  1024,  1028,  1029,  1034,  1035,  1038,  1042,  1046,  1050,  1051,
  1056,  1057,  1060,  1064,  1068,  1072,  1077,  1078,  1081,  1085,
  1087,  1089,  1090,  1093,  1097,  1102,  1106,  1111,  1116,  1117,
  1122,  1125,  1126,  1129,  1133,  1137,  1141,  1145,  1149,  1150,
  1156,  1157,  1165,  1169,  1170,  1176,  1180,  1184,  1188,  1192,
  1196,  1197,  1201,  1202,  1205,  1208,  1211,  1216,  1221,  1226,
  1231,  1232,  1235,  1239,  1243,  1247,  1248,  1251,  1255,  1259,
  1263,  1267,  1268,  1271,  1272,  1273,  1283,  1287,  1291,  1295,
  1298,  1302,  1308,  1309,  1312,  1316,  1317,  1318,  1328,  1329,
  1331,  1333,  1335,  1337,  1339,  1341,  1343,  1348,  1352,  1353,
  1356,  1360,  1362,  1364,  1365,  1368,  1372,  1377,  1382,  1383,
  1389,  1391,  1392,  1397,  1400,  1401,  1404,  1408,  1412,  1416,
  1420,  1424,  1428,  1432,  1436,  1438,  1441,  1445,  1446,  1450,
  1452,  1456,  1457,  1461,  1462,  1465,  1469,  1473,  1478,  1483,
  1488,  1493,  1499,  1505,  1508,  1516,  1528,  1536,  1550,  1562,
  1570,  1578,  1586,  1596,  1606,  1616,  1628,  1646,  1660,  1676,
  1688,  1702,  1703,  1711,  1712,  1720,  1728,  1740,  1746,  1752,
  1762,  1772,  1782,  1788,  1794,  1806,  1816,  1831,  1846,  1854,
  1867,  1878,  1886,  1894,  1902,  1904,  1906,  1908,  1909,  1912,
  1916,  1920,  1923,  1924,  1927,  1931,  1935,  1939,  1943,  1948,
  1949,  1952,  1956,  1960,  1964,  1968,  1972,  1977,  1978,  1981,
  1985,  1989,  1993,  1997,  2002,  2003,  2006,  2010,  2014,  2018,
  2022,  2026,  2031,  2036,  2041,  2042,  2047,  2048,  2051,  2055,
  2059,  2063,  2067,  2071,  2075,  2076,  2079,  2083,  2085,  2086,
  2089,  2093,  2098,  2103,  2107,  2112,  2113,  2118,  2121,  2124,
  2125,  2128,  2132,  2137,  2138,  2144,  2150,  2151,  2154,  2155,
  2162,  2166,  2167,  2172,  2176,  2180,  2181,  2184,  2188,  2190,
  2192,  2193,  2196,  2200,  2204,  2208,  2212,  2217,  2218,  2227,
  2228,  2229,  2233,  2241,  2249,  2262,  2271,  2283,  2284,  2295,
  2297,  2304,  2308,  2315,  2317,  2319,  2321,  2323,  2324,  2328,
  2330,  2333,  2336,  2349,  2352,  2368,  2373,  2386,  2404,  2427,
  2440,  2441,  2444,  2448,  2453,  2458,  2462,  2465,  2468,  2472,
  2476,  2480,  2484,  2488,  2492,  2496,  2500,  2504,  2508,  2512,
  2516,  2522,  2525,  2528,  2532,  2542,  2546,  2556,  2557,  2560,
  2567,  2576,  2585,  2596,  2598,  2603,  2605,  2611,  2616,  2621,
  2629,  2634,  2640,  2648,  2654,  2663,  2664,  2668,  2674,  2680,
  2682,  2684,  2686,  2688,  2690,  2692,  2694,  2696,  2698,  2700,
  2702,  2704,  2706,  2708,  2710,  2712,  2714,  2716,  2718,  2720,
  2722,  2724,  2728,  2731,  2734,  2738,  2742,  2746,  2750,  2754,
  2758,  2762,  2766,  2770,  2774,  2778,  2782,  2786,  2790,  2795,
  2800,  2805,  2810,  2815,  2820,  2825,  2830,  2835,  2840,  2847,
  2852,  2857,  2862,  2867,  2872,  2877,  2884,  2891,  2898,  2904,
  2907,  2909,  2911,  2913,  2915,  2917,  2919,  2921,  2923,  2924,
  2926,  2928,  2932,  2934,  2936,  2940,  2944,  2948,  2954,  2958,
  2963,  2968,  2975,  2984,  2993,  2999,  3005,  3007,  3009,  3011,
  3013,  3015,  3020,  3027,  3029
};

static const short yyrhs[] = {    -1,
   258,   259,     0,     0,     0,   259,   260,   261,     0,    61,
   252,   264,   253,     0,    98,   252,   287,   253,     0,    67,
   252,   321,   253,     0,    80,   252,   306,   253,     0,    82,
   252,   312,   253,     0,    94,   252,   328,   253,     0,   110,
   252,   351,   253,     0,   129,   252,   378,   253,     0,   181,
   252,   408,   253,     0,   183,   252,   420,   253,     0,   424,
     0,   438,     0,    22,   448,     0,   262,     0,    19,     7,
     0,    19,   188,     7,     0,    19,    21,     7,     0,    19,
    35,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    61,     7,     0,    21,    98,     7,     0,    21,
    67,     7,     0,    21,    80,     7,     0,    21,    82,     7,
     0,    21,    94,     7,     0,    21,   110,     7,     0,    21,
   129,     7,     0,    21,   181,     7,     0,    21,   183,     7,
     0,    21,     3,     7,     0,     0,   263,   428,     0,     0,
     0,   264,   265,   266,     0,   447,   222,   271,     7,     0,
     5,   286,   222,   271,     7,     0,     0,     5,   284,   222,
   267,   271,     7,     0,    62,   246,   282,   247,     7,     0,
   268,     0,   447,   235,   222,   271,     7,     0,   438,     0,
   437,     0,     0,     0,   447,   246,   441,   247,   222,    65,
   269,   246,   249,   279,   270,   254,   249,   279,   254,   441,
   247,     7,     0,     0,     0,   275,   246,   272,   276,   273,
   277,   247,     0,   249,   279,     0,   271,     0,   447,   285,
     0,    68,     0,     5,     0,   279,     0,    63,     0,     0,
   283,   278,   279,     0,   283,    64,   447,   285,     0,     5,
     0,   281,     0,   252,   280,   253,     0,     0,   280,   283,
   281,     0,   280,   283,   236,   281,     0,     3,     0,   255,
   444,   255,     0,     3,     8,   441,     0,     3,     8,     3,
     8,   441,     0,   447,     0,     5,   252,   253,     0,     0,
   282,   283,     5,     0,   282,   283,     5,   252,   441,   253,
     0,     0,   254,     0,   252,   249,   441,   253,     0,     0,
   252,   253,     0,   252,     3,   253,     0,     0,   287,   288,
     0,    66,   246,   289,   247,     7,     0,     5,   246,   247,
   222,   290,     7,     0,     5,   246,   274,   247,   222,   290,
     7,     0,   438,     0,   437,     0,     0,   289,   283,     5,
     0,    23,   246,   441,   247,     0,    98,   246,     5,   247,
     0,     0,   291,   294,     0,     0,   252,   293,   253,     0,
   290,     0,   293,   254,   290,     0,     0,   295,   296,     0,
   299,     0,     0,     0,   296,   223,   297,   296,     8,   298,
   296,     0,   296,   237,   296,     0,   296,   240,   296,     0,
    57,   246,   296,   254,   296,   247,     0,   296,   238,   296,
     0,   296,   235,   296,     0,   296,   236,   296,     0,   296,
   239,   296,     0,   296,   243,   296,     0,   296,   229,   296,
     0,   296,   231,   296,     0,   296,   230,   296,     0,   296,
   232,   296,     0,   296,   226,   296,     0,   296,   227,   296,
     0,   296,   228,   296,     0,   296,   225,   296,     0,   296,
   224,   296,     0,   236,   296,     0,   235,   296,     0,   241,
   296,     0,   244,   296,   245,     0,   442,     0,   440,   303,
   305,     0,     5,   377,     0,   377,     0,   377,   303,     0,
     0,   120,   300,   246,   294,   247,     0,     0,    59,   246,
     5,   246,   301,   294,   247,   247,   252,   441,   253,     0,
    60,   246,     5,   247,   252,   441,   254,   441,   253,     0,
    54,   246,   377,   247,     0,    56,   246,   377,   247,     0,
     0,    55,   302,   246,   294,   254,   274,   247,     0,   229,
     5,   231,   246,   294,   247,     0,   250,     5,     0,   250,
   206,     0,   250,   140,     0,   250,     3,     0,   299,   249,
     3,     0,   249,     3,     0,   250,   250,   447,     0,   299,
   251,   441,     0,    58,   246,     5,   254,     3,   247,     0,
   246,   248,   247,     0,   246,   247,     0,   246,   304,   247,
     0,   296,     0,   304,   254,   296,     0,     0,   252,   444,
   253,     0,   252,    68,   246,   274,   247,   253,     0,     0,
   306,   252,   307,   253,     0,     0,   307,   308,     0,    95,
     5,     7,     0,    81,   252,   309,   253,     0,     0,   309,
   252,   310,   253,     0,     0,   310,   311,     0,    68,   274,
     7,     0,    68,    63,     7,     0,    80,     5,   305,     7,
     0,     0,   312,   252,   313,   253,     0,     0,   313,   314,
     0,    95,     5,     7,     0,    87,   290,     7,     0,    81,
   252,   315,   253,     0,     0,   315,   252,   316,   253,     0,
     0,   316,   317,     0,    85,     5,     7,     0,    86,     5,
     7,     0,    81,   252,   318,   253,     0,     0,   318,   252,
   319,   253,     0,     0,   319,   320,     0,    88,     5,     7,
     0,    89,   441,     7,     0,    90,   441,     7,     0,    91,
   441,     7,     0,    92,   441,     7,     0,    93,   441,     7,
     0,     0,   437,     0,   321,   322,     0,   252,   323,   253,
     0,   438,     0,     0,   323,   324,     0,    95,   447,     7,
     0,    95,   447,   284,     7,     0,    85,     5,     7,     0,
    81,   252,   325,   253,     0,    81,     5,   252,   325,   253,
     0,     0,   325,   252,   326,   253,     0,   325,   437,     0,
     0,   326,   327,     0,    85,     5,     7,     0,    68,   274,
     7,     0,    69,   274,     7,     0,    75,   290,     7,     0,
    74,   290,     7,     0,    79,     5,     7,     0,    76,   252,
   442,   283,   442,   253,     7,     0,    70,   274,     7,     0,
    71,   274,     7,     0,    98,   290,     7,     0,    73,   290,
     7,     0,    72,   290,     7,     0,    98,   246,   290,   254,
   290,   247,     7,     0,    73,   246,   290,   254,   290,   247,
     7,     0,    72,   246,   290,   254,   290,   247,     7,     0,
     0,   328,   329,     0,   252,   330,   253,     0,   438,     0,
   437,     0,     0,   330,   331,     0,    95,   447,     7,     0,
    95,     5,   284,     7,     0,    85,     5,     7,     0,    96,
   252,   332,   253,     0,   104,   252,   338,   253,     0,   106,
   252,   345,   253,     0,    67,   252,   348,   253,     0,     0,
   332,   252,   333,   253,     0,     0,   333,   334,     0,    95,
     5,     7,     0,    97,     5,     7,     0,    97,     5,   284,
     7,     0,    98,     5,   335,     7,     0,    99,   252,     5,
   283,     5,   253,     7,     0,   100,   292,     7,     0,   101,
   292,     7,     0,   102,   274,     7,     0,   103,   274,     7,
     0,     0,     0,     0,   252,   111,     5,     7,   110,     5,
   284,     7,   336,    61,   274,     7,   337,   129,     5,   285,
     7,   253,     0,     0,   338,   252,   339,   253,     0,     0,
   339,   340,     0,    95,     5,     7,     0,   105,   341,     7,
     0,    97,   343,     7,     0,     5,     0,   252,   342,   253,
     0,     0,   342,   283,     5,     0,     5,     0,   252,   344,
   253,     0,     0,   344,   283,     5,     0,     0,   345,   252,
   346,   253,     0,     0,   346,   347,     0,    95,   447,     7,
     0,    85,     5,     7,     0,    97,     5,     7,     0,     0,
   348,   252,   349,   253,     0,     0,   349,   350,     0,    97,
     5,     7,     0,   107,   275,     7,     0,   108,   278,     7,
     0,   109,   447,   285,     7,     0,     0,   351,   352,     0,
   252,   353,   253,     0,   438,     0,   437,     0,     0,   353,
   354,     0,    95,   447,     7,     0,    95,     5,   284,     7,
     0,    85,     5,     7,     0,   111,   252,   355,   253,     0,
   115,   252,   362,   253,     0,     0,   355,   252,   356,   253,
     0,   355,   437,     0,     0,   356,   357,     0,    95,   447,
     7,     0,    85,   106,     7,     0,    85,   116,     7,     0,
    85,     5,     7,     0,   180,   443,     7,     0,     0,   112,
   447,   358,   361,     7,     0,     0,   112,     5,   252,   253,
   359,   361,     7,     0,   113,     3,     7,     0,     0,   246,
   360,   294,   247,     7,     0,   127,   274,     7,     0,    82,
     5,     7,     0,    83,     5,     7,     0,    80,     5,     7,
     0,   114,     3,     7,     0,     0,   246,   447,   247,     0,
     0,   362,   363,     0,   362,   438,     0,   362,   437,     0,
   116,   252,   368,   253,     0,   117,   252,   368,   253,     0,
   118,   252,   372,   253,     0,   119,   252,   364,   253,     0,
     0,   364,   365,     0,    85,     5,     7,     0,   109,     5,
     7,     0,   252,   366,   253,     0,     0,   366,   367,     0,
    77,   377,     7,     0,    78,   377,     7,     0,   115,   377,
     7,     0,   127,   274,     7,     0,     0,   368,   369,     0,
     0,     0,   376,   246,   370,   294,   371,   254,   294,   247,
     7,     0,   127,   274,     7,     0,    80,     5,     7,     0,
    82,     5,     7,     0,   128,     7,     0,    83,     5,     7,
     0,    84,   246,     3,   247,     7,     0,     0,   372,   373,
     0,   127,   274,     7,     0,     0,     0,   376,   246,   374,
   294,   375,   254,   377,   247,     7,     0,     0,   120,     0,
   121,     0,   122,     0,   123,     0,   124,     0,   125,     0,
   126,     0,   252,     5,   447,   253,     0,   252,   447,   253,
     0,     0,   378,   379,     0,   252,   380,   253,     0,   438,
     0,   437,     0,     0,   380,   381,     0,    95,   447,     7,
     0,    95,     5,   284,     7,     0,   130,   252,   383,   253,
     0,     0,   137,   382,   252,   390,   253,     0,   437,     0,
     0,   383,   252,   384,   253,     0,   383,   437,     0,     0,
   384,   385,     0,    95,   447,     7,     0,    85,     5,     7,
     0,   131,   386,     7,     0,   132,   448,     7,     0,   135,
   388,     7,     0,   136,     5,     7,     0,   133,   443,     7,
     0,   134,   448,     7,     0,   437,     0,   447,   285,     0,
   252,   387,   253,     0,     0,   387,   283,   447,     0,   447,
     0,   252,   389,   253,     0,     0,   389,   283,   447,     0,
     0,   390,   391,     0,     5,   447,     7,     0,   139,   290,
     7,     0,   149,   252,   397,   253,     0,   153,   252,   399,
   253,     0,   156,   252,   401,   253,     0,   159,   252,   403,
   253,     0,     5,   246,   447,   247,     7,     0,   139,   246,
   290,   247,     7,     0,   148,     7,     0,    15,   246,   290,
   247,   252,   390,   253,     0,    15,   246,   290,   247,   252,
   390,   253,    16,   252,   390,   253,     0,   141,   246,     5,
   254,   290,   247,     7,     0,   165,   246,     5,   254,   290,
   254,   290,   254,   290,   254,   290,   247,     7,     0,   165,
   246,     5,   254,   290,   254,   290,   254,   290,   247,     7,
     0,   166,   246,     5,   254,   443,   247,     7,     0,   167,
   246,     5,   254,   443,   247,     7,     0,   146,   246,     5,
   254,   290,   247,     7,     0,   147,   246,     5,   254,   274,
   254,     5,   247,     7,     0,   142,   246,     5,   254,     5,
   254,   443,   247,     7,     0,   143,   246,     5,   254,     5,
   254,   441,   247,     7,     0,   144,   246,     5,   254,   441,
   254,   443,   254,   441,   247,     7,     0,   145,   246,     5,
   254,     5,   254,     5,   254,   441,   254,   443,   254,   441,
   254,   441,   247,     7,     0,   149,   246,   441,   254,   441,
   254,   290,   254,   290,   247,   252,   390,   253,     0,   153,
   246,   441,   254,   441,   254,   290,   254,   441,   254,   441,
   247,   252,   390,   253,     0,   156,   246,   441,   254,   441,
   254,   290,   247,   252,   390,   253,     0,   156,   246,   441,
   254,   441,   254,   290,   254,   441,   247,   252,   390,   253,
     0,     0,   188,   392,   246,   394,   395,   247,     7,     0,
     0,   191,   393,   246,   394,   395,   247,     7,     0,   162,
   246,   274,   254,   290,   247,     7,     0,   162,   246,   274,
   254,   290,   254,   441,   254,   290,   247,     7,     0,   183,
   246,   447,   247,     7,     0,   164,   246,   448,   247,     7,
     0,   168,   246,     5,   254,   443,   254,   441,   247,     7,
     0,   169,   246,     5,   254,   441,   254,   448,   247,     7,
     0,   170,   246,     5,   254,   443,   254,   448,   247,     7,
     0,   171,   252,   447,   253,     7,     0,   172,   252,   447,
   253,     7,     0,   178,   252,   447,   254,   274,   254,   448,
   254,   290,   253,     7,     0,   178,   252,   447,   254,   274,
   254,   448,   253,     7,     0,   173,   246,     5,   254,     5,
   254,   441,   254,   441,   247,   252,   390,   253,     7,     0,
   174,   246,     5,   254,     5,   254,   441,   254,   441,   247,
   252,   390,   253,     7,     0,   175,   246,     5,   254,   441,
   247,     7,     0,   179,   252,     5,   254,     5,   254,   132,
   448,   254,     4,   253,     7,     0,   179,   252,     5,   254,
     5,   254,   132,   448,   253,     7,     0,   179,   252,     5,
   254,     5,   253,     7,     0,   176,   246,     5,   254,     5,
   247,     7,     0,   177,   246,     5,   254,     5,   247,     7,
     0,   437,     0,   292,     0,     5,     0,     0,   395,   396,
     0,   254,   203,   448,     0,   254,   206,   443,     0,   254,
   443,     0,     0,   397,   398,     0,   150,   441,     7,     0,
   151,   441,     7,     0,   140,   290,     7,     0,   152,   290,
     7,     0,   137,   252,   390,   253,     0,     0,   399,   400,
     0,   150,   441,     7,     0,   151,   441,     7,     0,   140,
   290,     7,     0,   154,   441,     7,     0,   155,   441,     7,
     0,   137,   252,   390,   253,     0,     0,   401,   402,     0,
   157,   441,     7,     0,    87,   441,     7,     0,   158,   290,
     7,     0,    18,   441,     7,     0,   137,   252,   390,   253,
     0,     0,   403,   404,     0,   157,   441,     7,     0,   160,
   441,     7,     0,    87,   441,     7,     0,    18,   441,     7,
     0,   130,     5,     7,     0,   161,   252,   405,   253,     0,
   137,   252,   390,   253,     0,   138,   252,   390,   253,     0,
     0,   405,   252,   406,   253,     0,     0,   406,   407,     0,
    85,     5,     7,     0,   111,     5,     7,     0,   127,   274,
     7,     0,    87,   441,     7,     0,    98,   290,     7,     0,
    18,     5,     7,     0,     0,   408,   409,     0,   252,   410,
   253,     0,   438,     0,     0,   410,   411,     0,    95,   447,
     7,     0,    95,     5,   284,     7,     0,   131,   447,   285,
     7,     0,   182,     5,     7,     0,   111,   252,   412,   253,
     0,     0,   412,   252,   413,   253,     0,   412,   438,     0,
   412,   437,     0,     0,   413,   414,     0,    95,   447,     7,
     0,    74,   252,   415,   253,     0,     0,   415,   116,   252,
   416,   253,     0,   415,     5,   252,   416,   253,     0,     0,
   416,   417,     0,     0,   376,   246,   418,   294,   247,     7,
     0,    85,     5,     7,     0,     0,   127,   419,   274,     7,
     0,    80,     5,     7,     0,    82,     5,     7,     0,     0,
   420,   421,     0,   252,   422,   253,     0,   438,     0,   437,
     0,     0,   422,   423,     0,    95,   447,     7,     0,   184,
     5,     7,     0,   208,     5,     7,     0,   186,   448,     7,
     0,   137,   252,   426,   253,     0,     0,   183,   447,   185,
   447,   425,   252,   426,   253,     0,     0,     0,   426,   427,
   428,     0,   187,   246,   430,   433,   434,   247,     7,     0,
   188,   246,   430,   433,   434,   247,     7,     0,   188,   246,
   430,   433,   434,   247,   236,   231,   250,   250,   447,     7,
     0,   188,   246,     6,   254,   441,   434,   247,     7,     0,
   188,   246,     6,   254,   220,   246,   448,   247,   434,   247,
     7,     0,     0,   189,   246,   274,   429,   254,   127,   274,
   434,   247,     7,     0,   437,     0,   190,   246,     6,   434,
   247,     7,     0,   447,   432,   254,     0,   447,   432,   431,
     5,   432,   254,     0,   237,     0,   238,     0,   235,     0,
   236,     0,     0,   246,   274,   247,     0,   193,     0,   194,
   274,     0,   195,   274,     0,   197,   252,   252,   444,   253,
   252,   444,   253,   252,   444,   253,   253,     0,   196,   274,
     0,   196,   252,   290,   254,   290,   254,   290,   253,   252,
   443,   254,   443,   254,   443,   253,     0,   198,   252,   444,
   253,     0,   199,   252,   252,   444,   253,   252,   444,   253,
   253,   252,   441,   253,     0,   200,   252,   252,   444,   253,
   252,   444,   253,   252,   444,   253,   253,   252,   441,   254,
   441,   253,     0,   201,   252,   252,   444,   253,   252,   444,
   253,   252,   444,   253,   252,   444,   253,   253,   252,   441,
   254,   441,   254,   441,   253,     0,   194,   274,   202,     5,
   252,   441,   254,   441,   253,   252,   441,   253,     0,     0,
   434,   435,     0,   254,   203,   448,     0,   254,   203,   231,
   448,     0,   254,   203,   234,   448,     0,   254,   204,   441,
     0,   254,   211,     0,   254,   212,     0,   254,   207,   441,
     0,   254,   208,     5,     0,   254,   209,   436,     0,   254,
   210,   436,     0,   254,   208,   436,     0,   254,   205,   441,
     0,   254,   206,   443,     0,   254,   192,     5,     0,   254,
   214,     5,     0,   254,   213,   441,     0,   254,    74,   443,
     0,   254,   215,   441,     0,   254,   215,   252,   444,   253,
     0,   254,   216,     0,   254,   217,     0,   254,   133,   443,
     0,   254,   162,   252,   290,   254,   290,   254,   290,   253,
     0,   254,   218,   292,     0,   254,   219,   252,   441,   254,
   441,   254,   441,   253,     0,     0,   436,     6,     0,    13,
   244,   441,     8,   441,   245,     0,    13,   244,   441,     8,
   441,     8,   441,   245,     0,    13,     5,   127,   252,   441,
     8,   441,   253,     0,    13,     5,   127,   252,   441,     8,
   441,     8,   441,   253,     0,    14,     0,    15,   244,   441,
   245,     0,    17,     0,    28,   246,   439,   247,     7,     0,
   447,   222,   443,     7,     0,   447,   222,     6,     7,     0,
   447,   222,   220,   246,   448,   247,     7,     0,   447,   222,
   449,     7,     0,    11,   244,     6,   245,     7,     0,    11,
   244,     6,   254,   444,   245,     7,     0,    12,   244,   447,
   245,     7,     0,    12,   244,   447,   245,   246,   441,   247,
     7,     0,     0,   439,   283,     5,     0,   439,   283,     5,
   222,   441,     0,   439,   283,     5,   222,     6,     0,    34,
     0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
     0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
     0,    45,     0,    46,     0,    47,     0,    48,     0,    49,
     0,    50,     0,    51,     0,    52,     0,    53,     0,   447,
     0,   442,     0,   244,   441,   245,     0,   236,   441,     0,
   241,   441,     0,   441,   236,   441,     0,   441,   235,   441,
     0,   441,   237,   441,     0,   441,   238,   441,     0,   441,
   239,   441,     0,   441,   243,   441,     0,   441,   229,   441,
     0,   441,   231,   441,     0,   441,   230,   441,     0,   441,
   232,   441,     0,   441,   226,   441,     0,   441,   227,   441,
     0,   441,   225,   441,     0,   441,   224,   441,     0,    34,
   246,   441,   247,     0,    35,   246,   441,   247,     0,    36,
   246,   441,   247,     0,    37,   246,   441,   247,     0,    38,
   246,   441,   247,     0,    39,   246,   441,   247,     0,    40,
   246,   441,   247,     0,    41,   246,   441,   247,     0,    42,
   246,   441,   247,     0,    43,   246,   441,   247,     0,    44,
   246,   441,   254,   441,   247,     0,    45,   246,   441,   247,
     0,    46,   246,   441,   247,     0,    47,   246,   441,   247,
     0,    48,   246,   441,   247,     0,    49,   246,   441,   247,
     0,    50,   246,   441,   247,     0,    51,   246,   441,   254,
   441,   247,     0,    52,   246,   441,   254,   441,   247,     0,
    53,   246,   441,   254,   441,   247,     0,   441,   223,   441,
     8,   441,     0,   441,   249,     0,     4,     0,     3,     0,
    29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
   447,     0,     0,   441,     0,   445,     0,   252,   444,   253,
     0,   441,     0,   445,     0,   444,   254,   441,     0,   444,
   254,   445,     0,   441,     8,   441,     0,   441,     8,   441,
     8,   441,     0,     5,   252,   253,     0,     5,   252,   444,
   253,     0,    24,   246,     5,   247,     0,    25,   246,     5,
   254,     5,   247,     0,    26,   246,   441,   254,   441,   254,
   441,   247,     0,    27,   246,   441,   254,   441,   254,   441,
   247,     0,     5,   256,   252,   441,   253,     0,   446,   256,
   252,   441,   253,     0,     5,     0,   446,     0,     6,     0,
     5,     0,   449,     0,    10,   244,   448,   245,     0,    10,
   244,   448,   254,   444,   245,     0,   221,     0,     9,   246,
   448,   254,   448,   247,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   370,   405,   444,   447,   450,   453,   456,   457,   458,   459,
   460,   461,   462,   463,   464,   466,   468,   470,   475,   484,
   487,   489,   491,   493,   495,   497,   499,   501,   503,   505,
   507,   509,   511,   513,   515,   517,   519,   521,   523,   526,
   534,   548,   551,   552,   555,   559,   564,   566,   569,   571,
   573,   576,   578,   581,   593,   600,   608,   616,   627,   636,
   645,   652,   687,   692,   703,   706,   720,   725,   728,   777,
   790,   816,   821,   836,   854,   875,   881,   893,   902,   916,
   950,   970,   974,   984,  1001,  1001,  1004,  1010,  1013,  1016,
  1029,  1032,  1035,  1039,  1059,  1103,  1105,  1109,  1112,  1129,
  1138,  1145,  1148,  1153,  1159,  1163,  1168,  1173,  1179,  1186,
  1190,  1203,  1218,  1232,  1238,  1244,  1250,  1256,  1262,  1268,
  1274,  1280,  1286,  1292,  1298,  1304,  1310,  1316,  1322,  1328,
  1335,  1341,  1343,  1352,  1356,  1362,  1436,  1470,  1479,  1491,
  1493,  1504,  1506,  1520,  1532,  1538,  1544,  1546,  1575,  1599,
  1612,  1618,  1625,  1631,  1638,  1645,  1653,  1660,  1676,  1679,
  1680,  1683,  1686,  1689,  1694,  1697,  1711,  1718,  1723,  1728,
  1732,  1739,  1744,  1749,  1754,  1760,  1764,  1769,  1772,  1808,
  1816,  1821,  1830,  1834,  1843,  1846,  1851,  1856,  1861,  1869,
  1873,  1885,  1895,  1900,  1905,  1910,  1922,  1926,  1976,  1979,
  1982,  1985,  1988,  1997,  2004,  2005,  2008,  2030,  2033,  2043,
  2047,  2055,  2062,  2071,  2074,  2096,  2113,  2133,  2140,  2150,
  2154,  2166,  2193,  2218,  2223,  2231,  2239,  2249,  2266,  2274,
  2281,  2288,  2297,  2306,  2315,  2334,  2342,  2345,  2368,  2370,
  2374,  2383,  2387,  2395,  2402,  2411,  2414,  2417,  2420,  2425,
  2443,  2490,  2507,  2511,  2516,  2521,  2526,  2540,  2560,  2565,
  2570,  2594,  2649,  2653,  2657,  2666,  2730,  2736,  2741,  2746,
  2750,  2757,  2760,  2765,  2783,  2788,  2792,  2809,  2823,  2828,
  2832,  2845,  2851,  2858,  2865,  2869,  2876,  2886,  2897,  2914,
  2986,  2998,  3002,  3037,  3040,  3043,  3087,  3094,  3097,  3119,
  3121,  3125,  3133,  3137,  3145,  3152,  3162,  3164,  3169,  3184,
  3198,  3202,  3221,  3225,  3230,  3234,  3237,  3248,  3254,  3267,
  3294,  3335,  3361,  3366,  3372,  3683,  3688,  3697,  3706,  3715,
  3720,  3723,  3761,  3778,  3802,  3807,  3814,  3819,  3822,  3825,
  3830,  3838,  3841,  3853,  3863,  3875,  3884,  3887,  3891,  3893,
  3895,  3901,  3922,  3926,  3937,  4015,  4061,  4085,  4094,  4103,
  4108,  4117,  4126,  4143,  4147,  4181,  4190,  4244,  4260,  4263,
  4264,  4265,  4266,  4267,  4268,  4269,  4273,  4296,  4318,  4325,
  4328,  4349,  4351,  4355,  4363,  4367,  4376,  4383,  4386,  4388,
  4391,  4395,  4411,  4426,  4434,  4450,  4454,  4459,  4468,  4471,
  4476,  4481,  4486,  4491,  4495,  4499,  4538,  4543,  4548,  4558,
  4570,  4574,  4579,  4590,  4599,  4608,  4634,  4641,  4647,  4653,
  4659,  4667,  4689,  4696,  4702,  4713,  4724,  4737,  4752,  4767,
  4787,  4808,  4820,  4840,  4857,  4876,  4897,  4931,  4944,  4958,
  4971,  4984,  4991,  4993,  5000,  5002,  5013,  5025,  5035,  5043,
  5056,  5069,  5083,  5093,  5103,  5117,  5131,  5149,  5168,  5179,
  5194,  5209,  5224,  5239,  5254,  5264,  5270,  5280,  5286,  5289,
  5293,  5303,  5317,  5329,  5333,  5339,  5343,  5347,  5352,  5361,
  5374,  5378,  5384,  5388,  5392,  5396,  5401,  5410,  5422,  5425,
  5431,  5435,  5439,  5443,  5452,  5467,  5470,  5476,  5480,  5484,
  5489,  5499,  5505,  5511,  5520,  5524,  5528,  5542,  5545,  5557,
  5586,  5589,  5592,  5600,  5616,  5624,  5627,  5648,  5651,  5662,
  5665,  5673,  5681,  5727,  5732,  5737,  5741,  5744,  5746,  5751,
  5758,  5762,  5766,  5771,  5777,  5783,  5796,  5807,  5810,  5818,
  5846,  5857,  5857,  5863,  5872,  5888,  5896,  5899,  5904,  5906,
  5909,  5918,  5921,  5929,  5941,  5952,  5957,  5962,  5980,  5989,
  5993,  5998,  6008,  6014,  6020,  6026,  6032,  6039,  6044,  6049,
  6054,  6061,  6075,  6097,  6100,  6101,  6102,  6105,  6109,  6113,
  6121,  6128,  6135,  6159,  6166,  6178,  6191,  6211,  6237,  6270,
  6290,  6315,  6318,  6326,  6333,  6340,  6344,  6348,  6352,  6356,
  6366,  6371,  6376,  6396,  6403,  6412,  6421,  6430,  6437,  6445,
  6449,  6458,  6462,  6466,  6474,  6480,  6485,  6497,  6504,  6552,
  6564,  6574,  6588,  6602,  6628,  6632,  6644,  6648,  6663,  6669,
  6675,  6681,  6686,  6698,  6708,  6724,  6727,  6733,  6739,  6750,
  6752,  6753,  6754,  6755,  6756,  6757,  6758,  6759,  6760,  6761,
  6762,  6763,  6764,  6765,  6766,  6767,  6768,  6769,  6770,  6771,
  6774,  6776,  6777,  6778,  6779,  6780,  6781,  6782,  6783,  6784,
  6785,  6786,  6787,  6788,  6789,  6790,  6791,  6792,  6793,  6794,
  6795,  6796,  6797,  6798,  6799,  6800,  6801,  6802,  6803,  6804,
  6805,  6806,  6807,  6808,  6809,  6810,  6811,  6812,  6813,  6814,
  6817,  6820,  6821,  6822,  6823,  6824,  6825,  6843,  6859,  6864,
  6870,  6873,  6878,  6886,  6889,  6892,  6902,  6910,  6921,  6937,
  6959,  6974,  7012,  7020,  7030,  7040,  7050,  7054,  7059,  7064,
  7079,  7084,  7089,  7108,  7125
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tSprintf","tPrintf","tRead","tFor",
"tEndFor","tIf","tElse","tEndIf","tFlag","tHelp","tCpu","tCheck","tInclude",
"tConstant","tList","tListAlt","tLinSpace","tLogSpace","tDefineConstant","tPi",
"t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin","tCos",
"tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor","tCeil",
"tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct","tDofValue",
"tMHTransform","tMHJacNL","tGroup","tDefineGroup","tAll","tInSupport","tMovingBand2D",
"tDefineFunction","tConstraint","tRegion","tSubRegion","tRegionRef","tSubRegionRef",
"tFilter","tCoefficient","tValue","tTimeFunction","tBranch","tNode","tLoop",
"tNameOfResolution","tJacobian","tCase","tIntegration","tFMMIntegration","tMatrix",
"tType","tSubType","tCriterion","tGeoElement","tNumberOfPoints","tMaxNumberOfPoints",
"tNumberOfDivisions","tMaxNumberOfDivisions","tStoppingCriterion","tFunctionSpace",
"tName","tBasisFunction","tNameOfCoef","tFunction","tdFunction","tSubFunction",
"tSubdFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity",
"tEntityType","tEntitySubType","tNameOfConstraint","tFormulation","tQuantity",
"tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham",
"tGlobalTerm","tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof","tJacNL","tNeverDt",
"tDtNL","tIn","tFull_Matrix","tResolution","tDefineSystem","tNameOfFormulation",
"tNameOfMesh","tFrequency","tSolver","tOriginSystem","tDestinationSystem","tOperation",
"tOperationEnd","tSetTime","tDTime","tSetFrequency","tFourierTransform","tFourierTransformJ",
"tLanczos","tPerturbation","tUpdate","tUpdateConstraint","tBreak","tTimeLoopTheta",
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
"tNoNewLine","tDecomposeInSimplex","tChangeOfValues","tFrequencyLegend","tStr",
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
"@14","@15","@16","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@17","@18","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"ListOfBasisFunctionCoef","RecursiveListOfBasisFunctionCoef","GlobalQuantities",
"GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm",
"Formulations","BracedFormulation","Formulation","FormulationTerm","DefineQuantities",
"DefineQuantity","DefineQuantityTerm","@19","@20","@21","IndexInFunctionSpace",
"Equations","EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@22","@23","GlobalTerm",
"GlobalTermTerm","@24","@25","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@26","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@27","@28","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@29","@30","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@31","PostSubOperations","@32",
"PostSubOperation","@33","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","PrintOptions","PrintOption","ParsedStrings","Loop","Affectation",
"DefineConstants","NameForFunction","FExpr","OneFExpr","ListOfFExpr","RecursiveListOfFExpr",
"MultiFExpr","StringIndex","String__Index","CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   258,   257,   259,   260,   259,   261,   261,   261,   261,   261,
   261,   261,   261,   261,   261,   261,   261,   261,   261,   262,
   262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
   262,   262,   262,   262,   262,   262,   262,   262,   262,   263,
   262,   264,   265,   264,   266,   266,   267,   266,   266,   266,
   266,   266,   266,   269,   270,   268,   272,   273,   271,   271,
   274,   274,   275,   275,   276,   276,   277,   277,   277,   278,
   279,   279,   280,   280,   280,   281,   281,   281,   281,   281,
   281,   282,   282,   282,   283,   283,   284,   285,   285,   286,
   287,   287,   288,   288,   288,   288,   288,   289,   289,   290,
   290,   291,   290,   292,   292,   293,   293,   295,   294,   296,
   297,   298,   296,   296,   296,   296,   296,   296,   296,   296,
   296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
   296,   296,   296,   299,   299,   299,   299,   299,   299,   300,
   299,   301,   299,   299,   299,   299,   302,   299,   299,   299,
   299,   299,   299,   299,   299,   299,   299,   299,   303,   303,
   303,   304,   304,   305,   305,   305,   306,   306,   307,   307,
   308,   308,   309,   309,   310,   310,   311,   311,   311,   312,
   312,   313,   313,   314,   314,   314,   315,   315,   316,   316,
   317,   317,   317,   318,   318,   319,   319,   320,   320,   320,
   320,   320,   320,   321,   321,   321,   322,   322,   323,   323,
   324,   324,   324,   324,   324,   325,   325,   325,   326,   326,
   327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
   327,   327,   327,   327,   327,   328,   328,   329,   329,   329,
   330,   330,   331,   331,   331,   331,   331,   331,   331,   332,
   332,   333,   333,   334,   334,   334,   334,   334,   334,   334,
   334,   334,   335,   336,   337,   335,   338,   338,   339,   339,
   340,   340,   340,   341,   341,   342,   342,   343,   343,   344,
   344,   345,   345,   346,   346,   347,   347,   347,   348,   348,
   349,   349,   350,   350,   350,   350,   351,   351,   352,   352,
   352,   353,   353,   354,   354,   354,   354,   354,   355,   355,
   355,   356,   356,   357,   357,   357,   357,   357,   358,   357,
   359,   357,   357,   360,   357,   357,   357,   357,   357,   357,
   361,   361,   362,   362,   362,   362,   363,   363,   363,   363,
   364,   364,   365,   365,   365,   366,   366,   367,   367,   367,
   367,   368,   368,   370,   371,   369,   369,   369,   369,   369,
   369,   369,   372,   372,   373,   374,   375,   373,   376,   376,
   376,   376,   376,   376,   376,   376,   377,   377,   378,   378,
   379,   379,   379,   380,   380,   381,   381,   381,   382,   381,
   381,   383,   383,   383,   384,   384,   385,   385,   385,   385,
   385,   385,   385,   385,   385,   386,   386,   387,   387,   388,
   388,   389,   389,   390,   390,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   392,   391,   393,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   394,   394,   395,   395,   396,
   396,   396,   397,   397,   398,   398,   398,   398,   398,   399,
   399,   400,   400,   400,   400,   400,   400,   401,   401,   402,
   402,   402,   402,   402,   403,   403,   404,   404,   404,   404,
   404,   404,   404,   404,   405,   405,   406,   406,   407,   407,
   407,   407,   407,   407,   408,   408,   409,   409,   410,   410,
   411,   411,   411,   411,   411,   412,   412,   412,   412,   413,
   413,   414,   414,   415,   415,   415,   416,   416,   418,   417,
   417,   419,   417,   417,   417,   420,   420,   421,   421,   421,
   422,   422,   423,   423,   423,   423,   423,   425,   424,   426,
   427,   426,   428,   428,   428,   428,   428,   429,   428,   428,
   428,   430,   430,   431,   431,   431,   431,   432,   432,   433,
   433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
   434,   434,   435,   435,   435,   435,   435,   435,   435,   435,
   435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
   435,   435,   435,   435,   435,   435,   435,   436,   436,   437,
   437,   437,   437,   437,   437,   437,   438,   438,   438,   438,
   438,   438,   438,   438,   438,   439,   439,   439,   439,   440,
   440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
   440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   442,   442,   442,   442,   442,   442,   442,   442,   443,   443,
   443,   443,   444,   444,   444,   444,   445,   445,   445,   445,
   445,   445,   445,   445,   446,   446,   447,   447,   448,   448,
   448,   448,   448,   448,   449
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
     5,     0,    11,     9,     4,     4,     0,     7,     6,     2,
     2,     2,     2,     3,     2,     3,     3,     6,     3,     2,
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
     4,     5,     5,     2,     7,    11,     7,    13,    11,     7,
     7,     7,     9,     9,     9,    11,    17,    13,    15,    11,
    13,     0,     7,     0,     7,     7,    11,     5,     5,     9,
     9,     9,     5,     5,    11,     9,    14,    14,     7,    12,
    10,     7,     7,     7,     1,     1,     1,     0,     2,     3,
     3,     2,     0,     2,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     3,     4,     4,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     0,     2,     3,     1,     0,     2,
     3,     4,     4,     3,     4,     0,     4,     2,     2,     0,
     2,     3,     4,     0,     5,     5,     0,     2,     0,     6,
     3,     0,     4,     3,     3,     0,     2,     3,     1,     1,
     0,     2,     3,     3,     3,     3,     4,     0,     8,     0,
     0,     3,     7,     7,    12,     8,    11,     0,    10,     1,
     6,     3,     6,     1,     1,     1,     1,     0,     3,     1,
     2,     2,    12,     2,    15,     4,    12,    17,    22,    12,
     0,     2,     3,     4,     4,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     5,     2,     2,     3,     9,     3,     9,     0,     2,     6,
     8,     8,    10,     1,     4,     1,     5,     4,     4,     7,
     4,     5,     7,     5,     8,     0,     3,     5,     5,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     2,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
     4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
     4,     4,     4,     4,     4,     6,     6,     6,     5,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
     1,     3,     1,     1,     3,     3,     3,     5,     3,     4,
     4,     6,     8,     8,     5,     5,     1,     1,     1,     1,
     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   727,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   728,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   730,   729,     0,     0,   734,    18,   731,   636,    42,
   204,   167,   180,   236,    91,   297,   379,   515,   546,     0,
     0,   624,     0,   626,     0,     0,     0,     0,    41,   570,
     0,   709,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   205,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   702,   701,   727,     0,     0,
     0,     0,     0,   703,   704,   705,   706,   707,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   710,   661,     0,   711,   708,     0,     0,
     0,     0,     0,     0,     0,     0,    86,     0,     6,     0,
   209,     8,   206,   208,   169,     9,   182,    10,   241,    11,
   237,   240,   239,   727,     0,     7,    92,    97,    96,   302,
    12,   298,   301,   300,   384,    13,   380,   383,   382,   519,
    14,   516,   518,   551,    15,   547,   550,   549,   558,     0,
     0,     0,     0,   578,     0,     0,   727,    63,     0,    61,
   568,     0,    88,   591,     0,     0,   629,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   663,   664,     0,   713,     0,   714,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   700,   628,   631,   725,   632,     0,
   634,     0,     0,   732,     0,   627,   637,   727,     0,    44,
    50,    53,    52,     0,     0,     0,     0,     0,     0,    98,
     0,     0,     0,     0,     0,     0,     0,   625,   580,     0,
     0,     0,     0,     0,     0,     0,     0,   591,     0,     0,
     0,   591,    76,   727,    73,     0,    60,    71,    80,     0,
    57,     0,    62,     0,   726,   719,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   662,   712,     0,   717,     0,   678,   677,   675,
   676,   671,   673,   672,   674,   666,   665,   667,   668,   669,
   670,     0,     0,     0,     0,     0,     0,     0,     0,    82,
   709,     0,     0,     0,     0,     0,   207,   210,     0,     0,
   168,   170,     0,   102,     0,   181,   183,     0,     0,     0,
     0,     0,     0,   238,   242,     0,     0,    85,     0,     0,
     0,     0,   299,   303,     0,     0,   389,   381,   385,   391,
     0,     0,     0,     0,   517,   520,     0,     0,     0,     0,
     0,   548,   552,   560,     0,     0,   581,   582,   102,   584,
     0,     0,     0,     0,     0,     0,     0,   576,   577,   574,
   575,   572,     0,     0,   591,     0,     0,     0,    85,     0,
     0,     0,    89,     0,     0,   592,   720,   721,     0,     0,
     0,   679,   680,   681,   682,   683,   684,   685,   686,   687,
   688,     0,   690,   691,   692,   693,   694,   695,     0,     0,
     0,     0,   715,   716,     0,     0,   633,     0,   735,   733,
   639,   638,     0,     0,    47,     0,    85,   727,     0,     0,
     0,     0,   216,     0,     0,   173,     0,   187,     0,     0,
     0,   108,     0,   289,     0,   727,     0,   250,   267,   282,
   102,     0,     0,     0,     0,   727,     0,   309,   333,   727,
     0,   392,     0,   727,     0,   526,    88,     0,     0,   560,
     0,     0,     0,   561,     0,     0,   620,     0,     0,     0,
     0,     0,     0,     0,     0,   579,   578,     0,     0,     0,
   702,    78,    81,    72,     0,    77,     0,    66,    58,    65,
   571,   709,   709,     0,     0,     0,     0,     0,   709,     0,
   618,   618,   618,   597,   598,     0,     0,     0,   612,   613,
   104,     0,     0,     0,     0,     0,     0,     0,     0,   630,
   718,   699,   635,    90,     0,     0,    64,     0,     0,     0,
    45,     0,     0,   216,     0,   213,   211,     0,     0,     0,
   171,     0,     0,     0,   185,   103,     0,   184,     0,   245,
     0,   243,     0,     0,     0,     0,   102,    93,    99,   306,
     0,   304,     0,     0,     0,   386,     0,   414,     0,   521,
     0,     0,   524,   553,   561,   554,   556,   555,   559,     0,
     0,     0,     0,   102,     0,   586,     0,     0,     0,   563,
     0,     0,     0,   564,     0,     0,     0,    74,   591,    85,
   609,   614,   102,   606,     0,     0,   593,   596,   604,   605,
   599,   600,   603,   601,   602,   608,   607,     0,   610,   102,
   616,     0,   722,     0,     0,   689,   696,   697,   698,    87,
     0,    46,    49,    83,    51,     0,     0,   219,   214,   218,
   212,   175,   172,   189,   186,     0,     0,   727,   640,   641,
   642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
   652,   653,   654,   655,   656,   657,   658,   659,     0,   147,
     0,     0,     0,     0,     0,   140,     0,     0,     0,     0,
     0,     0,     0,     0,   109,   110,   138,     0,   135,   708,
   291,   249,   244,   252,   246,   269,   247,   284,   248,    94,
     0,   305,   312,   307,   311,     0,     0,     0,     0,   308,
   334,   336,   335,   387,   395,   388,   394,     0,   522,   530,
   525,   529,   528,   523,   557,   562,     0,   622,   621,     0,
     0,     0,     0,     0,     0,   573,   591,   566,     0,    79,
    75,     0,     0,     0,     0,   594,   595,   619,     0,   106,
     0,     0,     0,     0,    48,     0,    54,   215,     0,     0,
     0,   100,   101,   137,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   132,   131,   133,     0,   155,   153,   150,
   152,   151,     0,   727,     0,   111,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   139,   164,     0,     0,     0,
     0,    95,     0,   352,   352,   363,   341,     0,     0,     0,
   102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   442,   444,   390,   415,   465,     0,     0,     0,   102,
     0,     0,     0,     0,     0,     0,     0,    59,    70,     0,
     0,   102,   611,   105,   102,     0,   723,   724,     0,     0,
     0,     0,     0,     0,   102,   102,   102,   102,     0,     0,
     0,   102,   217,   220,     0,     0,   174,   176,     0,     0,
     0,   188,   190,     0,   108,     0,     0,     0,     0,     0,
   108,     0,   134,   156,     0,   378,     0,   130,   129,   126,
   127,   128,   122,   124,   123,   125,   118,   119,   114,   117,
   120,   115,   121,   154,   157,   160,     0,   162,     0,     0,
   136,     0,     0,     0,     0,   290,   292,     0,     0,     0,
     0,   104,   104,     0,     0,   251,   253,     0,     0,     0,
   268,   270,     0,     0,     0,   283,   285,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   709,   324,   310,   313,
   369,   369,   369,     0,     0,     0,     0,     0,   709,     0,
     0,     0,   393,   396,   405,     0,     0,   102,   102,     0,
     0,     0,     0,     0,     0,     0,     0,   424,     0,   473,
     0,   480,     0,   488,   495,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   527,   531,   623,
     0,     0,     0,     0,     0,     0,     0,     0,   569,    88,
    68,     0,   107,     0,    84,     0,     0,     0,     0,     0,
   102,     0,   102,     0,     0,     0,     0,     0,     0,   102,
     0,     0,     0,   164,   194,     0,     0,   145,     0,   146,
     0,     0,   142,     0,     0,   108,   377,     0,   159,   161,
     0,     0,     0,     0,     0,     0,    88,     0,     0,   263,
     0,     0,     0,     0,     0,     0,   278,   280,     0,   274,
   276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   727,   319,     0,     0,     0,     0,   108,     0,
     0,     0,     0,   370,   371,   372,   373,   374,   375,   376,
     0,     0,   337,   353,     0,   338,     0,   339,   364,     0,
     0,     0,   346,   340,   342,     0,     0,   408,     0,    88,
     0,     0,     0,   412,     0,   410,     0,     0,   416,     0,
     0,   417,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   104,   104,   534,     0,     0,     0,
     0,     0,     0,     0,   567,     0,    69,   102,     0,     0,
   222,   223,   228,   229,     0,   232,     0,   231,   225,   224,
    85,   226,   221,     0,   230,   178,   177,     0,     0,   191,
   192,     0,     0,     0,   108,     0,   141,     0,   112,   163,
     0,   165,   293,   294,   295,     0,   254,   255,     0,     0,
     0,    85,   259,   260,   261,   262,   271,    85,   273,    85,
   272,   287,   286,   288,   329,   327,   328,   317,   315,   316,
   314,     0,   331,   323,   330,   326,   318,     0,     0,     0,
     0,     0,     0,   360,   354,     0,   366,     0,     0,     0,
   398,   397,    85,   399,   406,   400,   403,   404,    85,   401,
   402,     0,     0,     0,   102,     0,     0,     0,     0,   102,
     0,     0,     0,   102,     0,     0,   102,   418,   474,     0,
     0,   102,     0,     0,     0,     0,   419,   481,     0,     0,
     0,     0,     0,   102,   420,   489,     0,     0,     0,     0,
     0,     0,     0,     0,   421,   496,   102,     0,   102,   709,
   709,   709,     0,   709,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   467,   466,   468,   468,     0,   532,
     0,   709,     0,     0,     0,     0,   565,     0,     0,    55,
   102,   102,     0,   102,   179,   196,   193,     0,   116,   158,
     0,     0,   149,     0,     0,   296,   256,     0,   257,     0,
   279,     0,   275,     0,   321,     0,     0,     0,   358,   359,
   361,     0,   357,   108,   365,   108,   343,   344,     0,     0,
     0,     0,   345,   347,   407,     0,   411,     0,   422,   414,
   423,     0,     0,     0,     0,     0,     0,     0,     0,   414,
     0,     0,     0,     0,     0,   414,     0,     0,     0,     0,
     0,     0,     0,     0,   414,     0,     0,     0,     0,     0,
   414,   414,     0,     0,   505,     0,   449,     0,     0,     0,
     0,     0,     0,   453,   454,     0,     0,     0,     0,     0,
     0,     0,   448,     0,     0,     0,     0,   533,     0,     0,
     0,     0,     0,     0,   615,   617,     0,     0,     0,     0,
     0,     0,   148,     0,     0,   113,     0,     0,     0,   281,
   277,   331,     0,   320,   325,     0,   355,   367,     0,     0,
     0,     0,   409,   413,     0,     0,   709,     0,   709,     0,
     0,     0,   102,     0,   477,   475,   476,   478,   102,     0,
   484,   482,   483,   485,   486,   102,   493,   491,     0,   490,
   492,   500,   499,   501,     0,     0,   497,   498,     0,     0,
     0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   709,   469,     0,   537,
   537,     0,   709,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   195,   197,
     0,     0,   166,     0,     0,     0,   332,   362,     0,     0,
   348,   349,   350,   351,   425,   427,     0,     0,     0,     0,
   432,     0,     0,   479,     0,   487,     0,   494,   503,   504,
   507,   502,   446,     0,     0,   430,   431,     0,     0,     0,
     0,     0,   459,   463,   464,     0,   462,     0,   443,     0,
   709,   472,   445,   369,   369,   590,     0,   583,   587,     0,
     0,     0,   235,   234,   227,   233,     0,     0,     0,     0,
     0,     0,     0,   144,     0,   258,   322,   108,     0,     0,
     0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
   102,   102,     0,     0,     0,     0,     0,     0,   102,     0,
   470,   471,     0,     0,     0,   542,   536,     0,   538,   535,
   709,     0,     0,     0,   198,   199,   200,   201,   202,   203,
     0,     0,     0,     0,   414,   434,   435,     0,     0,   433,
     0,     0,   414,     0,     0,     0,     0,   102,     0,     0,
   506,   508,     0,     0,   450,   451,   452,     0,     0,   456,
     0,     0,     0,     0,     0,     0,     0,   539,     0,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   709,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   102,     0,     0,     0,   461,     0,   544,   545,   541,
     0,   108,   585,     0,     0,     0,   264,   356,   368,   426,
   436,     0,   414,     0,   440,   414,   514,   509,   512,   513,
   510,   511,   447,   429,     0,   414,   414,   455,     0,   543,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   460,     0,   588,     0,    56,     0,     0,   438,
   414,   441,   428,     0,     0,   540,     0,     0,     0,     0,
   457,   458,     0,   265,     0,   439,     0,     0,     0,     0,
     0,   437,   589,    88,     0,     0,   266,     0,     0,     0
};

static const short yydefgoto[] = {  1988,
     1,     2,     3,    22,    23,    24,   106,   180,   300,   636,
   301,   990,  1617,   230,   482,   710,   231,   232,   599,   853,
   981,   337,   479,   338,   527,   178,   398,   343,   399,   112,
   197,   428,   541,   542,  1486,   861,   656,   657,   795,  1027,
  1514,   796,   882,  1355,   876,   916,  1049,  1051,   109,   306,
   412,   650,   870,  1008,   110,   307,   417,   652,   871,  1013,
  1349,  1622,  1720,   107,   183,   305,   408,   645,   869,  1004,
   111,   191,   308,   425,   663,   919,  1067,  1371,  1945,  1978,
   664,   920,  1072,  1222,  1380,  1219,  1378,   665,   921,  1077,
   659,   918,  1057,   113,   202,   311,   434,   673,   923,  1090,
  1393,  1632,  1239,  1527,   674,   821,  1094,  1265,  1410,  1544,
  1091,  1254,  1534,  1729,  1093,  1259,  1536,  1730,  1255,   797,
   114,   207,   312,   439,   563,   677,   928,  1104,  1269,  1413,
  1275,  1419,   828,   965,  1144,  1145,  1487,  1604,  1698,  1291,
  1439,  1293,  1448,  1295,  1456,  1296,  1466,  1679,  1810,  1862,
   115,   212,   313,   446,   681,   967,  1149,  1489,  1774,  1829,
  1912,  1877,   116,   216,   314,   453,    25,   315,   574,   690,
    79,   340,   223,   473,   330,   328,   344,   486,   723,   966,
    26,   105,   798,   266,   165,   166,   267,   268,    27,   168,
    57,    58
};

static const short yypact[] = {-32768,
-32768,    14,  4069,  -209,  -183,  -117,   838,    67,   885,   499,
  -102,   -21,    -8,    43,    51,    60,    62,    70,    81,   153,
    37,-32768,-32768,   422,-32768,-32768,   187,   235,   228,   495,
   485,   519,-32768,   527,   563,   575,   580,   583,-32768,   591,
-32768,   594,   599,   608,   624,   627,   635,   641,   646,   666,
   676,-32768,-32768,   390,   423,-32768,-32768,-32768,-32768,-32768,
   683,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   500,
    83,-32768,   455,-32768,   456,   472,   479,   493,-32768,-32768,
   453,  2410,  3944,  -191,   488,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   499,   499,   162,   497,   171,-32768,   167,   181,
   197,   441,   296,   324,   210,   459,   485,   643,  3944,  3944,
   485,   534,   127,   776,  3944,-32768,-32768,  -159,   749,   516,
   526,   528,   546,-32768,-32768,-32768,-32768,-32768,   552,   562,
   576,   614,   626,   637,   670,   681,   686,   707,   730,   747,
   759,   762,   769,   771,   802,   804,   810,   835,   836,  3944,
  3944,  3944,  2745,  4053,-32768,   822,-32768,-32768,   840,  4725,
   847,  2745,    84,   633,   -64,   874,-32768,   884,-32768,  1094,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -154,   839,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   698,
  4074,  1755,  1488,   842,   813,  1488,  -151,-32768,    17,-32768,
-32768,   843,   832,-32768,  4756,  1622,-32768,  1018,  1081,  3944,
  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,
  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,
  3944,   499,   -49,   -49,  5128,  4053,   398,-32768,  3944,  3944,
  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,  3944,
  3944,  3944,  3944,  3944,-32768,-32768,-32768,-32768,-32768,   -38,
-32768,  3944,   499,-32768,  2745,-32768,   803,   -77,   844,-32768,
-32768,-32768,-32768,  -101,   326,   253,   397,   570,    55,-32768,
   448,   330,   502,   756,   845,  3944,  3944,-32768,-32768,   127,
   127,    19,   852,   858,   861,   865,   866,-32768,   127,   421,
  3842,-32768,  1083,   262,-32768,  2745,-32768,-32768,-32768,   867,
-32768,   848,-32768,   212,-32768,-32768,   427,   872,   870,  3869,
  4032,  5155,  5182,  5209,  5236,  5263,  5290,  5317,  5344,  5371,
  5398,  4158,  5425,  5452,  5479,  5506,  5533,  5560,  4179,  4200,
  4221,   873,-32768,-32768,  2745,  4095,  4116,  1482,  2042,  1071,
  1071,   808,   808,   808,   808,   470,   470,   -49,   -49,   -49,
   -49,  1085,  5587,   887,   -27,  3893,    74,   913,   915,-32768,
  2181,   917,  3944,    41,  1131,   485,-32768,-32768,   889,  1137,
-32768,-32768,   891,    39,  1158,-32768,-32768,   916,  1164,  1171,
   929,   930,   937,-32768,-32768,   968,   945,   214,  1188,  1189,
   943,   944,-32768,-32768,  1194,   951,-32768,-32768,-32768,-32768,
  1195,   959,   485,  1207,-32768,-32768,   485,   962,  1210,   499,
  1213,-32768,-32768,-32768,  4137,  3990,  1017,-32768,    39,-32768,
   976,  2745,   977,   978,   979,   278,   985,-32768,-32768,-32768,
-32768,-32768,  1229,   990,  6127,   282,  4007,   986,   461,   487,
  1113,    12,-32768,  1234,  2460,-32768,-32768,-32768,  1237,  3944,
  3944,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  3944,-32768,-32768,-32768,-32768,-32768,-32768,  3944,  3944,
  3944,  1246,  4053,-32768,  3944,  3944,-32768,  1253,-32768,-32768,
-32768,  6127,  1008,  3944,-32768,   173,   284,  -110,  1255,   173,
  5614,  1014,-32768,  1260,    64,-32768,  1261,-32768,  1024,  1025,
  1265,-32768,  1266,-32768,  1267,   264,  1268,-32768,-32768,-32768,
    39,  1054,  1271,  1279,  1282,   264,  1283,-32768,-32768,   264,
  1290,-32768,  1059,   264,  1305,-32768,   832,  1309,  1310,-32768,
  1311,  1312,  1314,  1069,  3944,  3944,-32768,  1319,  1074,  2745,
   490,  2745,  2745,  2745,  1322,-32768,   842,   499,   313,     6,
  1328,  6127,-32768,-32768,    27,-32768,   127,-32768,-32768,-32768,
-32768,  2516,  2516,  1078,  1336,   547,  3944,  3944,  2516,  3944,
  1337,-32768,-32768,-32768,-32768,  3944,  1343,  2567,-32768,-32768,
  1098,  1102,  1112,  4242,  4263,  5641,  5668,  5695,  5722,-32768,
  6127,  6127,-32768,-32768,  4787,   173,-32768,  1348,  1354,  1357,
-32768,  1356,  1143,-32768,   271,-32768,-32768,  1117,  1362,   524,
-32768,   537,  3944,  1367,-32768,-32768,  2121,-32768,   544,-32768,
  1368,-32768,   554,   566,   582,  1369,    39,-32768,-32768,-32768,
  1374,-32768,   336,    68,  1375,-32768,   365,-32768,  1378,-32768,
   483,  1379,-32768,-32768,  1121,-32768,-32768,-32768,-32768,   422,
   522,  5749,  1135,    39,   602,-32768,   609,   623,   625,-32768,
  1134,  1145,  1387,-32768,  1165,  3944,    18,-32768,-32768,   318,
-32768,-32768,    39,-32768,   499,   499,-32768,  6127,  6127,-32768,
  6127,-32768,  1389,  1389,  1389,  6127,-32768,  2745,  6127,    39,
-32768,  3944,-32768,  3944,  3944,-32768,-32768,-32768,-32768,-32768,
  1390,-32768,-32768,  1146,-32768,  1334,   387,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  5776,  1156,   317,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1159,-32768,
  1160,  1161,  1162,  1163,  1166,-32768,  1399,  2121,  2121,  2121,
  2121,  1407,    40,  1408,  3625,  -125,  1168,  1168,-32768,  1170,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1410,-32768,-32768,-32768,-32768,  1172,  1173,  1174,  1175,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2568,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  3944,-32768,-32768,  3944,
  1176,  1177,  1179,  1185,  1190,-32768,-32768,-32768,  1199,  6127,
-32768,   346,  1203,   125,  1197,-32768,-32768,-32768,   657,-32768,
   660,  4284,  5803,  5830,-32768,  3944,-32768,-32768,   849,    26,
   396,-32768,-32768,-32768,  1201,  1208,  1201,  2121,  1413,  1450,
  1451,  1211,  1238,  1228,  1228,  1228,  1904,-32768,-32768,-32768,
-32768,-32768,   485,    31,  1219,-32768,  2121,  2121,  2121,  2121,
  2121,  2121,  2121,  2121,  2121,  2121,  2121,  2121,  2121,  2121,
  2121,  2121,  1470,  3944,  2063,-32768,  1222,   708,  1107,    38,
   450,-32768,  1288,-32768,-32768,-32768,-32768,   678,    20,    -1,
    94,  1230,  1231,  1232,  1239,  1251,  1252,  1256,  1468,   -29,
   -17,   247,  1247,  1258,  1259,  1262,  1263,  1264,  1276,  1284,
  1285,  1249,  1277,  1287,  1291,  1294,  1298,  1301,  1296,  1299,
  1315,-32768,-32768,-32768,-32768,-32768,   -23,  4818,  4305,    39,
  2745,  2745,  2745,  2745,   348,  1286,  1496,-32768,-32768,   485,
    17,    39,-32768,-32768,    39,  3944,-32768,-32768,  4849,  1323,
   127,   127,   127,   127,   180,   182,    39,    39,  1304,  1502,
  1512,   183,-32768,-32768,    21,  1530,-32768,-32768,  1318,  1568,
  1569,-32768,-32768,  1331,-32768,  1332,  2151,  1321,  1335,  1333,
-32768,  1344,-32768,-32768,  1329,-32768,  2121,  2274,  2397,  1697,
  1697,  1697,   890,   890,   890,   890,   773,   773,  1228,  1228,
  1228,  1228,  1228,-32768,-32768,-32768,  1342,  3625,   372,  3791,
-32768,  1578,    48,  1586,   485,-32768,-32768,  1592,  1593,  1595,
  1349,  1098,  1098,   127,   127,-32768,-32768,  1597,    44,    45,
-32768,-32768,  1598,   485,  1599,-32768,-32768,  1600,  1602,  1603,
    85,   485,  1604,  1607,  1610,   127,  2516,-32768,-32768,-32768,
   914,  1339,  1100,   333,  1609,   485,    53,   499,  2516,   499,
    63,  1614,-32768,-32768,-32768,   485,  1608,    39,    39,  1613,
  1616,  1618,  1623,  1624,  1625,  1626,  1627,-32768,  3944,-32768,
  3944,-32768,  3944,-32768,-32768,   127,   499,  1628,  1637,  1638,
  1639,  1640,  1645,   485,   485,  1671,  1672,  1674,  1686,  1687,
   485,  1689,   485,  1432,  1449,  1444,   485,-32768,-32768,-32768,
  3944,  1445,   682,   695,   704,   709,  1690,   485,-32768,   832,
-32768,  1452,-32768,  4326,-32768,  1454,  1708,  1709,  1715,  1717,
    39,  1720,    39,  1721,  1722,  1723,   940,  1725,  1726,    39,
  1728,  1729,  1730,  1222,-32768,  1731,  1741,-32768,  1495,-32768,
  2121,  1701,-32768,  1499,  1505,-32768,-32768,   922,-32768,-32768,
  2121,  1507,   721,  1747,  1748,  1749,   832,  1750,    79,  1506,
  1754,  1753,  1757,  1758,  1759,  1766,-32768,-32768,  1771,-32768,
-32768,  1778,  1779,  1780,  1782,  1784,  1785,  1786,  1789,  1790,
  1791,  1793,   351,-32768,  1794,  1797,  1798,  1799,-32768,  1804,
  1805,  1808,  1572,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   127,  1807,-32768,-32768,  1574,-32768,   127,-32768,-32768,  1575,
  1810,  1817,-32768,-32768,-32768,  1816,  1818,-32768,  1819,   832,
  1820,  1826,  1827,-32768,  1828,-32768,  1830,  1591,-32768,  1594,
  1596,-32768,  1585,  1588,  1590,  1601,  1605,  1606,  1611,  4347,
   734,  4368,   629,  4389,   328,   484,  1615,  1617,  1633,  1634,
  1635,  1636,  1641,  1647,  1587,  1619,  1652,  1659,  1660,  1661,
  1665,  1666,  1670,  1621,    73,    73,-32768,  1838,  4880,  1629,
  1630,  1685,  1642,  1691,-32768,  1839,-32768,    39,  3944,    17,
-32768,-32768,-32768,-32768,  1688,-32768,  1693,-32768,-32768,-32768,
  1694,-32768,-32768,  1695,-32768,-32768,-32768,  1840,   729,-32768,
-32768,   127,  6154,  1631,-32768,  3944,-32768,  1632,-32768,  3625,
   127,-32768,-32768,-32768,-32768,  1841,-32768,-32768,  1843,  1742,
  1845,  1694,-32768,-32768,-32768,-32768,-32768,   731,-32768,   746,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1707,  1646,-32768,-32768,-32768,-32768,  1644,  1847,  1849,
  1854,  1859,  1860,-32768,-32768,  1863,-32768,  1864,  1869,   435,
-32768,-32768,   750,-32768,-32768,-32768,-32768,-32768,   766,-32768,
-32768,  1870,  1692,  1873,    39,  1888,  1920,  3944,  1934,    39,
   127,  3944,  1716,    39,  3944,  3944,    39,-32768,-32768,  3944,
  1736,    39,  3944,  3944,  3944,  3944,-32768,-32768,  3944,  3944,
  3944,  1737,  3944,    39,-32768,-32768,  3944,  3944,  1936,  1743,
  1745,  3944,  3944,  1764,-32768,-32768,    39,  1954,    39,  2516,
  2516,  2516,  3944,  2516,  1960,  1962,  1967,  1968,  3944,  1969,
  1970,   127,  1972,  1976,-32768,-32768,-32768,-32768,    47,-32768,
  1765,  2516,  2745,  1772,  2745,  2745,-32768,  1746,  4911,-32768,
    39,    39,   940,    39,-32768,-32768,-32768,  1776,-32768,-32768,
  1792,  4410,-32768,  2121,  1795,-32768,-32768,  1996,-32768,  1997,
-32768,  2006,-32768,  2020,-32768,   485,  2022,  2023,-32768,-32768,
-32768,  1796,-32768,-32768,-32768,-32768,-32768,-32768,  1201,  1201,
  1201,   127,-32768,-32768,-32768,   485,-32768,   485,-32768,-32768,
-32768,  1800,  1773,  1777,  4431,  1801,  1802,  1809,  4452,-32768,
  2026,   601,   948,  2029,  4473,-32768,  2030,  1020,  1056,  1108,
  1209,  4494,  1257,  1289,-32768,  1545,  2031,  1673,  1727,  2033,
-32768,-32768,  1783,  2027,-32768,   373,-32768,  1811,  1803,  1806,
  1815,  4515,  1821,-32768,-32768,  1822,  1823,  5857,  1812,  1814,
  1824,   768,-32768,   381,   415,  1832,  1833,-32768,  3944,  1825,
   779,  3944,   801,   806,-32768,-32768,  1834,  1835,  1842,  1837,
  1890,   777,-32768,  1891,  3944,  3625,  1892,  2037,  1893,-32768,
-32768,  1646,  1901,-32768,-32768,  2038,-32768,-32768,  2039,  2044,
  2045,  2047,-32768,-32768,  2681,  2049,  2516,  3944,  2516,  2053,
  2055,  2065,    39,  2748,-32768,-32768,-32768,-32768,    39,  2799,
-32768,-32768,-32768,-32768,-32768,    39,-32768,-32768,  2863,-32768,
-32768,-32768,-32768,-32768,  2978,  3042,-32768,-32768,   812,  2064,
  3944,    39,  2066,  2067,  3944,   499,   499,  3944,  3944,  2073,
  2079,  2080,   499,  2175,  1940,  2182,  2292,-32768,  2184,-32768,
-32768,  4942,  2516,  1939,  4973,  1942,  1944,  1948,  2191,  2192,
  2193,  2195,  2198,  3944,  3944,  3944,  3944,  3944,-32768,-32768,
  1952,  5004,-32768,  2099,  2228,  2229,-32768,-32768,  1983,  1984,
-32768,-32768,-32768,-32768,  2223,-32768,  1995,  5884,  1989,  1990,
-32768,  1998,  1992,-32768,  1993,-32768,   416,-32768,-32768,-32768,
-32768,-32768,-32768,  4536,  2001,-32768,-32768,  5911,  2013,  2014,
  4557,  4578,-32768,-32768,-32768,   816,-32768,   499,-32768,   499,
  2516,-32768,-32768,  1514,  1620,-32768,  2021,-32768,-32768,  2015,
  2745,    17,-32768,-32768,-32768,-32768,  2275,  2241,  2837,  3131,
  3420,  3447,  3944,-32768,  2278,-32768,-32768,-32768,  1201,  2034,
  2280,  2281,  3944,  3944,  2282,    39,  3944,  2041,  3944,   457,
    39,    39,  2283,  2287,  2293,  3944,  3944,  2294,    39,   819,
-32768,-32768,  2297,  2298,  2300,-32768,-32768,  2060,-32768,-32768,
  2516,  3944,   821,  2054,-32768,-32768,-32768,-32768,-32768,-32768,
  5035,  2057,  2100,  2101,-32768,-32768,-32768,  5938,  4599,-32768,
  2102,  4620,-32768,  5965,  2309,  2315,  3944,    39,  2341,   127,
-32768,-32768,  2104,   425,-32768,-32768,-32768,  5992,  6019,-32768,
  2105,  2345,  2349,  2347,  2348,  2352,   127,-32768,  2107,  4641,
  2108,  3944,-32768,  2356,  2357,  2359,  3093,  2360,  2516,  2116,
  3944,  3157,  2117,  2365,  2377,  3535,  2378,  2385,  2386,  2388,
  2389,    39,  2145,  2146,  2392,-32768,  2147,-32768,-32768,-32768,
  2395,-32768,-32768,  3944,  2152,  6046,-32768,-32768,-32768,-32768,
-32768,  2149,-32768,  6073,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2159,-32768,-32768,-32768,  2400,-32768,
  2161,  5066,  3944,  2402,  2350,  3944,  3272,  2158,  3336,  2405,
  3387,  3451,-32768,  2411,-32768,  4662,-32768,   127,  4683,-32768,
-32768,-32768,-32768,  2413,  2414,-32768,  3944,  2416,  3944,  3566,
-32768,-32768,  4704,-32768,  6100,-32768,  3944,  2295,  2419,  5097,
  2422,-32768,-32768,   832,  2421,  2176,-32768,  2431,  2432,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -294,-32768,-32768,  -265,  1385,-32768,-32768,
  1415,  -478,-32768,  -585,-32768,  -412,  -527,  -564,-32768,-32768,
-32768,-32768,   382,-32768,  -615,-32768,  -956,-32768,  -750,-32768,
-32768,-32768,-32768,-32768,-32768,  1676,-32768,  1297,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1831,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   850,-32768,-32768,-32768,-32768,-32768,-32768,
  1558,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1088,  -746,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768, -1362,-32768,-32768,-32768,  1169,   998,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   786,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1918,-32768,
  1836,-32768,  2367,-32768,  1905,  2265,  -301,-32768,   465,   -13,
    57,-32768,-32768,   114,  -650,  -533,  -170,   -81,-32768,    -3,
   -69,   -73
};


#define	YYLAST		6401


static const short yytable[] = {    28,
   167,   290,   682,   600,  1260,   731,   799,   649,   169,   708,
    80,   874,   704,    -2,   333,   554,   334,    70,   661,   333,
   333,   334,   334,   227,     4,   227,   466,    85,   671,   333,
   476,   334,   675,   174,   175,     4,   679,   884,   885,   886,
   887,     4,   889,   427,   890,   532,    29,   108,  1217,  1220,
  1146,  1606,   637,   171,   457,   458,   460,     4,  1189,   227,
    30,   539,   172,   467,  1195,   347,   595,     4,   711,   712,
   647,  1147,     4,    39,   598,   720,   523,  1485,     5,     6,
    71,    72,    73,  1182,    74,  1368,   228,   118,   228,  1229,
   291,   309,   236,  1005,   -64,    11,    29,   192,   198,   203,
   208,    29,   217,    28,    29,  1006,   529,    28,    28,    28,
    28,    28,    28,   219,   640,   228,   539,   224,   224,   233,
   401,   851,   228,   913,   395,   914,    31,  1017,  1014,   979,
  1016,   227,  1068,   402,  1069,   -64,   540,   799,   799,   799,
   799,   236,  1070,    59,   403,    29,  1028,  1029,  1030,  1031,
  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
  1042,  1043,  1607,   184,  1048,   480,   302,   193,   199,   204,
   209,   213,   218,   589,   397,     4,   304,   637,    29,   891,
   294,     5,     6,   816,   817,   818,   819,  1645,   980,   295,
  1230,   540,   372,   284,   228,   164,   170,  1654,    11,   285,
  1231,     4,   539,  1660,   539,   539,   392,     5,     6,    71,
    72,    73,  1669,    74,     4,   375,  1119,   520,  1675,  1676,
     5,     6,  1120,   394,    11,   339,   375,   799,  1121,  1148,
    60,   638,   221,   222,  1122,   642,   303,    11,   235,  1358,
   228,   705,   120,    61,  1108,   892,   799,   799,   799,   799,
   799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
   799,   799,   707,   335,   799,  1106,   336,   229,   335,   229,
   459,   336,   336,   263,   264,   265,  1198,   540,  1007,   540,
   540,   336,  1398,    71,    72,    73,    29,    74,    69,   893,
  1071,   581,   533,   514,    62,  1218,  1221,   854,   440,  1608,
     4,   426,    63,   229,  1268,   233,     5,     6,    71,    72,
    73,    64,    74,    65,  1274,   648,   233,   233,   233,   167,
   820,    66,   524,    11,   730,   233,   119,   169,     4,   292,
   648,   709,    67,   409,     5,     6,    71,    72,    73,  1109,
    74,   741,    71,    72,    73,  1450,    74,   410,    71,    72,
    73,    11,    74,   350,   351,   352,   353,   354,   355,   356,
   357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
   367,   368,   369,   370,   371,   229,   799,    71,    72,    73,
   572,    74,   376,   377,   378,   379,   380,   381,   382,   383,
   384,   385,   386,   387,   388,   389,   390,   391,  1511,    71,
    72,    73,   535,    74,    68,   393,   404,   852,   176,   695,
   405,   697,   698,   699,  1451,   177,   547,  1261,   185,   186,
   406,   229,   181,   182,   435,  1171,   557,  1173,  1180,   455,
   456,   561,   187,   188,    71,    72,    73,   565,    74,   567,
  1353,  1262,    81,   569,   475,   194,  1212,  1213,   189,   190,
  1360,     5,     6,    71,    72,    73,    82,    74,   484,   436,
   553,   210,   211,     4,  1452,   485,   437,   177,    11,     5,
     6,    71,    72,    73,  1855,    74,  1009,   413,   339,    83,
  1010,  1011,  1887,   414,  1453,  1454,    11,     4,   513,     4,
  1892,   415,  1123,     5,     6,    71,    72,    73,  1124,    74,
    84,  1457,  1161,    52,    53,   411,   195,    54,    55,   522,
    11,  1539,  1540,   478,   164,   648,   531,    29,   702,    29,
   167,   167,   748,   749,   585,    86,  1341,   167,   590,   837,
   639,   485,   429,    87,  1073,   485,   717,   177,     4,   225,
   799,  1856,   430,  1857,  1074,   975,  1075,   200,   201,  1541,
   799,    52,    53,  1238,  1858,    54,    55,   859,   431,   703,
  1947,  1542,   432,  1949,   -67,  1272,   485,  1859,   794,    88,
  1458,   177,    29,  1951,  1952,   205,   206,  1637,   407,  1638,
  1455,    89,   438,  1860,  1263,  1264,    90,   813,   814,    91,
   592,   339,   977,   233,  1157,  1327,   441,    92,  1970,   485,
    93,   485,  1392,   624,   625,    94,    29,  1656,    75,    76,
    77,    78,   442,  1459,    95,   626,   825,   826,  1200,  1680,
  1460,  1461,   627,   628,   629,  1201,  1681,  1696,   631,   632,
    96,   750,   443,    97,  1697,   103,   418,   635,   748,   868,
  1462,    98,  1366,  1463,  1464,   856,   857,    99,  1012,   416,
   374,   375,   100,   800,   419,   468,   469,   470,   471,   815,
   822,  1699,  1808,   827,   420,   421,   104,   832,  1697,  1809,
    28,  1901,   101,   422,   472,   423,    80,    28,  1902,   487,
   375,  1369,   102,   444,   117,  1828,  1828,  1543,   691,   692,
    71,    72,    73,   196,    74,    71,    72,    73,   120,    74,
   433,   121,  1076,   339,   125,  1415,   281,   282,   283,  1861,
   214,   215,   284,   594,   177,   164,   164,   122,   285,    56,
   718,   719,   164,   721,   123,  1167,  1168,  1169,  1170,   726,
   823,   729,   173,   750,   830,   831,  1465,   833,   124,  1183,
   375,   596,   696,   375,   270,   271,   272,   273,   274,   179,
   275,   276,   277,   278,   445,   237,   279,   280,   281,   282,
   283,   238,  1095,  1626,   284,  1441,   756,    56,  1442,   220,
   285,   239,  1096,   240,   838,   752,   753,   715,  1443,  1444,
   716,   234,  1445,  1446,   800,   800,   800,   800,   754,   755,
   895,   241,  1639,  1640,  1641,   801,   802,   242,  1214,  1215,
  1153,  1154,  1155,  1156,  1052,   804,   805,   243,  1097,  1098,
  1099,  1100,  1101,  1102,  1053,  1054,  1055,   806,   807,   850,
  1237,   244,   424,   270,   271,   272,   273,   274,   286,   275,
   276,   277,   278,   808,   809,   279,   280,   281,   282,   283,
   579,  1843,    32,   284,    33,   862,   287,   863,   864,   285,
   447,  1500,  1620,   289,   842,   375,    34,    35,    36,   245,
  1297,   843,   375,   799,  1713,  1714,  1715,  1716,  1717,  1718,
  1433,   246,    37,  1434,   800,   844,   375,   845,   375,  1203,
   296,  1447,   247,  1435,  1436,  1437,   293,    40,   297,  1024,
  1025,    41,   448,   800,   800,   800,   800,   800,   800,   800,
   800,   800,   800,   800,   800,   800,   800,   800,   800,   983,
   375,   800,   984,   985,  1105,   248,   991,   992,   993,   994,
   995,   996,   997,   998,   999,  1107,   249,  1000,  1503,  1359,
  1103,   250,   666,  1001,  1321,   375,  1589,  1590,  1591,   449,
  1593,   450,   126,   127,     4,    42,  1002,  1322,   375,   316,
   968,    43,   251,   969,  1657,  1941,  1323,   375,  1610,  1520,
  1056,  1324,   375,   451,    44,  1522,    45,  1524,   134,   135,
   136,   137,   138,  1362,   375,   252,  1160,   339,    46,   989,
  1506,  1507,    47,  1521,   177,  1403,  1438,   233,   233,   233,
   233,  1406,   253,  1240,    48,  1241,  1242,  1243,  1523,   177,
  1546,   233,  1545,   177,   254,   167,  1548,   255,   452,   908,
   909,   910,   911,    49,   256,   912,   257,   167,  1547,   177,
  1694,  1695,   348,   800,   396,    38,  1662,  1045,  1271,  1719,
  1273,  1704,   375,  1244,  1245,  1246,  1247,  1248,  1249,  1250,
  1251,  1252,   279,   280,   281,   282,   283,   258,   811,   259,
   284,  1207,  1844,  1706,   375,   260,   285,  1298,  1707,   375,
   233,   233,  1663,  1751,  1752,    50,   331,    51,  1818,  1819,
  1224,  1872,  1873,  1881,   375,   841,   724,   725,  1232,  1234,
   261,   262,   233,   342,   310,   349,  1508,   329,   341,   400,
   477,   517,  1267,  1270,   855,  1515,   454,  1276,   298,  1164,
   483,  1003,  1278,   461,     5,     6,    71,    72,    73,   462,
    74,   860,   463,  1737,  1664,  1739,   464,   465,   488,   512,
   481,    11,   233,   489,   906,   907,   908,   909,   910,   911,
  1305,  1306,   912,   519,   525,   534,   526,  1312,   530,  1314,
   536,   537,   538,  1318,   896,   897,   898,   899,   900,   901,
   902,   903,   904,   905,  1326,   299,   906,   907,   908,   909,
   910,   911,   543,  1772,   912,  1558,  1253,   544,   545,  1777,
   270,   271,   272,   273,   274,   546,   275,   276,   277,   278,
   548,   549,   279,   280,   281,   282,   283,   800,   550,   551,
   284,   552,   555,   556,   558,   559,   285,   800,   560,   564,
   164,  1058,   562,  1059,  1060,  1061,  1062,  1063,  1064,  1065,
   566,   568,   164,   570,   571,  1665,  1601,   573,   578,  1244,
  1245,  1246,  1247,  1248,  1249,  1250,  1257,   580,   582,   583,
   584,   586,  1290,   587,  1292,   588,  1294,  1822,   593,   597,
   601,   623,   270,   271,   272,   273,   274,   233,   275,   276,
   277,   278,   630,   233,   279,   280,   281,   282,   283,   633,
   634,   641,   284,  1667,  1319,   644,   646,   651,   285,   653,
   654,   655,   658,   660,   662,   667,  1642,   668,   270,   271,
   272,   273,   274,   669,   275,   276,   277,   278,   670,   672,
   279,   280,   281,   282,   283,  1668,   676,  1879,   284,   275,
   276,   277,   278,  1834,   285,   279,   280,   281,   282,   283,
   678,   680,  1110,   284,  1884,   683,   684,   686,   687,   285,
   688,   689,  1611,   693,  1613,  1614,   339,   694,   700,   713,
   270,   271,   272,   273,   274,   706,   275,   276,   277,   278,
   714,   722,   279,   280,   281,   282,   283,   727,   233,   730,
   284,  1152,  1258,   732,   742,  1922,   285,   233,   733,  1066,
   743,   744,   745,  1162,   746,   524,  1163,  1078,   751,  1079,
  1080,   757,  1081,   835,   803,   810,  1172,  1174,  1175,  1176,
   812,   824,  1082,  1181,   829,   834,   840,   846,   167,   167,
   167,   847,   167,   848,   858,   849,   865,   866,   867,  1083,
  1084,  1085,   873,   883,   875,   877,   878,   879,   880,   888,
   167,   881,   894,   915,  1086,  -660,   922,  1018,  1240,  1985,
  1241,  1242,  1243,   924,   925,   926,   927,   233,   971,   970,
   972,   270,   271,   272,   273,   274,   973,   275,   276,   277,
   278,   974,  1499,   279,   280,   281,   282,   283,   976,   978,
   982,   284,   794,  1015,  1019,  1020,  1021,   285,  1244,  1245,
  1246,  1247,  1248,  1249,  1250,  1251,  1252,  1087,  1022,  1512,
   912,  1026,  1044,  1050,  1118,  1111,  1112,  1113,   233,   270,
   271,   272,   273,   274,  1114,   275,   276,   277,   278,  1280,
  1281,   279,   280,   281,   282,   283,  1115,  1116,  1125,   284,
  1134,  1117,  1159,  1126,  1127,   285,  1178,  1128,  1129,  1130,
   800,   270,   271,   272,   273,   274,  1179,   275,   276,   277,
   278,  1131,  1633,   279,   280,   281,   282,   283,  1135,  1132,
  1133,   284,  1136,  1088,  1184,  1158,  1137,   285,   233,  1138,
  1089,  1555,  1643,  1139,  1644,  1559,  1140,  1141,  1562,  1563,
  1142,  1670,  1335,  1565,  1337,  1177,  1568,  1569,  1570,  1571,
  1143,  1344,  1572,  1573,  1574,   167,  1576,   167,  1166,  1185,
  1578,  1579,  1186,  1187,  1192,  1583,  1584,  1188,  1190,  1194,
  1193,  1197,  1204,   164,   164,   164,  1592,   164,  1199,  1196,
   979,  1256,  1598,  1823,  1899,  1824,  1208,  1209,  1825,  1210,
  1211,  1216,  1223,  1225,  1226,   164,  1227,  1228,  1233,  1235,
  1833,  1911,  1236,  1266,  1279,   167,  1759,  1760,  1277,  1282,
  1283,   167,  1284,  1766,   126,   127,   128,  1285,  1286,  1287,
  1288,  1289,  1299,  1244,  1245,  1246,  1247,  1248,  1249,  1250,
  1826,  1300,  1301,  1302,  1303,   130,   131,   132,   133,  1304,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,  1307,  1308,  1315,  1309,  1672,
   319,   320,   321,   322,   323,   324,   325,   326,   327,   167,
  1310,  1311,  1968,  1313,  1316,  1317,  1325,  1320,  1820,  1823,
  1821,  1824,  1330,  1354,  1825,  1328,   272,   273,   274,  1498,
   275,   276,   277,   278,  1331,  1332,   279,   280,   281,   282,
   283,  1333,  1702,  1334,   284,  1705,  1336,  1338,  1339,  1340,
   285,  1342,  1343,  1673,  1345,  1346,  1347,  1350,  1722,  1244,
  1245,  1246,  1247,  1248,  1249,  1250,  1826,  1351,  1352,   167,
  1356,  1357,  1361,  1363,  1364,  1365,  1367,  1370,  1372,  1373,
   164,  1738,   164,  1374,  1375,  1376,  1827,   270,   271,   272,
   273,   274,  1377,   275,   276,   277,   278,  1379,   339,   279,
   280,   281,   282,   283,  1381,  1382,  1383,   284,  1384,  1677,
  1385,  1386,  1387,   285,  1754,  1388,  1389,  1390,  1758,  1391,
  1394,  1761,  1762,  1395,  1396,  1397,  1552,   167,  1399,  1400,
   164,  1557,  1401,  1404,  1408,  1561,   164,  1402,  1564,  1405,
  1407,  1409,  1411,  1567,  1412,  1414,  1416,  1788,  1789,  1790,
  1791,  1792,  1417,  1418,  1420,  1577,  1421,  1422,  1425,  1475,
  1423,  1426,  1424,  1427,  1490,  1497,  1505,  1516,  1586,  1517,
  1588,  1519,  1518,  1529,  1428,  1530,   233,   160,  1429,  1430,
  1531,  1532,   161,  1468,  1431,   162,  1533,  1484,  1467,  1535,
  1537,  1476,  1830,   233,   346,  1538,  1549,  1510,  1513,  1551,
  1492,  1493,  1618,  1619,   164,  1621,  1469,  1470,  1471,  1472,
  1528,  1526,  1553,  1495,  1473,   270,   271,   272,   273,   274,
  1474,   275,   276,   277,   278,  1477,  1841,   279,   280,   281,
   282,   283,  1478,  1479,  1480,   284,  1848,  1849,  1481,  1482,
  1852,   285,  1854,  1483,  1554,   902,   903,   904,   905,  1868,
  1869,   906,   907,   908,   909,   910,   911,  1494,  1556,   912,
  1580,  1501,  1496,  1550,   164,  1880,  1502,   177,  1504,   270,
   271,   272,   273,   274,   233,   275,   276,   277,   278,  1525,
  1587,   279,   280,   281,   282,   283,  1594,  1560,  1595,   284,
  1896,  1596,  1597,  1599,  1600,   285,  1602,   270,   271,   272,
   273,   274,  1603,   275,   276,   277,   278,  1566,  1575,   279,
   280,   281,   282,   283,  1581,  1916,  1582,   284,  1615,   318,
  1628,  1629,   164,   285,  1924,   270,   271,   272,   273,   274,
  1630,   275,   276,   277,   278,  1585,  1609,   279,   280,   281,
   282,   283,  1623,  1612,  1631,   284,  1647,  1942,  1634,  1635,
  1648,   285,  1655,  1678,  1743,  1658,  1661,  1671,  1624,  1674,
  1745,  1627,  1636,  1724,  1728,  1731,  1646,  1747,  1651,  1683,
  1732,  1733,  1684,  1734,  1650,  1736,  1956,  1740,  1691,  1959,
  1692,  1741,  1652,  1755,  1682,   126,   127,   758,  1685,  1742,
  1753,  1768,  1756,  1757,  1687,  1688,  1689,  1693,  1703,  1763,
  1973,  1709,  1975,  1700,  1701,  1764,  1765,  1708,  1710,  1711,
  1980,   134,   135,   136,   137,   138,   759,   760,   761,   762,
   763,   764,   765,   766,   767,   768,   769,   770,   771,   772,
   773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
   783,   784,   785,   126,   127,   758,   896,   897,   898,   899,
   900,   901,   902,   903,   904,   905,  1712,  1721,   906,   907,
   908,   909,   910,   911,  1723,  1725,   912,  1727,  1023,   134,
   135,   136,   137,   138,   759,   760,   761,   762,   763,   764,
   765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
   775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
   785,  1767,   786,   126,   127,   528,   129,  1851,  1769,    54,
  1773,  1778,  1863,  1864,  1780,  1781,  1782,  1783,  1784,  1785,
  1871,  1786,  1787,  1793,   130,   131,   132,   133,  1795,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,  1796,  1797,  1798,  1799,  1800,  1897,
   786,  1801,  1803,  1804,  1805,  1806,  1807,  1836,   228,   270,
   271,   272,   273,   274,  1812,   275,   276,   277,   278,  1814,
  1815,   279,   280,   281,   282,   283,  1832,   273,   274,   284,
   275,   276,   277,   278,  1831,   285,   279,   280,   281,   282,
   283,  1835,  1842,  1935,   284,  1845,  1846,  1847,  1850,  1865,
   285,   787,  1853,  1866,   126,   127,   128,   788,   789,  1867,
  1870,  1874,  1875,   790,  1876,  1878,   791,  1882,   648,  1046,
  1047,   792,   793,  1894,   794,   130,   131,   132,   133,  1895,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,  1898,  1885,  1886,  1890,   787,
  1900,  1906,  1907,  1908,  1909,   788,   789,  1905,  1910,  1913,
  1915,   790,  1917,  1918,   791,  1919,  1921,  1923,  1926,   792,
   793,  1927,   794,   896,   897,   898,   899,   900,   901,   902,
   903,   904,   905,  1928,  1930,   906,   907,   908,   909,   910,
   911,  1931,  1932,   912,  1933,  1934,  1936,  1937,  1938,  1939,
   159,  1940,  1946,  1943,  1191,  1950,  1953,  1954,  1957,  1961,
  1958,  1963,   126,   127,   128,   129,   160,  1966,    54,  1971,
  1972,   161,  1974,  1981,   162,  1982,  1984,  1986,  1987,   229,
  1989,  1990,   163,   130,   131,   132,   133,  1205,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   270,   271,   272,   273,   274,  1206,   275,
   276,   277,   278,   917,   747,   279,   280,   281,   282,   283,
  1348,  1726,  1092,   284,  1488,  1605,  1775,   685,   226,   285,
   332,   701,     0,     0,  1770,     0,     0,  1771,   898,   899,
   900,   901,   902,   903,   904,   905,     0,     0,   906,   907,
   908,   909,   910,   911,     0,     0,   912,     0,   126,   127,
   128,     0,     0,     0,     0,   836,     0,   160,     0,     0,
     0,     0,   161,   602,     0,   162,     0,     0,     0,   130,
   131,   132,   133,   163,   134,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   126,
   127,     4,   929,     0,     0,     0,     0,     0,     0,     0,
    71,    72,   930,     0,    74,     0,     0,     0,     0,     0,
     0,     0,   603,     0,     0,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     0,   604,   899,   900,   901,   902,   903,   904,   905,   159,
     0,   906,   907,   908,   909,   910,   911,     0,     0,   912,
     0,     0,     0,     0,     0,   160,     0,     0,     0,     0,
   161,   605,     0,   162,     0,     0,     0,     0,     0,     0,
     0,   163,   606,   607,   608,   609,   610,   611,   612,   613,
   614,   615,   616,   617,   618,   619,   620,   621,   622,     0,
     0,     0,     0,     0,     0,   929,     0,     0,     0,     0,
     0,     0,     0,    71,    72,   930,     0,    74,     0,     0,
     0,     0,     0,     0,     0,     0,   931,     0,   932,   933,
   934,   935,   936,   937,   938,   939,   940,     0,     0,     0,
   941,     0,     0,   942,     0,     0,   943,     0,     0,   944,
     0,   945,   946,   947,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   126,   127,   128,
   961,   160,   929,     0,     0,   962,   161,     0,   963,   162,
    71,    72,   930,     0,    74,     0,     0,   163,   130,   131,
   132,   133,     0,   134,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,     0,     0,
     0,     0,   160,   929,     0,     0,     0,   161,     0,     0,
   162,    71,    72,   930,     0,    74,     0,     0,   728,   931,
   964,   932,   933,   934,   935,   936,   937,   938,   939,   940,
     0,     0,     0,   941,     0,     0,   942,     0,     0,   943,
     0,     0,   944,  1837,   945,   946,   947,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     0,     0,     0,   961,     0,     0,     0,   929,   962,     0,
     0,   963,     0,     0,     0,    71,    72,   930,     0,    74,
     0,     0,     0,     0,     0,     0,   931,     0,   932,   933,
   934,   935,   936,   937,   938,   939,   940,     0,     0,     0,
   941,     0,     0,   942,     0,     0,   943,     0,     0,   944,
     0,   945,   946,   947,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,     0,     0,     0,
   961,     0,     0,  1735,     0,   962,     0,   931,   963,   932,
   933,   934,   935,   936,   937,   938,   939,   940,     0,     0,
     0,   941,     0,     0,   942,     0,     0,   943,     0,     0,
   944,     0,   945,   946,   947,   948,   949,   950,   951,   952,
   953,   954,   955,   956,   957,   958,   959,   960,     0,     0,
   160,   961,   929,     0,     0,   161,   962,     0,   162,   963,
    71,    72,   930,     0,    74,     0,     0,     0,     0,     0,
  1744,   931,     0,   932,   933,   934,   935,   936,   937,   938,
   939,   940,     0,     0,     0,   941,     0,     0,   942,     0,
     0,   943,     0,     0,   944,     0,   945,   946,   947,   948,
   949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
   959,   960,     0,     0,     0,   961,   929,     0,     0,     0,
   962,  1746,     0,   963,    71,    72,   930,     0,    74,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   929,     0,     0,
     0,     0,     0,     0,     0,    71,    72,   930,     0,    74,
     0,     0,     0,     0,     0,  1748,   931,     0,   932,   933,
   934,   935,   936,   937,   938,   939,   940,     0,     0,     0,
   941,     0,     0,   942,     0,     0,   943,  1838,     0,   944,
     0,   945,   946,   947,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,     0,     0,     0,
   961,   929,     0,     0,     0,   962,     0,     0,   963,    71,
    72,   930,     0,    74,     0,     0,     0,     0,     0,     0,
   931,     0,   932,   933,   934,   935,   936,   937,   938,   939,
   940,     0,     0,     0,   941,     0,     0,   942,     0,     0,
   943,     0,     0,   944,     0,   945,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
   960,     0,     0,     0,   961,     0,     0,     0,     0,   962,
  1749,   931,   963,   932,   933,   934,   935,   936,   937,   938,
   939,   940,     0,     0,     0,   941,     0,     0,   942,     0,
     0,   943,     0,     0,   944,     0,   945,   946,   947,   948,
   949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
   959,   960,     0,     0,     0,   961,   929,     0,     0,     0,
   962,     0,     0,   963,    71,    72,   930,     0,    74,     0,
     0,     0,     0,     0,  1750,   931,     0,   932,   933,   934,
   935,   936,   937,   938,   939,   940,     0,     0,     0,   941,
     0,     0,   942,     0,     0,   943,     0,     0,   944,     0,
   945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,   958,   959,   960,     0,     0,     0,   961,
   929,     0,     0,     0,   962,  1920,     0,   963,    71,    72,
   930,     0,    74,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,     0,     0,   285,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   929,     0,     0,     0,     0,     0,     0,     0,    71,
    72,   930,     0,    74,     0,     0,     0,     0,     0,  1925,
   931,     0,   932,   933,   934,   935,   936,   937,   938,   939,
   940,     0,     0,     0,   941,     0,  1839,   942,     0,     0,
   943,     0,     0,   944,     0,   945,   946,   947,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
   960,     0,     0,  1840,   961,   929,     0,     0,     0,   962,
     0,     0,   963,    71,    72,   930,     0,    74,     0,     0,
     0,     0,     0,     0,   931,     0,   932,   933,   934,   935,
   936,   937,   938,   939,   940,     0,     0,     0,   941,     0,
     0,   942,     0,     0,   943,     0,     0,   944,     0,   945,
   946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
   956,   957,   958,   959,   960,     0,     0,     0,   961,     0,
     0,     0,     0,   962,  1960,   931,   963,   932,   933,   934,
   935,   936,   937,   938,   939,   940,     0,     0,     0,   941,
     0,  1929,   942,     0,     0,   943,     0,     0,   944,     0,
   945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,   958,   959,   960,     0,     0,     0,   961,
   929,     0,     0,     0,   962,     0,     0,   963,    71,    72,
   930,     0,    74,     0,     0,     0,     0,     0,  1962,   931,
     0,   932,   933,   934,   935,   936,   937,   938,   939,   940,
     0,     0,     0,   941,     0,     0,   942,     0,     0,   943,
     0,     0,   944,     0,   945,   946,   947,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     0,     0,     0,   961,     0,     0,     0,     0,   962,  1964,
     0,   963,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,     0,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,     0,     0,     0,     0,
     0,     0,     0,  1965,   931,     0,   932,   933,   934,   935,
   936,   937,   938,   939,   940,     0,     0,     0,   941,     0,
     0,   942,     0,     0,   943,     0,     0,   944,     0,   945,
   946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
   956,   957,   958,   959,   960,     0,     0,     0,   961,     0,
     0,     0,     0,   962,     0,     0,   963,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   126,   127,   128,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   130,   131,   132,   133,  1976,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   126,   127,     4,   896,   897,   898,
   899,   900,   901,   902,   903,   904,   905,     0,  1202,   906,
   907,   908,   909,   910,   911,     0,     0,   912,     0,     0,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   126,   127,     4,   521,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   134,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   126,   127,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   134,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   576,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   591,
   127,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   160,     0,     0,     0,
     0,   161,     0,     0,   162,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   269,   474,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     4,     0,     0,     0,   160,     0,     5,
     6,   317,   161,     0,     0,   162,     0,     7,     8,     9,
    10,   270,   271,   272,   273,   274,    11,   275,   276,   277,
   278,     0,   515,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
     0,     0,   490,   516,     0,     0,     0,     0,   160,    12,
     0,     0,     0,   161,     0,    13,   162,     0,     0,     0,
     0,     0,     0,     0,   575,     0,     0,     0,    14,     0,
    15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    16,     0,     0,     0,    17,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    18,   160,
     0,     0,     0,     0,   161,     0,     0,   162,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,   577,     0,     0,     0,   285,     0,
     0,     0,   160,     0,     0,     0,     0,   161,     0,    20,
   162,    21,     0,     0,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,   491,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
   278,   502,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
   277,   278,   509,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
   276,   277,   278,   510,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,   511,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,   734,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,   735,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,   986,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,  1151,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,  1329,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
  1432,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
   278,  1440,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
   277,   278,  1449,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
   276,   277,   278,  1625,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,  1649,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,  1653,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,  1659,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,  1666,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,  1686,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,  1811,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
  1816,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
   278,  1817,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
   277,   278,  1889,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
   276,   277,   278,  1891,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,  1914,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,  1967,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,  1969,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,  1977,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,     0,     0,     0,   288,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,     0,     0,   285,     0,     0,     0,   345,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,     0,     0,     0,   740,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
  1150,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
     0,  1165,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
     0,     0,  1491,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,     0,     0,   285,
     0,     0,     0,  1616,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,     0,     0,
   285,     0,     0,     0,  1776,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,     0,
     0,   285,     0,     0,     0,  1779,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
     0,     0,   285,     0,     0,     0,  1794,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,     0,     0,     0,  1883,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,     0,     0,   285,     0,     0,     0,  1955,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,     0,     0,     0,  1983,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,   373,     0,     0,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   492,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   493,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   494,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   495,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   496,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,   497,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,   498,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
   499,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,   500,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,   501,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   503,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   504,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   505,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   506,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   507,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,   508,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,   518,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
   643,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,   736,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,   737,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   738,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   739,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,   839,     0,     0,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   872,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   987,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,   988,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,  1690,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
  1802,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,  1813,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,  1888,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,  1893,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,  1903,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,  1904,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,  1944,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,  1948,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,  1979,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,   896,   897,   898,   899,
   900,   901,   902,   903,   904,   905,     0,     0,   906,   907,
   908,   909,   910,   911,     0,     0,   912,     0,     0,     0,
  1509
};

static const short yycheck[] = {     3,
    82,   172,   567,   482,  1093,   621,   657,   535,    82,   595,
    24,   758,     7,     0,     3,   428,     5,    21,   546,     3,
     3,     5,     5,     5,     5,     5,   328,    31,   556,     3,
   332,     5,   560,   103,   104,     5,   564,   788,   789,   790,
   791,     5,     3,   309,     5,     5,   256,    61,     5,     5,
    74,     5,     5,   245,   320,   321,   322,     5,  1015,     5,
   244,    23,   254,   329,  1021,   236,   479,     5,   602,   603,
     7,    95,     5,     7,    63,   609,     3,     5,    11,    12,
    13,    14,    15,    63,    17,     7,    68,     5,    68,     5,
     7,   246,   252,    68,   246,    28,   256,   111,   112,   113,
   114,   256,   116,   107,   256,    80,   401,   111,   112,   113,
   114,   115,   116,   117,   527,    68,    23,   121,   122,   123,
   222,   707,    68,   249,   295,   251,   244,   878,   875,     5,
   877,     5,    95,   235,    97,   246,    98,   788,   789,   790,
   791,   252,   105,   246,   246,   256,   897,   898,   899,   900,
   901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
   911,   912,   116,   107,   915,   336,   180,   111,   112,   113,
   114,   115,   116,   475,   252,     5,   180,     5,   256,   140,
   245,    11,    12,   116,   117,   118,   119,  1550,    64,   254,
   106,    98,   262,   243,    68,    82,    83,  1560,    28,   249,
   116,     5,    23,  1566,    23,    23,   245,    11,    12,    13,
    14,    15,  1575,    17,     5,   254,   246,   245,  1581,  1582,
    11,    12,   252,   293,    28,   229,   254,   878,   246,   253,
   252,   526,   119,   120,   252,   530,   180,    28,   125,  1196,
    68,   236,   244,   252,   246,   206,   897,   898,   899,   900,
   901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
   911,   912,   236,   252,   915,   246,   255,   249,   252,   249,
   252,   255,   255,   160,   161,   162,  1027,    98,   253,    98,
    98,   255,  1239,    13,    14,    15,   256,    17,   252,   250,
   253,   462,   252,   375,   252,   252,   252,   710,   312,   253,
     5,   247,   252,   249,   252,   309,    11,    12,    13,    14,
    15,   252,    17,   252,   252,   252,   320,   321,   322,   401,
   253,   252,   249,    28,   252,   329,   244,   401,     5,   246,
   252,   597,   252,    81,    11,    12,    13,    14,    15,   246,
    17,   636,    13,    14,    15,    18,    17,    95,    13,    14,
    15,    28,    17,   240,   241,   242,   243,   244,   245,   246,
   247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
   257,   258,   259,   260,   261,   249,  1027,    13,    14,    15,
   450,    17,   269,   270,   271,   272,   273,   274,   275,   276,
   277,   278,   279,   280,   281,   282,   283,   284,  1355,    13,
    14,    15,   406,    17,   252,   292,    81,   709,   247,   580,
    85,   582,   583,   584,    87,   254,   420,    85,   252,   253,
    95,   249,   252,   253,    95,   246,   430,   246,   246,   316,
   317,   435,   252,   253,    13,    14,    15,   441,    17,   443,
  1191,   109,   256,   447,   331,     5,  1062,  1063,   252,   253,
  1201,    11,    12,    13,    14,    15,   222,    17,   247,   130,
   247,   252,   253,     5,   137,   254,   137,   254,    28,    11,
    12,    13,    14,    15,    18,    17,    81,    81,   482,   252,
    85,    86,  1845,    87,   157,   158,    28,     5,   375,     5,
  1853,    95,   246,    11,    12,    13,    14,    15,   252,    17,
     6,    18,   981,     5,     6,   253,    66,     9,    10,   396,
    28,    77,    78,   252,   401,   252,   403,   256,   588,   256,
   602,   603,   252,   253,   247,     7,  1177,   609,   247,     8,
   247,   254,    85,     7,    85,   254,   606,   254,     5,     6,
  1191,    85,    95,    87,    95,   847,    97,   252,   253,   115,
  1201,     5,     6,  1087,    98,     9,    10,   728,   111,   247,
  1923,   127,   115,  1926,   247,  1099,   254,   111,   252,     7,
    87,   254,   256,  1936,  1937,   252,   253,  1534,   253,  1536,
   253,     7,   253,   127,   252,   253,     7,   252,   253,     7,
   477,   595,   247,   597,   247,  1160,    95,     7,  1961,   254,
     7,   254,   252,   490,   491,     7,   256,     7,   187,   188,
   189,   190,   111,   130,     7,   502,   252,   253,   247,   247,
   137,   138,   509,   510,   511,   254,   254,   247,   515,   516,
     7,   645,   131,     7,   254,   246,    67,   524,   252,   253,
   157,     7,  1207,   160,   161,   715,   716,     7,   253,   253,
   253,   254,     7,   657,    85,   235,   236,   237,   238,   673,
   674,   247,   247,   677,    95,    96,   244,   681,   254,   254,
   674,   247,     7,   104,   254,   106,   690,   681,   254,   253,
   254,  1209,     7,   182,   185,  1774,  1775,   253,   575,   576,
    13,    14,    15,   253,    17,    13,    14,    15,   244,    17,
   253,   246,   253,   707,   252,  1270,   237,   238,   239,   253,
   252,   253,   243,   253,   254,   602,   603,   246,   249,   221,
   607,   608,   609,   610,   246,   991,   992,   993,   994,   616,
   674,   618,   245,   747,   252,   253,   253,   681,   246,  1005,
   254,   255,   253,   254,   223,   224,   225,   226,   227,   253,
   229,   230,   231,   232,   253,     7,   235,   236,   237,   238,
   239,   246,    85,  1514,   243,   137,   653,   221,   140,   127,
   249,   246,    95,   246,   253,   252,   253,   231,   150,   151,
   234,     6,   154,   155,   788,   789,   790,   791,   252,   253,
   794,   246,  1539,  1540,  1541,   252,   253,   246,  1064,  1065,
   971,   972,   973,   974,    97,   252,   253,   246,   131,   132,
   133,   134,   135,   136,   107,   108,   109,   252,   253,   706,
  1086,   246,   253,   223,   224,   225,   226,   227,     7,   229,
   230,   231,   232,   252,   253,   235,   236,   237,   238,   239,
   459,  1798,     5,   243,     7,   732,     7,   734,   735,   249,
    95,  1330,  1503,     7,   253,   254,    19,    20,    21,   246,
  1126,   253,   254,  1514,    88,    89,    90,    91,    92,    93,
   137,   246,    35,   140,   878,   253,   254,   253,   254,  1050,
     7,   253,   246,   150,   151,   152,   254,     3,     5,   893,
   894,     7,   137,   897,   898,   899,   900,   901,   902,   903,
   904,   905,   906,   907,   908,   909,   910,   911,   912,   253,
   254,   915,   253,   254,   928,   246,    68,    69,    70,    71,
    72,    73,    74,    75,    76,   929,   246,    79,  1341,     8,
   253,   246,   551,    85,   253,   254,  1470,  1471,  1472,   184,
  1474,   186,     3,     4,     5,    61,    98,   253,   254,   252,
   837,    67,   246,   840,     7,  1912,   253,   254,  1492,  1372,
   253,   253,   254,   208,    80,  1378,    82,  1380,    29,    30,
    31,    32,    33,   253,   254,   246,   980,   981,    94,   866,
   252,   253,    98,   253,   254,  1251,   253,   991,   992,   993,
   994,  1257,   246,    80,   110,    82,    83,    84,   253,   254,
  1413,  1005,   253,   254,   246,  1087,  1419,   246,   253,   237,
   238,   239,   240,   129,   246,   243,   246,  1099,   253,   254,
   253,   254,     5,  1027,   222,   188,     7,   914,  1098,   253,
  1100,   253,   254,   120,   121,   122,   123,   124,   125,   126,
   127,   128,   235,   236,   237,   238,   239,   246,   667,   246,
   243,  1055,  1799,   253,   254,   246,   249,  1127,   253,   254,
  1064,  1065,     7,   252,   253,   181,   254,   183,   253,   254,
  1074,   253,   254,   253,   254,   694,   612,   613,  1082,  1083,
   246,   246,  1086,   252,   246,     5,  1352,   246,   246,   246,
     8,     7,  1096,  1097,   713,  1361,   252,  1101,     5,   986,
   253,   253,  1106,   252,    11,    12,    13,    14,    15,   252,
    17,   730,   252,  1647,     7,  1649,   252,   252,   247,   247,
   254,    28,  1126,   254,   235,   236,   237,   238,   239,   240,
  1134,  1135,   243,   247,   222,     5,   222,  1141,   222,  1143,
   252,     5,   252,  1147,   223,   224,   225,   226,   227,   228,
   229,   230,   231,   232,  1158,    62,   235,   236,   237,   238,
   239,   240,     5,  1697,   243,  1431,   253,   252,     5,  1703,
   223,   224,   225,   226,   227,     5,   229,   230,   231,   232,
   252,   252,   235,   236,   237,   238,   239,  1191,   252,   222,
   243,   247,     5,     5,   252,   252,   249,  1201,     5,     5,
  1087,    95,   252,    97,    98,    99,   100,   101,   102,   103,
   252,     5,  1099,   252,     5,     7,  1482,     5,   202,   120,
   121,   122,   123,   124,   125,   126,   127,   252,   252,   252,
   252,   247,  1119,     5,  1121,   246,  1123,  1771,   253,   127,
     7,     5,   223,   224,   225,   226,   227,  1251,   229,   230,
   231,   232,     7,  1257,   235,   236,   237,   238,   239,     7,
   253,     7,   243,     7,  1151,   252,     7,     7,   249,   246,
   246,     7,     7,     7,     7,   222,  1542,     7,   223,   224,
   225,   226,   227,     5,   229,   230,   231,   232,     7,     7,
   235,   236,   237,   238,   239,     7,     7,  1831,   243,   229,
   230,   231,   232,  1782,   249,   235,   236,   237,   238,   239,
   252,     7,   931,   243,  1842,     7,     7,     7,     7,   249,
     7,   253,  1493,     5,  1495,  1496,  1330,   254,     7,   252,
   223,   224,   225,   226,   227,     8,   229,   230,   231,   232,
     5,     5,   235,   236,   237,   238,   239,     5,  1352,   252,
   243,   970,   253,   252,     7,  1889,   249,  1361,   247,   253,
     7,     5,     7,   982,   222,   249,   985,    80,     7,    82,
    83,     5,    85,   253,     7,     7,   995,   996,   997,   998,
     7,     7,    95,  1002,     7,     7,   252,   254,  1470,  1471,
  1472,   247,  1474,     7,     6,   231,     7,   252,    65,   112,
   113,   114,   247,     5,   246,   246,   246,   246,   246,     3,
  1492,   246,     5,   246,   127,   246,     7,     5,    80,  1984,
    82,    83,    84,   252,   252,   252,   252,  1431,   252,   254,
   252,   223,   224,   225,   226,   227,   252,   229,   230,   231,
   232,   252,  1329,   235,   236,   237,   238,   239,   250,   247,
   254,   243,   252,   246,     5,     5,   246,   249,   120,   121,
   122,   123,   124,   125,   126,   127,   128,   180,   231,  1356,
   243,   253,     3,   252,     7,   246,   246,   246,  1482,   223,
   224,   225,   226,   227,   246,   229,   230,   231,   232,  1108,
  1109,   235,   236,   237,   238,   239,   246,   246,   252,   243,
   252,   246,     7,   246,   246,   249,     5,   246,   246,   246,
  1514,   223,   224,   225,   226,   227,     5,   229,   230,   231,
   232,   246,  1526,   235,   236,   237,   238,   239,   252,   246,
   246,   243,   246,   246,     5,   250,   246,   249,  1542,   246,
   253,  1428,  1546,   246,  1548,  1432,   246,   252,  1435,  1436,
   252,     7,  1171,  1440,  1173,   252,  1443,  1444,  1445,  1446,
   246,  1180,  1449,  1450,  1451,  1647,  1453,  1649,   246,   252,
  1457,  1458,     5,     5,   254,  1462,  1463,   247,   247,   247,
   246,   253,     5,  1470,  1471,  1472,  1473,  1474,   247,   246,
     5,   253,  1479,    80,  1860,    82,     5,     5,    85,     5,
   252,     5,     5,     5,     5,  1492,     5,     5,     5,     3,
  1781,  1877,     3,     5,     7,  1697,  1686,  1687,     5,     7,
     5,  1703,     5,  1693,     3,     4,     5,     5,     5,     5,
     5,     5,     5,   120,   121,   122,   123,   124,   125,   126,
   127,     5,     5,     5,     5,    24,    25,    26,    27,     5,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,     5,     5,   246,     5,     7,
   193,   194,   195,   196,   197,   198,   199,   200,   201,  1771,
     5,     5,  1958,     5,   246,   252,     7,   253,  1768,    80,
  1770,    82,   249,     3,    85,   254,   225,   226,   227,  1328,
   229,   230,   231,   232,     7,     7,   235,   236,   237,   238,
   239,     7,  1609,     7,   243,  1612,     7,     7,     7,     7,
   249,     7,     7,     7,     7,     7,     7,     7,  1625,   120,
   121,   122,   123,   124,   125,   126,   127,     7,   254,  1831,
   252,   247,   246,     7,     7,     7,     7,   252,     5,     7,
  1647,  1648,  1649,     7,     7,     7,   253,   223,   224,   225,
   226,   227,     7,   229,   230,   231,   232,     7,  1782,   235,
   236,   237,   238,   239,     7,     7,     7,   243,     7,     7,
     7,     7,     7,   249,  1681,     7,     7,     7,  1685,     7,
     7,  1688,  1689,     7,     7,     7,  1425,  1889,     5,     5,
  1697,  1430,     5,     7,     5,  1434,  1703,   246,  1437,   246,
   246,     5,     7,  1442,     7,     7,     7,  1714,  1715,  1716,
  1717,  1718,     7,     7,     7,  1454,     7,   247,   254,   253,
   247,   254,   247,   254,     7,     7,     7,     7,  1467,     7,
  1469,     7,   111,     7,   254,     7,  1860,   236,   254,   254,
     7,     3,   241,   247,   254,   244,     7,   247,   254,     7,
     7,   253,   253,  1877,   253,     7,     7,   247,   247,     7,
   252,   252,  1501,  1502,  1771,  1504,   254,   254,   254,   254,
   247,   246,     5,   252,   254,   223,   224,   225,   226,   227,
   254,   229,   230,   231,   232,   254,  1793,   235,   236,   237,
   238,   239,   254,   254,   254,   243,  1803,  1804,   254,   254,
  1807,   249,  1809,   254,     5,   229,   230,   231,   232,  1816,
  1817,   235,   236,   237,   238,   239,   240,   253,     5,   243,
     5,   254,   252,   252,  1831,  1832,   254,   254,   254,   223,
   224,   225,   226,   227,  1958,   229,   230,   231,   232,   253,
     7,   235,   236,   237,   238,   239,     7,   252,     7,   243,
  1857,     5,     5,     5,     5,   249,     5,   223,   224,   225,
   226,   227,     7,   229,   230,   231,   232,   252,   252,   235,
   236,   237,   238,   239,   252,  1882,   252,   243,   253,   245,
     5,     5,  1889,   249,  1891,   223,   224,   225,   226,   227,
     5,   229,   230,   231,   232,   252,   252,   235,   236,   237,
   238,   239,   247,   252,     5,   243,   254,  1914,     7,     7,
   254,   249,     7,     7,  1653,     7,     7,     7,   247,     7,
  1659,   247,   247,     7,     7,     7,   247,  1666,   247,   247,
     7,     7,   247,     7,   254,     7,  1943,     5,   247,  1946,
   247,     7,   254,  1682,   254,     3,     4,     5,   254,     5,
     7,   132,     7,     7,   254,   254,   254,   254,   254,     7,
  1967,   247,  1969,   252,   252,     7,     7,   254,   247,   253,
  1977,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,     3,     4,     5,   223,   224,   225,   226,
   227,   228,   229,   230,   231,   232,   247,   247,   235,   236,
   237,   238,   239,   240,   253,   253,   243,   247,   245,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,     7,   120,     3,     4,     5,     6,  1806,     7,     9,
     7,   253,  1811,  1812,   253,   252,   249,     7,     7,     7,
  1819,     7,     5,   252,    24,    25,    26,    27,   110,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,     7,     7,   254,   254,    16,  1858,
   120,   247,   254,   254,   247,   254,   254,     7,    68,   223,
   224,   225,   226,   227,   254,   229,   230,   231,   232,   247,
   247,   235,   236,   237,   238,   239,   252,   226,   227,   243,
   229,   230,   231,   232,   254,   249,   235,   236,   237,   238,
   239,     7,     5,  1902,   243,   252,     7,     7,     7,     7,
   249,   229,   252,     7,     3,     4,     5,   235,   236,     7,
     7,     5,     5,   241,     5,   246,   244,   254,   252,   247,
   248,   249,   250,     5,   252,    24,    25,    26,    27,     5,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,     5,   247,   247,   247,   229,
   247,     7,     4,     7,     7,   235,   236,   253,     7,   253,
   253,   241,     7,     7,   244,     7,     7,   252,   252,   249,
   250,     7,   252,   223,   224,   225,   226,   227,   228,   229,
   230,   231,   232,     7,     7,   235,   236,   237,   238,   239,
   240,     7,     7,   243,     7,     7,   252,   252,     7,   253,
   220,     7,   254,   252,   254,   247,     7,   247,     7,   252,
    61,     7,     3,     4,     5,     6,   236,     7,     9,     7,
     7,   241,     7,   129,   244,     7,     5,     7,   253,   249,
     0,     0,   252,    24,    25,    26,    27,  1053,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,   223,   224,   225,   226,   227,  1054,   229,
   230,   231,   232,   798,   644,   235,   236,   237,   238,   239,
  1184,  1632,   925,   243,  1316,  1488,  1701,   570,   122,   249,
   226,   587,    -1,    -1,   203,    -1,    -1,   206,   225,   226,
   227,   228,   229,   230,   231,   232,    -1,    -1,   235,   236,
   237,   238,   239,   240,    -1,    -1,   243,    -1,     3,     4,
     5,    -1,    -1,    -1,    -1,   690,    -1,   236,    -1,    -1,
    -1,    -1,   241,    74,    -1,   244,    -1,    -1,    -1,    24,
    25,    26,    27,   252,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,     3,
     4,     5,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   133,    -1,    -1,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    -1,   162,   226,   227,   228,   229,   230,   231,   232,   220,
    -1,   235,   236,   237,   238,   239,   240,    -1,    -1,   243,
    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,
   241,   192,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   252,   203,   204,   205,   206,   207,   208,   209,   210,
   211,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,   141,   142,
   143,   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,
   153,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,
    -1,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,     3,     4,     5,
   183,   236,     5,    -1,    -1,   188,   241,    -1,   191,   244,
    13,    14,    15,    -1,    17,    -1,    -1,   252,    24,    25,
    26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
    -1,    -1,   236,     5,    -1,    -1,    -1,   241,    -1,    -1,
   244,    13,    14,    15,    -1,    17,    -1,    -1,   252,   139,
   253,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
    -1,    -1,   162,     7,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
    -1,    -1,    -1,   183,    -1,    -1,    -1,     5,   188,    -1,
    -1,   191,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,   141,   142,
   143,   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,
   153,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,
    -1,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,
   183,    -1,    -1,   253,    -1,   188,    -1,   139,   191,   141,
   142,   143,   144,   145,   146,   147,   148,   149,    -1,    -1,
    -1,   153,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
   162,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   177,   178,   179,    -1,    -1,
   236,   183,     5,    -1,    -1,   241,   188,    -1,   244,   191,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
   253,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,
    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,    -1,    -1,    -1,   183,     5,    -1,    -1,    -1,
   188,   253,    -1,   191,    13,    14,    15,    -1,    17,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    -1,   253,   139,    -1,   141,   142,
   143,   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,
   153,    -1,    -1,   156,    -1,    -1,   159,     7,    -1,   162,
    -1,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,
   183,     5,    -1,    -1,    -1,   188,    -1,    -1,   191,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
   139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,
   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   188,
   253,   139,   191,   141,   142,   143,   144,   145,   146,   147,
   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,
    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,    -1,    -1,    -1,   183,     5,    -1,    -1,    -1,
   188,    -1,    -1,   191,    13,    14,    15,    -1,    17,    -1,
    -1,    -1,    -1,    -1,   253,   139,    -1,   141,   142,   143,
   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,
    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,
     5,    -1,    -1,    -1,   188,   253,    -1,   191,    13,    14,
    15,    -1,    17,   223,   224,   225,   226,   227,    -1,   229,
   230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,   253,
   139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
   149,    -1,    -1,    -1,   153,    -1,     7,   156,    -1,    -1,
   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,    -1,    -1,     7,   183,     5,    -1,    -1,    -1,   188,
    -1,    -1,   191,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,    -1,    -1,    -1,   139,    -1,   141,   142,   143,   144,
   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,
    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,
    -1,    -1,    -1,   188,   253,   139,   191,   141,   142,   143,
   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,
    -1,     7,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,
     5,    -1,    -1,    -1,   188,    -1,    -1,   191,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,   253,   139,
    -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   188,   253,
    -1,   191,   223,   224,   225,   226,   227,    -1,   229,   230,
   231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   253,   139,    -1,   141,   142,   143,   144,
   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,
    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,
    -1,    -1,    -1,   188,    -1,    -1,   191,   223,   224,   225,
   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    24,    25,    26,    27,   253,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,     3,     4,     5,   223,   224,   225,
   226,   227,   228,   229,   230,   231,   232,    -1,    68,   235,
   236,   237,   238,   239,   240,    -1,    -1,   243,    -1,    -1,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,     3,     4,     5,     6,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,     3,     4,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,     8,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
    -1,   241,    -1,    -1,   244,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     8,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     5,    -1,    -1,    -1,   236,    -1,    11,
    12,     8,   241,    -1,    -1,   244,    -1,    19,    20,    21,
    22,   223,   224,   225,   226,   227,    28,   229,   230,   231,
   232,    -1,     8,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,
    -1,    -1,   254,     8,    -1,    -1,    -1,    -1,   236,    61,
    -1,    -1,    -1,   241,    -1,    67,   244,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    80,    -1,
    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    94,    -1,    -1,    -1,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   236,
    -1,    -1,    -1,    -1,   241,    -1,    -1,   244,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   223,   224,   225,   226,   227,    -1,   229,   230,
   231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,   249,    -1,
    -1,    -1,   236,    -1,    -1,    -1,    -1,   241,    -1,   181,
   244,   183,    -1,    -1,   223,   224,   225,   226,   227,    -1,
   229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,   227,
   249,   229,   230,   231,   232,   254,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,
   227,   249,   229,   230,   231,   232,    -1,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,
   226,   227,   249,   229,   230,   231,   232,    -1,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,
   225,   226,   227,   249,   229,   230,   231,   232,    -1,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,
   224,   225,   226,   227,   249,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
   223,   224,   225,   226,   227,   249,   229,   230,   231,   232,
    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,   223,   224,   225,   226,   227,   249,   229,   230,   231,
   232,   254,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,   223,   224,   225,   226,   227,   249,   229,   230,
   231,   232,   254,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,   223,   224,   225,   226,   227,   249,   229,
   230,   231,   232,   254,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,   223,   224,   225,   226,   227,   249,
   229,   230,   231,   232,   254,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,   227,
   249,   229,   230,   231,   232,   254,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,
   227,   249,   229,   230,   231,   232,   254,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,
   226,   227,   249,   229,   230,   231,   232,   254,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,
   225,   226,   227,   249,   229,   230,   231,   232,   254,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,
   224,   225,   226,   227,   249,   229,   230,   231,   232,   254,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
   223,   224,   225,   226,   227,   249,   229,   230,   231,   232,
   254,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,   223,   224,   225,   226,   227,   249,   229,   230,   231,
   232,   254,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,   223,   224,   225,   226,   227,   249,   229,   230,
   231,   232,   254,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,   223,   224,   225,   226,   227,   249,   229,
   230,   231,   232,   254,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,   223,   224,   225,   226,   227,   249,
   229,   230,   231,   232,   254,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,   227,
   249,   229,   230,   231,   232,   254,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,
   227,   249,   229,   230,   231,   232,   254,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,
   226,   227,   249,   229,   230,   231,   232,   254,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,
   225,   226,   227,   249,   229,   230,   231,   232,   254,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,
   224,   225,   226,   227,   249,   229,   230,   231,   232,   254,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
   223,   224,   225,   226,   227,   249,   229,   230,   231,   232,
   254,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,   223,   224,   225,   226,   227,   249,   229,   230,   231,
   232,   254,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,   223,   224,   225,   226,   227,   249,   229,   230,
   231,   232,   254,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,   223,   224,   225,   226,   227,   249,   229,
   230,   231,   232,   254,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,   223,   224,   225,   226,   227,   249,
   229,   230,   231,   232,   254,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,   227,
   249,   229,   230,   231,   232,   254,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,   226,
   227,   249,   229,   230,   231,   232,   254,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,
   226,   227,   249,   229,   230,   231,   232,   254,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,   223,   224,
   225,   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,
    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,
   223,   224,   225,   226,   227,    -1,   229,   230,   231,   232,
    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
   253,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,
    -1,   253,   223,   224,   225,   226,   227,    -1,   229,   230,
   231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,
    -1,    -1,   253,   223,   224,   225,   226,   227,    -1,   229,
   230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,
    -1,    -1,    -1,   253,   223,   224,   225,   226,   227,    -1,
   229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,
   249,    -1,    -1,    -1,   253,   223,   224,   225,   226,   227,
    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,
    -1,   249,    -1,    -1,    -1,   253,   223,   224,   225,   226,
   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,
    -1,    -1,   249,    -1,    -1,    -1,   253,   223,   224,   225,
   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,   223,   224,
   225,   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,
    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,   253,
   223,   224,   225,   226,   227,    -1,   229,   230,   231,   232,
    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,    -1,   245,    -1,    -1,    -1,   249,   223,   224,   225,
   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
    -1,   247,    -1,   249,   223,   224,   225,   226,   227,    -1,
   229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,
   249,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,    -1,    -1,    -1,   247,    -1,   249,   223,   224,
   225,   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,
    -1,    -1,   247,    -1,   249,   223,   224,   225,   226,   227,
    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,
    -1,   249,   223,   224,   225,   226,   227,    -1,   229,   230,
   231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,   249,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,   247,    -1,   249,   223,   224,   225,   226,
   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,
   247,    -1,   249,   223,   224,   225,   226,   227,    -1,   229,
   230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,   249,
   223,   224,   225,   226,   227,    -1,   229,   230,   231,   232,
    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,    -1,    -1,    -1,   247,    -1,   249,   223,   224,   225,
   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
    -1,   247,    -1,   249,   223,   224,   225,   226,   227,    -1,
   229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,
   249,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,    -1,    -1,    -1,   247,    -1,   249,   223,   224,
   225,   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,
    -1,    -1,   247,    -1,   249,   223,   224,   225,   226,   227,
    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,
    -1,   249,   223,   224,   225,   226,   227,    -1,   229,   230,
   231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,   249,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,   247,    -1,   249,   223,   224,   225,   226,
   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,
   247,    -1,   249,   223,   224,   225,   226,   227,    -1,   229,
   230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,   249,
   223,   224,   225,   226,   227,    -1,   229,   230,   231,   232,
    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,    -1,    -1,    -1,   247,    -1,   249,   223,   224,   225,
   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
    -1,   247,    -1,   249,   223,   224,   225,   226,   227,    -1,
   229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,
   249,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,    -1,   245,    -1,    -1,    -1,   249,   223,   224,
   225,   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,
    -1,    -1,   247,    -1,   249,   223,   224,   225,   226,   227,
    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,
    -1,   249,   223,   224,   225,   226,   227,    -1,   229,   230,
   231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,   249,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,   247,    -1,   249,   223,   224,   225,   226,
   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,
   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,
   247,    -1,   249,   223,   224,   225,   226,   227,    -1,   229,
   230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,   249,
   223,   224,   225,   226,   227,    -1,   229,   230,   231,   232,
    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
   243,    -1,    -1,    -1,   247,    -1,   249,   223,   224,   225,
   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,
   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
    -1,   247,    -1,   249,   223,   224,   225,   226,   227,    -1,
   229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,
   249,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
    -1,   243,    -1,    -1,    -1,   247,    -1,   249,   223,   224,
   225,   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,
   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,
    -1,    -1,   247,    -1,   249,   223,   224,   225,   226,   227,
    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,   237,
   238,   239,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,
    -1,   249,   223,   224,   225,   226,   227,    -1,   229,   230,
   231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,   249,   223,
   224,   225,   226,   227,    -1,   229,   230,   231,   232,    -1,
    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
    -1,    -1,    -1,    -1,    -1,   249,   223,   224,   225,   226,
   227,   228,   229,   230,   231,   232,    -1,    -1,   235,   236,
   237,   238,   239,   240,    -1,    -1,   243,    -1,    -1,    -1,
   247
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
#line 371 "GetDP.y"
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
#line 405 "GetDP.y"
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
#line 448 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 471 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 486 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 488 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 490 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 492 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 494 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 496 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 498 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 500 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 502 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 504 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 506 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 508 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 510 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 512 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 514 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 516 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 518 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 520 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 522 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 524 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 526 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 534 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 551 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 558 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 560 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 565 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 567 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 574 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 584 "GetDP.y"
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
#line 594 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 601 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 611 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 616 "GetDP.y"
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
#line 628 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 637 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 648 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 653 "GetDP.y"
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
case 63:
#line 690 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 693 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 705 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 707 "GetDP.y"
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
#line 723 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 726 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 729 "GetDP.y"
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
case 70:
#line 780 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 793 "GetDP.y"
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
#line 817 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 824 "GetDP.y"
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
#line 837 "GetDP.y"
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
#line 855 "GetDP.y"
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
#line 878 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 882 "GetDP.y"
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
#line 894 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 903 "GetDP.y"
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
#line 917 "GetDP.y"
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
#line 951 "GetDP.y"
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
case 83:
#line 975 "GetDP.y"
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
#line 985 "GetDP.y"
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
case 87:
#line 1007 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 1012 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 1013 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 1020 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1040 "GetDP.y"
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
#line 1060 "GetDP.y"
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
#line 1113 "GetDP.y"
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
#line 1133 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1139 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1145 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1148 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1155 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1166 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1169 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1175 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1179 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1191 "GetDP.y"
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
#line 1204 "GetDP.y"
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
#line 1218 "GetDP.y"
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
#line 1233 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1239 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1245 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1251 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1257 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1263 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1269 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1275 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1281 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1287 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1293 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1299 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1305 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1311 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1317 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1323 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1329 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1336 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1344 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1357 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1363 "GetDP.y"
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
#line 1437 "GetDP.y"
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
#line 1471 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1480 "GetDP.y"
{ 
      if(yyvsp[0].i!=1 && yyvsp[0].i!=3 && yyvsp[0].i!=4) /* Modification for using the previous result of a Quantity */
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
#line 1492 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1494 "GetDP.y"
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
#line 1505 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1507 "GetDP.y"
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
case 144:
#line 1521 "GetDP.y"
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
case 145:
#line 1533 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 146:
#line 1539 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1545 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 148:
#line 1547 "GetDP.y"
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
case 149:
#line 1576 "GetDP.y"
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
case 150:
#line 1600 "GetDP.y"
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
case 151:
#line 1613 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1619 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1626 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1632 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1639 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1646 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1654 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1661 "GetDP.y"
{
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-3].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("DofValue : Unknown System: %s", yyvsp[-3].c) ;
      //Free($3) ;
      WholeQuantity_S.Case.DofValue.DefineSystemIndex = i ;
      WholeQuantity_S.Type = WQ_DOFVALUE ;
      WholeQuantity_S.Case.DofValue.SystemName = yyvsp[-3].c ;
      WholeQuantity_S.Case.DofValue.DofNumber = yyvsp[-1].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1678 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 160:
#line 1679 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 161:
#line 1680 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 162:
#line 1685 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 163:
#line 1686 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 164:
#line 1692 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 165:
#line 1695 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 166:
#line 1698 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 167:
#line 1714 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 168:
#line 1719 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 169:
#line 1726 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 171:
#line 1735 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 172:
#line 1740 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 173:
#line 1747 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 174:
#line 1750 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 175:
#line 1757 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 177:
#line 1767 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 178:
#line 1770 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 179:
#line 1773 "GetDP.y"
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
#line 1811 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 181:
#line 1817 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 182:
#line 1824 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 184:
#line 1837 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 185:
#line 1844 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 186:
#line 1847 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 187:
#line 1854 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 188:
#line 1857 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 189:
#line 1864 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 191:
#line 1876 "GetDP.y"
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
#line 1886 "GetDP.y"
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
#line 1896 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 194:
#line 1903 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 195:
#line 1906 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 196:
#line 1913 "GetDP.y"
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
#line 1929 "GetDP.y"
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
#line 1977 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1980 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1983 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1986 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1989 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 204:
#line 2000 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 207:
#line 2011 "GetDP.y"
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
case 209:
#line 2036 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2050 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2056 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2063 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2072 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2075 "GetDP.y"
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
#line 2099 "GetDP.y"
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
#line 2114 "GetDP.y"
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
#line 2134 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 219:
#line 2143 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 221:
#line 2157 "GetDP.y"
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
#line 2167 "GetDP.y"
{ 
      if (!Nbr_Index)
	{
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
	//printf("index  %d \n", ConstraintPerRegion_S.RegionIndex );
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
#line 2194 "GetDP.y"
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
#line 2219 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 225:
#line 2224 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 226:
#line 2232 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 227:
#line 2240 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 228:
#line 2250 "GetDP.y"
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
#line 2267 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 230:
#line 2275 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 231:
#line 2282 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 232:
#line 2289 "GetDP.y"
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
#line 2298 "GetDP.y"
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
#line 2307 "GetDP.y"
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
#line 2316 "GetDP.y"
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
#line 2337 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 238:
#line 2348 "GetDP.y"
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
case 241:
#line 2377 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 243:
#line 2390 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 244:
#line 2396 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 245:
#line 2403 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2412 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2415 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2418 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2421 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2428 "GetDP.y"
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
#line 2444 "GetDP.y"
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
#line 2493 "GetDP.y"
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
#line 2514 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 255:
#line 2517 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 256:
#line 2522 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2527 "GetDP.y"
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
#line 2541 "GetDP.y"
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
#line 2561 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 260:
#line 2566 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 261:
#line 2571 "GetDP.y"
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
#line 2595 "GetDP.y"
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
#line 2655 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 265:
#line 2658 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 266:
#line 2667 "GetDP.y"
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
case 267:
#line 2733 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 268:
#line 2737 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 269:
#line 2744 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 271:
#line 2753 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 272:
#line 2758 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 273:
#line 2761 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2768 "GetDP.y"
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
#line 2784 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2790 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 277:
#line 2793 "GetDP.y"
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
#line 2812 "GetDP.y"
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
#line 2824 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 280:
#line 2830 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 281:
#line 2833 "GetDP.y"
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
#line 2848 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 283:
#line 2852 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 284:
#line 2861 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 286:
#line 2872 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 287:
#line 2877 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 288:
#line 2887 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 289:
#line 2900 "GetDP.y"
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
#line 2915 "GetDP.y"
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
#line 2989 "GetDP.y"
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
#line 3005 "GetDP.y"
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
#line 3038 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 295:
#line 3041 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 296:
#line 3044 "GetDP.y"
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
case 297:
#line 3090 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 299:
#line 3100 "GetDP.y"
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
case 302:
#line 3128 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 304:
#line 3140 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 305:
#line 3146 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 306:
#line 3153 "GetDP.y"
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
#line 3165 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 309:
#line 3171 "GetDP.y"
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
#line 3185 "GetDP.y"
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
#line 3205 "GetDP.y"
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
#line 3228 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 315:
#line 3231 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 316:
#line 3235 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 317:
#line 3238 "GetDP.y"
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
#line 3249 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 319:
#line 3255 "GetDP.y"
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
#line 3268 "GetDP.y"
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
#line 3295 "GetDP.y"
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
	    sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k+1) ;
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
case 322:
#line 3336 "GetDP.y"
{ // attention : doit disparaitre.  
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
#line 3362 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 324:
#line 3367 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
#line 3373 "GetDP.y"
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
#line 3684 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 327:
#line 3689 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3698 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3707 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3716 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 332:
#line 3724 "GetDP.y"
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
#line 3764 "GetDP.y"
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
#line 3779 "GetDP.y"
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
#line 3803 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 336:
#line 3808 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3817 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 338:
#line 3820 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 339:
#line 3823 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 340:
#line 3826 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 341:
#line 3833 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 343:
#line 3844 "GetDP.y"
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
#line 3854 "GetDP.y"
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
#line 3864 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 346:
#line 3878 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 348:
#line 3890 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 349:
#line 3892 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3894 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3896 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 352:
#line 3904 "GetDP.y"
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
#line 3929 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 355:
#line 3937 "GetDP.y"
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
#line 4016 "GetDP.y"
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
#line 4062 "GetDP.y"
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
#line 4086 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 359:
#line 4095 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 4104 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 361:
#line 4109 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4118 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 363:
#line 4129 "GetDP.y"
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
#line 4158 "GetDP.y"
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
#line 4182 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 367:
#line 4190 "GetDP.y"
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
#line 4245 "GetDP.y"
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
#line 4262 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 370:
#line 4263 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 371:
#line 4264 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 372:
#line 4265 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 373:
#line 4266 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 374:
#line 4267 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 375:
#line 4268 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 376:
#line 4269 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 377:
#line 4276 "GetDP.y"
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
#line 4297 "GetDP.y"
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
#line 4321 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 381:
#line 4331 "GetDP.y"
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
case 384:
#line 4358 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 386:
#line 4370 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 387:
#line 4377 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 388:
#line 4384 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 389:
#line 4387 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 390:
#line 4389 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 392:
#line 4397 "GetDP.y"
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
#line 4412 "GetDP.y"
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
#line 4427 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 395:
#line 4437 "GetDP.y"
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
#line 4457 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 398:
#line 4460 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 399:
#line 4469 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 400:
#line 4472 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 401:
#line 4477 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 4482 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 403:
#line 4487 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 404:
#line 4492 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 406:
#line 4502 "GetDP.y"
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
case 407:
#line 4539 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 408:
#line 4546 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 409:
#line 4549 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 410:
#line 4561 "GetDP.y"
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
#line 4571 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 412:
#line 4577 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 413:
#line 4580 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 4592 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 415:
#line 4600 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 416:
#line 4613 "GetDP.y"
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
#line 4635 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 418:
#line 4642 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 419:
#line 4648 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 420:
#line 4654 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 421:
#line 4660 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 422:
#line 4668 "GetDP.y"
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
#line 4690 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 424:
#line 4697 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 425:
#line 4703 "GetDP.y"
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
#line 4714 "GetDP.y"
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
#line 4725 "GetDP.y"
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
#line 4738 "GetDP.y"
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
#line 4753 "GetDP.y"
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
#line 4768 "GetDP.y"
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
case 431:
#line 4788 "GetDP.y"
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
case 432:
#line 4809 "GetDP.y"
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
case 433:
#line 4821 "GetDP.y"
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
case 434:
#line 4841 "GetDP.y"
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
case 435:
#line 4858 "GetDP.y"
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
case 436:
#line 4877 "GetDP.y"
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
case 437:
#line 4899 "GetDP.y"
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
case 438:
#line 4933 "GetDP.y"
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
case 439:
#line 4946 "GetDP.y"
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
case 440:
#line 4960 "GetDP.y"
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
case 441:
#line 4973 "GetDP.y"
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
case 442:
#line 4985 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 444:
#line 4994 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 446:
#line 5003 "GetDP.y"
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
case 447:
#line 5014 "GetDP.y"
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
case 448:
#line 5026 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 449:
#line 5036 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 450:
#line 5044 "GetDP.y"
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
case 451:
#line 5057 "GetDP.y"
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
case 452:
#line 5070 "GetDP.y"
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
case 453:
#line 5084 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 454:
#line 5094 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 455:
#line 5104 "GetDP.y"
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
case 456:
#line 5118 "GetDP.y"
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
case 457:
#line 5132 "GetDP.y"
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
case 458:
#line 5151 "GetDP.y"
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
case 459:
#line 5169 "GetDP.y"
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
case 460:
#line 5180 "GetDP.y"
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
case 461:
#line 5195 "GetDP.y"
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
case 462:
#line 5210 "GetDP.y"
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
case 463:
#line 5225 "GetDP.y"
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
case 464:
#line 5240 "GetDP.y"
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
case 465:
#line 5255 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 466:
#line 5266 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 467:
#line 5271 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 468:
#line 5281 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 470:
#line 5291 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 471:
#line 5294 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 472:
#line 5304 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 473:
#line 5320 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 475:
#line 5336 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 476:
#line 5340 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 477:
#line 5344 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 478:
#line 5348 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 479:
#line 5353 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 480:
#line 5364 "GetDP.y"
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
case 482:
#line 5381 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 483:
#line 5385 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 484:
#line 5389 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 485:
#line 5393 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 486:
#line 5397 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5402 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 488:
#line 5413 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 490:
#line 5428 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 491:
#line 5432 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 492:
#line 5436 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 493:
#line 5440 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 494:
#line 5444 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 495:
#line 5455 "GetDP.y"
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
case 497:
#line 5473 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 5477 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 499:
#line 5481 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 500:
#line 5485 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 501:
#line 5490 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 502:
#line 5500 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 503:
#line 5506 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 504:
#line 5512 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 505:
#line 5522 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 506:
#line 5525 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 507:
#line 5530 "GetDP.y"
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
case 509:
#line 5548 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 510:
#line 5558 "GetDP.y"
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
case 511:
#line 5587 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 512:
#line 5590 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 513:
#line 5593 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 514:
#line 5601 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 515:
#line 5618 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 517:
#line 5630 "GetDP.y"
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
case 519:
#line 5653 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 521:
#line 5667 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 522:
#line 5674 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 523:
#line 5682 "GetDP.y"
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
case 524:
#line 5728 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 525:
#line 5733 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 526:
#line 5739 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 527:
#line 5742 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 528:
#line 5745 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 529:
#line 5747 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5753 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 532:
#line 5764 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 533:
#line 5767 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5773 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 535:
#line 5778 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 536:
#line 5784 "GetDP.y"
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
case 537:
#line 5798 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 539:
#line 5812 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 540:
#line 5819 "GetDP.y"
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
case 541:
#line 5847 "GetDP.y"
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
case 542:
#line 5857 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 543:
#line 5858 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 544:
#line 5864 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 545:
#line 5873 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 546:
#line 5890 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 548:
#line 5902 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 551:
#line 5911 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 553:
#line 5923 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 554:
#line 5930 "GetDP.y"
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
case 555:
#line 5942 "GetDP.y"
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
case 556:
#line 5953 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 557:
#line 5958 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 558:
#line 5964 "GetDP.y"
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
case 559:
#line 5981 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 560:
#line 5991 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 561:
#line 5994 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 562:
#line 5998 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 563:
#line 6011 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 564:
#line 6015 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 565:
#line 6021 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 566:
#line 6027 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 567:
#line 6033 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 568:
#line 6040 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 569:
#line 6045 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 570:
#line 6050 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 571:
#line 6055 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 572:
#line 6064 "GetDP.y"
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
case 573:
#line 6076 "GetDP.y"
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
case 574:
#line 6099 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 575:
#line 6100 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 576:
#line 6101 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 577:
#line 6102 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 578:
#line 6108 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 579:
#line 6110 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 580:
#line 6116 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 581:
#line 6122 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 582:
#line 6129 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 583:
#line 6138 "GetDP.y"
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
case 584:
#line 6160 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 585:
#line 6168 "GetDP.y"
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
case 586:
#line 6179 "GetDP.y"
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
case 587:
#line 6193 "GetDP.y"
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
case 588:
#line 6214 "GetDP.y"
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
case 589:
#line 6241 "GetDP.y"
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
case 590:
#line 6272 "GetDP.y"
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
case 591:
#line 6292 "GetDP.y"
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
      PostSubOperation_S.FrequencyLegend[0] = -1 ;
    ;
    break;}
case 593:
#line 6320 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 594:
#line 6327 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 595:
#line 6334 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 596:
#line 6341 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 597:
#line 6345 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 598:
#line 6349 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 599:
#line 6353 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 600:
#line 6357 "GetDP.y"
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
case 601:
#line 6367 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 602:
#line 6372 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 603:
#line 6377 "GetDP.y"
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
case 604:
#line 6397 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 605:
#line 6404 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 606:
#line 6413 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 607:
#line 6422 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 608:
#line 6431 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 609:
#line 6438 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 610:
#line 6446 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 611:
#line 6450 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 612:
#line 6459 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 613:
#line 6463 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 614:
#line 6467 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 615:
#line 6475 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 616:
#line 6481 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 617:
#line 6486 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 618:
#line 6499 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 619:
#line 6505 "GetDP.y"
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
      } while (i<(int)strlen(yyvsp[0].c)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 620:
#line 6555 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;
    break;}
case 621:
#line 6565 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;
    break;}
case 622:
#line 6575 "GetDP.y"
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
    ;
    break;}
case 623:
#line 6589 "GetDP.y"
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
    ;
    break;}
case 624:
#line 6603 "GetDP.y"
{
      if(LoopControlVariablesTab[ImbricatedLoop-1][1] >  
	 LoopControlVariablesTab[ImbricatedLoop-1][0]){
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
    ;
    break;}
case 625:
#line 6629 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 626:
#line 6633 "GetDP.y"
{
    ;
    break;}
case 628:
#line 6649 "GetDP.y"
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
case 629:
#line 6664 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 630:
#line 6670 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 631:
#line 6676 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 632:
#line 6682 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 633:
#line 6687 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstring);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstring);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 634:
#line 6699 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 635:
#line 6709 "GetDP.y"
{
      Msg(INFO2, "[<return>=%g] ? ",yyvsp[-2].d);
      fgets(buff, 128, stdin);

      if(!strcmp(buff,"\n"))
	Constant_S.Value.Float = yyvsp[-2].d;
      else
	Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-5].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 637:
#line 6728 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 638:
#line 6734 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 639:
#line 6740 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6751 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 641:
#line 6752 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 642:
#line 6753 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 643:
#line 6754 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 644:
#line 6755 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 645:
#line 6756 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 646:
#line 6757 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 647:
#line 6758 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 648:
#line 6759 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 649:
#line 6760 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 650:
#line 6761 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 651:
#line 6762 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 652:
#line 6763 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 653:
#line 6764 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 654:
#line 6765 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 655:
#line 6766 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 656:
#line 6767 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 657:
#line 6768 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 658:
#line 6769 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 659:
#line 6770 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 660:
#line 6771 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 661:
#line 6775 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 662:
#line 6776 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 663:
#line 6777 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 664:
#line 6778 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 665:
#line 6779 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 666:
#line 6780 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 667:
#line 6781 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 668:
#line 6782 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 669:
#line 6783 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 670:
#line 6784 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 671:
#line 6785 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 672:
#line 6786 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 673:
#line 6787 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 674:
#line 6788 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 675:
#line 6789 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 676:
#line 6790 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 677:
#line 6791 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 678:
#line 6792 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 679:
#line 6793 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 680:
#line 6794 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 681:
#line 6795 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 682:
#line 6796 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 683:
#line 6797 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 684:
#line 6798 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 685:
#line 6799 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 686:
#line 6800 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 687:
#line 6801 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 688:
#line 6802 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 689:
#line 6803 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 690:
#line 6804 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 691:
#line 6805 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 692:
#line 6806 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 693:
#line 6807 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6808 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 695:
#line 6809 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6810 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 697:
#line 6811 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 698:
#line 6812 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 699:
#line 6813 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 700:
#line 6814 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 701:
#line 6819 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 702:
#line 6820 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 703:
#line 6821 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 704:
#line 6822 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 705:
#line 6823 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 706:
#line 6824 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 707:
#line 6825 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 708:
#line 6844 "GetDP.y"
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
case 709:
#line 6862 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 710:
#line 6865 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 711:
#line 6871 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 712:
#line 6874 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 713:
#line 6881 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 714:
#line 6887 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 715:
#line 6890 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 716:
#line 6893 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 717:
#line 6905 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 718:
#line 6911 "GetDP.y"
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
case 719:
#line 6922 "GetDP.y"
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
case 720:
#line 6938 "GetDP.y"
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
case 721:
#line 6960 "GetDP.y"
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
case 722:
#line 6975 "GetDP.y"
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
case 723:
#line 7013 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 724:
#line 7021 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 725:
#line 7033 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 726:
#line 7041 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 727:
#line 7053 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 728:
#line 7055 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 729:
#line 7062 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 730:
#line 7065 "GetDP.y"
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
case 731:
#line 7080 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 732:
#line 7085 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 733:
#line 7090 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-3].c,yyvsp[-1].l,tmpstring);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	yyval.c = yyvsp[-3].c;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	yyval.c = yyvsp[-3].c;
      }
      else{
	yyval.c = (char*)Malloc((strlen(tmpstring)+1)*sizeof(char));
	strcpy(yyval.c, tmpstring);
	Free(yyvsp[-3].c);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 734:
#line 7109 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 735:
#line 7127 "GetDP.y"
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
#line 7138 "GetDP.y"



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


int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) {
  int  i, j ;
  List_T *InitialList;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  if (Flag_Plus == 0)
    sprintf(StringAux1, "%s", Name) ;
  else if (Flag_Plus == 1)
    sprintf(StringAux1, "%s_%d_", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(StringAux1, "%s_%d_%d_", Name, Num_Index1,Num_Index2) ;

  Group_P->Name = strsave(StringAux1) ;
  
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


/*  A d d _ P o s t S a v e  */

struct Value *  Add_PostSave(char * Name) {
  struct PostSave PostSave_S;

  if (!Problem_S.PostSave)
    Problem_S.PostSave = List_Create(10, 10, sizeof (struct PostSave) ) ;

  if ((i = List_ISearchSeq(Problem_S.PostSave, Name, fcmp_PostSave_Name)) < 0) {
    PostSave_S.Name = Name ;
    PostSave_S.Value = (struct Value *)Calloc(1,sizeof(struct Value)) ;
    List_Add(Problem_S.PostSave, &PostSave_S) ;
    printf("PostSave 11 %p\n",  PostSave_S.Value) ;
  }
  else {
    PostSave_S.Value = (struct Value *)(((struct PostSave *)
					 List_Pointer(Problem_S.PostSave,i))->Value) ;
    //List_Write(Problem_S.PostSave, i, &PostSave_S) ;
    printf("PostSave 22 %p\n",  PostSave_S.Value) ;
  }

  return  PostSave_S.Value ;
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
int  fcmp_PostSave_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostSave *)b)->Name ) ) ;
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

