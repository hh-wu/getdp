
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

/* $Id: GetDP.tab.c,v 1.69 2004-05-11 15:25:09 geuzaine Exp $ */
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



#define	YYFINAL		1996
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
  1572,  1580,  1588,  1596,  1606,  1616,  1626,  1638,  1656,  1670,
  1686,  1698,  1712,  1713,  1721,  1722,  1730,  1738,  1750,  1756,
  1762,  1772,  1782,  1792,  1798,  1804,  1816,  1826,  1841,  1856,
  1864,  1877,  1888,  1896,  1904,  1912,  1914,  1916,  1918,  1919,
  1922,  1926,  1930,  1933,  1934,  1937,  1941,  1945,  1949,  1953,
  1958,  1959,  1962,  1966,  1970,  1974,  1978,  1982,  1987,  1988,
  1991,  1995,  1999,  2003,  2007,  2012,  2013,  2016,  2020,  2024,
  2028,  2032,  2036,  2041,  2046,  2051,  2052,  2057,  2058,  2061,
  2065,  2069,  2073,  2077,  2081,  2085,  2086,  2089,  2093,  2095,
  2096,  2099,  2103,  2108,  2113,  2117,  2122,  2123,  2128,  2131,
  2134,  2135,  2138,  2142,  2147,  2148,  2154,  2160,  2161,  2164,
  2165,  2172,  2176,  2177,  2182,  2186,  2190,  2191,  2194,  2198,
  2200,  2202,  2203,  2206,  2210,  2214,  2218,  2222,  2227,  2228,
  2237,  2238,  2239,  2243,  2251,  2259,  2272,  2281,  2293,  2294,
  2305,  2307,  2314,  2318,  2325,  2327,  2329,  2331,  2333,  2334,
  2338,  2340,  2343,  2346,  2359,  2362,  2378,  2383,  2396,  2414,
  2437,  2450,  2451,  2454,  2458,  2463,  2468,  2472,  2475,  2478,
  2482,  2486,  2490,  2494,  2498,  2502,  2506,  2510,  2514,  2518,
  2522,  2526,  2532,  2535,  2538,  2542,  2552,  2556,  2566,  2572,
  2573,  2576,  2583,  2592,  2601,  2612,  2614,  2619,  2621,  2627,
  2632,  2637,  2645,  2650,  2656,  2664,  2670,  2679,  2680,  2684,
  2690,  2696,  2698,  2700,  2702,  2704,  2706,  2708,  2710,  2712,
  2714,  2716,  2718,  2720,  2722,  2724,  2726,  2728,  2730,  2732,
  2734,  2736,  2738,  2740,  2744,  2747,  2750,  2754,  2758,  2762,
  2766,  2770,  2774,  2778,  2782,  2786,  2790,  2794,  2798,  2802,
  2806,  2811,  2816,  2821,  2826,  2831,  2836,  2841,  2846,  2851,
  2856,  2863,  2868,  2873,  2878,  2883,  2888,  2893,  2900,  2907,
  2914,  2920,  2923,  2925,  2927,  2929,  2931,  2933,  2935,  2937,
  2939,  2940,  2942,  2944,  2948,  2950,  2952,  2956,  2960,  2964,
  2970,  2974,  2979,  2984,  2991,  3000,  3009,  3015,  3021,  3023,
  3025,  3027,  3029,  3031,  3036,  3043,  3045
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
     0,   165,   247,     5,   255,   291,   255,   291,   248,     7,
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
  4780,  4800,  4821,  4833,  4853,  4870,  4889,  4910,  4944,  4957,
  4971,  4984,  4997,  5004,  5006,  5013,  5015,  5026,  5038,  5048,
  5056,  5069,  5082,  5096,  5106,  5116,  5130,  5144,  5162,  5181,
  5192,  5207,  5222,  5237,  5252,  5267,  5277,  5283,  5293,  5299,
  5302,  5306,  5316,  5330,  5342,  5346,  5352,  5356,  5360,  5365,
  5374,  5387,  5391,  5397,  5401,  5405,  5409,  5414,  5423,  5435,
  5438,  5444,  5448,  5452,  5456,  5465,  5480,  5483,  5489,  5493,
  5497,  5502,  5512,  5518,  5524,  5533,  5537,  5541,  5555,  5558,
  5570,  5599,  5602,  5605,  5613,  5629,  5637,  5640,  5661,  5664,
  5675,  5678,  5686,  5694,  5740,  5745,  5750,  5754,  5757,  5759,
  5764,  5771,  5775,  5779,  5784,  5790,  5796,  5809,  5820,  5823,
  5831,  5859,  5870,  5870,  5876,  5885,  5901,  5909,  5912,  5917,
  5919,  5922,  5931,  5934,  5942,  5954,  5965,  5970,  5975,  5993,
  6002,  6006,  6011,  6021,  6027,  6033,  6039,  6045,  6052,  6057,
  6062,  6067,  6074,  6088,  6110,  6113,  6114,  6115,  6118,  6122,
  6126,  6134,  6141,  6148,  6172,  6179,  6191,  6204,  6224,  6250,
  6283,  6303,  6329,  6332,  6340,  6347,  6354,  6358,  6362,  6366,
  6370,  6380,  6385,  6390,  6410,  6417,  6426,  6435,  6444,  6451,
  6459,  6463,  6472,  6476,  6480,  6488,  6494,  6499,  6506,  6520,
  6527,  6575,  6587,  6597,  6611,  6625,  6651,  6655,  6667,  6671,
  6686,  6692,  6698,  6704,  6709,  6721,  6731,  6747,  6750,  6756,
  6762,  6773,  6775,  6776,  6777,  6778,  6779,  6780,  6781,  6782,
  6783,  6784,  6785,  6786,  6787,  6788,  6789,  6790,  6791,  6792,
  6793,  6794,  6797,  6799,  6800,  6801,  6802,  6803,  6804,  6805,
  6806,  6807,  6808,  6809,  6810,  6811,  6812,  6813,  6814,  6815,
  6816,  6817,  6818,  6819,  6820,  6821,  6822,  6823,  6824,  6825,
  6826,  6827,  6828,  6829,  6830,  6831,  6832,  6833,  6834,  6835,
  6836,  6837,  6840,  6843,  6844,  6845,  6846,  6847,  6848,  6866,
  6882,  6887,  6893,  6896,  6901,  6909,  6912,  6915,  6925,  6933,
  6944,  6960,  6982,  6997,  7035,  7043,  7053,  7063,  7073,  7077,
  7082,  7087,  7102,  7107,  7112,  7131,  7148
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
   392,   392,   393,   392,   394,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   395,   395,   396,   396,
   397,   397,   397,   398,   398,   399,   399,   399,   399,   399,
   400,   400,   401,   401,   401,   401,   401,   401,   402,   402,
   403,   403,   403,   403,   403,   404,   404,   405,   405,   405,
   405,   405,   405,   405,   405,   406,   406,   407,   407,   408,
   408,   408,   408,   408,   408,   409,   409,   410,   410,   411,
   411,   412,   412,   412,   412,   412,   413,   413,   413,   413,
   414,   414,   415,   415,   416,   416,   416,   417,   417,   419,
   418,   418,   420,   418,   418,   418,   421,   421,   422,   422,
   422,   423,   423,   424,   424,   424,   424,   424,   426,   425,
   427,   428,   427,   429,   429,   429,   429,   429,   430,   429,
   429,   429,   431,   431,   432,   432,   432,   432,   433,   433,
   434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
   434,   435,   435,   436,   436,   436,   436,   436,   436,   436,
   436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
   436,   436,   436,   436,   436,   436,   436,   436,   436,   437,
   437,   438,   438,   438,   438,   438,   438,   438,   439,   439,
   439,   439,   439,   439,   439,   439,   439,   440,   440,   440,
   440,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
   441,   441,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   443,   443,   443,   443,   443,   443,   443,   443,
   444,   444,   444,   444,   445,   445,   445,   445,   446,   446,
   446,   446,   446,   446,   446,   446,   447,   447,   448,   448,
   449,   449,   449,   449,   449,   449,   450
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
     4,     5,     5,     2,     7,    11,     7,    13,    11,     9,
     7,     7,     7,     9,     9,     9,    11,    17,    13,    15,
    11,    13,     0,     7,     0,     7,     7,    11,     5,     5,
     9,     9,     9,     5,     5,    11,     9,    14,    14,     7,
    12,    10,     7,     7,     7,     1,     1,     1,     0,     2,
     3,     3,     2,     0,     2,     3,     3,     3,     3,     4,
     0,     2,     3,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
     3,     3,     4,     4,     4,     0,     4,     0,     2,     3,
     3,     3,     3,     3,     3,     0,     2,     3,     1,     0,
     2,     3,     4,     4,     3,     4,     0,     4,     2,     2,
     0,     2,     3,     4,     0,     5,     5,     0,     2,     0,
     6,     3,     0,     4,     3,     3,     0,     2,     3,     1,
     1,     0,     2,     3,     3,     3,     3,     4,     0,     8,
     0,     0,     3,     7,     7,    12,     8,    11,     0,    10,
     1,     6,     3,     6,     1,     1,     1,     1,     0,     3,
     1,     2,     2,    12,     2,    15,     4,    12,    17,    22,
    12,     0,     2,     3,     4,     4,     3,     2,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     5,     2,     2,     3,     9,     3,     9,     5,     0,
     2,     6,     8,     8,    10,     1,     4,     1,     5,     4,
     4,     7,     4,     5,     7,     5,     8,     0,     3,     5,
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
     3,     4,    40,   729,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   730,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   732,   731,     0,     0,   736,    18,   733,   638,    42,
   204,   167,   180,   236,    91,   297,   379,   516,   547,     0,
     0,   626,     0,   628,     0,     0,     0,     0,    41,   571,
     0,   711,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   205,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   704,   703,   729,     0,     0,
     0,     0,     0,   705,   706,   707,   708,   709,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   712,   663,     0,   713,   710,     0,     0,
     0,     0,     0,     0,     0,     0,    86,     0,     6,     0,
   209,     8,   206,   208,   169,     9,   182,    10,   241,    11,
   237,   240,   239,   729,     0,     7,    92,    97,    96,   302,
    12,   298,   301,   300,   384,    13,   380,   383,   382,   520,
    14,   517,   519,   552,    15,   548,   551,   550,   559,     0,
     0,     0,     0,   579,     0,     0,   729,    63,     0,    61,
   569,     0,    88,   592,     0,     0,   631,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   665,   666,     0,   715,     0,   716,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   702,   630,   633,   727,   634,     0,
   636,     0,     0,   734,     0,   629,   639,   729,     0,    44,
    50,    53,    52,     0,     0,     0,     0,     0,     0,    98,
     0,     0,     0,     0,     0,     0,     0,   627,   581,     0,
     0,     0,     0,     0,     0,     0,     0,   592,     0,     0,
     0,   592,    76,   729,    73,     0,    60,    71,    80,     0,
    57,     0,    62,     0,   728,   721,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   664,   714,     0,   719,     0,   680,   679,   677,
   678,   673,   675,   674,   676,   668,   667,   669,   670,   671,
   672,     0,     0,     0,     0,     0,     0,     0,     0,    82,
   711,     0,     0,     0,     0,     0,   207,   210,     0,     0,
   168,   170,     0,   102,     0,   181,   183,     0,     0,     0,
     0,     0,     0,   238,   242,     0,     0,    85,     0,     0,
     0,     0,   299,   303,     0,     0,   389,   381,   385,   391,
     0,     0,     0,     0,   518,   521,     0,     0,     0,     0,
     0,   549,   553,   561,     0,     0,   582,   583,   102,   585,
     0,     0,     0,     0,     0,     0,     0,   577,   578,   575,
   576,   573,     0,     0,   592,     0,     0,     0,    85,     0,
     0,     0,    89,     0,     0,   593,   722,   723,     0,     0,
     0,   681,   682,   683,   684,   685,   686,   687,   688,   689,
   690,     0,   692,   693,   694,   695,   696,   697,     0,     0,
     0,     0,   717,   718,     0,     0,   635,     0,   737,   735,
   641,   640,     0,     0,    47,     0,    85,   729,     0,     0,
     0,     0,   216,     0,     0,   173,     0,   187,     0,     0,
     0,   108,     0,   289,     0,   729,     0,   250,   267,   282,
   102,     0,     0,     0,     0,   729,     0,   309,   333,   729,
     0,   392,     0,   729,     0,   527,    88,     0,     0,   561,
     0,     0,     0,   562,     0,     0,   622,     0,     0,     0,
     0,     0,     0,     0,     0,   580,   579,     0,     0,     0,
   704,    78,    81,    72,     0,    77,     0,    66,    58,    65,
   572,   711,   711,     0,     0,     0,     0,     0,   711,     0,
   620,   620,   620,   598,   599,     0,     0,     0,   613,   614,
   104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   632,   720,   701,   637,    90,     0,     0,    64,     0,     0,
     0,    45,     0,     0,   216,     0,   213,   211,     0,     0,
     0,   171,     0,     0,     0,   185,   103,     0,   184,     0,
   245,     0,   243,     0,     0,     0,     0,   102,    93,    99,
   306,     0,   304,     0,     0,     0,   386,     0,   414,     0,
   522,     0,     0,   525,   554,   562,   555,   557,   556,   560,
     0,     0,     0,     0,   102,     0,   587,     0,     0,     0,
   564,     0,     0,     0,   565,     0,     0,     0,    74,   592,
    85,   610,   615,   102,   607,     0,     0,   594,   597,   605,
   606,   600,   601,   604,   602,   603,   609,   608,     0,   611,
   102,   617,     0,     0,   724,     0,     0,   691,   698,   699,
   700,    87,     0,    46,    49,    83,    51,     0,     0,   219,
   214,   218,   212,   175,   172,   189,   186,     0,     0,   729,
   642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
   652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     0,   147,     0,     0,     0,     0,     0,   140,     0,     0,
     0,     0,     0,     0,     0,     0,   109,   110,   138,     0,
   135,   710,   291,   249,   244,   252,   246,   269,   247,   284,
   248,    94,     0,   305,   312,   307,   311,     0,     0,     0,
     0,   308,   334,   336,   335,   387,   395,   388,   394,     0,
   523,   531,   526,   530,   529,   524,   558,   563,     0,   624,
   623,     0,     0,     0,     0,     0,     0,   574,   592,   567,
     0,    79,    75,     0,     0,     0,     0,   595,   596,   621,
     0,   106,     0,     0,     0,     0,     0,    48,     0,    54,
   215,     0,     0,     0,   100,   101,   137,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   132,   131,   133,     0,
   155,   153,   150,   152,   151,     0,   729,     0,   111,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   139,   164,
     0,     0,     0,     0,    95,     0,   352,   352,   363,   341,
     0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   443,   445,   390,   415,   466,     0,
     0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
    59,    70,     0,     0,   102,   612,   105,   102,     0,   619,
   725,   726,     0,     0,     0,     0,     0,     0,   102,   102,
   102,   102,     0,     0,     0,   102,   217,   220,     0,     0,
   174,   176,     0,     0,     0,   188,   190,     0,   108,     0,
     0,     0,     0,     0,   108,     0,   134,   156,     0,   378,
     0,   130,   129,   126,   127,   128,   122,   124,   123,   125,
   118,   119,   114,   117,   120,   115,   121,   154,   157,   160,
     0,   162,     0,     0,   136,     0,     0,     0,     0,   290,
   292,     0,     0,     0,     0,   104,   104,     0,     0,   251,
   253,     0,     0,     0,   268,   270,     0,     0,     0,   283,
   285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   711,   324,   310,   313,   369,   369,   369,     0,     0,     0,
     0,     0,   711,     0,     0,     0,   393,   396,   405,     0,
     0,   102,   102,     0,     0,     0,     0,     0,     0,     0,
     0,   424,     0,   474,     0,   481,     0,   489,   496,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   528,   532,   625,     0,     0,     0,     0,     0,     0,
     0,     0,   570,    88,    68,     0,   107,     0,    84,     0,
     0,     0,     0,     0,   102,     0,   102,     0,     0,     0,
     0,     0,     0,   102,     0,     0,     0,   164,   194,     0,
     0,   145,     0,   146,     0,     0,   142,     0,     0,   108,
   377,     0,   159,   161,     0,     0,     0,     0,     0,     0,
    88,     0,     0,   263,     0,     0,     0,     0,     0,     0,
   278,   280,     0,   274,   276,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   729,   319,     0,     0,
     0,     0,   108,     0,     0,     0,     0,   370,   371,   372,
   373,   374,   375,   376,     0,     0,   337,   353,     0,   338,
     0,   339,   364,     0,     0,     0,   346,   340,   342,     0,
     0,   408,     0,    88,     0,     0,     0,   412,     0,   410,
     0,     0,   416,     0,     0,   417,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   104,   104,
   535,     0,     0,     0,     0,     0,     0,     0,   568,     0,
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
   102,   418,   475,     0,     0,   102,     0,     0,     0,     0,
   419,   482,     0,     0,     0,     0,     0,   102,   420,   490,
     0,     0,     0,     0,     0,     0,     0,     0,   421,   497,
   102,     0,   102,   711,   711,   711,     0,   711,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   468,   467,
   469,   469,     0,   533,     0,   711,     0,     0,     0,     0,
   566,     0,     0,    55,   102,   102,     0,   102,   179,   196,
   193,     0,   116,   158,     0,     0,   149,     0,     0,   296,
   256,     0,   257,     0,   279,     0,   275,     0,   321,     0,
     0,     0,   358,   359,   361,     0,   357,   108,   365,   108,
   343,   344,     0,     0,     0,     0,   345,   347,   407,     0,
   411,     0,   422,   414,   423,     0,     0,     0,     0,     0,
     0,     0,     0,   414,     0,     0,     0,     0,     0,   414,
     0,     0,     0,     0,     0,     0,     0,     0,   414,     0,
     0,     0,     0,     0,   414,   414,     0,     0,   506,     0,
   450,     0,     0,     0,     0,     0,     0,   454,   455,     0,
     0,     0,     0,     0,     0,     0,   449,     0,     0,     0,
     0,   534,     0,     0,     0,     0,     0,     0,   616,   618,
     0,     0,     0,     0,     0,     0,   148,     0,     0,   113,
     0,     0,     0,   281,   277,   331,     0,   320,   325,     0,
   355,   367,     0,     0,     0,     0,   409,   413,     0,     0,
   711,     0,   711,     0,     0,     0,   102,     0,   478,   476,
   477,   479,   102,     0,   485,   483,   484,   486,   487,   102,
   494,   492,     0,   491,   493,   501,   500,   502,     0,     0,
   498,   499,     0,     0,     0,   102,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   711,   470,     0,   538,   538,     0,   711,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   195,   197,     0,     0,   166,     0,     0,     0,
   332,   362,     0,     0,   348,   349,   350,   351,   425,   427,
     0,     0,     0,     0,   433,     0,     0,   480,     0,   488,
     0,   495,   504,   505,   508,   503,   447,     0,     0,   431,
   432,     0,     0,     0,     0,     0,   460,   464,   465,     0,
   463,     0,   444,     0,   711,   473,   446,   369,   369,   591,
     0,   584,   588,     0,     0,     0,   235,   234,   227,   233,
     0,     0,     0,     0,     0,     0,     0,   144,     0,   258,
   322,   108,     0,     0,     0,     0,     0,     0,     0,   102,
     0,     0,     0,     0,   102,     0,   102,     0,     0,     0,
     0,     0,     0,   102,     0,   471,   472,     0,     0,     0,
   543,   537,     0,   539,   536,   711,     0,     0,     0,   198,
   199,   200,   201,   202,   203,     0,     0,     0,     0,   414,
   435,   436,     0,     0,   434,     0,     0,   414,     0,     0,
     0,     0,   102,     0,     0,   507,   509,     0,   430,     0,
   451,   452,   453,     0,     0,   457,     0,     0,     0,     0,
     0,     0,     0,   540,     0,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   711,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     0,   462,     0,   545,   546,   542,     0,   108,   586,     0,
     0,     0,   264,   356,   368,   426,   437,     0,   414,     0,
   441,   414,   515,   510,   513,   514,   511,   512,   448,   429,
     0,   414,   414,   456,     0,   544,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   461,     0,
   589,     0,    56,     0,     0,   439,   414,   442,   428,     0,
     0,   541,     0,     0,     0,     0,   458,   459,     0,   265,
     0,   440,     0,     0,     0,     0,     0,   438,   590,    88,
     0,     0,   266,     0,     0,     0
};

static const short yydefgoto[] = {  1994,
     1,     2,     3,    22,    23,    24,   106,   180,   300,   637,
   301,   994,  1621,   230,   482,   711,   231,   232,   599,   855,
   984,   337,   479,   338,   527,   178,   398,   343,   399,   112,
   197,   428,   541,   542,  1490,   863,   657,   658,   797,  1031,
  1518,   798,   885,  1359,   879,   919,  1053,  1055,   109,   306,
   412,   651,   873,  1012,   110,   307,   417,   653,   874,  1017,
  1353,  1626,  1724,   107,   183,   305,   408,   646,   872,  1008,
   111,   191,   308,   425,   664,   922,  1071,  1375,  1951,  1984,
   665,   923,  1076,  1226,  1384,  1223,  1382,   666,   924,  1081,
   660,   921,  1061,   113,   202,   311,   434,   674,   926,  1094,
  1397,  1636,  1243,  1531,   675,   823,  1098,  1269,  1414,  1548,
  1095,  1258,  1538,  1733,  1097,  1263,  1540,  1734,  1259,   799,
   114,   207,   312,   439,   563,   678,   931,  1108,  1273,  1417,
  1279,  1423,   830,   968,  1148,  1149,  1491,  1608,  1702,  1295,
  1443,  1297,  1452,  1299,  1460,  1300,  1470,  1683,  1814,  1867,
   115,   212,   313,   446,   682,   970,  1153,  1493,  1778,  1834,
  1918,  1883,   116,   216,   314,   453,    25,   315,   574,   691,
    79,   340,   223,   473,   330,   328,   344,   486,   724,   969,
    26,   105,   800,   266,   165,   166,   267,   268,    27,   168,
    57,    58
};

static const short yypact[] = {-32768,
-32768,    43,  4305,  -203,  -183,  -123,   657,   131,   947,   201,
   -95,   -91,   -88,   -74,   -59,   -54,   -31,   -18,   -16,    13,
     2,-32768,-32768,   596,-32768,-32768,    57,   102,    15,   342,
   374,   402,-32768,   432,   435,   478,   480,   497,-32768,   523,
-32768,   526,   553,   595,   605,   611,   621,   624,   634,   647,
   650,-32768,-32768,   416,   183,-32768,-32768,-32768,-32768,-32768,
   234,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   486,
    25,-32768,   438,-32768,   441,   461,   468,   473,-32768,-32768,
   498,  2239,  3888,  -125,   490,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   201,   201,   -75,   472,    56,-32768,  -147,    93,
   288,   483,   556,   622,    58,   747,   374,   642,  3888,  3888,
   374,   469,    85,   768,  3888,-32768,-32768,   194,   792,   564,
   589,   607,   614,-32768,-32768,-32768,-32768,-32768,   623,   630,
   638,   649,   678,   702,   704,   708,   710,   711,   713,   714,
   715,   716,   717,   719,   729,   730,   732,   735,   739,  3888,
  3888,  3888,  3722,  3985,-32768,   882,-32768,-32768,   914,  4707,
   927,  3722,    49,   563,   -96,   980,-32768,   983,-32768,  1077,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -208,   742,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   738,
  4006,  2157,  1049,   751,   748,  1049,  -121,-32768,     3,-32768,
-32768,   760,   756,-32768,  4738,  1419,-32768,  1006,  1007,  3888,
  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,
  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,
  3888,   201,   193,   193,  5110,  3985,   264,-32768,  3888,  3888,
  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,  3888,
  3888,  3888,  3888,  3888,-32768,-32768,-32768,-32768,-32768,   -63,
-32768,  3888,   201,-32768,  3722,-32768,   790,   220,   769,-32768,
-32768,-32768,-32768,  -131,    61,   150,    68,   547,    90,-32768,
   511,   687,   632,   636,   762,  3888,  3888,-32768,-32768,    85,
    85,    19,   765,   766,   767,   770,   772,-32768,    85,   307,
  3773,-32768,  1018,   322,-32768,  3722,-32768,-32768,-32768,   778,
-32768,   782,-32768,   -43,-32768,-32768,   310,   796,   785,  2217,
  3930,  5137,  5164,  5191,  5218,  5245,  5272,  5299,  5326,  5353,
  5380,  3964,  5407,  5434,  5461,  5488,  5515,  5542,  4104,  4125,
  4180,   798,-32768,-32768,  3722,  4027,  4048,  1756,  2473,  2771,
  2771,   811,   811,   811,   811,   506,   506,   193,   193,   193,
   193,  1045,  5569,   805,   -46,  3824,     7,   835,   837,-32768,
  2187,   839,  3888,    12,  1058,   374,-32768,-32768,   814,  1059,
-32768,-32768,   815,    73,  1064,-32768,-32768,   820,  1069,  1072,
   825,   826,   828,-32768,-32768,   862,   838,   -30,  1088,  1090,
   843,   851,-32768,-32768,  1101,   855,-32768,-32768,-32768,-32768,
  1105,   858,   374,  1107,-32768,-32768,   374,   860,  1110,   201,
  1111,-32768,-32768,-32768,  4069,  3870,   915,-32768,    73,-32768,
   865,  3722,   867,   868,   869,    -5,   876,-32768,-32768,-32768,
-32768,-32768,  1120,   885,  6109,    -2,  3939,   875,   405,   410,
  1010,    11,-32768,  1126,  3931,-32768,-32768,-32768,  1129,  3888,
  3888,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  3888,-32768,-32768,-32768,-32768,-32768,-32768,  3888,  3888,
  3888,  1133,  3985,-32768,  3888,  3888,-32768,  1134,-32768,-32768,
-32768,  6109,   891,  3888,-32768,    89,   181,   -93,  1139,    89,
  5596,   894,-32768,  1143,    45,-32768,  1144,-32768,   905,   907,
  1150,-32768,  1158,-32768,  1163,   336,  1164,-32768,-32768,-32768,
    73,   954,  1171,  1176,  1175,   336,  1177,-32768,-32768,   336,
  1178,-32768,   930,   336,  1180,-32768,   756,  1181,  1182,-32768,
  1196,  1197,  1204,   962,  3888,  3888,-32768,  1219,   970,  3722,
   414,  3722,  3722,  3722,  1220,-32768,   751,   201,   186,    34,
  1221,  6109,-32768,-32768,    17,-32768,    85,-32768,-32768,-32768,
-32768,  2482,  2482,   975,  1226,   503,  3888,  3888,  2482,  3888,
  1228,-32768,-32768,-32768,-32768,  3888,  1229,  1808,-32768,-32768,
   985,   987,   998,  1005,  4212,  4245,  5623,  5650,  5677,  5704,
-32768,  6109,  6109,-32768,-32768,  4769,    89,-32768,  1247,  1248,
  1230,-32768,  1249,  1034,-32768,   161,-32768,-32768,  1014,  1263,
   421,-32768,   427,  3888,  1271,-32768,-32768,  2127,-32768,   444,
-32768,  1270,-32768,   453,   457,   465,  1273,    73,-32768,-32768,
-32768,  1274,-32768,   172,   407,  1275,-32768,   215,-32768,  1276,
-32768,   818,  1279,-32768,-32768,  1024,-32768,-32768,-32768,-32768,
   596,   982,  5731,  1036,    73,   474,-32768,   479,   494,   500,
-32768,  1033,  1043,  1285,-32768,  1061,  3888,    41,-32768,-32768,
   235,-32768,-32768,    73,-32768,   201,   201,-32768,  6109,  6109,
-32768,  6109,-32768,  1288,  1288,  1288,  6109,-32768,  3722,  6109,
    73,-32768,  3888,  3722,-32768,  3888,  3888,-32768,-32768,-32768,
-32768,-32768,  1289,-32768,-32768,  1042,-32768,  1237,   227,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  5758,  1060,   350,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1067,-32768,  1068,  1078,  1079,  1080,  1082,-32768,  1316,  2127,
  2127,  2127,  2127,  1321,    98,  1325,  3555,  -159,  1091,  1091,
-32768,  1092,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1334,-32768,-32768,-32768,-32768,  1093,  1094,  1097,
  1098,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2421,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3888,-32768,
-32768,  3888,  1089,  1099,  1103,  1104,  1106,-32768,-32768,-32768,
  1109,  6109,-32768,   238,  1113,    53,  1112,-32768,-32768,-32768,
   512,-32768,   517,  4266,   537,  5785,  5812,-32768,  3888,-32768,
-32768,   899,    59,   296,-32768,-32768,-32768,  1115,  1102,  1115,
  2127,  1340,  1349,  1353,  1117,  1137,  1138,  1138,  1138,  1909,
-32768,-32768,-32768,-32768,-32768,   374,     4,  1116,-32768,  2127,
  2127,  2127,  2127,  2127,  2127,  2127,  2127,  2127,  2127,  2127,
  2127,  2127,  2127,  2127,  2127,  1380,  3888,  2069,-32768,  1145,
   394,   705,   305,    96,-32768,  3924,-32768,-32768,-32768,-32768,
  1305,    16,  -122,    74,  1149,  1152,  1154,  1155,  1157,  1159,
  1160,  1384,   158,   282,   301,  1156,  1161,  1165,  1166,  1167,
  1169,  1170,  1172,  1173,  1168,  1174,  1179,  1183,  1184,  1186,
  1187,  1189,  1222,  1188,-32768,-32768,-32768,-32768,-32768,   -40,
  4800,  4287,    73,  3722,  3722,  3722,  3722,   251,  1225,  1398,
-32768,-32768,   374,     3,    73,-32768,-32768,    73,  3888,-32768,
-32768,-32768,  4831,  1231,    85,    85,    85,    85,   105,   229,
    73,    73,  1224,  1405,  1413,   309,-32768,-32768,    80,  1423,
-32768,-32768,  1227,  1424,  1468,-32768,-32768,  1233,-32768,  1234,
  1148,  1232,  1238,  1236,-32768,  1241,-32768,-32768,  1235,-32768,
  2127,  3605,  3843,  2317,  2317,  2317,  1096,  1096,  1096,  1096,
   692,   692,  1138,  1138,  1138,  1138,  1138,-32768,-32768,-32768,
  1242,  3555,   259,  3671,-32768,  1474,    32,  1486,   374,-32768,
-32768,  1487,  1488,  1494,  1250,   985,   985,    85,    85,-32768,
-32768,  1496,    54,    55,-32768,-32768,  1509,   374,  1517,-32768,
-32768,  1518,  1520,  1521,    35,   374,  1523,  1526,  1528,    85,
  2482,-32768,-32768,-32768,  1414,  2291,  1074,   -38,  1527,   374,
    70,   201,  2482,   201,    83,  1539,-32768,-32768,-32768,   374,
  1538,    73,    73,  1544,  1547,  1551,  1552,  1555,  1560,  1561,
  1568,-32768,  3888,-32768,  3888,-32768,  3888,-32768,-32768,    85,
   201,  1569,  1572,  1573,  1574,  1577,  1578,   374,   374,  1579,
  1580,  1581,  1582,  1589,   374,  1590,   374,  1286,  1351,  1343,
   374,-32768,-32768,-32768,  3888,  1345,   561,   571,   573,   594,
  1593,   374,-32768,   756,-32768,  1346,-32768,  4308,-32768,  1352,
  1596,  1597,  1598,  1599,    73,  1600,    73,  1601,  1604,  1605,
   834,  1606,  1607,    73,  1608,  1609,  1610,  1145,-32768,  1614,
  1615,-32768,  1368,-32768,  2127,  1621,-32768,  1385,  1391,-32768,
-32768,  1716,-32768,-32768,  2127,  1386,   598,  1639,  1642,  1645,
   756,  1648,    76,  1406,  1652,  1651,  1653,  1655,  1656,  1658,
-32768,-32768,  1659,-32768,-32768,  1660,  1662,  1663,  1664,  1665,
  1667,  1668,  1669,  1670,  1671,  1672,   399,-32768,  1673,  1674,
  1675,  1677,-32768,  1688,  1690,  1691,  1450,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    85,  1692,-32768,-32768,  1451,-32768,
    85,-32768,-32768,  1454,  1708,  1709,-32768,-32768,-32768,  1713,
  1714,-32768,  1715,   756,  1718,  1719,  1721,-32768,  1724,-32768,
  1725,  1485,-32768,  1489,  1501,-32768,  1480,  1481,  1502,  1504,
  1505,  1506,  1507,  4329,   731,  4350,   884,  4371,   395,   460,
  1508,  1522,  1513,  1516,  1534,  1535,  1536,  1541,  1515,  1540,
  1542,  1545,  1546,  1549,  1550,  1553,  1554,  1529,    84,    84,
-32768,  1727,  4862,  1503,  1557,  1562,  1564,  1567,-32768,  1775,
-32768,    73,  3888,     3,-32768,-32768,-32768,-32768,  1563,-32768,
  1570,-32768,-32768,-32768,  1571,-32768,-32768,  1575,-32768,-32768,
-32768,  1786,   603,-32768,-32768,    85,  6136,  1576,-32768,  3888,
-32768,  1583,-32768,  3555,    85,-32768,-32768,-32768,-32768,  1795,
-32768,-32768,  1815,  1712,  1820,  1571,-32768,-32768,-32768,-32768,
-32768,   604,-32768,   618,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1611,  1616,-32768,-32768,-32768,
-32768,  1618,  1821,  1822,  1857,  1864,  1861,-32768,-32768,  1862,
-32768,  1868,  1874,   459,-32768,-32768,   625,-32768,-32768,-32768,
-32768,-32768,   633,-32768,-32768,  1880,  1635,  1884,    73,  1887,
  1888,  3888,  1889,    73,    85,  3888,  1644,    73,  3888,  3888,
    73,-32768,-32768,  3888,  1657,    73,  3888,  3888,  3888,  3888,
-32768,-32768,  3888,  3888,  3888,  1666,  3888,    73,-32768,-32768,
  3888,  3888,  1890,  1678,  1679,  3888,  3888,  1680,-32768,-32768,
    73,  1891,    73,  2482,  2482,  2482,  3888,  2482,  1892,  1898,
  1912,  1913,  3888,  1918,  1919,    85,  1923,  1922,-32768,-32768,
-32768,-32768,     8,-32768,  1681,  2482,  3722,  1684,  3722,  3722,
-32768,  1685,  4893,-32768,    73,    73,   834,    73,-32768,-32768,
-32768,  1682,-32768,-32768,  1710,  4392,-32768,  2127,  1711,-32768,
-32768,  1933,-32768,  1957,-32768,  1958,-32768,  1959,-32768,   374,
  1963,  1968,-32768,-32768,-32768,  1742,-32768,-32768,-32768,-32768,
-32768,-32768,  1115,  1115,  1115,    85,-32768,-32768,-32768,   374,
-32768,   374,-32768,-32768,-32768,  1749,  1743,  1744,  4413,  1746,
  1755,  1750,  4434,-32768,  1997,   936,  1035,  2000,  4455,-32768,
  2001,  1073,  1280,  1404,  1479,  4476,  1514,  1548,-32768,  1646,
  2003,  1676,  1741,  2010,-32768,-32768,  1788,  2458,-32768,   272,
-32768,  1767,  1781,  1782,  1768,  4497,  1776,-32768,-32768,  1778,
  1784,  5839,  1793,  1794,  1789,   637,-32768,   283,   330,  1783,
  1790,-32768,  3888,  1791,   659,  3888,   662,   664,-32768,-32768,
  1792,  1800,  1801,  1797,  1804,   688,-32768,  1806,  3888,  3555,
  1802,  2048,  1803,-32768,-32768,  1616,  1810,-32768,-32768,  2052,
-32768,-32768,  2053,  2055,  2057,  2058,-32768,-32768,  2483,  2060,
  2482,  3888,  2482,  2063,  2062,  2065,    73,  2600,-32768,-32768,
-32768,-32768,    73,  2664,-32768,-32768,-32768,-32768,-32768,    73,
-32768,-32768,  2717,-32768,-32768,-32768,-32768,-32768,  2781,  2897,
-32768,-32768,   674,  2064,  3888,    73,  2076,  2077,  3888,   201,
   201,  3888,  3888,  2078,  2079,  2081,   201,  2083,  1960,  2084,
  2299,-32768,  2086,-32768,-32768,  4924,  2482,  1840,  4955,  1841,
  1843,  1893,  2137,  2144,  2145,  2147,  2183,  3888,  3888,  3888,
  3888,  3888,-32768,-32768,  1941,  4986,-32768,  2085,  2190,  2191,
-32768,-32768,  1944,  1945,-32768,-32768,-32768,-32768,  2185,-32768,
  1954,  5866,  1948,  1949,-32768,  1962,  1950,-32768,  1951,-32768,
   332,-32768,-32768,-32768,-32768,-32768,-32768,  4518,   333,-32768,
-32768,  5893,  1967,  1993,  4539,  4560,-32768,-32768,-32768,   683,
-32768,   201,-32768,   201,  2482,-32768,-32768,  1565,  1955,-32768,
  1952,-32768,-32768,  1996,  3722,     3,-32768,-32768,-32768,-32768,
  2201,  2756,  3053,  3344,  3371,  3406,  3888,-32768,  2241,-32768,
-32768,-32768,  1115,  1998,  2243,  2245,  3888,  3888,  2246,    73,
  3888,  2004,  3888,    97,    73,  2247,    73,  2249,  2251,  2252,
  3888,  3888,  2253,    73,   685,-32768,-32768,  2256,  2257,  2262,
-32768,-32768,  2046,-32768,-32768,  2482,  3888,   691,  2039,-32768,
-32768,-32768,-32768,-32768,-32768,  5017,  2042,  2049,  2050,-32768,
-32768,-32768,  5920,  4581,-32768,  2059,  4602,-32768,  5947,  2295,
  2296,  3888,    73,  2303,    85,-32768,-32768,  2061,-32768,   360,
-32768,-32768,-32768,  5974,  6001,-32768,  2056,  2289,  2308,  2306,
  2309,  2314,    85,-32768,  2073,  4623,  2099,  3888,-32768,  2347,
  2348,  2349,  2961,  2351,  2482,  2106,  3888,  3014,  2107,  2354,
  2355,  3433,  2358,  2359,  2360,  2361,  2363,    73,  2123,  2126,
  2379,-32768,  2138,-32768,-32768,-32768,  2384,-32768,-32768,  3888,
  2146,  6028,-32768,-32768,-32768,-32768,-32768,  2143,-32768,  6055,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  2067,-32768,-32768,-32768,  2393,-32768,  2154,  5048,  3888,  2397,
  2344,  3888,  3078,  2153,  3194,  2402,  3258,  3311,-32768,  2403,
-32768,  4644,-32768,    85,  4665,-32768,-32768,-32768,-32768,  2413,
  2414,-32768,  3888,  2415,  3888,  3375,-32768,-32768,  4686,-32768,
  6082,-32768,  3888,  2294,  2418,  5079,  2422,-32768,-32768,   756,
  2423,  2174,-32768,  2431,  2433,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -303,-32768,-32768,  -256,  1382,-32768,-32768,
  1388,  -479,-32768,  -568,-32768,  -380,  -531,  -565,-32768,-32768,
-32768,-32768,  -315,-32768,  -595,-32768,  -983,-32768,  -448,-32768,
-32768,-32768,-32768,-32768,-32768,  1683,-32768,  1264,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1813,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   823,-32768,-32768,-32768,-32768,-32768,-32768,
  1543,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1085,  -749,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768, -1366,-32768,-32768,-32768,  1131,   971,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   757,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1894,-32768,
  1777,-32768,  2352,-32768,  1879,  2244,  -309,-32768,   335,    21,
   -35,-32768,-32768,   114,  -623,  -552,  -134,   -81,-32768,    -3,
   -72,   -77
};


#define	YYLAST		6384


static const short yytable[] = {    28,
   167,   683,   600,   650,   169,   333,     4,   334,     4,   523,
   877,  1264,  1610,   333,   662,   334,   532,    70,   466,   333,
     4,   334,   476,   227,   672,   732,   709,    85,   676,   118,
   174,   175,   680,  1150,   801,  1193,   638,   290,   309,  1233,
   705,  1199,    -2,   333,    80,   334,  1265,   554,    29,   712,
   713,   648,   427,    29,  1151,   291,   721,   982,  1221,  1224,
     4,    30,     4,   457,   458,   460,     5,     6,     5,     6,
  1266,   184,   467,   598,     4,   193,   199,   204,   209,   213,
   218,   108,  1372,    11,   227,    11,   228,     4,  1489,   227,
   916,   401,   917,   638,   227,   539,   539,   529,   595,   228,
   892,   347,   893,    28,   402,   185,   186,    28,    28,    28,
    28,    28,    28,   219,  1860,   403,   983,   224,   224,   233,
   171,    31,   120,  1611,  1112,   -64,  1009,   539,  1018,   172,
  1020,   192,   198,   203,   208,    29,   217,    39,  1010,   853,
  1234,   404,  1186,   579,   303,   405,   641,   228,   413,   294,
  1235,    59,   228,   -64,   414,   406,   228,   228,   295,   236,
   395,    60,   415,    29,    61,   589,   801,   801,   801,   801,
   540,   540,   176,    71,    72,    73,   304,    74,    62,   177,
  1077,  1861,   392,  1862,    71,    72,    73,  1649,    74,   372,
  1078,   375,  1079,    63,  1863,   164,   170,  1658,    64,   520,
   302,   480,   540,  1664,   484,    52,    53,  1864,   375,    54,
    55,   485,  1673,  1152,  1267,  1268,  1362,   553,  1679,  1680,
   394,    65,   639,  1865,   177,   339,   643,    71,    72,    73,
   409,    74,   221,   222,    66,   667,    67,   894,   235,    71,
    72,    73,   585,    74,   410,   590,    71,    72,    73,   485,
    74,   539,   485,   708,    69,   335,   524,   801,   336,  1402,
    29,  1612,  1110,   335,   533,    68,   336,    83,   229,   119,
   706,   459,   336,   263,   264,   265,   801,   801,   801,   801,
   801,   801,   801,   801,   801,   801,   801,   801,   801,   801,
   801,   801,     4,   514,   801,   292,   336,   649,     5,     6,
    71,    72,    73,   895,    74,   233,  1222,  1225,   181,   182,
   210,   211,  1011,    81,   407,    11,   233,   233,   233,   167,
  1113,   416,  1272,   169,    82,   233,   540,   581,   649,   229,
   856,   539,   440,   743,   229,  1278,   731,   426,   229,   229,
   710,   887,   888,   889,   890,   187,   188,    84,   896,  1080,
  1866,  1175,   813,   350,   351,   352,   353,   354,   355,   356,
   357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
   367,   368,   369,   370,   371,  1515,  1013,   572,     4,   843,
  1014,  1015,   376,   377,   378,   379,   380,   381,   382,   383,
   384,   385,   386,   387,   388,   389,   390,   391,   857,  1072,
   854,  1073,   535,   411,  1123,   393,   540,   801,    86,  1074,
  1124,     4,  1454,   750,   751,   862,   547,     5,     6,    71,
    72,    73,    56,    74,   815,   816,   557,   104,   640,   455,
   456,   561,  1021,   704,    11,   177,   284,   565,    87,   567,
   485,    88,   285,   569,   475,   696,   236,   698,   699,   700,
    29,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
  1041,  1042,  1043,  1044,  1045,  1046,  1047,   827,   828,  1052,
  1216,  1217,   397,     4,   225,  1177,    29,  1461,   339,   750,
   871,  1455,   -67,  1893,    89,   980,    90,   194,   513,   177,
  1056,  1898,   485,     5,     6,    71,    72,    73,  1161,    74,
  1057,  1058,  1059,    91,  1165,   485,  1204,    52,    53,   522,
    11,    54,    55,  1205,   164,   703,   531,   374,   375,  1684,
   167,   167,   818,   819,   820,   821,  1685,   167,  1125,    92,
  1700,  1456,    93,   718,  1126,  1543,  1544,  1701,  1242,   978,
   189,   190,   468,   469,   470,   471,  1462,  1127,   195,  1016,
  1276,  1457,  1458,  1128,  1641,  1184,  1642,  1345,  1075,    94,
     4,   472,  1953,   487,   375,  1955,     5,     6,    71,    72,
    73,   801,    74,  1545,   478,  1957,  1958,  1703,    29,  1812,
  1816,   801,  1202,    11,  1701,  1546,  1813,  1817,   649,  1463,
   592,   339,    29,   233,   861,   429,  1464,  1465,  1331,   865,
  1976,    95,   796,   625,   626,   430,    29,  1907,    71,    72,
    73,    96,    74,   418,  1908,   627,  1466,    97,  1114,  1467,
  1468,   431,   628,   629,   630,   432,     4,    98,   632,   633,
    99,   419,     5,     6,    71,    72,    73,   636,    74,   825,
   100,   420,   421,   858,   859,  1370,   835,  1060,  1459,    11,
   422,  1396,   423,   101,   802,    29,   102,  1156,   594,   177,
   822,    32,   103,    33,   375,   596,   752,   697,   375,  1166,
   117,    28,  1167,   754,   755,    34,    35,    36,    28,   756,
   757,  1373,   120,  1176,  1178,  1179,  1180,   121,   692,   693,
  1185,    37,  1833,  1833,   817,   824,   803,   804,   829,    71,
    72,    73,   834,    74,   339,   806,   807,   122,  1419,   808,
   809,    80,  1547,  1469,   123,   164,   164,   810,   811,   124,
   719,   720,   164,   722,    56,   179,   441,   844,   375,   727,
   447,   730,   845,   375,   716,   173,   196,   717,  1171,  1172,
  1173,  1174,   442,   281,   282,   283,  1357,   846,   375,   284,
   125,     4,  1187,   847,   375,   285,  1364,     5,     6,    71,
    72,    73,   443,    74,   433,   986,   375,   758,   220,   752,
   987,   988,   448,   234,    11,  1717,  1718,  1719,  1720,  1721,
  1722,   435,    75,    76,    77,    78,   802,   802,   802,   802,
   990,   375,   898,  1643,  1644,  1645,  1284,  1285,   237,  1062,
   424,  1063,  1064,  1065,  1066,  1067,  1068,  1069,   200,   201,
   238,  1218,  1219,   444,  1325,   375,   436,   293,  1848,   449,
   852,   450,     4,   437,  1326,   375,  1327,   375,     5,     6,
    71,    72,    73,  1241,    74,   239,   126,   127,     4,  1157,
  1158,  1159,  1160,   451,    38,    11,   864,  1328,   375,   866,
   867,  1366,   375,   240,  1504,  1510,  1511,  1525,   177,  1339,
   241,  1341,   134,   135,   136,   137,   138,  1437,  1348,   242,
  1438,  1527,   177,  1301,   205,   206,   243,   802,  1549,   177,
  1439,  1440,  1441,  1624,   244,   445,  1551,   177,   286,   452,
  1698,  1699,  1028,  1029,   801,   245,   802,   802,   802,   802,
   802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
   802,   802,  1708,   375,   802,  1710,   375,  1711,   375,  1207,
   287,  1593,  1594,  1595,   246,  1597,  1755,  1756,  1111,   911,
   912,   913,   914,   289,  1947,   915,  1823,  1824,  1878,  1879,
   438,  1723,  1660,  1614,  1887,   375,   725,   726,   247,    40,
   248,  1109,   971,    41,   249,   972,   250,   251,  1070,   252,
   253,   254,   255,   256,  1507,   257,   995,   996,   997,   998,
   999,  1000,  1001,  1002,  1003,   258,   259,  1004,   260,  1164,
   339,   261,   993,  1005,  1442,   262,   296,   297,   310,   839,
   316,   233,   233,   233,   233,  1524,  1006,   329,  1407,   214,
   215,  1526,   331,  1528,  1410,   233,   341,    42,   342,   167,
   348,   349,   396,    43,   454,   400,  1502,   461,   462,   463,
  1445,   167,   464,  1446,   465,   477,    44,   802,    45,  1275,
  1049,  1277,   481,  1447,  1448,   483,  1550,  1449,  1450,   489,
    46,  1661,  1552,   488,    47,   512,   279,   280,   281,   282,
   283,   517,   519,  1849,   284,  1211,    48,   525,  1302,   526,
   285,   530,   534,   537,   233,   233,   536,   538,   543,  1630,
   832,   833,   544,   545,  1228,    49,   546,   548,   549,  1666,
   550,   298,  1236,  1238,   551,   552,   233,     5,     6,    71,
    72,    73,   555,    74,   556,   558,  1271,  1274,  1741,  1512,
  1743,  1280,  1168,   559,    11,   560,  1282,   562,  1519,   564,
   566,   568,   570,  1556,   571,   573,   578,   580,  1561,   582,
   583,   584,  1565,   586,   587,  1568,   233,    50,   593,    51,
  1571,   588,   601,   624,  1309,  1310,   597,  1451,   299,   631,
   634,  1316,  1581,  1318,   635,   642,   645,  1322,  1776,   647,
   652,   654,  1007,   655,  1781,  1590,   656,  1592,  1330,   270,
   271,   272,   273,   274,   659,   275,   276,   277,   278,   661,
   663,   279,   280,   281,   282,   283,   668,   669,  1562,   284,
   670,   671,   679,   673,   677,   285,   681,   684,   685,  1622,
  1623,   802,  1625,  1248,  1249,  1250,  1251,  1252,  1253,  1254,
  1261,   802,   687,   688,   164,   270,   271,   272,   273,   274,
   689,   275,   276,   277,   278,   690,   164,   279,   280,   281,
   282,   283,  1827,   694,   695,   284,   701,   714,   707,  1605,
   715,   285,   723,   728,   746,   840,  1294,   731,  1296,   733,
  1298,   319,   320,   321,   322,   323,   324,   325,   326,   327,
   734,   233,   735,   744,   745,   747,   748,   233,   270,   271,
   272,   273,   274,   524,   275,   276,   277,   278,  1323,   753,
   279,   280,   281,   282,   283,   759,   805,   837,   284,   812,
   814,   826,   831,  1885,   285,   836,  1667,   848,   842,  1646,
   849,   850,   851,   860,   869,   868,   270,   271,   272,   273,
   274,   870,   275,   276,   277,   278,  1839,   876,   279,   280,
   281,   282,   283,   878,   880,  1890,   284,    71,    72,    73,
   886,    74,   285,   891,   881,   882,   883,  1262,   884,   897,
   339,   909,   910,   911,   912,   913,   914,   918,  -662,   915,
   925,  1747,  1928,   973,  1022,   927,   928,  1749,  1019,   929,
   930,   974,   233,  1023,  1751,   975,   976,  1024,   977,   979,
   981,   233,  1615,  1025,  1617,  1618,   985,   796,  1026,  1030,
  1759,   899,   900,   901,   902,   903,   904,   905,   906,   907,
   908,   915,  1048,   909,   910,   911,   912,   913,   914,  1099,
  1122,   915,   167,   167,   167,  1115,   167,  1054,  1116,  1100,
  1117,  1118,  1195,  1119,  1163,  1120,  1121,  1130,  1129,  1182,
  1668,  1131,  1132,  1133,   167,  1134,  1135,  1183,  1136,  1137,
  1138,   126,   127,   128,  1991,  1140,  1139,  1188,  1190,  1141,
  1142,   233,  1143,  1144,  1147,  1101,  1102,  1103,  1104,  1105,
  1106,  1145,   130,   131,   132,   133,  1503,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,  1191,  1516,  1146,  1162,  1181,  1170,  1208,  1189,
  1192,  1194,   233,  1198,  1197,  1669,  1196,  1200,  1201,  1203,
   982,  1212,  1213,  1244,  1856,  1245,  1246,  1247,  1214,  1868,
  1220,  1870,  1215,   270,   271,   272,   273,   274,  1877,   275,
   276,   277,   278,  1227,   802,   279,   280,   281,   282,   283,
  1671,  1229,  1230,   284,  1231,  1232,  1637,  1237,  1239,   285,
  1240,  1270,  1319,  1248,  1249,  1250,  1251,  1252,  1253,  1254,
  1255,  1256,   233,  1281,  1283,  1559,  1647,  1903,  1648,  1563,
  1286,  1287,  1566,  1567,  1672,  1288,  1289,  1569,  1107,  1290,
  1572,  1573,  1574,  1575,  1291,  1292,  1576,  1577,  1578,   167,
  1580,   167,  1293,  1303,  1582,  1583,  1304,  1305,  1306,  1587,
  1588,  1307,  1308,  1311,  1312,  1313,  1314,   164,   164,   164,
  1596,   164,  1941,  1315,  1317,  1321,  1602,  1320,  1324,  1329,
  1332,  1334,  1335,  1336,  1337,  1338,  1340,  1342,  1905,   164,
  1343,  1344,  1346,  1347,  1349,  1350,  1351,  1763,  1764,   167,
  1354,  1355,  1356,  1358,  1770,   167,  1917,   270,   271,   272,
   273,   274,  1365,   275,   276,   277,   278,  1360,  1361,   279,
   280,   281,   282,   283,  1828,  1367,  1829,   284,  1368,  1830,
  1838,  1369,  1674,   285,  1371,   160,  1376,  1377,  1374,  1378,
   161,  1379,  1380,   162,  1381,  1383,  1385,  1257,  1386,  1387,
  1388,  1389,   346,  1390,  1391,  1392,  1393,  1394,  1395,  1398,
  1399,  1400,  1676,  1401,  1248,  1249,  1250,  1251,  1252,  1253,
  1254,  1831,  1403,   167,  1404,  1405,  1406,  1409,  1408,  1825,
  1411,  1826,   270,   271,   272,   273,   274,  1974,   275,   276,
   277,   278,  1412,  1413,   279,   280,   281,   282,   283,  1415,
  1416,  1418,   284,  1363,  1420,  1421,  1706,  1422,   285,  1709,
  1424,  1425,  1426,  1494,  1429,  1430,  1427,   270,   271,   272,
   273,   274,  1726,   275,   276,   277,   278,  1677,  1428,   279,
   280,   281,   282,   283,   167,  1496,  1431,   284,  1432,  1433,
  1434,  1435,  1471,   285,   164,  1742,   164,  1473,  1479,  1472,
  1474,   270,   271,   272,   273,   274,  1488,   275,   276,   277,
   278,  1501,   339,   279,   280,   281,   282,   283,  1475,  1476,
  1477,   284,  1509,  1480,  1681,  1478,  1481,   285,  1758,  1482,
  1483,  1520,  1762,  1484,  1485,  1765,  1766,  1486,  1487,  1497,
   126,   127,     4,   167,   164,  1498,  1499,  1505,  1832,  1500,
   164,  1521,  1522,  1514,  1506,   177,  1523,  1533,  1534,  1508,
  1517,  1792,  1793,  1794,  1795,  1796,   134,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   233,  1530,  1535,  1529,  1532,  1536,  1537,  1539,   270,
   271,   272,   273,   274,  1541,   275,   276,   277,   278,   233,
  1542,   279,   280,   281,   282,   283,  1553,  1554,   164,   284,
  1555,  1557,  1558,  1560,  1584,   285,  1564,  1591,  1598,   270,
   271,   272,   273,   274,  1599,   275,   276,   277,   278,  1570,
  1846,   279,   280,   281,   282,   283,  1600,  1601,  1579,   284,
  1853,  1854,  1603,  1604,  1857,   285,  1859,  1606,  1607,  1627,
  1585,  1586,  1589,  1613,  1874,  1875,  1616,  1632,  1619,   899,
   900,   901,   902,   903,   904,   905,   906,   907,   908,   164,
  1886,   909,   910,   911,   912,   913,   914,  1628,  1631,   915,
   233,  1633,  1634,  1635,   270,   271,   272,   273,   274,  1638,
   275,   276,   277,   278,  1639,  1902,   279,   280,   281,   282,
   283,   272,   273,   274,   284,   275,   276,   277,   278,  1640,
   285,   279,   280,   281,   282,   283,  1650,  1651,  1652,   284,
  1654,  1922,  1655,  1659,  1656,   285,  1662,  1665,   164,  1675,
  1930,   270,   271,   272,   273,   274,  1678,   275,   276,   277,
   278,  1686,  1689,   279,   280,   281,   282,   283,  1687,  1688,
  1691,   284,  1692,  1948,  1828,  1704,  1829,   285,  1693,  1830,
  1695,  1696,  1705,  1697,   160,  1707,  1712,  1713,  1714,   161,
  1715,  1716,   162,  1725,  1728,  1727,  1729,  1731,  1732,  1735,
   729,  1736,  1962,  1737,  1738,  1965,  1740,  1744,  1745,  1746,
  1757,   126,   127,   760,  1248,  1249,  1250,  1251,  1252,  1253,
  1254,  1831,  1760,  1761,  1767,  1768,  1979,  1769,  1981,  1771,
  1773,  1772,  1777,  1782,  1784,  1785,  1986,   134,   135,   136,
   137,   138,   761,   762,   763,   764,   765,   766,   767,   768,
   769,   770,   771,   772,   773,   774,   775,   776,   777,   778,
   779,   780,   781,   782,   783,   784,   785,   786,   787,   126,
   127,   760,   899,   900,   901,   902,   903,   904,   905,   906,
   907,   908,  1786,  1787,   909,   910,   911,   912,   913,   914,
  1788,  1789,   915,  1790,  1027,   134,   135,   136,   137,   138,
   761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
   771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
   781,   782,   783,   784,   785,   786,   787,  1791,   788,   126,
   127,   528,   129,  1797,  1799,    54,  1800,  1801,  1802,  1803,
  1804,  1805,  1807,  1808,  1810,  1811,  1836,  1840,  1835,  1809,
   130,   131,   132,   133,  1819,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
  1820,   126,   127,   128,   129,  1847,   788,    54,  1837,  1851,
  1850,  1852,  1855,  1869,   228,  1871,  1858,  1872,  1873,  1876,
  1880,  1881,   130,   131,   132,   133,  1882,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,  1884,  1888,   649,  1912,  1891,  1892,   789,  1900,
  1901,   126,   127,   128,   790,   791,  1896,  1904,  1906,  1911,
   792,  1913,  1914,   793,  1956,  1915,  1050,  1051,   794,   795,
  1916,   796,   130,   131,   132,   133,  1919,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,  1921,  1923,  1924,  1925,   789,  1927,  1929,  1932,
  1933,  1934,   790,   791,  1936,  1937,  1938,  1939,   792,  1940,
  1244,   793,  1245,  1246,  1247,  1942,   794,   795,  1943,   796,
   270,   271,   272,   273,   274,  1944,   275,   276,   277,   278,
  1946,  1945,   279,   280,   281,   282,   283,  1952,  1949,  1959,
   284,  1960,   318,  1963,  1964,  1967,   285,   159,  1969,  1972,
  1248,  1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1977,
  1978,  1980,  1987,   160,  1988,   932,  1990,  1993,   161,  1992,
  1995,   162,  1996,    71,    72,   933,   229,    74,  1209,   163,
   270,   271,   272,   273,   274,  1210,   275,   276,   277,   278,
  1492,  1352,   279,   280,   281,   282,   283,   749,  1730,   159,
   284,  1779,  1609,   686,  1682,   702,   285,   838,     0,   332,
  1096,   490,     0,   226,     0,   160,     0,     0,     0,     0,
   161,     0,   920,   162,   126,   127,   128,   932,     0,     0,
     0,   163,     0,     0,     0,    71,    72,   933,     0,    74,
     0,  1774,     0,     0,  1775,   130,   131,   132,   133,     0,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   160,     0,     0,     0,     0,
   161,     0,     0,   162,  1260,     0,   905,   906,   907,   908,
     0,   163,   909,   910,   911,   912,   913,   914,     0,   934,
   915,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     0,     0,     0,   944,     0,     0,   945,     0,     0,   946,
     0,     0,   947,     0,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     0,     0,     0,   964,   932,     0,     0,     0,   965,     0,
     0,   966,    71,    72,   933,     0,    74,     0,     0,     0,
     0,   934,     0,   935,   936,   937,   938,   939,   940,   941,
   942,   943,     0,     0,     0,   944,     0,     0,   945,     0,
     0,   946,     0,     0,   947,     0,   948,   949,   950,   951,
   952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
   962,   963,     0,     0,     0,   964,     0,     0,   932,     0,
   965,     0,     0,   966,   967,     0,    71,    72,   933,     0,
    74,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,   273,
   274,   284,   275,   276,   277,   278,     0,   285,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,   160,     0,
     0,   932,   285,   161,     0,     0,   162,     0,     0,    71,
    72,   933,     0,    74,   163,     0,  1739,     0,   934,     0,
   935,   936,   937,   938,   939,   940,   941,   942,   943,     0,
     0,     0,   944,     0,     0,   945,     0,     0,   946,     0,
     0,   947,  1841,   948,   949,   950,   951,   952,   953,   954,
   955,   956,   957,   958,   959,   960,   961,   962,   963,     0,
     0,     0,   964,     0,     0,   932,     0,   965,     0,     0,
   966,     0,     0,    71,    72,   933,     0,    74,     0,     0,
     0,     0,   934,     0,   935,   936,   937,   938,   939,   940,
   941,   942,   943,     0,     0,     0,   944,     0,     0,   945,
     0,     0,   946,     0,     0,   947,     0,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,     0,     0,     0,   964,     0,     0,     0,
     0,   965,     0,  1748,   966,   934,     0,   935,   936,   937,
   938,   939,   940,   941,   942,   943,     0,     0,     0,   944,
     0,     0,   945,     0,     0,   946,     0,     0,   947,     0,
   948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
   958,   959,   960,   961,   962,   963,     0,     0,     0,   964,
     0,   932,     0,     0,   965,     0,     0,   966,     0,    71,
    72,   933,     0,    74,     0,     0,     0,  1750,     0,   934,
     0,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     0,     0,     0,   944,     0,     0,   945,     0,     0,   946,
     0,     0,   947,     0,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     0,     0,     0,   964,     0,   932,     0,     0,   965,     0,
  1752,   966,     0,    71,    72,   933,     0,    74,     0,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   275,   276,   277,   278,     0,   285,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   932,     0,
   285,     0,     0,     0,     0,     0,    71,    72,   933,     0,
    74,     0,     0,     0,  1753,   934,     0,   935,   936,   937,
   938,   939,   940,   941,   942,   943,     0,     0,     0,   944,
     0,     0,   945,     0,     0,   946,     0,     0,   947,  1842,
   948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
   958,   959,   960,   961,   962,   963,     0,     0,     0,   964,
     0,     0,   932,     0,   965,     0,     0,   966,     0,     0,
    71,    72,   933,     0,    74,     0,     0,     0,     0,   934,
     0,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     0,     0,     0,   944,     0,     0,   945,     0,     0,   946,
     0,     0,   947,     0,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     0,     0,     0,   964,     0,     0,     0,     0,   965,     0,
  1754,   966,   934,     0,   935,   936,   937,   938,   939,   940,
   941,   942,   943,     0,     0,     0,   944,     0,     0,   945,
     0,     0,   946,     0,     0,   947,     0,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,     0,     0,     0,   964,     0,   932,     0,
     0,   965,     0,     0,   966,     0,    71,    72,   933,     0,
    74,     0,     0,     0,  1926,     0,   934,     0,   935,   936,
   937,   938,   939,   940,   941,   942,   943,     0,     0,     0,
   944,     0,     0,   945,     0,     0,   946,     0,     0,   947,
     0,   948,   949,   950,   951,   952,   953,   954,   955,   956,
   957,   958,   959,   960,   961,   962,   963,     0,     0,     0,
   964,     0,   932,     0,     0,   965,     0,  1931,   966,     0,
    71,    72,   933,     0,    74,     0,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
     0,     0,   285,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   932,     0,     0,     0,     0,
     0,     0,     0,    71,    72,   933,     0,    74,     0,     0,
     0,  1966,   934,     0,   935,   936,   937,   938,   939,   940,
   941,   942,   943,     0,     0,     0,   944,     0,     0,   945,
  1843,     0,   946,     0,     0,   947,     0,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,     0,     0,     0,   964,  1844,     0,   932,
     0,   965,     0,     0,   966,     0,     0,    71,    72,   933,
     0,    74,     0,     0,     0,     0,   934,     0,   935,   936,
   937,   938,   939,   940,   941,   942,   943,     0,     0,     0,
   944,     0,  1845,   945,     0,     0,   946,     0,     0,   947,
     0,   948,   949,   950,   951,   952,   953,   954,   955,   956,
   957,   958,   959,   960,   961,   962,   963,     0,     0,  1935,
   964,     0,     0,     0,     0,   965,     0,  1968,   966,   934,
     0,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     0,     0,     0,   944,     0,     0,   945,     0,     0,   946,
     0,     0,   947,     0,   948,   949,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     0,     0,     0,   964,     0,     0,     0,     0,   965,     0,
     0,   966,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1970,     0,   934,     0,   935,   936,   937,   938,   939,
   940,   941,   942,   943,     0,     0,     0,   944,     0,     0,
   945,     0,     0,   946,     0,     0,   947,     0,   948,   949,
   950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
   960,   961,   962,   963,     0,     0,     0,   964,     0,     0,
     0,     0,   965,     0,  1971,   966,     0,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,     0,     0,
   285,     0,     0,     0,     0,     0,     0,     0,  1982,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,   126,   127,   128,   284,     0,     0,     0,
     0,     0,   285,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   130,   131,   132,   133,     0,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   126,   127,   128,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1206,     0,
     0,     0,     0,     0,     0,   130,   131,   132,   133,     0,
   134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   126,   127,     4,   899,   900,
   901,   902,   903,   904,   905,   906,   907,   908,     0,     0,
   909,   910,   911,   912,   913,   914,     0,     0,   915,     0,
     0,   134,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   126,   127,     4,   521,
   901,   902,   903,   904,   905,   906,   907,   908,     0,     0,
   909,   910,   911,   912,   913,   914,     0,     0,   915,     0,
     0,     0,   134,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   576,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   126,   127,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   160,     0,     0,
     0,     0,   161,     0,     0,   162,   134,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   591,   127,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   160,     0,
     0,     0,     0,   161,     0,     0,   162,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   269,   474,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1082,   602,  1083,  1084,     0,  1085,   160,
     0,     0,     0,   317,   161,     0,     0,   162,  1086,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   515,  1087,  1088,  1089,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1090,     0,     0,     0,     0,   516,     0,     0,     0,     0,
   160,     0,     0,   603,     0,   161,     0,     0,   162,   902,
   903,   904,   905,   906,   907,   908,   575,     0,   909,   910,
   911,   912,   913,   914,     0,     0,   915,     0,     0,     0,
     0,     0,   604,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,  1091,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,   577,     0,     0,     0,   285,
     0,     0,   605,     0,   160,     0,     0,     0,     0,   161,
     0,     0,   162,   606,   607,   608,   609,   610,   611,   612,
   613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
   623,     0,     0,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
  1092,     0,     0,   284,     0,   160,     0,  1093,     0,   285,
   161,     0,     0,   162,   491,     0,     0,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,   502,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     4,
     0,     0,   284,     0,     0,     5,     6,     0,   285,     0,
     0,     0,     0,     7,     8,     9,    10,   270,   271,   272,
   273,   274,    11,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,   509,     0,
   279,   280,   281,   282,   283,    12,     0,     0,   284,     0,
     0,    13,     0,     0,   285,     0,     0,     0,     0,   510,
     0,     0,     0,     0,    14,     0,    15,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
     0,     0,    17,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,    18,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,     0,     0,   285,
     0,     0,     0,    19,   511,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,     0,
     0,   285,     0,     0,     0,     0,   736,     0,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,    20,     0,    21,   284,   270,
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
   276,   277,   278,  1821,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
   275,   276,   277,   278,  1822,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
   285,   275,   276,   277,   278,  1895,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
   274,   285,   275,   276,   277,   278,  1897,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
   273,   274,   285,   275,   276,   277,   278,  1920,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
   272,   273,   274,   285,   275,   276,   277,   278,  1973,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
   271,   272,   273,   274,   285,   275,   276,   277,   278,  1975,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
   270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
  1983,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
   288,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
     0,   345,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
     0,     0,   742,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,     0,     0,   285,
     0,     0,     0,  1154,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,     0,     0,
   285,     0,     0,     0,  1169,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,     0,
     0,   285,     0,     0,     0,  1495,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
     0,     0,   285,     0,     0,     0,  1620,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,     0,     0,   285,     0,     0,     0,  1780,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,     0,     0,   285,     0,     0,     0,  1783,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,     0,     0,   285,     0,     0,     0,  1798,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
  1889,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
     0,  1961,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
     0,     0,  1989,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,   373,     0,     0,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,   492,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   493,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   494,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   495,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   496,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   497,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,   498,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,   499,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
   500,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,   501,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,   503,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   504,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,   505,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   506,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   507,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   508,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,   518,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,   644,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
   738,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,   739,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,   740,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,   741,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,   841,     0,     0,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,   875,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,   991,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,   992,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,  1694,     0,   285,   270,
   271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
     0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     0,     0,     0,  1806,     0,   285,   270,   271,   272,   273,
   274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
   281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
  1818,     0,   285,   270,   271,   272,   273,   274,     0,   275,
   276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
     0,     0,     0,   284,     0,     0,     0,  1894,     0,   285,
   270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
     0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
   284,     0,     0,     0,  1899,     0,   285,   270,   271,   272,
   273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
   280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
     0,  1909,     0,   285,   270,   271,   272,   273,   274,     0,
   275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
   283,     0,     0,     0,   284,     0,     0,     0,  1910,     0,
   285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
   278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
     0,   284,     0,     0,     0,  1950,     0,   285,   270,   271,
   272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
   279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
     0,     0,  1954,     0,   285,   270,   271,   272,   273,   274,
     0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
   282,   283,     0,     0,     0,   284,     0,     0,     0,  1985,
     0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
   277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
     0,     0,   284,     0,     0,     0,     0,     0,   285,   899,
   900,   901,   902,   903,   904,   905,   906,   907,   908,     0,
     0,   909,   910,   911,   912,   913,   914,     0,     0,   915,
     0,     0,     0,  1513
};

static const short yycheck[] = {     3,
    82,   567,   482,   535,    82,     3,     5,     5,     5,     3,
   760,  1097,     5,     3,   546,     5,     5,    21,   328,     3,
     5,     5,   332,     5,   556,   621,   595,    31,   560,     5,
   103,   104,   564,    74,   658,  1019,     5,   172,   247,     5,
     7,  1025,     0,     3,    24,     5,    85,   428,   257,   602,
   603,     7,   309,   257,    95,     7,   609,     5,     5,     5,
     5,   245,     5,   320,   321,   322,    11,    12,    11,    12,
   109,   107,   329,    63,     5,   111,   112,   113,   114,   115,
   116,    61,     7,    28,     5,    28,    68,     5,     5,     5,
   250,   223,   252,     5,     5,    23,    23,   401,   479,    68,
     3,   236,     5,   107,   236,   253,   254,   111,   112,   113,
   114,   115,   116,   117,    18,   247,    64,   121,   122,   123,
   246,   245,   245,   116,   247,   247,    68,    23,   878,   255,
   880,   111,   112,   113,   114,   257,   116,     7,    80,   708,
   106,    81,    63,   459,   180,    85,   527,    68,    81,   246,
   116,   247,    68,   247,    87,    95,    68,    68,   255,   253,
   295,   253,    95,   257,   253,   475,   790,   791,   792,   793,
    98,    98,   248,    13,    14,    15,   180,    17,   253,   255,
    85,    85,   246,    87,    13,    14,    15,  1554,    17,   262,
    95,   255,    97,   253,    98,    82,    83,  1564,   253,   246,
   180,   336,    98,  1570,   248,     5,     6,   111,   255,     9,
    10,   255,  1579,   254,   253,   254,  1200,   248,  1585,  1586,
   293,   253,   526,   127,   255,   229,   530,    13,    14,    15,
    81,    17,   119,   120,   253,   551,   253,   140,   125,    13,
    14,    15,   248,    17,    95,   248,    13,    14,    15,   255,
    17,    23,   255,   237,   253,   253,   250,   881,   256,  1243,
   257,   254,   247,   253,   253,   253,   256,   253,   250,   245,
   237,   253,   256,   160,   161,   162,   900,   901,   902,   903,
   904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
   914,   915,     5,   375,   918,   247,   256,   253,    11,    12,
    13,    14,    15,   206,    17,   309,   253,   253,   253,   254,
   253,   254,   254,   257,   254,    28,   320,   321,   322,   401,
   247,   254,   253,   401,   223,   329,    98,   462,   253,   250,
   711,    23,   312,   637,   250,   253,   253,   248,   250,   250,
   597,   790,   791,   792,   793,   253,   254,     6,   251,   254,
   254,   247,   668,   240,   241,   242,   243,   244,   245,   246,
   247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
   257,   258,   259,   260,   261,  1359,    81,   450,     5,   695,
    85,    86,   269,   270,   271,   272,   273,   274,   275,   276,
   277,   278,   279,   280,   281,   282,   283,   284,   714,    95,
   710,    97,   406,   254,   247,   292,    98,  1031,     7,   105,
   253,     5,    18,   253,   254,   731,   420,    11,    12,    13,
    14,    15,   222,    17,   253,   254,   430,   245,   248,   316,
   317,   435,   881,   248,    28,   255,   244,   441,     7,   443,
   255,     7,   250,   447,   331,   580,   253,   582,   583,   584,
   257,   900,   901,   902,   903,   904,   905,   906,   907,   908,
   909,   910,   911,   912,   913,   914,   915,   253,   254,   918,
  1066,  1067,   253,     5,     6,   247,   257,    18,   482,   253,
   254,    87,   248,  1850,     7,   248,     7,     5,   375,   255,
    97,  1858,   255,    11,    12,    13,    14,    15,   248,    17,
   107,   108,   109,     7,   984,   255,   248,     5,     6,   396,
    28,     9,    10,   255,   401,   588,   403,   254,   255,   248,
   602,   603,   116,   117,   118,   119,   255,   609,   247,     7,
   248,   137,     7,   606,   253,    77,    78,   255,  1091,   849,
   253,   254,   236,   237,   238,   239,    87,   247,    66,   254,
  1103,   157,   158,   253,  1538,   247,  1540,  1181,   254,     7,
     5,   255,  1929,   254,   255,  1932,    11,    12,    13,    14,
    15,  1195,    17,   115,   253,  1942,  1943,   248,   257,   248,
   248,  1205,  1031,    28,   255,   127,   255,   255,   253,   130,
   477,   595,   257,   597,   729,    85,   137,   138,  1164,   734,
  1967,     7,   253,   490,   491,    95,   257,   248,    13,    14,
    15,     7,    17,    67,   255,   502,   157,     7,   934,   160,
   161,   111,   509,   510,   511,   115,     5,     7,   515,   516,
     7,    85,    11,    12,    13,    14,    15,   524,    17,   675,
     7,    95,    96,   716,   717,  1211,   682,   254,   254,    28,
   104,   253,   106,     7,   658,   257,     7,   973,   254,   255,
   254,     5,   247,     7,   255,   256,   646,   254,   255,   985,
   185,   675,   988,   253,   254,    19,    20,    21,   682,   253,
   254,  1213,   245,   999,  1000,  1001,  1002,   247,   575,   576,
  1006,    35,  1778,  1779,   674,   675,   253,   254,   678,    13,
    14,    15,   682,    17,   708,   253,   254,   247,  1274,   253,
   254,   691,   254,   254,   247,   602,   603,   253,   254,   247,
   607,   608,   609,   610,   222,   254,    95,   254,   255,   616,
    95,   618,   254,   255,   232,   246,   254,   235,   995,   996,
   997,   998,   111,   238,   239,   240,  1195,   254,   255,   244,
   253,     5,  1009,   254,   255,   250,  1205,    11,    12,    13,
    14,    15,   131,    17,   254,   254,   255,   654,   127,   749,
   254,   255,   137,     6,    28,    88,    89,    90,    91,    92,
    93,    95,   187,   188,   189,   190,   790,   791,   792,   793,
   254,   255,   796,  1543,  1544,  1545,  1112,  1113,     7,    95,
   254,    97,    98,    99,   100,   101,   102,   103,   253,   254,
   247,  1068,  1069,   182,   254,   255,   130,   255,  1802,   184,
   707,   186,     5,   137,   254,   255,   254,   255,    11,    12,
    13,    14,    15,  1090,    17,   247,     3,     4,     5,   974,
   975,   976,   977,   208,   188,    28,   733,   254,   255,   736,
   737,   254,   255,   247,  1334,   253,   254,   254,   255,  1175,
   247,  1177,    29,    30,    31,    32,    33,   137,  1184,   247,
   140,   254,   255,  1130,   253,   254,   247,   881,   254,   255,
   150,   151,   152,  1507,   247,   254,   254,   255,     7,   254,
   254,   255,   896,   897,  1518,   247,   900,   901,   902,   903,
   904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
   914,   915,   254,   255,   918,   254,   255,   254,   255,  1054,
     7,  1474,  1475,  1476,   247,  1478,   253,   254,   932,   238,
   239,   240,   241,     7,  1918,   244,   254,   255,   254,   255,
   254,   254,     7,  1496,   254,   255,   612,   613,   247,     3,
   247,   931,   839,     7,   247,   842,   247,   247,   254,   247,
   247,   247,   247,   247,  1345,   247,    68,    69,    70,    71,
    72,    73,    74,    75,    76,   247,   247,    79,   247,   983,
   984,   247,   869,    85,   254,   247,     7,     5,   247,     8,
   253,   995,   996,   997,   998,  1376,    98,   247,  1255,   253,
   254,  1382,   255,  1384,  1261,  1009,   247,    61,   253,  1091,
     5,     5,   223,    67,   253,   247,  1332,   253,   253,   253,
   137,  1103,   253,   140,   253,     8,    80,  1031,    82,  1102,
   917,  1104,   255,   150,   151,   254,  1417,   154,   155,   255,
    94,     7,  1423,   248,    98,   248,   236,   237,   238,   239,
   240,     7,   248,  1803,   244,  1059,   110,   223,  1131,   223,
   250,   223,     5,     5,  1068,  1069,   253,   253,     5,  1518,
   253,   254,   253,     5,  1078,   129,     5,   253,   253,     7,
   253,     5,  1086,  1087,   223,   248,  1090,    11,    12,    13,
    14,    15,     5,    17,     5,   253,  1100,  1101,  1651,  1356,
  1653,  1105,   989,   253,    28,     5,  1110,   253,  1365,     5,
   253,     5,   253,  1429,     5,     5,   202,   253,  1434,   253,
   253,   253,  1438,   248,     5,  1441,  1130,   181,   254,   183,
  1446,   247,     7,     5,  1138,  1139,   127,   254,    62,     7,
     7,  1145,  1458,  1147,   254,     7,   253,  1151,  1701,     7,
     7,   247,   254,   247,  1707,  1471,     7,  1473,  1162,   224,
   225,   226,   227,   228,     7,   230,   231,   232,   233,     7,
     7,   236,   237,   238,   239,   240,   223,     7,  1435,   244,
     5,     7,   253,     7,     7,   250,     7,     7,     7,  1505,
  1506,  1195,  1508,   120,   121,   122,   123,   124,   125,   126,
   127,  1205,     7,     7,  1091,   224,   225,   226,   227,   228,
     7,   230,   231,   232,   233,   254,  1103,   236,   237,   238,
   239,   240,  1775,     5,   255,   244,     7,   253,     8,  1486,
     5,   250,     5,     5,     5,   254,  1123,   253,  1125,   253,
  1127,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   253,  1255,   248,     7,     7,     7,   223,  1261,   224,   225,
   226,   227,   228,   250,   230,   231,   232,   233,  1155,     7,
   236,   237,   238,   239,   240,     5,     7,   254,   244,     7,
     7,     7,     7,  1836,   250,     7,     7,   255,   253,  1546,
   248,     7,   232,     6,   253,     7,   224,   225,   226,   227,
   228,    65,   230,   231,   232,   233,  1786,   248,   236,   237,
   238,   239,   240,   247,   247,  1847,   244,    13,    14,    15,
     5,    17,   250,     3,   247,   247,   247,   254,   247,     5,
  1334,   236,   237,   238,   239,   240,   241,   247,   247,   244,
     7,  1657,  1895,   255,     5,   253,   253,  1663,   247,   253,
   253,   253,  1356,     5,  1670,   253,   253,     5,   253,   251,
   248,  1365,  1497,   247,  1499,  1500,   255,   253,   232,   254,
  1686,   224,   225,   226,   227,   228,   229,   230,   231,   232,
   233,   244,     3,   236,   237,   238,   239,   240,   241,    85,
     7,   244,  1474,  1475,  1476,   247,  1478,   253,   247,    95,
   247,   247,   255,   247,     7,   247,   247,   247,   253,     5,
     7,   247,   247,   247,  1496,   247,   247,     5,   247,   247,
   253,     3,     4,     5,  1990,   247,   253,     5,     5,   247,
   247,  1435,   247,   247,   247,   131,   132,   133,   134,   135,
   136,   253,    24,    25,    26,    27,  1333,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,     5,  1360,   253,   251,   253,   247,     5,   253,
   248,   248,  1486,   248,   247,     7,   255,   247,   254,   248,
     5,     5,     5,    80,  1810,    82,    83,    84,     5,  1815,
     5,  1817,   253,   224,   225,   226,   227,   228,  1824,   230,
   231,   232,   233,     5,  1518,   236,   237,   238,   239,   240,
     7,     5,     5,   244,     5,     5,  1530,     5,     3,   250,
     3,     5,   247,   120,   121,   122,   123,   124,   125,   126,
   127,   128,  1546,     5,     7,  1432,  1550,  1863,  1552,  1436,
     7,     5,  1439,  1440,     7,     5,     5,  1444,   254,     5,
  1447,  1448,  1449,  1450,     5,     5,  1453,  1454,  1455,  1651,
  1457,  1653,     5,     5,  1461,  1462,     5,     5,     5,  1466,
  1467,     5,     5,     5,     5,     5,     5,  1474,  1475,  1476,
  1477,  1478,  1908,     5,     5,   253,  1483,   247,   254,     7,
   255,   250,     7,     7,     7,     7,     7,     7,  1865,  1496,
     7,     7,     7,     7,     7,     7,     7,  1690,  1691,  1701,
     7,     7,   255,     3,  1697,  1707,  1883,   224,   225,   226,
   227,   228,   247,   230,   231,   232,   233,   253,   248,   236,
   237,   238,   239,   240,    80,     7,    82,   244,     7,    85,
  1785,     7,     7,   250,     7,   237,     5,     7,   253,     7,
   242,     7,     7,   245,     7,     7,     7,   254,     7,     7,
     7,     7,   254,     7,     7,     7,     7,     7,     7,     7,
     7,     7,     7,     7,   120,   121,   122,   123,   124,   125,
   126,   127,     5,  1775,     5,     5,   247,   247,     7,  1772,
   247,  1774,   224,   225,   226,   227,   228,  1964,   230,   231,
   232,   233,     5,     5,   236,   237,   238,   239,   240,     7,
     7,     7,   244,     8,     7,     7,  1613,     7,   250,  1616,
     7,     7,   248,     7,   255,   255,   248,   224,   225,   226,
   227,   228,  1629,   230,   231,   232,   233,     7,   248,   236,
   237,   238,   239,   240,  1836,   253,   255,   244,   255,   255,
   255,   255,   255,   250,  1651,  1652,  1653,   255,   254,   248,
   255,   224,   225,   226,   227,   228,   248,   230,   231,   232,
   233,     7,  1786,   236,   237,   238,   239,   240,   255,   255,
   255,   244,     7,   254,     7,   255,   255,   250,  1685,   255,
   255,     7,  1689,   255,   255,  1692,  1693,   255,   255,   253,
     3,     4,     5,  1895,  1701,   254,   253,   255,   254,   253,
  1707,     7,   111,   248,   255,   255,     7,     7,     7,   255,
   248,  1718,  1719,  1720,  1721,  1722,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,  1865,   247,     7,   254,   248,     3,     7,     7,   224,
   225,   226,   227,   228,     7,   230,   231,   232,   233,  1883,
     7,   236,   237,   238,   239,   240,     7,   253,  1775,   244,
     7,     5,     5,     5,     5,   250,   253,     7,     7,   224,
   225,   226,   227,   228,     7,   230,   231,   232,   233,   253,
  1797,   236,   237,   238,   239,   240,     5,     5,   253,   244,
  1807,  1808,     5,     5,  1811,   250,  1813,     5,     7,   248,
   253,   253,   253,   253,  1821,  1822,   253,     5,   254,   224,
   225,   226,   227,   228,   229,   230,   231,   232,   233,  1836,
  1837,   236,   237,   238,   239,   240,   241,   248,   248,   244,
  1964,     5,     5,     5,   224,   225,   226,   227,   228,     7,
   230,   231,   232,   233,     7,  1862,   236,   237,   238,   239,
   240,   226,   227,   228,   244,   230,   231,   232,   233,   248,
   250,   236,   237,   238,   239,   240,   248,   255,   255,   244,
   255,  1888,   248,     7,   255,   250,     7,     7,  1895,     7,
  1897,   224,   225,   226,   227,   228,     7,   230,   231,   232,
   233,   255,   255,   236,   237,   238,   239,   240,   248,   248,
   255,   244,   255,  1920,    80,   253,    82,   250,   255,    85,
   248,   248,   253,   255,   237,   255,   255,   248,   248,   242,
   254,   248,   245,   248,     7,   254,   254,   248,     7,     7,
   253,     7,  1949,     7,     7,  1952,     7,     5,     7,     5,
     7,     3,     4,     5,   120,   121,   122,   123,   124,   125,
   126,   127,     7,     7,     7,     7,  1973,     7,  1975,     7,
     7,   132,     7,   254,   254,   253,  1983,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,     3,
     4,     5,   224,   225,   226,   227,   228,   229,   230,   231,
   232,   233,   250,     7,   236,   237,   238,   239,   240,   241,
     7,     7,   244,     7,   246,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,     5,   120,     3,
     4,     5,     6,   253,   110,     9,     7,     7,   255,   255,
    16,   248,   255,   255,   255,   255,   255,     7,   254,   248,
    24,    25,    26,    27,   248,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   248,     3,     4,     5,     6,     5,   120,     9,   253,     7,
   253,     7,     7,     7,    68,     7,   253,     7,     7,     7,
     5,     5,    24,    25,    26,    27,     5,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,   247,   255,   253,     7,   248,   248,   230,     5,
     5,     3,     4,     5,   236,   237,   248,     5,   248,   254,
   242,     4,     7,   245,   248,     7,   248,   249,   250,   251,
     7,   253,    24,    25,    26,    27,   254,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,   254,     7,     7,     7,   230,     7,   253,   253,
     7,     7,   236,   237,     7,     7,     7,     7,   242,     7,
    80,   245,    82,    83,    84,   253,   250,   251,   253,   253,
   224,   225,   226,   227,   228,     7,   230,   231,   232,   233,
     7,   254,   236,   237,   238,   239,   240,   255,   253,     7,
   244,   248,   246,     7,    61,   253,   250,   221,     7,     7,
   120,   121,   122,   123,   124,   125,   126,   127,   128,     7,
     7,     7,   129,   237,     7,     5,     5,   254,   242,     7,
     0,   245,     0,    13,    14,    15,   250,    17,  1057,   253,
   224,   225,   226,   227,   228,  1058,   230,   231,   232,   233,
  1320,  1188,   236,   237,   238,   239,   240,   645,  1636,   221,
   244,  1705,  1492,   570,     7,   587,   250,   691,    -1,   226,
   928,   255,    -1,   122,    -1,   237,    -1,    -1,    -1,    -1,
   242,    -1,   800,   245,     3,     4,     5,     5,    -1,    -1,
    -1,   253,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
    -1,   203,    -1,    -1,   206,    24,    25,    26,    27,    -1,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,   237,    -1,    -1,    -1,    -1,
   242,    -1,    -1,   245,   254,    -1,   230,   231,   232,   233,
    -1,   253,   236,   237,   238,   239,   240,   241,    -1,   139,
   244,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
    -1,    -1,    -1,   183,     5,    -1,    -1,    -1,   188,    -1,
    -1,   191,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    -1,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,
    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,    -1,    -1,    -1,   183,    -1,    -1,     5,    -1,
   188,    -1,    -1,   191,   254,    -1,    13,    14,    15,    -1,
    17,   224,   225,   226,   227,   228,    -1,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,   227,
   228,   244,   230,   231,   232,   233,    -1,   250,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,   237,    -1,
    -1,     5,   250,   242,    -1,    -1,   245,    -1,    -1,    13,
    14,    15,    -1,    17,   253,    -1,   254,    -1,   139,    -1,
   141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,    -1,
    -1,   162,     7,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,    -1,
    -1,    -1,   183,    -1,    -1,     5,    -1,   188,    -1,    -1,
   191,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,    -1,   139,    -1,   141,   142,   143,   144,   145,   146,
   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,
    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,
    -1,   188,    -1,   254,   191,   139,    -1,   141,   142,   143,
   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,
    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,
    -1,     5,    -1,    -1,   188,    -1,    -1,   191,    -1,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,   254,    -1,   139,
    -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
    -1,    -1,    -1,   183,    -1,     5,    -1,    -1,   188,    -1,
   254,   191,    -1,    13,    14,    15,    -1,    17,    -1,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
   230,   231,   232,   233,    -1,   250,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,     5,    -1,
   250,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,   254,   139,    -1,   141,   142,   143,
   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,
    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,     7,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,
    -1,    -1,     5,    -1,   188,    -1,    -1,   191,    -1,    -1,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,   139,
    -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   188,    -1,
   254,   191,   139,    -1,   141,   142,   143,   144,   145,   146,
   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,
    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,    -1,   183,    -1,     5,    -1,
    -1,   188,    -1,    -1,   191,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,   254,    -1,   139,    -1,   141,   142,
   143,   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,
   153,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,
    -1,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,
   183,    -1,     5,    -1,    -1,   188,    -1,   254,   191,    -1,
    13,    14,    15,    -1,    17,    -1,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,
    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,   254,   139,    -1,   141,   142,   143,   144,   145,   146,
   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,
     7,    -1,   159,    -1,    -1,   162,    -1,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,    -1,    -1,    -1,   183,     7,    -1,     5,
    -1,   188,    -1,    -1,   191,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    -1,    -1,   139,    -1,   141,   142,
   143,   144,   145,   146,   147,   148,   149,    -1,    -1,    -1,
   153,    -1,     7,   156,    -1,    -1,   159,    -1,    -1,   162,
    -1,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,    -1,    -1,     7,
   183,    -1,    -1,    -1,    -1,   188,    -1,   254,   191,   139,
    -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,   159,
    -1,    -1,   162,    -1,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   188,    -1,
    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   254,    -1,   139,    -1,   141,   142,   143,   144,   145,
   146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,
   156,    -1,    -1,   159,    -1,    -1,   162,    -1,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,
    -1,    -1,   188,    -1,   254,   191,    -1,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,    -1,    -1,   250,   224,   225,   226,   227,   228,    -1,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,
   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,   224,
   225,   226,   227,   228,    -1,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
    -1,    -1,    -1,    -1,    -1,   250,   224,   225,   226,   227,
   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,
   238,   239,   240,     3,     4,     5,   244,    -1,    -1,    -1,
    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    24,    25,    26,    27,    -1,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,     3,     4,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    -1,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,     3,     4,     5,   224,   225,
   226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,   241,    -1,    -1,   244,    -1,
    -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,     3,     4,     5,     6,
   226,   227,   228,   229,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,   241,    -1,    -1,   244,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,     8,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,    -1,
    -1,    -1,   242,    -1,    -1,   245,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,
    -1,    -1,    -1,   242,    -1,    -1,   245,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,     8,   221,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    80,    74,    82,    83,    -1,    85,   237,
    -1,    -1,    -1,     8,   242,    -1,    -1,   245,    95,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     8,   112,   113,   114,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   127,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
   237,    -1,    -1,   133,    -1,   242,    -1,    -1,   245,   227,
   228,   229,   230,   231,   232,   233,     8,    -1,   236,   237,
   238,   239,   240,   241,    -1,    -1,   244,    -1,    -1,    -1,
    -1,    -1,   162,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,   180,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,   246,    -1,    -1,    -1,   250,
    -1,    -1,   192,    -1,   237,    -1,    -1,    -1,    -1,   242,
    -1,    -1,   245,   203,   204,   205,   206,   207,   208,   209,
   210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
   220,    -1,    -1,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
   247,    -1,    -1,   244,    -1,   237,    -1,   254,    -1,   250,
   242,    -1,    -1,   245,   255,    -1,    -1,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,
   226,   227,   228,   250,   230,   231,   232,   233,   255,    -1,
   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,
   225,   226,   227,   228,   250,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,   244,
   224,   225,   226,   227,   228,   250,   230,   231,   232,   233,
    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,    -1,
   244,   224,   225,   226,   227,   228,   250,   230,   231,   232,
   233,    -1,    -1,   236,   237,   238,   239,   240,    -1,    -1,
    -1,   244,   224,   225,   226,   227,   228,   250,   230,   231,
   232,   233,    -1,    -1,   236,   237,   238,   239,   240,     5,
    -1,    -1,   244,    -1,    -1,    11,    12,    -1,   250,    -1,
    -1,    -1,    -1,    19,    20,    21,    22,   224,   225,   226,
   227,   228,    28,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,   224,   225,
   226,   227,   228,   250,   230,   231,   232,   233,   255,    -1,
   236,   237,   238,   239,   240,    61,    -1,    -1,   244,    -1,
    -1,    67,    -1,    -1,   250,    -1,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
    -1,    -1,    98,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,   110,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   250,
    -1,    -1,    -1,   129,   255,   224,   225,   226,   227,   228,
    -1,   230,   231,   232,   233,    -1,    -1,   236,   237,   238,
   239,   240,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,   224,   225,
   226,   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,
   236,   237,   238,   239,   240,   181,    -1,   183,   244,   224,
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
    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   250,    -1,
    -1,    -1,   254,   224,   225,   226,   227,   228,    -1,   230,
   231,   232,   233,    -1,    -1,   236,   237,   238,   239,   240,
    -1,    -1,    -1,   244,    -1,   246,    -1,    -1,    -1,   250,
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
   244,    -1,    -1,    -1,   248,    -1,   250,   224,   225,   226,
   227,   228,    -1,   230,   231,   232,   233,    -1,    -1,   236,
   237,   238,   239,   240,    -1,    -1,    -1,   244,    -1,    -1,
    -1,   248,    -1,   250,   224,   225,   226,   227,   228,    -1,
   230,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
   240,    -1,    -1,    -1,   244,    -1,   246,    -1,    -1,    -1,
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
    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,   250,   224,
   225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
    -1,   236,   237,   238,   239,   240,   241,    -1,    -1,   244,
    -1,    -1,    -1,   248
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
#line 4781 "GetDP.y"
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
#line 4801 "GetDP.y"
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
#line 4822 "GetDP.y"
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
#line 4834 "GetDP.y"
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
#line 4854 "GetDP.y"
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
#line 4871 "GetDP.y"
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
#line 4890 "GetDP.y"
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
case 438:
#line 4912 "GetDP.y"
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
case 439:
#line 4946 "GetDP.y"
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
case 440:
#line 4959 "GetDP.y"
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
case 441:
#line 4973 "GetDP.y"
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
case 442:
#line 4986 "GetDP.y"
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
case 443:
#line 4998 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 445:
#line 5007 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 447:
#line 5016 "GetDP.y"
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
case 448:
#line 5027 "GetDP.y"
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
case 449:
#line 5039 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 450:
#line 5049 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 451:
#line 5057 "GetDP.y"
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
case 452:
#line 5070 "GetDP.y"
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
case 453:
#line 5083 "GetDP.y"
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
case 454:
#line 5097 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 455:
#line 5107 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 456:
#line 5117 "GetDP.y"
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
case 457:
#line 5131 "GetDP.y"
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
case 458:
#line 5145 "GetDP.y"
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
case 459:
#line 5164 "GetDP.y"
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
case 460:
#line 5182 "GetDP.y"
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
case 461:
#line 5193 "GetDP.y"
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
case 462:
#line 5208 "GetDP.y"
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
case 463:
#line 5223 "GetDP.y"
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
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 465:
#line 5253 "GetDP.y"
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
case 466:
#line 5268 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 467:
#line 5279 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 468:
#line 5284 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 469:
#line 5294 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 471:
#line 5304 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 472:
#line 5307 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 473:
#line 5317 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 474:
#line 5333 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 476:
#line 5349 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 477:
#line 5353 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5357 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 479:
#line 5361 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 480:
#line 5366 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 481:
#line 5377 "GetDP.y"
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
case 483:
#line 5394 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 484:
#line 5398 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 485:
#line 5402 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 486:
#line 5406 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5410 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5415 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 489:
#line 5426 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 491:
#line 5441 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 492:
#line 5445 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 493:
#line 5449 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 494:
#line 5453 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 5457 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 496:
#line 5468 "GetDP.y"
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
case 498:
#line 5486 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 499:
#line 5490 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 500:
#line 5494 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 501:
#line 5498 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 5503 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 503:
#line 5513 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 504:
#line 5519 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 505:
#line 5525 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 506:
#line 5535 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 507:
#line 5538 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 508:
#line 5543 "GetDP.y"
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
case 510:
#line 5561 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 511:
#line 5571 "GetDP.y"
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
case 512:
#line 5600 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 513:
#line 5603 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 514:
#line 5606 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 515:
#line 5614 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 516:
#line 5631 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 518:
#line 5643 "GetDP.y"
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
case 520:
#line 5666 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 522:
#line 5680 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 523:
#line 5687 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 524:
#line 5695 "GetDP.y"
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
case 525:
#line 5741 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 526:
#line 5746 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 527:
#line 5752 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 528:
#line 5755 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 529:
#line 5758 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5760 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 531:
#line 5766 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 533:
#line 5777 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 534:
#line 5780 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 535:
#line 5786 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 536:
#line 5791 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 537:
#line 5797 "GetDP.y"
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
case 538:
#line 5811 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 540:
#line 5825 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 541:
#line 5832 "GetDP.y"
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
case 542:
#line 5860 "GetDP.y"
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
case 543:
#line 5870 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 544:
#line 5871 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 545:
#line 5877 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 546:
#line 5886 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 547:
#line 5903 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 549:
#line 5915 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 552:
#line 5924 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 554:
#line 5936 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 555:
#line 5943 "GetDP.y"
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
case 556:
#line 5955 "GetDP.y"
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
case 557:
#line 5966 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 558:
#line 5971 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 559:
#line 5977 "GetDP.y"
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
case 560:
#line 5994 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 561:
#line 6004 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 562:
#line 6007 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 563:
#line 6011 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 564:
#line 6024 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 565:
#line 6028 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 566:
#line 6034 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 567:
#line 6040 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 568:
#line 6046 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 569:
#line 6053 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 570:
#line 6058 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 571:
#line 6063 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 572:
#line 6068 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 573:
#line 6077 "GetDP.y"
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
case 574:
#line 6089 "GetDP.y"
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
case 575:
#line 6112 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 576:
#line 6113 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 577:
#line 6114 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 578:
#line 6115 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 579:
#line 6121 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 580:
#line 6123 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 581:
#line 6129 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 582:
#line 6135 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 583:
#line 6142 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 584:
#line 6151 "GetDP.y"
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
case 585:
#line 6173 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6181 "GetDP.y"
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
case 587:
#line 6192 "GetDP.y"
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
case 588:
#line 6206 "GetDP.y"
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
case 589:
#line 6227 "GetDP.y"
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
case 590:
#line 6254 "GetDP.y"
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
case 591:
#line 6285 "GetDP.y"
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
case 592:
#line 6305 "GetDP.y"
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
case 594:
#line 6334 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 595:
#line 6341 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 596:
#line 6348 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 597:
#line 6355 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 598:
#line 6359 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 599:
#line 6363 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 600:
#line 6367 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 6371 "GetDP.y"
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
case 602:
#line 6381 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 603:
#line 6386 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 604:
#line 6391 "GetDP.y"
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
case 605:
#line 6411 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 606:
#line 6418 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 607:
#line 6427 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 608:
#line 6436 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 609:
#line 6445 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 610:
#line 6452 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 611:
#line 6460 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 612:
#line 6464 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 613:
#line 6473 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 614:
#line 6477 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 615:
#line 6481 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 616:
#line 6489 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 617:
#line 6495 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 618:
#line 6500 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 619:
#line 6507 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", 
		 List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 620:
#line 6522 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 621:
#line 6528 "GetDP.y"
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
case 622:
#line 6578 "GetDP.y"
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
case 623:
#line 6588 "GetDP.y"
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
case 624:
#line 6598 "GetDP.y"
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
case 625:
#line 6612 "GetDP.y"
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
case 626:
#line 6626 "GetDP.y"
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
case 627:
#line 6652 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 628:
#line 6656 "GetDP.y"
{
    ;
    break;}
case 630:
#line 6672 "GetDP.y"
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
case 631:
#line 6687 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 632:
#line 6693 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 633:
#line 6699 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 634:
#line 6705 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 635:
#line 6710 "GetDP.y"
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
case 636:
#line 6722 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 637:
#line 6732 "GetDP.y"
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
case 639:
#line 6751 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6757 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6763 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6774 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 643:
#line 6775 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 644:
#line 6776 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 645:
#line 6777 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 646:
#line 6778 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 647:
#line 6779 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 648:
#line 6780 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 649:
#line 6781 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 650:
#line 6782 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 651:
#line 6783 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 652:
#line 6784 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 653:
#line 6785 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 654:
#line 6786 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 655:
#line 6787 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 656:
#line 6788 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 657:
#line 6789 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 658:
#line 6790 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 659:
#line 6791 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 660:
#line 6792 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 661:
#line 6793 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 662:
#line 6794 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 663:
#line 6798 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 664:
#line 6799 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 665:
#line 6800 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 666:
#line 6801 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 667:
#line 6802 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 668:
#line 6803 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 669:
#line 6804 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 670:
#line 6805 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 671:
#line 6806 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 672:
#line 6807 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 673:
#line 6808 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 674:
#line 6809 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 675:
#line 6810 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 676:
#line 6811 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 677:
#line 6812 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 678:
#line 6813 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 679:
#line 6814 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 680:
#line 6815 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 681:
#line 6816 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 682:
#line 6817 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 683:
#line 6818 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 684:
#line 6819 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 685:
#line 6820 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 686:
#line 6821 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 687:
#line 6822 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 688:
#line 6823 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 689:
#line 6824 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 690:
#line 6825 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 691:
#line 6826 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 692:
#line 6827 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 693:
#line 6828 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6829 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 695:
#line 6830 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6831 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 697:
#line 6832 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6833 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 699:
#line 6834 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 700:
#line 6835 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 701:
#line 6836 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 702:
#line 6837 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 703:
#line 6842 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 704:
#line 6843 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 705:
#line 6844 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 706:
#line 6845 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 707:
#line 6846 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 708:
#line 6847 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 709:
#line 6848 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 710:
#line 6867 "GetDP.y"
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
case 711:
#line 6885 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 712:
#line 6888 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 713:
#line 6894 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 714:
#line 6897 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 715:
#line 6904 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 716:
#line 6910 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 717:
#line 6913 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 718:
#line 6916 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 719:
#line 6928 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 720:
#line 6934 "GetDP.y"
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
case 721:
#line 6945 "GetDP.y"
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
case 722:
#line 6961 "GetDP.y"
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
case 723:
#line 6983 "GetDP.y"
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
case 724:
#line 6998 "GetDP.y"
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
case 725:
#line 7036 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 726:
#line 7044 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 727:
#line 7056 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 728:
#line 7064 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 729:
#line 7076 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 730:
#line 7078 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 731:
#line 7085 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 732:
#line 7088 "GetDP.y"
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
case 733:
#line 7103 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 734:
#line 7108 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 735:
#line 7113 "GetDP.y"
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
case 736:
#line 7132 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 737:
#line 7150 "GetDP.y"
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
#line 7161 "GetDP.y"



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

