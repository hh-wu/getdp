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
# define	tSprintf	264
# define	tPrintf	265
# define	tRead	266
# define	tFor	267
# define	tEndFor	268
# define	tIf	269
# define	tElse	270
# define	tEndIf	271
# define	tFlag	272
# define	tHelp	273
# define	tCpu	274
# define	tCheck	275
# define	tInclude	276
# define	tConstant	277
# define	tList	278
# define	tListAlt	279
# define	tLinSpace	280
# define	tLogSpace	281
# define	tDefineConstant	282
# define	tPi	283
# define	t0D	284
# define	t1D	285
# define	t2D	286
# define	t3D	287
# define	tExp	288
# define	tLog	289
# define	tLog10	290
# define	tSqrt	291
# define	tSin	292
# define	tAsin	293
# define	tCos	294
# define	tAcos	295
# define	tTan	296
# define	tAtan	297
# define	tAtan2	298
# define	tSinh	299
# define	tCosh	300
# define	tTanh	301
# define	tFabs	302
# define	tFloor	303
# define	tCeil	304
# define	tFmod	305
# define	tModulo	306
# define	tHypot	307
# define	tSolidAngle	308
# define	tTrace	309
# define	tOrder	310
# define	tCrossProduct	311
# define	tDofValue	312
# define	tMHTransform	313
# define	tMHJacNL	314
# define	tGroup	315
# define	tDefineGroup	316
# define	tAll	317
# define	tInSupport	318
# define	tMovingBand2D	319
# define	tDefineFunction	320
# define	tConstraint	321
# define	tRegion	322
# define	tSubRegion	323
# define	tRegionRef	324
# define	tSubRegionRef	325
# define	tFilter	326
# define	tCoefficient	327
# define	tValue	328
# define	tTimeFunction	329
# define	tBranch	330
# define	tNode	331
# define	tLoop	332
# define	tNameOfResolution	333
# define	tJacobian	334
# define	tCase	335
# define	tIntegration	336
# define	tFMMIntegration	337
# define	tMatrix	338
# define	tType	339
# define	tSubType	340
# define	tCriterion	341
# define	tGeoElement	342
# define	tNumberOfPoints	343
# define	tMaxNumberOfPoints	344
# define	tNumberOfDivisions	345
# define	tMaxNumberOfDivisions	346
# define	tStoppingCriterion	347
# define	tFunctionSpace	348
# define	tName	349
# define	tBasisFunction	350
# define	tNameOfCoef	351
# define	tFunction	352
# define	tdFunction	353
# define	tSubFunction	354
# define	tSubdFunction	355
# define	tSupport	356
# define	tEntity	357
# define	tSubSpace	358
# define	tNameOfBasisFunction	359
# define	tGlobalQuantity	360
# define	tEntityType	361
# define	tEntitySubType	362
# define	tNameOfConstraint	363
# define	tFormulation	364
# define	tQuantity	365
# define	tNameOfSpace	366
# define	tIndexOfSystem	367
# define	tSymmetry	368
# define	tEquation	369
# define	tGalerkin	370
# define	tdeRham	371
# define	tGlobalTerm	372
# define	tGlobalEquation	373
# define	tDt	374
# define	tDtDof	375
# define	tDtDt	376
# define	tDtDtDof	377
# define	tJacNL	378
# define	tNeverDt	379
# define	tDtNL	380
# define	tIn	381
# define	tFull_Matrix	382
# define	tResolution	383
# define	tDefineSystem	384
# define	tNameOfFormulation	385
# define	tNameOfMesh	386
# define	tFrequency	387
# define	tSolver	388
# define	tOriginSystem	389
# define	tDestinationSystem	390
# define	tOperation	391
# define	tOperationEnd	392
# define	tSetTime	393
# define	tDTime	394
# define	tSetFrequency	395
# define	tFourierTransform	396
# define	tFourierTransformJ	397
# define	tLanczos	398
# define	tPerturbation	399
# define	tUpdate	400
# define	tUpdateConstraint	401
# define	tBreak	402
# define	tTimeLoopTheta	403
# define	tTime0	404
# define	tTimeMax	405
# define	tTheta	406
# define	tTimeLoopNewmark	407
# define	tBeta	408
# define	tGamma	409
# define	tIterativeLoop	410
# define	tNbrMaxIteration	411
# define	tRelaxationFactor	412
# define	tIterativeTimeReduction	413
# define	tDivisionCoefficient	414
# define	tChangeOfState	415
# define	tChangeOfCoordinates	416
# define	tChangeOfCoordinates2	417
# define	tSystemCommand	418
# define	tGenerateFMMGroups	419
# define	tGenerateOnly	420
# define	tGenerateOnlyJac	421
# define	tSolveJac_AdaptRelax	422
# define	tSaveSolutionExtendedMH	423
# define	tSaveSolutionMHtoTime	424
# define	tInit_MovingBand2D	425
# define	tMesh_MovingBand2D	426
# define	tGenerate_MH_Moving	427
# define	tGenerate_MH_Moving_Separate	428
# define	tAdd_MH_Moving	429
# define	tGenerateGroup	430
# define	tGenerateJacGroup	431
# define	tSaveMesh	432
# define	tDeformeMesh	433
# define	tDummyFrequency	434
# define	tPostProcessing	435
# define	tNameOfSystem	436
# define	tPostOperation	437
# define	tNameOfPostProcessing	438
# define	tUsingPost	439
# define	tAppend	440
# define	tPlot	441
# define	tPrint	442
# define	tPrintGroup	443
# define	tEcho	444
# define	tWrite	445
# define	tAdapt	446
# define	tOnGlobal	447
# define	tOnRegion	448
# define	tOnElementsOf	449
# define	tOnGrid	450
# define	tOnSection	451
# define	tOnPoint	452
# define	tOnLine	453
# define	tOnPlane	454
# define	tOnBox	455
# define	tWithArgument	456
# define	tFile	457
# define	tDepth	458
# define	tDimension	459
# define	tTimeStep	460
# define	tHarmonicToTime	461
# define	tFormat	462
# define	tHeader	463
# define	tFooter	464
# define	tSkin	465
# define	tSmoothing	466
# define	tTarget	467
# define	tSort	468
# define	tIso	469
# define	tNoNewLine	470
# define	tDecomposeInSimplex	471
# define	tChangeOfValues	472
# define	tFrequencyLegend	473
# define	tStr	474
# define	tDate	475
# define	tDEF	476
# define	tOR	477
# define	tAND	478
# define	tEQUAL	479
# define	tNOTEQUAL	480
# define	tAPPROXEQUAL	481
# define	tLESSOREQUAL	482
# define	tGREATEROREQUAL	483
# define	tLESSLESS	484
# define	tGREATERGREATER	485
# define	tCROSSPRODUCT	486
# define	UNARYPREC	487
# define	tSHOW	488

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.64 2004-01-19 18:16:44 gyselinc Exp $ */
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



#line 216 "GetDP.y"
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



#define	YYFINAL		2000
#define	YYFLAG		-32768
#define	YYNTBASE	257

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 488 ? yytranslate[x] : 451)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   241,     2,   249,   250,   239,     2,     2,
     244,   245,   237,   235,   254,   236,   248,   238,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     229,     2,   231,   223,   255,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   246,     2,   247,   243,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   252,     2,   253,   256,     2,     2,     2,
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
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   224,   225,   226,
     227,   228,   230,   232,   233,   234,   240,   242,   251
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     1,     4,     5,     6,    10,    15,    20,    25,
      30,    35,    40,    45,    50,    55,    60,    62,    64,    67,
      69,    72,    76,    80,    84,    88,    92,    96,    99,   102,
     106,   110,   114,   118,   122,   126,   130,   134,   138,   142,
     146,   147,   150,   151,   152,   156,   161,   167,   168,   175,
     181,   183,   189,   191,   193,   194,   195,   214,   215,   216,
     224,   227,   229,   232,   234,   236,   238,   240,   241,   245,
     250,   252,   254,   258,   259,   263,   268,   270,   274,   278,
     284,   286,   290,   291,   295,   302,   303,   305,   310,   311,
     314,   318,   319,   322,   328,   335,   343,   345,   347,   348,
     352,   357,   362,   363,   366,   367,   371,   373,   377,   378,
     381,   383,   384,   385,   393,   397,   401,   408,   412,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   452,   456,
     460,   464,   467,   470,   473,   477,   479,   483,   486,   488,
     491,   492,   498,   499,   511,   521,   526,   531,   532,   540,
     547,   550,   553,   556,   559,   563,   566,   570,   574,   581,
     585,   588,   592,   594,   598,   599,   603,   610,   611,   616,
     617,   620,   624,   629,   630,   635,   636,   639,   643,   647,
     652,   653,   658,   659,   662,   666,   670,   675,   676,   681,
     682,   685,   689,   693,   698,   699,   704,   705,   708,   712,
     716,   720,   724,   728,   732,   733,   735,   738,   742,   744,
     745,   748,   752,   757,   761,   766,   772,   773,   778,   781,
     782,   785,   789,   793,   797,   801,   805,   809,   817,   821,
     825,   829,   833,   837,   845,   853,   861,   862,   865,   869,
     871,   873,   874,   877,   881,   886,   890,   895,   900,   905,
     910,   911,   916,   917,   920,   924,   928,   933,   938,   946,
     950,   954,   958,   962,   963,   964,   965,   984,   985,   990,
     991,   994,   998,  1002,  1006,  1008,  1012,  1013,  1017,  1019,
    1023,  1024,  1028,  1029,  1034,  1035,  1038,  1042,  1046,  1050,
    1051,  1056,  1057,  1060,  1064,  1068,  1072,  1077,  1078,  1081,
    1085,  1087,  1089,  1090,  1093,  1097,  1102,  1106,  1111,  1116,
    1117,  1122,  1125,  1126,  1129,  1133,  1137,  1141,  1145,  1149,
    1150,  1156,  1157,  1165,  1169,  1170,  1176,  1180,  1184,  1188,
    1192,  1196,  1197,  1201,  1202,  1205,  1208,  1211,  1216,  1221,
    1226,  1231,  1232,  1235,  1239,  1243,  1247,  1248,  1251,  1255,
    1259,  1263,  1267,  1268,  1271,  1272,  1273,  1283,  1287,  1291,
    1295,  1298,  1302,  1308,  1309,  1312,  1316,  1317,  1318,  1328,
    1329,  1331,  1333,  1335,  1337,  1339,  1341,  1343,  1348,  1352,
    1353,  1356,  1360,  1362,  1364,  1365,  1368,  1372,  1377,  1382,
    1383,  1389,  1391,  1392,  1397,  1400,  1401,  1404,  1408,  1412,
    1416,  1420,  1424,  1428,  1432,  1436,  1438,  1441,  1445,  1446,
    1450,  1452,  1456,  1457,  1461,  1462,  1465,  1469,  1473,  1478,
    1483,  1488,  1493,  1499,  1505,  1508,  1516,  1528,  1536,  1550,
    1562,  1570,  1578,  1586,  1596,  1606,  1616,  1628,  1646,  1660,
    1676,  1688,  1702,  1703,  1711,  1712,  1720,  1728,  1740,  1741,
    1756,  1762,  1768,  1778,  1788,  1798,  1804,  1810,  1822,  1832,
    1847,  1862,  1870,  1883,  1894,  1902,  1910,  1918,  1920,  1922,
    1924,  1925,  1928,  1932,  1936,  1939,  1940,  1943,  1947,  1951,
    1955,  1959,  1964,  1965,  1968,  1972,  1976,  1980,  1984,  1988,
    1993,  1994,  1997,  2001,  2005,  2009,  2013,  2018,  2019,  2022,
    2026,  2030,  2034,  2038,  2042,  2047,  2052,  2057,  2058,  2063,
    2064,  2067,  2071,  2075,  2079,  2083,  2087,  2091,  2092,  2095,
    2099,  2101,  2102,  2105,  2109,  2114,  2119,  2123,  2128,  2129,
    2134,  2137,  2140,  2141,  2144,  2148,  2153,  2154,  2160,  2166,
    2167,  2170,  2171,  2178,  2182,  2183,  2188,  2192,  2196,  2197,
    2200,  2204,  2206,  2208,  2209,  2212,  2216,  2220,  2224,  2228,
    2233,  2234,  2243,  2244,  2245,  2249,  2257,  2265,  2278,  2287,
    2299,  2300,  2311,  2313,  2320,  2324,  2331,  2333,  2335,  2337,
    2339,  2340,  2344,  2346,  2349,  2352,  2365,  2368,  2384,  2389,
    2402,  2420,  2443,  2456,  2457,  2460,  2464,  2469,  2474,  2478,
    2481,  2484,  2488,  2492,  2496,  2500,  2504,  2508,  2512,  2516,
    2520,  2524,  2528,  2532,  2538,  2541,  2544,  2548,  2558,  2562,
    2572,  2573,  2576,  2583,  2592,  2601,  2612,  2614,  2619,  2621,
    2627,  2632,  2637,  2645,  2650,  2656,  2664,  2670,  2671,  2675,
    2681,  2687,  2689,  2691,  2693,  2695,  2697,  2699,  2701,  2703,
    2705,  2707,  2709,  2711,  2713,  2715,  2717,  2719,  2721,  2723,
    2725,  2727,  2729,  2731,  2735,  2738,  2741,  2745,  2749,  2753,
    2757,  2761,  2765,  2769,  2773,  2777,  2781,  2785,  2789,  2793,
    2797,  2802,  2807,  2812,  2817,  2822,  2827,  2832,  2837,  2842,
    2847,  2854,  2859,  2864,  2869,  2874,  2879,  2884,  2891,  2898,
    2905,  2911,  2914,  2916,  2918,  2920,  2922,  2924,  2926,  2928,
    2930,  2931,  2933,  2935,  2939,  2941,  2943,  2947,  2951,  2955,
    2961,  2965,  2970,  2975,  2982,  2991,  3000,  3006,  3012,  3014,
    3016,  3018,  3020,  3022,  3027,  3034,  3036
};
static const short yyrhs[] =
{
      -1,   258,   259,     0,     0,     0,   259,   260,   261,     0,
      61,   252,   264,   253,     0,    98,   252,   287,   253,     0,
      67,   252,   321,   253,     0,    80,   252,   306,   253,     0,
      82,   252,   312,   253,     0,    94,   252,   328,   253,     0,
     110,   252,   351,   253,     0,   129,   252,   378,   253,     0,
     181,   252,   409,   253,     0,   183,   252,   421,   253,     0,
     425,     0,   439,     0,    22,   449,     0,   262,     0,    19,
       7,     0,    19,   188,     7,     0,    19,    21,     7,     0,
      19,    35,     7,     0,    19,    20,     7,     0,    19,    19,
       7,     0,    19,     5,     7,     0,    20,     7,     0,    21,
       7,     0,    21,    61,     7,     0,    21,    98,     7,     0,
      21,    67,     7,     0,    21,    80,     7,     0,    21,    82,
       7,     0,    21,    94,     7,     0,    21,   110,     7,     0,
      21,   129,     7,     0,    21,   181,     7,     0,    21,   183,
       7,     0,    21,     3,     7,     0,     0,   263,   429,     0,
       0,     0,   264,   265,   266,     0,   448,   222,   271,     7,
       0,     5,   286,   222,   271,     7,     0,     0,     5,   284,
     222,   267,   271,     7,     0,    62,   246,   282,   247,     7,
       0,   268,     0,   448,   235,   222,   271,     7,     0,   439,
       0,   438,     0,     0,     0,   448,   246,   442,   247,   222,
      65,   269,   246,   249,   279,   270,   254,   249,   279,   254,
     442,   247,     7,     0,     0,     0,   275,   246,   272,   276,
     273,   277,   247,     0,   249,   279,     0,   271,     0,   448,
     285,     0,    68,     0,     5,     0,   279,     0,    63,     0,
       0,   283,   278,   279,     0,   283,    64,   448,   285,     0,
       5,     0,   281,     0,   252,   280,   253,     0,     0,   280,
     283,   281,     0,   280,   283,   236,   281,     0,     3,     0,
     255,   445,   255,     0,     3,     8,   442,     0,     3,     8,
       3,     8,   442,     0,   448,     0,     5,   252,   253,     0,
       0,   282,   283,     5,     0,   282,   283,     5,   252,   442,
     253,     0,     0,   254,     0,   252,   249,   442,   253,     0,
       0,   252,   253,     0,   252,     3,   253,     0,     0,   287,
     288,     0,    66,   246,   289,   247,     7,     0,     5,   246,
     247,   222,   290,     7,     0,     5,   246,   274,   247,   222,
     290,     7,     0,   439,     0,   438,     0,     0,   289,   283,
       5,     0,    23,   246,   442,   247,     0,    98,   246,     5,
     247,     0,     0,   291,   294,     0,     0,   252,   293,   253,
       0,   290,     0,   293,   254,   290,     0,     0,   295,   296,
       0,   299,     0,     0,     0,   296,   223,   297,   296,     8,
     298,   296,     0,   296,   237,   296,     0,   296,   240,   296,
       0,    57,   246,   296,   254,   296,   247,     0,   296,   238,
     296,     0,   296,   235,   296,     0,   296,   236,   296,     0,
     296,   239,   296,     0,   296,   243,   296,     0,   296,   229,
     296,     0,   296,   231,   296,     0,   296,   230,   296,     0,
     296,   232,   296,     0,   296,   226,   296,     0,   296,   227,
     296,     0,   296,   228,   296,     0,   296,   225,   296,     0,
     296,   224,   296,     0,   236,   296,     0,   235,   296,     0,
     241,   296,     0,   244,   296,   245,     0,   443,     0,   441,
     303,   305,     0,     5,   377,     0,   377,     0,   377,   303,
       0,     0,   120,   300,   246,   294,   247,     0,     0,    59,
     246,     5,   246,   301,   294,   247,   247,   252,   442,   253,
       0,    60,   246,     5,   247,   252,   442,   254,   442,   253,
       0,    54,   246,   377,   247,     0,    56,   246,   377,   247,
       0,     0,    55,   302,   246,   294,   254,   274,   247,     0,
     229,     5,   231,   246,   294,   247,     0,   250,     5,     0,
     250,   206,     0,   250,   140,     0,   250,     3,     0,   299,
     249,     3,     0,   249,     3,     0,   250,   250,   448,     0,
     299,   251,   442,     0,    58,   246,     5,   254,     3,   247,
       0,   246,   248,   247,     0,   246,   247,     0,   246,   304,
     247,     0,   296,     0,   304,   254,   296,     0,     0,   252,
     445,   253,     0,   252,    68,   246,   274,   247,   253,     0,
       0,   306,   252,   307,   253,     0,     0,   307,   308,     0,
      95,     5,     7,     0,    81,   252,   309,   253,     0,     0,
     309,   252,   310,   253,     0,     0,   310,   311,     0,    68,
     274,     7,     0,    68,    63,     7,     0,    80,     5,   305,
       7,     0,     0,   312,   252,   313,   253,     0,     0,   313,
     314,     0,    95,     5,     7,     0,    87,   290,     7,     0,
      81,   252,   315,   253,     0,     0,   315,   252,   316,   253,
       0,     0,   316,   317,     0,    85,     5,     7,     0,    86,
       5,     7,     0,    81,   252,   318,   253,     0,     0,   318,
     252,   319,   253,     0,     0,   319,   320,     0,    88,     5,
       7,     0,    89,   442,     7,     0,    90,   442,     7,     0,
      91,   442,     7,     0,    92,   442,     7,     0,    93,   442,
       7,     0,     0,   438,     0,   321,   322,     0,   252,   323,
     253,     0,   439,     0,     0,   323,   324,     0,    95,   448,
       7,     0,    95,   448,   284,     7,     0,    85,     5,     7,
       0,    81,   252,   325,   253,     0,    81,     5,   252,   325,
     253,     0,     0,   325,   252,   326,   253,     0,   325,   438,
       0,     0,   326,   327,     0,    85,     5,     7,     0,    68,
     274,     7,     0,    69,   274,     7,     0,    75,   290,     7,
       0,    74,   290,     7,     0,    79,     5,     7,     0,    76,
     252,   443,   283,   443,   253,     7,     0,    70,   274,     7,
       0,    71,   274,     7,     0,    98,   290,     7,     0,    73,
     290,     7,     0,    72,   290,     7,     0,    98,   246,   290,
     254,   290,   247,     7,     0,    73,   246,   290,   254,   290,
     247,     7,     0,    72,   246,   290,   254,   290,   247,     7,
       0,     0,   328,   329,     0,   252,   330,   253,     0,   439,
       0,   438,     0,     0,   330,   331,     0,    95,   448,     7,
       0,    95,     5,   284,     7,     0,    85,     5,     7,     0,
      96,   252,   332,   253,     0,   104,   252,   338,   253,     0,
     106,   252,   345,   253,     0,    67,   252,   348,   253,     0,
       0,   332,   252,   333,   253,     0,     0,   333,   334,     0,
      95,     5,     7,     0,    97,     5,     7,     0,    97,     5,
     284,     7,     0,    98,     5,   335,     7,     0,    99,   252,
       5,   283,     5,   253,     7,     0,   100,   292,     7,     0,
     101,   292,     7,     0,   102,   274,     7,     0,   103,   274,
       7,     0,     0,     0,     0,   252,   111,     5,     7,   110,
       5,   284,     7,   336,    61,   274,     7,   337,   129,     5,
     285,     7,   253,     0,     0,   338,   252,   339,   253,     0,
       0,   339,   340,     0,    95,     5,     7,     0,   105,   341,
       7,     0,    97,   343,     7,     0,     5,     0,   252,   342,
     253,     0,     0,   342,   283,     5,     0,     5,     0,   252,
     344,   253,     0,     0,   344,   283,     5,     0,     0,   345,
     252,   346,   253,     0,     0,   346,   347,     0,    95,   448,
       7,     0,    85,     5,     7,     0,    97,     5,     7,     0,
       0,   348,   252,   349,   253,     0,     0,   349,   350,     0,
      97,     5,     7,     0,   107,   275,     7,     0,   108,   278,
       7,     0,   109,   448,   285,     7,     0,     0,   351,   352,
       0,   252,   353,   253,     0,   439,     0,   438,     0,     0,
     353,   354,     0,    95,   448,     7,     0,    95,     5,   284,
       7,     0,    85,     5,     7,     0,   111,   252,   355,   253,
       0,   115,   252,   362,   253,     0,     0,   355,   252,   356,
     253,     0,   355,   438,     0,     0,   356,   357,     0,    95,
     448,     7,     0,    85,   106,     7,     0,    85,   116,     7,
       0,    85,     5,     7,     0,   180,   444,     7,     0,     0,
     112,   448,   358,   361,     7,     0,     0,   112,     5,   252,
     253,   359,   361,     7,     0,   113,     3,     7,     0,     0,
     246,   360,   294,   247,     7,     0,   127,   274,     7,     0,
      82,     5,     7,     0,    83,     5,     7,     0,    80,     5,
       7,     0,   114,     3,     7,     0,     0,   246,   448,   247,
       0,     0,   362,   363,     0,   362,   439,     0,   362,   438,
       0,   116,   252,   368,   253,     0,   117,   252,   368,   253,
       0,   118,   252,   372,   253,     0,   119,   252,   364,   253,
       0,     0,   364,   365,     0,    85,     5,     7,     0,   109,
       5,     7,     0,   252,   366,   253,     0,     0,   366,   367,
       0,    77,   377,     7,     0,    78,   377,     7,     0,   115,
     377,     7,     0,   127,   274,     7,     0,     0,   368,   369,
       0,     0,     0,   376,   246,   370,   294,   371,   254,   294,
     247,     7,     0,   127,   274,     7,     0,    80,     5,     7,
       0,    82,     5,     7,     0,   128,     7,     0,    83,     5,
       7,     0,    84,   246,     3,   247,     7,     0,     0,   372,
     373,     0,   127,   274,     7,     0,     0,     0,   376,   246,
     374,   294,   375,   254,   377,   247,     7,     0,     0,   120,
       0,   121,     0,   122,     0,   123,     0,   124,     0,   125,
       0,   126,     0,   252,     5,   448,   253,     0,   252,   448,
     253,     0,     0,   378,   379,     0,   252,   380,   253,     0,
     439,     0,   438,     0,     0,   380,   381,     0,    95,   448,
       7,     0,    95,     5,   284,     7,     0,   130,   252,   383,
     253,     0,     0,   137,   382,   252,   390,   253,     0,   438,
       0,     0,   383,   252,   384,   253,     0,   383,   438,     0,
       0,   384,   385,     0,    95,   448,     7,     0,    85,     5,
       7,     0,   131,   386,     7,     0,   132,   449,     7,     0,
     135,   388,     7,     0,   136,     5,     7,     0,   133,   444,
       7,     0,   134,   449,     7,     0,   438,     0,   448,   285,
       0,   252,   387,   253,     0,     0,   387,   283,   448,     0,
     448,     0,   252,   389,   253,     0,     0,   389,   283,   448,
       0,     0,   390,   391,     0,     5,   448,     7,     0,   139,
     290,     7,     0,   149,   252,   398,   253,     0,   153,   252,
     400,   253,     0,   156,   252,   402,   253,     0,   159,   252,
     404,   253,     0,     5,   246,   448,   247,     7,     0,   139,
     246,   290,   247,     7,     0,   148,     7,     0,    15,   246,
     290,   247,   252,   390,   253,     0,    15,   246,   290,   247,
     252,   390,   253,    16,   252,   390,   253,     0,   141,   246,
       5,   254,   290,   247,     7,     0,   165,   246,     5,   254,
     290,   254,   290,   254,   290,   254,   290,   247,     7,     0,
     165,   246,     5,   254,   290,   254,   290,   254,   290,   247,
       7,     0,   166,   246,     5,   254,   444,   247,     7,     0,
     167,   246,     5,   254,   444,   247,     7,     0,   146,   246,
       5,   254,   290,   247,     7,     0,   147,   246,     5,   254,
     274,   254,     5,   247,     7,     0,   142,   246,     5,   254,
       5,   254,   444,   247,     7,     0,   143,   246,     5,   254,
       5,   254,   442,   247,     7,     0,   144,   246,     5,   254,
     442,   254,   444,   254,   442,   247,     7,     0,   145,   246,
       5,   254,     5,   254,     5,   254,   442,   254,   444,   254,
     442,   254,   442,   247,     7,     0,   149,   246,   442,   254,
     442,   254,   290,   254,   290,   247,   252,   390,   253,     0,
     153,   246,   442,   254,   442,   254,   290,   254,   442,   254,
     442,   247,   252,   390,   253,     0,   156,   246,   442,   254,
     442,   254,   290,   247,   252,   390,   253,     0,   156,   246,
     442,   254,   442,   254,   290,   254,   442,   247,   252,   390,
     253,     0,     0,   188,   392,   246,   395,   396,   247,     7,
       0,     0,   191,   393,   246,   395,   396,   247,     7,     0,
     162,   246,   274,   254,   290,   247,     7,     0,   162,   246,
     274,   254,   290,   254,   442,   254,   290,   247,     7,     0,
       0,   163,   246,   274,   254,   292,   394,   254,     5,   254,
       5,   254,   442,   247,     7,     0,   183,   246,   448,   247,
       7,     0,   164,   246,   449,   247,     7,     0,   168,   246,
       5,   254,   444,   254,   442,   247,     7,     0,   169,   246,
       5,   254,   442,   254,   449,   247,     7,     0,   170,   246,
       5,   254,   444,   254,   449,   247,     7,     0,   171,   252,
     448,   253,     7,     0,   172,   252,   448,   253,     7,     0,
     178,   252,   448,   254,   274,   254,   449,   254,   290,   253,
       7,     0,   178,   252,   448,   254,   274,   254,   449,   253,
       7,     0,   173,   246,     5,   254,     5,   254,   442,   254,
     442,   247,   252,   390,   253,     7,     0,   174,   246,     5,
     254,     5,   254,   442,   254,   442,   247,   252,   390,   253,
       7,     0,   175,   246,     5,   254,   442,   247,     7,     0,
     179,   252,     5,   254,     5,   254,   132,   449,   254,     4,
     253,     7,     0,   179,   252,     5,   254,     5,   254,   132,
     449,   253,     7,     0,   179,   252,     5,   254,     5,   253,
       7,     0,   176,   246,     5,   254,     5,   247,     7,     0,
     177,   246,     5,   254,     5,   247,     7,     0,   438,     0,
     292,     0,     5,     0,     0,   396,   397,     0,   254,   203,
     449,     0,   254,   206,   444,     0,   254,   444,     0,     0,
     398,   399,     0,   150,   442,     7,     0,   151,   442,     7,
       0,   140,   290,     7,     0,   152,   290,     7,     0,   137,
     252,   390,   253,     0,     0,   400,   401,     0,   150,   442,
       7,     0,   151,   442,     7,     0,   140,   290,     7,     0,
     154,   442,     7,     0,   155,   442,     7,     0,   137,   252,
     390,   253,     0,     0,   402,   403,     0,   157,   442,     7,
       0,    87,   442,     7,     0,   158,   290,     7,     0,    18,
     442,     7,     0,   137,   252,   390,   253,     0,     0,   404,
     405,     0,   157,   442,     7,     0,   160,   442,     7,     0,
      87,   442,     7,     0,    18,   442,     7,     0,   130,     5,
       7,     0,   161,   252,   406,   253,     0,   137,   252,   390,
     253,     0,   138,   252,   390,   253,     0,     0,   406,   252,
     407,   253,     0,     0,   407,   408,     0,    85,     5,     7,
       0,   111,     5,     7,     0,   127,   274,     7,     0,    87,
     442,     7,     0,    98,   290,     7,     0,    18,     5,     7,
       0,     0,   409,   410,     0,   252,   411,   253,     0,   439,
       0,     0,   411,   412,     0,    95,   448,     7,     0,    95,
       5,   284,     7,     0,   131,   448,   285,     7,     0,   182,
       5,     7,     0,   111,   252,   413,   253,     0,     0,   413,
     252,   414,   253,     0,   413,   439,     0,   413,   438,     0,
       0,   414,   415,     0,    95,   448,     7,     0,    74,   252,
     416,   253,     0,     0,   416,   116,   252,   417,   253,     0,
     416,     5,   252,   417,   253,     0,     0,   417,   418,     0,
       0,   376,   246,   419,   294,   247,     7,     0,    85,     5,
       7,     0,     0,   127,   420,   274,     7,     0,    80,     5,
       7,     0,    82,     5,     7,     0,     0,   421,   422,     0,
     252,   423,   253,     0,   439,     0,   438,     0,     0,   423,
     424,     0,    95,   448,     7,     0,   184,     5,     7,     0,
     208,     5,     7,     0,   186,   449,     7,     0,   137,   252,
     427,   253,     0,     0,   183,   448,   185,   448,   426,   252,
     427,   253,     0,     0,     0,   427,   428,   429,     0,   187,
     246,   431,   434,   435,   247,     7,     0,   188,   246,   431,
     434,   435,   247,     7,     0,   188,   246,   431,   434,   435,
     247,   236,   231,   250,   250,   448,     7,     0,   188,   246,
       6,   254,   442,   435,   247,     7,     0,   188,   246,     6,
     254,   220,   246,   449,   247,   435,   247,     7,     0,     0,
     189,   246,   274,   430,   254,   127,   274,   435,   247,     7,
       0,   438,     0,   190,   246,     6,   435,   247,     7,     0,
     448,   433,   254,     0,   448,   433,   432,     5,   433,   254,
       0,   237,     0,   238,     0,   235,     0,   236,     0,     0,
     246,   274,   247,     0,   193,     0,   194,   274,     0,   195,
     274,     0,   197,   252,   252,   445,   253,   252,   445,   253,
     252,   445,   253,   253,     0,   196,   274,     0,   196,   252,
     290,   254,   290,   254,   290,   253,   252,   444,   254,   444,
     254,   444,   253,     0,   198,   252,   445,   253,     0,   199,
     252,   252,   445,   253,   252,   445,   253,   253,   252,   442,
     253,     0,   200,   252,   252,   445,   253,   252,   445,   253,
     252,   445,   253,   253,   252,   442,   254,   442,   253,     0,
     201,   252,   252,   445,   253,   252,   445,   253,   252,   445,
     253,   252,   445,   253,   253,   252,   442,   254,   442,   254,
     442,   253,     0,   194,   274,   202,     5,   252,   442,   254,
     442,   253,   252,   442,   253,     0,     0,   435,   436,     0,
     254,   203,   449,     0,   254,   203,   231,   449,     0,   254,
     203,   234,   449,     0,   254,   204,   442,     0,   254,   211,
       0,   254,   212,     0,   254,   207,   442,     0,   254,   208,
       5,     0,   254,   209,   437,     0,   254,   210,   437,     0,
     254,   208,   437,     0,   254,   205,   442,     0,   254,   206,
     444,     0,   254,   192,     5,     0,   254,   214,     5,     0,
     254,   213,   442,     0,   254,    74,   444,     0,   254,   215,
     442,     0,   254,   215,   252,   445,   253,     0,   254,   216,
       0,   254,   217,     0,   254,   133,   444,     0,   254,   162,
     252,   290,   254,   290,   254,   290,   253,     0,   254,   218,
     292,     0,   254,   219,   252,   442,   254,   442,   254,   442,
     253,     0,     0,   437,     6,     0,    13,   244,   442,     8,
     442,   245,     0,    13,   244,   442,     8,   442,     8,   442,
     245,     0,    13,     5,   127,   252,   442,     8,   442,   253,
       0,    13,     5,   127,   252,   442,     8,   442,     8,   442,
     253,     0,    14,     0,    15,   244,   442,   245,     0,    17,
       0,    28,   246,   440,   247,     7,     0,   448,   222,   444,
       7,     0,   448,   222,     6,     7,     0,   448,   222,   220,
     246,   449,   247,     7,     0,   448,   222,   450,     7,     0,
      11,   244,     6,   245,     7,     0,    11,   244,     6,   254,
     445,   245,     7,     0,    12,   244,   448,   245,     7,     0,
       0,   440,   283,     5,     0,   440,   283,     5,   222,   442,
       0,   440,   283,     5,   222,     6,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,    45,
       0,    46,     0,    47,     0,    48,     0,    49,     0,    50,
       0,    51,     0,    52,     0,    53,     0,   448,     0,   443,
       0,   244,   442,   245,     0,   236,   442,     0,   241,   442,
       0,   442,   236,   442,     0,   442,   235,   442,     0,   442,
     237,   442,     0,   442,   238,   442,     0,   442,   239,   442,
       0,   442,   243,   442,     0,   442,   229,   442,     0,   442,
     231,   442,     0,   442,   230,   442,     0,   442,   232,   442,
       0,   442,   226,   442,     0,   442,   227,   442,     0,   442,
     225,   442,     0,   442,   224,   442,     0,    34,   246,   442,
     247,     0,    35,   246,   442,   247,     0,    36,   246,   442,
     247,     0,    37,   246,   442,   247,     0,    38,   246,   442,
     247,     0,    39,   246,   442,   247,     0,    40,   246,   442,
     247,     0,    41,   246,   442,   247,     0,    42,   246,   442,
     247,     0,    43,   246,   442,   247,     0,    44,   246,   442,
     254,   442,   247,     0,    45,   246,   442,   247,     0,    46,
     246,   442,   247,     0,    47,   246,   442,   247,     0,    48,
     246,   442,   247,     0,    49,   246,   442,   247,     0,    50,
     246,   442,   247,     0,    51,   246,   442,   254,   442,   247,
       0,    52,   246,   442,   254,   442,   247,     0,    53,   246,
     442,   254,   442,   247,     0,   442,   223,   442,     8,   442,
       0,   442,   249,     0,     4,     0,     3,     0,    29,     0,
      30,     0,    31,     0,    32,     0,    33,     0,   448,     0,
       0,   442,     0,   446,     0,   252,   445,   253,     0,   442,
       0,   446,     0,   445,   254,   442,     0,   445,   254,   446,
       0,   442,     8,   442,     0,   442,     8,   442,     8,   442,
       0,     5,   252,   253,     0,     5,   252,   445,   253,     0,
      24,   246,     5,   247,     0,    25,   246,     5,   254,     5,
     247,     0,    26,   246,   442,   254,   442,   254,   442,   247,
       0,    27,   246,   442,   254,   442,   254,   442,   247,     0,
       5,   256,   252,   442,   253,     0,   447,   256,   252,   442,
     253,     0,     5,     0,   447,     0,     6,     0,     5,     0,
     450,     0,    10,   244,   449,   245,     0,    10,   244,   449,
     254,   445,   245,     0,   221,     0,     9,   246,   449,   254,
     449,   247,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   368,   368,   442,   445,   445,   451,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   464,   466,   468,   473,
     482,   485,   487,   489,   491,   493,   495,   497,   499,   501,
     503,   505,   507,   509,   511,   513,   515,   517,   519,   521,
     524,   524,   546,   549,   549,   553,   557,   562,   562,   567,
     569,   571,   574,   576,   579,   579,   579,   606,   606,   606,
     634,   643,   650,   685,   690,   701,   704,   718,   723,   726,
     775,   788,   814,   819,   834,   852,   873,   879,   891,   900,
     914,   948,   968,   972,   982,   999,   999,  1002,  1008,  1011,
    1014,  1027,  1030,  1033,  1037,  1057,  1101,  1103,  1107,  1110,
    1127,  1136,  1143,  1143,  1151,  1157,  1161,  1166,  1171,  1171,
    1184,  1188,  1188,  1188,  1230,  1236,  1242,  1248,  1254,  1260,
    1266,  1272,  1278,  1284,  1290,  1296,  1302,  1308,  1314,  1320,
    1326,  1333,  1339,  1341,  1350,  1354,  1360,  1434,  1468,  1477,
    1489,  1489,  1502,  1502,  1518,  1530,  1536,  1542,  1542,  1573,
    1597,  1610,  1616,  1623,  1629,  1636,  1643,  1651,  1658,  1674,
    1677,  1678,  1681,  1684,  1687,  1692,  1695,  1709,  1716,  1721,
    1726,  1730,  1737,  1742,  1747,  1752,  1758,  1762,  1767,  1770,
    1806,  1814,  1819,  1828,  1832,  1841,  1844,  1849,  1854,  1859,
    1867,  1871,  1883,  1893,  1898,  1903,  1908,  1920,  1924,  1974,
    1977,  1980,  1983,  1986,  1995,  2002,  2003,  2006,  2028,  2031,
    2041,  2045,  2053,  2060,  2069,  2072,  2094,  2111,  2131,  2138,
    2148,  2152,  2164,  2191,  2216,  2221,  2229,  2237,  2247,  2264,
    2272,  2279,  2286,  2295,  2304,  2313,  2332,  2340,  2343,  2366,
    2368,  2372,  2381,  2385,  2393,  2400,  2409,  2412,  2415,  2418,
    2423,  2441,  2488,  2505,  2509,  2514,  2519,  2524,  2538,  2558,
    2563,  2568,  2592,  2647,  2651,  2651,  2651,  2728,  2734,  2739,
    2744,  2748,  2755,  2758,  2763,  2781,  2786,  2790,  2807,  2821,
    2826,  2830,  2843,  2849,  2856,  2863,  2867,  2874,  2884,  2895,
    2912,  2984,  2996,  3000,  3035,  3038,  3041,  3085,  3092,  3095,
    3117,  3119,  3123,  3131,  3135,  3143,  3150,  3160,  3162,  3167,
    3182,  3196,  3200,  3219,  3223,  3228,  3232,  3235,  3246,  3252,
    3252,  3292,  3292,  3359,  3364,  3364,  3681,  3686,  3695,  3704,
    3713,  3718,  3721,  3759,  3776,  3800,  3805,  3812,  3817,  3820,
    3823,  3828,  3836,  3839,  3851,  3861,  3873,  3882,  3885,  3889,
    3891,  3893,  3899,  3920,  3924,  3924,  3924,  4059,  4083,  4092,
    4101,  4106,  4115,  4124,  4141,  4145,  4179,  4179,  4179,  4258,
    4261,  4262,  4263,  4264,  4265,  4266,  4267,  4271,  4294,  4316,
    4323,  4326,  4347,  4349,  4353,  4361,  4365,  4374,  4381,  4384,
    4384,  4389,  4393,  4409,  4424,  4432,  4448,  4452,  4457,  4466,
    4469,  4474,  4479,  4484,  4489,  4493,  4497,  4536,  4541,  4546,
    4556,  4568,  4572,  4577,  4588,  4597,  4606,  4632,  4639,  4645,
    4651,  4657,  4665,  4687,  4694,  4700,  4711,  4722,  4735,  4750,
    4765,  4785,  4806,  4818,  4838,  4855,  4874,  4895,  4929,  4942,
    4956,  4969,  4982,  4982,  4991,  4991,  5000,  5011,  5023,  5023,
    5050,  5060,  5068,  5081,  5094,  5108,  5118,  5128,  5142,  5156,
    5174,  5193,  5204,  5219,  5234,  5249,  5264,  5279,  5289,  5295,
    5305,  5311,  5314,  5318,  5328,  5342,  5354,  5358,  5364,  5368,
    5372,  5377,  5386,  5399,  5403,  5409,  5413,  5417,  5421,  5426,
    5435,  5447,  5450,  5456,  5460,  5464,  5468,  5477,  5492,  5495,
    5501,  5505,  5509,  5514,  5524,  5530,  5536,  5545,  5549,  5553,
    5567,  5570,  5582,  5611,  5614,  5617,  5625,  5641,  5649,  5652,
    5673,  5676,  5687,  5690,  5698,  5706,  5752,  5757,  5762,  5766,
    5769,  5771,  5776,  5783,  5787,  5791,  5796,  5802,  5808,  5821,
    5832,  5835,  5835,  5871,  5882,  5882,  5888,  5897,  5913,  5921,
    5924,  5929,  5931,  5934,  5943,  5946,  5954,  5966,  5977,  5982,
    5987,  5987,  6014,  6018,  6018,  6033,  6039,  6045,  6051,  6057,
    6064,  6064,  6074,  6079,  6086,  6100,  6122,  6125,  6126,  6127,
    6130,  6134,  6138,  6146,  6153,  6160,  6184,  6191,  6203,  6216,
    6236,  6262,  6295,  6315,  6340,  6343,  6351,  6358,  6365,  6369,
    6373,  6377,  6381,  6391,  6396,  6401,  6421,  6428,  6437,  6446,
    6455,  6462,  6470,  6474,  6483,  6487,  6491,  6499,  6505,  6510,
    6522,  6529,  6577,  6589,  6599,  6613,  6627,  6653,  6657,  6669,
    6673,  6688,  6694,  6700,  6706,  6711,  6723,  6734,  6737,  6743,
    6749,  6760,  6762,  6763,  6764,  6765,  6766,  6767,  6768,  6769,
    6770,  6771,  6772,  6773,  6774,  6775,  6776,  6777,  6778,  6779,
    6780,  6781,  6784,  6786,  6787,  6788,  6789,  6790,  6791,  6792,
    6793,  6794,  6795,  6796,  6797,  6798,  6799,  6800,  6801,  6802,
    6803,  6804,  6805,  6806,  6807,  6808,  6809,  6810,  6811,  6812,
    6813,  6814,  6815,  6816,  6817,  6818,  6819,  6820,  6821,  6822,
    6823,  6824,  6827,  6830,  6831,  6832,  6833,  6834,  6835,  6853,
    6869,  6874,  6880,  6883,  6888,  6896,  6899,  6902,  6912,  6920,
    6931,  6947,  6969,  6984,  7022,  7030,  7040,  7050,  7060,  7064,
    7069,  7074,  7089,  7094,  7099,  7118,  7135
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "tINT", "tFLOAT", "tSTRING", "tBIGSTR", 
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead", "tFor", 
  "tEndFor", "tIf", "tElse", "tEndIf", "tFlag", "tHelp", "tCpu", "tCheck", 
  "tInclude", "tConstant", "tList", "tListAlt", "tLinSpace", "tLogSpace", 
  "tDefineConstant", "tPi", "t0D", "t1D", "t2D", "t3D", "tExp", "tLog", 
  "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos", "tTan", "tAtan", 
  "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", "tCeil", 
  "tFmod", "tModulo", "tHypot", "tSolidAngle", "tTrace", "tOrder", 
  "tCrossProduct", "tDofValue", "tMHTransform", "tMHJacNL", "tGroup", 
  "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", 
  "tDefineFunction", "tConstraint", "tRegion", "tSubRegion", "tRegionRef", 
  "tSubRegionRef", "tFilter", "tCoefficient", "tValue", "tTimeFunction", 
  "tBranch", "tNode", "tLoop", "tNameOfResolution", "tJacobian", "tCase", 
  "tIntegration", "tFMMIntegration", "tMatrix", "tType", "tSubType", 
  "tCriterion", "tGeoElement", "tNumberOfPoints", "tMaxNumberOfPoints", 
  "tNumberOfDivisions", "tMaxNumberOfDivisions", "tStoppingCriterion", 
  "tFunctionSpace", "tName", "tBasisFunction", "tNameOfCoef", "tFunction", 
  "tdFunction", "tSubFunction", "tSubdFunction", "tSupport", "tEntity", 
  "tSubSpace", "tNameOfBasisFunction", "tGlobalQuantity", "tEntityType", 
  "tEntitySubType", "tNameOfConstraint", "tFormulation", "tQuantity", 
  "tNameOfSpace", "tIndexOfSystem", "tSymmetry", "tEquation", "tGalerkin", 
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDt", "tDtDof", "tDtDt", 
  "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL", "tIn", "tFull_Matrix", 
  "tResolution", "tDefineSystem", "tNameOfFormulation", "tNameOfMesh", 
  "tFrequency", "tSolver", "tOriginSystem", "tDestinationSystem", 
  "tOperation", "tOperationEnd", "tSetTime", "tDTime", "tSetFrequency", 
  "tFourierTransform", "tFourierTransformJ", "tLanczos", "tPerturbation", 
  "tUpdate", "tUpdateConstraint", "tBreak", "tTimeLoopTheta", "tTime0", 
  "tTimeMax", "tTheta", "tTimeLoopNewmark", "tBeta", "tGamma", 
  "tIterativeLoop", "tNbrMaxIteration", "tRelaxationFactor", 
  "tIterativeTimeReduction", "tDivisionCoefficient", "tChangeOfState", 
  "tChangeOfCoordinates", "tChangeOfCoordinates2", "tSystemCommand", 
  "tGenerateFMMGroups", "tGenerateOnly", "tGenerateOnlyJac", 
  "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH", 
  "tSaveSolutionMHtoTime", "tInit_MovingBand2D", "tMesh_MovingBand2D", 
  "tGenerate_MH_Moving", "tGenerate_MH_Moving_Separate", "tAdd_MH_Moving", 
  "tGenerateGroup", "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh", 
  "tDummyFrequency", "tPostProcessing", "tNameOfSystem", "tPostOperation", 
  "tNameOfPostProcessing", "tUsingPost", "tAppend", "tPlot", "tPrint", 
  "tPrintGroup", "tEcho", "tWrite", "tAdapt", "tOnGlobal", "tOnRegion", 
  "tOnElementsOf", "tOnGrid", "tOnSection", "tOnPoint", "tOnLine", 
  "tOnPlane", "tOnBox", "tWithArgument", "tFile", "tDepth", "tDimension", 
  "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader", "tFooter", 
  "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", "tNoNewLine", 
  "tDecomposeInSimplex", "tChangeOfValues", "tFrequencyLegend", "tStr", 
  "tDate", "tDEF", "'?'", "tOR", "tAND", "tEQUAL", "tNOTEQUAL", 
  "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", "tGREATEROREQUAL", 
  "tLESSLESS", "tGREATERGREATER", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", "'['", "']'", 
  "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", "'~'", 
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
  "@20", "@21", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@22", 
  "@23", "GlobalTerm", "GlobalTermTerm", "@24", "@25", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@26", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@27", "@28", "@29", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@30", "@31", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@32", 
  "PostSubOperations", "@33", "PostSubOperation", "@34", 
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport", 
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", "Loop", 
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", 
  "OneFExpr", "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", 
  "StringIndex", "String__Index", "CharExpr", "StrCat", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,   258,   257,   259,   260,   259,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   262,   264,   265,   264,   266,   266,   267,   266,   266,
     266,   266,   266,   266,   269,   270,   268,   272,   273,   271,
     271,   274,   274,   275,   275,   276,   276,   277,   277,   277,
     278,   279,   279,   280,   280,   280,   281,   281,   281,   281,
     281,   281,   282,   282,   282,   283,   283,   284,   285,   285,
     286,   287,   287,   288,   288,   288,   288,   288,   289,   289,
     290,   290,   291,   290,   292,   292,   293,   293,   295,   294,
     296,   297,   298,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   299,   299,   299,   299,   299,   299,
     300,   299,   301,   299,   299,   299,   299,   302,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   303,
     303,   303,   304,   304,   305,   305,   305,   306,   306,   307,
     307,   308,   308,   309,   309,   310,   310,   311,   311,   311,
     312,   312,   313,   313,   314,   314,   314,   315,   315,   316,
     316,   317,   317,   317,   318,   318,   319,   319,   320,   320,
     320,   320,   320,   320,   321,   321,   321,   322,   322,   323,
     323,   324,   324,   324,   324,   324,   325,   325,   325,   326,
     326,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   328,   328,   329,   329,
     329,   330,   330,   331,   331,   331,   331,   331,   331,   331,
     332,   332,   333,   333,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   335,   336,   337,   335,   338,   338,   339,
     339,   340,   340,   340,   341,   341,   342,   342,   343,   343,
     344,   344,   345,   345,   346,   346,   347,   347,   347,   348,
     348,   349,   349,   350,   350,   350,   350,   351,   351,   352,
     352,   352,   353,   353,   354,   354,   354,   354,   354,   355,
     355,   355,   356,   356,   357,   357,   357,   357,   357,   358,
     357,   359,   357,   357,   360,   357,   357,   357,   357,   357,
     357,   361,   361,   362,   362,   362,   362,   363,   363,   363,
     363,   364,   364,   365,   365,   365,   366,   366,   367,   367,
     367,   367,   368,   368,   370,   371,   369,   369,   369,   369,
     369,   369,   369,   372,   372,   373,   374,   375,   373,   376,
     376,   376,   376,   376,   376,   376,   376,   377,   377,   378,
     378,   379,   379,   379,   380,   380,   381,   381,   381,   382,
     381,   381,   383,   383,   383,   384,   384,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   386,   386,   387,   387,
     388,   388,   389,   389,   390,   390,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   392,   391,   393,   391,   391,   391,   394,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   395,   395,
     396,   396,   397,   397,   397,   398,   398,   399,   399,   399,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   401,
     402,   402,   403,   403,   403,   403,   403,   404,   404,   405,
     405,   405,   405,   405,   405,   405,   405,   406,   406,   407,
     407,   408,   408,   408,   408,   408,   408,   409,   409,   410,
     410,   411,   411,   412,   412,   412,   412,   412,   413,   413,
     413,   413,   414,   414,   415,   415,   416,   416,   416,   417,
     417,   419,   418,   418,   420,   418,   418,   418,   421,   421,
     422,   422,   422,   423,   423,   424,   424,   424,   424,   424,
     426,   425,   427,   428,   427,   429,   429,   429,   429,   429,
     430,   429,   429,   429,   431,   431,   432,   432,   432,   432,
     433,   433,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   435,   435,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     437,   437,   438,   438,   438,   438,   438,   438,   438,   439,
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     0,     2,     0,     0,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     2,     1,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     2,     0,     0,     3,     4,     5,     0,     6,     5,
       1,     5,     1,     1,     0,     0,    18,     0,     0,     7,
       2,     1,     2,     1,     1,     1,     1,     0,     3,     4,
       1,     1,     3,     0,     3,     4,     1,     3,     3,     5,
       1,     3,     0,     3,     6,     0,     1,     4,     0,     2,
       3,     0,     2,     5,     6,     7,     1,     1,     0,     3,
       4,     4,     0,     2,     0,     3,     1,     3,     0,     2,
       1,     0,     0,     7,     3,     3,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     3,     1,     3,     2,     1,     2,
       0,     5,     0,    11,     9,     4,     4,     0,     7,     6,
       2,     2,     2,     2,     3,     2,     3,     3,     6,     3,
       2,     3,     1,     3,     0,     3,     6,     0,     4,     0,
       2,     3,     4,     0,     4,     0,     2,     3,     3,     4,
       0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
       2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
       3,     3,     3,     3,     0,     1,     2,     3,     1,     0,
       2,     3,     4,     3,     4,     5,     0,     4,     2,     0,
       2,     3,     3,     3,     3,     3,     3,     7,     3,     3,
       3,     3,     3,     7,     7,     7,     0,     2,     3,     1,
       1,     0,     2,     3,     4,     3,     4,     4,     4,     4,
       0,     4,     0,     2,     3,     3,     4,     4,     7,     3,
       3,     3,     3,     0,     0,     0,    18,     0,     4,     0,
       2,     3,     3,     3,     1,     3,     0,     3,     1,     3,
       0,     3,     0,     4,     0,     2,     3,     3,     3,     0,
       4,     0,     2,     3,     3,     3,     4,     0,     2,     3,
       1,     1,     0,     2,     3,     4,     3,     4,     4,     0,
       4,     2,     0,     2,     3,     3,     3,     3,     3,     0,
       5,     0,     7,     3,     0,     5,     3,     3,     3,     3,
       3,     0,     3,     0,     2,     2,     2,     4,     4,     4,
       4,     0,     2,     3,     3,     3,     0,     2,     3,     3,
       3,     3,     0,     2,     0,     0,     9,     3,     3,     3,
       2,     3,     5,     0,     2,     3,     0,     0,     9,     0,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     0,
       2,     3,     1,     1,     0,     2,     3,     4,     4,     0,
       5,     1,     0,     4,     2,     0,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     3,     0,     3,
       1,     3,     0,     3,     0,     2,     3,     3,     4,     4,
       4,     4,     5,     5,     2,     7,    11,     7,    13,    11,
       7,     7,     7,     9,     9,     9,    11,    17,    13,    15,
      11,    13,     0,     7,     0,     7,     7,    11,     0,    14,
       5,     5,     9,     9,     9,     5,     5,    11,     9,    14,
      14,     7,    12,    10,     7,     7,     7,     1,     1,     1,
       0,     2,     3,     3,     2,     0,     2,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
       3,     3,     3,     3,     4,     4,     4,     0,     4,     0,
       2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
       1,     0,     2,     3,     4,     4,     3,     4,     0,     4,
       2,     2,     0,     2,     3,     4,     0,     5,     5,     0,
       2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
       3,     1,     1,     0,     2,     3,     3,     3,     3,     4,
       0,     8,     0,     0,     3,     7,     7,    12,     8,    11,
       0,    10,     1,     6,     3,     6,     1,     1,     1,     1,
       0,     3,     1,     2,     2,    12,     2,    15,     4,    12,
      17,    22,    12,     0,     2,     3,     4,     4,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     2,     2,     3,     9,     3,     9,
       0,     2,     6,     8,     8,    10,     1,     4,     1,     5,
       4,     4,     7,     4,     5,     7,     5,     0,     3,     5,
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

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,   728,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,    19,     0,    16,    17,   729,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   731,   730,     0,     0,   735,    18,   732,   637,
      42,   204,   167,   180,   236,    91,   297,   379,   517,   548,
       0,     0,   626,     0,   628,     0,     0,     0,     0,    41,
     572,     0,   710,     0,     0,     0,    26,    25,    24,    22,
      23,    21,    39,    29,    31,    32,    33,    34,    30,    35,
      36,    37,    38,     0,     0,    85,    43,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   703,   702,   728,     0,
       0,     0,     0,     0,   704,   705,   706,   707,   708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   711,   662,     0,   712,   709,     0,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     6,
       0,   209,     8,   206,   208,   169,     9,   182,    10,   241,
      11,   237,   240,   239,   728,     0,     7,    92,    97,    96,
     302,    12,   298,   301,   300,   384,    13,   380,   383,   382,
     521,    14,   518,   520,   553,    15,   549,   552,   551,   560,
       0,     0,     0,     0,   580,     0,     0,   728,    63,     0,
      61,   570,     0,    88,   593,     0,     0,   631,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   664,   665,     0,   714,     0,   715,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   701,   630,   633,   726,   634,
       0,   636,     0,   733,     0,   629,   638,   728,     0,    44,
      50,    53,    52,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,   627,   582,     0,
       0,     0,     0,     0,     0,     0,     0,   593,     0,     0,
       0,   593,    76,   728,    73,     0,    60,    71,    80,     0,
      57,     0,    62,     0,   727,   720,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   663,   713,     0,   718,     0,   679,   678,   676,
     677,   672,   674,   673,   675,   667,   666,   668,   669,   670,
     671,     0,     0,     0,     0,     0,     0,     0,    82,   710,
       0,     0,     0,     0,     0,   207,   210,     0,     0,   168,
     170,     0,   102,     0,   181,   183,     0,     0,     0,     0,
       0,     0,   238,   242,     0,     0,    85,     0,     0,     0,
       0,   299,   303,     0,     0,   389,   381,   385,   391,     0,
       0,     0,     0,   519,   522,     0,     0,     0,     0,     0,
     550,   554,   562,     0,     0,   583,   584,   102,   586,     0,
       0,     0,     0,     0,     0,     0,   578,   579,   576,   577,
     574,     0,     0,   593,     0,     0,     0,    85,     0,     0,
       0,    89,     0,     0,   594,   721,   722,     0,     0,     0,
     680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
       0,   691,   692,   693,   694,   695,   696,     0,     0,     0,
       0,   716,   717,     0,     0,   635,   736,   734,   640,   639,
       0,     0,    47,     0,    85,   728,     0,     0,     0,     0,
     216,     0,     0,   173,     0,   187,     0,     0,     0,   108,
       0,   289,     0,   728,     0,   250,   267,   282,   102,     0,
       0,     0,     0,   728,     0,   309,   333,   728,     0,   392,
       0,   728,     0,   528,    88,     0,     0,   562,     0,     0,
       0,   563,     0,     0,   622,     0,     0,     0,     0,     0,
       0,     0,     0,   581,   580,     0,     0,     0,   703,    78,
      81,    72,     0,    77,     0,    66,    58,    65,   573,   710,
     710,     0,     0,     0,     0,     0,   710,     0,   620,   620,
     620,   599,   600,     0,     0,     0,   614,   615,   104,     0,
       0,     0,     0,     0,     0,     0,     0,   632,   719,   700,
      90,     0,     0,    64,     0,     0,     0,    45,     0,     0,
     216,     0,   213,   211,     0,     0,     0,   171,     0,     0,
       0,   185,   103,     0,   184,     0,   245,     0,   243,     0,
       0,     0,     0,   102,    93,    99,   306,     0,   304,     0,
       0,     0,   386,     0,   414,     0,   523,     0,     0,   526,
     555,   563,   556,   558,   557,   561,     0,     0,     0,     0,
     102,     0,   588,     0,     0,     0,   565,     0,     0,     0,
     566,     0,     0,     0,    74,   593,    85,   611,   616,   102,
     608,     0,     0,   595,   598,   606,   607,   601,   602,   605,
     603,   604,   610,   609,     0,   612,   102,   618,     0,   723,
       0,     0,   690,   697,   698,   699,    87,     0,    46,    49,
      83,    51,     0,     0,   219,   214,   218,   212,   175,   172,
     189,   186,     0,     0,   728,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,     0,   147,     0,     0,     0,
       0,     0,   140,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,   138,     0,   135,   709,   291,   249,   244,
     252,   246,   269,   247,   284,   248,    94,     0,   305,   312,
     307,   311,     0,     0,     0,     0,   308,   334,   336,   335,
     387,   395,   388,   394,     0,   524,   532,   527,   531,   530,
     525,   559,   564,     0,   624,   623,     0,     0,     0,     0,
       0,     0,   575,   593,   568,     0,    79,    75,     0,     0,
       0,     0,   596,   597,   621,     0,   106,     0,     0,     0,
       0,    48,     0,    54,   215,     0,     0,     0,   100,   101,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   131,   133,     0,   155,   153,   150,   152,   151,     0,
     728,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,   164,     0,     0,     0,     0,    95,     0,
     352,   352,   363,   341,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
     444,   390,   415,   467,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,    59,    70,     0,     0,   102,
     613,   105,   102,     0,   724,   725,     0,     0,     0,     0,
       0,     0,   102,   102,   102,   102,     0,     0,     0,   102,
     217,   220,     0,     0,   174,   176,     0,     0,     0,   188,
     190,     0,   108,     0,     0,     0,     0,     0,   108,     0,
     134,   156,     0,   378,     0,   130,   129,   126,   127,   128,
     122,   124,   123,   125,   118,   119,   114,   117,   120,   115,
     121,   154,   157,   160,     0,   162,     0,     0,   136,     0,
       0,     0,     0,   290,   292,     0,     0,     0,     0,   104,
     104,     0,     0,   251,   253,     0,     0,     0,   268,   270,
       0,     0,     0,   283,   285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   710,   324,   310,   313,   369,   369,
     369,     0,     0,     0,     0,     0,   710,     0,     0,     0,
     393,   396,   405,     0,     0,   102,   102,     0,     0,     0,
       0,     0,     0,     0,     0,   424,     0,   475,     0,   482,
       0,   490,   497,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   529,   533,   625,     0,
       0,     0,     0,     0,     0,     0,     0,   571,    88,    68,
       0,   107,     0,    84,     0,     0,     0,     0,     0,   102,
       0,   102,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,   164,   194,     0,     0,   145,     0,   146,     0,
       0,   142,     0,     0,   108,   377,     0,   159,   161,     0,
       0,     0,     0,     0,     0,    88,     0,     0,   263,     0,
       0,     0,     0,     0,     0,   278,   280,     0,   274,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   319,     0,     0,     0,     0,   108,     0,     0,
       0,     0,   370,   371,   372,   373,   374,   375,   376,     0,
       0,   337,   353,     0,   338,     0,   339,   364,     0,     0,
       0,   346,   340,   342,     0,     0,   408,     0,    88,     0,
       0,     0,   412,     0,   410,     0,     0,   416,     0,     0,
     417,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   104,   536,     0,     0,     0,
       0,     0,     0,     0,   569,     0,    69,   102,     0,     0,
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
       0,     0,     0,   102,     0,     0,   102,   418,   476,     0,
       0,   102,     0,     0,     0,     0,   419,   483,     0,     0,
       0,     0,     0,   102,   420,   491,     0,     0,     0,     0,
       0,     0,     0,     0,   421,   498,   102,   104,     0,   102,
     710,   710,   710,     0,   710,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,   468,   470,   470,     0,
     534,     0,   710,     0,     0,     0,     0,   567,     0,     0,
      55,   102,   102,     0,   102,   179,   196,   193,     0,   116,
     158,     0,     0,   149,     0,     0,   296,   256,     0,   257,
       0,   279,     0,   275,     0,   321,     0,     0,     0,   358,
     359,   361,     0,   357,   108,   365,   108,   343,   344,     0,
       0,     0,     0,   345,   347,   407,     0,   411,     0,   422,
     414,   423,     0,     0,     0,     0,     0,     0,     0,     0,
     414,     0,     0,     0,     0,     0,   414,     0,     0,     0,
       0,     0,     0,     0,     0,   414,     0,     0,     0,     0,
       0,   414,   414,     0,     0,   507,     0,   448,   451,     0,
       0,     0,     0,     0,     0,   455,   456,     0,     0,     0,
       0,     0,     0,     0,   450,     0,     0,     0,     0,   535,
       0,     0,     0,     0,     0,     0,   617,   619,     0,     0,
       0,     0,     0,     0,   148,     0,     0,   113,     0,     0,
       0,   281,   277,   331,     0,   320,   325,     0,   355,   367,
       0,     0,     0,     0,   409,   413,     0,     0,   710,     0,
     710,     0,     0,     0,   102,     0,   479,   477,   478,   480,
     102,     0,   486,   484,   485,   487,   488,   102,   495,   493,
       0,   492,   494,   502,   501,   503,     0,     0,   499,   500,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   710,
     471,     0,   539,   539,     0,   710,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   195,   197,     0,     0,   166,     0,     0,     0,   332,
     362,     0,     0,   348,   349,   350,   351,   425,   427,     0,
       0,     0,     0,   432,     0,     0,   481,     0,   489,     0,
     496,   505,   506,   509,   504,   446,     0,     0,     0,   430,
     431,     0,     0,     0,     0,     0,   461,   465,   466,     0,
     464,     0,   443,     0,   710,   474,   445,   369,   369,   592,
       0,   585,   589,     0,     0,     0,   235,   234,   227,   233,
       0,     0,     0,     0,     0,     0,     0,   144,     0,   258,
     322,   108,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,   102,     0,   102,     0,     0,     0,
       0,     0,     0,   102,     0,   472,   473,     0,     0,     0,
     544,   538,     0,   540,   537,   710,     0,     0,     0,   198,
     199,   200,   201,   202,   203,     0,     0,     0,     0,   414,
     434,   435,     0,     0,   433,     0,     0,   414,     0,     0,
       0,     0,   102,     0,     0,   508,   510,     0,     0,     0,
     452,   453,   454,     0,     0,   458,     0,     0,     0,     0,
       0,     0,     0,   541,     0,     0,     0,     0,   143,     0,
       0,     0,     0,     0,   710,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,   463,     0,   546,   547,   543,     0,   108,   587,
       0,     0,     0,   264,   356,   368,   426,   436,     0,   414,
       0,   440,   414,   516,   511,   514,   515,   512,   513,   447,
       0,   429,     0,   414,   414,   457,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   462,     0,   590,     0,    56,     0,     0,   438,   414,
     441,     0,   428,     0,     0,   542,     0,     0,     0,     0,
     449,   459,   460,     0,   265,     0,   439,     0,     0,     0,
       0,     0,   437,   591,    88,     0,     0,   266,     0,     0,
       0
};

static const short yydefgoto[] =
{
    1998,     1,     2,     3,    22,    23,    24,   106,   180,   299,
     632,   300,   987,  1618,   230,   480,   706,   231,   232,   596,
     849,   978,   336,   477,   337,   524,   178,   396,   342,   397,
     112,   197,   426,   538,   539,  1486,   857,   652,   653,   791,
    1024,  1514,   792,   878,  1354,   872,   912,  1046,  1048,   109,
     305,   410,   646,   866,  1005,   110,   306,   415,   648,   867,
    1010,  1348,  1623,  1722,   107,   183,   304,   406,   641,   865,
    1001,   111,   191,   307,   423,   659,   915,  1064,  1370,  1952,
    1988,   660,   916,  1069,  1220,  1379,  1217,  1377,   661,   917,
    1074,   655,   914,  1054,   113,   202,   310,   432,   669,   919,
    1087,  1392,  1633,  1237,  1527,   670,   817,  1091,  1263,  1409,
    1544,  1088,  1252,  1534,  1731,  1090,  1257,  1536,  1732,  1253,
     793,   114,   207,   311,   437,   560,   673,   924,  1101,  1267,
    1412,  1273,  1418,   824,   962,  1142,  1143,  1683,  1487,  1605,
    1700,  1289,  1438,  1291,  1447,  1293,  1455,  1294,  1465,  1680,
    1813,  1866,   115,   212,   312,   444,   677,   964,  1147,  1489,
    1777,  1833,  1918,  1882,   116,   216,   313,   451,    25,   314,
     571,   686,    79,   339,   223,   471,   329,   327,   343,   484,
     719,   963,    26,   105,   794,   266,   165,   166,   267,   268,
      27,   168,    57,    58
};

static const short yypact[] =
{
  -32768,-32768,    55,  2600,  -181,  -157,  -142,   439,   147,  1299,
     447,   -53,  -119,   -28,    20,    23,    39,    56,    71,   116,
     124,    17,-32768,-32768,   483,-32768,-32768,    65,   123,   140,
     281,   379,   340,-32768,   426,   438,   443,   471,   474,-32768,
     486,-32768,   499,   511,   517,   522,   577,   580,   601,   611,
     627,   640,-32768,-32768,   208,   408,-32768,-32768,-32768,-32768,
  -32768,   665,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     473,    80,-32768,   425,-32768,   420,   437,   445,   453,-32768,
  -32768,   454,  2105,  4069,  -113,   459,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   447,   447,   -29,   456,    49,-32768,   212,
     259,   125,   161,   217,   323,   209,   347,   379,   616,  4069,
    4069,   379,   550,    90,   709,  4069,-32768,-32768,  -151,   740,
     507,   524,   543,   556,-32768,-32768,-32768,-32768,-32768,   576,
     581,   584,   603,   609,   614,   628,   643,   660,   667,   677,
     684,   691,   702,   707,   718,   721,   731,   744,   752,   764,
    4069,  4069,  4069,  3906,   932,-32768,   771,-32768,-32768,   789,
    4777,   811,  3906,   934,   730,    50,   994,-32768,  1017,-32768,
     914,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  -139,   786,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     787,  4116,  5180,  1076,   795,   798,  1076,    74,-32768,    16,
  -32768,-32768,   802,   805,-32768,  4808,  1692,-32768,  1049,  1066,
    4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,
    4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,
    4069,  4069,   447,   -94,   -94,  5207,   932,   310,-32768,  4069,
    4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,  4069,
    4069,  4069,  4069,  4069,  4069,-32768,-32768,-32768,-32768,-32768,
     103,-32768,   447,-32768,  3906,-32768,   853,  -131,   836,-32768,
  -32768,-32768,-32768,   -75,   387,   309,   337,   516,    94,-32768,
     518,   298,   412,   664,   837,  4069,  4069,-32768,-32768,    90,
      90,    48,   841,   847,   849,   850,   854,-32768,    90,   735,
    3957,-32768,  1080,   -33,-32768,  3906,-32768,-32768,-32768,   851,
  -32768,   855,-32768,   126,-32768,-32768,   339,   860,   856,  4033,
    4095,  5234,  5261,  5288,  5315,  5342,  5369,  5396,  5423,  5450,
    5477,  4147,  5504,  5531,  5558,  5585,  5612,  5639,  4231,  4252,
    4273,   865,-32768,-32768,  3906,  4168,  4189,  1423,  1521,   972,
     972,   496,   496,   496,   496,   405,   405,   -94,   -94,   -94,
     -94,  1106,   876,   189,  4008,    35,   902,   904,-32768,  1871,
     905,  4069,    24,  1123,   379,-32768,-32768,   880,  1126,-32768,
  -32768,   881,    92,  1129,-32768,-32768,   885,  1134,  1136,   895,
     896,   898,-32768,-32768,   929,   907,   132,  1147,  1155,   920,
     921,-32768,-32768,  1161,   922,-32768,-32768,-32768,-32768,  1171,
     926,   379,  1174,-32768,-32768,   379,   930,  1178,   447,  1179,
  -32768,-32768,-32768,  4210,  4054,   983,-32768,    92,-32768,   936,
    3906,   937,   942,   943,   245,   951,-32768,-32768,-32768,-32768,
  -32768,  1195,   959,  6206,   288,  4122,   961,   422,   432,  1085,
      31,-32768,  1209,  2649,-32768,-32768,-32768,  1212,  4069,  4069,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    4069,-32768,-32768,-32768,-32768,-32768,-32768,  4069,  4069,  4069,
    1213,   932,-32768,  4069,  4069,-32768,-32768,-32768,-32768,  6206,
     966,  4069,-32768,    95,   292,   175,  1215,    95,  5666,   971,
  -32768,  1241,    38,-32768,  1242,-32768,  1004,  1005,  1271,-32768,
    1273,-32768,  1274,    -5,  1276,-32768,-32768,-32768,    92,  1062,
    1278,  1281,  1280,    -5,  1282,-32768,-32768,    -5,  1286,-32768,
    1036,    -5,  1288,-32768,   805,  1289,  1290,-32768,  1291,  1294,
    1298,  1054,  4069,  4069,-32768,  1304,  1056,  3906,   436,  3906,
    3906,  3906,  1305,-32768,   795,   447,   303,   127,  1303,  6206,
  -32768,-32768,    37,-32768,    90,-32768,-32768,-32768,-32768,  2226,
    2226,  1061,  1310,   407,  4069,  4069,  2226,  4069,  1311,-32768,
  -32768,-32768,-32768,  4069,  1312,  2347,-32768,-32768,  1067,  1069,
    1071,  4294,  4315,  5693,  5720,  5747,  5774,-32768,  6206,  6206,
  -32768,  4839,    95,-32768,  1316,  1325,  1332,-32768,  1337,  1124,
  -32768,   167,-32768,-32768,  1096,  1342,   450,-32768,   468,  4069,
    1345,-32768,-32768,  1997,-32768,   476,-32768,  1344,-32768,   485,
     489,   520,  1347,    92,-32768,-32768,-32768,  1348,-32768,   227,
      69,  1349,-32768,   264,-32768,  1357,-32768,   383,  1358,-32768,
  -32768,  1099,-32768,-32768,-32768,-32768,   483,   487,  5801,  1116,
      92,   526,-32768,   532,   540,   551,-32768,  1117,  1125,  1363,
  -32768,  1142,  4069,    27,-32768,-32768,   305,-32768,-32768,    92,
  -32768,   447,   447,-32768,  6206,  6206,-32768,  6206,-32768,  1368,
    1368,  1368,  6206,-32768,  3906,  6206,    92,-32768,  4069,-32768,
    4069,  4069,-32768,-32768,-32768,-32768,-32768,  1370,-32768,-32768,
    1128,-32768,  1317,   357,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,  5828,  1137,   151,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  1140,-32768,  1141,  1143,  1149,
    1150,  1152,-32768,  1383,  1997,  1997,  1997,  1997,  1405,    43,
    1406,  3792,   -57,  1164,  1164,-32768,  1167,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  1407,-32768,-32768,
  -32768,-32768,  1163,  1165,  1177,  1180,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  1277,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  4069,-32768,-32768,  4069,  1121,  1183,  1185,
    1186,  1205,-32768,-32768,-32768,  1181,  6206,-32768,   307,  1211,
      88,  1207,-32768,-32768,-32768,   562,-32768,   567,  4336,  5855,
    5882,-32768,  4069,-32768,-32768,   738,   170,   424,-32768,-32768,
  -32768,  1210,  1217,  1210,  1997,  1459,  1461,  1462,  1223,  1239,
    1228,  1228,  1228,  3740,-32768,-32768,-32768,-32768,-32768,   379,
      18,  1221,-32768,  1997,  1997,  1997,  1997,  1997,  1997,  1997,
    1997,  1997,  1997,  1997,  1997,  1997,  1997,  1997,  1997,  1472,
    4069,  1939,-32768,  1224,   668,   780,   491,   452,-32768,   960,
  -32768,-32768,-32768,-32768,   352,    68,     2,   145,  1231,  1232,
    1235,  1237,  1240,  1243,  1244,  1478,   135,   153,   221,  1236,
    1248,  1249,  1250,  1253,  1254,  1255,  1256,  1257,  1258,  1260,
    1261,  1268,  1269,  1270,  1272,  1283,  1265,  1275,  1292,-32768,
  -32768,-32768,-32768,-32768,    96,  4870,  4357,    92,  3906,  3906,
    3906,  3906,   348,  1284,  1480,-32768,-32768,   379,    16,    92,
  -32768,-32768,    92,  4069,-32768,-32768,  4901,  1295,    90,    90,
      90,    90,   257,   284,    92,    92,  1285,  1502,  1515,   287,
  -32768,-32768,    93,  1517,-32768,-32768,  1306,  1523,  1530,-32768,
  -32768,  1293,-32768,  1297,  3984,  1301,  1296,  1320,-32768,  1333,
  -32768,-32768,  1327,-32768,  1997,  1721,  2091,  1372,  1372,  1372,
     879,   879,   879,   879,   695,   695,  1228,  1228,  1228,  1228,
    1228,-32768,-32768,-32768,  1334,  3792,   350,  3853,-32768,  1577,
      83,  1580,   379,-32768,-32768,  1581,  1587,  1590,  1346,  1067,
    1067,    90,    90,-32768,-32768,  1591,    36,    44,-32768,-32768,
    1600,   379,  1609,-32768,-32768,  1611,  1612,  1613,    53,   379,
    1615,  1618,  1620,    90,  2226,-32768,-32768,-32768,  1279,  1426,
     743,   354,  1619,   379,    46,   447,  2226,   447,    51,  1621,
  -32768,-32768,-32768,   379,  1519,    92,    92,  1622,  1623,  1625,
    1627,  1631,  1632,  1633,  1635,-32768,  4069,-32768,  4069,-32768,
    4069,-32768,-32768,    90,    90,   447,  1636,  1637,  1641,  1651,
    1652,  1658,   379,   379,  1660,  1663,  1664,  1665,  1668,   379,
    1669,   379,  1429,  1431,  1428,   379,-32768,-32768,-32768,  4069,
    1430,   572,   588,   600,   605,  1674,   379,-32768,   805,-32768,
    1433,-32768,  4378,-32768,  1435,  1675,  1678,  1681,  1682,    92,
    1683,    92,  1684,  1686,  1691,  1031,  1694,  1696,    92,  1698,
    1699,  1700,  1224,-32768,  1701,  1702,-32768,  1456,-32768,  1997,
    1708,-32768,  1468,  1466,-32768,-32768,   342,-32768,-32768,  1997,
    1500,   631,  1742,  1747,  1754,   805,  1755,    57,  1511,  1760,
    1759,  1761,  1773,  1774,  1777,-32768,-32768,  1778,-32768,-32768,
    1780,  1781,  1783,  1784,  1803,  1804,  1805,  1808,  1809,  1812,
    1820,   397,-32768,  1825,  1826,  1832,  1833,-32768,  1762,  1836,
    1838,  1598,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    90,
    1842,-32768,-32768,  1604,-32768,    90,-32768,-32768,  1605,  1848,
    1849,-32768,-32768,-32768,  1850,  1852,-32768,  1853,   805,  1855,
    1856,  1857,-32768,  1859,-32768,  1860,  1608,-32768,  1624,  1626,
  -32768,  1602,  1614,  1616,  1634,  1638,  1639,  1645,  4399,   946,
    4420,   828,  4441,    78,   384,  1671,  1672,  1640,  1673,  1676,
    1677,  1680,  1687,  1711,  1592,  1628,  1712,  1749,  1750,  1751,
    1752,  1756,  1757,  1642,    54,    54,-32768,  1862,  4932,  1685,
    1688,  1679,  1703,  1710,-32768,  1865,-32768,    92,  4069,    16,
  -32768,-32768,-32768,-32768,  1763,-32768,  1764,-32768,-32768,-32768,
    1765,-32768,-32768,  1766,-32768,-32768,-32768,  1877,   657,-32768,
  -32768,    90,  6233,  1643,-32768,  4069,-32768,  1644,-32768,  3792,
      90,-32768,-32768,-32768,-32768,  1878,-32768,-32768,  1879,  1767,
    1922,  1765,-32768,-32768,-32768,-32768,-32768,   658,-32768,   708,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  1769,  1689,-32768,-32768,-32768,-32768,  1707,  1931,  2001,
    2002,  2010,  2008,-32768,-32768,  2009,-32768,  2016,  2017,   398,
  -32768,-32768,   727,-32768,-32768,-32768,-32768,-32768,   739,-32768,
  -32768,  2018,  1806,  2054,    92,  2057,  2069,  4069,  2076,    92,
      90,  4069,  1830,    92,  4069,  4069,    92,-32768,-32768,  4069,
    1834,    92,  4069,  4069,  4069,  4069,-32768,-32768,  4069,  4069,
    4069,  1835,  4069,    92,-32768,-32768,  4069,  4069,  2079,  1841,
    1843,  4069,  4069,  1844,-32768,-32768,    92,  1067,  2078,    92,
    2226,  2226,  2226,  4069,  2226,  2081,  2083,  2087,  2089,  4069,
    2092,  2093,    90,  2094,  2096,-32768,-32768,-32768,-32768,    32,
  -32768,  1861,  2226,  3906,  1864,  3906,  3906,-32768,  1866,  4963,
  -32768,    92,    92,  1031,    92,-32768,-32768,-32768,  1854,-32768,
  -32768,  1858,  4462,-32768,  1997,  1874,-32768,-32768,  2113,-32768,
    2117,-32768,  2119,-32768,  2120,-32768,   379,  2121,  2152,-32768,
  -32768,-32768,  1880,-32768,-32768,-32768,-32768,-32768,-32768,  1210,
    1210,  1210,    90,-32768,-32768,-32768,   379,-32768,   379,-32768,
  -32768,-32768,  1913,  1872,  1907,  4483,  1908,  1916,  1910,  4504,
  -32768,  2158,   525,   608,  2159,  4525,-32768,  2160,   720,   788,
    1104,  1599,  4546,  1840,  2066,-32768,  2317,  2162,  2414,  2683,
    2163,-32768,-32768,  2909,  2960,-32768,   367,-32768,-32768,  1923,
    1929,  1932,  1924,  4567,  1927,-32768,-32768,  1928,  1930,  5909,
    1938,  1943,  1942,   741,-32768,   372,   376,  1970,  1971,-32768,
    4069,  1973,   753,  4069,   755,   775,-32768,-32768,  1974,  1977,
    1978,  1981,  1988,   571,-32768,  1989,  4069,  3792,  1984,  2232,
    1987,-32768,-32768,  1689,  1995,-32768,-32768,  2236,-32768,-32768,
    2237,  2238,  2241,  2247,-32768,-32768,  1630,  2273,  2226,  4069,
    2226,  2276,  2275,  2278,    92,  2348,-32768,-32768,-32768,-32768,
      92,  2572,-32768,-32768,-32768,-32768,-32768,    92,-32768,-32768,
    2833,-32768,-32768,-32768,-32768,-32768,  2884,  2935,-32768,-32768,
     794,  2277,  4069,  2031,    92,  2279,  2280,  4069,   447,   447,
    4069,  4069,  2281,  2287,  2292,   447,  2293,  2174,  2300,  2168,
  -32768,  2301,-32768,-32768,  4994,  2226,  2058,  5025,  2060,  2062,
    2061,  2309,  2325,  2326,  2328,  2331,  4069,  4069,  4069,  4069,
    4069,-32768,-32768,  2085,  5056,-32768,  2228,  2333,  2335,-32768,
  -32768,  2090,  2100,-32768,-32768,-32768,-32768,  2327,-32768,  2098,
    5936,  2101,  2102,-32768,  2111,  2106,-32768,  2110,-32768,   377,
  -32768,-32768,-32768,-32768,-32768,-32768,  4588,  2342,  2112,-32768,
  -32768,  5963,  2122,  2123,  4609,  4630,-32768,-32768,-32768,   797,
  -32768,   447,-32768,   447,  2226,-32768,-32768,  1439,  1451,-32768,
    2114,-32768,-32768,  2107,  3906,    16,-32768,-32768,-32768,-32768,
    2341,  3197,  3241,  3478,  3499,  3528,  4069,-32768,  2362,-32768,
  -32768,-32768,  1210,  2149,  2365,  2366,  4069,  4069,  2368,    92,
    4069,  2150,  4069,   404,    92,  2151,    92,  2396,  2399,  2400,
    4069,  4069,  2401,    92,   816,-32768,-32768,  2405,  2408,  2409,
  -32768,-32768,  2170,-32768,-32768,  2226,  4069,   825,  2171,-32768,
  -32768,-32768,-32768,-32768,-32768,  5087,  2165,  2175,  2177,-32768,
  -32768,-32768,  5990,  4651,-32768,  2183,  4672,-32768,  6017,  2426,
    2430,  4069,    92,  2432,    90,-32768,-32768,  2191,  2434,   392,
  -32768,-32768,-32768,  6044,  6071,-32768,  2189,  2436,  2440,  2441,
    2442,  2443,    90,-32768,  2194,  4693,  2198,  4069,-32768,  2445,
    2446,  2452,  3114,  2453,  2226,  2209,  4069,  3165,  2212,  2458,
    2459,  3549,  2461,  2462,  2464,  2465,  2219,  2467,    92,  2223,
    2225,  2472,-32768,  2227,-32768,-32768,-32768,  2474,-32768,-32768,
    4069,  2230,  6098,-32768,-32768,-32768,-32768,-32768,  2229,-32768,
    6125,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    4069,-32768,  2239,-32768,-32768,-32768,  2477,-32768,  2251,  5118,
    4069,  2478,  2427,  4069,  3216,  2248,  3395,  6152,  2492,  3446,
    3497,-32768,  2495,-32768,  4714,-32768,    90,  4735,-32768,-32768,
  -32768,  2496,-32768,  2498,  2499,-32768,  4069,  2501,  4069,  3676,
  -32768,-32768,-32768,  4756,-32768,  6179,-32768,  4069,  2380,  2521,
    5149,  2524,-32768,-32768,   805,  2523,  2282,-32768,  2532,  2533,
  -32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,   -72,-32768,-32768,  -295,  1484,-32768,
  -32768,  1486,  -477,-32768,  -486,-32768,  -374,  -526,  -560,-32768,
  -32768,-32768,-32768,   198,-32768,  -611,-32768,  -998,-32768,  -695,
  -32768,-32768,-32768,-32768,-32768,-32768,  1744,-32768,  1369,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1905,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,   917,-32768,-32768,-32768,-32768,-32768,
  -32768,  1646,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1080,
    -749,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768, -1503,-32768,-32768,-32768,-32768,  1246,  1070,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     859,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1990,-32768,  1873,-32768,  2447,-32768,  1979,  2338,  -316,-32768,
     475,    15,   -45,-32768,-32768,   984,  -641,  -556,  -171,   -80,
  -32768,    -3,   -95,   -66
};


#define	YYLAST		6480


static const short yytable[] =
{
      28,   290,   167,   597,   678,   870,   645,   727,   174,   175,
    1258,   464,   795,   425,  1187,   474,   169,   657,    70,   332,
    1193,   333,     4,     4,   455,   456,   458,   667,    85,   529,
     332,   671,   333,   465,   332,   675,   333,  1607,   520,    80,
     332,  1215,   333,   707,   708,   643,   885,  1646,   886,  1218,
     716,     4,   551,   227,     4,    -2,     4,  1655,  1227,  1485,
       5,     6,   184,  1661,  1367,   346,   193,   199,   204,   209,
     213,   218,  1670,     4,     4,    29,   108,    11,  1676,  1677,
       5,     6,    71,    72,    73,   118,    74,    30,   633,   880,
     881,   882,   883,   976,   595,   227,  1449,    11,   227,   227,
     633,   236,    31,   592,    28,    29,   704,   308,    28,    28,
      28,    28,    28,    28,   219,   536,   228,    29,   224,   224,
     233,   395,  1011,   393,  1013,    29,   192,   198,   203,   208,
       4,   217,   171,    60,   700,   302,     5,     6,    71,    72,
      73,   172,    74,   795,   795,   795,   795,   399,  1608,   284,
     636,   228,   977,    11,    39,   285,  1180,   586,   228,  1228,
     400,   228,   228,   228,   478,  1450,   194,   371,   536,  1229,
    1144,   401,     5,     6,    71,    72,    73,   303,    74,  1014,
      71,    72,    73,   887,    74,   812,   813,   814,   815,    11,
     537,  1145,   909,    59,   910,   301,  1357,   392,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,     4,  1451,  1045,   847,   176,   476,
       5,     6,     4,    29,    61,   177,   338,   195,     5,     6,
      71,    72,    73,   795,    74,  1452,  1453,    11,  1002,  1397,
      71,    72,    73,   537,    74,    11,   120,   644,  1105,   888,
    1003,    29,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   334,    69,
     795,   335,    62,   703,    29,    63,   530,    71,    72,    73,
     536,    74,   335,   334,   521,  1609,   335,    84,  1216,   578,
     644,    64,   335,   889,   512,   293,  1219,   229,  1266,   705,
     457,   181,   182,  1272,   294,   233,   726,   536,    65,   644,
     536,    71,    72,    73,  1103,    74,   233,   233,   233,   167,
     -64,    81,   816,    66,   119,   233,   438,   526,     4,  1196,
      29,  1454,   850,   169,     5,     6,    71,    72,    73,   229,
      74,   424,   229,   229,   229,    82,  1892,    86,   391,  1146,
    1358,    11,     4,   569,  1897,   537,  1511,   374,     5,     6,
      71,    72,    73,   701,    74,    71,    72,    73,    67,    74,
      71,    72,    73,   482,    74,    11,    68,   189,   190,   550,
     483,  1116,   537,   795,     4,   537,   177,  1117,     4,   848,
     407,  1106,    83,   433,     5,     6,    71,    72,    73,  1118,
      74,   532,  1456,   790,   408,  1119,   691,    29,   693,   694,
     695,    11,    52,    53,   196,   544,    54,    55,   411,   744,
     745,   -64,  1859,  1004,   412,   554,  1954,   236,   434,  1956,
     558,    29,   413,    87,   517,   435,   562,  1092,   564,  1259,
    1959,  1960,   566,   374,    32,    88,    33,  1093,  1210,  1211,
      89,   634,    52,    53,   103,   638,    54,    55,    34,    35,
      36,   210,   211,  1260,   185,   186,  1979,  1120,   402,   200,
     201,  1457,   403,  1121,    37,  1539,  1540,   338,    90,   809,
     810,    91,   404,  1094,  1095,  1096,  1097,  1098,  1099,  1860,
     698,  1861,   582,    92,  1352,   833,    71,    72,    73,   483,
      74,  1159,  1862,  1169,  1359,  1006,    93,   439,   713,  1007,
    1008,   187,   188,  1541,  1458,  1863,   821,   822,    94,   167,
     167,  1459,  1460,   440,    95,  1542,   167,   972,  1236,    96,
    1171,  1864,  1657,  1178,  1340,   587,  1638,  1070,  1639,   635,
    1270,  1461,   483,   441,  1462,  1463,   177,  1071,   795,  1072,
     699,   436,   -67,   855,   974,     4,   225,   483,   795,   177,
     737,   483,   409,   373,   374,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   205,   206,   902,   903,   904,
     905,   906,   907,   416,    97,   908,  1065,    98,  1066,   338,
     414,   233,   485,   374,   442,  1155,  1067,  1198,  1326,   214,
     215,   417,   483,   427,  1199,  1100,  1261,  1262,    99,   744,
     864,   418,   419,   428,  1681,  1658,   852,   853,   100,  1698,
     420,  1682,   421,  1701,  1811,   819,  1699,    38,    56,   429,
    1699,  1812,   829,   430,   101,   826,   827,  1464,   711,  1907,
     405,   712,   281,   282,   283,  1365,  1908,   102,   284,  1391,
     796,  1543,   104,    29,   285,   576,   746,  1865,   117,  1715,
    1716,  1717,  1718,  1719,  1720,   443,   121,    28,    56,   120,
      75,    76,    77,    78,    28,   591,   177,  1009,    71,    72,
      73,  1368,    74,   122,   811,   818,   374,   593,   823,   692,
     374,   123,   828,  1165,  1166,  1167,  1168,  1832,  1832,   124,
     338,    80,   748,   749,   173,  1073,   125,  1181,  1414,   179,
     270,   271,   272,   273,   274,   234,   275,   276,   277,   278,
     750,   751,   279,   280,   281,   282,   283,  1663,   797,   798,
     284,   279,   280,   281,   282,   283,   285,   800,   801,   284,
     834,   802,   803,   220,  1068,   285,   662,   237,   270,   271,
     272,   273,   274,   238,   275,   276,   277,   278,   746,   445,
     279,   280,   281,   282,   283,  1049,  1212,  1213,   284,   422,
     239,   431,   804,   805,   285,  1050,  1051,  1052,   286,   838,
     374,   796,   796,   796,   796,   839,   374,   891,  1235,   240,
    1640,  1641,  1642,   840,   374,  1664,   287,  1151,  1152,  1153,
    1154,   446,   241,  1847,   841,   374,   988,   989,   990,   991,
     992,   993,   994,   995,   996,   980,   374,   997,   289,  1627,
     981,   982,   242,   998,  1721,  1320,   374,   243,  1295,  1296,
     244,   270,   271,   272,   273,   274,   999,   275,   276,   277,
     278,  1321,   374,   279,   280,   281,   282,   283,   447,   245,
     448,   284,  1500,  1322,   374,   246,  1587,   285,  1323,   374,
     247,   807,  1621,  1242,  1243,  1244,  1245,  1246,  1247,  1248,
    1255,   796,   449,   795,   248,  1055,  1201,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1361,   374,  1021,  1022,   837,   249,
     796,   796,   796,   796,   796,   796,   796,   796,   796,   796,
     796,   796,   796,   796,   796,   796,   250,   851,   796,  1506,
    1507,  1521,   177,   251,  1590,  1591,  1592,   450,  1594,   297,
    1948,  1053,  1104,   252,   856,     5,     6,    71,    72,    73,
     253,    74,   904,   905,   906,   907,  1611,   254,   908,  1102,
     269,   291,    11,   270,   271,   272,   273,   274,   255,   275,
     276,   277,   278,   256,  1402,   279,   280,   281,   282,   283,
    1405,  1523,   177,   284,   257,  1440,  1503,   258,  1441,   285,
     466,   467,   468,   469,  1158,   338,   298,   259,  1442,  1443,
    1545,   177,  1444,  1445,   292,   233,   233,   233,   233,   470,
     260,  1000,  1547,   177,  1696,  1697,  1256,  1520,   261,   233,
    1269,   295,  1271,  1522,   167,  1524,  1706,   374,  1708,   374,
     262,   270,   271,   272,   273,   274,   167,   275,   276,   277,
     278,   796,   296,   279,   280,   281,   282,   283,  1709,   374,
    1297,   284,   309,  1063,   126,   127,     4,   285,  1546,   315,
    1075,   328,  1076,  1077,  1548,  1078,  1753,  1754,   340,  1205,
    1822,  1823,   330,  1848,   347,  1079,  1508,   341,   233,   233,
     134,   135,   136,   137,   138,  1515,   164,   170,  1222,  1877,
    1878,   348,  1080,  1081,  1082,   394,  1230,  1232,  1886,   374,
     233,  1446,   398,  1432,   720,   721,  1433,  1083,   475,   452,
    1265,  1268,  1739,   459,  1741,  1274,  1434,  1435,  1436,   460,
    1276,   461,   462,   221,   222,   479,   463,   486,   481,   235,
     487,  1665,   510,   515,   902,   903,   904,   905,   906,   907,
     233,   233,   908,   516,   522,  1107,   523,   527,   531,  1304,
    1305,   534,   533,   535,   540,  1558,  1311,   541,  1313,   542,
    1084,   543,  1317,  1775,   263,   264,   265,   545,   546,  1780,
     547,   548,   552,  1325,   549,   270,   271,   272,   273,   274,
     553,   275,   276,   277,   278,  1150,   557,   279,   280,   281,
     282,   283,   555,   556,   559,   284,   561,  1160,   563,   565,
    1161,   285,   567,   568,   570,   575,   796,  1602,   577,   579,
    1170,  1172,  1173,  1174,   580,   581,   796,  1179,   583,  1437,
     584,   275,   276,   277,   278,   585,  1085,   279,   280,   281,
     282,   283,   594,  1086,   590,   284,   598,   620,  1826,   630,
     627,   285,   637,   640,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   233,  1643,   642,   647,
     649,   650,   233,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   651,  1884,
     654,   656,   925,   658,   663,   664,   665,   666,   674,   668,
      71,    72,   926,   672,    74,   676,   679,   680,   682,   453,
     454,   683,    40,  1278,  1279,   684,    41,   685,  1838,   689,
     690,   702,   696,   709,   473,   710,   718,   723,   729,   726,
    1889,   728,  1612,   738,  1614,  1615,   338,   270,   271,   272,
     273,   274,   739,   275,   276,   277,   278,   740,  1928,   279,
     280,   281,   282,   283,   741,   521,   742,   284,   233,   747,
     753,   799,   831,   285,   806,   808,   820,   233,   511,  1238,
      42,  1239,  1240,  1241,   825,   830,    43,  1334,   836,  1336,
     844,   842,   843,   845,   854,   967,  1343,   861,   519,    44,
     862,    45,   863,   164,   869,   528,   871,   873,   879,   874,
     167,   167,   167,    46,   167,   875,   876,    47,   877,  1242,
    1243,  1244,  1245,  1246,  1247,  1248,  1249,  1250,   884,    48,
     911,   890,   167,  -661,   918,   920,   927,   921,   928,   929,
     930,   931,   932,   933,   934,   935,   936,   233,    49,   922,
     937,   973,   923,   938,  1995,   968,   939,   969,   970,   940,
     941,   942,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   955,   956,   957,   971,   975,   589,
     958,   979,   790,  1012,  1015,   959,  1016,  1017,   960,  1018,
    1019,   908,   621,   622,  1023,  1041,  1047,  1108,  1109,   233,
      50,  1110,    51,  1111,   623,  1115,  1112,  1157,  1122,  1113,
    1114,   624,   625,   626,  1123,  1124,  1125,   628,   629,  1126,
    1127,  1128,  1129,  1130,  1131,   631,  1238,  1176,  1239,  1240,
    1241,   796,  1132,  1133,  1134,  1135,  1136,  1139,  1137,  1827,
    1177,  1828,  1182,  1634,  1829,  1498,  1277,  1140,  1184,  1138,
     961,  1827,  1251,  1828,  1156,  1185,  1829,  1175,  1141,   233,
    1186,  1164,  1191,  1644,  1188,  1645,  1242,  1243,  1244,  1245,
    1246,  1247,  1248,  1249,  1250,  1190,   687,   688,  1183,  1242,
    1243,  1244,  1245,  1246,  1247,  1248,  1830,  1192,   167,  1904,
     167,  1242,  1243,  1244,  1245,  1246,  1247,  1248,  1830,  1194,
    1195,  1197,  1202,   164,   164,   976,  1206,  1917,   714,   715,
     164,   717,  1207,  1762,  1763,  1208,  1214,   722,  1209,   725,
    1769,   898,   899,   900,   901,  1221,  1666,   902,   903,   904,
     905,   906,   907,  1837,  1223,   908,  1224,  1225,  1226,   167,
    1231,  1233,  1552,  1234,  1264,   167,  1275,  1557,  1281,  1280,
    1282,  1561,  1283,   752,  1564,   925,  1284,  1285,  1286,  1567,
    1287,  1298,  1299,    71,    72,   926,  1300,    74,   272,   273,
     274,  1577,   275,   276,   277,   278,  1301,  1302,   279,   280,
     281,   282,   283,  1303,  1586,  1306,   284,  1589,  1307,  1308,
    1309,  1977,   285,  1310,  1312,  1314,  1824,  1315,  1825,  1254,
    1316,  1324,  1330,  1319,  1329,  1331,   846,  1327,  1332,  1333,
    1335,  1337,  1831,  1338,   167,   126,   127,   128,  1339,  1619,
    1620,  1341,  1622,  1342,  1834,  1344,  1345,  1346,  1349,  1350,
    1351,  1353,   858,  1356,   859,   860,   130,   131,   132,   133,
    1355,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,  1360,   273,   274,  1362,
     275,   276,   277,   278,  1363,   167,   279,   280,   281,   282,
     283,  1364,  1366,  1369,   284,  1371,  1372,  1398,  1373,   927,
     285,   928,   929,   930,   931,   932,   933,   934,   935,   936,
    1374,  1375,   338,   937,  1376,  1378,   938,  1380,  1381,   939,
    1382,  1383,   940,   941,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
    1384,  1385,  1386,   958,   167,  1387,  1388,   965,   959,  1389,
     966,   960,   270,   271,   272,   273,   274,  1390,   275,   276,
     277,   278,  1393,  1394,   279,   280,   281,   282,   283,  1395,
    1396,  1399,   284,  1400,  1401,  1475,   986,  1668,   285,  1403,
    1404,  1406,  1745,  1407,  1408,  1421,  1424,  1410,  1747,  1411,
    1413,   233,  1415,  1416,  1417,  1749,  1419,  1420,  1425,  1490,
    1426,  1422,  1497,  1423,   126,   127,   525,   129,  1518,   233,
      54,  1476,  1758,  1737,  1505,  1516,  1517,  1468,  1427,  1484,
    1510,  1513,  1428,  1429,  1042,   130,   131,   132,   133,  1430,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,  1466,  1467,  1469,   160,  1519,
    1470,  1471,  1494,   161,  1472,  1526,   162,  1492,  1529,   228,
    1493,  1473,   126,   127,   754,   345,   894,   895,   896,   897,
     898,   899,   900,   901,  1528,  1495,   902,   903,   904,   905,
     906,   907,  1496,   233,   908,  1474,  1477,  1162,   134,   135,
     136,   137,   138,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     126,   127,   754,  1478,  1479,  1480,  1481,  1855,  1530,  1531,
    1482,  1483,  1867,  1532,  1869,  1533,  1535,  1501,  1502,   177,
    1504,  1876,  1525,  1537,  1538,  1549,   134,   135,   136,   137,
     138,   755,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,  1550,   782,
    1902,  1551,  1553,   270,   271,   272,   273,   274,   164,   275,
     276,   277,   278,  1669,  1554,   279,   280,   281,   282,   283,
     164,  1556,  1560,   284,  1580,  1588,  1566,  1575,  1595,   285,
    1596,   159,  1597,  1581,  1598,  1582,  1585,  1600,  1601,  1603,
    1288,  1624,  1290,  1604,  1292,  1625,  1942,   160,   126,   127,
     128,   129,   161,  1610,    54,   162,  1613,   782,  1629,  1616,
     229,  1628,  1630,   163,  1631,  1632,  1648,  1637,  1635,   130,
     131,   132,   133,  1318,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,  1636,
    1647,  1649,  1651,  1652,  1653,  1656,  1659,  1662,   783,  1672,
    1675,   126,   127,   128,   784,   785,  1685,  1684,  1687,  1686,
     786,  1689,  1690,   787,  1691,  1693,  1043,  1044,   788,   789,
    1694,   790,   130,   131,   132,   133,  1695,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,  1702,  1703,  1711,  1712,   783,  1705,  1710,   126,
     127,   128,   784,   785,  1713,  1714,  1723,  1725,   786,  1726,
    1727,   787,  1729,  1730,  1733,  1734,   788,   789,  1735,   790,
     130,   131,   132,   133,  1736,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
    1738,  1742,  1743,  1744,  1755,  1757,  1759,  1760,  1766,   270,
     271,   272,   273,   274,  1767,   275,   276,   277,   278,  1768,
    1770,   279,   280,   281,   282,   283,  1771,  1772,  1776,   284,
    1785,  1781,  1499,  1783,  1784,   285,  1786,   895,   896,   897,
     898,   899,   900,   901,  1671,   159,   902,   903,   904,   905,
     906,   907,  1787,  1788,   908,  1789,  1790,  1796,  1798,  1512,
    1799,   160,  1800,  1803,  1801,  1804,   161,  1815,  1839,   162,
     126,   127,     4,   925,  1802,  1806,  1807,   163,  1808,  1836,
    1809,    71,    72,   926,  1810,    74,  1816,  1846,  1835,  1818,
    1819,  1773,  1850,  1851,  1774,  1854,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,  1849,  1857,  1870,   160,  1868,  1871,  1872,  1875,   161,
    1879,  1555,   162,  1880,  1881,  1559,  1883,   644,  1562,  1563,
     163,  1673,  1890,  1565,  1891,  1887,  1568,  1569,  1570,  1571,
    1895,  1899,  1572,  1573,  1574,  1900,  1576,  1903,  1905,  1906,
    1578,  1579,  1911,  1912,  1913,  1583,  1584,  1919,  1914,  1915,
    1916,  1921,  1923,  1924,   164,   164,   164,  1593,   164,  1925,
    1927,  1929,   160,  1599,  1932,  1933,  1934,   161,  1936,  1937,
     162,  1938,  1939,  1940,  1941,  1943,   164,  1944,   163,  1945,
    1946,  1947,  1950,  1953,  1961,  1965,  1958,   927,  1966,   928,
     929,   930,   931,   932,   933,   934,   935,   936,  1962,  1972,
    1969,   937,  1975,  1980,   938,  1981,  1982,   939,  1984,  1991,
     940,   941,   942,   943,   944,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,  1992,  1994,
    1996,   958,  1999,  2000,  1203,  1997,   959,  1204,   913,   960,
     270,   271,   272,   273,   274,   743,   275,   276,   277,   278,
    1728,  1347,   279,   280,   281,   282,   283,   681,  1606,   832,
     284,  1488,  1778,   697,   331,     0,   285,  1089,     0,   226,
       0,     0,     0,     0,     0,     0,     0,   925,     0,     0,
       0,     0,     0,   160,     0,    71,    72,   926,   161,    74,
       0,   162,     0,     0,  1704,     0,     0,  1707,     0,   724,
       0,  1746,     0,     0,     0,     4,     0,     0,     0,     0,
    1724,     5,     6,     0,     0,     0,     0,     0,     0,     7,
       8,     9,    10,     0,     0,     0,     0,     0,    11,     0,
       0,     0,   164,  1740,   164,     0,     0,   270,   271,   272,
     273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
       0,    12,     0,   285,     0,     0,  1756,    13,     0,     0,
       0,  1761,     0,     0,  1764,  1765,     0,     0,     0,     0,
      14,     0,    15,   164,     0,     0,     0,     0,     0,   164,
    1674,     0,     0,     0,    16,     0,     0,     0,    17,     0,
    1791,  1792,  1793,  1794,  1795,     0,     0,     0,     0,     0,
      18,   927,     0,   928,   929,   930,   931,   932,   933,   934,
     935,   936,     0,   599,     0,   937,     0,     0,   938,    19,
       0,   939,     0,     0,   940,   941,   942,   943,   944,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
     956,   957,     0,     0,     0,   958,     0,     0,   164,     0,
     959,     0,     0,   960,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1845,    20,   600,    21,     0,     0,     0,     0,     0,     0,
    1852,  1853,     0,     0,  1856,     0,  1858,     0,     0,     0,
       0,     0,     0,     0,  1873,  1874,     0,     0,     0,     0,
       0,   601,     0,     0,     0,     0,     0,     0,     0,   164,
    1885,     0,     0,     0,     0,  1748,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   925,     0,
       0,   602,     0,     0,     0,  1901,    71,    72,   926,     0,
      74,     0,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,     0,
       0,  1922,     0,     0,     0,     0,     0,     0,   164,     0,
    1930,     0,     0,     0,     0,     0,     0,     0,     0,   925,
       0,     0,     0,     0,     0,     0,     0,    71,    72,   926,
       0,    74,     0,     0,  1949,     0,   270,   271,   272,   273,
     274,     0,   275,   276,   277,   278,  1678,     0,   279,   280,
     281,   282,   283,     0,  1957,     0,   284,     0,     0,     0,
       0,     0,   285,     0,  1964,     0,     0,  1967,     0,     0,
     925,     0,     0,     0,     0,     0,     0,     0,    71,    72,
     926,     0,    74,     0,     0,     0,     0,     0,     0,     0,
    1983,     0,  1985,     0,     0,     0,     0,  1679,     0,     0,
       0,  1990,   927,     0,   928,   929,   930,   931,   932,   933,
     934,   935,   936,     0,     0,     0,   937,     0,     0,   938,
       0,     0,   939,     0,     0,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,     0,     0,     0,   958,     0,     0,     0,
       0,   959,     0,   927,   960,   928,   929,   930,   931,   932,
     933,   934,   935,   936,     0,     0,     0,   937,     0,     0,
     938,     0,     0,   939,     0,     0,   940,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,     0,     0,     0,   958,     0,     0,
       0,     0,   959,     0,   927,   960,   928,   929,   930,   931,
     932,   933,   934,   935,   936,     0,  1750,     0,   937,     0,
       0,   938,     0,     0,   939,     0,     0,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,   955,   956,   957,     0,     0,     0,   958,   925,
       0,     0,     0,   959,     0,     0,   960,    71,    72,   926,
       0,    74,   270,   271,   272,   273,   274,  1751,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     925,     0,     0,     0,     0,     0,     0,     0,    71,    72,
     926,     0,    74,   270,   271,   272,   273,   274,  1752,   275,
     276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,  1840,     0,     0,     0,     0,   285,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   925,     0,     0,     0,     0,     0,     0,     0,    71,
      72,   926,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1841,     0,
       0,     0,     0,   927,     0,   928,   929,   930,   931,   932,
     933,   934,   935,   936,     0,     0,     0,   937,     0,     0,
     938,     0,     0,   939,     0,     0,   940,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,     0,     0,     0,   958,     0,     0,
       0,     0,   959,     0,   927,   960,   928,   929,   930,   931,
     932,   933,   934,   935,   936,     0,     0,     0,   937,     0,
       0,   938,     0,     0,   939,     0,     0,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,   955,   956,   957,     0,     0,     0,   958,     0,
       0,     0,     0,   959,     0,   927,   960,   928,   929,   930,
     931,   932,   933,   934,   935,   936,     0,  1926,     0,   937,
       0,     0,   938,     0,     0,   939,     0,     0,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,     0,     0,     0,   958,
     925,     0,     0,     0,   959,     0,     0,   960,    71,    72,
     926,     0,    74,     0,     0,     0,     0,     0,  1931,     0,
     270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
       0,   925,     0,     0,     0,     0,     0,     0,     0,    71,
      72,   926,     0,    74,   270,   271,   272,   273,   274,  1968,
     275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,  1842,     0,     0,     0,     0,
     285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   925,     0,     0,     0,  1843,     0,     0,     0,
      71,    72,   926,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   927,  1844,   928,   929,   930,   931,
     932,   933,   934,   935,   936,     0,     0,     0,   937,     0,
       0,   938,     0,     0,   939,     0,  1935,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,   955,   956,   957,     0,     0,     0,   958,     0,
       0,     0,     0,   959,     0,   927,   960,   928,   929,   930,
     931,   932,   933,   934,   935,   936,     0,     0,     0,   937,
       0,     0,   938,     0,     0,   939,     0,     0,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,     0,     0,     0,   958,
       0,     0,     0,     0,   959,     0,   927,   960,   928,   929,
     930,   931,   932,   933,   934,   935,   936,     0,  1970,     0,
     937,     0,     0,   938,     0,     0,   939,     0,     0,   940,
     941,   942,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   955,   956,   957,     0,     0,     0,
     958,   925,     0,     0,     0,   959,     0,     0,   960,    71,
      72,   926,     0,    74,     0,     0,     0,     0,     0,  1973,
       0,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
    1974,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   927,     0,   928,   929,   930,
     931,   932,   933,   934,   935,   936,     0,     0,     0,   937,
       0,     0,   938,     0,     0,   939,     0,     0,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   126,   127,   128,   958,
       0,     0,     0,     0,   959,     0,     0,   960,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,   132,
     133,     0,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     0,     0,   126,
     127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1200,     0,     0,     0,     0,     0,     0,     0,  1986,
     130,   131,   132,   133,     0,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     126,   127,     4,   892,   893,   894,   895,   896,   897,   898,
     899,   900,   901,     0,     0,   902,   903,   904,   905,   906,
     907,     0,     0,   908,     0,  1020,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   126,   127,     4,   518,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,     0,     0,   902,   903,   904,
     905,   906,   907,     0,     0,   908,     0,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   573,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,     0,   161,     0,     0,   162,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,   316,   588,   127,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,     0,     0,     0,     0,   161,     0,     0,
     162,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   513,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   160,     0,     0,     0,   514,   161,     0,
       0,   162,     0,     0,     0,     0,     0,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,     0,   572,   902,
     903,   904,   905,   906,   907,     0,     0,   908,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1189,     0,
       0,     0,     0,     0,   160,     0,     0,     0,     0,   161,
       0,     0,   162,     0,     0,     0,   270,   271,   272,   273,
     274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
     273,   274,   285,   275,   276,   277,   278,   488,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,     0,   574,
       0,     0,     0,   285,     0,   160,     0,     0,     0,     0,
     161,     0,     0,   162,     0,     0,     0,     0,   270,   271,
     272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
     271,   272,   273,   274,   285,   275,   276,   277,   278,   489,
       0,   279,   280,   281,   282,   283,     0,     0,   160,   284,
       0,     0,     0,   161,     0,   285,   162,     0,     0,     0,
     270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
     278,   500,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
     276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
     275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
     285,   275,   276,   277,   278,   507,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
     274,   285,   275,   276,   277,   278,   508,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
     273,   274,   285,   275,   276,   277,   278,   509,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
     272,   273,   274,   285,   275,   276,   277,   278,   730,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
     271,   272,   273,   274,   285,   275,   276,   277,   278,   731,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
     983,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
     278,  1149,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
     277,   278,  1328,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
     276,   277,   278,  1431,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
     275,   276,   277,   278,  1439,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
     285,   275,   276,   277,   278,  1448,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
     274,   285,   275,   276,   277,   278,  1626,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
     273,   274,   285,   275,   276,   277,   278,  1650,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
     272,   273,   274,   285,   275,   276,   277,   278,  1654,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
     271,   272,   273,   274,   285,   275,   276,   277,   278,  1660,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
    1667,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,   270,   271,   272,   273,   274,   285,   275,   276,   277,
     278,  1688,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,   270,   271,   272,   273,   274,   285,   275,   276,
     277,   278,  1814,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,   270,   271,   272,   273,   274,   285,   275,
     276,   277,   278,  1820,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,   270,   271,   272,   273,   274,   285,
     275,   276,   277,   278,  1821,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,   270,   271,   272,   273,   274,
     285,   275,   276,   277,   278,  1894,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,   270,   271,   272,   273,
     274,   285,   275,   276,   277,   278,  1896,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,   270,   271,   272,
     273,   274,   285,   275,   276,   277,   278,  1920,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,   270,   271,
     272,   273,   274,   285,   275,   276,   277,   278,  1976,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,   270,
     271,   272,   273,   274,   285,   275,   276,   277,   278,  1978,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
     270,   271,   272,   273,   274,   285,   275,   276,   277,   278,
    1987,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
     288,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
       0,   344,   270,   271,   272,   273,   274,     0,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
       0,     0,   736,   270,   271,   272,   273,   274,     0,   275,
     276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,     0,     0,     0,     0,     0,   285,
       0,     0,     0,  1148,   270,   271,   272,   273,   274,     0,
     275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,     0,     0,     0,     0,     0,
     285,     0,     0,     0,  1163,   270,   271,   272,   273,   274,
       0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,     0,     0,     0,     0,
       0,   285,     0,     0,     0,  1491,   270,   271,   272,   273,
     274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
       0,     0,   285,     0,     0,     0,  1617,   270,   271,   272,
     273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
       0,     0,     0,   285,     0,     0,     0,  1779,   270,   271,
     272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
       0,     0,     0,     0,   285,     0,     0,     0,  1782,   270,
     271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
       0,     0,     0,     0,     0,   285,     0,     0,     0,  1797,
     270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,     0,     0,     0,     0,     0,   285,     0,     0,     0,
    1888,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,     0,     0,     0,     0,     0,   285,     0,     0,
       0,  1963,   270,   271,   272,   273,   274,     0,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,     0,     0,   285,     0,
       0,     0,  1993,   270,   271,   272,   273,   274,     0,   275,
     276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,     0,   317,     0,     0,     0,   285,
     270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,     0,   372,     0,     0,     0,   285,   270,   271,   272,
     273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
       0,   490,     0,   285,   270,   271,   272,   273,   274,     0,
     275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,     0,     0,     0,   491,     0,
     285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,     0,     0,     0,   492,     0,   285,   270,   271,
     272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
       0,     0,   493,     0,   285,   270,   271,   272,   273,   274,
       0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,     0,     0,     0,   494,
       0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,   495,     0,   285,   270,
     271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
       0,     0,     0,   496,     0,   285,   270,   271,   272,   273,
     274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
     497,     0,   285,   270,   271,   272,   273,   274,     0,   275,
     276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,     0,     0,     0,   498,     0,   285,
     270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,     0,     0,     0,   499,     0,   285,   270,   271,   272,
     273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
       0,   501,     0,   285,   270,   271,   272,   273,   274,     0,
     275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,     0,     0,     0,   502,     0,
     285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,     0,     0,     0,   503,     0,   285,   270,   271,
     272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
       0,     0,   504,     0,   285,   270,   271,   272,   273,   274,
       0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,     0,     0,     0,   505,
       0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,   506,     0,   285,   270,
     271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
       0,     0,     0,   639,     0,   285,   270,   271,   272,   273,
     274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
     732,     0,   285,   270,   271,   272,   273,   274,     0,   275,
     276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,     0,     0,     0,   733,     0,   285,
     270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,     0,     0,     0,   734,     0,   285,   270,   271,   272,
     273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
       0,   735,     0,   285,   270,   271,   272,   273,   274,     0,
     275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,     0,   835,     0,     0,     0,
     285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,     0,     0,     0,   868,     0,   285,   270,   271,
     272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
       0,     0,   984,     0,   285,   270,   271,   272,   273,   274,
       0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,     0,     0,     0,   985,
       0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,  1692,     0,   285,   270,
     271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
       0,     0,     0,  1805,     0,   285,   270,   271,   272,   273,
     274,     0,   275,   276,   277,   278,     0,     0,   279,   280,
     281,   282,   283,     0,     0,     0,   284,     0,     0,     0,
    1817,     0,   285,   270,   271,   272,   273,   274,     0,   275,
     276,   277,   278,     0,     0,   279,   280,   281,   282,   283,
       0,     0,     0,   284,     0,     0,     0,  1893,     0,   285,
     270,   271,   272,   273,   274,     0,   275,   276,   277,   278,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
     284,     0,     0,     0,  1898,     0,   285,   270,   271,   272,
     273,   274,     0,   275,   276,   277,   278,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,   284,     0,     0,
       0,  1909,     0,   285,   270,   271,   272,   273,   274,     0,
     275,   276,   277,   278,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,   284,     0,     0,     0,  1910,     0,
     285,   270,   271,   272,   273,   274,     0,   275,   276,   277,
     278,     0,     0,   279,   280,   281,   282,   283,     0,     0,
       0,   284,     0,     0,     0,  1951,     0,   285,   270,   271,
     272,   273,   274,     0,   275,   276,   277,   278,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,   284,     0,
       0,     0,  1955,     0,   285,   270,   271,   272,   273,   274,
       0,   275,   276,   277,   278,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,   284,     0,     0,     0,  1971,
       0,   285,   270,   271,   272,   273,   274,     0,   275,   276,
     277,   278,     0,     0,   279,   280,   281,   282,   283,     0,
       0,     0,   284,     0,     0,     0,  1989,     0,   285,   270,
     271,   272,   273,   274,     0,   275,   276,   277,   278,     0,
       0,   279,   280,   281,   282,   283,     0,     0,     0,   284,
       0,     0,     0,     0,     0,   285,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,     0,     0,   902,   903,
     904,   905,   906,   907,     0,     0,   908,     0,     0,     0,
    1509
};

static const short yycheck[] =
{
       3,   172,    82,   480,   564,   754,   532,   618,   103,   104,
    1090,   327,   653,   308,  1012,   331,    82,   543,    21,     3,
    1018,     5,     5,     5,   319,   320,   321,   553,    31,     5,
       3,   557,     5,   328,     3,   561,     5,     5,     3,    24,
       3,     5,     5,   599,   600,     7,     3,  1550,     5,     5,
     606,     5,   426,     5,     5,     0,     5,  1560,     5,     5,
      11,    12,   107,  1566,     7,   236,   111,   112,   113,   114,
     115,   116,  1575,     5,     5,   256,    61,    28,  1581,  1582,
      11,    12,    13,    14,    15,     5,    17,   244,     5,   784,
     785,   786,   787,     5,    63,     5,    18,    28,     5,     5,
       5,   252,   244,   477,   107,   256,   592,   246,   111,   112,
     113,   114,   115,   116,   117,    23,    68,   256,   121,   122,
     123,   252,   871,   294,   873,   256,   111,   112,   113,   114,
       5,   116,   245,   252,     7,   180,    11,    12,    13,    14,
      15,   254,    17,   784,   785,   786,   787,   222,   116,   243,
     524,    68,    64,    28,     7,   249,    63,   473,    68,   106,
     235,    68,    68,    68,   335,    87,     5,   262,    23,   116,
      74,   246,    11,    12,    13,    14,    15,   180,    17,   874,
      13,    14,    15,   140,    17,   116,   117,   118,   119,    28,
      98,    95,   249,   246,   251,   180,  1194,   292,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,     5,   137,   911,   703,   247,   252,
      11,    12,     5,   256,   252,   254,   229,    66,    11,    12,
      13,    14,    15,   874,    17,   157,   158,    28,    68,  1237,
      13,    14,    15,    98,    17,    28,   244,   252,   246,   206,
      80,   256,   893,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   252,   252,
     911,   255,   252,   236,   256,   252,   252,    13,    14,    15,
      23,    17,   255,   252,   249,   253,   255,     6,   252,   460,
     252,   252,   255,   250,   374,   245,   252,   249,   252,   594,
     252,   252,   253,   252,   254,   308,   252,    23,   252,   252,
      23,    13,    14,    15,   246,    17,   319,   320,   321,   399,
     246,   256,   253,   252,   244,   328,   311,   399,     5,  1024,
     256,   253,   706,   399,    11,    12,    13,    14,    15,   249,
      17,   247,   249,   249,   249,   222,  1849,     7,   245,   253,
       8,    28,     5,   448,  1857,    98,  1354,   254,    11,    12,
      13,    14,    15,   236,    17,    13,    14,    15,   252,    17,
      13,    14,    15,   247,    17,    28,   252,   252,   253,   247,
     254,   246,    98,  1024,     5,    98,   254,   252,     5,   705,
      81,   246,   252,    95,    11,    12,    13,    14,    15,   246,
      17,   404,    18,   252,    95,   252,   577,   256,   579,   580,
     581,    28,     5,     6,   253,   418,     9,    10,    81,   252,
     253,   246,    18,   253,    87,   428,  1929,   252,   130,  1932,
     433,   256,    95,     7,   245,   137,   439,    85,   441,    85,
    1943,  1944,   445,   254,     5,     7,     7,    95,  1059,  1060,
       7,   523,     5,     6,   246,   527,     9,    10,    19,    20,
      21,   252,   253,   109,   252,   253,  1969,   246,    81,   252,
     253,    87,    85,   252,    35,    77,    78,   480,     7,   252,
     253,     7,    95,   131,   132,   133,   134,   135,   136,    85,
     585,    87,   247,     7,  1189,     8,    13,    14,    15,   254,
      17,   978,    98,   246,  1199,    81,     7,    95,   603,    85,
      86,   252,   253,   115,   130,   111,   252,   253,     7,   599,
     600,   137,   138,   111,     7,   127,   606,   843,  1084,     7,
     246,   127,     7,   246,  1175,   247,  1534,    85,  1536,   247,
    1096,   157,   254,   131,   160,   161,   254,    95,  1189,    97,
     247,   253,   247,   724,   247,     5,     6,   254,  1199,   254,
     632,   254,   253,   253,   254,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   252,   253,   235,   236,   237,
     238,   239,   240,    67,     7,   243,    95,     7,    97,   592,
     253,   594,   253,   254,   182,   247,   105,   247,  1158,   252,
     253,    85,   254,    85,   254,   253,   252,   253,     7,   252,
     253,    95,    96,    95,   247,     7,   711,   712,     7,   247,
     104,   254,   106,   247,   247,   670,   254,   188,   221,   111,
     254,   254,   677,   115,     7,   252,   253,   253,   231,   247,
     253,   234,   237,   238,   239,  1205,   254,     7,   243,   252,
     653,   253,   244,   256,   249,   457,   641,   253,   185,    88,
      89,    90,    91,    92,    93,   253,   246,   670,   221,   244,
     187,   188,   189,   190,   677,   253,   254,   253,    13,    14,
      15,  1207,    17,   246,   669,   670,   254,   255,   673,   253,
     254,   246,   677,   988,   989,   990,   991,  1777,  1778,   246,
     703,   686,   252,   253,   245,   253,   252,  1002,  1268,   253,
     223,   224,   225,   226,   227,     6,   229,   230,   231,   232,
     252,   253,   235,   236,   237,   238,   239,     7,   252,   253,
     243,   235,   236,   237,   238,   239,   249,   252,   253,   243,
     253,   252,   253,   127,   253,   249,   548,     7,   223,   224,
     225,   226,   227,   246,   229,   230,   231,   232,   743,    95,
     235,   236,   237,   238,   239,    97,  1061,  1062,   243,   253,
     246,   253,   252,   253,   249,   107,   108,   109,     7,   253,
     254,   784,   785,   786,   787,   253,   254,   790,  1083,   246,
    1539,  1540,  1541,   253,   254,     7,     7,   968,   969,   970,
     971,   137,   246,  1801,   253,   254,    68,    69,    70,    71,
      72,    73,    74,    75,    76,   253,   254,    79,     7,  1514,
     253,   254,   246,    85,   253,   253,   254,   246,  1123,  1124,
     246,   223,   224,   225,   226,   227,    98,   229,   230,   231,
     232,   253,   254,   235,   236,   237,   238,   239,   184,   246,
     186,   243,  1329,   253,   254,   246,  1467,   249,   253,   254,
     246,   663,  1503,   120,   121,   122,   123,   124,   125,   126,
     127,   874,   208,  1514,   246,    95,  1047,    97,    98,    99,
     100,   101,   102,   103,   253,   254,   889,   890,   690,   246,
     893,   894,   895,   896,   897,   898,   899,   900,   901,   902,
     903,   904,   905,   906,   907,   908,   246,   709,   911,   252,
     253,   253,   254,   246,  1470,  1471,  1472,   253,  1474,     5,
    1918,   253,   925,   246,   726,    11,    12,    13,    14,    15,
     246,    17,   237,   238,   239,   240,  1492,   246,   243,   924,
       8,     7,    28,   223,   224,   225,   226,   227,   246,   229,
     230,   231,   232,   246,  1249,   235,   236,   237,   238,   239,
    1255,   253,   254,   243,   246,   137,  1340,   246,   140,   249,
     235,   236,   237,   238,   977,   978,    62,   246,   150,   151,
     253,   254,   154,   155,   254,   988,   989,   990,   991,   254,
     246,   253,   253,   254,   253,   254,   253,  1371,   246,  1002,
    1095,     7,  1097,  1377,  1084,  1379,   253,   254,   253,   254,
     246,   223,   224,   225,   226,   227,  1096,   229,   230,   231,
     232,  1024,     5,   235,   236,   237,   238,   239,   253,   254,
    1125,   243,   246,   253,     3,     4,     5,   249,  1412,   252,
      80,   246,    82,    83,  1418,    85,   252,   253,   246,  1052,
     253,   254,   254,  1802,     5,    95,  1351,   252,  1061,  1062,
      29,    30,    31,    32,    33,  1360,    82,    83,  1071,   253,
     254,     5,   112,   113,   114,   222,  1079,  1080,   253,   254,
    1083,   253,   246,   137,   609,   610,   140,   127,     8,   252,
    1093,  1094,  1648,   252,  1650,  1098,   150,   151,   152,   252,
    1103,   252,   252,   119,   120,   254,   252,   247,   253,   125,
     254,     7,   247,     7,   235,   236,   237,   238,   239,   240,
    1123,  1124,   243,   247,   222,   927,   222,   222,     5,  1132,
    1133,     5,   252,   252,     5,  1430,  1139,   252,  1141,     5,
     180,     5,  1145,  1699,   160,   161,   162,   252,   252,  1705,
     252,   222,     5,  1156,   247,   223,   224,   225,   226,   227,
       5,   229,   230,   231,   232,   967,     5,   235,   236,   237,
     238,   239,   252,   252,   252,   243,     5,   979,   252,     5,
     982,   249,   252,     5,     5,   202,  1189,  1482,   252,   252,
     992,   993,   994,   995,   252,   252,  1199,   999,   247,   253,
       5,   229,   230,   231,   232,   246,   246,   235,   236,   237,
     238,   239,   127,   253,   253,   243,     7,     5,  1774,   253,
       7,   249,     7,   252,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,  1249,  1542,     7,     7,
     246,   246,  1255,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   193,
     194,   195,   196,   197,   198,   199,   200,   201,     7,  1835,
       7,     7,     5,     7,   222,     7,     5,     7,   252,     7,
      13,    14,    15,     7,    17,     7,     7,     7,     7,   315,
     316,     7,     3,  1105,  1106,     7,     7,   253,  1785,     5,
     254,     8,     7,   252,   330,     5,     5,     5,   247,   252,
    1846,   252,  1493,     7,  1495,  1496,  1329,   223,   224,   225,
     226,   227,     7,   229,   230,   231,   232,     5,  1894,   235,
     236,   237,   238,   239,     7,   249,   222,   243,  1351,     7,
       5,     7,   253,   249,     7,     7,     7,  1360,   374,    80,
      61,    82,    83,    84,     7,     7,    67,  1169,   252,  1171,
       7,   254,   247,   231,     6,   254,  1178,     7,   394,    80,
     252,    82,    65,   399,   247,   401,   246,   246,     5,   246,
    1470,  1471,  1472,    94,  1474,   246,   246,    98,   246,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     3,   110,
     246,     5,  1492,   246,     7,   252,   139,   252,   141,   142,
     143,   144,   145,   146,   147,   148,   149,  1430,   129,   252,
     153,   250,   252,   156,  1994,   252,   159,   252,   252,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   252,   247,   475,
     183,   254,   252,   246,     5,   188,     5,     5,   191,   246,
     231,   243,   488,   489,   253,     3,   252,   246,   246,  1482,
     181,   246,   183,   246,   500,     7,   246,     7,   252,   246,
     246,   507,   508,   509,   246,   246,   246,   513,   514,   246,
     246,   246,   246,   246,   246,   521,    80,     5,    82,    83,
      84,  1514,   252,   252,   246,   246,   246,   252,   246,    80,
       5,    82,     5,  1526,    85,  1327,     7,   252,     5,   246,
     253,    80,   253,    82,   250,     5,    85,   252,   246,  1542,
     247,   246,   246,  1546,   247,  1548,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   254,   572,   573,   252,   120,
     121,   122,   123,   124,   125,   126,   127,   247,  1648,  1864,
    1650,   120,   121,   122,   123,   124,   125,   126,   127,   246,
     253,   247,     5,   599,   600,     5,     5,  1882,   604,   605,
     606,   607,     5,  1688,  1689,     5,     5,   613,   252,   615,
    1695,   229,   230,   231,   232,     5,     7,   235,   236,   237,
     238,   239,   240,  1784,     5,   243,     5,     5,     5,  1699,
       5,     3,  1424,     3,     5,  1705,     5,  1429,     5,     7,
       5,  1433,     5,   649,  1436,     5,     5,     5,     5,  1441,
       5,     5,     5,    13,    14,    15,     5,    17,   225,   226,
     227,  1453,   229,   230,   231,   232,     5,     5,   235,   236,
     237,   238,   239,     5,  1466,     5,   243,  1469,     5,     5,
       5,  1966,   249,     5,     5,   246,  1771,   246,  1773,   253,
     252,     7,     7,   253,   249,     7,   702,   254,     7,     7,
       7,     7,   253,     7,  1774,     3,     4,     5,     7,  1501,
    1502,     7,  1504,     7,   253,     7,     7,     7,     7,     7,
     254,     3,   728,   247,   730,   731,    24,    25,    26,    27,
     252,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   246,   226,   227,     7,
     229,   230,   231,   232,     7,  1835,   235,   236,   237,   238,
     239,     7,     7,   252,   243,     5,     7,     5,     7,   139,
     249,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       7,     7,  1785,   153,     7,     7,   156,     7,     7,   159,
       7,     7,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       7,     7,     7,   183,  1894,     7,     7,   833,   188,     7,
     836,   191,   223,   224,   225,   226,   227,     7,   229,   230,
     231,   232,     7,     7,   235,   236,   237,   238,   239,     7,
       7,     5,   243,     5,   246,   253,   862,     7,   249,     7,
     246,   246,  1654,     5,     5,   247,   254,     7,  1660,     7,
       7,  1864,     7,     7,     7,  1667,     7,     7,   254,     7,
     254,   247,     7,   247,     3,     4,     5,     6,   111,  1882,
       9,   253,  1684,   253,     7,     7,     7,   247,   254,   247,
     247,   247,   254,   254,   910,    24,    25,    26,    27,   254,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   254,   254,   254,   236,     7,
     254,   254,   253,   241,   254,   246,   244,   252,     7,    68,
     252,   254,     3,     4,     5,   253,   225,   226,   227,   228,
     229,   230,   231,   232,   247,   252,   235,   236,   237,   238,
     239,   240,   252,  1966,   243,   254,   254,   983,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       3,     4,     5,   254,   254,   254,   254,  1809,     7,     7,
     254,   254,  1814,     3,  1816,     7,     7,   254,   254,   254,
     254,  1823,   253,     7,     7,     7,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   252,   120,
    1862,     7,     5,   223,   224,   225,   226,   227,  1084,   229,
     230,   231,   232,     7,     5,   235,   236,   237,   238,   239,
    1096,     5,   252,   243,     5,     7,   252,   252,     7,   249,
       7,   220,     5,   252,     5,   252,   252,     5,     5,     5,
    1116,   247,  1118,     7,  1120,   247,  1908,   236,     3,     4,
       5,     6,   241,   252,     9,   244,   252,   120,     5,   253,
     249,   247,     5,   252,     5,     5,   254,   247,     7,    24,
      25,    26,    27,  1149,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     7,
     247,   254,   254,   247,   254,     7,     7,     7,   229,     7,
       7,     3,     4,     5,   235,   236,   247,   254,   254,   247,
     241,   254,   254,   244,   254,   247,   247,   248,   249,   250,
     247,   252,    24,    25,    26,    27,   254,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   252,   252,   247,   247,   229,   254,   254,     3,
       4,     5,   235,   236,   253,   247,   247,   253,   241,     7,
     253,   244,   247,     7,     7,     7,   249,   250,     7,   252,
      24,    25,    26,    27,     7,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       7,     5,     7,     5,     7,   254,     7,     7,     7,   223,
     224,   225,   226,   227,     7,   229,   230,   231,   232,     7,
       7,   235,   236,   237,   238,   239,   132,     7,     7,   243,
     249,   253,  1328,   253,   252,   249,     7,   226,   227,   228,
     229,   230,   231,   232,     7,   220,   235,   236,   237,   238,
     239,   240,     7,     7,   243,     7,     5,   252,   110,  1355,
       7,   236,     7,    16,   254,   247,   241,     5,     7,   244,
       3,     4,     5,     5,   254,   254,   254,   252,   247,   252,
     254,    13,    14,    15,   254,    17,   254,     5,   254,   247,
     247,   203,     7,     7,   206,     7,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   252,   252,     7,   236,   254,     7,     7,     7,   241,
       5,  1427,   244,     5,     5,  1431,   246,   252,  1434,  1435,
     252,     7,   247,  1439,   247,   254,  1442,  1443,  1444,  1445,
     247,     5,  1448,  1449,  1450,     5,  1452,     5,   247,     5,
    1456,  1457,   253,     7,     4,  1461,  1462,   253,     7,     7,
       7,   253,     7,     7,  1470,  1471,  1472,  1473,  1474,     7,
       7,   252,   236,  1479,   252,     7,     7,   241,     7,     7,
     244,     7,     7,   254,     7,   252,  1492,   252,   252,     7,
     253,     7,   252,   254,     7,     7,   247,   139,    61,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   247,     7,
     252,   153,     7,     7,   156,     7,     7,   159,     7,   129,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     7,     5,
       7,   183,     0,     0,  1050,   253,   188,  1051,   794,   191,
     223,   224,   225,   226,   227,   640,   229,   230,   231,   232,
    1633,  1182,   235,   236,   237,   238,   239,   567,  1488,   686,
     243,  1315,  1703,   584,   226,    -1,   249,   921,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,   236,    -1,    13,    14,    15,   241,    17,
      -1,   244,    -1,    -1,  1610,    -1,    -1,  1613,    -1,   252,
      -1,   253,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
    1626,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,  1648,  1649,  1650,    -1,    -1,   223,   224,   225,
     226,   227,    -1,   229,   230,   231,   232,    -1,    -1,   235,
     236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    61,    -1,   249,    -1,    -1,  1682,    67,    -1,    -1,
      -1,  1687,    -1,    -1,  1690,  1691,    -1,    -1,    -1,    -1,
      80,    -1,    82,  1699,    -1,    -1,    -1,    -1,    -1,  1705,
       7,    -1,    -1,    -1,    94,    -1,    -1,    -1,    98,    -1,
    1716,  1717,  1718,  1719,  1720,    -1,    -1,    -1,    -1,    -1,
     110,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,    74,    -1,   153,    -1,    -1,   156,   129,
      -1,   159,    -1,    -1,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,    -1,    -1,    -1,   183,    -1,    -1,  1774,    -1,
     188,    -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1796,   181,   133,   183,    -1,    -1,    -1,    -1,    -1,    -1,
    1806,  1807,    -1,    -1,  1810,    -1,  1812,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1820,  1821,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1835,
    1836,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      -1,   192,    -1,    -1,    -1,  1861,    13,    14,    15,    -1,
      17,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
      -1,  1887,    -1,    -1,    -1,    -1,    -1,    -1,  1894,    -1,
    1896,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,  1920,    -1,   223,   224,   225,   226,
     227,    -1,   229,   230,   231,   232,     7,    -1,   235,   236,
     237,   238,   239,    -1,  1940,    -1,   243,    -1,    -1,    -1,
      -1,    -1,   249,    -1,  1950,    -1,    -1,  1953,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1976,    -1,  1978,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,  1987,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,   156,
      -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,   188,    -1,   139,   191,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,
     156,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,   188,    -1,   139,   191,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   253,    -1,   153,    -1,
      -1,   156,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,    -1,    -1,    -1,   183,     5,
      -1,    -1,    -1,   188,    -1,    -1,   191,    13,    14,    15,
      -1,    17,   223,   224,   225,   226,   227,   253,   229,   230,
     231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
      -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,   223,   224,   225,   226,   227,   253,   229,
     230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
      -1,    -1,    -1,   243,     7,    -1,    -1,    -1,    -1,   249,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,
     156,    -1,    -1,   159,    -1,    -1,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,   188,    -1,   139,   191,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,
      -1,   156,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,   188,    -1,   139,   191,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   253,    -1,   153,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,
       5,    -1,    -1,    -1,   188,    -1,    -1,   191,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,   253,    -1,
     223,   224,   225,   226,   227,    -1,   229,   230,   231,   232,
      -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
     243,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,   223,   224,   225,   226,   227,   253,
     229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
     239,    -1,    -1,    -1,   243,     7,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,     7,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,    -1,    -1,   153,    -1,
      -1,   156,    -1,    -1,   159,    -1,     7,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,   188,    -1,   139,   191,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    -1,   188,    -1,   139,   191,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   253,    -1,
     153,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,
     183,     5,    -1,    -1,    -1,   188,    -1,    -1,   191,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,   253,
      -1,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
     232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
      -1,   243,   223,   224,   225,   226,   227,   249,   229,   230,
     231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
      -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,
     253,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
     232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
      -1,   243,   223,   224,   225,   226,   227,   249,   229,   230,
     231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
      -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,    -1,    -1,   153,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     3,     4,     5,   183,
      -1,    -1,    -1,    -1,   188,    -1,    -1,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       3,     4,     5,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
     240,    -1,    -1,   243,    -1,   245,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     3,     4,     5,     6,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,   235,   236,   237,
     238,   239,   240,    -1,    -1,   243,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    -1,    -1,   241,    -1,    -1,   244,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,     8,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    -1,    -1,    -1,   241,    -1,    -1,
     244,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     8,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    -1,    -1,    -1,     8,   241,    -1,
      -1,   244,    -1,    -1,    -1,    -1,    -1,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,     8,   235,
     236,   237,   238,   239,   240,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,   241,
      -1,    -1,   244,    -1,    -1,    -1,   223,   224,   225,   226,
     227,    -1,   229,   230,   231,   232,    -1,    -1,   235,   236,
     237,   238,   239,    -1,    -1,    -1,   243,   223,   224,   225,
     226,   227,   249,   229,   230,   231,   232,   254,    -1,   235,
     236,   237,   238,   239,    -1,    -1,    -1,   243,    -1,   245,
      -1,    -1,    -1,   249,    -1,   236,    -1,    -1,    -1,    -1,
     241,    -1,    -1,   244,    -1,    -1,    -1,    -1,   223,   224,
     225,   226,   227,    -1,   229,   230,   231,   232,    -1,    -1,
     235,   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,
     224,   225,   226,   227,   249,   229,   230,   231,   232,   254,
      -1,   235,   236,   237,   238,   239,    -1,    -1,   236,   243,
      -1,    -1,    -1,   241,    -1,   249,   244,    -1,    -1,    -1,
     223,   224,   225,   226,   227,    -1,   229,   230,   231,   232,
      -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
     243,   223,   224,   225,   226,   227,   249,   229,   230,   231,
     232,   254,    -1,   235,   236,   237,   238,   239,    -1,    -1,
      -1,   243,   223,   224,   225,   226,   227,   249,   229,   230,
     231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
      -1,    -1,   243,   223,   224,   225,   226,   227,   249,   229,
     230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
      -1,    -1,    -1,   243,   223,   224,   225,   226,   227,   249,
     229,   230,   231,   232,    -1,    -1,   235,   236,   237,   238,
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
     236,   237,   238,   239,    -1,    -1,    -1,   243,   223,   224,
     225,   226,   227,   249,   229,   230,   231,   232,   254,    -1,
     235,   236,   237,   238,   239,    -1,    -1,    -1,   243,   223,
     224,   225,   226,   227,   249,   229,   230,   231,   232,   254,
      -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,   243,
     223,   224,   225,   226,   227,   249,   229,   230,   231,   232,
     254,    -1,   235,   236,   237,   238,   239,    -1,    -1,    -1,
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
     243,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
     253,   223,   224,   225,   226,   227,    -1,   229,   230,   231,
     232,    -1,    -1,   235,   236,   237,   238,   239,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,
      -1,   253,   223,   224,   225,   226,   227,    -1,   229,   230,
     231,   232,    -1,    -1,   235,   236,   237,   238,   239,    -1,
      -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,   253,   223,   224,   225,   226,   227,    -1,   229,
     230,   231,   232,    -1,    -1,   235,   236,   237,   238,   239,
      -1,    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,   249,
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
     239,    -1,    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   249,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    -1,   235,   236,
     237,   238,   239,   240,    -1,    -1,   243,    -1,    -1,    -1,
     247
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
#line 369 "GetDP.y"
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
#line 403 "GetDP.y"
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
#line 446 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 469 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 484 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 486 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 488 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 490 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 492 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 494 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 496 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 498 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 500 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 502 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 504 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 506 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 508 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 510 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 512 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 514 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 516 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 518 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 520 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 522 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 524 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 532 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 549 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 556 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 558 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 563 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 565 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 572 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 582 "GetDP.y"
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
#line 592 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 599 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 609 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 614 "GetDP.y"
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
#line 626 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 635 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 646 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 651 "GetDP.y"
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
#line 688 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 691 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 703 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 705 "GetDP.y"
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
#line 721 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 724 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 727 "GetDP.y"
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
#line 778 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 791 "GetDP.y"
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
#line 815 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 822 "GetDP.y"
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
#line 835 "GetDP.y"
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
#line 853 "GetDP.y"
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
#line 876 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 880 "GetDP.y"
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
#line 892 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 901 "GetDP.y"
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
#line 915 "GetDP.y"
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
#line 949 "GetDP.y"
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
#line 973 "GetDP.y"
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
#line 983 "GetDP.y"
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
#line 1005 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 1010 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 1011 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 1018 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1038 "GetDP.y"
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
#line 1058 "GetDP.y"
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
#line 1111 "GetDP.y"
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
#line 1131 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1137 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1143 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1146 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1153 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1164 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1167 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1173 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1177 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1189 "GetDP.y"
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
#line 1202 "GetDP.y"
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
#line 1216 "GetDP.y"
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
#line 1231 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1237 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1243 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1249 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1255 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1261 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1267 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1273 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1279 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1285 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1291 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1297 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1303 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1309 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1315 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1321 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1327 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1334 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1342 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1355 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1361 "GetDP.y"
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
#line 1435 "GetDP.y"
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
#line 1469 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1478 "GetDP.y"
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
#line 1490 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1492 "GetDP.y"
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
#line 1503 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1505 "GetDP.y"
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
#line 1519 "GetDP.y"
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
#line 1531 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 146:
#line 1537 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1543 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 148:
#line 1545 "GetDP.y"
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
#line 1574 "GetDP.y"
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
#line 1598 "GetDP.y"
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
#line 1611 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1617 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1624 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1630 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1637 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1644 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1652 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1659 "GetDP.y"
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
#line 1676 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 160:
#line 1677 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 161:
#line 1678 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 162:
#line 1683 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 163:
#line 1684 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 164:
#line 1690 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 165:
#line 1693 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 166:
#line 1696 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 167:
#line 1712 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 168:
#line 1717 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 169:
#line 1724 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 171:
#line 1733 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 172:
#line 1738 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 173:
#line 1745 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 174:
#line 1748 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 175:
#line 1755 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 177:
#line 1765 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 178:
#line 1768 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 179:
#line 1771 "GetDP.y"
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
#line 1809 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 181:
#line 1815 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 182:
#line 1822 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 184:
#line 1835 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 185:
#line 1842 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 186:
#line 1845 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 187:
#line 1852 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 188:
#line 1855 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 189:
#line 1862 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 191:
#line 1874 "GetDP.y"
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
#line 1884 "GetDP.y"
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
#line 1894 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 194:
#line 1901 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 195:
#line 1904 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 196:
#line 1911 "GetDP.y"
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
#line 1927 "GetDP.y"
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
#line 1975 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1978 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1981 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1984 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1987 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 204:
#line 1998 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 207:
#line 2009 "GetDP.y"
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
#line 2034 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2048 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2054 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2061 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2070 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2073 "GetDP.y"
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
#line 2097 "GetDP.y"
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
#line 2112 "GetDP.y"
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
#line 2132 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 219:
#line 2141 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 221:
#line 2155 "GetDP.y"
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
#line 2165 "GetDP.y"
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
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES2 ;
      Operation_P->Case.ChangeOfCoordinates2.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord2", yyvsp[-2].i) ;

      Operation_P->Case.ChangeOfCoordinates2.ArgumentExpression = List_Copy(ListOfInt_L); 
      Operation_P->Case.ChangeOfCoordinates2.ArgumentValue = NULL; 

    ;
    break;}
case 449:
#line 5036 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-6].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in ChangeOfCoordinates2 ", yyvsp[-6].c) ;
      Operation_P->Case.ChangeOfCoordinates2.ExpressionIndex1 = i ;

      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-4].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in ChangeOfCoordinates2 ", yyvsp[-4].c) ;
      Operation_P->Case.ChangeOfCoordinates2.ExpressionIndex2 = i ;

      Operation_P->Case.ChangeOfCoordinates2.Num_Node = (int)yyvsp[-2].d ;
 
    ;
    break;}
case 450:
#line 5051 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 451:
#line 5061 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 452:
#line 5069 "GetDP.y"
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
case 453:
#line 5082 "GetDP.y"
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
case 454:
#line 5095 "GetDP.y"
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
case 455:
#line 5109 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 456:
#line 5119 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 457:
#line 5129 "GetDP.y"
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
case 458:
#line 5143 "GetDP.y"
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
case 459:
#line 5157 "GetDP.y"
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
case 460:
#line 5176 "GetDP.y"
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
case 461:
#line 5194 "GetDP.y"
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
case 462:
#line 5205 "GetDP.y"
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
case 463:
#line 5220 "GetDP.y"
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
case 464:
#line 5235 "GetDP.y"
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
case 465:
#line 5250 "GetDP.y"
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
case 466:
#line 5265 "GetDP.y"
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
case 467:
#line 5280 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 468:
#line 5291 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 469:
#line 5296 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 470:
#line 5306 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 472:
#line 5316 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 473:
#line 5319 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 474:
#line 5329 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 475:
#line 5345 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 477:
#line 5361 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5365 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 479:
#line 5369 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 480:
#line 5373 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 481:
#line 5378 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 482:
#line 5389 "GetDP.y"
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
case 484:
#line 5406 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 485:
#line 5410 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 486:
#line 5414 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 487:
#line 5418 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5422 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 489:
#line 5427 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 490:
#line 5438 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 492:
#line 5453 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 493:
#line 5457 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 494:
#line 5461 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 495:
#line 5465 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 496:
#line 5469 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 497:
#line 5480 "GetDP.y"
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
case 499:
#line 5498 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 500:
#line 5502 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 501:
#line 5506 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 502:
#line 5510 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 503:
#line 5515 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 504:
#line 5525 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 505:
#line 5531 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 506:
#line 5537 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5547 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 508:
#line 5550 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 509:
#line 5555 "GetDP.y"
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
case 511:
#line 5573 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 512:
#line 5583 "GetDP.y"
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
case 513:
#line 5612 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 514:
#line 5615 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 515:
#line 5618 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 516:
#line 5626 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 517:
#line 5643 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 519:
#line 5655 "GetDP.y"
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
case 521:
#line 5678 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 523:
#line 5692 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 524:
#line 5699 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 525:
#line 5707 "GetDP.y"
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
case 526:
#line 5753 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 527:
#line 5758 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 528:
#line 5764 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 529:
#line 5767 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 530:
#line 5770 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 531:
#line 5772 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 532:
#line 5778 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 534:
#line 5789 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 535:
#line 5792 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 536:
#line 5798 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 537:
#line 5803 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 538:
#line 5809 "GetDP.y"
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
case 539:
#line 5823 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 541:
#line 5837 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 542:
#line 5844 "GetDP.y"
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
case 543:
#line 5872 "GetDP.y"
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
case 544:
#line 5882 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 545:
#line 5883 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 546:
#line 5889 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 547:
#line 5898 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 548:
#line 5915 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 550:
#line 5927 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 553:
#line 5936 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 555:
#line 5948 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 556:
#line 5955 "GetDP.y"
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
case 557:
#line 5967 "GetDP.y"
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
case 558:
#line 5978 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 559:
#line 5983 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 560:
#line 5989 "GetDP.y"
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
case 561:
#line 6006 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 562:
#line 6016 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 563:
#line 6019 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 564:
#line 6023 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 565:
#line 6036 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 566:
#line 6040 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 567:
#line 6046 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 568:
#line 6052 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 569:
#line 6058 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 570:
#line 6065 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 571:
#line 6070 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 572:
#line 6075 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 573:
#line 6080 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 574:
#line 6089 "GetDP.y"
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
case 575:
#line 6101 "GetDP.y"
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
case 576:
#line 6124 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 577:
#line 6125 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 578:
#line 6126 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 579:
#line 6127 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 580:
#line 6133 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 581:
#line 6135 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 582:
#line 6141 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 583:
#line 6147 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 584:
#line 6154 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 585:
#line 6163 "GetDP.y"
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
case 586:
#line 6185 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 587:
#line 6193 "GetDP.y"
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
case 588:
#line 6204 "GetDP.y"
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
case 589:
#line 6218 "GetDP.y"
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
case 590:
#line 6239 "GetDP.y"
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
case 591:
#line 6266 "GetDP.y"
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
case 592:
#line 6297 "GetDP.y"
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
case 593:
#line 6317 "GetDP.y"
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
case 595:
#line 6345 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 596:
#line 6352 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 597:
#line 6359 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 598:
#line 6366 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 599:
#line 6370 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 600:
#line 6374 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 601:
#line 6378 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 602:
#line 6382 "GetDP.y"
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
case 603:
#line 6392 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 604:
#line 6397 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 605:
#line 6402 "GetDP.y"
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
case 606:
#line 6422 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 607:
#line 6429 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 608:
#line 6438 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 609:
#line 6447 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 610:
#line 6456 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 611:
#line 6463 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 612:
#line 6471 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 613:
#line 6475 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 614:
#line 6484 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 615:
#line 6488 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 616:
#line 6492 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 617:
#line 6500 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 618:
#line 6506 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 619:
#line 6511 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 620:
#line 6524 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 621:
#line 6530 "GetDP.y"
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
#line 6580 "GetDP.y"
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
#line 6590 "GetDP.y"
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
#line 6600 "GetDP.y"
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
#line 6614 "GetDP.y"
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
#line 6628 "GetDP.y"
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
#line 6654 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 628:
#line 6658 "GetDP.y"
{
    ;
    break;}
case 630:
#line 6674 "GetDP.y"
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
#line 6689 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 632:
#line 6695 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 633:
#line 6701 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 634:
#line 6707 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 635:
#line 6712 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstring);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO, tmpstring);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 636:
#line 6724 "GetDP.y"
{
      Msg(INFO, "Enter %s",yyvsp[-2].c);
      scanf("%lf",&Constant_S.Value.Float) ;
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 638:
#line 6738 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 639:
#line 6744 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6750 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6761 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 642:
#line 6762 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 643:
#line 6763 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 644:
#line 6764 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 645:
#line 6765 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 646:
#line 6766 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 647:
#line 6767 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 648:
#line 6768 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 649:
#line 6769 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 650:
#line 6770 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 651:
#line 6771 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 652:
#line 6772 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 653:
#line 6773 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 654:
#line 6774 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 655:
#line 6775 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 656:
#line 6776 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 657:
#line 6777 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 658:
#line 6778 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 659:
#line 6779 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 660:
#line 6780 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 661:
#line 6781 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 662:
#line 6785 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 663:
#line 6786 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 664:
#line 6787 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 665:
#line 6788 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 666:
#line 6789 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 667:
#line 6790 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 668:
#line 6791 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 669:
#line 6792 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 670:
#line 6793 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 671:
#line 6794 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 672:
#line 6795 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 673:
#line 6796 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 674:
#line 6797 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 675:
#line 6798 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 676:
#line 6799 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 677:
#line 6800 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 678:
#line 6801 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 679:
#line 6802 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 680:
#line 6803 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 681:
#line 6804 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 682:
#line 6805 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 683:
#line 6806 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 684:
#line 6807 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 685:
#line 6808 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 686:
#line 6809 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 687:
#line 6810 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 688:
#line 6811 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 689:
#line 6812 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 690:
#line 6813 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 691:
#line 6814 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 692:
#line 6815 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 693:
#line 6816 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6817 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 695:
#line 6818 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 696:
#line 6819 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 697:
#line 6820 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 698:
#line 6821 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 699:
#line 6822 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 700:
#line 6823 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 701:
#line 6824 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 702:
#line 6829 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 703:
#line 6830 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 704:
#line 6831 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 705:
#line 6832 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 706:
#line 6833 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 707:
#line 6834 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 708:
#line 6835 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 709:
#line 6854 "GetDP.y"
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
#line 6872 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 711:
#line 6875 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 712:
#line 6881 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 713:
#line 6884 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 714:
#line 6891 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 715:
#line 6897 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 716:
#line 6900 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 717:
#line 6903 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 718:
#line 6915 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 719:
#line 6921 "GetDP.y"
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
#line 6932 "GetDP.y"
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
#line 6948 "GetDP.y"
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
#line 6970 "GetDP.y"
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
#line 6985 "GetDP.y"
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
#line 7023 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 725:
#line 7031 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 726:
#line 7043 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 727:
#line 7051 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 728:
#line 7063 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 729:
#line 7065 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 730:
#line 7072 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 731:
#line 7075 "GetDP.y"
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
#line 7090 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 733:
#line 7095 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 734:
#line 7100 "GetDP.y"
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
#line 7119 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 736:
#line 7137 "GetDP.y"
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
#line 7148 "GetDP.y"



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

