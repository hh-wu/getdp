
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
#define	tEvaluationPoints	474
#define	tStr	475
#define	tDate	476
#define	tDEF	477
#define	tOR	478
#define	tAND	479
#define	tEQUAL	480
#define	tNOTEQUAL	481
#define	tAPPROXEQUAL	482
#define	tLESSOREQUAL	483
#define	tGREATEROREQUAL	484
#define	tLESSLESS	485
#define	tGREATERGREATER	486
#define	tCROSSPRODUCT	487
#define	UNARYPREC	488
#define	tSHOW	489

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.68 2004-04-24 16:21:45 geuzaine Exp $ */
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



#define	YYFINAL		1994
#define	YYFLAG		-32768
#define	YYNTBASE	258

#define YYTRANSLATE(x) ((unsigned)(x) <= 489 ? yytranslate[x] : 451)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   242,     2,   250,   251,   240,     2,     2,   245,
   246,   238,   236,   255,   237,   249,   239,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   230,
     2,   232,   224,   256,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   247,     2,   248,   244,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   253,     2,   254,   257,     2,     2,     2,     2,
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
   217,   218,   219,   220,   221,   222,   223,   225,   226,   227,
   228,   229,   231,   233,   234,   235,   241,   243,   252
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
  2516,  2522,  2525,  2528,  2532,  2542,  2546,  2556,  2562,  2563,
  2566,  2573,  2582,  2591,  2602,  2604,  2609,  2611,  2617,  2622,
  2627,  2635,  2640,  2646,  2654,  2660,  2669,  2670,  2674,  2680,
  2686,  2688,  2690,  2692,  2694,  2696,  2698,  2700,  2702,  2704,
  2706,  2708,  2710,  2712,  2714,  2716,  2718,  2720,  2722,  2724,
  2726,  2728,  2730,  2734,  2737,  2740,  2744,  2748,  2752,  2756,
  2760,  2764,  2768,  2772,  2776,  2780,  2784,  2788,  2792,  2796,
  2801,  2806,  2811,  2816,  2821,  2826,  2831,  2836,  2841,  2846,
  2853,  2858,  2863,  2868,  2873,  2878,  2883,  2890,  2897,  2904,
  2910,  2913,  2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,
  2930,  2932,  2934,  2938,  2940,  2942,  2946,  2950,  2954,  2960,
  2964,  2969,  2974,  2981,  2990,  2999,  3005,  3011,  3013,  3015,
  3017,  3019,  3021,  3026,  3033,  3035
};

static const short yyrhs[] = {    -1,
   259,   260,     0,     0,     0,   260,   261,   262,     0,    61,
   253,   265,   254,     0,    98,   253,   288,   254,     0,    67,
   253,   322,   254,     0,    80,   253,   307,   254,     0,    82,
   253,   313,   254,     0,    94,   253,   329,   254,     0,   110,
   253,   352,   254,     0,   129,   253,   379,   254,     0,   181,
   253,   409,   254,     0,   183,   253,   421,   254,     0,   425,
     0,   439,     0,    22,   449,     0,   263,     0,    19,     7,
     0,    19,   188,     7,     0,    19,    21,     7,     0,    19,
    35,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    61,     7,     0,    21,    98,     7,     0,    21,
    67,     7,     0,    21,    80,     7,     0,    21,    82,     7,
     0,    21,    94,     7,     0,    21,   110,     7,     0,    21,
   129,     7,     0,    21,   181,     7,     0,    21,   183,     7,
     0,    21,     3,     7,     0,     0,   264,   429,     0,     0,
     0,   265,   266,   267,     0,   448,   223,   272,     7,     0,
     5,   287,   223,   272,     7,     0,     0,     5,   285,   223,
   268,   272,     7,     0,    62,   247,   283,   248,     7,     0,
   269,     0,   448,   236,   223,   272,     7,     0,   439,     0,
   438,     0,     0,     0,   448,   247,   442,   248,   223,    65,
   270,   247,   250,   280,   271,   255,   250,   280,   255,   442,
   248,     7,     0,     0,     0,   276,   247,   273,   277,   274,
   278,   248,     0,   250,   280,     0,   272,     0,   448,   286,
     0,    68,     0,     5,     0,   280,     0,    63,     0,     0,
   284,   279,   280,     0,   284,    64,   448,   286,     0,     5,
     0,   282,     0,   253,   281,   254,     0,     0,   281,   284,
   282,     0,   281,   284,   237,   282,     0,     3,     0,   256,
   445,   256,     0,     3,     8,   442,     0,     3,     8,     3,
     8,   442,     0,   448,     0,     5,   253,   254,     0,     0,
   283,   284,     5,     0,   283,   284,     5,   253,   442,   254,
     0,     0,   255,     0,   253,   250,   442,   254,     0,     0,
   253,   254,     0,   253,     3,   254,     0,     0,   288,   289,
     0,    66,   247,   290,   248,     7,     0,     5,   247,   248,
   223,   291,     7,     0,     5,   247,   275,   248,   223,   291,
     7,     0,   439,     0,   438,     0,     0,   290,   284,     5,
     0,    23,   247,   442,   248,     0,    98,   247,     5,   248,
     0,     0,   292,   295,     0,     0,   253,   294,   254,     0,
   291,     0,   294,   255,   291,     0,     0,   296,   297,     0,
   300,     0,     0,     0,   297,   224,   298,   297,     8,   299,
   297,     0,   297,   238,   297,     0,   297,   241,   297,     0,
    57,   247,   297,   255,   297,   248,     0,   297,   239,   297,
     0,   297,   236,   297,     0,   297,   237,   297,     0,   297,
   240,   297,     0,   297,   244,   297,     0,   297,   230,   297,
     0,   297,   232,   297,     0,   297,   231,   297,     0,   297,
   233,   297,     0,   297,   227,   297,     0,   297,   228,   297,
     0,   297,   229,   297,     0,   297,   226,   297,     0,   297,
   225,   297,     0,   237,   297,     0,   236,   297,     0,   242,
   297,     0,   245,   297,   246,     0,   443,     0,   441,   304,
   306,     0,     5,   378,     0,   378,     0,   378,   304,     0,
     0,   120,   301,   247,   295,   248,     0,     0,    59,   247,
     5,   247,   302,   295,   248,   248,   253,   442,   254,     0,
    60,   247,     5,   248,   253,   442,   255,   442,   254,     0,
    54,   247,   378,   248,     0,    56,   247,   378,   248,     0,
     0,    55,   303,   247,   295,   255,   275,   248,     0,   230,
     5,   232,   247,   295,   248,     0,   251,     5,     0,   251,
   206,     0,   251,   140,     0,   251,     3,     0,   300,   250,
     3,     0,   250,     3,     0,   251,   251,   448,     0,   300,
   252,   442,     0,    58,   247,     5,   255,     3,   248,     0,
   247,   249,   248,     0,   247,   248,     0,   247,   305,   248,
     0,   297,     0,   305,   255,   297,     0,     0,   253,   445,
   254,     0,   253,    68,   247,   275,   248,   254,     0,     0,
   307,   253,   308,   254,     0,     0,   308,   309,     0,    95,
     5,     7,     0,    81,   253,   310,   254,     0,     0,   310,
   253,   311,   254,     0,     0,   311,   312,     0,    68,   275,
     7,     0,    68,    63,     7,     0,    80,     5,   306,     7,
     0,     0,   313,   253,   314,   254,     0,     0,   314,   315,
     0,    95,     5,     7,     0,    87,   291,     7,     0,    81,
   253,   316,   254,     0,     0,   316,   253,   317,   254,     0,
     0,   317,   318,     0,    85,     5,     7,     0,    86,     5,
     7,     0,    81,   253,   319,   254,     0,     0,   319,   253,
   320,   254,     0,     0,   320,   321,     0,    88,     5,     7,
     0,    89,   442,     7,     0,    90,   442,     7,     0,    91,
   442,     7,     0,    92,   442,     7,     0,    93,   442,     7,
     0,     0,   438,     0,   322,   323,     0,   253,   324,   254,
     0,   439,     0,     0,   324,   325,     0,    95,   448,     7,
     0,    95,   448,   285,     7,     0,    85,     5,     7,     0,
    81,   253,   326,   254,     0,    81,     5,   253,   326,   254,
     0,     0,   326,   253,   327,   254,     0,   326,   438,     0,
     0,   327,   328,     0,    85,     5,     7,     0,    68,   275,
     7,     0,    69,   275,     7,     0,    75,   291,     7,     0,
    74,   291,     7,     0,    79,     5,     7,     0,    76,   253,
   443,   284,   443,   254,     7,     0,    70,   275,     7,     0,
    71,   275,     7,     0,    98,   291,     7,     0,    73,   291,
     7,     0,    72,   291,     7,     0,    98,   247,   291,   255,
   291,   248,     7,     0,    73,   247,   291,   255,   291,   248,
     7,     0,    72,   247,   291,   255,   291,   248,     7,     0,
     0,   329,   330,     0,   253,   331,   254,     0,   439,     0,
   438,     0,     0,   331,   332,     0,    95,   448,     7,     0,
    95,     5,   285,     7,     0,    85,     5,     7,     0,    96,
   253,   333,   254,     0,   104,   253,   339,   254,     0,   106,
   253,   346,   254,     0,    67,   253,   349,   254,     0,     0,
   333,   253,   334,   254,     0,     0,   334,   335,     0,    95,
     5,     7,     0,    97,     5,     7,     0,    97,     5,   285,
     7,     0,    98,     5,   336,     7,     0,    99,   253,     5,
   284,     5,   254,     7,     0,   100,   293,     7,     0,   101,
   293,     7,     0,   102,   275,     7,     0,   103,   275,     7,
     0,     0,     0,     0,   253,   111,     5,     7,   110,     5,
   285,     7,   337,    61,   275,     7,   338,   129,     5,   286,
     7,   254,     0,     0,   339,   253,   340,   254,     0,     0,
   340,   341,     0,    95,     5,     7,     0,   105,   342,     7,
     0,    97,   344,     7,     0,     5,     0,   253,   343,   254,
     0,     0,   343,   284,     5,     0,     5,     0,   253,   345,
   254,     0,     0,   345,   284,     5,     0,     0,   346,   253,
   347,   254,     0,     0,   347,   348,     0,    95,   448,     7,
     0,    85,     5,     7,     0,    97,     5,     7,     0,     0,
   349,   253,   350,   254,     0,     0,   350,   351,     0,    97,
     5,     7,     0,   107,   276,     7,     0,   108,   279,     7,
     0,   109,   448,   286,     7,     0,     0,   352,   353,     0,
   253,   354,   254,     0,   439,     0,   438,     0,     0,   354,
   355,     0,    95,   448,     7,     0,    95,     5,   285,     7,
     0,    85,     5,     7,     0,   111,   253,   356,   254,     0,
   115,   253,   363,   254,     0,     0,   356,   253,   357,   254,
     0,   356,   438,     0,     0,   357,   358,     0,    95,   448,
     7,     0,    85,   106,     7,     0,    85,   116,     7,     0,
    85,     5,     7,     0,   180,   444,     7,     0,     0,   112,
   448,   359,   362,     7,     0,     0,   112,     5,   253,   254,
   360,   362,     7,     0,   113,     3,     7,     0,     0,   247,
   361,   295,   248,     7,     0,   127,   275,     7,     0,    82,
     5,     7,     0,    83,     5,     7,     0,    80,     5,     7,
     0,   114,     3,     7,     0,     0,   247,   448,   248,     0,
     0,   363,   364,     0,   363,   439,     0,   363,   438,     0,
   116,   253,   369,   254,     0,   117,   253,   369,   254,     0,
   118,   253,   373,   254,     0,   119,   253,   365,   254,     0,
     0,   365,   366,     0,    85,     5,     7,     0,   109,     5,
     7,     0,   253,   367,   254,     0,     0,   367,   368,     0,
    77,   378,     7,     0,    78,   378,     7,     0,   115,   378,
     7,     0,   127,   275,     7,     0,     0,   369,   370,     0,
     0,     0,   377,   247,   371,   295,   372,   255,   295,   248,
     7,     0,   127,   275,     7,     0,    80,     5,     7,     0,
    82,     5,     7,     0,   128,     7,     0,    83,     5,     7,
     0,    84,   247,     3,   248,     7,     0,     0,   373,   374,
     0,   127,   275,     7,     0,     0,     0,   377,   247,   375,
   295,   376,   255,   378,   248,     7,     0,     0,   120,     0,
   121,     0,   122,     0,   123,     0,   124,     0,   125,     0,
   126,     0,   253,     5,   448,   254,     0,   253,   448,   254,
     0,     0,   379,   380,     0,   253,   381,   254,     0,   439,
     0,   438,     0,     0,   381,   382,     0,    95,   448,     7,
     0,    95,     5,   285,     7,     0,   130,   253,   384,   254,
     0,     0,   137,   383,   253,   391,   254,     0,   438,     0,
     0,   384,   253,   385,   254,     0,   384,   438,     0,     0,
   385,   386,     0,    95,   448,     7,     0,    85,     5,     7,
     0,   131,   387,     7,     0,   132,   449,     7,     0,   135,
   389,     7,     0,   136,     5,     7,     0,   133,   444,     7,
     0,   134,   449,     7,     0,   438,     0,   448,   286,     0,
   253,   388,   254,     0,     0,   388,   284,   448,     0,   448,
     0,   253,   390,   254,     0,     0,   390,   284,   448,     0,
     0,   391,   392,     0,     5,   448,     7,     0,   139,   291,
     7,     0,   149,   253,   398,   254,     0,   153,   253,   400,
   254,     0,   156,   253,   402,   254,     0,   159,   253,   404,
   254,     0,     5,   247,   448,   248,     7,     0,   139,   247,
   291,   248,     7,     0,   148,     7,     0,    15,   247,   291,
   248,   253,   391,   254,     0,    15,   247,   291,   248,   253,
   391,   254,    16,   253,   391,   254,     0,   141,   247,     5,
   255,   291,   248,     7,     0,   165,   247,     5,   255,   291,
   255,   291,   255,   291,   255,   291,   248,     7,     0,   165,
   247,     5,   255,   291,   255,   291,   255,   291,   248,     7,
     0,   166,   247,     5,   255,   444,   248,     7,     0,   167,
   247,     5,   255,   444,   248,     7,     0,   146,   247,     5,
   255,   291,   248,     7,     0,   147,   247,     5,   255,   275,
   255,     5,   248,     7,     0,   142,   247,     5,   255,     5,
   255,   444,   248,     7,     0,   143,   247,     5,   255,     5,
   255,   442,   248,     7,     0,   144,   247,     5,   255,   442,
   255,   444,   255,   442,   248,     7,     0,   145,   247,     5,
   255,     5,   255,     5,   255,   442,   255,   444,   255,   442,
   255,   442,   248,     7,     0,   149,   247,   442,   255,   442,
   255,   291,   255,   291,   248,   253,   391,   254,     0,   153,
   247,   442,   255,   442,   255,   291,   255,   442,   255,   442,
   248,   253,   391,   254,     0,   156,   247,   442,   255,   442,
   255,   291,   248,   253,   391,   254,     0,   156,   247,   442,
   255,   442,   255,   291,   255,   442,   248,   253,   391,   254,
     0,     0,   188,   393,   247,   395,   396,   248,     7,     0,
     0,   191,   394,   247,   395,   396,   248,     7,     0,   162,
   247,   275,   255,   291,   248,     7,     0,   162,   247,   275,
   255,   291,   255,   442,   255,   291,   248,     7,     0,   183,
   247,   448,   248,     7,     0,   164,   247,   449,   248,     7,
     0,   168,   247,     5,   255,   444,   255,   442,   248,     7,
     0,   169,   247,     5,   255,   442,   255,   449,   248,     7,
     0,   170,   247,     5,   255,   444,   255,   449,   248,     7,
     0,   171,   253,   448,   254,     7,     0,   172,   253,   448,
   254,     7,     0,   178,   253,   448,   255,   275,   255,   449,
   255,   291,   254,     7,     0,   178,   253,   448,   255,   275,
   255,   449,   254,     7,     0,   173,   247,     5,   255,     5,
   255,   442,   255,   442,   248,   253,   391,   254,     7,     0,
   174,   247,     5,   255,     5,   255,   442,   255,   442,   248,
   253,   391,   254,     7,     0,   175,   247,     5,   255,   442,
   248,     7,     0,   179,   253,     5,   255,     5,   255,   132,
   449,   255,     4,   254,     7,     0,   179,   253,     5,   255,
     5,   255,   132,   449,   254,     7,     0,   179,   253,     5,
   255,     5,   254,     7,     0,   176,   247,     5,   255,     5,
   248,     7,     0,   177,   247,     5,   255,     5,   248,     7,
     0,   438,     0,   293,     0,     5,     0,     0,   396,   397,
     0,   255,   203,   449,     0,   255,   206,   444,     0,   255,
   444,     0,     0,   398,   399,     0,   150,   442,     7,     0,
   151,   442,     7,     0,   140,   291,     7,     0,   152,   291,
     7,     0,   137,   253,   391,   254,     0,     0,   400,   401,
     0,   150,   442,     7,     0,   151,   442,     7,     0,   140,
   291,     7,     0,   154,   442,     7,     0,   155,   442,     7,
     0,   137,   253,   391,   254,     0,     0,   402,   403,     0,
   157,   442,     7,     0,    87,   442,     7,     0,   158,   291,
     7,     0,    18,   442,     7,     0,   137,   253,   391,   254,
     0,     0,   404,   405,     0,   157,   442,     7,     0,   160,
   442,     7,     0,    87,   442,     7,     0,    18,   442,     7,
     0,   130,     5,     7,     0,   161,   253,   406,   254,     0,
   137,   253,   391,   254,     0,   138,   253,   391,   254,     0,
     0,   406,   253,   407,   254,     0,     0,   407,   408,     0,
    85,     5,     7,     0,   111,     5,     7,     0,   127,   275,
     7,     0,    87,   442,     7,     0,    98,   291,     7,     0,
    18,     5,     7,     0,     0,   409,   410,     0,   253,   411,
   254,     0,   439,     0,     0,   411,   412,     0,    95,   448,
     7,     0,    95,     5,   285,     7,     0,   131,   448,   286,
     7,     0,   182,     5,     7,     0,   111,   253,   413,   254,
     0,     0,   413,   253,   414,   254,     0,   413,   439,     0,
   413,   438,     0,     0,   414,   415,     0,    95,   448,     7,
     0,    74,   253,   416,   254,     0,     0,   416,   116,   253,
   417,   254,     0,   416,     5,   253,   417,   254,     0,     0,
   417,   418,     0,     0,   377,   247,   419,   295,   248,     7,
     0,    85,     5,     7,     0,     0,   127,   420,   275,     7,
     0,    80,     5,     7,     0,    82,     5,     7,     0,     0,
   421,   422,     0,   253,   423,   254,     0,   439,     0,   438,
     0,     0,   423,   424,     0,    95,   448,     7,     0,   184,
     5,     7,     0,   208,     5,     7,     0,   186,   449,     7,
     0,   137,   253,   427,   254,     0,     0,   183,   448,   185,
   448,   426,   253,   427,   254,     0,     0,     0,   427,   428,
   429,     0,   187,   247,   431,   434,   435,   248,     7,     0,
   188,   247,   431,   434,   435,   248,     7,     0,   188,   247,
   431,   434,   435,   248,   237,   232,   251,   251,   448,     7,
     0,   188,   247,     6,   255,   442,   435,   248,     7,     0,
   188,   247,     6,   255,   221,   247,   449,   248,   435,   248,
     7,     0,     0,   189,   247,   275,   430,   255,   127,   275,
   435,   248,     7,     0,   438,     0,   190,   247,     6,   435,
   248,     7,     0,   448,   433,   255,     0,   448,   433,   432,
     5,   433,   255,     0,   238,     0,   239,     0,   236,     0,
   237,     0,     0,   247,   275,   248,     0,   193,     0,   194,
   275,     0,   195,   275,     0,   197,   253,   253,   445,   254,
   253,   445,   254,   253,   445,   254,   254,     0,   196,   275,
     0,   196,   253,   291,   255,   291,   255,   291,   254,   253,
   444,   255,   444,   255,   444,   254,     0,   198,   253,   445,
   254,     0,   199,   253,   253,   445,   254,   253,   445,   254,
   254,   253,   442,   254,     0,   200,   253,   253,   445,   254,
   253,   445,   254,   253,   445,   254,   254,   253,   442,   255,
   442,   254,     0,   201,   253,   253,   445,   254,   253,   445,
   254,   253,   445,   254,   253,   445,   254,   254,   253,   442,
   255,   442,   255,   442,   254,     0,   194,   275,   202,     5,
   253,   442,   255,   442,   254,   253,   442,   254,     0,     0,
   435,   436,     0,   255,   203,   449,     0,   255,   203,   232,
   449,     0,   255,   203,   235,   449,     0,   255,   204,   442,
     0,   255,   211,     0,   255,   212,     0,   255,   207,   442,
     0,   255,   208,     5,     0,   255,   209,   437,     0,   255,
   210,   437,     0,   255,   208,   437,     0,   255,   205,   442,
     0,   255,   206,   444,     0,   255,   192,     5,     0,   255,
   214,     5,     0,   255,   213,   442,     0,   255,    74,   444,
     0,   255,   215,   442,     0,   255,   215,   253,   445,   254,
     0,   255,   216,     0,   255,   217,     0,   255,   133,   444,
     0,   255,   162,   253,   291,   255,   291,   255,   291,   254,
     0,   255,   218,   293,     0,   255,   219,   253,   442,   255,
   442,   255,   442,   254,     0,   255,   220,   253,   445,   254,
     0,     0,   437,     6,     0,    13,   245,   442,     8,   442,
   246,     0,    13,   245,   442,     8,   442,     8,   442,   246,
     0,    13,     5,   127,   253,   442,     8,   442,   254,     0,
    13,     5,   127,   253,   442,     8,   442,     8,   442,   254,
     0,    14,     0,    15,   245,   442,   246,     0,    17,     0,
    28,   247,   440,   248,     7,     0,   448,   223,   444,     7,
     0,   448,   223,     6,     7,     0,   448,   223,   221,   247,
   449,   248,     7,     0,   448,   223,   450,     7,     0,    11,
   245,     6,   246,     7,     0,    11,   245,     6,   255,   445,
   246,     7,     0,    12,   245,   448,   246,     7,     0,    12,
   245,   448,   246,   247,   442,   248,     7,     0,     0,   440,
   284,     5,     0,   440,   284,     5,   223,   442,     0,   440,
   284,     5,   223,     6,     0,    34,     0,    35,     0,    36,
     0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
     0,    42,     0,    43,     0,    44,     0,    45,     0,    46,
     0,    47,     0,    48,     0,    49,     0,    50,     0,    51,
     0,    52,     0,    53,     0,   448,     0,   443,     0,   245,
   442,   246,     0,   237,   442,     0,   242,   442,     0,   442,
   237,   442,     0,   442,   236,   442,     0,   442,   238,   442,
     0,   442,   239,   442,     0,   442,   240,   442,     0,   442,
   244,   442,     0,   442,   230,   442,     0,   442,   232,   442,
     0,   442,   231,   442,     0,   442,   233,   442,     0,   442,
   227,   442,     0,   442,   228,   442,     0,   442,   226,   442,
     0,   442,   225,   442,     0,    34,   247,   442,   248,     0,
    35,   247,   442,   248,     0,    36,   247,   442,   248,     0,
    37,   247,   442,   248,     0,    38,   247,   442,   248,     0,
    39,   247,   442,   248,     0,    40,   247,   442,   248,     0,
    41,   247,   442,   248,     0,    42,   247,   442,   248,     0,
    43,   247,   442,   248,     0,    44,   247,   442,   255,   442,
   248,     0,    45,   247,   442,   248,     0,    46,   247,   442,
   248,     0,    47,   247,   442,   248,     0,    48,   247,   442,
   248,     0,    49,   247,   442,   248,     0,    50,   247,   442,
   248,     0,    51,   247,   442,   255,   442,   248,     0,    52,
   247,   442,   255,   442,   248,     0,    53,   247,   442,   255,
   442,   248,     0,   442,   224,   442,     8,   442,     0,   442,
   250,     0,     4,     0,     3,     0,    29,     0,    30,     0,
    31,     0,    32,     0,    33,     0,   448,     0,     0,   442,
     0,   446,     0,   253,   445,   254,     0,   442,     0,   446,
     0,   445,   255,   442,     0,   445,   255,   446,     0,   442,
     8,   442,     0,   442,     8,   442,     8,   442,     0,     5,
   253,   254,     0,     5,   253,   445,   254,     0,    24,   247,
     5,   248,     0,    25,   247,     5,   255,     5,   248,     0,
    26,   247,   442,   255,   442,   255,   442,   248,     0,    27,
   247,   442,   255,   442,   255,   442,   248,     0,     5,   257,
   253,   442,   254,     0,   447,   257,   253,   442,   254,     0,
     5,     0,   447,     0,     6,     0,     5,     0,   450,     0,
    10,   245,   449,   246,     0,    10,   245,   449,   255,   445,
   246,     0,   222,     0,     9,   247,   449,   255,   449,   248,
     0
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
  2154,  2166,  2191,  2216,  2221,  2229,  2237,  2247,  2264,  2272,
  2279,  2286,  2295,  2304,  2313,  2332,  2340,  2343,  2366,  2368,
  2372,  2381,  2385,  2393,  2400,  2409,  2412,  2415,  2418,  2423,
  2441,  2488,  2505,  2509,  2514,  2519,  2524,  2538,  2558,  2563,
  2568,  2592,  2647,  2651,  2655,  2664,  2728,  2734,  2739,  2744,
  2748,  2755,  2758,  2763,  2781,  2786,  2790,  2807,  2821,  2826,
  2830,  2843,  2849,  2856,  2863,  2867,  2874,  2884,  2895,  2912,
  2984,  2996,  3000,  3035,  3038,  3041,  3085,  3092,  3095,  3117,
  3119,  3123,  3131,  3135,  3143,  3150,  3160,  3162,  3167,  3182,
  3196,  3200,  3219,  3223,  3228,  3232,  3235,  3246,  3252,  3265,
  3292,  3333,  3359,  3364,  3370,  3681,  3686,  3695,  3704,  3713,
  3718,  3721,  3759,  3776,  3800,  3805,  3812,  3817,  3820,  3823,
  3828,  3836,  3839,  3851,  3861,  3873,  3882,  3885,  3889,  3891,
  3893,  3899,  3920,  3924,  3935,  4013,  4059,  4083,  4092,  4101,
  4106,  4115,  4124,  4141,  4145,  4179,  4188,  4242,  4258,  4261,
  4262,  4263,  4264,  4265,  4266,  4267,  4271,  4294,  4316,  4323,
  4326,  4347,  4349,  4353,  4361,  4365,  4374,  4381,  4384,  4386,
  4389,  4393,  4409,  4424,  4432,  4448,  4452,  4457,  4466,  4469,
  4474,  4479,  4484,  4489,  4493,  4497,  4536,  4541,  4546,  4556,
  4568,  4572,  4577,  4588,  4597,  4606,  4632,  4639,  4645,  4651,
  4657,  4665,  4687,  4694,  4700,  4711,  4722,  4735,  4750,  4765,
  4785,  4806,  4818,  4838,  4855,  4874,  4895,  4929,  4942,  4956,
  4969,  4982,  4989,  4991,  4998,  5000,  5011,  5023,  5033,  5041,
  5054,  5067,  5081,  5091,  5101,  5115,  5129,  5147,  5166,  5177,
  5192,  5207,  5222,  5237,  5252,  5262,  5268,  5278,  5284,  5287,
  5291,  5301,  5315,  5327,  5331,  5337,  5341,  5345,  5350,  5359,
  5372,  5376,  5382,  5386,  5390,  5394,  5399,  5408,  5420,  5423,
  5429,  5433,  5437,  5441,  5450,  5465,  5468,  5474,  5478,  5482,
  5487,  5497,  5503,  5509,  5518,  5522,  5526,  5540,  5543,  5555,
  5584,  5587,  5590,  5598,  5614,  5622,  5625,  5646,  5649,  5660,
  5663,  5671,  5679,  5725,  5730,  5735,  5739,  5742,  5744,  5749,
  5756,  5760,  5764,  5769,  5775,  5781,  5794,  5805,  5808,  5816,
  5844,  5855,  5855,  5861,  5870,  5886,  5894,  5897,  5902,  5904,
  5907,  5916,  5919,  5927,  5939,  5950,  5955,  5960,  5978,  5987,
  5991,  5996,  6006,  6012,  6018,  6024,  6030,  6037,  6042,  6047,
  6052,  6059,  6073,  6095,  6098,  6099,  6100,  6103,  6107,  6111,
  6119,  6126,  6133,  6157,  6164,  6176,  6189,  6209,  6235,  6268,
  6288,  6314,  6317,  6325,  6332,  6339,  6343,  6347,  6351,  6355,
  6365,  6370,  6375,  6395,  6402,  6411,  6420,  6429,  6436,  6444,
  6448,  6457,  6461,  6465,  6473,  6479,  6484,  6491,  6505,  6512,
  6560,  6572,  6582,  6596,  6610,  6636,  6640,  6652,  6656,  6671,
  6677,  6683,  6689,  6694,  6706,  6716,  6732,  6735,  6741,  6747,
  6758,  6760,  6761,  6762,  6763,  6764,  6765,  6766,  6767,  6768,
  6769,  6770,  6771,  6772,  6773,  6774,  6775,  6776,  6777,  6778,
  6779,  6782,  6784,  6785,  6786,  6787,  6788,  6789,  6790,  6791,
  6792,  6793,  6794,  6795,  6796,  6797,  6798,  6799,  6800,  6801,
  6802,  6803,  6804,  6805,  6806,  6807,  6808,  6809,  6810,  6811,
  6812,  6813,  6814,  6815,  6816,  6817,  6818,  6819,  6820,  6821,
  6822,  6825,  6828,  6829,  6830,  6831,  6832,  6833,  6851,  6867,
  6872,  6878,  6881,  6886,  6894,  6897,  6900,  6910,  6918,  6929,
  6945,  6967,  6982,  7020,  7028,  7038,  7048,  7058,  7062,  7067,
  7072,  7087,  7092,  7097,  7116,  7133
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
"tNoNewLine","tDecomposeInSimplex","tChangeOfValues","tFrequencyLegend","tEvaluationPoints",
"tStr","tDate","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL",
"'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'",
"'-'","'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'",
"'['","']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","'@'","'~'","Stats",
"@1","ProblemDefinitions","@2","ProblemDefinition","Interactive","@3","Groups",
"@4","Group","@5","MovingBand2DGroup","@6","@7","ReducedGroupRHS","@8","@9",
"GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@10","ListOfExpression","RecursiveListOfExpression","WholeQuantityExpression",
"@11","WholeQuantity","@12","@13","WholeQuantity_Single","@14","@15","@16","ArgumentsForFunction",
"RecursiveListOfQuantity","ParametersForFunction","JacobianMethods","JacobianMethod",
"JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods",
"IntegrationMethod","IntegrationMethodTerm","IntegrationCases","IntegrationCase",
"IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@17","@18","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@19","@20","@21","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@22","@23","GlobalTerm","GlobalTermTerm","@24","@25","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@26","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@27","@28","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@29","@30","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@31","PostSubOperations","@32","PostSubOperation","@33","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Loop","Affectation","DefineConstants","NameForFunction","FExpr",
"OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","StringIndex","String__Index",
"CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   259,   258,   260,   261,   260,   262,   262,   262,   262,   262,
   262,   262,   262,   262,   262,   262,   262,   262,   262,   263,
   263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
   263,   263,   263,   263,   263,   263,   263,   263,   263,   264,
   263,   265,   266,   265,   267,   267,   268,   267,   267,   267,
   267,   267,   267,   270,   271,   269,   273,   274,   272,   272,
   275,   275,   276,   276,   277,   277,   278,   278,   278,   279,
   280,   280,   281,   281,   281,   282,   282,   282,   282,   282,
   282,   283,   283,   283,   284,   284,   285,   286,   286,   287,
   288,   288,   289,   289,   289,   289,   289,   290,   290,   291,
   291,   292,   291,   293,   293,   294,   294,   296,   295,   297,
   298,   299,   297,   297,   297,   297,   297,   297,   297,   297,
   297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
   297,   297,   297,   300,   300,   300,   300,   300,   300,   301,
   300,   302,   300,   300,   300,   300,   303,   300,   300,   300,
   300,   300,   300,   300,   300,   300,   300,   300,   304,   304,
   304,   305,   305,   306,   306,   306,   307,   307,   308,   308,
   309,   309,   310,   310,   311,   311,   312,   312,   312,   313,
   313,   314,   314,   315,   315,   315,   316,   316,   317,   317,
   318,   318,   318,   319,   319,   320,   320,   321,   321,   321,
   321,   321,   321,   322,   322,   322,   323,   323,   324,   324,
   325,   325,   325,   325,   325,   326,   326,   326,   327,   327,
   328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
   328,   328,   328,   328,   328,   329,   329,   330,   330,   330,
   331,   331,   332,   332,   332,   332,   332,   332,   332,   333,
   333,   334,   334,   335,   335,   335,   335,   335,   335,   335,
   335,   335,   336,   337,   338,   336,   339,   339,   340,   340,
   341,   341,   341,   342,   342,   343,   343,   344,   344,   345,
   345,   346,   346,   347,   347,   348,   348,   348,   349,   349,
   350,   350,   351,   351,   351,   351,   352,   352,   353,   353,
   353,   354,   354,   355,   355,   355,   355,   355,   356,   356,
   356,   357,   357,   358,   358,   358,   358,   358,   359,   358,
   360,   358,   358,   361,   358,   358,   358,   358,   358,   358,
   362,   362,   363,   363,   363,   363,   364,   364,   364,   364,
   365,   365,   366,   366,   366,   367,   367,   368,   368,   368,
   368,   369,   369,   371,   372,   370,   370,   370,   370,   370,
   370,   370,   373,   373,   374,   375,   376,   374,   377,   377,
   377,   377,   377,   377,   377,   377,   378,   378,   379,   379,
   380,   380,   380,   381,   381,   382,   382,   382,   383,   382,
   382,   384,   384,   384,   385,   385,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   387,   387,   388,   388,   389,
   389,   390,   390,   391,   391,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   393,   392,   394,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   395,   395,   396,   396,   397,
   397,   397,   398,   398,   399,   399,   399,   399,   399,   400,
   400,   401,   401,   401,   401,   401,   401,   402,   402,   403,
   403,   403,   403,   403,   404,   404,   405,   405,   405,   405,
   405,   405,   405,   405,   406,   406,   407,   407,   408,   408,
   408,   408,   408,   408,   409,   409,   410,   410,   411,   411,
   412,   412,   412,   412,   412,   413,   413,   413,   413,   414,
   414,   415,   415,   416,   416,   416,   417,   417,   419,   418,
   418,   420,   418,   418,   418,   421,   421,   422,   422,   422,
   423,   423,   424,   424,   424,   424,   424,   426,   425,   427,
   428,   427,   429,   429,   429,   429,   429,   430,   429,   429,
   429,   431,   431,   432,   432,   432,   432,   433,   433,   434,
   434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
   435,   435,   436,   436,   436,   436,   436,   436,   436,   436,
   436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
   436,   436,   436,   436,   436,   436,   436,   436,   437,   437,
   438,   438,   438,   438,   438,   438,   438,   439,   439,   439,
   439,   439,   439,   439,   439,   439,   440,   440,   440,   440,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   443,   443,   443,   443,   443,   443,   443,   443,   444,
   444,   444,   444,   445,   445,   445,   445,   446,   446,   446,
   446,   446,   446,   446,   446,   447,   447,   448,   448,   449,
   449,   449,   449,   449,   449,   450
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
     5,     2,     2,     3,     9,     3,     9,     5,     0,     2,
     6,     8,     8,    10,     1,     4,     1,     5,     4,     4,
     7,     4,     5,     7,     5,     8,     0,     3,     5,     5,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     3,     2,     2,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
     4,     4,     4,     4,     4,     4,     6,     6,     6,     5,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
     1,     1,     3,     1,     1,     3,     3,     3,     5,     3,
     4,     4,     6,     8,     8,     5,     5,     1,     1,     1,
     1,     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   728,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   729,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   731,   730,     0,     0,   735,    18,   732,   637,    42,
   204,   167,   180,   236,    91,   297,   379,   515,   546,     0,
     0,   625,     0,   627,     0,     0,     0,     0,    41,   570,
     0,   710,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   205,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   703,   702,   728,     0,     0,
     0,     0,     0,   704,   705,   706,   707,   708,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   711,   662,     0,   712,   709,     0,     0,
     0,     0,     0,     0,     0,     0,    86,     0,     6,     0,
   209,     8,   206,   208,   169,     9,   182,    10,   241,    11,
   237,   240,   239,   728,     0,     7,    92,    97,    96,   302,
    12,   298,   301,   300,   384,    13,   380,   383,   382,   519,
    14,   516,   518,   551,    15,   547,   550,   549,   558,     0,
     0,     0,     0,   578,     0,     0,   728,    63,     0,    61,
   568,     0,    88,   591,     0,     0,   630,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   664,   665,     0,   714,     0,   715,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   701,   629,   632,   726,   633,     0,
   635,     0,     0,   733,     0,   628,   638,   728,     0,    44,
    50,    53,    52,     0,     0,     0,     0,     0,     0,    98,
     0,     0,     0,     0,     0,     0,     0,   626,   580,     0,
     0,     0,     0,     0,     0,     0,     0,   591,     0,     0,
     0,   591,    76,   728,    73,     0,    60,    71,    80,     0,
    57,     0,    62,     0,   727,   720,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   663,   713,     0,   718,     0,   679,   678,   676,
   677,   672,   674,   673,   675,   667,   666,   668,   669,   670,
   671,     0,     0,     0,     0,     0,     0,     0,     0,    82,
   710,     0,     0,     0,     0,     0,   207,   210,     0,     0,
   168,   170,     0,   102,     0,   181,   183,     0,     0,     0,
     0,     0,     0,   238,   242,     0,     0,    85,     0,     0,
     0,     0,   299,   303,     0,     0,   389,   381,   385,   391,
     0,     0,     0,     0,   517,   520,     0,     0,     0,     0,
     0,   548,   552,   560,     0,     0,   581,   582,   102,   584,
     0,     0,     0,     0,     0,     0,     0,   576,   577,   574,
   575,   572,     0,     0,   591,     0,     0,     0,    85,     0,
     0,     0,    89,     0,     0,   592,   721,   722,     0,     0,
     0,   680,   681,   682,   683,   684,   685,   686,   687,   688,
   689,     0,   691,   692,   693,   694,   695,   696,     0,     0,
     0,     0,   716,   717,     0,     0,   634,     0,   736,   734,
   640,   639,     0,     0,    47,     0,    85,   728,     0,     0,
     0,     0,   216,     0,     0,   173,     0,   187,     0,     0,
     0,   108,     0,   289,     0,   728,     0,   250,   267,   282,
   102,     0,     0,     0,     0,   728,     0,   309,   333,   728,
     0,   392,     0,   728,     0,   526,    88,     0,     0,   560,
     0,     0,     0,   561,     0,     0,   621,     0,     0,     0,
     0,     0,     0,     0,     0,   579,   578,     0,     0,     0,
   703,    78,    81,    72,     0,    77,     0,    66,    58,    65,
   571,   710,   710,     0,     0,     0,     0,     0,   710,     0,
   619,   619,   619,   597,   598,     0,     0,     0,   612,   613,
   104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   631,   719,   700,   636,    90,     0,     0,    64,     0,     0,
     0,    45,     0,     0,   216,     0,   213,   211,     0,     0,
     0,   171,     0,     0,     0,   185,   103,     0,   184,     0,
   245,     0,   243,     0,     0,     0,     0,   102,    93,    99,
   306,     0,   304,     0,     0,     0,   386,     0,   414,     0,
   521,     0,     0,   524,   553,   561,   554,   556,   555,   559,
     0,     0,     0,     0,   102,     0,   586,     0,     0,     0,
   563,     0,     0,     0,   564,     0,     0,     0,    74,   591,
    85,   609,   614,   102,   606,     0,     0,   593,   596,   604,
   605,   599,   600,   603,   601,   602,   608,   607,     0,   610,
   102,   616,     0,     0,   723,     0,     0,   690,   697,   698,
   699,    87,     0,    46,    49,    83,    51,     0,     0,   219,
   214,   218,   212,   175,   172,   189,   186,     0,     0,   728,
   641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
   651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     0,   147,     0,     0,     0,     0,     0,   140,     0,     0,
     0,     0,     0,     0,     0,     0,   109,   110,   138,     0,
   135,   709,   291,   249,   244,   252,   246,   269,   247,   284,
   248,    94,     0,   305,   312,   307,   311,     0,     0,     0,
     0,   308,   334,   336,   335,   387,   395,   388,   394,     0,
   522,   530,   525,   529,   528,   523,   557,   562,     0,   623,
   622,     0,     0,     0,     0,     0,     0,   573,   591,   566,
     0,    79,    75,     0,     0,     0,     0,   594,   595,   620,
     0,   106,     0,     0,     0,     0,     0,    48,     0,    54,
   215,     0,     0,     0,   100,   101,   137,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   132,   131,   133,     0,
   155,   153,   150,   152,   151,     0,   728,     0,   111,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   139,   164,
     0,     0,     0,     0,    95,     0,   352,   352,   363,   341,
     0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   442,   444,   390,   415,   465,     0,
     0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
    59,    70,     0,     0,   102,   611,   105,   102,     0,   618,
   724,   725,     0,     0,     0,     0,     0,     0,   102,   102,
   102,   102,     0,     0,     0,   102,   217,   220,     0,     0,
   174,   176,     0,     0,     0,   188,   190,     0,   108,     0,
     0,     0,     0,     0,   108,     0,   134,   156,     0,   378,
     0,   130,   129,   126,   127,   128,   122,   124,   123,   125,
   118,   119,   114,   117,   120,   115,   121,   154,   157,   160,
     0,   162,     0,     0,   136,     0,     0,     0,     0,   290,
   292,     0,     0,     0,     0,   104,   104,     0,     0,   251,
   253,     0,     0,     0,   268,   270,     0,     0,     0,   283,
   285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   710,   324,   310,   313,   369,   369,   369,     0,     0,     0,
     0,     0,   710,     0,     0,     0,   393,   396,   405,     0,
     0,   102,   102,     0,     0,     0,     0,     0,     0,     0,
     0,   424,     0,   473,     0,   480,     0,   488,   495,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   527,   531,   624,     0,     0,     0,     0,     0,     0,
     0,     0,   569,    88,    68,     0,   107,     0,    84,     0,
     0,     0,     0,     0,   102,     0,   102,     0,     0,     0,
     0,     0,     0,   102,     0,     0,     0,   164,   194,     0,
     0,   145,     0,   146,     0,     0,   142,     0,     0,   108,
   377,     0,   159,   161,     0,     0,     0,     0,     0,     0,
    88,     0,     0,   263,     0,     0,     0,     0,     0,     0,
   278,   280,     0,   274,   276,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   728,   319,     0,     0,
     0,     0,   108,     0,     0,     0,     0,   370,   371,   372,
   373,   374,   375,   376,     0,     0,   337,   353,     0,   338,
     0,   339,   364,     0,     0,     0,   346,   340,   342,     0,
     0,   408,     0,    88,     0,     0,     0,   412,     0,   410,
     0,     0,   416,     0,     0,   417,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   104,   104,
   534,     0,     0,     0,     0,     0,     0,     0,   567,     0,
    69,   102,     0,     0,   222,   223,   228,   229,     0,   232,
     0,   231,   225,   224,    85,   226,   221,     0,   230,   178,
   177,     0,     0,   191,   192,     0,     0,     0,   108,     0,
   141,     0,   112,   163,     0,   165,   293,   294,   295,     0,
   254,   255,     0,     0,     0,    85,   259,   260,   261,   262,
   271,    85,   273,    85,   272,   287,   286,   288,   329,   327,
   328,   317,   315,   316,   314,     0,   331,   323,   330,   326,
   318,     0,     0,     0,     0,     0,     0,   360,   354,     0,
   366,     0,     0,     0,   398,   397,    85,   399,   406,   400,
   403,   404,    85,   401,   402,     0,     0,     0,   102,     0,
     0,     0,     0,   102,     0,     0,     0,   102,     0,     0,
   102,   418,   474,     0,     0,   102,     0,     0,     0,     0,
   419,   481,     0,     0,     0,     0,     0,   102,   420,   489,
     0,     0,     0,     0,     0,     0,     0,     0,   421,   496,
   102,     0,   102,   710,   710,   710,     0,   710,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   467,   466,
   468,   468,     0,   532,     0,   710,     0,     0,     0,     0,
   565,     0,     0,    55,   102,   102,     0,   102,   179,   196,
   193,     0,   116,   158,     0,     0,   149,     0,     0,   296,
   256,     0,   257,     0,   279,     0,   275,     0,   321,     0,
     0,     0,   358,   359,   361,     0,   357,   108,   365,   108,
   343,   344,     0,     0,     0,     0,   345,   347,   407,     0,
   411,     0,   422,   414,   423,     0,     0,     0,     0,     0,
     0,     0,     0,   414,     0,     0,     0,     0,     0,   414,
     0,     0,     0,     0,     0,     0,     0,     0,   414,     0,
     0,     0,     0,     0,   414,   414,     0,     0,   505,     0,
   449,     0,     0,     0,     0,     0,     0,   453,   454,     0,
     0,     0,     0,     0,     0,     0,   448,     0,     0,     0,
     0,   533,     0,     0,     0,     0,     0,     0,   615,   617,
     0,     0,     0,     0,     0,     0,   148,     0,     0,   113,
     0,     0,     0,   281,   277,   331,     0,   320,   325,     0,
   355,   367,     0,     0,     0,     0,   409,   413,     0,     0,
   710,     0,   710,     0,     0,     0,   102,     0,   477,   475,
   476,   478,   102,     0,   484,   482,   483,   485,   486,   102,
   493,   491,     0,   490,   492,   500,   499,   501,     0,     0,
   497,   498,     0,     0,     0,   102,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   710,   469,     0,   537,   537,     0,   710,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   195,   197,     0,     0,   166,     0,     0,     0,
   332,   362,     0,     0,   348,   349,   350,   351,   425,   427,
     0,     0,     0,     0,   432,     0,     0,   479,     0,   487,
     0,   494,   503,   504,   507,   502,   446,     0,     0,   430,
   431,     0,     0,     0,     0,     0,   459,   463,   464,     0,
   462,     0,   443,     0,   710,   472,   445,   369,   369,   590,
     0,   583,   587,     0,     0,     0,   235,   234,   227,   233,
     0,     0,     0,     0,     0,     0,     0,   144,     0,   258,
   322,   108,     0,     0,     0,     0,     0,     0,     0,   102,
     0,     0,     0,     0,   102,   102,     0,     0,     0,     0,
     0,     0,   102,     0,   470,   471,     0,     0,     0,   542,
   536,     0,   538,   535,   710,     0,     0,     0,   198,   199,
   200,   201,   202,   203,     0,     0,     0,     0,   414,   434,
   435,     0,     0,   433,     0,     0,   414,     0,     0,     0,
     0,   102,     0,     0,   506,   508,     0,     0,   450,   451,
   452,     0,     0,   456,     0,     0,     0,     0,     0,     0,
     0,   539,     0,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   710,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   102,     0,     0,     0,   461,
     0,   544,   545,   541,     0,   108,   585,     0,     0,     0,
   264,   356,   368,   426,   436,     0,   414,     0,   440,   414,
   514,   509,   512,   513,   510,   511,   447,   429,     0,   414,
   414,   455,     0,   543,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   460,     0,   588,     0,
    56,     0,     0,   438,   414,   441,   428,     0,     0,   540,
     0,     0,     0,     0,   457,   458,     0,   265,     0,   439,
     0,     0,     0,     0,     0,   437,   589,    88,     0,     0,
   266,     0,     0,     0
};

static const short yydefgoto[] = {  1992,
     1,     2,     3,    22,    23,    24,   106,   180,   300,   637,
   301,   994,  1621,   230,   482,   711,   231,   232,   599,   855,
   984,   337,   479,   338,   527,   178,   398,   343,   399,   112,
   197,   428,   541,   542,  1490,   863,   657,   658,   797,  1031,
  1518,   798,   885,  1359,   879,   919,  1053,  1055,   109,   306,
   412,   651,   873,  1012,   110,   307,   417,   653,   874,  1017,
  1353,  1626,  1724,   107,   183,   305,   408,   646,   872,  1008,
   111,   191,   308,   425,   664,   922,  1071,  1375,  1949,  1982,
   665,   923,  1076,  1226,  1384,  1223,  1382,   666,   924,  1081,
   660,   921,  1061,   113,   202,   311,   434,   674,   926,  1094,
  1397,  1636,  1243,  1531,   675,   823,  1098,  1269,  1414,  1548,
  1095,  1258,  1538,  1733,  1097,  1263,  1540,  1734,  1259,   799,
   114,   207,   312,   439,   563,   678,   931,  1108,  1273,  1417,
  1279,  1423,   830,   968,  1148,  1149,  1491,  1608,  1702,  1295,
  1443,  1297,  1452,  1299,  1460,  1300,  1470,  1683,  1814,  1866,
   115,   212,   313,   446,   682,   970,  1153,  1493,  1778,  1833,
  1916,  1881,   116,   216,   314,   453,    25,   315,   574,   691,
    79,   340,   223,   473,   330,   328,   344,   486,   724,   969,
    26,   105,   800,   266,   165,   166,   267,   268,    27,   168,
    57,    58
};

static const short yypact[] = {-32768,
-32768,    92,  4106,  -238,  -128,   -70,   455,   195,  1679,   182,
   -15,    26,    29,    58,    63,    68,   127,   163,   166,   176,
    18,-32768,-32768,   656,-32768,-32768,   184,    85,   225,   339,
   491,   516,-32768,   520,   529,   539,   548,   556,-32768,   567,
-32768,   583,   586,   602,   615,   625,   632,   639,   641,   644,
   646,-32768,-32768,   390,   253,-32768,-32768,-32768,-32768,-32768,
   487,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   347,
    35,-32768,   415,-32768,   419,   421,   427,   441,-32768,-32768,
   451,  2302,  3970,  -125,   434,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   182,   182,   -98,   452,    95,-32768,    -9,   233,
   148,   285,   454,   480,   219,   555,   491,   591,  3970,  3970,
   491,   571,   131,   703,  3970,-32768,-32768,  -215,   704,   493,
   499,   513,   522,-32768,-32768,-32768,-32768,-32768,   533,   545,
   550,   564,   588,   594,   606,   609,   612,   618,   620,   636,
   648,   671,   681,   717,   723,   737,   756,   758,   762,  3970,
  3970,  3970,  3581,  3338,-32768,   722,-32768,-32768,   724,  2551,
   870,  3581,    34,   531,   -57,   872,-32768,   935,-32768,   946,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -180,   769,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   754,
  4016,  5139,  1049,   771,   713,  1049,   -64,-32768,    17,-32768,
-32768,   782,   785,-32768,  4767,  1626,-32768,  1030,  1046,  3970,
  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,
  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,
  3970,   182,  -190,  -190,  5166,  3338,   333,-32768,  3970,  3970,
  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,  3970,
  3970,  3970,  3970,  3970,-32768,-32768,-32768,-32768,-32768,   -18,
-32768,  3970,   182,-32768,  3581,-32768,   832,  -108,   810,-32768,
-32768,-32768,-32768,  -121,   229,   249,   -11,   546,    75,-32768,
   525,   411,   582,   759,   817,  3970,  3970,-32768,-32768,   131,
   131,    59,   823,   829,   837,   843,   846,-32768,   131,   587,
  3868,-32768,  1054,   -83,-32768,  3581,-32768,-32768,-32768,   839,
-32768,   850,-32768,    74,-32768,-32768,   363,   860,   861,  3913,
  4143,  5193,  5220,  5247,  5274,  5301,  5328,  5355,  5382,  5409,
  5436,  4200,  5463,  5490,  5517,  5544,  5571,  5598,  4221,  4242,
  4263,   867,-32768,-32768,  3581,  4080,  4101,   841,   893,  1301,
  1301,   808,   808,   808,   808,   630,   630,  -190,  -190,  -190,
  -190,  1111,  5625,   871,   208,  3919,    55,   899,   905,-32768,
  2217,   911,  3970,    19,  1133,   491,-32768,-32768,   886,  1135,
-32768,-32768,   888,     3,  1140,-32768,-32768,   894,  1152,  1153,
   908,   909,   910,-32768,-32768,   941,   924,    98,  1172,  1173,
   931,   932,-32768,-32768,  1184,   933,-32768,-32768,-32768,-32768,
  1185,   938,   491,  1189,-32768,-32768,   491,   948,  1199,   182,
  1206,-32768,-32768,-32768,  4122,  3099,  1021,-32768,     3,-32768,
   971,  3581,   974,   975,   976,   201,   983,-32768,-32768,-32768,
-32768,-32768,  1225,   986,  6165,   222,  4034,   981,   404,   408,
  1109,    11,-32768,  1231,  4203,-32768,-32768,-32768,  1235,  3970,
  3970,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  3970,-32768,-32768,-32768,-32768,-32768,-32768,  3970,  3970,
  3970,  1244,  3338,-32768,  3970,  3970,-32768,  1246,-32768,-32768,
-32768,  6165,  1000,  3970,-32768,   168,   264,  -105,  1248,   168,
  5652,  1004,-32768,  1257,    42,-32768,  1263,-32768,  1031,  1033,
  1270,-32768,  1274,-32768,  1275,   158,  1277,-32768,-32768,-32768,
     3,  1063,  1280,  1283,  1282,   158,  1284,-32768,-32768,   158,
  1285,-32768,  1037,   158,  1289,-32768,   785,  1290,  1291,-32768,
  1292,  1293,  1294,  1048,  3970,  3970,-32768,  1298,  1050,  3581,
   443,  3581,  3581,  3581,  1297,-32768,   771,   182,   265,     1,
  1300,  6165,-32768,-32768,    31,-32768,   131,-32768,-32768,-32768,
-32768,  2527,  2527,  1053,  1306,   597,  3970,  3970,  2527,  3970,
  1307,-32768,-32768,-32768,-32768,  3970,  1308,  2578,-32768,-32768,
  1061,  1064,  1065,  1068,  4284,  4305,  5679,  5706,  5733,  5760,
-32768,  6165,  6165,-32768,-32768,  4798,   168,-32768,  1312,  1313,
  1320,-32768,  1319,  1116,-32768,   154,-32768,-32768,  1082,  1326,
   448,-32768,   461,  3970,  1339,-32768,-32768,  2159,-32768,   482,
-32768,  1338,-32768,   484,   498,   505,  1348,     3,-32768,-32768,
-32768,  1349,-32768,   326,   167,  1361,-32768,   422,-32768,  1366,
-32768,   584,  1367,-32768,-32768,  1097,-32768,-32768,-32768,-32768,
   656,   517,  5787,  1127,     3,   508,-32768,   511,   528,   530,
-32768,  1126,  1134,  1377,-32768,  1154,  3970,    32,-32768,-32768,
   292,-32768,-32768,     3,-32768,   182,   182,-32768,  6165,  6165,
-32768,  6165,-32768,  1379,  1379,  1379,  6165,-32768,  3581,  6165,
     3,-32768,  3970,  3581,-32768,  3970,  3970,-32768,-32768,-32768,
-32768,-32768,  1380,-32768,-32768,  1137,-32768,  1323,   433,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  5814,  1143,   198,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1145,-32768,  1149,  1151,  1155,  1156,  1157,-32768,  1394,  2159,
  2159,  2159,  2159,  1397,   237,  1396,  3430,  -106,  1163,  1163,
-32768,  1169,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1415,-32768,-32768,-32768,-32768,  1170,  1174,  1175,
  1177,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1877,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3970,-32768,
-32768,  3970,  1171,  1180,  1183,  1187,  1188,-32768,-32768,-32768,
  1186,  6165,-32768,   301,  1190,    41,  1197,-32768,-32768,-32768,
   573,-32768,   576,  4326,   579,  5841,  5868,-32768,  3970,-32768,
-32768,   851,    23,   251,-32768,-32768,-32768,  1200,  1212,  1200,
  2159,  1455,  1456,  1458,  1217,  1233,  1222,  1222,  1222,  2360,
-32768,-32768,-32768,-32768,-32768,   491,     8,  1213,-32768,  2159,
  2159,  2159,  2159,  2159,  2159,  2159,  2159,  2159,  2159,  2159,
  2159,  2159,  2159,  2159,  2159,  1466,  3970,  2067,-32768,  1219,
   694,   715,   440,   429,-32768,   859,-32768,-32768,-32768,-32768,
  1344,    22,   307,    60,  1223,  1224,  1226,  1234,  1237,  1238,
  1240,  1475,  -131,   -53,   129,  1236,  1241,  1243,  1245,  1247,
  1249,  1251,  1253,  1254,  1242,  1250,  1255,  1258,  1260,  1261,
  1262,  1267,  1268,  1281,-32768,-32768,-32768,-32768,-32768,   146,
  4829,  4347,     3,  3581,  3581,  3581,  3581,   310,  1278,  1484,
-32768,-32768,   491,    17,     3,-32768,-32768,     3,  3970,-32768,
-32768,-32768,  4860,  1288,   131,   131,   131,   131,   105,   324,
     3,     3,  1295,  1488,  1499,   386,-32768,-32768,    88,  1537,
-32768,-32768,  1299,  1539,  1550,-32768,-32768,  1309,-32768,  1311,
  2203,  1305,  1318,  1325,-32768,  1327,-32768,-32768,  1302,-32768,
  2159,  3700,  2865,  1700,  1700,  1700,   959,   959,   959,   959,
   738,   738,  1222,  1222,  1222,  1222,  1222,-32768,-32768,-32768,
  1329,  3430,   330,  3817,-32768,  1561,     7,  1573,   491,-32768,
-32768,  1574,  1577,  1578,  1331,  1061,  1061,   131,   131,-32768,
-32768,  1580,    25,    38,-32768,-32768,  1581,   491,  1582,-32768,
-32768,  1588,  1590,  1591,   119,   491,  1594,  1598,  1602,   131,
  2527,-32768,-32768,-32768,  1520,  2295,   765,   466,  1601,   491,
    48,   182,  2527,   182,    50,  1603,-32768,-32768,-32768,   491,
  1600,     3,     3,  1605,  1604,  1608,  1609,  1611,  1612,  1617,
  1618,-32768,  3970,-32768,  3970,-32768,  3970,-32768,-32768,   131,
   182,  1619,  1622,  1623,  1627,  1628,  1629,   491,   491,  1630,
  1631,  1632,  1633,  1634,   491,  1644,   491,  1433,  1434,  1431,
   491,-32768,-32768,-32768,  3970,  1435,   585,   627,   659,   662,
  1678,   491,-32768,   785,-32768,  1432,-32768,  4368,-32768,  1438,
  1683,  1684,  1686,  1688,     3,  1689,     3,  1690,  1691,  1692,
   994,  1694,  1701,     3,  1706,  1707,  1713,  1219,-32768,  1714,
  1715,-32768,  1469,-32768,  2159,  1722,-32768,  1473,  1480,-32768,
-32768,  3149,-32768,-32768,  2159,  1485,   677,  1724,  1726,  1727,
   785,  1728,    62,  1483,  1733,  1732,  1734,  1735,  1737,  1738,
-32768,-32768,  1740,-32768,-32768,  1741,  1742,  1743,  1745,  1746,
  1748,  1750,  1751,  1755,  1757,  1762,   204,-32768,  1763,  1764,
  1765,  1768,-32768,  1771,  1773,  1774,  1534,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   131,  1775,-32768,-32768,  1538,-32768,
   131,-32768,-32768,  1540,  1779,  1781,-32768,-32768,-32768,  1783,
  1784,-32768,  1785,   785,  1787,  1789,  1790,-32768,  1791,-32768,
  1793,  1553,-32768,  1554,  1556,-32768,  1533,  1555,  1558,  1559,
  1562,  1563,  1564,  4389,   712,  4410,   721,  4431,   424,   524,
  1565,  1557,  1567,  1568,  1569,  1570,  1571,  1576,  1575,  1583,
  1593,  1610,  1615,  1620,  1621,  1624,  1638,  1595,    51,    51,
-32768,  1802,  4891,  1596,  1606,  1613,  1616,  1635,-32768,  1804,
-32768,     3,  3970,    17,-32768,-32768,-32768,-32768,  1640,-32768,
  1641,-32768,-32768,-32768,  1642,-32768,-32768,  1643,-32768,-32768,
-32768,  1809,   693,-32768,-32768,   131,  6192,  1607,-32768,  3970,
-32768,  1625,-32768,  3430,   131,-32768,-32768,-32768,-32768,  1849,
-32768,-32768,  1850,  1761,  1859,  1642,-32768,-32768,-32768,-32768,
-32768,   733,-32768,   746,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1645,  1636,-32768,-32768,-32768,
-32768,  1637,  1867,  1870,  1874,  1881,  1879,-32768,-32768,  1880,
-32768,  1898,  1903,   403,-32768,-32768,   757,-32768,-32768,-32768,
-32768,-32768,   760,-32768,-32768,  1910,  1665,  1912,     3,  1919,
  1923,  3970,  1924,     3,   131,  3970,  1693,     3,  3970,  3970,
     3,-32768,-32768,  3970,  1695,     3,  3970,  3970,  3970,  3970,
-32768,-32768,  3970,  3970,  3970,  1698,  3970,     3,-32768,-32768,
  3970,  3970,  1937,  1699,  1711,  3970,  3970,  1712,-32768,-32768,
     3,  1936,     3,  2527,  2527,  2527,  3970,  2527,  1938,  1940,
  1948,  1966,  3970,  1967,  1968,   131,  1971,  1970,-32768,-32768,
-32768,-32768,    39,-32768,  1725,  2527,  3581,  1729,  3581,  3581,
-32768,  1736,  4922,-32768,     3,     3,   994,     3,-32768,-32768,
-32768,  1739,-32768,-32768,  1747,  4452,-32768,  2159,  1749,-32768,
-32768,  1976,-32768,  1978,-32768,  1979,-32768,  1981,-32768,   491,
  1982,  1984,-32768,-32768,-32768,  1753,-32768,-32768,-32768,-32768,
-32768,-32768,  1200,  1200,  1200,   131,-32768,-32768,-32768,   491,
-32768,   491,-32768,-32768,-32768,  1754,  1744,  1756,  4473,  1758,
  1766,  1760,  4494,-32768,  1986,   943,   982,  1987,  4515,-32768,
  1989,  1035,  1110,  1139,  1181,  4536,  1218,  1286,-32768,  1479,
  1991,  1614,  1676,  1996,-32768,-32768,  1730,  1916,-32768,   360,
-32768,  1772,  1769,  1780,  1776,  4557,  1782,-32768,-32768,  1803,
  1807,  5895,  1786,  1792,  1808,   766,-32768,   366,   371,  1752,
  1759,-32768,  3970,  1811,   779,  3970,   786,   795,-32768,-32768,
  1812,  1821,  1825,  1805,  1826,   684,-32768,  1827,  3970,  3430,
  1822,  1997,  1823,-32768,-32768,  1636,  1830,-32768,-32768,  1999,
-32768,-32768,  2003,  2022,  2028,  2031,-32768,-32768,  2499,  2072,
  2527,  3970,  2527,  1983,  2073,  2076,     3,  2691,-32768,-32768,
-32768,-32768,     3,  2742,-32768,-32768,-32768,-32768,-32768,     3,
-32768,-32768,  2793,-32768,-32768,-32768,-32768,-32768,  2972,  3023,
-32768,-32768,   807,  2075,  3970,     3,  2077,  2079,  3970,   182,
   182,  3970,  3970,  2081,  2082,  2083,   182,  2084,  1951,  2085,
  2447,-32768,  2086,-32768,-32768,  4953,  2527,  1840,  4984,  1875,
  1882,  1884,  2129,  2143,  2144,  2150,  2153,  3970,  3970,  3970,
  3970,  3970,-32768,-32768,  1906,  5015,-32768,  2051,  2158,  2160,
-32768,-32768,  1921,  1922,-32768,-32768,-32768,-32768,  2162,-32768,
  1931,  5922,  1925,  1926,-32768,  1934,  1928,-32768,  1930,-32768,
   379,-32768,-32768,-32768,-32768,-32768,-32768,  4578,  1969,-32768,
-32768,  5949,  1977,  1985,  4599,  4620,-32768,-32768,-32768,   809,
-32768,   182,-32768,   182,  2527,-32768,-32768,  1029,  2048,-32768,
  1972,-32768,-32768,  1933,  3581,    17,-32768,-32768,-32768,-32768,
  2222,  2050,  2132,  2494,  2767,  2818,  3970,-32768,  2225,-32768,
-32768,-32768,  1200,  1992,  2224,  2227,  3970,  3970,  2228,     3,
  3970,  2018,  3970,   446,     3,     3,  2229,  2230,  2231,  3970,
  3970,  2232,     3,   834,-32768,-32768,  2235,  2267,  2268,-32768,
-32768,  2037,-32768,-32768,  2527,  3970,   838,  2036,-32768,-32768,
-32768,-32768,-32768,-32768,  5046,  2039,  2045,  2047,-32768,-32768,
-32768,  5976,  4641,-32768,  2053,  4662,-32768,  6003,  2291,  2293,
  3970,     3,  2294,   131,-32768,-32768,  2062,   380,-32768,-32768,
-32768,  6030,  6057,-32768,  2059,  2307,  2315,  2314,  2316,  2317,
   131,-32768,  2068,  4683,  2071,  3970,-32768,  2323,  2354,  2359,
  3074,  2366,  2527,  2114,  3970,  3253,  2121,  2373,  2374,  3054,
  2376,  2377,  2378,  2379,  2380,     3,  2135,  2137,  2384,-32768,
  2138,-32768,-32768,-32768,  2386,-32768,-32768,  3970,  2141,  6084,
-32768,-32768,-32768,-32768,-32768,  2142,-32768,  6111,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2151,-32768,
-32768,-32768,  2391,-32768,  2152,  5077,  3970,  2395,  2171,  3970,
  3304,  2154,  3355,  2396,  3534,  3585,-32768,  2398,-32768,  4704,
-32768,   131,  4725,-32768,-32768,-32768,-32768,  2399,  2401,-32768,
  3970,  2404,  3970,  3636,-32768,-32768,  4746,-32768,  6138,-32768,
  3970,  2284,  2407,  5108,  2419,-32768,-32768,   785,  2418,  2172,
-32768,  2437,  2445,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -303,-32768,-32768,  -270,  1389,-32768,-32768,
  1390,  -477,-32768,  -522,-32768,  -380,  -531,  -564,-32768,-32768,
-32768,-32768,   322,-32768,  -614,-32768,  -954,-32768,  -696,-32768,
-32768,-32768,-32768,-32768,-32768,  1649,-32768,  1265,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1810,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   820,-32768,-32768,-32768,-32768,-32768,-32768,
  1529,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1087,  -749,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768, -1507,-32768,-32768,-32768,  1141,   968,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   761,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1893,-32768,
  1777,-32768,  2342,-32768,  1878,  2243,  -311,-32768,   488,    21,
   -26,-32768,-32768,   114,  -652,  -541,  -170,   -81,-32768,    -3,
   -72,   -73
};


#define	YYLAST		6440


static const short yytable[] = {    28,
   167,   290,   683,   650,   600,   801,   732,   705,   169,  1264,
   877,   638,     4,   333,   662,   334,   466,    70,    29,   333,
   476,   334,     4,   532,   672,   539,     4,    85,   676,  1221,
   174,   175,   680,   333,   333,   334,   334,   236,   427,   118,
   291,    29,  1224,  1610,    80,   982,  1649,   554,   648,   457,
   458,   460,     4,   284,     4,  1489,  1658,   523,   467,   285,
   712,   713,  1664,   227,  1193,   347,   309,   721,  1372,   413,
  1199,  1673,   709,   598,   228,   414,    29,  1679,  1680,   227,
   184,   108,   539,   415,   193,   199,   204,   209,   213,   218,
  1009,    -2,   227,   887,   888,   889,   890,   529,   595,     4,
   540,   401,  1010,    28,   983,     5,     6,    28,    28,    28,
    28,    28,    28,   219,   402,  1123,    30,   224,   224,   233,
   171,  1124,    11,  1233,   395,   403,   228,   539,  1018,   172,
  1020,   192,   198,   203,   208,   227,   217,   801,   801,   801,
   801,   -64,   228,   916,   397,   917,   641,   236,    29,   176,
  1186,    29,     4,   303,  1611,   228,   177,   540,     5,     6,
    71,    72,    73,   589,    74,   480,    71,    72,    73,   478,
    74,     4,   638,    29,    31,    11,   304,     5,     6,    71,
    72,    73,   -64,    74,  1021,   853,    52,    53,   294,   372,
    54,    55,    29,  1125,    11,   164,   170,   295,   228,  1126,
   302,    39,   540,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1150,
   394,  1052,   639,     4,  1234,   339,   643,   392,   801,     5,
     6,    59,   221,   222,  1235,   228,   375,   706,   235,   892,
  1151,   893,   416,   185,   186,  1362,    11,   801,   801,   801,
   801,   801,   801,   801,   801,   801,   801,   801,   801,   801,
   801,   801,   801,   335,    29,   801,   336,   708,  1110,   335,
    69,   533,   336,   263,   264,   265,  1011,  1222,    60,   119,
   292,    61,   818,   819,   820,   821,   336,   336,  1402,   194,
  1225,   581,  1612,   514,   649,     5,     6,    71,    72,    73,
  1272,    74,  1278,   731,   524,   233,  1113,    82,   229,   404,
    62,   459,    11,   405,   649,    63,   233,   233,   233,   167,
    64,   484,   426,   406,   229,   233,   710,   169,   485,   409,
   856,  1013,   440,   743,  1202,  1014,  1015,   229,    71,    72,
    73,  1891,    74,   410,    84,   553,   539,   181,   182,  1896,
   195,  1175,   177,   350,   351,   352,   353,   354,   355,   356,
   357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
   367,   368,   369,   370,   371,  1127,   894,   572,   801,    65,
   229,  1128,   376,   377,   378,   379,   380,   381,   382,   383,
   384,   385,   386,   387,   388,   389,   390,   391,   854,  1152,
   189,   190,   535,    56,  1515,   393,   750,   751,   539,   696,
   649,   698,   699,   700,    29,    66,   547,   229,    67,  1951,
   822,   540,  1953,    71,    72,    73,   557,    74,    68,   455,
   456,   561,  1955,  1956,    71,    72,    73,   565,    74,   567,
    81,  1454,   895,   569,   475,    71,    72,    73,   585,    74,
   796,  1216,  1217,   520,    29,   485,  1396,  1974,     4,    32,
    29,    33,   375,  1859,     5,     6,    71,    72,    73,   590,
    74,   210,   211,    34,    35,    36,   485,    83,   339,  1543,
  1544,    11,   407,   540,     4,   187,   188,   896,   513,    37,
     5,     6,    71,    72,    73,     4,    74,   104,  1357,    71,
    72,    73,   411,    74,  1016,   435,  1165,    11,  1364,   522,
  1455,   640,   704,  1077,   164,   703,   531,  1545,   177,   485,
   167,   167,    86,  1078,   839,  1079,    87,   167,  1345,  1546,
  1860,   117,  1861,   718,  1072,    88,  1073,   978,   196,   -67,
   436,  1461,   801,  1862,  1074,    89,   177,   437,   980,  1242,
  1265,   120,   801,  1112,    90,   485,  1863,  1161,   861,     4,
  1456,  1276,    91,   865,   485,     5,     6,    71,    72,    73,
  1177,    74,  1864,    92,  1266,     4,   225,  1204,   815,   816,
  1457,  1458,    11,  1641,  1205,  1642,   374,   375,     4,    93,
   592,   339,    94,   233,     5,     6,    71,    72,    73,  1331,
    74,    52,    53,   625,   626,    54,    55,  1684,    95,   429,
  1462,    11,   418,  1700,  1685,   627,   487,   375,  1703,   430,
  1701,    96,   628,   629,   630,  1701,  1812,  1905,   632,   633,
   419,    97,  1184,  1813,  1906,   431,   103,   636,    98,   432,
   420,   421,    38,   858,   859,    99,  1370,   100,   825,   422,
   101,   423,   102,  1463,   802,   835,  1547,   594,   177,   120,
  1464,  1465,   375,   596,   438,   121,   752,   122,    71,    72,
    73,    28,    74,   123,   827,   828,   441,  1459,    28,   173,
  1466,  1373,  1080,  1467,  1468,   750,   871,   124,   692,   693,
  1832,  1832,   442,  1075,   817,   824,   697,   375,   829,  1865,
   754,   755,   834,   125,   339,   179,   200,   201,   234,  1419,
   237,    80,   443,   756,   757,   164,   164,   220,  1267,  1268,
   719,   720,   164,   722,  1171,  1172,  1173,  1174,   286,   727,
   287,   730,   205,   206,   803,   804,   806,   807,  1187,   238,
   270,   271,   272,   273,   274,   239,   275,   276,   277,   278,
   808,   809,   279,   280,   281,   282,   283,   810,   811,   240,
   284,   844,   375,   444,   845,   375,   285,   758,   241,   752,
   840,  1717,  1718,  1719,  1720,  1721,  1722,  1469,   433,   242,
   579,   846,   375,   847,   375,   293,   802,   802,   802,   802,
  1056,   243,   898,  1643,  1644,  1645,   244,  1218,  1219,   424,
  1057,  1058,  1059,  1157,  1158,  1159,  1160,   214,   215,  1062,
   245,  1063,  1064,  1065,  1066,  1067,  1068,  1069,    56,  1241,
   852,  1630,   468,   469,   470,   471,   986,   375,   716,   987,
   988,   717,   990,   375,   246,   445,   832,   833,  1325,   375,
   247,   472,    75,    76,    77,    78,   864,  1847,  1437,   866,
   867,  1438,   248,   447,  1624,   249,  1504,  1445,   250,  1301,
  1446,  1439,  1440,  1441,   251,   801,   252,   281,   282,   283,
  1447,  1448,   667,   284,  1449,  1450,   289,   802,   296,   285,
  1326,   375,   253,  1207,  1248,  1249,  1250,  1251,  1252,  1253,
  1254,  1261,  1028,  1029,   254,   448,   802,   802,   802,   802,
   802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
   802,   802,  1327,   375,   802,  1328,   375,   255,   995,   996,
   997,   998,   999,  1000,  1001,  1002,  1003,   256,  1111,  1004,
  1366,   375,  1593,  1594,  1595,  1005,  1597,  1723,  1082,   297,
  1083,  1084,   449,  1085,   450,  1510,  1511,  1060,  1006,  1660,
   298,  1109,   971,  1086,  1614,   972,     5,     6,    71,    72,
    73,  1945,    74,   257,  1507,  1442,   451,   331,  1070,   258,
  1087,  1088,  1089,    11,  1451,   911,   912,   913,   914,  1164,
   339,   915,   993,   259,  1407,  1090,  1525,   177,  1661,   813,
  1410,   233,   233,   233,   233,  1524,   126,   127,     4,  1527,
   177,  1526,   260,  1528,   261,   233,   316,   299,   262,   167,
  1549,   177,   452,  1551,   177,   310,   843,   329,  1262,  1698,
  1699,   167,   134,   135,   136,   137,   138,   802,   341,  1275,
  1049,  1277,  1708,   375,   348,   857,  1550,   342,  1091,  1710,
   375,  1666,  1552,   279,   280,   281,   282,   283,  1711,   375,
   349,   284,   862,  1848,   396,  1211,   400,   285,  1302,  1755,
  1756,   477,  1822,  1823,   233,   233,   272,   273,   274,   454,
   275,   276,   277,   278,  1228,   461,   279,   280,   281,   282,
   283,   462,  1236,  1238,   284,  1512,   233,  1876,  1877,   463,
   285,  1885,   375,   481,  1519,   464,  1271,  1274,   465,   725,
   726,  1280,  1168,   483,  1007,  1092,  1282,   488,  1827,  1741,
  1828,  1743,  1093,  1829,   512,   489,  1667,   517,   519,   273,
   274,   525,   275,   276,   277,   278,   233,   526,   279,   280,
   281,   282,   283,   530,  1309,  1310,   284,   534,   536,   537,
   538,  1316,   285,  1318,   543,  1668,   544,  1322,  1248,  1249,
  1250,  1251,  1252,  1253,  1254,  1830,   545,   546,  1330,  1776,
   548,   549,   550,   551,  1562,  1781,   270,   271,   272,   273,
   274,   552,   275,   276,   277,   278,   555,   556,   279,   280,
   281,   282,   283,   558,   559,   562,   284,  1669,   560,   564,
   566,   802,   285,   568,   909,   910,   911,   912,   913,   914,
   570,   802,   915,   571,   164,   270,   271,   272,   273,   274,
   573,   275,   276,   277,   278,  1605,   164,   279,   280,   281,
   282,   283,   578,   580,  1671,   284,   582,   583,   584,   587,
   586,   285,   588,  1826,   593,   597,  1294,   601,  1296,   624,
  1298,   319,   320,   321,   322,   323,   324,   325,   326,   327,
   631,   233,   634,   635,   642,  1114,   645,   233,   270,   271,
   272,   273,   274,   647,   275,   276,   277,   278,  1323,   652,
   279,   280,   281,   282,   283,  1646,   656,   654,   284,   655,
   659,   661,  1831,   663,   285,   668,   669,   670,   671,   679,
   673,   677,  1672,  1883,  1156,   681,   684,   685,   687,   688,
   689,   690,   694,   701,   695,   714,  1166,   707,  1838,  1167,
   715,   723,   728,   731,  1888,   735,   733,   734,   744,   745,
  1176,  1178,  1179,  1180,   746,   747,  1615,  1185,  1617,  1618,
   339,   524,   753,   270,   271,   272,   273,   274,   748,   275,
   276,   277,   278,   759,   805,   279,   280,   281,   282,   283,
   837,  1926,   233,   284,   812,   814,    71,    72,    73,   285,
    74,   233,   270,   271,   272,   273,   274,   826,   275,   276,
   277,   278,   831,   836,   279,   280,   281,   282,   283,   842,
   848,   849,   284,   850,   860,   851,   868,   870,   285,   869,
   876,   878,   167,   167,   167,   880,   167,   881,   886,   891,
   897,   882,   883,   884,   270,   271,   272,   273,   274,   918,
   275,   276,   277,   278,   167,  -661,   279,   280,   281,   282,
   283,   925,   927,  1989,   284,   973,   928,   929,  1099,   930,
   285,   233,   974,  1284,  1285,   975,   979,   981,  1100,   976,
   977,   270,   271,   272,   273,   274,  1503,   275,   276,   277,
   278,   985,   796,   279,   280,   281,   282,   283,  1019,  1022,
  1023,   284,  1024,  1025,  1026,   915,  1030,   285,  1048,  1115,
  1116,  1054,  1117,  1516,  1101,  1102,  1103,  1104,  1105,  1106,
  1118,  1122,   233,  1119,  1120,  1674,  1121,  1130,  1129,  1131,
  1163,  1132,  1182,  1133,  1138,  1134,  1339,  1135,  1341,  1136,
  1137,  1140,  1139,  1183,  1141,  1348,  1142,  1143,  1144,   270,
   271,   272,   273,   274,   802,   275,   276,   277,   278,  1145,
  1146,   279,   280,   281,   282,   283,  1637,  1147,  1162,   284,
   275,   276,   277,   278,  1170,   285,   279,   280,   281,   282,
   283,  1188,   233,  1190,   284,  1559,  1647,  1181,  1648,  1563,
   285,  1189,  1566,  1567,  1191,  1201,  1192,  1569,  1194,  1196,
  1572,  1573,  1574,  1575,  1197,  1208,  1576,  1577,  1578,   167,
  1580,   167,  1198,  1200,  1582,  1583,  1203,   982,  1212,  1587,
  1588,  1213,  1214,  1215,  1220,  1227,  1229,   164,   164,   164,
  1596,   164,  1230,  1903,  1231,  1232,  1602,  1107,  1237,  1244,
  1239,  1245,  1246,  1247,  1240,  1270,  1283,  1281,  1287,   164,
  1915,  1286,  1288,  1289,  1837,  1290,  1291,  1763,  1764,   167,
  1676,  1292,  1293,  1303,  1770,   167,  1304,  1305,   126,   127,
   128,  1306,  1307,  1308,  1311,  1312,  1313,  1314,  1315,  1248,
  1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1317,   130,
   131,   132,   133,  1502,   134,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,  1319,
  1320,    40,  1677,  1321,  1329,    41,  1332,  1334,  1324,  1335,
  1336,  1972,  1337,   167,  1338,  1340,  1342,  1343,  1344,  1824,
  1346,  1825,   270,   271,   272,   273,   274,  1347,   275,   276,
   277,   278,  1349,  1350,   279,   280,   281,   282,   283,  1351,
  1354,  1355,   284,  1356,  1358,  1360,  1706,  1361,   285,  1709,
  1367,  1365,  1368,  1369,  1371,  1374,  1681,  1376,  1377,    42,
  1378,  1379,  1726,  1380,  1381,    43,  1383,  1385,  1386,  1387,
  1556,  1388,  1389,   167,  1390,  1561,  1391,  1392,    44,  1565,
    45,  1393,  1568,  1394,   164,  1742,   164,  1571,  1395,  1398,
  1399,  1400,    46,  1257,  1401,  1403,    47,  1404,  1405,  1581,
  1406,  1408,   339,  1412,  1409,  1413,  1411,  1429,    48,  1415,
  1416,  1418,  1590,  1420,  1592,  1421,  1422,  1424,  1758,  1425,
  1426,  1427,  1762,  1428,  1472,  1765,  1766,    49,  1494,  1430,
  1501,   167,  1431,  1432,   164,  1509,  1433,  1434,  1435,  1471,
   164,  1473,  1474,  1475,  1476,  1477,  1622,  1623,  1479,  1625,
  1478,  1792,  1793,  1794,  1795,  1796,  1480,   270,   271,   272,
   273,   274,  1488,   275,   276,   277,   278,  1481,  1496,   279,
   280,   281,   282,   283,  1514,  1520,  1521,   284,  1497,    50,
   233,    51,   160,   285,  1482,  1523,  1498,   161,  1499,  1483,
   162,  1522,  1517,  1533,  1484,  1485,  1534,   233,  1486,   346,
  1535,   932,  1530,  1536,  1532,  1537,  1539,  1500,   164,    71,
    72,   933,  1487,    74,  1505,  1506,   177,  1508,  1529,   270,
   271,   272,   273,   274,  1541,   275,   276,   277,   278,  1542,
  1845,   279,   280,   281,   282,   283,  1553,  1554,  1555,   284,
  1852,  1853,  1682,  1557,  1856,   285,  1858,  1558,  1560,   905,
   906,   907,   908,  1872,  1873,   909,   910,   911,   912,   913,
   914,  1584,  1591,   915,  1598,  1564,  1599,  1570,   164,  1884,
  1579,  1585,  1600,   270,   271,   272,   273,   274,   233,   275,
   276,   277,   278,  1586,  1589,   279,   280,   281,   282,   283,
  1601,  1603,  1604,   284,  1900,  1606,  1607,  1613,  1747,   285,
  1632,  1616,  1633,  1634,  1749,  1635,  1627,  1744,  1638,  1619,
  1639,  1751,  1659,  1662,  1628,  1665,  1631,  1675,  1651,  1920,
  1640,  1650,  1678,  1728,  1704,  1732,   164,  1759,  1928,  1735,
  1652,  1705,  1654,  1655,  1656,   934,  1687,   935,   936,   937,
   938,   939,   940,   941,   942,   943,  1686,  1688,  1736,   944,
  1689,  1946,   945,  1695,  1737,   946,  1691,  1738,   947,  1696,
   948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
   958,   959,   960,   961,   962,   963,  1840,  1692,  1715,   964,
  1960,  1693,  1697,  1963,   965,  1707,  1712,   966,  1713,   126,
   127,   760,  1714,  1716,  1725,  1727,  1729,  1731,  1740,  1745,
  1746,  1757,  1772,  1760,  1977,  1761,  1979,  1767,  1768,  1769,
  1771,  1773,  1777,  1782,  1984,   134,   135,   136,   137,   138,
   761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
   771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
   781,   782,   783,   784,   785,   786,   787,  1827,  1784,  1828,
   967,  1855,  1829,  1786,  1785,  1787,  1867,  1868,  1841,   270,
   271,   272,   273,   274,  1875,   275,   276,   277,   278,  1788,
  1789,   279,   280,   281,   282,   283,  1790,  1791,  1797,   284,
  1799,   126,   127,   760,  1800,   285,  1801,  1248,  1249,  1250,
  1251,  1252,  1253,  1254,  1830,  1802,  1803,  1804,  1805,  1807,
  1808,  1809,  1810,  1901,  1811,  1836,   788,   134,   135,   136,
   137,   138,   761,   762,   763,   764,   765,   766,   767,   768,
   769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
   779,   780,   781,   782,   783,   784,   785,   786,   787,   126,
   127,   528,   129,  1816,  1818,    54,  1835,  1939,  1839,  1846,
  1850,  1962,  1819,  1851,  1854,  1869,  1870,  1871,  1874,  1878,
   130,   131,   132,   133,  1849,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
  1857,  1879,  1880,   270,   271,   272,   273,   274,   788,   275,
   276,   277,   278,  1882,   228,   279,   280,   281,   282,   283,
  1886,   649,  1889,   284,  1890,  1898,   789,  1899,  1902,   285,
  1894,  1834,   790,   791,   126,   127,   128,   129,   792,  1904,
    54,   793,  1909,  1910,  1050,  1051,   794,   795,  1911,   796,
  1912,  1917,  1913,  1914,  1919,   130,   131,   132,   133,  1921,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   270,   271,   272,   273,   274,
  1922,   275,   276,   277,   278,  1923,  1927,   279,   280,   281,
   282,   283,  1925,  1930,  1244,   284,  1245,  1246,  1247,  1931,
  1932,   285,  1934,  1935,  1936,  1937,  1938,  1940,   789,  1941,
  1942,  1943,  1944,  1947,   790,   791,  1950,  1957,  1954,  1958,
   792,  1961,  1967,   793,  1970,  1975,  1965,  1976,   794,   795,
  1978,   796,  1985,  1986,  1248,  1249,  1250,  1251,  1252,  1253,
  1254,  1255,  1256,  1988,  1990,  1991,   899,   900,   901,   902,
   903,   904,   905,   906,   907,   908,  1993,   159,   909,   910,
   911,   912,   913,   914,  1994,  1209,   915,  1210,   920,   126,
   127,   128,  1352,   160,   749,  1730,  1096,  1195,   161,  1609,
  1492,   162,   686,   226,   702,  1779,   229,   838,   332,   163,
   130,   131,   132,   133,     0,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
  1842,     0,     0,   932,     0,     0,     0,     0,     0,     0,
     0,    71,    72,   933,     0,    74,     0,     0,     0,     0,
     0,     0,   159,     0,     0,     0,     0,     0,     0,   126,
   127,   128,     0,     0,     0,     0,     0,     0,   160,     0,
     0,     0,     0,   161,     0,     0,   162,     0,  1260,     0,
   130,   131,   132,   133,   163,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   126,   127,     4,   899,   900,   901,   902,   903,   904,   905,
   906,   907,   908,     0,     0,   909,   910,   911,   912,   913,
   914,     0,     0,   915,     0,  1027,   134,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,     0,     0,     0,     0,     0,     0,   934,     0,   935,
   936,   937,   938,   939,   940,   941,   942,   943,     0,  1774,
     0,   944,  1775,     0,   945,     0,     0,   946,     0,     0,
   947,     0,   948,   949,   950,   951,   952,   953,   954,   955,
   956,   957,   958,   959,   960,   961,   962,   963,     0,     0,
     0,   964,     0,   160,     0,     0,   965,     0,   161,   966,
     0,   162,     0,     0,     0,   932,     0,     0,     0,   163,
     0,     0,     0,    71,    72,   933,     0,    74,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,     0,     0,   932,     0,     0,     0,
     0,     0,  1739,     0,    71,    72,   933,     0,    74,     0,
     0,     0,     0,   160,     0,     0,     0,     0,   161,     0,
     0,   162,     0,  1843,   270,   271,   272,   273,   274,   163,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,   932,     0,     0,
   285,     0,     0,     0,   288,    71,    72,   933,     0,    74,
     0,     0,     0,     0,   160,     0,     0,     0,     0,   161,
     0,     0,   162,     0,  1844,     0,     0,     0,     0,   934,
   729,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     0,     0,     0,   944,     0,     0,   945,     0,     0,   946,
     0,     0,   947,     0,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     0,     0,     0,   964,     0,     0,     0,     0,   965,     0,
   934,   966,   935,   936,   937,   938,   939,   940,   941,   942,
   943,     0,     0,     0,   944,     0,     0,   945,     0,     0,
   946,     0,     0,   947,     0,   948,   949,   950,   951,   952,
   953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
   963,     0,     0,     0,   964,     0,     0,     0,     0,   965,
     0,   934,   966,   935,   936,   937,   938,   939,   940,   941,
   942,   943,     0,     0,  1748,   944,     0,     0,   945,     0,
     0,   946,     0,     0,   947,     0,   948,   949,   950,   951,
   952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
   962,   963,     0,     0,     0,   964,   932,     0,     0,     0,
   965,     0,     0,   966,    71,    72,   933,     0,    74,     0,
   270,   271,   272,   273,   274,  1750,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   932,     0,     0,
     0,     0,     0,     0,     0,    71,    72,   933,     0,    74,
     0,   270,   271,   272,   273,   274,  1752,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
  1933,   284,     0,     0,     0,     0,     0,   285,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   932,     0,
     0,     0,     0,     0,     0,     0,    71,    72,   933,     0,
    74,   902,   903,   904,   905,   906,   907,   908,     0,     0,
   909,   910,   911,   912,   913,   914,   576,     0,   915,     0,
   934,     0,   935,   936,   937,   938,   939,   940,   941,   942,
   943,     0,     0,     0,   944,     0,     0,   945,     0,     0,
   946,     0,     0,   947,     0,   948,   949,   950,   951,   952,
   953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
   963,     0,     0,     0,   964,     0,  1363,     0,     0,   965,
     0,   934,   966,   935,   936,   937,   938,   939,   940,   941,
   942,   943,     0,     0,     0,   944,     0,     0,   945,     0,
     0,   946,     0,     0,   947,     0,   948,   949,   950,   951,
   952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
   962,   963,     0,     0,     0,   964,     0,     0,     0,     0,
   965,     0,   934,   966,   935,   936,   937,   938,   939,   940,
   941,   942,   943,     0,     0,  1753,   944,     0,     0,   945,
     0,     0,   946,     0,     0,   947,     0,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,     0,     0,     0,   964,   932,     0,     0,
     0,   965,     0,     0,   966,    71,    72,   933,     0,    74,
     0,     0,     0,     0,     0,     0,  1754,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,     0,     0,     0,     0,   932,     0,
     0,     0,     0,     0,     0,     0,    71,    72,   933,     0,
    74,     0,   270,   271,   272,   273,   274,  1924,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,   577,   269,     0,     0,   285,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   932,
     0,     0,     0,     0,     0,     0,     0,    71,    72,   933,
     0,    74,   899,   900,   901,   902,   903,   904,   905,   906,
   907,   908,     0,     0,   909,   910,   911,   912,   913,   914,
     0,   934,   915,   935,   936,   937,   938,   939,   940,   941,
   942,   943,     0,     0,     0,   944,     0,     0,   945,     0,
     0,   946,     0,     0,   947,     0,   948,   949,   950,   951,
   952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
   962,   963,     0,     0,     0,   964,     0,     0,     0,     0,
   965,     0,   934,   966,   935,   936,   937,   938,   939,   940,
   941,   942,   943,     0,     0,     0,   944,     0,     0,   945,
     0,     0,   946,     0,     0,   947,     0,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,     0,     0,     0,   964,     0,     0,     0,
     0,   965,     0,   934,   966,   935,   936,   937,   938,   939,
   940,   941,   942,   943,     0,     0,  1929,   944,     0,     0,
   945,     0,     0,   946,     0,     0,   947,     0,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
   960,   961,   962,   963,     0,     0,     0,   964,   932,     0,
     0,     0,   965,     0,     0,   966,    71,    72,   933,     0,
    74,     0,     0,     0,     0,     0,     0,  1964,     0,     0,
     0,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,   126,   127,   128,     0,   285,     0,   932,
     0,     0,     0,     0,     0,     0,     0,    71,    72,   933,
     0,    74,     0,     0,   130,   131,   132,   133,  1966,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,     0,     0,     0,     0,     0,     0,
   932,     0,     0,     0,     0,     0,     0,     0,    71,    72,
   933,     0,    74,   899,   900,   901,   902,   903,   904,   905,
   906,   907,   908,     0,     0,   909,   910,   911,   912,   913,
   914,     0,   934,   915,   935,   936,   937,   938,   939,   940,
   941,   942,   943,     0,     0,     0,   944,     0,     0,   945,
     0,     0,   946,     0,     0,   947,     0,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,     0,     0,     0,   964,     0,     0,     0,
     0,   965,     0,   934,   966,   935,   936,   937,   938,   939,
   940,   941,   942,   943,     0,     0,     0,   944,     0,     0,
   945,     0,     0,   946,     0,     0,   947,     0,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
   960,   961,   962,   963,     0,     0,     0,   964,     0,     0,
     0,     0,   965,     0,   934,   966,   935,   936,   937,   938,
   939,   940,   941,   942,   943,     0,     0,  1968,   944,     0,
     0,   945,     0,     0,   946,     0,     0,   947,     0,   948,
   949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
   959,   960,   961,   962,   963,     0,     0,   160,   964,   126,
   127,   128,   161,   965,     0,   162,   966,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1969,     0,
   130,   131,   132,   133,     0,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   126,   127,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1206,     0,     0,     0,     0,  1980,
     0,     0,     0,     0,     0,     0,   134,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   126,   127,     4,   521,   901,   902,   903,   904,   905,
   906,   907,   908,     0,     0,   909,   910,   911,   912,   913,
   914,     0,     0,   915,     0,     0,     0,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   126,   127,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   317,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   591,   127,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   160,     0,     0,     0,     0,   161,     0,
     0,   162,   134,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   515,   474,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   160,     0,     0,     0,   516,   161,
     4,     0,   162,     0,     0,     0,     5,     6,     0,     0,
     0,     0,     0,     0,     7,     8,     9,    10,     0,   575,
     0,     0,     0,    11,     0,     0,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,   160,   284,     0,     0,     0,
   161,     0,   285,   162,     0,     0,    12,   490,     0,     0,
     0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    14,     0,    15,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
     0,     0,     0,    17,     0,     0,   160,     0,     0,     0,
     0,   161,     0,     0,   162,    18,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    19,     0,     0,     0,     0,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,     0,     0,     0,     0,
   160,     0,     0,     0,     0,   161,   602,     0,   162,     0,
     0,     0,     0,     0,     0,     0,    20,     0,    21,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,     0,   603,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,   604,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
     0,     0,   285,     0,   605,     0,     0,   491,     0,     0,
     0,     0,     0,     0,     0,   606,   607,   608,   609,   610,
   611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
   621,   622,   623,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,   502,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,   509,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,   510,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,   511,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,   736,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,   737,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
   989,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
   278,  1155,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
   277,   278,  1333,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
   276,   277,   278,  1436,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,  1444,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,  1453,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,  1629,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,  1653,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,  1657,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,  1663,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
  1670,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
   278,  1690,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
   277,   278,  1815,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
   276,   277,   278,  1820,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,  1821,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,  1893,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,  1895,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,  1918,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,  1971,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,  1973,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
  1981,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
   345,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
     0,   742,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
     0,     0,  1154,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,     0,     0,   285,
     0,     0,     0,  1169,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,     0,     0,
   285,     0,     0,     0,  1495,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,     0,
     0,   285,     0,     0,     0,  1620,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
     0,     0,   285,     0,     0,     0,  1780,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,     0,     0,     0,  1783,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,     0,     0,   285,     0,     0,     0,  1798,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,     0,     0,     0,  1887,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
  1959,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
     0,  1987,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,   318,     0,     0,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,   373,     0,     0,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
   492,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,   493,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,   494,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   495,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   496,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   497,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   498,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   499,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,   500,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,   501,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
   503,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,   504,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,   505,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   506,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   507,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   508,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   518,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   644,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,   738,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,   739,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
   740,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,   741,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,   841,     0,     0,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   875,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   991,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   992,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,  1694,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,  1806,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,  1817,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,  1892,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
  1897,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,  1907,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,  1908,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,  1948,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,  1952,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,  1983,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,     0,     0,   285,   899,   900,   901,   902,   903,
   904,   905,   906,   907,   908,     0,     0,   909,   910,   911,
   912,   913,   914,     0,     0,   915,     0,     0,     0,  1513
};

static const short yycheck[] = {     3,
    82,   172,   567,   535,   482,   658,   621,     7,    82,  1097,
   760,     5,     5,     3,   546,     5,   328,    21,   257,     3,
   332,     5,     5,     5,   556,    23,     5,    31,   560,     5,
   103,   104,   564,     3,     3,     5,     5,   253,   309,     5,
     7,   257,     5,     5,    24,     5,  1554,   428,     7,   320,
   321,   322,     5,   244,     5,     5,  1564,     3,   329,   250,
   602,   603,  1570,     5,  1019,   236,   247,   609,     7,    81,
  1025,  1579,   595,    63,    68,    87,   257,  1585,  1586,     5,
   107,    61,    23,    95,   111,   112,   113,   114,   115,   116,
    68,     0,     5,   790,   791,   792,   793,   401,   479,     5,
    98,   223,    80,   107,    64,    11,    12,   111,   112,   113,
   114,   115,   116,   117,   236,   247,   245,   121,   122,   123,
   246,   253,    28,     5,   295,   247,    68,    23,   878,   255,
   880,   111,   112,   113,   114,     5,   116,   790,   791,   792,
   793,   247,    68,   250,   253,   252,   527,   253,   257,   248,
    63,   257,     5,   180,   116,    68,   255,    98,    11,    12,
    13,    14,    15,   475,    17,   336,    13,    14,    15,   253,
    17,     5,     5,   257,   245,    28,   180,    11,    12,    13,
    14,    15,   247,    17,   881,   708,     5,     6,   246,   262,
     9,    10,   257,   247,    28,    82,    83,   255,    68,   253,
   180,     7,    98,   900,   901,   902,   903,   904,   905,   906,
   907,   908,   909,   910,   911,   912,   913,   914,   915,    74,
   293,   918,   526,     5,   106,   229,   530,   246,   881,    11,
    12,   247,   119,   120,   116,    68,   255,   237,   125,     3,
    95,     5,   254,   253,   254,  1200,    28,   900,   901,   902,
   903,   904,   905,   906,   907,   908,   909,   910,   911,   912,
   913,   914,   915,   253,   257,   918,   256,   237,   247,   253,
   253,   253,   256,   160,   161,   162,   254,   253,   253,   245,
   247,   253,   116,   117,   118,   119,   256,   256,  1243,     5,
   253,   462,   254,   375,   253,    11,    12,    13,    14,    15,
   253,    17,   253,   253,   250,   309,   247,   223,   250,    81,
   253,   253,    28,    85,   253,   253,   320,   321,   322,   401,
   253,   248,   248,    95,   250,   329,   597,   401,   255,    81,
   711,    81,   312,   637,  1031,    85,    86,   250,    13,    14,
    15,  1849,    17,    95,     6,   248,    23,   253,   254,  1857,
    66,   247,   255,   240,   241,   242,   243,   244,   245,   246,
   247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
   257,   258,   259,   260,   261,   247,   140,   450,  1031,   253,
   250,   253,   269,   270,   271,   272,   273,   274,   275,   276,
   277,   278,   279,   280,   281,   282,   283,   284,   710,   254,
   253,   254,   406,   222,  1359,   292,   253,   254,    23,   580,
   253,   582,   583,   584,   257,   253,   420,   250,   253,  1927,
   254,    98,  1930,    13,    14,    15,   430,    17,   253,   316,
   317,   435,  1940,  1941,    13,    14,    15,   441,    17,   443,
   257,    18,   206,   447,   331,    13,    14,    15,   248,    17,
   253,  1066,  1067,   246,   257,   255,   253,  1965,     5,     5,
   257,     7,   255,    18,    11,    12,    13,    14,    15,   248,
    17,   253,   254,    19,    20,    21,   255,   253,   482,    77,
    78,    28,   254,    98,     5,   253,   254,   251,   375,    35,
    11,    12,    13,    14,    15,     5,    17,   245,  1195,    13,
    14,    15,   254,    17,   254,    95,   984,    28,  1205,   396,
    87,   248,   248,    85,   401,   588,   403,   115,   255,   255,
   602,   603,     7,    95,     8,    97,     7,   609,  1181,   127,
    85,   185,    87,   606,    95,     7,    97,   849,   254,   248,
   130,    18,  1195,    98,   105,     7,   255,   137,   248,  1091,
    85,   245,  1205,   247,     7,   255,   111,   248,   729,     5,
   137,  1103,     7,   734,   255,    11,    12,    13,    14,    15,
   247,    17,   127,     7,   109,     5,     6,   248,   253,   254,
   157,   158,    28,  1538,   255,  1540,   254,   255,     5,     7,
   477,   595,     7,   597,    11,    12,    13,    14,    15,  1164,
    17,     5,     6,   490,   491,     9,    10,   248,     7,    85,
    87,    28,    67,   248,   255,   502,   254,   255,   248,    95,
   255,     7,   509,   510,   511,   255,   248,   248,   515,   516,
    85,     7,   247,   255,   255,   111,   247,   524,     7,   115,
    95,    96,   188,   716,   717,     7,  1211,     7,   675,   104,
     7,   106,     7,   130,   658,   682,   254,   254,   255,   245,
   137,   138,   255,   256,   254,   247,   646,   247,    13,    14,
    15,   675,    17,   247,   253,   254,    95,   254,   682,   246,
   157,  1213,   254,   160,   161,   253,   254,   247,   575,   576,
  1778,  1779,   111,   254,   674,   675,   254,   255,   678,   254,
   253,   254,   682,   253,   708,   254,   253,   254,     6,  1274,
     7,   691,   131,   253,   254,   602,   603,   127,   253,   254,
   607,   608,   609,   610,   995,   996,   997,   998,     7,   616,
     7,   618,   253,   254,   253,   254,   253,   254,  1009,   247,
   224,   225,   226,   227,   228,   247,   230,   231,   232,   233,
   253,   254,   236,   237,   238,   239,   240,   253,   254,   247,
   244,   254,   255,   182,   254,   255,   250,   654,   247,   749,
   254,    88,    89,    90,    91,    92,    93,   254,   254,   247,
   459,   254,   255,   254,   255,   255,   790,   791,   792,   793,
    97,   247,   796,  1543,  1544,  1545,   247,  1068,  1069,   254,
   107,   108,   109,   974,   975,   976,   977,   253,   254,    95,
   247,    97,    98,    99,   100,   101,   102,   103,   222,  1090,
   707,  1518,   236,   237,   238,   239,   254,   255,   232,   254,
   255,   235,   254,   255,   247,   254,   253,   254,   254,   255,
   247,   255,   187,   188,   189,   190,   733,  1802,   137,   736,
   737,   140,   247,    95,  1507,   247,  1334,   137,   247,  1130,
   140,   150,   151,   152,   247,  1518,   247,   238,   239,   240,
   150,   151,   551,   244,   154,   155,     7,   881,     7,   250,
   254,   255,   247,  1054,   120,   121,   122,   123,   124,   125,
   126,   127,   896,   897,   247,   137,   900,   901,   902,   903,
   904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
   914,   915,   254,   255,   918,   254,   255,   247,    68,    69,
    70,    71,    72,    73,    74,    75,    76,   247,   932,    79,
   254,   255,  1474,  1475,  1476,    85,  1478,   254,    80,     5,
    82,    83,   184,    85,   186,   253,   254,   254,    98,     7,
     5,   931,   839,    95,  1496,   842,    11,    12,    13,    14,
    15,  1916,    17,   247,  1345,   254,   208,   255,   254,   247,
   112,   113,   114,    28,   254,   238,   239,   240,   241,   983,
   984,   244,   869,   247,  1255,   127,   254,   255,     7,   668,
  1261,   995,   996,   997,   998,  1376,     3,     4,     5,   254,
   255,  1382,   247,  1384,   247,  1009,   253,    62,   247,  1091,
   254,   255,   254,   254,   255,   247,   695,   247,   254,   254,
   255,  1103,    29,    30,    31,    32,    33,  1031,   247,  1102,
   917,  1104,   254,   255,     5,   714,  1417,   253,   180,   254,
   255,     7,  1423,   236,   237,   238,   239,   240,   254,   255,
     5,   244,   731,  1803,   223,  1059,   247,   250,  1131,   253,
   254,     8,   254,   255,  1068,  1069,   226,   227,   228,   253,
   230,   231,   232,   233,  1078,   253,   236,   237,   238,   239,
   240,   253,  1086,  1087,   244,  1356,  1090,   254,   255,   253,
   250,   254,   255,   255,  1365,   253,  1100,  1101,   253,   612,
   613,  1105,   989,   254,   254,   247,  1110,   248,    80,  1651,
    82,  1653,   254,    85,   248,   255,     7,     7,   248,   227,
   228,   223,   230,   231,   232,   233,  1130,   223,   236,   237,
   238,   239,   240,   223,  1138,  1139,   244,     5,   253,     5,
   253,  1145,   250,  1147,     5,     7,   253,  1151,   120,   121,
   122,   123,   124,   125,   126,   127,     5,     5,  1162,  1701,
   253,   253,   253,   223,  1435,  1707,   224,   225,   226,   227,
   228,   248,   230,   231,   232,   233,     5,     5,   236,   237,
   238,   239,   240,   253,   253,   253,   244,     7,     5,     5,
   253,  1195,   250,     5,   236,   237,   238,   239,   240,   241,
   253,  1205,   244,     5,  1091,   224,   225,   226,   227,   228,
     5,   230,   231,   232,   233,  1486,  1103,   236,   237,   238,
   239,   240,   202,   253,     7,   244,   253,   253,   253,     5,
   248,   250,   247,  1775,   254,   127,  1123,     7,  1125,     5,
  1127,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     7,  1255,     7,   254,     7,   934,   253,  1261,   224,   225,
   226,   227,   228,     7,   230,   231,   232,   233,  1155,     7,
   236,   237,   238,   239,   240,  1546,     7,   247,   244,   247,
     7,     7,   254,     7,   250,   223,     7,     5,     7,   253,
     7,     7,     7,  1835,   973,     7,     7,     7,     7,     7,
     7,   254,     5,     7,   255,   253,   985,     8,  1786,   988,
     5,     5,     5,   253,  1846,   248,   253,   253,     7,     7,
   999,  1000,  1001,  1002,     5,     7,  1497,  1006,  1499,  1500,
  1334,   250,     7,   224,   225,   226,   227,   228,   223,   230,
   231,   232,   233,     5,     7,   236,   237,   238,   239,   240,
   254,  1893,  1356,   244,     7,     7,    13,    14,    15,   250,
    17,  1365,   224,   225,   226,   227,   228,     7,   230,   231,
   232,   233,     7,     7,   236,   237,   238,   239,   240,   253,
   255,   248,   244,     7,     6,   232,     7,    65,   250,   253,
   248,   247,  1474,  1475,  1476,   247,  1478,   247,     5,     3,
     5,   247,   247,   247,   224,   225,   226,   227,   228,   247,
   230,   231,   232,   233,  1496,   247,   236,   237,   238,   239,
   240,     7,   253,  1988,   244,   255,   253,   253,    85,   253,
   250,  1435,   253,  1112,  1113,   253,   251,   248,    95,   253,
   253,   224,   225,   226,   227,   228,  1333,   230,   231,   232,
   233,   255,   253,   236,   237,   238,   239,   240,   247,     5,
     5,   244,     5,   247,   232,   244,   254,   250,     3,   247,
   247,   253,   247,  1360,   131,   132,   133,   134,   135,   136,
   247,     7,  1486,   247,   247,     7,   247,   247,   253,   247,
     7,   247,     5,   247,   253,   247,  1175,   247,  1177,   247,
   247,   247,   253,     5,   247,  1184,   247,   247,   247,   224,
   225,   226,   227,   228,  1518,   230,   231,   232,   233,   253,
   253,   236,   237,   238,   239,   240,  1530,   247,   251,   244,
   230,   231,   232,   233,   247,   250,   236,   237,   238,   239,
   240,     5,  1546,     5,   244,  1432,  1550,   253,  1552,  1436,
   250,   253,  1439,  1440,     5,   254,   248,  1444,   248,   255,
  1447,  1448,  1449,  1450,   247,     5,  1453,  1454,  1455,  1651,
  1457,  1653,   248,   247,  1461,  1462,   248,     5,     5,  1466,
  1467,     5,     5,   253,     5,     5,     5,  1474,  1475,  1476,
  1477,  1478,     5,  1864,     5,     5,  1483,   254,     5,    80,
     3,    82,    83,    84,     3,     5,     7,     5,     5,  1496,
  1881,     7,     5,     5,  1785,     5,     5,  1690,  1691,  1701,
     7,     5,     5,     5,  1697,  1707,     5,     5,     3,     4,
     5,     5,     5,     5,     5,     5,     5,     5,     5,   120,
   121,   122,   123,   124,   125,   126,   127,   128,     5,    24,
    25,    26,    27,  1332,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,   247,
   247,     3,     7,   253,     7,     7,   255,   250,   254,     7,
     7,  1962,     7,  1775,     7,     7,     7,     7,     7,  1772,
     7,  1774,   224,   225,   226,   227,   228,     7,   230,   231,
   232,   233,     7,     7,   236,   237,   238,   239,   240,     7,
     7,     7,   244,   255,     3,   253,  1613,   248,   250,  1616,
     7,   247,     7,     7,     7,   253,     7,     5,     7,    61,
     7,     7,  1629,     7,     7,    67,     7,     7,     7,     7,
  1429,     7,     7,  1835,     7,  1434,     7,     7,    80,  1438,
    82,     7,  1441,     7,  1651,  1652,  1653,  1446,     7,     7,
     7,     7,    94,   254,     7,     5,    98,     5,     5,  1458,
   247,     7,  1786,     5,   247,     5,   247,   255,   110,     7,
     7,     7,  1471,     7,  1473,     7,     7,     7,  1685,     7,
   248,   248,  1689,   248,   248,  1692,  1693,   129,     7,   255,
     7,  1893,   255,   255,  1701,     7,   255,   255,   255,   255,
  1707,   255,   255,   255,   255,   255,  1505,  1506,   254,  1508,
   255,  1718,  1719,  1720,  1721,  1722,   254,   224,   225,   226,
   227,   228,   248,   230,   231,   232,   233,   255,   253,   236,
   237,   238,   239,   240,   248,     7,     7,   244,   253,   181,
  1864,   183,   237,   250,   255,     7,   254,   242,   253,   255,
   245,   111,   248,     7,   255,   255,     7,  1881,   255,   254,
     7,     5,   247,     3,   248,     7,     7,   253,  1775,    13,
    14,    15,   255,    17,   255,   255,   255,   255,   254,   224,
   225,   226,   227,   228,     7,   230,   231,   232,   233,     7,
  1797,   236,   237,   238,   239,   240,     7,   253,     7,   244,
  1807,  1808,     7,     5,  1811,   250,  1813,     5,     5,   230,
   231,   232,   233,  1820,  1821,   236,   237,   238,   239,   240,
   241,     5,     7,   244,     7,   253,     7,   253,  1835,  1836,
   253,   253,     5,   224,   225,   226,   227,   228,  1962,   230,
   231,   232,   233,   253,   253,   236,   237,   238,   239,   240,
     5,     5,     5,   244,  1861,     5,     7,   253,  1657,   250,
     5,   253,     5,     5,  1663,     5,   248,     5,     7,   254,
     7,  1670,     7,     7,   248,     7,   248,     7,   255,  1886,
   248,   248,     7,     7,   253,     7,  1893,  1686,  1895,     7,
   255,   253,   255,   248,   255,   139,   248,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   255,   248,     7,   153,
   255,  1918,   156,   248,     7,   159,   255,     7,   162,   248,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,     7,   255,   254,   183,
  1947,   255,   255,  1950,   188,   255,   255,   191,   248,     3,
     4,     5,   248,   248,   248,   254,   254,   248,     7,     7,
     5,     7,   132,     7,  1971,     7,  1973,     7,     7,     7,
     7,     7,     7,   254,  1981,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    80,   254,    82,
   254,  1810,    85,   250,   253,     7,  1815,  1816,     7,   224,
   225,   226,   227,   228,  1823,   230,   231,   232,   233,     7,
     7,   236,   237,   238,   239,   240,     7,     5,   253,   244,
   110,     3,     4,     5,     7,   250,     7,   120,   121,   122,
   123,   124,   125,   126,   127,   255,   255,    16,   248,   255,
   255,   248,   255,  1862,   255,   253,   120,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,     3,
     4,     5,     6,   255,   248,     9,   255,  1906,     7,     5,
     7,    61,   248,     7,     7,     7,     7,     7,     7,     5,
    24,    25,    26,    27,   253,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   253,     5,     5,   224,   225,   226,   227,   228,   120,   230,
   231,   232,   233,   247,    68,   236,   237,   238,   239,   240,
   255,   253,   248,   244,   248,     5,   230,     5,     5,   250,
   248,   254,   236,   237,     3,     4,     5,     6,   242,   248,
     9,   245,   254,     7,   248,   249,   250,   251,     4,   253,
     7,   254,     7,     7,   254,    24,    25,    26,    27,     7,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,   224,   225,   226,   227,   228,
     7,   230,   231,   232,   233,     7,   253,   236,   237,   238,
   239,   240,     7,   253,    80,   244,    82,    83,    84,     7,
     7,   250,     7,     7,     7,     7,     7,   253,   230,   253,
     7,   254,     7,   253,   236,   237,   255,     7,   248,   248,
   242,     7,     7,   245,     7,     7,   253,     7,   250,   251,
     7,   253,   129,     7,   120,   121,   122,   123,   124,   125,
   126,   127,   128,     5,     7,   254,   224,   225,   226,   227,
   228,   229,   230,   231,   232,   233,     0,   221,   236,   237,
   238,   239,   240,   241,     0,  1057,   244,  1058,   800,     3,
     4,     5,  1188,   237,   645,  1636,   928,   255,   242,  1492,
  1320,   245,   570,   122,   587,  1705,   250,   691,   226,   253,
    24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     7,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,
    -1,    -1,    -1,   242,    -1,    -1,   245,    -1,   254,    -1,
    24,    25,    26,    27,   253,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     3,     4,     5,   224,   225,   226,   227,   228,   229,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
   241,    -1,    -1,   244,    -1,   246,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,   141,
   142,   143,   144,   145,   146,   147,   148,   149,    -1,   203,
    -1,   153,   206,    -1,   156,    -1,    -1,   159,    -1,    -1,
   162,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   177,   178,   179,    -1,    -1,
    -1,   183,    -1,   237,    -1,    -1,   188,    -1,   242,   191,
    -1,   245,    -1,    -1,    -1,     5,    -1,    -1,    -1,   253,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,    -1,    -1,   250,    -1,    -1,     5,    -1,    -1,    -1,
    -1,    -1,   254,    -1,    13,    14,    15,    -1,    17,    -1,
    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,   242,    -1,
    -1,   245,    -1,     7,   224,   225,   226,   227,   228,   253,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,     5,    -1,    -1,
   250,    -1,    -1,    -1,   254,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,   242,
    -1,    -1,   245,    -1,     7,    -1,    -1,    -1,    -1,   139,
   253,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   188,    -1,
   139,   191,   141,   142,   143,   144,   145,   146,   147,   148,
   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,
   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   188,
    -1,   139,   191,   141,   142,   143,   144,   145,   146,   147,
   148,   149,    -1,    -1,   254,   153,    -1,    -1,   156,    -1,
    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,    -1,    -1,    -1,   183,     5,    -1,    -1,    -1,
   188,    -1,    -1,   191,    13,    14,    15,    -1,    17,    -1,
   224,   225,   226,   227,   228,   254,   230,   231,   232,   233,
    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
    -1,   224,   225,   226,   227,   228,   254,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
     7,   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,   241,     8,    -1,   244,    -1,
   139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,
   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,    -1,    -1,    -1,   183,    -1,     8,    -1,    -1,   188,
    -1,   139,   191,   141,   142,   143,   144,   145,   146,   147,
   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,
    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
   188,    -1,   139,   191,   141,   142,   143,   144,   145,   146,
   147,   148,   149,    -1,    -1,   254,   153,    -1,    -1,   156,
    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,    -1,   183,     5,    -1,    -1,
    -1,   188,    -1,    -1,   191,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    -1,    -1,   254,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,   224,   225,   226,   227,   228,   254,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,    -1,   246,     8,    -1,    -1,   250,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,   224,   225,   226,   227,   228,   229,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,   241,
    -1,   139,   244,   141,   142,   143,   144,   145,   146,   147,
   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,
    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
   188,    -1,   139,   191,   141,   142,   143,   144,   145,   146,
   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,
    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,
    -1,   188,    -1,   139,   191,   141,   142,   143,   144,   145,
   146,   147,   148,   149,    -1,    -1,   254,   153,    -1,    -1,
   156,    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,    -1,    -1,    -1,   183,     5,    -1,
    -1,    -1,   188,    -1,    -1,   191,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
    -1,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,    -1,     3,     4,     5,    -1,   250,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    24,    25,    26,    27,   254,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
    15,    -1,    17,   224,   225,   226,   227,   228,   229,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
   241,    -1,   139,   244,   141,   142,   143,   144,   145,   146,
   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,
    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,
    -1,   188,    -1,   139,   191,   141,   142,   143,   144,   145,
   146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,
   156,    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,
    -1,    -1,   188,    -1,   139,   191,   141,   142,   143,   144,
   145,   146,   147,   148,   149,    -1,    -1,   254,   153,    -1,
    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,    -1,    -1,   237,   183,     3,
     4,     5,   242,   188,    -1,   245,   191,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
    24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,   254,
    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,     3,     4,     5,     6,   226,   227,   228,   229,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
   241,    -1,    -1,   244,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,     8,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,   242,    -1,
    -1,   245,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,     8,   221,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,     8,   242,
     5,    -1,   245,    -1,    -1,    -1,    11,    12,    -1,    -1,
    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,     8,
    -1,    -1,    -1,    28,    -1,    -1,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,   237,   244,    -1,    -1,    -1,
   242,    -1,   250,   245,    -1,    -1,    61,   255,    -1,    -1,
    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
    -1,    -1,    -1,    98,    -1,    -1,   237,    -1,    -1,    -1,
    -1,   242,    -1,    -1,   245,   110,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
   237,    -1,    -1,    -1,    -1,   242,    74,    -1,   245,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,   250,
   230,   231,   232,   233,    -1,   133,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,
   250,   230,   231,   232,   233,    -1,    -1,   236,   237,   238,
   239,   240,    -1,    -1,   162,   244,   224,   225,   226,   227,
   228,   250,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,
    -1,    -1,   250,    -1,   192,    -1,    -1,   255,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   203,   204,   205,   206,   207,
   208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
   218,   219,   220,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,   250,
   230,   231,   232,   233,   255,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,
   250,   230,   231,   232,   233,   255,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,   224,   225,   226,   227,
   228,   250,   230,   231,   232,   233,   255,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,   226,
   227,   228,   250,   230,   231,   232,   233,   255,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,
   226,   227,   228,   250,   230,   231,   232,   233,   255,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,
   225,   226,   227,   228,   250,   230,   231,   232,   233,   255,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
   224,   225,   226,   227,   228,   250,   230,   231,   232,   233,
   255,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,   224,   225,   226,   227,   228,   250,   230,   231,   232,
   233,   255,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,   224,   225,   226,   227,   228,   250,   230,   231,
   232,   233,   255,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,   224,   225,   226,   227,   228,   250,   230,
   231,   232,   233,   255,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,   250,
   230,   231,   232,   233,   255,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,
   250,   230,   231,   232,   233,   255,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,   224,   225,   226,   227,
   228,   250,   230,   231,   232,   233,   255,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,   226,
   227,   228,   250,   230,   231,   232,   233,   255,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,
   226,   227,   228,   250,   230,   231,   232,   233,   255,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,
   225,   226,   227,   228,   250,   230,   231,   232,   233,   255,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
   224,   225,   226,   227,   228,   250,   230,   231,   232,   233,
   255,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,   224,   225,   226,   227,   228,   250,   230,   231,   232,
   233,   255,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,   224,   225,   226,   227,   228,   250,   230,   231,
   232,   233,   255,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,   224,   225,   226,   227,   228,   250,   230,
   231,   232,   233,   255,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,   250,
   230,   231,   232,   233,   255,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,   224,   225,   226,   227,   228,
   250,   230,   231,   232,   233,   255,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,   224,   225,   226,   227,
   228,   250,   230,   231,   232,   233,   255,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,   226,
   227,   228,   250,   230,   231,   232,   233,   255,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,
   226,   227,   228,   250,   230,   231,   232,   233,   255,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,
   225,   226,   227,   228,   250,   230,   231,   232,   233,   255,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
   224,   225,   226,   227,   228,   250,   230,   231,   232,   233,
   255,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,
   254,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
    -1,   254,   224,   225,   226,   227,   228,    -1,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,
    -1,    -1,   254,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   250,
    -1,    -1,    -1,   254,   224,   225,   226,   227,   228,    -1,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,
   250,    -1,    -1,    -1,   254,   224,   225,   226,   227,   228,
    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
    -1,   250,    -1,    -1,    -1,   254,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,
    -1,    -1,   250,    -1,    -1,    -1,   254,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,    -1,    -1,   250,    -1,    -1,    -1,   254,   224,   225,
   226,   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,
    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,   254,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,   254,
   224,   225,   226,   227,   228,    -1,   230,   231,   232,   233,
    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,
   254,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
    -1,   254,   224,   225,   226,   227,   228,    -1,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,    -1,   246,    -1,    -1,    -1,   250,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
    -1,   246,    -1,    -1,    -1,   250,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,
   248,    -1,   250,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,
   224,   225,   226,   227,   228,    -1,   230,   231,   232,   233,
    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,   248,    -1,   250,   224,   225,   226,   227,   228,    -1,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,
   250,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,
   226,   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,
    -1,    -1,   248,    -1,   250,   224,   225,   226,   227,   228,
    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,
    -1,   250,   224,   225,   226,   227,   228,    -1,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
    -1,    -1,    -1,   248,    -1,   250,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,
   248,    -1,   250,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,
   224,   225,   226,   227,   228,    -1,   230,   231,   232,   233,
    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,   248,    -1,   250,   224,   225,   226,   227,   228,    -1,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,
   250,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,
   226,   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,
    -1,    -1,   248,    -1,   250,   224,   225,   226,   227,   228,
    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,
    -1,   250,   224,   225,   226,   227,   228,    -1,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
    -1,    -1,    -1,   248,    -1,   250,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,
   248,    -1,   250,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,
   224,   225,   226,   227,   228,    -1,   230,   231,   232,   233,
    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,    -1,   246,    -1,    -1,    -1,   250,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,   248,    -1,   250,   224,   225,   226,   227,   228,    -1,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,
   250,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,
   226,   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,
    -1,    -1,   248,    -1,   250,   224,   225,   226,   227,   228,
    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,
    -1,   250,   224,   225,   226,   227,   228,    -1,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,
    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
    -1,    -1,    -1,   248,    -1,   250,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,
   248,    -1,   250,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,   250,
   224,   225,   226,   227,   228,    -1,   230,   231,   232,   233,
    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,   248,    -1,   250,   224,   225,   226,   227,   228,    -1,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,   248,    -1,
   250,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,
   226,   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,
    -1,    -1,    -1,    -1,   250,   224,   225,   226,   227,   228,
   229,   230,   231,   232,   233,    -1,    -1,   236,   237,   238,
   239,   240,   241,    -1,    -1,   244,    -1,    -1,    -1,   248
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
      /* Free($3) ; */
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
#line 2192 "GetDP.y"
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
#line 2217 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 225:
#line 2222 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 226:
#line 2230 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 227:
#line 2238 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 228:
#line 2248 "GetDP.y"
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
#line 2265 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 230:
#line 2273 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 231:
#line 2280 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 232:
#line 2287 "GetDP.y"
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
#line 2296 "GetDP.y"
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
#line 2305 "GetDP.y"
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
#line 2314 "GetDP.y"
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
#line 2335 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 238:
#line 2346 "GetDP.y"
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
#line 2375 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 243:
#line 2388 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 244:
#line 2394 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 245:
#line 2401 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2410 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2413 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2416 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2419 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2426 "GetDP.y"
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
#line 2442 "GetDP.y"
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
#line 2491 "GetDP.y"
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
#line 2512 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 255:
#line 2515 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 256:
#line 2520 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2525 "GetDP.y"
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
#line 2539 "GetDP.y"
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
#line 2559 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 260:
#line 2564 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 261:
#line 2569 "GetDP.y"
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
#line 2593 "GetDP.y"
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
#line 2653 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 265:
#line 2656 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 266:
#line 2665 "GetDP.y"
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
#line 2731 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 268:
#line 2735 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 269:
#line 2742 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 271:
#line 2751 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 272:
#line 2756 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 273:
#line 2759 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2766 "GetDP.y"
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
#line 2782 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2788 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 277:
#line 2791 "GetDP.y"
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
#line 2810 "GetDP.y"
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
#line 2822 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 280:
#line 2828 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 281:
#line 2831 "GetDP.y"
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
#line 2846 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 283:
#line 2850 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 284:
#line 2859 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 286:
#line 2870 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 287:
#line 2875 "GetDP.y"
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
#line 2885 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 289:
#line 2898 "GetDP.y"
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
#line 2913 "GetDP.y"
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
#line 2987 "GetDP.y"
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
#line 3003 "GetDP.y"
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
#line 3036 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 295:
#line 3039 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 296:
#line 3042 "GetDP.y"
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
#line 3088 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 299:
#line 3098 "GetDP.y"
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
#line 3126 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 304:
#line 3138 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 305:
#line 3144 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 306:
#line 3151 "GetDP.y"
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
#line 3163 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 309:
#line 3169 "GetDP.y"
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
#line 3183 "GetDP.y"
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
#line 3203 "GetDP.y"
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
#line 3226 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 315:
#line 3229 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 316:
#line 3233 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 317:
#line 3236 "GetDP.y"
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
#line 3247 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 319:
#line 3253 "GetDP.y"
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
#line 3266 "GetDP.y"
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
#line 3293 "GetDP.y"
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
#line 3334 "GetDP.y"
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
#line 3360 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 324:
#line 3365 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
#line 3371 "GetDP.y"
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
#line 3682 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 327:
#line 3687 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3696 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3705 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3714 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 332:
#line 3722 "GetDP.y"
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
#line 3762 "GetDP.y"
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
#line 3777 "GetDP.y"
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
#line 3801 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 336:
#line 3806 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3815 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 338:
#line 3818 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 339:
#line 3821 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 340:
#line 3824 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 341:
#line 3831 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 343:
#line 3842 "GetDP.y"
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
#line 3852 "GetDP.y"
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
#line 3862 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 346:
#line 3876 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 348:
#line 3888 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 349:
#line 3890 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3892 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3894 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 352:
#line 3902 "GetDP.y"
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
#line 3927 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 355:
#line 3935 "GetDP.y"
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
#line 4014 "GetDP.y"
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
#line 4060 "GetDP.y"
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
#line 4084 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 359:
#line 4093 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 4102 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 361:
#line 4107 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4116 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 363:
#line 4127 "GetDP.y"
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
#line 4156 "GetDP.y"
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
#line 4180 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 367:
#line 4188 "GetDP.y"
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
#line 4243 "GetDP.y"
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
#line 4260 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 370:
#line 4261 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 371:
#line 4262 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 372:
#line 4263 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 373:
#line 4264 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 374:
#line 4265 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 375:
#line 4266 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 376:
#line 4267 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 377:
#line 4274 "GetDP.y"
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
#line 4295 "GetDP.y"
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
#line 4319 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 381:
#line 4329 "GetDP.y"
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
#line 4356 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 386:
#line 4368 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 387:
#line 4375 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 388:
#line 4382 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 389:
#line 4385 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 390:
#line 4387 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 392:
#line 4395 "GetDP.y"
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
#line 4410 "GetDP.y"
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
#line 4425 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 395:
#line 4435 "GetDP.y"
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
#line 4455 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 398:
#line 4458 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 399:
#line 4467 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 400:
#line 4470 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 401:
#line 4475 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 4480 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 403:
#line 4485 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 404:
#line 4490 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 406:
#line 4500 "GetDP.y"
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
#line 4537 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 408:
#line 4544 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 409:
#line 4547 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 410:
#line 4559 "GetDP.y"
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
#line 4569 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 412:
#line 4575 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 413:
#line 4578 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 4590 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 415:
#line 4598 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 416:
#line 4611 "GetDP.y"
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
#line 4633 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 418:
#line 4640 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 419:
#line 4646 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 420:
#line 4652 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 421:
#line 4658 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 422:
#line 4666 "GetDP.y"
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
#line 4688 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 424:
#line 4695 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 425:
#line 4701 "GetDP.y"
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
#line 4712 "GetDP.y"
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
#line 4723 "GetDP.y"
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
#line 4736 "GetDP.y"
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
#line 4751 "GetDP.y"
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
#line 4766 "GetDP.y"
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
#line 4786 "GetDP.y"
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
#line 4807 "GetDP.y"
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
#line 4819 "GetDP.y"
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
#line 4839 "GetDP.y"
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
#line 4856 "GetDP.y"
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
#line 4875 "GetDP.y"
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
#line 4897 "GetDP.y"
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
#line 4931 "GetDP.y"
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
#line 4944 "GetDP.y"
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
#line 4958 "GetDP.y"
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
#line 4971 "GetDP.y"
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
#line 4983 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 444:
#line 4992 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 446:
#line 5001 "GetDP.y"
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
#line 5012 "GetDP.y"
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
#line 5024 "GetDP.y"
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
#line 5034 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 450:
#line 5042 "GetDP.y"
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
#line 5055 "GetDP.y"
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
#line 5068 "GetDP.y"
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
#line 5082 "GetDP.y"
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
#line 5092 "GetDP.y"
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
#line 5102 "GetDP.y"
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
#line 5116 "GetDP.y"
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
#line 5130 "GetDP.y"
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
#line 5149 "GetDP.y"
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
#line 5167 "GetDP.y"
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
#line 5178 "GetDP.y"
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
#line 5193 "GetDP.y"
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
#line 5208 "GetDP.y"
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
#line 5223 "GetDP.y"
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
#line 5238 "GetDP.y"
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
#line 5253 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 466:
#line 5264 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 467:
#line 5269 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 468:
#line 5279 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 470:
#line 5289 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 471:
#line 5292 "GetDP.y"
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
#line 5302 "GetDP.y"
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
#line 5318 "GetDP.y"
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
#line 5334 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 476:
#line 5338 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 477:
#line 5342 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 478:
#line 5346 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 479:
#line 5351 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 480:
#line 5362 "GetDP.y"
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
#line 5379 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 483:
#line 5383 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 484:
#line 5387 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 485:
#line 5391 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 486:
#line 5395 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5400 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 488:
#line 5411 "GetDP.y"
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
#line 5426 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 491:
#line 5430 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 492:
#line 5434 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 493:
#line 5438 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 494:
#line 5442 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 495:
#line 5453 "GetDP.y"
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
#line 5471 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 5475 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 499:
#line 5479 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 500:
#line 5483 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 501:
#line 5488 "GetDP.y"
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
#line 5498 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 503:
#line 5504 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 504:
#line 5510 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 505:
#line 5520 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 506:
#line 5523 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 507:
#line 5528 "GetDP.y"
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
#line 5546 "GetDP.y"
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
#line 5556 "GetDP.y"
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
#line 5585 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 512:
#line 5588 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 513:
#line 5591 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 514:
#line 5599 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 515:
#line 5616 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 517:
#line 5628 "GetDP.y"
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
#line 5651 "GetDP.y"
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
#line 5665 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 522:
#line 5672 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 523:
#line 5680 "GetDP.y"
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
#line 5726 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 525:
#line 5731 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 526:
#line 5737 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 527:
#line 5740 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 528:
#line 5743 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 529:
#line 5745 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5751 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 532:
#line 5762 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 533:
#line 5765 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5771 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 535:
#line 5776 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 536:
#line 5782 "GetDP.y"
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
#line 5796 "GetDP.y"
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
#line 5810 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 540:
#line 5817 "GetDP.y"
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
#line 5845 "GetDP.y"
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
#line 5855 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 543:
#line 5856 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 544:
#line 5862 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 545:
#line 5871 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 546:
#line 5888 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 548:
#line 5900 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 551:
#line 5909 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 553:
#line 5921 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 554:
#line 5928 "GetDP.y"
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
#line 5940 "GetDP.y"
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
#line 5951 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 557:
#line 5956 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 558:
#line 5962 "GetDP.y"
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
#line 5979 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 560:
#line 5989 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 561:
#line 5992 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 562:
#line 5996 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 563:
#line 6009 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 564:
#line 6013 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 565:
#line 6019 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 566:
#line 6025 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 567:
#line 6031 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 568:
#line 6038 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 569:
#line 6043 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 570:
#line 6048 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 571:
#line 6053 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 572:
#line 6062 "GetDP.y"
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
#line 6074 "GetDP.y"
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
#line 6097 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 575:
#line 6098 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 576:
#line 6099 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 577:
#line 6100 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 578:
#line 6106 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 579:
#line 6108 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 580:
#line 6114 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 581:
#line 6120 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 582:
#line 6127 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 583:
#line 6136 "GetDP.y"
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
#line 6158 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 585:
#line 6166 "GetDP.y"
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
#line 6177 "GetDP.y"
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
#line 6191 "GetDP.y"
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
#line 6212 "GetDP.y"
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
#line 6239 "GetDP.y"
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
#line 6270 "GetDP.y"
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
#line 6290 "GetDP.y"
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
      PostSubOperation_S.EvaluationPoints = NULL ;
    ;
    break;}
case 593:
#line 6319 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 594:
#line 6326 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 595:
#line 6333 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 596:
#line 6340 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 597:
#line 6344 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 598:
#line 6348 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 599:
#line 6352 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 600:
#line 6356 "GetDP.y"
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
#line 6366 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 602:
#line 6371 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 603:
#line 6376 "GetDP.y"
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
#line 6396 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 605:
#line 6403 "GetDP.y"
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
#line 6412 "GetDP.y"
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
#line 6421 "GetDP.y"
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
#line 6430 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 609:
#line 6437 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 610:
#line 6445 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 611:
#line 6449 "GetDP.y"
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
#line 6458 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 613:
#line 6462 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 614:
#line 6466 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 615:
#line 6474 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 616:
#line 6480 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 617:
#line 6485 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 618:
#line 6492 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", 
		 List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 619:
#line 6507 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 620:
#line 6513 "GetDP.y"
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
case 621:
#line 6563 "GetDP.y"
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
case 622:
#line 6573 "GetDP.y"
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
case 623:
#line 6583 "GetDP.y"
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
case 624:
#line 6597 "GetDP.y"
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
case 625:
#line 6611 "GetDP.y"
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
case 626:
#line 6637 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 627:
#line 6641 "GetDP.y"
{
    ;
    break;}
case 629:
#line 6657 "GetDP.y"
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
case 630:
#line 6672 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 631:
#line 6678 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 632:
#line 6684 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 633:
#line 6690 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 634:
#line 6695 "GetDP.y"
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
case 635:
#line 6707 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 636:
#line 6717 "GetDP.y"
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
case 638:
#line 6736 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 639:
#line 6742 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6748 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6759 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 642:
#line 6760 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 643:
#line 6761 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 644:
#line 6762 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 645:
#line 6763 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 646:
#line 6764 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 647:
#line 6765 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 648:
#line 6766 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 649:
#line 6767 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 650:
#line 6768 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 651:
#line 6769 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 652:
#line 6770 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 653:
#line 6771 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 654:
#line 6772 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 655:
#line 6773 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 656:
#line 6774 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 657:
#line 6775 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 658:
#line 6776 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 659:
#line 6777 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 660:
#line 6778 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 661:
#line 6779 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 662:
#line 6783 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 663:
#line 6784 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 664:
#line 6785 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 665:
#line 6786 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 666:
#line 6787 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 667:
#line 6788 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 668:
#line 6789 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 669:
#line 6790 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 670:
#line 6791 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 671:
#line 6792 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 672:
#line 6793 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 673:
#line 6794 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 674:
#line 6795 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 675:
#line 6796 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 676:
#line 6797 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 677:
#line 6798 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 678:
#line 6799 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 679:
#line 6800 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 680:
#line 6801 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 681:
#line 6802 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 682:
#line 6803 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 683:
#line 6804 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 684:
#line 6805 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 685:
#line 6806 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 686:
#line 6807 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 687:
#line 6808 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 688:
#line 6809 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 689:
#line 6810 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 690:
#line 6811 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 691:
#line 6812 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 692:
#line 6813 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 693:
#line 6814 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6815 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 695:
#line 6816 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 696:
#line 6817 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 697:
#line 6818 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 698:
#line 6819 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 699:
#line 6820 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 700:
#line 6821 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 701:
#line 6822 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 702:
#line 6827 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 703:
#line 6828 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 704:
#line 6829 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 705:
#line 6830 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 706:
#line 6831 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 707:
#line 6832 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 708:
#line 6833 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 709:
#line 6852 "GetDP.y"
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
case 710:
#line 6870 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 711:
#line 6873 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 712:
#line 6879 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 713:
#line 6882 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 714:
#line 6889 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 715:
#line 6895 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 716:
#line 6898 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 717:
#line 6901 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 718:
#line 6913 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 719:
#line 6919 "GetDP.y"
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
case 720:
#line 6930 "GetDP.y"
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
case 721:
#line 6946 "GetDP.y"
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
case 722:
#line 6968 "GetDP.y"
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
case 723:
#line 6983 "GetDP.y"
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
case 724:
#line 7021 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 725:
#line 7029 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 726:
#line 7041 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 727:
#line 7049 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 728:
#line 7061 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 729:
#line 7063 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 730:
#line 7070 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 731:
#line 7073 "GetDP.y"
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
case 732:
#line 7088 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 733:
#line 7093 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 734:
#line 7098 "GetDP.y"
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
case 735:
#line 7117 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 736:
#line 7135 "GetDP.y"
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
#line 7146 "GetDP.y"



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
    /* List_Write(Problem_S.PostSave, i, &PostSave_S) ; */
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

