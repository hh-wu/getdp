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
# define	tListFromFile	282
# define	tDefineConstant	283
# define	tPi	284
# define	t0D	285
# define	t1D	286
# define	t2D	287
# define	t3D	288
# define	tExp	289
# define	tLog	290
# define	tLog10	291
# define	tSqrt	292
# define	tSin	293
# define	tAsin	294
# define	tCos	295
# define	tAcos	296
# define	tTan	297
# define	tAtan	298
# define	tAtan2	299
# define	tSinh	300
# define	tCosh	301
# define	tTanh	302
# define	tFabs	303
# define	tFloor	304
# define	tCeil	305
# define	tFmod	306
# define	tModulo	307
# define	tHypot	308
# define	tSolidAngle	309
# define	tTrace	310
# define	tOrder	311
# define	tCrossProduct	312
# define	tDofValue	313
# define	tMHTransform	314
# define	tMHJacNL	315
# define	tGroup	316
# define	tDefineGroup	317
# define	tAll	318
# define	tInSupport	319
# define	tMovingBand2D	320
# define	tDefineFunction	321
# define	tConstraint	322
# define	tRegion	323
# define	tSubRegion	324
# define	tRegionRef	325
# define	tSubRegionRef	326
# define	tFilter	327
# define	tCoefficient	328
# define	tValue	329
# define	tTimeFunction	330
# define	tBranch	331
# define	tNode	332
# define	tLoop	333
# define	tNameOfResolution	334
# define	tJacobian	335
# define	tCase	336
# define	tIntegration	337
# define	tFMMIntegration	338
# define	tMatrix	339
# define	tType	340
# define	tSubType	341
# define	tCriterion	342
# define	tGeoElement	343
# define	tNumberOfPoints	344
# define	tMaxNumberOfPoints	345
# define	tNumberOfDivisions	346
# define	tMaxNumberOfDivisions	347
# define	tStoppingCriterion	348
# define	tFunctionSpace	349
# define	tName	350
# define	tBasisFunction	351
# define	tNameOfCoef	352
# define	tFunction	353
# define	tdFunction	354
# define	tSubFunction	355
# define	tSubdFunction	356
# define	tSupport	357
# define	tEntity	358
# define	tSubSpace	359
# define	tNameOfBasisFunction	360
# define	tGlobalQuantity	361
# define	tEntityType	362
# define	tEntitySubType	363
# define	tNameOfConstraint	364
# define	tFormulation	365
# define	tQuantity	366
# define	tNameOfSpace	367
# define	tIndexOfSystem	368
# define	tSymmetry	369
# define	tEquation	370
# define	tGalerkin	371
# define	tdeRham	372
# define	tGlobalTerm	373
# define	tGlobalEquation	374
# define	tDt	375
# define	tDtDof	376
# define	tDtDt	377
# define	tDtDtDof	378
# define	tJacNL	379
# define	tNeverDt	380
# define	tDtNL	381
# define	tIn	382
# define	tFull_Matrix	383
# define	tResolution	384
# define	tDefineSystem	385
# define	tNameOfFormulation	386
# define	tNameOfMesh	387
# define	tFrequency	388
# define	tSolver	389
# define	tOriginSystem	390
# define	tDestinationSystem	391
# define	tOperation	392
# define	tOperationEnd	393
# define	tSetTime	394
# define	tDTime	395
# define	tSetFrequency	396
# define	tFourierTransform	397
# define	tFourierTransformJ	398
# define	tLanczos	399
# define	tPerturbation	400
# define	tUpdate	401
# define	tUpdateConstraint	402
# define	tBreak	403
# define	tTimeLoopTheta	404
# define	tTime0	405
# define	tTimeMax	406
# define	tTheta	407
# define	tTimeLoopNewmark	408
# define	tBeta	409
# define	tGamma	410
# define	tIterativeLoop	411
# define	tNbrMaxIteration	412
# define	tRelaxationFactor	413
# define	tIterativeTimeReduction	414
# define	tDivisionCoefficient	415
# define	tChangeOfState	416
# define	tChangeOfCoordinates	417
# define	tChangeOfCoordinates2	418
# define	tSystemCommand	419
# define	tGenerateFMMGroups	420
# define	tGenerateOnly	421
# define	tGenerateOnlyJac	422
# define	tSolveJac_AdaptRelax	423
# define	tSaveSolutionExtendedMH	424
# define	tSaveSolutionMHtoTime	425
# define	tInit_MovingBand2D	426
# define	tMesh_MovingBand2D	427
# define	tGenerate_MH_Moving	428
# define	tGenerate_MH_Moving_Separate	429
# define	tAdd_MH_Moving	430
# define	tGenerateGroup	431
# define	tGenerateJacGroup	432
# define	tSaveMesh	433
# define	tDeformeMesh	434
# define	tDummyFrequency	435
# define	tPostProcessing	436
# define	tNameOfSystem	437
# define	tPostOperation	438
# define	tNameOfPostProcessing	439
# define	tUsingPost	440
# define	tAppend	441
# define	tPlot	442
# define	tPrint	443
# define	tPrintGroup	444
# define	tEcho	445
# define	tWrite	446
# define	tAdapt	447
# define	tOnGlobal	448
# define	tOnRegion	449
# define	tOnElementsOf	450
# define	tOnGrid	451
# define	tOnSection	452
# define	tOnPoint	453
# define	tOnLine	454
# define	tOnPlane	455
# define	tOnBox	456
# define	tWithArgument	457
# define	tFile	458
# define	tDepth	459
# define	tDimension	460
# define	tTimeStep	461
# define	tHarmonicToTime	462
# define	tFormat	463
# define	tHeader	464
# define	tFooter	465
# define	tSkin	466
# define	tSmoothing	467
# define	tTarget	468
# define	tSort	469
# define	tIso	470
# define	tNoNewLine	471
# define	tDecomposeInSimplex	472
# define	tChangeOfValues	473
# define	tFrequencyLegend	474
# define	tEvaluationPoints	475
# define	tStr	476
# define	tDate	477
# define	tDEF	478
# define	tOR	479
# define	tAND	480
# define	tEQUAL	481
# define	tNOTEQUAL	482
# define	tAPPROXEQUAL	483
# define	tLESSOREQUAL	484
# define	tGREATEROREQUAL	485
# define	tLESSLESS	486
# define	tGREATERGREATER	487
# define	tCROSSPRODUCT	488
# define	UNARYPREC	489
# define	tSHOW	490

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.70 2004-10-27 12:59:15 dular Exp $ */
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

FILE* File;
double _value;


#line 220 "GetDP.y"
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



#define	YYFINAL		2001
#define	YYFLAG		-32768
#define	YYNTBASE	259

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 490 ? yytranslate[x] : 452)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   243,     2,   251,   252,   241,     2,     2,
     246,   247,   239,   237,   256,   238,   250,   240,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     231,     2,   233,   225,   257,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   248,     2,   249,   245,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   254,     2,   255,   258,     2,     2,     2,
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
     216,   217,   218,   219,   220,   221,   222,   223,   224,   226,
     227,   228,   229,   230,   232,   234,   235,   236,   242,   244,
     253
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
    1562,  1572,  1580,  1588,  1596,  1606,  1616,  1626,  1638,  1656,
    1670,  1686,  1698,  1712,  1713,  1721,  1722,  1730,  1738,  1750,
    1756,  1762,  1772,  1782,  1792,  1798,  1804,  1816,  1826,  1841,
    1856,  1864,  1877,  1888,  1896,  1904,  1912,  1914,  1916,  1918,
    1919,  1922,  1926,  1930,  1933,  1934,  1937,  1941,  1945,  1949,
    1953,  1958,  1959,  1962,  1966,  1970,  1974,  1978,  1982,  1987,
    1988,  1991,  1995,  1999,  2003,  2007,  2012,  2013,  2016,  2020,
    2024,  2028,  2032,  2036,  2041,  2046,  2051,  2052,  2057,  2058,
    2061,  2065,  2069,  2073,  2077,  2081,  2085,  2086,  2089,  2093,
    2095,  2096,  2099,  2103,  2108,  2113,  2117,  2122,  2123,  2128,
    2131,  2134,  2135,  2138,  2142,  2147,  2148,  2154,  2160,  2161,
    2164,  2165,  2172,  2176,  2177,  2182,  2186,  2190,  2191,  2194,
    2198,  2200,  2202,  2203,  2206,  2210,  2214,  2218,  2222,  2227,
    2228,  2237,  2238,  2239,  2243,  2251,  2259,  2272,  2281,  2293,
    2294,  2305,  2307,  2314,  2318,  2325,  2327,  2329,  2331,  2333,
    2334,  2338,  2340,  2343,  2346,  2359,  2362,  2378,  2383,  2396,
    2414,  2437,  2450,  2451,  2454,  2458,  2463,  2468,  2472,  2475,
    2478,  2482,  2486,  2490,  2494,  2498,  2502,  2506,  2510,  2514,
    2518,  2522,  2526,  2532,  2535,  2538,  2542,  2552,  2556,  2566,
    2572,  2573,  2576,  2583,  2592,  2601,  2612,  2614,  2619,  2621,
    2627,  2632,  2637,  2645,  2650,  2658,  2664,  2672,  2678,  2687,
    2688,  2692,  2698,  2704,  2706,  2708,  2710,  2712,  2714,  2716,
    2718,  2720,  2722,  2724,  2726,  2728,  2730,  2732,  2734,  2736,
    2738,  2740,  2742,  2744,  2746,  2748,  2752,  2755,  2758,  2762,
    2766,  2770,  2774,  2778,  2782,  2786,  2790,  2794,  2798,  2802,
    2806,  2810,  2814,  2819,  2824,  2829,  2834,  2839,  2844,  2849,
    2854,  2859,  2864,  2871,  2876,  2881,  2886,  2891,  2896,  2901,
    2908,  2915,  2922,  2928,  2931,  2933,  2935,  2937,  2939,  2941,
    2943,  2945,  2947,  2948,  2950,  2952,  2956,  2958,  2960,  2964,
    2968,  2972,  2978,  2982,  2987,  2992,  2999,  3008,  3017,  3023,
    3029,  3031,  3033,  3035,  3037,  3039,  3044,  3051,  3053
};
static const short yyrhs[] =
{
      -1,   260,   261,     0,     0,     0,   261,   262,   263,     0,
      62,   254,   266,   255,     0,    99,   254,   289,   255,     0,
      68,   254,   323,   255,     0,    81,   254,   308,   255,     0,
      83,   254,   314,   255,     0,    95,   254,   330,   255,     0,
     111,   254,   353,   255,     0,   130,   254,   380,   255,     0,
     182,   254,   410,   255,     0,   184,   254,   422,   255,     0,
     426,     0,   440,     0,    22,   450,     0,   264,     0,    19,
       7,     0,    19,   189,     7,     0,    19,    21,     7,     0,
      19,    36,     7,     0,    19,    20,     7,     0,    19,    19,
       7,     0,    19,     5,     7,     0,    20,     7,     0,    21,
       7,     0,    21,    62,     7,     0,    21,    99,     7,     0,
      21,    68,     7,     0,    21,    81,     7,     0,    21,    83,
       7,     0,    21,    95,     7,     0,    21,   111,     7,     0,
      21,   130,     7,     0,    21,   182,     7,     0,    21,   184,
       7,     0,    21,     3,     7,     0,     0,   265,   430,     0,
       0,     0,   266,   267,   268,     0,   449,   224,   273,     7,
       0,     5,   288,   224,   273,     7,     0,     0,     5,   286,
     224,   269,   273,     7,     0,    63,   248,   284,   249,     7,
       0,   270,     0,   449,   237,   224,   273,     7,     0,   440,
       0,   439,     0,     0,     0,   449,   248,   443,   249,   224,
      66,   271,   248,   251,   281,   272,   256,   251,   281,   256,
     443,   249,     7,     0,     0,     0,   277,   248,   274,   278,
     275,   279,   249,     0,   251,   281,     0,   273,     0,   449,
     287,     0,    69,     0,     5,     0,   281,     0,    64,     0,
       0,   285,   280,   281,     0,   285,    65,   449,   287,     0,
       5,     0,   283,     0,   254,   282,   255,     0,     0,   282,
     285,   283,     0,   282,   285,   238,   283,     0,     3,     0,
     257,   446,   257,     0,     3,     8,   443,     0,     3,     8,
       3,     8,   443,     0,   449,     0,     5,   254,   255,     0,
       0,   284,   285,     5,     0,   284,   285,     5,   254,   443,
     255,     0,     0,   256,     0,   254,   251,   443,   255,     0,
       0,   254,   255,     0,   254,     3,   255,     0,     0,   289,
     290,     0,    67,   248,   291,   249,     7,     0,     5,   248,
     249,   224,   292,     7,     0,     5,   248,   276,   249,   224,
     292,     7,     0,   440,     0,   439,     0,     0,   291,   285,
       5,     0,    23,   248,   443,   249,     0,    99,   248,     5,
     249,     0,     0,   293,   296,     0,     0,   254,   295,   255,
       0,   292,     0,   295,   256,   292,     0,     0,   297,   298,
       0,   301,     0,     0,     0,   298,   225,   299,   298,     8,
     300,   298,     0,   298,   239,   298,     0,   298,   242,   298,
       0,    58,   248,   298,   256,   298,   249,     0,   298,   240,
     298,     0,   298,   237,   298,     0,   298,   238,   298,     0,
     298,   241,   298,     0,   298,   245,   298,     0,   298,   231,
     298,     0,   298,   233,   298,     0,   298,   232,   298,     0,
     298,   234,   298,     0,   298,   228,   298,     0,   298,   229,
     298,     0,   298,   230,   298,     0,   298,   227,   298,     0,
     298,   226,   298,     0,   238,   298,     0,   237,   298,     0,
     243,   298,     0,   246,   298,   247,     0,   444,     0,   442,
     305,   307,     0,     5,   379,     0,   379,     0,   379,   305,
       0,     0,   121,   302,   248,   296,   249,     0,     0,    60,
     248,     5,   248,   303,   296,   249,   249,   254,   443,   255,
       0,    61,   248,     5,   249,   254,   443,   256,   443,   255,
       0,    55,   248,   379,   249,     0,    57,   248,   379,   249,
       0,     0,    56,   304,   248,   296,   256,   276,   249,     0,
     231,     5,   233,   248,   296,   249,     0,   252,     5,     0,
     252,   207,     0,   252,   141,     0,   252,     3,     0,   301,
     251,     3,     0,   251,     3,     0,   252,   252,   449,     0,
     301,   253,   443,     0,    59,   248,     5,   256,     3,   249,
       0,   248,   250,   249,     0,   248,   249,     0,   248,   306,
     249,     0,   298,     0,   306,   256,   298,     0,     0,   254,
     446,   255,     0,   254,    69,   248,   276,   249,   255,     0,
       0,   308,   254,   309,   255,     0,     0,   309,   310,     0,
      96,     5,     7,     0,    82,   254,   311,   255,     0,     0,
     311,   254,   312,   255,     0,     0,   312,   313,     0,    69,
     276,     7,     0,    69,    64,     7,     0,    81,     5,   307,
       7,     0,     0,   314,   254,   315,   255,     0,     0,   315,
     316,     0,    96,     5,     7,     0,    88,   292,     7,     0,
      82,   254,   317,   255,     0,     0,   317,   254,   318,   255,
       0,     0,   318,   319,     0,    86,     5,     7,     0,    87,
       5,     7,     0,    82,   254,   320,   255,     0,     0,   320,
     254,   321,   255,     0,     0,   321,   322,     0,    89,     5,
       7,     0,    90,   443,     7,     0,    91,   443,     7,     0,
      92,   443,     7,     0,    93,   443,     7,     0,    94,   443,
       7,     0,     0,   439,     0,   323,   324,     0,   254,   325,
     255,     0,   440,     0,     0,   325,   326,     0,    96,   449,
       7,     0,    96,   449,   286,     7,     0,    86,     5,     7,
       0,    82,   254,   327,   255,     0,    82,     5,   254,   327,
     255,     0,     0,   327,   254,   328,   255,     0,   327,   439,
       0,     0,   328,   329,     0,    86,     5,     7,     0,    69,
     276,     7,     0,    70,   276,     7,     0,    76,   292,     7,
       0,    75,   292,     7,     0,    80,     5,     7,     0,    77,
     254,   444,   285,   444,   255,     7,     0,    71,   276,     7,
       0,    72,   276,     7,     0,    99,   292,     7,     0,    74,
     292,     7,     0,    73,   292,     7,     0,    99,   248,   292,
     256,   292,   249,     7,     0,    74,   248,   292,   256,   292,
     249,     7,     0,    73,   248,   292,   256,   292,   249,     7,
       0,     0,   330,   331,     0,   254,   332,   255,     0,   440,
       0,   439,     0,     0,   332,   333,     0,    96,   449,     7,
       0,    96,     5,   286,     7,     0,    86,     5,     7,     0,
      97,   254,   334,   255,     0,   105,   254,   340,   255,     0,
     107,   254,   347,   255,     0,    68,   254,   350,   255,     0,
       0,   334,   254,   335,   255,     0,     0,   335,   336,     0,
      96,     5,     7,     0,    98,     5,     7,     0,    98,     5,
     286,     7,     0,    99,     5,   337,     7,     0,   100,   254,
       5,   285,     5,   255,     7,     0,   101,   294,     7,     0,
     102,   294,     7,     0,   103,   276,     7,     0,   104,   276,
       7,     0,     0,     0,     0,   254,   112,     5,     7,   111,
       5,   286,     7,   338,    62,   276,     7,   339,   130,     5,
     287,     7,   255,     0,     0,   340,   254,   341,   255,     0,
       0,   341,   342,     0,    96,     5,     7,     0,   106,   343,
       7,     0,    98,   345,     7,     0,     5,     0,   254,   344,
     255,     0,     0,   344,   285,     5,     0,     5,     0,   254,
     346,   255,     0,     0,   346,   285,     5,     0,     0,   347,
     254,   348,   255,     0,     0,   348,   349,     0,    96,   449,
       7,     0,    86,     5,     7,     0,    98,     5,     7,     0,
       0,   350,   254,   351,   255,     0,     0,   351,   352,     0,
      98,     5,     7,     0,   108,   277,     7,     0,   109,   280,
       7,     0,   110,   449,   287,     7,     0,     0,   353,   354,
       0,   254,   355,   255,     0,   440,     0,   439,     0,     0,
     355,   356,     0,    96,   449,     7,     0,    96,     5,   286,
       7,     0,    86,     5,     7,     0,   112,   254,   357,   255,
       0,   116,   254,   364,   255,     0,     0,   357,   254,   358,
     255,     0,   357,   439,     0,     0,   358,   359,     0,    96,
     449,     7,     0,    86,   107,     7,     0,    86,   117,     7,
       0,    86,     5,     7,     0,   181,   445,     7,     0,     0,
     113,   449,   360,   363,     7,     0,     0,   113,     5,   254,
     255,   361,   363,     7,     0,   114,     3,     7,     0,     0,
     248,   362,   296,   249,     7,     0,   128,   276,     7,     0,
      83,     5,     7,     0,    84,     5,     7,     0,    81,     5,
       7,     0,   115,     3,     7,     0,     0,   248,   449,   249,
       0,     0,   364,   365,     0,   364,   440,     0,   364,   439,
       0,   117,   254,   370,   255,     0,   118,   254,   370,   255,
       0,   119,   254,   374,   255,     0,   120,   254,   366,   255,
       0,     0,   366,   367,     0,    86,     5,     7,     0,   110,
       5,     7,     0,   254,   368,   255,     0,     0,   368,   369,
       0,    78,   379,     7,     0,    79,   379,     7,     0,   116,
     379,     7,     0,   128,   276,     7,     0,     0,   370,   371,
       0,     0,     0,   378,   248,   372,   296,   373,   256,   296,
     249,     7,     0,   128,   276,     7,     0,    81,     5,     7,
       0,    83,     5,     7,     0,   129,     7,     0,    84,     5,
       7,     0,    85,   248,     3,   249,     7,     0,     0,   374,
     375,     0,   128,   276,     7,     0,     0,     0,   378,   248,
     376,   296,   377,   256,   379,   249,     7,     0,     0,   121,
       0,   122,     0,   123,     0,   124,     0,   125,     0,   126,
       0,   127,     0,   254,     5,   449,   255,     0,   254,   449,
     255,     0,     0,   380,   381,     0,   254,   382,   255,     0,
     440,     0,   439,     0,     0,   382,   383,     0,    96,   449,
       7,     0,    96,     5,   286,     7,     0,   131,   254,   385,
     255,     0,     0,   138,   384,   254,   392,   255,     0,   439,
       0,     0,   385,   254,   386,   255,     0,   385,   439,     0,
       0,   386,   387,     0,    96,   449,     7,     0,    86,     5,
       7,     0,   132,   388,     7,     0,   133,   450,     7,     0,
     136,   390,     7,     0,   137,     5,     7,     0,   134,   445,
       7,     0,   135,   450,     7,     0,   439,     0,   449,   287,
       0,   254,   389,   255,     0,     0,   389,   285,   449,     0,
     449,     0,   254,   391,   255,     0,     0,   391,   285,   449,
       0,     0,   392,   393,     0,     5,   449,     7,     0,   140,
     292,     7,     0,   150,   254,   399,   255,     0,   154,   254,
     401,   255,     0,   157,   254,   403,   255,     0,   160,   254,
     405,   255,     0,     5,   248,   449,   249,     7,     0,   140,
     248,   292,   249,     7,     0,   149,     7,     0,    15,   248,
     292,   249,   254,   392,   255,     0,    15,   248,   292,   249,
     254,   392,   255,    16,   254,   392,   255,     0,   142,   248,
       5,   256,   292,   249,     7,     0,   166,   248,     5,   256,
     292,   256,   292,   256,   292,   256,   292,   249,     7,     0,
     166,   248,     5,   256,   292,   256,   292,   256,   292,   249,
       7,     0,   166,   248,     5,   256,   292,   256,   292,   249,
       7,     0,   167,   248,     5,   256,   445,   249,     7,     0,
     168,   248,     5,   256,   445,   249,     7,     0,   147,   248,
       5,   256,   292,   249,     7,     0,   148,   248,     5,   256,
     276,   256,     5,   249,     7,     0,   143,   248,     5,   256,
       5,   256,   445,   249,     7,     0,   144,   248,     5,   256,
       5,   256,   443,   249,     7,     0,   145,   248,     5,   256,
     443,   256,   445,   256,   443,   249,     7,     0,   146,   248,
       5,   256,     5,   256,     5,   256,   443,   256,   445,   256,
     443,   256,   443,   249,     7,     0,   150,   248,   443,   256,
     443,   256,   292,   256,   292,   249,   254,   392,   255,     0,
     154,   248,   443,   256,   443,   256,   292,   256,   443,   256,
     443,   249,   254,   392,   255,     0,   157,   248,   443,   256,
     443,   256,   292,   249,   254,   392,   255,     0,   157,   248,
     443,   256,   443,   256,   292,   256,   443,   249,   254,   392,
     255,     0,     0,   189,   394,   248,   396,   397,   249,     7,
       0,     0,   192,   395,   248,   396,   397,   249,     7,     0,
     163,   248,   276,   256,   292,   249,     7,     0,   163,   248,
     276,   256,   292,   256,   443,   256,   292,   249,     7,     0,
     184,   248,   449,   249,     7,     0,   165,   248,   450,   249,
       7,     0,   169,   248,     5,   256,   445,   256,   443,   249,
       7,     0,   170,   248,     5,   256,   443,   256,   450,   249,
       7,     0,   171,   248,     5,   256,   445,   256,   450,   249,
       7,     0,   172,   254,   449,   255,     7,     0,   173,   254,
     449,   255,     7,     0,   179,   254,   449,   256,   276,   256,
     450,   256,   292,   255,     7,     0,   179,   254,   449,   256,
     276,   256,   450,   255,     7,     0,   174,   248,     5,   256,
       5,   256,   443,   256,   443,   249,   254,   392,   255,     7,
       0,   175,   248,     5,   256,     5,   256,   443,   256,   443,
     249,   254,   392,   255,     7,     0,   176,   248,     5,   256,
     443,   249,     7,     0,   180,   254,     5,   256,     5,   256,
     133,   450,   256,     4,   255,     7,     0,   180,   254,     5,
     256,     5,   256,   133,   450,   255,     7,     0,   180,   254,
       5,   256,     5,   255,     7,     0,   177,   248,     5,   256,
       5,   249,     7,     0,   178,   248,     5,   256,     5,   249,
       7,     0,   439,     0,   294,     0,     5,     0,     0,   397,
     398,     0,   256,   204,   450,     0,   256,   207,   445,     0,
     256,   445,     0,     0,   399,   400,     0,   151,   443,     7,
       0,   152,   443,     7,     0,   141,   292,     7,     0,   153,
     292,     7,     0,   138,   254,   392,   255,     0,     0,   401,
     402,     0,   151,   443,     7,     0,   152,   443,     7,     0,
     141,   292,     7,     0,   155,   443,     7,     0,   156,   443,
       7,     0,   138,   254,   392,   255,     0,     0,   403,   404,
       0,   158,   443,     7,     0,    88,   443,     7,     0,   159,
     292,     7,     0,    18,   443,     7,     0,   138,   254,   392,
     255,     0,     0,   405,   406,     0,   158,   443,     7,     0,
     161,   443,     7,     0,    88,   443,     7,     0,    18,   443,
       7,     0,   131,     5,     7,     0,   162,   254,   407,   255,
       0,   138,   254,   392,   255,     0,   139,   254,   392,   255,
       0,     0,   407,   254,   408,   255,     0,     0,   408,   409,
       0,    86,     5,     7,     0,   112,     5,     7,     0,   128,
     276,     7,     0,    88,   443,     7,     0,    99,   292,     7,
       0,    18,     5,     7,     0,     0,   410,   411,     0,   254,
     412,   255,     0,   440,     0,     0,   412,   413,     0,    96,
     449,     7,     0,    96,     5,   286,     7,     0,   132,   449,
     287,     7,     0,   183,     5,     7,     0,   112,   254,   414,
     255,     0,     0,   414,   254,   415,   255,     0,   414,   440,
       0,   414,   439,     0,     0,   415,   416,     0,    96,   449,
       7,     0,    75,   254,   417,   255,     0,     0,   417,   117,
     254,   418,   255,     0,   417,     5,   254,   418,   255,     0,
       0,   418,   419,     0,     0,   378,   248,   420,   296,   249,
       7,     0,    86,     5,     7,     0,     0,   128,   421,   276,
       7,     0,    81,     5,     7,     0,    83,     5,     7,     0,
       0,   422,   423,     0,   254,   424,   255,     0,   440,     0,
     439,     0,     0,   424,   425,     0,    96,   449,     7,     0,
     185,     5,     7,     0,   209,     5,     7,     0,   187,   450,
       7,     0,   138,   254,   428,   255,     0,     0,   184,   449,
     186,   449,   427,   254,   428,   255,     0,     0,     0,   428,
     429,   430,     0,   188,   248,   432,   435,   436,   249,     7,
       0,   189,   248,   432,   435,   436,   249,     7,     0,   189,
     248,   432,   435,   436,   249,   238,   233,   252,   252,   449,
       7,     0,   189,   248,     6,   256,   443,   436,   249,     7,
       0,   189,   248,     6,   256,   222,   248,   450,   249,   436,
     249,     7,     0,     0,   190,   248,   276,   431,   256,   128,
     276,   436,   249,     7,     0,   439,     0,   191,   248,     6,
     436,   249,     7,     0,   449,   434,   256,     0,   449,   434,
     433,     5,   434,   256,     0,   239,     0,   240,     0,   237,
       0,   238,     0,     0,   248,   276,   249,     0,   194,     0,
     195,   276,     0,   196,   276,     0,   198,   254,   254,   446,
     255,   254,   446,   255,   254,   446,   255,   255,     0,   197,
     276,     0,   197,   254,   292,   256,   292,   256,   292,   255,
     254,   445,   256,   445,   256,   445,   255,     0,   199,   254,
     446,   255,     0,   200,   254,   254,   446,   255,   254,   446,
     255,   255,   254,   443,   255,     0,   201,   254,   254,   446,
     255,   254,   446,   255,   254,   446,   255,   255,   254,   443,
     256,   443,   255,     0,   202,   254,   254,   446,   255,   254,
     446,   255,   254,   446,   255,   254,   446,   255,   255,   254,
     443,   256,   443,   256,   443,   255,     0,   195,   276,   203,
       5,   254,   443,   256,   443,   255,   254,   443,   255,     0,
       0,   436,   437,     0,   256,   204,   450,     0,   256,   204,
     233,   450,     0,   256,   204,   236,   450,     0,   256,   205,
     443,     0,   256,   212,     0,   256,   213,     0,   256,   208,
     443,     0,   256,   209,     5,     0,   256,   210,   438,     0,
     256,   211,   438,     0,   256,   209,   438,     0,   256,   206,
     443,     0,   256,   207,   445,     0,   256,   193,     5,     0,
     256,   215,     5,     0,   256,   214,   443,     0,   256,    75,
     445,     0,   256,   216,   443,     0,   256,   216,   254,   446,
     255,     0,   256,   217,     0,   256,   218,     0,   256,   134,
     445,     0,   256,   163,   254,   292,   256,   292,   256,   292,
     255,     0,   256,   219,   294,     0,   256,   220,   254,   443,
     256,   443,   256,   443,   255,     0,   256,   221,   254,   446,
     255,     0,     0,   438,     6,     0,    13,   246,   443,     8,
     443,   247,     0,    13,   246,   443,     8,   443,     8,   443,
     247,     0,    13,     5,   128,   254,   443,     8,   443,   255,
       0,    13,     5,   128,   254,   443,     8,   443,     8,   443,
     255,     0,    14,     0,    15,   246,   443,   247,     0,    17,
       0,    29,   248,   441,   249,     7,     0,   449,   224,   445,
       7,     0,   449,   224,     6,     7,     0,   449,   224,   222,
     248,   450,   249,     7,     0,   449,   224,   451,     7,     0,
     449,   224,    28,   248,   450,   249,     7,     0,    11,   246,
       6,   247,     7,     0,    11,   246,     6,   256,   446,   247,
       7,     0,    12,   246,   449,   247,     7,     0,    12,   246,
     449,   247,   248,   443,   249,     7,     0,     0,   441,   285,
       5,     0,   441,   285,     5,   224,   443,     0,   441,   285,
       5,   224,     6,     0,    35,     0,    36,     0,    37,     0,
      38,     0,    39,     0,    40,     0,    41,     0,    42,     0,
      43,     0,    44,     0,    45,     0,    46,     0,    47,     0,
      48,     0,    49,     0,    50,     0,    51,     0,    52,     0,
      53,     0,    54,     0,   449,     0,   444,     0,   246,   443,
     247,     0,   238,   443,     0,   243,   443,     0,   443,   238,
     443,     0,   443,   237,   443,     0,   443,   239,   443,     0,
     443,   240,   443,     0,   443,   241,   443,     0,   443,   245,
     443,     0,   443,   231,   443,     0,   443,   233,   443,     0,
     443,   232,   443,     0,   443,   234,   443,     0,   443,   228,
     443,     0,   443,   229,   443,     0,   443,   227,   443,     0,
     443,   226,   443,     0,    35,   248,   443,   249,     0,    36,
     248,   443,   249,     0,    37,   248,   443,   249,     0,    38,
     248,   443,   249,     0,    39,   248,   443,   249,     0,    40,
     248,   443,   249,     0,    41,   248,   443,   249,     0,    42,
     248,   443,   249,     0,    43,   248,   443,   249,     0,    44,
     248,   443,   249,     0,    45,   248,   443,   256,   443,   249,
       0,    46,   248,   443,   249,     0,    47,   248,   443,   249,
       0,    48,   248,   443,   249,     0,    49,   248,   443,   249,
       0,    50,   248,   443,   249,     0,    51,   248,   443,   249,
       0,    52,   248,   443,   256,   443,   249,     0,    53,   248,
     443,   256,   443,   249,     0,    54,   248,   443,   256,   443,
     249,     0,   443,   225,   443,     8,   443,     0,   443,   251,
       0,     4,     0,     3,     0,    30,     0,    31,     0,    32,
       0,    33,     0,    34,     0,   449,     0,     0,   443,     0,
     447,     0,   254,   446,   255,     0,   443,     0,   447,     0,
     446,   256,   443,     0,   446,   256,   447,     0,   443,     8,
     443,     0,   443,     8,   443,     8,   443,     0,     5,   254,
     255,     0,     5,   254,   446,   255,     0,    24,   248,     5,
     249,     0,    25,   248,     5,   256,     5,   249,     0,    26,
     248,   443,   256,   443,   256,   443,   249,     0,    27,   248,
     443,   256,   443,   256,   443,   249,     0,     5,   258,   254,
     443,   255,     0,   448,   258,   254,   443,   255,     0,     5,
       0,   448,     0,     6,     0,     5,     0,   451,     0,    10,
     246,   450,   247,     0,    10,   246,   450,   256,   446,   247,
       0,   223,     0,     9,   248,   450,   256,   450,   249,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   372,   372,   446,   449,   449,   455,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   468,   470,   472,   477,
     486,   489,   491,   493,   495,   497,   499,   501,   503,   505,
     507,   509,   511,   513,   515,   517,   519,   521,   523,   525,
     528,   528,   550,   553,   553,   557,   561,   566,   566,   571,
     573,   575,   578,   580,   583,   583,   583,   610,   610,   610,
     638,   647,   654,   689,   694,   705,   708,   722,   727,   730,
     779,   792,   818,   823,   838,   856,   877,   883,   895,   904,
     918,   952,   972,   976,   986,  1003,  1003,  1006,  1012,  1015,
    1018,  1031,  1034,  1037,  1041,  1061,  1105,  1107,  1111,  1114,
    1131,  1140,  1147,  1147,  1155,  1161,  1165,  1170,  1175,  1175,
    1188,  1192,  1192,  1192,  1234,  1240,  1246,  1252,  1258,  1264,
    1270,  1276,  1282,  1288,  1294,  1300,  1306,  1312,  1318,  1324,
    1330,  1337,  1343,  1345,  1354,  1358,  1364,  1438,  1472,  1481,
    1493,  1493,  1506,  1506,  1522,  1534,  1540,  1546,  1546,  1577,
    1601,  1614,  1620,  1627,  1633,  1640,  1647,  1655,  1662,  1678,
    1681,  1682,  1685,  1688,  1691,  1696,  1699,  1713,  1720,  1725,
    1730,  1734,  1741,  1746,  1751,  1756,  1762,  1766,  1771,  1774,
    1810,  1818,  1823,  1832,  1836,  1845,  1848,  1853,  1858,  1863,
    1871,  1875,  1887,  1897,  1902,  1907,  1912,  1924,  1928,  1978,
    1981,  1984,  1987,  1990,  1999,  2006,  2007,  2010,  2032,  2035,
    2045,  2049,  2057,  2064,  2073,  2076,  2098,  2115,  2135,  2142,
    2152,  2156,  2168,  2193,  2218,  2223,  2231,  2239,  2249,  2266,
    2274,  2281,  2288,  2297,  2306,  2315,  2334,  2342,  2345,  2368,
    2370,  2374,  2383,  2387,  2395,  2402,  2411,  2414,  2417,  2420,
    2425,  2443,  2490,  2507,  2511,  2516,  2521,  2526,  2540,  2560,
    2565,  2570,  2594,  2649,  2653,  2653,  2653,  2730,  2736,  2741,
    2746,  2750,  2757,  2760,  2765,  2783,  2788,  2792,  2809,  2823,
    2828,  2832,  2845,  2851,  2858,  2865,  2869,  2876,  2886,  2897,
    2914,  2986,  2998,  3002,  3037,  3040,  3043,  3087,  3094,  3097,
    3119,  3121,  3125,  3133,  3137,  3145,  3152,  3162,  3164,  3169,
    3184,  3198,  3202,  3221,  3225,  3230,  3234,  3237,  3248,  3254,
    3254,  3294,  3294,  3361,  3366,  3366,  3683,  3688,  3697,  3706,
    3715,  3720,  3723,  3761,  3778,  3802,  3807,  3814,  3819,  3822,
    3825,  3830,  3838,  3841,  3853,  3863,  3875,  3884,  3887,  3891,
    3893,  3895,  3901,  3922,  3926,  3926,  3926,  4061,  4085,  4094,
    4103,  4108,  4117,  4126,  4143,  4147,  4181,  4181,  4181,  4260,
    4263,  4264,  4265,  4266,  4267,  4268,  4269,  4273,  4296,  4318,
    4325,  4328,  4349,  4351,  4355,  4363,  4367,  4376,  4383,  4386,
    4386,  4391,  4395,  4411,  4426,  4434,  4450,  4454,  4459,  4468,
    4471,  4476,  4481,  4486,  4491,  4495,  4499,  4538,  4543,  4548,
    4558,  4570,  4574,  4579,  4590,  4599,  4608,  4634,  4641,  4647,
    4653,  4659,  4667,  4689,  4696,  4702,  4713,  4724,  4737,  4752,
    4767,  4782,  4802,  4823,  4835,  4855,  4872,  4891,  4912,  4946,
    4959,  4973,  4986,  4999,  4999,  5008,  5008,  5017,  5028,  5040,
    5050,  5058,  5071,  5084,  5098,  5108,  5118,  5132,  5146,  5164,
    5183,  5194,  5209,  5224,  5239,  5254,  5269,  5279,  5285,  5295,
    5301,  5304,  5308,  5318,  5332,  5344,  5348,  5354,  5358,  5362,
    5367,  5376,  5389,  5393,  5399,  5403,  5407,  5411,  5416,  5425,
    5437,  5440,  5446,  5450,  5454,  5458,  5467,  5482,  5485,  5491,
    5495,  5499,  5504,  5514,  5520,  5526,  5535,  5539,  5543,  5557,
    5560,  5572,  5601,  5604,  5607,  5615,  5631,  5639,  5642,  5663,
    5666,  5677,  5680,  5688,  5696,  5742,  5747,  5752,  5756,  5759,
    5761,  5766,  5773,  5777,  5781,  5786,  5792,  5798,  5811,  5822,
    5825,  5825,  5861,  5872,  5872,  5878,  5887,  5903,  5911,  5914,
    5919,  5921,  5924,  5933,  5936,  5944,  5956,  5967,  5972,  5977,
    5977,  6004,  6008,  6008,  6023,  6029,  6035,  6041,  6047,  6054,
    6054,  6064,  6069,  6076,  6090,  6112,  6115,  6116,  6117,  6120,
    6124,  6128,  6136,  6143,  6150,  6174,  6181,  6193,  6206,  6226,
    6252,  6285,  6305,  6331,  6334,  6342,  6349,  6356,  6360,  6364,
    6368,  6372,  6382,  6387,  6392,  6412,  6419,  6428,  6437,  6446,
    6453,  6461,  6465,  6474,  6478,  6482,  6490,  6496,  6501,  6508,
    6522,  6529,  6577,  6589,  6599,  6613,  6627,  6653,  6657,  6669,
    6673,  6688,  6694,  6700,  6706,  6717,  6722,  6734,  6744,  6760,
    6763,  6769,  6775,  6786,  6788,  6789,  6790,  6791,  6792,  6793,
    6794,  6795,  6796,  6797,  6798,  6799,  6800,  6801,  6802,  6803,
    6804,  6805,  6806,  6807,  6810,  6812,  6813,  6814,  6815,  6816,
    6817,  6818,  6819,  6820,  6821,  6822,  6823,  6824,  6825,  6826,
    6827,  6828,  6829,  6830,  6831,  6832,  6833,  6834,  6835,  6836,
    6837,  6838,  6839,  6840,  6841,  6842,  6843,  6844,  6845,  6846,
    6847,  6848,  6849,  6850,  6853,  6856,  6857,  6858,  6859,  6860,
    6861,  6879,  6895,  6900,  6906,  6909,  6914,  6922,  6925,  6928,
    6938,  6946,  6957,  6973,  6995,  7010,  7048,  7056,  7066,  7076,
    7086,  7090,  7095,  7100,  7115,  7120,  7125,  7144,  7161
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
  "tListFromFile", "tDefineConstant", "tPi", "t0D", "t1D", "t2D", "t3D", 
  "tExp", "tLog", "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos", 
  "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", 
  "tCeil", "tFmod", "tModulo", "tHypot", "tSolidAngle", "tTrace", 
  "tOrder", "tCrossProduct", "tDofValue", "tMHTransform", "tMHJacNL", 
  "tGroup", "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", 
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
  "tDecomposeInSimplex", "tChangeOfValues", "tFrequencyLegend", 
  "tEvaluationPoints", "tStr", "tDate", "tDEF", "'?'", "tOR", "tAND", 
  "tEQUAL", "tNOTEQUAL", "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", 
  "tGREATEROREQUAL", "tLESSLESS", "tGREATERGREATER", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", 
  "'~'", "Stats", "@1", "ProblemDefinitions", "@2", "ProblemDefinition", 
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
  "@27", "@28", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@29", "@30", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@31", 
  "PostSubOperations", "@32", "PostSubOperation", "@33", 
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
       0,   260,   259,   261,   262,   261,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     265,   264,   266,   267,   266,   268,   268,   269,   268,   268,
     268,   268,   268,   268,   271,   272,   270,   274,   275,   273,
     273,   276,   276,   277,   277,   278,   278,   279,   279,   279,
     280,   281,   281,   282,   282,   282,   283,   283,   283,   283,
     283,   283,   284,   284,   284,   285,   285,   286,   287,   287,
     288,   289,   289,   290,   290,   290,   290,   290,   291,   291,
     292,   292,   293,   292,   294,   294,   295,   295,   297,   296,
     298,   299,   300,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   301,   301,   301,   301,   301,   301,
     302,   301,   303,   301,   301,   301,   301,   304,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   305,
     305,   305,   306,   306,   307,   307,   307,   308,   308,   309,
     309,   310,   310,   311,   311,   312,   312,   313,   313,   313,
     314,   314,   315,   315,   316,   316,   316,   317,   317,   318,
     318,   319,   319,   319,   320,   320,   321,   321,   322,   322,
     322,   322,   322,   322,   323,   323,   323,   324,   324,   325,
     325,   326,   326,   326,   326,   326,   327,   327,   327,   328,
     328,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   330,   330,   331,   331,
     331,   332,   332,   333,   333,   333,   333,   333,   333,   333,
     334,   334,   335,   335,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   337,   338,   339,   337,   340,   340,   341,
     341,   342,   342,   342,   343,   343,   344,   344,   345,   345,
     346,   346,   347,   347,   348,   348,   349,   349,   349,   350,
     350,   351,   351,   352,   352,   352,   352,   353,   353,   354,
     354,   354,   355,   355,   356,   356,   356,   356,   356,   357,
     357,   357,   358,   358,   359,   359,   359,   359,   359,   360,
     359,   361,   359,   359,   362,   359,   359,   359,   359,   359,
     359,   363,   363,   364,   364,   364,   364,   365,   365,   365,
     365,   366,   366,   367,   367,   367,   368,   368,   369,   369,
     369,   369,   370,   370,   372,   373,   371,   371,   371,   371,
     371,   371,   371,   374,   374,   375,   376,   377,   375,   378,
     378,   378,   378,   378,   378,   378,   378,   379,   379,   380,
     380,   381,   381,   381,   382,   382,   383,   383,   383,   384,
     383,   383,   385,   385,   385,   386,   386,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   388,   388,   389,   389,
     390,   390,   391,   391,   392,   392,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   394,   393,   395,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   396,   396,   397,
     397,   398,   398,   398,   399,   399,   400,   400,   400,   400,
     400,   401,   401,   402,   402,   402,   402,   402,   402,   403,
     403,   404,   404,   404,   404,   404,   405,   405,   406,   406,
     406,   406,   406,   406,   406,   406,   407,   407,   408,   408,
     409,   409,   409,   409,   409,   409,   410,   410,   411,   411,
     412,   412,   413,   413,   413,   413,   413,   414,   414,   414,
     414,   415,   415,   416,   416,   417,   417,   417,   418,   418,
     420,   419,   419,   421,   419,   419,   419,   422,   422,   423,
     423,   423,   424,   424,   425,   425,   425,   425,   425,   427,
     426,   428,   429,   428,   430,   430,   430,   430,   430,   431,
     430,   430,   430,   432,   432,   433,   433,   433,   433,   434,
     434,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   436,   436,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     438,   438,   439,   439,   439,   439,   439,   439,   439,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   441,
     441,   441,   441,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   444,   444,   444,   444,   444,   444,
     444,   444,   445,   445,   445,   445,   446,   446,   446,   446,
     447,   447,   447,   447,   447,   447,   447,   447,   448,   448,
     449,   449,   450,   450,   450,   450,   450,   450,   451
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
       9,     7,     7,     7,     9,     9,     9,    11,    17,    13,
      15,    11,    13,     0,     7,     0,     7,     7,    11,     5,
       5,     9,     9,     9,     5,     5,    11,     9,    14,    14,
       7,    12,    10,     7,     7,     7,     1,     1,     1,     0,
       2,     3,     3,     2,     0,     2,     3,     3,     3,     3,
       4,     0,     2,     3,     3,     3,     3,     3,     4,     0,
       2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
       3,     3,     3,     4,     4,     4,     0,     4,     0,     2,
       3,     3,     3,     3,     3,     3,     0,     2,     3,     1,
       0,     2,     3,     4,     4,     3,     4,     0,     4,     2,
       2,     0,     2,     3,     4,     0,     5,     5,     0,     2,
       0,     6,     3,     0,     4,     3,     3,     0,     2,     3,
       1,     1,     0,     2,     3,     3,     3,     3,     4,     0,
       8,     0,     0,     3,     7,     7,    12,     8,    11,     0,
      10,     1,     6,     3,     6,     1,     1,     1,     1,     0,
       3,     1,     2,     2,    12,     2,    15,     4,    12,    17,
      22,    12,     0,     2,     3,     4,     4,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     2,     2,     3,     9,     3,     9,     5,
       0,     2,     6,     8,     8,    10,     1,     4,     1,     5,
       4,     4,     7,     4,     7,     5,     7,     5,     8,     0,
       3,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     6,     4,     4,     4,     4,     4,     4,     6,
       6,     6,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     3,     1,     1,     3,     3,
       3,     5,     3,     4,     4,     6,     8,     8,     5,     5,
       1,     1,     1,     1,     1,     4,     6,     1,     6
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,    19,     0,    16,    17,   731,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   732,     0,     0,   737,    18,   734,   639,
      42,   204,   167,   180,   236,    91,   297,   379,   516,   547,
       0,     0,   626,     0,   628,     0,     0,     0,     0,    41,
     571,     0,   712,     0,     0,     0,    26,    25,    24,    22,
      23,    21,    39,    29,    31,    32,    33,    34,    30,    35,
      36,    37,    38,     0,     0,    85,    43,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   705,   704,   730,     0,
       0,     0,     0,     0,     0,   706,   707,   708,   709,   710,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   713,   664,     0,   714,   711,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       6,     0,   209,     8,   206,   208,   169,     9,   182,    10,
     241,    11,   237,   240,   239,   730,     0,     7,    92,    97,
      96,   302,    12,   298,   301,   300,   384,    13,   380,   383,
     382,   520,    14,   517,   519,   552,    15,   548,   551,   550,
     559,     0,     0,     0,     0,   579,     0,     0,   730,    63,
       0,    61,   569,     0,    88,   592,     0,     0,   631,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   666,   667,     0,   716,     0,
     717,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   703,   630,   633,
     728,   635,     0,   637,     0,     0,   735,     0,   629,   640,
     730,     0,    44,    50,    53,    52,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
     627,   581,     0,     0,     0,     0,     0,     0,     0,     0,
     592,     0,     0,     0,   592,    76,   730,    73,     0,    60,
      71,    80,     0,    57,     0,    62,     0,   729,   722,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   665,   715,     0,   720,
       0,   681,   680,   678,   679,   674,   676,   675,   677,   669,
     668,   670,   671,   672,   673,     0,     0,     0,     0,     0,
       0,     0,     0,    82,   712,     0,     0,     0,     0,     0,
     207,   210,     0,     0,   168,   170,     0,   102,     0,   181,
     183,     0,     0,     0,     0,     0,     0,   238,   242,     0,
       0,    85,     0,     0,     0,     0,   299,   303,     0,     0,
     389,   381,   385,   391,     0,     0,     0,     0,   518,   521,
       0,     0,     0,     0,     0,   549,   553,   561,     0,     0,
     582,   583,   102,   585,     0,     0,     0,     0,     0,     0,
       0,   577,   578,   575,   576,   573,     0,     0,   592,     0,
       0,     0,    85,     0,     0,     0,    89,     0,     0,   593,
     723,   724,     0,     0,     0,     0,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,     0,   693,   694,   695,
     696,   697,   698,     0,     0,     0,     0,   718,   719,     0,
       0,   636,     0,   738,   736,   642,   641,     0,     0,    47,
       0,    85,   730,     0,     0,     0,     0,   216,     0,     0,
     173,     0,   187,     0,     0,     0,   108,     0,   289,     0,
     730,     0,   250,   267,   282,   102,     0,     0,     0,     0,
     730,     0,   309,   333,   730,     0,   392,     0,   730,     0,
     527,    88,     0,     0,   561,     0,     0,     0,   562,     0,
       0,   622,     0,     0,     0,     0,     0,     0,     0,     0,
     580,   579,     0,     0,     0,   705,    78,    81,    72,     0,
      77,     0,    66,    58,    65,   572,   712,   712,     0,     0,
       0,     0,     0,   712,     0,   620,   620,   620,   598,   599,
       0,     0,     0,   613,   614,   104,     0,     0,     0,     0,
       0,   634,     0,     0,     0,     0,   632,   721,   702,   638,
      90,     0,     0,    64,     0,     0,     0,    45,     0,     0,
     216,     0,   213,   211,     0,     0,     0,   171,     0,     0,
       0,   185,   103,     0,   184,     0,   245,     0,   243,     0,
       0,     0,     0,   102,    93,    99,   306,     0,   304,     0,
       0,     0,   386,     0,   414,     0,   522,     0,     0,   525,
     554,   562,   555,   557,   556,   560,     0,     0,     0,     0,
     102,     0,   587,     0,     0,     0,   564,     0,     0,     0,
     565,     0,     0,     0,    74,   592,    85,   610,   615,   102,
     607,     0,     0,   594,   597,   605,   606,   600,   601,   604,
     602,   603,   609,   608,     0,   611,   102,   617,     0,     0,
     725,     0,     0,   692,   699,   700,   701,    87,     0,    46,
      49,    83,    51,     0,     0,   219,   214,   218,   212,   175,
     172,   189,   186,     0,     0,   730,   643,   644,   645,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,     0,   147,     0,     0,
       0,     0,     0,   140,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   110,   138,     0,   135,   711,   291,   249,
     244,   252,   246,   269,   247,   284,   248,    94,     0,   305,
     312,   307,   311,     0,     0,     0,     0,   308,   334,   336,
     335,   387,   395,   388,   394,     0,   523,   531,   526,   530,
     529,   524,   558,   563,     0,   624,   623,     0,     0,     0,
       0,     0,     0,   574,   592,   567,     0,    79,    75,     0,
       0,     0,     0,   595,   596,   621,     0,   106,     0,     0,
       0,     0,     0,    48,     0,    54,   215,     0,     0,     0,
     100,   101,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,   131,   133,     0,   155,   153,   150,   152,
     151,     0,   730,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,   164,     0,     0,     0,     0,
      95,     0,   352,   352,   363,   341,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,   445,   390,   415,   466,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,    59,    70,     0,     0,
     102,   612,   105,   102,     0,   619,   726,   727,     0,     0,
       0,     0,     0,     0,   102,   102,   102,   102,     0,     0,
       0,   102,   217,   220,     0,     0,   174,   176,     0,     0,
       0,   188,   190,     0,   108,     0,     0,     0,     0,     0,
     108,     0,   134,   156,     0,   378,     0,   130,   129,   126,
     127,   128,   122,   124,   123,   125,   118,   119,   114,   117,
     120,   115,   121,   154,   157,   160,     0,   162,     0,     0,
     136,     0,     0,     0,     0,   290,   292,     0,     0,     0,
       0,   104,   104,     0,     0,   251,   253,     0,     0,     0,
     268,   270,     0,     0,     0,   283,   285,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   712,   324,   310,   313,
     369,   369,   369,     0,     0,     0,     0,     0,   712,     0,
       0,     0,   393,   396,   405,     0,     0,   102,   102,     0,
       0,     0,     0,     0,     0,     0,     0,   424,     0,   474,
       0,   481,     0,   489,   496,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   528,   532,   625,
       0,     0,     0,     0,     0,     0,     0,     0,   570,    88,
      68,     0,   107,     0,    84,     0,     0,     0,     0,     0,
     102,     0,   102,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,   164,   194,     0,     0,   145,     0,   146,
       0,     0,   142,     0,     0,   108,   377,     0,   159,   161,
       0,     0,     0,     0,     0,     0,    88,     0,     0,   263,
       0,     0,     0,     0,     0,     0,   278,   280,     0,   274,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,   319,     0,     0,     0,     0,   108,     0,
       0,     0,     0,   370,   371,   372,   373,   374,   375,   376,
       0,     0,   337,   353,     0,   338,     0,   339,   364,     0,
       0,     0,   346,   340,   342,     0,     0,   408,     0,    88,
       0,     0,     0,   412,     0,   410,     0,     0,   416,     0,
       0,   417,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   104,   535,     0,     0,     0,
       0,     0,     0,     0,   568,     0,    69,   102,     0,     0,
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
       0,     0,     0,   102,     0,     0,   102,   418,   475,     0,
       0,   102,     0,     0,     0,     0,   419,   482,     0,     0,
       0,     0,     0,   102,   420,   490,     0,     0,     0,     0,
       0,     0,     0,     0,   421,   497,   102,     0,   102,   712,
     712,   712,     0,   712,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   468,   467,   469,   469,     0,   533,
       0,   712,     0,     0,     0,     0,   566,     0,     0,    55,
     102,   102,     0,   102,   179,   196,   193,     0,   116,   158,
       0,     0,   149,     0,     0,   296,   256,     0,   257,     0,
     279,     0,   275,     0,   321,     0,     0,     0,   358,   359,
     361,     0,   357,   108,   365,   108,   343,   344,     0,     0,
       0,     0,   345,   347,   407,     0,   411,     0,   422,   414,
     423,     0,     0,     0,     0,     0,     0,     0,     0,   414,
       0,     0,     0,     0,     0,   414,     0,     0,     0,     0,
       0,     0,     0,     0,   414,     0,     0,     0,     0,     0,
     414,   414,     0,     0,   506,     0,   450,     0,     0,     0,
       0,     0,     0,   454,   455,     0,     0,     0,     0,     0,
       0,     0,   449,     0,     0,     0,     0,   534,     0,     0,
       0,     0,     0,     0,   616,   618,     0,     0,     0,     0,
       0,     0,   148,     0,     0,   113,     0,     0,     0,   281,
     277,   331,     0,   320,   325,     0,   355,   367,     0,     0,
       0,     0,   409,   413,     0,     0,   712,     0,   712,     0,
       0,     0,   102,     0,   478,   476,   477,   479,   102,     0,
     485,   483,   484,   486,   487,   102,   494,   492,     0,   491,
     493,   501,   500,   502,     0,     0,   498,   499,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   712,   470,     0,   538,
     538,     0,   712,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   195,   197,
       0,     0,   166,     0,     0,     0,   332,   362,     0,     0,
     348,   349,   350,   351,   425,   427,     0,     0,     0,     0,
     433,     0,     0,   480,     0,   488,     0,   495,   504,   505,
     508,   503,   447,     0,     0,   431,   432,     0,     0,     0,
       0,     0,   460,   464,   465,     0,   463,     0,   444,     0,
     712,   473,   446,   369,   369,   591,     0,   584,   588,     0,
       0,     0,   235,   234,   227,   233,     0,     0,     0,     0,
       0,     0,     0,   144,     0,   258,   322,   108,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
     102,     0,   102,     0,     0,     0,     0,     0,     0,   102,
       0,   471,   472,     0,     0,     0,   543,   537,     0,   539,
     536,   712,     0,     0,     0,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,   414,   435,   436,     0,     0,
     434,     0,     0,   414,     0,     0,     0,     0,   102,     0,
       0,   507,   509,     0,   430,     0,   451,   452,   453,     0,
       0,   457,     0,     0,     0,     0,     0,     0,     0,   540,
       0,     0,     0,     0,   143,     0,     0,     0,     0,     0,
     712,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   462,     0,   545,
     546,   542,     0,   108,   586,     0,     0,     0,   264,   356,
     368,   426,   437,     0,   414,     0,   441,   414,   515,   510,
     513,   514,   511,   512,   448,   429,     0,   414,   414,   456,
       0,   544,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   461,     0,   589,     0,    56,     0,
       0,   439,   414,   442,   428,     0,     0,   541,     0,     0,
       0,     0,   458,   459,     0,   265,     0,   440,     0,     0,
       0,     0,     0,   438,   590,    88,     0,     0,   266,     0,
       0,     0
};

static const short yydefgoto[] =
{
    1999,     1,     2,     3,    22,    23,    24,   106,   181,   302,
     642,   303,   999,  1626,   231,   485,   716,   232,   233,   603,
     860,   989,   339,   482,   340,   531,   179,   401,   345,   402,
     112,   198,   431,   545,   546,  1495,   868,   662,   663,   802,
    1036,  1523,   803,   890,  1364,   884,   924,  1058,  1060,   109,
     308,   415,   656,   878,  1017,   110,   309,   420,   658,   879,
    1022,  1358,  1631,  1729,   107,   184,   307,   411,   651,   877,
    1013,   111,   192,   310,   428,   669,   927,  1076,  1380,  1956,
    1989,   670,   928,  1081,  1231,  1389,  1228,  1387,   671,   929,
    1086,   665,   926,  1066,   113,   203,   313,   437,   679,   931,
    1099,  1402,  1641,  1248,  1536,   680,   828,  1103,  1274,  1419,
    1553,  1100,  1263,  1543,  1738,  1102,  1268,  1545,  1739,  1264,
     804,   114,   208,   314,   442,   567,   683,   936,  1113,  1278,
    1422,  1284,  1428,   835,   973,  1153,  1154,  1496,  1613,  1707,
    1300,  1448,  1302,  1457,  1304,  1465,  1305,  1475,  1688,  1819,
    1872,   115,   213,   315,   449,   687,   975,  1158,  1498,  1783,
    1839,  1923,  1888,   116,   217,   316,   456,    25,   317,   578,
     696,    79,   342,   224,   476,   332,   330,   346,   489,   729,
     974,    26,   105,   805,   268,   166,   167,   269,   270,    27,
     169,    57,    58
};

static const short yypact[] =
{
  -32768,-32768,    96,  4499,  -176,  -147,  -129,   643,   118,  1617,
     210,   -76,   -80,   -44,   -32,   -16,    17,    91,   150,   172,
     174,    31,-32768,-32768,   614,-32768,-32768,   114,   113,   186,
     428,   446,   454,-32768,   471,   481,   501,   504,   512,-32768,
     521,-32768,   539,   542,   548,   559,   570,   575,   582,   596,
     603,   609,-32768,-32768,   205,   257,-32768,-32768,-32768,-32768,
  -32768,   580,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     344,    43,-32768,   341,-32768,   384,   387,   393,   408,-32768,
  -32768,   404,  2176,  4079,  -119,   423,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   210,   210,  -127,   418,    72,-32768,  -101,
     147,   282,   189,   478,   509,    86,   545,   446,   547,  4079,
    4079,   446,   470,    11,   681,  4079,-32768,-32768,   271,   674,
     461,   463,   466,   495,   500,-32768,-32768,-32768,-32768,-32768,
     525,   532,   549,   553,   565,   567,   589,   593,   597,   605,
     607,   616,   630,   636,   640,   685,   687,   691,   703,   706,
     708,  4079,  4079,  4079,  3914,  4178,-32768,   722,-32768,-32768,
     727,  4691,   747,  3914,    58,   515,   -60,   762,-32768,   782,
  -32768,  1696,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  -203,   714,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,   563,  4199,  2484,  1082,   723,   601,  1082,   -75,-32768,
      29,-32768,-32768,   731,   577,-32768,  4722,  1459,-32768,   838,
     864,  4079,  4079,   210,  4079,  4079,  4079,  4079,  4079,  4079,
    4079,  4079,  4079,  4079,  4079,  4079,  4079,  4079,  4079,  4079,
    4079,  4079,  4079,  4079,   210,  -151,  -151,  3394,  4178,   308,
  -32768,  4079,  4079,  4079,  4079,  4079,  4079,  4079,  4079,  4079,
    4079,  4079,  4079,  4079,  4079,  4079,  4079,-32768,-32768,-32768,
  -32768,-32768,    19,-32768,  4079,   210,-32768,  3914,-32768,   658,
     348,   734,-32768,-32768,-32768,-32768,   -85,    84,    89,   141,
     569,    73,-32768,   352,   452,   476,   587,   669,  4079,  4079,
  -32768,-32768,    11,    11,    26,   730,   738,   740,   752,   756,
  -32768,    11,   583,  3966,-32768,   933,   359,-32768,  3914,-32768,
  -32768,-32768,   704,-32768,   759,-32768,   -21,-32768,-32768,   320,
     772,   767,  1764,  2214,   778,  5094,  5121,  5148,  5175,  5202,
    5229,  5256,  5283,  5310,  5337,  2664,  5364,  5391,  5418,  5445,
    5472,  5499,  2755,  2937,  3028,   798,-32768,-32768,  3914,  4220,
    4241,  2152,  6112,  1209,  1209,   905,   905,   905,   905,   595,
     595,  -151,  -151,  -151,  -151,  1018,  5526,   808,    87,  4018,
      21,   836,   840,-32768,  2124,   842,  4079,    37,  1062,   446,
  -32768,-32768,   814,  1064,-32768,-32768,   818,    69,  1068,-32768,
  -32768,   820,  1070,  1072,   824,   825,   827,-32768,-32768,   858,
     834,    25,  1079,  1080,   833,   839,-32768,-32768,  1085,   841,
  -32768,-32768,-32768,-32768,  1089,   843,   446,  1093,-32768,-32768,
     446,   845,  1096,   210,  1099,-32768,-32768,-32768,  4262,  4065,
     903,-32768,    69,-32768,   855,  3914,   856,   857,   862,    51,
     868,-32768,-32768,-32768,-32768,-32768,  1113,   871,  6066,    93,
    4131,   865,   368,   411,  1000,    22,-32768,  1123,  4067,-32768,
  -32768,-32768,  1126,  4079,  4079,  1127,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  4079,-32768,-32768,-32768,
  -32768,-32768,-32768,  4079,  4079,  4079,  1130,  4178,-32768,  4079,
    4079,-32768,  1132,-32768,-32768,-32768,  6066,   896,  4079,-32768,
      82,   165,   -41,  1145,    82,  5553,   900,-32768,  1148,    30,
  -32768,  1150,-32768,   911,   912,  1154,-32768,  1161,-32768,  1174,
     364,  1180,-32768,-32768,-32768,    69,   964,  1182,  1186,  1187,
     364,  1188,-32768,-32768,   364,  1191,-32768,   939,   364,  1192,
  -32768,   577,  1193,  1196,-32768,  1197,  1198,  1199,   953,  4079,
    4079,-32768,  1204,   954,  3914,   486,  3914,  3914,  3914,  1205,
  -32768,   723,   210,   180,    40,  1207,  6066,-32768,-32768,    35,
  -32768,    11,-32768,-32768,-32768,-32768,  2453,  2453,   959,  1212,
     413,  4079,  4079,  2453,  4079,  1213,-32768,-32768,-32768,-32768,
    4079,  1214,  2290,-32768,-32768,   968,   970,   971,   983,  3119,
    3210,-32768,  5580,  5607,  5634,  5661,-32768,  6066,  6066,-32768,
  -32768,  4753,    82,-32768,  1228,  1232,  1236,-32768,  1235,  1019,
  -32768,   121,-32768,-32768,   993,  1245,   491,-32768,   496,  4079,
    1251,-32768,-32768,  2065,-32768,   498,-32768,  1252,-32768,   502,
     506,   522,  1253,    69,-32768,-32768,-32768,  1254,-32768,   162,
     398,  1255,-32768,   219,-32768,  1257,-32768,   556,  1258,-32768,
  -32768,  1003,-32768,-32768,-32768,-32768,   614,   634,  5688,  1031,
      69,   523,-32768,   530,   551,   571,-32768,  1033,  1042,  1285,
  -32768,  1060,  4079,     6,-32768,-32768,   193,-32768,-32768,    69,
  -32768,   210,   210,-32768,  6066,  6066,-32768,  6066,-32768,  1288,
    1288,  1288,  6066,-32768,  3914,  6066,    69,-32768,  4079,  3914,
  -32768,  4079,  4079,-32768,-32768,-32768,-32768,-32768,  1289,-32768,
  -32768,  1045,-32768,  1237,   485,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  5715,  1053,   403,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  1056,-32768,  1057,  1071,
    1078,  1083,  1086,-32768,  1296,  2065,  2065,  2065,  2065,  1317,
      57,  1322,  6162,   -67,  1090,  1090,-32768,  1101,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1321,-32768,
  -32768,-32768,-32768,  1076,  1102,  1106,  1107,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  2403,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  4079,-32768,-32768,  4079,  1077,  1108,
    1109,  1110,  1112,-32768,-32768,-32768,  1092,  6066,-32768,   196,
    1088,    85,  1094,-32768,-32768,-32768,   573,-32768,   621,  3301,
     625,  5742,  5769,-32768,  4079,-32768,-32768,   966,    74,   399,
  -32768,-32768,-32768,  1115,  1120,  1115,  2065,  1327,  1365,  1366,
    1125,  1153,  1136,  1136,  1136,  6139,-32768,-32768,-32768,-32768,
  -32768,   446,    12,  1138,-32768,  2065,  2065,  2065,  2065,  2065,
    2065,  2065,  2065,  2065,  2065,  2065,  2065,  2065,  2065,  2065,
    2065,  1384,  4079,  1804,-32768,  1140,   946,   874,    50,    61,
  -32768,  1052,-32768,-32768,-32768,-32768,   990,    64,    13,    65,
    1147,  1149,  1152,  1155,  1156,  1160,  1167,  1391,   -24,   151,
     183,  1166,  1173,  1181,  1190,  1203,  1208,  1210,  1211,  1217,
    1179,  1201,  1218,  1219,  1221,  1222,  1224,  1233,  1260,  1225,
  -32768,-32768,-32768,-32768,-32768,    27,  4784,  4006,    69,  3914,
    3914,  3914,  3914,   206,  1176,  1392,-32768,-32768,   446,    29,
      69,-32768,-32768,    69,  4079,-32768,-32768,-32768,  4815,  1234,
      11,    11,    11,    11,    66,    70,    69,    69,  1271,  1429,
    1430,    98,-32768,-32768,    80,  1448,-32768,-32768,  1272,  1452,
    1456,-32768,-32768,  1284,-32768,  1287,  1504,  1278,  1291,  1293,
  -32768,  1292,-32768,-32768,  1282,-32768,  2065,  6181,  3857,  1402,
    1402,  1402,  1009,  1009,  1009,  1009,   482,   482,  1136,  1136,
    1136,  1136,  1136,-32768,-32768,-32768,  1295,  6162,   214,  3862,
  -32768,  1533,    76,  1540,   446,-32768,-32768,  1541,  1544,  1551,
    1303,   968,   968,    11,    11,-32768,-32768,  1557,    44,    47,
  -32768,-32768,  1558,   446,  1562,-32768,-32768,  1564,  1565,  1566,
      -1,   446,  1569,  1572,  1573,    11,  2453,-32768,-32768,-32768,
    1146,  2113,  1353,   288,  1574,   446,    48,   210,  2453,   210,
      49,  1575,-32768,-32768,-32768,   446,  1576,    69,    69,  1583,
    1586,  1588,  1590,  1591,  1593,  1595,  1596,-32768,  4079,-32768,
    4079,-32768,  4079,-32768,-32768,    11,   210,  1597,  1598,  1599,
    1604,  1605,  1606,   446,   446,  1609,  1610,  1611,  1612,  1613,
     446,  1616,   446,  1333,  1374,  1371,   446,-32768,-32768,-32768,
    4079,  1372,   631,   635,   637,   641,  1619,   446,-32768,   577,
  -32768,  1373,-32768,  4101,-32768,  1377,  1623,  1624,  1630,  1639,
      69,  1641,    69,  1642,  1648,  1654,   986,  1660,  1661,    69,
    1664,  1665,  1666,  1140,-32768,  1667,  1668,-32768,  1421,-32768,
    2065,  1675,-32768,  1426,  1432,-32768,-32768,  3748,-32768,-32768,
    2065,  1434,   645,  1676,  1677,  1679,   577,  1680,    34,  1435,
    1683,  1684,  1685,  1686,  1688,  1692,-32768,-32768,  1708,-32768,
  -32768,  1710,  1711,  1713,  1714,  1715,  1716,  1719,  1732,  1741,
    1744,  1745,   424,-32768,  1746,  1747,  1748,  1749,-32768,  1698,
    1752,  1753,  1513,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
      11,  1758,-32768,-32768,  1518,-32768,    11,-32768,-32768,  1520,
    1765,  1771,-32768,-32768,-32768,  1762,  1774,-32768,  1775,   577,
    1782,  1783,  1786,-32768,  1787,-32768,  1788,  1549,-32768,  1553,
    1556,-32768,  1550,  1554,  1555,  1559,  1560,  1561,  1563,  4122,
     492,  4157,   907,  4298,   513,   453,  1567,  1571,  1568,  1614,
    1615,  1618,  1620,  1621,  1570,  1625,  1622,  1626,  1627,  1628,
    1636,  1649,  1650,  1578,    56,    56,-32768,  1806,  4846,  1643,
    1644,  1655,  1657,  1658,-32768,  1807,-32768,    69,  4079,    29,
  -32768,-32768,-32768,-32768,  1653,-32768,  1659,-32768,-32768,-32768,
    1670,-32768,-32768,  1671,-32768,-32768,-32768,  1814,   664,-32768,
  -32768,    11,  6093,  1579,-32768,  4079,-32768,  1632,-32768,  6162,
      11,-32768,-32768,-32768,-32768,  1815,-32768,-32768,  1859,  1756,
    1862,  1670,-32768,-32768,-32768,-32768,-32768,   666,-32768,   670,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  1673,  1631,-32768,-32768,-32768,-32768,  1672,  1865,  1866,
    1868,  1901,  1907,-32768,-32768,  1909,-32768,  1910,  1913,    83,
  -32768,-32768,   672,-32768,-32768,-32768,-32768,-32768,   675,-32768,
  -32768,  1916,  1681,  1922,    69,  1925,  1926,  4079,  1929,    69,
      11,  4079,  1682,    69,  4079,  4079,    69,-32768,-32768,  4079,
    1700,    69,  4079,  4079,  4079,  4079,-32768,-32768,  4079,  4079,
    4079,  1701,  4079,    69,-32768,-32768,  4079,  4079,  1937,  1702,
    1704,  4079,  4079,  1705,-32768,-32768,    69,  1953,    69,  2453,
    2453,  2453,  4079,  2453,  1954,  1955,  1959,  1960,  4079,  1962,
    1973,    11,  1974,  1978,-32768,-32768,-32768,-32768,    10,-32768,
    1733,  2453,  3914,  1767,  3914,  3914,-32768,  1731,  4877,-32768,
      69,    69,   986,    69,-32768,-32768,-32768,  1751,-32768,-32768,
    1778,  4319,-32768,  2065,  1779,-32768,-32768,  2002,-32768,  2024,
  -32768,  2027,-32768,  2028,-32768,   446,  2030,  2031,-32768,-32768,
  -32768,  1790,-32768,-32768,-32768,-32768,-32768,-32768,  1115,  1115,
    1115,    11,-32768,-32768,-32768,   446,-32768,   446,-32768,-32768,
  -32768,  1791,  1789,  1792,  4374,  1793,  1794,  1795,  4406,-32768,
    2037,   945,  1084,  2039,  4439,-32768,  2045,  1114,  1151,  1185,
    1290,  4460,  1425,  1546,-32768,  1662,  2050,  1712,  1743,  2052,
  -32768,-32768,  1785,  2387,-32768,   223,-32768,  1805,  1813,  1816,
    1808,  4481,  1810,-32768,-32768,  1811,  1817,  5796,  1822,  1823,
    1818,   693,-32768,   231,   245,  1780,  1821,-32768,  4079,  1820,
     709,  4079,   712,   732,-32768,-32768,  1824,  1828,  1829,  1826,
    1830,   853,-32768,  1833,  4079,  6162,  1832,  2076,  1834,-32768,
  -32768,  1631,  1836,-32768,-32768,  2081,-32768,-32768,  2083,  2084,
    2085,  2086,-32768,-32768,  2503,  2125,  2453,  4079,  2453,  2126,
    2127,  2130,    69,  2594,-32768,-32768,-32768,-32768,    69,  2688,
  -32768,-32768,-32768,-32768,-32768,    69,-32768,-32768,  2779,-32768,
  -32768,-32768,-32768,-32768,  2870,  2961,-32768,-32768,   754,  2129,
    4079,    69,  2131,  2132,  4079,   210,   210,  4079,  4079,  2133,
    2134,  2135,   210,  2136,  2004,  2137,  2228,-32768,  2138,-32768,
  -32768,  4908,  2453,  1891,  4939,  1892,  1899,  1932,  2177,  2180,
    2181,  2182,  2185,  4079,  4079,  4079,  4079,  4079,-32768,-32768,
    1938,  4970,-32768,  2080,  2188,  2192,-32768,-32768,  1949,  1987,
  -32768,-32768,-32768,-32768,  2229,-32768,  1995,  5823,  1990,  1991,
  -32768,  1999,  1993,-32768,  1994,-32768,   248,-32768,-32768,-32768,
  -32768,-32768,-32768,  4502,   291,-32768,-32768,  5850,  2007,  2008,
    4523,  4544,-32768,-32768,-32768,   757,-32768,   210,-32768,   210,
    2453,-32768,-32768,  2226,  3953,-32768,  2029,-32768,-32768,  1997,
    3914,    29,-32768,-32768,-32768,-32768,  2276,  2578,  2845,  3476,
    3567,  3594,  4079,-32768,  2279,-32768,-32768,-32768,  1115,  2032,
    2280,  2281,  4079,  4079,  2282,    69,  4079,  2036,  4079,   726,
      69,  2284,    69,  2285,  2291,  2292,  4079,  4079,  2293,    69,
     774,-32768,-32768,  2296,  2299,  2300,-32768,-32768,  2049,-32768,
  -32768,  2453,  4079,   776,  2054,-32768,-32768,-32768,-32768,-32768,
  -32768,  5001,  2059,  2057,  2066,-32768,-32768,-32768,  5877,  4565,
  -32768,  2069,  4586,-32768,  5904,  2309,  2340,  4079,    69,  2350,
      11,-32768,-32768,  2107,-32768,   295,-32768,-32768,-32768,  5931,
    5958,-32768,  2102,  2351,  2355,  2353,  2354,  2356,    11,-32768,
    2109,  4607,  2110,  4079,-32768,  2359,  2362,  2364,  3052,  2365,
    2453,  2119,  4079,  3143,  2120,  2369,  2370,  3623,  2375,  2380,
    2381,  2388,  2389,    69,  2145,  2146,  2394,-32768,  2147,-32768,
  -32768,-32768,  2397,-32768,-32768,  4079,  2151,  5985,-32768,-32768,
  -32768,-32768,-32768,  2150,-32768,  6012,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  2158,-32768,-32768,-32768,
    2402,-32768,  2161,  5032,  4079,  2404,  2361,  4079,  3234,  2159,
    3325,  2405,  3416,  3507,-32768,  2408,-32768,  4628,-32768,    11,
    4649,-32768,-32768,-32768,-32768,  2414,  2417,-32768,  4079,  2418,
    4079,  3598,-32768,-32768,  4670,-32768,  6039,-32768,  4079,  2297,
    2419,  5063,  2423,-32768,-32768,   577,  2422,  2178,-32768,  2431,
    2434,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  -325,-32768,-32768,  -265,  1375,-32768,
  -32768,  1381,  -483,-32768,  -531,-32768,  -426,  -538,  -564,-32768,
  -32768,-32768,-32768,  -223,-32768,  -612,-32768,  -991,-32768,  -665,
  -32768,-32768,-32768,-32768,-32768,-32768,  1633,-32768,  1243,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1799,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,   809,-32768,-32768,-32768,-32768,-32768,
  -32768,  1527,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1079,
    -759,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768, -1540,-32768,-32768,-32768,  1137,   967,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   751,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1889,
  -32768,  1772,-32768,  2345,-32768,  1878,  2245,  -320,-32768,   434,
      79,   -40,-32768,-32768,   106,  -217,  -543,  -130,   -74,-32768,
      -3,   -83,   -79
};


#define	YYLAST		6426


static const short yytable[] =
{
      28,   655,   604,   170,  1238,   558,   882,   688,   168,   335,
     469,   336,   667,   737,   479,  1615,   228,     4,    70,  1654,
     175,   176,   677,  1269,   527,   335,   681,   336,    85,  1663,
     685,   228,   335,  1198,   336,  1669,     4,   653,   335,  1204,
     336,  1377,   536,   292,  1678,   311,   430,   710,   118,  1226,
    1684,  1685,  1229,     4,     4,    29,   599,   460,   461,   463,
     897,  1494,   898,   717,   718,   293,   470,   185,   714,     4,
     726,   194,   200,   205,   210,   214,   219,     4,   228,   533,
     229,   643,    29,     5,     6,   228,   602,   643,   543,   543,
     987,     4,   543,   543,   286,   229,    -2,     5,     6,    30,
     287,    11,  1155,    80,    28,   646,  1239,   349,    28,    28,
      28,    28,    28,    28,   220,    11,  1240,    31,   225,   225,
     234,   543,   177,  1156,  1023,    39,  1025,  1616,   172,   178,
     892,   893,   894,   895,    71,    72,    73,   173,    74,   404,
     108,   305,   229,  1014,  1191,   229,  1077,  1082,  1078,   229,
     988,   229,   405,   186,   187,  1015,  1079,  1083,   593,  1084,
     354,  1548,  1549,   406,   544,   544,   407,   398,   544,   544,
     408,   412,    59,   -64,    60,    71,    72,    73,   306,    74,
     409,   375,   858,    29,   921,   413,   922,   296,   165,   171,
     193,   199,   204,   209,   195,   218,   297,   544,   899,  1550,
       5,     6,    71,    72,    73,   644,    74,   -64,   483,   648,
      61,  1551,   397,   237,  1367,    52,    53,    29,    11,    54,
      55,  1026,    62,   416,  1128,   222,   223,   341,   487,   417,
    1129,   236,    71,    72,    73,   488,    74,   418,    63,   583,
    1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,  1048,  1049,  1050,  1051,  1052,   196,  1407,  1057,   120,
     304,  1117,   230,   338,   900,  1617,   395,   265,   266,   267,
      29,    64,   528,   713,   557,   378,   337,   230,   711,   338,
     462,   178,  1157,   337,   654,    69,   338,     4,   654,   119,
     861,   537,   338,     5,     6,    71,    72,    73,  1227,    74,
     589,  1230,  1277,  1283,   518,  1080,   294,   488,   234,   901,
     736,    11,  1115,  1118,  1180,  1898,  1085,   748,  1182,   234,
     234,   234,   429,  1903,   230,   170,   182,   183,   234,  1016,
     168,   230,   672,   230,   524,   585,   715,    82,  1552,   410,
     211,   212,   594,   378,   414,    65,  1189,   352,   353,   488,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     576,  1207,    81,  1520,  1270,   755,   756,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   443,  1958,   859,   419,  1960,  1271,  1130,
     396,   188,   189,     4,    66,  1131,   539,  1962,  1963,     5,
       6,    71,    72,    73,   645,    74,   820,   821,    52,    53,
     551,   178,    54,    55,   458,   459,    67,    11,    68,   709,
     561,  1132,  1981,    56,    84,   565,   488,  1133,   432,   478,
      83,   569,   -67,   571,   197,   985,   806,   573,   433,   178,
     818,     4,   488,   103,   701,  1166,   703,   704,   705,  1221,
    1222,    86,   488,  1209,   434,    71,    72,    73,   435,    74,
    1210,  1466,  1689,   832,   833,     4,   226,   848,    87,  1690,
    1705,  1018,   341,     4,   517,  1019,  1020,  1706,    88,     5,
       6,    71,    72,    73,  1708,    74,   862,  1817,    71,    72,
      73,  1706,    74,   104,  1818,   526,  1170,    11,    89,   708,
     165,    90,   535,   867,     4,   823,   824,   825,   826,    91,
       5,     6,    71,    72,    73,   237,    74,   723,    92,    29,
     117,  1459,   168,   168,   983,  1362,   190,   191,    11,   168,
    1821,  1467,  1272,  1273,  1912,  1369,    93,  1822,   438,    94,
       4,  1913,  1646,  1247,  1647,    95,     5,     6,    71,    72,
      73,     4,    74,   377,   378,  1281,    96,     5,     6,    71,
      72,    73,   444,    74,    11,   490,   378,    97,   806,   806,
     806,   806,    98,   439,  1468,    11,   596,   120,   445,    99,
     440,  1469,  1470,    71,    72,    73,   341,    74,   234,   629,
     630,  1460,   400,   100,   866,  1336,    29,   436,   446,   870,
     101,  1471,   632,   481,  1472,  1473,   102,    29,   654,   633,
     634,   635,    29,   598,   178,   637,   638,    71,    72,    73,
    1442,    74,   121,  1443,   641,   122,    56,   421,   863,   864,
     830,   123,   844,  1444,  1445,  1446,   721,   840,    32,   722,
      33,  1461,  1375,   827,  1021,   422,   124,   801,   125,   447,
     807,    29,    34,    35,    36,   423,   424,   378,   600,   806,
     174,  1462,  1463,   180,   425,   221,   426,    28,  1401,    37,
    1378,   238,    29,   450,    28,   697,   698,   235,   806,   806,
     806,   806,   806,   806,   806,   806,   806,   806,   806,   806,
     806,   806,   806,   806,  1838,  1838,   806,   441,  1474,   239,
     341,   240,   165,   165,   241,  1424,  1119,   724,   725,   165,
     727,   916,   917,   918,   919,   451,   732,   920,   735,   288,
     757,   448,   201,   202,   289,  1176,  1177,  1178,  1179,   755,
     876,   702,   378,   242,  1865,   759,   760,  1447,   243,  1192,
     761,   762,   808,   809,   291,  1161,   811,   812,   822,   829,
     813,   814,   834,   206,   207,   763,   839,  1171,  1464,   298,
    1172,   295,   452,   244,   453,    80,   815,   816,   849,   378,
     245,  1181,  1183,  1184,  1185,   850,   378,   299,  1190,  1648,
    1649,  1650,   807,   807,   807,   807,   454,   246,   903,   215,
     216,   247,    75,    76,    77,    78,   851,   378,  1223,  1224,
     837,   838,  1866,   248,  1867,   249,  1853,   318,   857,   806,
     471,   472,   473,   474,   427,  1868,   852,   378,   991,   378,
    1246,   344,    38,   757,   283,   284,   285,   250,  1869,   475,
     286,   251,   455,   350,   869,   252,   287,   871,   872,  1162,
    1163,  1164,  1165,   253,  1870,   254,  1509,   333,  1635,   272,
     273,   274,   275,   276,   255,   277,   278,   279,   280,   351,
    1306,   281,   282,   283,   284,   285,   992,   993,   256,   286,
     995,   378,   399,   807,   257,   287,  1330,   378,   258,   845,
    1331,   378,  1332,   378,  1289,  1290,  1333,   378,  1033,  1034,
    1371,   378,   807,   807,   807,   807,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,   807,   807,  1515,  1516,
     807,  1530,   178,   457,  1512,  1532,   178,  1554,   178,  1212,
    1556,   178,  1952,   259,  1116,   260,  1598,  1599,  1600,   261,
    1602,   480,  1722,  1723,  1724,  1725,  1726,  1727,  1703,  1704,
     976,   262,  1665,   977,   263,  1529,   264,  1344,  1619,  1346,
     484,  1531,   312,  1533,  1713,   378,  1353,  1715,   378,  1350,
    1067,   331,  1068,  1069,  1070,  1071,  1072,  1073,  1074,   343,
     998,  1871,   403,   806,   464,  1169,   341,  1716,   378,   126,
     127,     4,   465,   806,   466,  1412,  1555,   234,   234,   234,
     234,  1415,  1557,    71,    72,    73,   467,    74,  1760,  1761,
     468,   234,  1828,  1829,   486,  1114,   135,   136,   137,   138,
     139,   491,   168,   492,  1280,   521,  1282,   495,  1054,  1883,
    1884,  1892,   378,   807,   168,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1061,  1450,  1009,   516,  1451,  1854,
     730,   731,  1010,  1307,  1062,  1063,  1064,   523,  1452,  1453,
     529,  1216,  1454,  1455,   530,  1011,   534,   538,   540,   541,
     234,   234,   542,   547,   548,   549,  1104,   550,   552,   553,
    1233,   554,   555,   556,   559,   560,  1105,   562,  1241,  1243,
     564,  1666,   234,   563,   568,   566,  1517,   570,   572,   574,
    1173,   575,  1276,  1279,   577,  1524,   582,  1285,  1728,   584,
     586,   587,  1287,  1746,  1507,  1748,   588,   590,   591,   592,
     597,  1671,  1106,  1107,  1108,  1109,  1110,  1111,   601,  1075,
     605,   628,   234,  1087,   631,  1088,  1089,   636,  1090,   639,
    1314,  1315,   281,   282,   283,   284,   285,  1321,  1091,  1323,
     286,   640,   647,  1327,   650,   652,   287,   657,  1672,   659,
     660,   661,  1456,  1781,  1335,  1092,  1093,  1094,   664,  1786,
     272,   273,   274,   275,   276,  1567,   277,   278,   279,   280,
    1095,   666,   281,   282,   283,   284,   285,   668,   673,   674,
     286,   675,  1673,   684,   676,   678,   287,   807,   682,   686,
     689,  1065,   165,   690,   692,   693,   694,   807,   695,   699,
     700,  1561,   706,   719,   165,   712,  1566,   720,   728,   733,
    1570,  1012,   736,  1573,   738,   739,  1610,  1249,  1576,  1250,
    1251,  1252,   740,  1096,  1299,   749,  1301,  1832,  1303,   750,
    1586,   751,   752,   753,   528,  1112,   914,   915,   916,   917,
     918,   919,   758,  1595,   920,  1597,   764,   234,   842,   810,
     817,   819,   831,   234,   836,   841,  1328,  1253,  1254,  1255,
    1256,  1257,  1258,  1259,  1260,  1261,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   847,  1651,  1627,  1628,   853,
    1630,   854,   855,   856,   865,  1629,   873,  1674,  1890,   874,
    1097,   891,   881,   875,   883,   885,   806,  1098,  1844,   272,
     273,   274,   275,   276,  1895,   277,   278,   279,   280,   886,
     896,   281,   282,   283,   284,   285,   887,   902,   930,   286,
     932,   888,  1027,   978,   889,   287,   341,   986,   923,   272,
     273,   274,   275,   276,   984,   277,   278,   279,   280,  -663,
     990,   281,   282,   283,   284,   285,   933,  1933,   234,   286,
     934,   935,   979,   980,   981,   287,   982,   234,  1024,   801,
    1028,  1029,  1620,  1030,  1622,  1623,   272,   273,   274,   275,
     276,   920,   277,   278,   279,   280,  1031,  1053,   281,   282,
     283,   284,   285,  1035,  1059,  1120,   286,  1121,  1127,  1168,
    1122,  1262,   287,  1123,  1124,   168,   168,   168,  1125,   168,
     272,   273,   274,   275,   276,  1126,   277,   278,   279,   280,
    1134,  1135,   281,   282,   283,   284,   285,   168,  1167,  1136,
     286,  1996,  1676,  1143,  1187,  1188,   287,   234,  1137,  1752,
     277,   278,   279,   280,  1508,  1754,   281,   282,   283,   284,
     285,  1138,  1756,  1193,   286,  1144,  1139,  1195,  1140,  1141,
     287,  1196,   126,   127,   128,  1142,  1145,  1146,  1764,  1147,
    1148,  1521,  1149,  1152,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1266,  1175,   130,   131,   132,   133,  1150,   234,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,  1151,   272,   273,   274,   275,   276,
     807,   277,   278,   279,   280,  1186,  1194,   281,   282,   283,
     284,   285,  1642,  1197,  1201,   286,  1199,  1206,  1213,  1202,
    1205,   287,  1203,  1564,  1208,   987,  1217,  1568,   234,  1218,
    1571,  1572,  1652,  1677,  1653,  1574,  1219,  1220,  1577,  1578,
    1579,  1580,  1225,  1232,  1581,  1582,  1583,  1234,  1585,  1235,
    1236,  1237,  1587,  1588,  1242,  1244,  1245,  1592,  1593,  1275,
    1286,  1324,   168,  1288,   168,   165,   165,   165,  1601,   165,
    1291,  1292,  1861,  1293,  1607,  1294,  1295,  1873,  1296,  1875,
    1297,  1298,  1308,  1309,  1310,  1910,  1882,   165,  1267,  1311,
    1312,  1313,  1768,  1769,  1316,  1317,  1318,  1319,  1320,  1775,
      40,  1322,  1325,  1922,    41,  1326,  1334,  1329,  1339,  1337,
    1340,  1341,   168,   910,   911,   912,   913,  1342,   168,   914,
     915,   916,   917,   918,   919,  1908,  1343,   920,  1345,  1347,
     272,   273,   274,   275,   276,  1348,   277,   278,   279,   280,
    1843,  1349,   281,   282,   283,   284,   285,  1351,  1352,  1679,
     286,  1354,  1355,  1356,  1359,  1360,   287,  1361,  1363,    42,
    1365,  1366,  1370,  1372,  1373,    43,  1374,  1376,  1381,  1379,
    1946,  1382,  1383,  1384,  1830,  1385,  1831,   161,    44,  1386,
      45,   300,   162,  1408,  1979,   163,   168,     5,     6,    71,
      72,    73,    46,    74,   348,  1388,    47,  1390,  1391,  1681,
    1392,  1393,  1394,  1395,  1711,    11,  1396,  1714,    48,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,  1397,
    1731,   914,   915,   916,   917,   918,   919,    49,  1398,   920,
    1682,  1399,  1400,  1403,  1404,  1405,  1406,  1409,  1410,   301,
    1200,  1411,   165,  1747,   165,  1413,  1414,   168,  1416,  1420,
    1417,   272,   273,   274,   275,   276,  1418,   277,   278,   279,
     280,  1421,  1423,   281,   282,   283,   284,   285,   341,  1425,
    1426,   286,  1686,  1427,  1429,  1430,  1763,   287,  1431,    50,
    1767,    51,  1432,  1770,  1771,  1433,  1434,   126,   127,   765,
    1435,  1436,   165,  1499,  1506,  1437,  1438,  1439,   165,  1440,
    1477,  1514,  1525,  1476,  1478,  1484,   168,  1493,  1519,  1797,
    1798,  1799,  1800,  1801,   135,   136,   137,   138,   139,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,  1526,   234,  1527,  1528,
    1479,  1480,  1538,  1539,  1481,  1540,  1482,  1483,  1486,  1535,
    1485,  1522,  1487,  1488,  1489,   234,   165,   272,   273,   274,
     275,   276,  1490,   277,   278,   279,   280,  1501,  1502,   281,
     282,   283,   284,   285,  1541,  1491,  1492,   286,  1851,  1510,
    1503,  1504,  1505,   287,  1542,  1511,  1544,  1546,  1858,  1859,
    1547,  1537,  1862,  1558,  1864,   793,   178,  1513,  1534,  1560,
    1562,  1563,  1879,  1880,  1565,  1559,  1569,   272,   273,   274,
     275,   276,  1589,   277,   278,   279,   280,   165,  1891,   281,
     282,   283,   284,   285,  1575,  1584,  1590,   286,  1591,  1594,
    1596,  1603,  1604,   287,  1605,  1606,   234,  1608,   272,   273,
     274,   275,   276,  1907,   277,   278,   279,   280,  1609,  1611,
     281,   282,   283,   284,   285,  1612,  1624,  1618,   286,   272,
     273,   274,   275,   276,   287,   277,   278,   279,   280,  1927,
    1632,   281,   282,   283,   284,   285,   165,  1637,  1935,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
     493,  1621,   281,   282,   283,   284,   285,  1633,  1636,  1638,
     286,  1953,  1639,  1640,  1709,   794,   287,  1643,  1644,  1645,
    1655,   795,   796,  1660,  1664,  1656,  1667,   797,  1657,  1659,
     798,  1661,  1670,  1055,  1056,   799,   800,  1680,   801,  1683,
    1967,  1691,  1692,  1970,  1694,  1693,  1696,  1697,   126,   127,
     765,  1700,  1701,  1698,  1702,  1710,  1712,  1718,  1719,  1721,
    1717,  1720,  1730,  1733,  1984,  1736,  1986,  1732,  1737,  1734,
    1740,  1741,  1742,  1743,  1991,   135,   136,   137,   138,   139,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   126,   127,   532,
     129,  1749,  1745,    54,  1750,  1751,  1762,  1777,  1765,  1766,
    1772,  1773,  1774,  1776,  1778,  1782,  1787,  1789,   130,   131,
     132,   133,   134,  1790,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   126,
     127,   128,   129,  1791,  1792,    54,   793,  1793,  1794,  1795,
    1796,  1804,  1802,   229,  1249,  1805,  1250,  1251,  1252,  1806,
     130,   131,   132,   133,   134,  1807,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   126,   127,   128,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1261,  1808,  1810,  1809,  1812,  1813,  1814,  1815,
    1816,  1842,   130,   131,   132,   133,  1824,  1825,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,  1845,  1852,  1841,  1855,  1856,  1857,  1860,
    1863,  1874,  1876,   126,   127,     4,   794,  1889,  1877,  1878,
    1881,  1885,   795,   796,  1886,  1887,  1896,  1833,   797,  1834,
    1893,   798,  1835,   654,  1905,  1897,   799,   800,  1901,   801,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,  1906,   160,  1253,  1254,  1255,
    1256,  1257,  1258,  1259,  1836,  1909,  1911,  1916,  1917,  1918,
    1919,  1920,   161,  1921,  1924,  1926,  1928,   162,  1265,  1929,
     163,  1930,  1932,  1934,  1937,   230,  1938,  1939,   164,   274,
     275,   276,  1941,   277,   278,   279,   280,  1942,  1943,   281,
     282,   283,   284,   285,  1687,  1944,  1945,   286,   160,  1947,
    1948,  1949,  1950,   287,  1951,  1954,  1957,  1961,   937,  1964,
    1965,  1968,  1974,  1972,   161,  1977,    71,    72,   938,   162,
      74,  1982,   163,  1969,  1983,  1985,  1993,  1992,  1995,  1997,
     164,  2000,  1779,  1998,  2001,  1780,  1357,  1214,   925,   272,
     273,   274,   275,   276,  1215,   277,   278,   279,   280,   754,
    1735,   281,   282,   283,   284,   285,   126,   127,   128,   286,
    1101,  1784,  1497,   691,  1614,   287,   161,   227,   843,   707,
     494,   162,   334,     0,   163,     0,     0,   130,   131,   132,
     133,  1837,   164,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   937,     0,
       0,     0,     0,     0,     0,     0,    71,    72,   938,     0,
      74,     0,     0,     0,     0,     0,     0,     0,   161,     0,
       0,     0,     0,   162,     0,     0,   163,     0,     0,     0,
       0,     0,     0,   939,   734,   940,   941,   942,   943,   944,
     945,   946,   947,   948,     0,     0,     0,   949,     0,     0,
     950,     0,     0,   951,     0,     0,   952,     0,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,     0,  1846,     0,   969,     0,     0,
       0,     0,   970,     0,     0,   971,     0,     0,     0,   937,
       0,     0,     0,     0,     0,     0,     0,    71,    72,   938,
       0,    74,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,     0,   939,     0,   940,   941,   942,   943,   944,
     945,   946,   947,   948,     0,     0,     0,   949,   972,     0,
     950,     0,     0,   951,     0,     0,   952,     0,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,     0,     0,     0,   969,     0,     0,
       0,   161,   970,   937,     0,   971,   162,     0,     0,   163,
       0,    71,    72,   938,     0,    74,     0,   164,     0,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,   320,     0,     0,   939,   287,   940,   941,   942,   943,
     944,   945,   946,   947,   948,     0,     0,     0,   949,     0,
       0,   950,     0,     0,   951,     0,     0,   952,  1744,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,     0,     0,     0,   969,     0,
       0,     0,     0,   970,   937,     0,   971,     0,     0,     0,
       0,     0,    71,    72,   938,     0,    74,     0,     0,     0,
       0,     0,     0,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,     0,   939,   287,
     940,   941,   942,   943,   944,   945,   946,   947,   948,     0,
       0,     0,   949,     0,     0,   950,     0,     0,   951,  1753,
       0,   952,  1847,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,     0,
       0,     0,   969,     0,     0,   937,     0,   970,     0,     0,
     971,     0,     0,    71,    72,   938,     0,    74,     0,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   287,     0,     0,     0,   939,
     506,   940,   941,   942,   943,   944,   945,   946,   947,   948,
       0,     0,     0,   949,     0,     0,   950,     0,     0,   951,
       0,     0,   952,  1755,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
       0,     0,     0,   969,     0,     0,   937,     0,   970,     0,
       0,   971,     0,     0,    71,    72,   938,     0,    74,     0,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
     939,   513,   940,   941,   942,   943,   944,   945,   946,   947,
     948,     0,     0,     0,   949,     0,     0,   950,     0,     0,
     951,     0,     0,   952,  1757,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,     0,     0,     0,   969,     0,     0,   937,     0,   970,
       0,     0,   971,     0,     0,    71,    72,   938,     0,    74,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
       0,   939,     0,   940,   941,   942,   943,   944,   945,   946,
     947,   948,     0,     0,     0,   949,     0,     0,   950,     0,
       0,   951,     0,     0,   952,  1758,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,     0,     0,     0,   969,     0,     0,   937,     0,
     970,     0,     0,   971,     0,     0,    71,    72,   938,     0,
      74,     0,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,   939,   514,   940,   941,   942,   943,   944,   945,
     946,   947,   948,     0,     0,     0,   949,     0,     0,   950,
       0,     0,   951,     0,     0,   952,  1759,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   967,   968,     0,     0,     0,   969,     0,     0,   937,
       0,   970,     0,     0,   971,     0,     0,    71,    72,   938,
       0,    74,     0,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
       0,     0,     0,   939,   515,   940,   941,   942,   943,   944,
     945,   946,   947,   948,     0,     0,     0,   949,     0,     0,
     950,     0,     0,   951,     0,     0,   952,  1931,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,     0,     0,     0,   969,     0,     0,
     937,     0,   970,     0,     0,   971,     0,     0,    71,    72,
     938,     0,    74,     0,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,     0,   939,   741,   940,   941,   942,   943,
     944,   945,   946,   947,   948,     0,     0,     0,   949,     0,
       0,   950,     0,     0,   951,     0,     0,   952,  1936,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,     0,     0,     0,   969,     0,
       0,   937,     0,   970,     0,     0,   971,     0,     0,    71,
      72,   938,     0,    74,     0,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
       0,   287,     0,     0,     0,   939,   742,   940,   941,   942,
     943,   944,   945,   946,   947,   948,     0,     0,     0,   949,
       0,     0,   950,  1848,     0,   951,     0,     0,   952,  1971,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,     0,     0,     0,   969,
       0,     0,   937,     0,   970,     0,     0,   971,     0,     0,
      71,    72,   938,     0,    74,     0,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
       0,     0,   287,     0,     0,     0,   939,   994,   940,   941,
     942,   943,   944,   945,   946,   947,   948,     0,     0,     0,
     949,     0,     0,   950,  1849,     0,   951,     0,     0,   952,
    1973,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,     0,     0,     0,
     969,  1850,     0,   937,     0,   970,     0,     0,   971,     0,
       0,    71,    72,   938,     0,    74,     0,     0,     0,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
    1940,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,   376,     0,     0,     0,   287,     0,   939,     0,   940,
     941,   942,   943,   944,   945,   946,   947,   948,     0,     0,
       0,   949,     0,     0,   950,     0,     0,   951,     0,     0,
     952,  1975,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,     0,     0,
       0,   969,     0,     0,     0,     0,   970,     0,     0,   971,
       0,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   939,     0,
     940,   941,   942,   943,   944,   945,   946,   947,   948,     0,
       0,     0,   949,     0,     0,   950,  1368,     0,   951,     0,
       0,   952,  1976,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,     0,
       0,     0,   969,     0,     0,     0,     0,   970,     0,     0,
     971,     0,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   287,     0,     0,   272,   273,
     274,   275,   276,  1987,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   126,   127,   128,   286,     0,
       0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,   131,   132,   133,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1211,     0,     0,     0,     0,     0,     0,   130,   131,
     132,   133,     0,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   126,
     127,     4,     0,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,     0,     0,   914,   915,   916,   917,   918,
     919,     0,     0,   920,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   126,   127,     4,   525,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1833,     0,  1834,     0,     0,  1835,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   580,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1836,   126,   127,     4,   907,   908,   909,   910,   911,
     912,   913,     0,     0,   914,   915,   916,   917,   918,   919,
     161,     0,   920,     0,     0,   162,     0,     0,   163,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   595,   127,     4,     0,     0,     0,
       0,     0,   606,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,   162,     0,     0,
     163,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   271,     0,   477,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   607,     0,     0,   161,     0,     0,   319,  1840,   162,
       0,     0,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   519,     0,
     608,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,   520,
       0,   286,     0,     0,     0,     0,   161,   287,     0,     0,
     609,   162,  1160,     0,   163,     0,     0,     0,     0,     0,
     579,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,     0,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,   581,     0,     0,     0,   287,   161,     0,     0,
       0,     0,   162,     0,     0,   163,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,  1338,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,   161,
       0,     0,     0,   287,   162,     0,     0,   163,  1441,     0,
       0,     0,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,  1449,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     4,     0,     0,   286,     0,     0,
       5,     6,     0,   287,     0,     0,     0,     0,     7,     8,
       9,    10,     0,   272,   273,   274,   275,   276,    11,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,  1458,     0,   281,   282,   283,   284,
     285,    12,     0,     0,   286,     0,     0,    13,     0,     0,
     287,     0,     0,     0,     0,  1634,     0,     0,     0,     0,
      14,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,    17,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
      18,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   287,     0,     0,     0,    19,
    1658,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
       0,     0,  1662,     0,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,    20,     0,    21,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,  1668,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,  1675,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
     275,   276,   287,   277,   278,   279,   280,  1695,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
     274,   275,   276,   287,   277,   278,   279,   280,  1820,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
     273,   274,   275,   276,   287,   277,   278,   279,   280,  1826,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
    1827,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
     280,  1900,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
     279,   280,  1902,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
     278,   279,   280,  1925,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
     277,   278,   279,   280,  1978,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
     287,   277,   278,   279,   280,  1980,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
     276,   287,   277,   278,   279,   280,  1988,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
       0,     0,   287,     0,     0,     0,   290,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,     0,   287,     0,     0,     0,   347,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,     0,     0,   287,     0,     0,     0,   747,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,     0,     0,   287,     0,     0,     0,  1159,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
    1174,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
       0,  1500,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,  1625,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
       0,     0,     0,  1785,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
     287,     0,     0,     0,  1788,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
       0,   287,     0,     0,     0,  1803,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
       0,     0,   287,     0,     0,     0,  1894,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,     0,   287,     0,     0,     0,  1966,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,     0,     0,   287,     0,     0,     0,  1994,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,   496,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     497,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,   498,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,   499,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,   500,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,   501,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,   502,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,   503,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,   504,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,   505,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,   507,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     508,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,   509,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,   510,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,   511,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,   512,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,   522,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,   649,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,   743,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,   744,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,   745,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     746,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,   846,     0,     0,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,   880,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,   996,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,   997,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,  1699,     0,   287,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
       0,     0,  1811,     0,   287,   272,   273,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,     0,     0,     0,   286,     0,     0,     0,  1823,
       0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
       0,     0,   286,     0,     0,     0,  1899,     0,   287,   272,
     273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
       0,     0,     0,  1904,     0,   287,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
    1914,     0,   287,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
       0,     0,     0,   286,     0,     0,     0,  1915,     0,   287,
     272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
     286,     0,     0,     0,  1955,     0,   287,   272,   273,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,  1959,     0,   287,   272,   273,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,     0,     0,     0,   286,     0,     0,     0,  1990,     0,
     287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
       0,   286,     0,     0,     0,     0,     0,   287,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,     0,     0,
     914,   915,   916,   917,   918,   919,     0,     0,   920,     0,
     275,   276,  1518,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
       0,     0,     0,   287,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,     0,     0,   914,   915,   916,   917,
     918,   919,     0,     0,   920,     0,  1032,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,     0,     0,   914,
     915,   916,   917,   918,   919,     0,     0,   920,   906,   907,
     908,   909,   910,   911,   912,   913,     0,     0,   914,   915,
     916,   917,   918,   919,     0,     0,   920
};

static const short yycheck[] =
{
       3,   539,   485,    82,     5,   431,   765,   571,    82,     3,
     330,     5,   550,   625,   334,     5,     5,     5,    21,  1559,
     103,   104,   560,  1102,     3,     3,   564,     5,    31,  1569,
     568,     5,     3,  1024,     5,  1575,     5,     7,     3,  1030,
       5,     7,     5,   173,  1584,   248,   311,     7,     5,     5,
    1590,  1591,     5,     5,     5,   258,   482,   322,   323,   324,
       3,     5,     5,   606,   607,     7,   331,   107,   599,     5,
     613,   111,   112,   113,   114,   115,   116,     5,     5,   404,
      69,     5,   258,    11,    12,     5,    64,     5,    23,    23,
       5,     5,    23,    23,   245,    69,     0,    11,    12,   246,
     251,    29,    75,    24,   107,   531,   107,   237,   111,   112,
     113,   114,   115,   116,   117,    29,   117,   246,   121,   122,
     123,    23,   249,    96,   883,     7,   885,   117,   247,   256,
     795,   796,   797,   798,    13,    14,    15,   256,    17,   224,
      61,   181,    69,    69,    64,    69,    96,    86,    98,    69,
      65,    69,   237,   254,   255,    81,   106,    96,   478,    98,
     243,    78,    79,   248,    99,    99,    82,   297,    99,    99,
      86,    82,   248,   248,   254,    13,    14,    15,   181,    17,
      96,   264,   713,   258,   251,    96,   253,   247,    82,    83,
     111,   112,   113,   114,     5,   116,   256,    99,   141,   116,
      11,    12,    13,    14,    15,   530,    17,   248,   338,   534,
     254,   128,   295,   254,  1205,     5,     6,   258,    29,     9,
      10,   886,   254,    82,   248,   119,   120,   230,   249,    88,
     254,   125,    13,    14,    15,   256,    17,    96,   254,   462,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,    67,  1248,   923,   246,
     181,   248,   251,   257,   207,   255,   247,   161,   162,   163,
     258,   254,   251,   238,   249,   256,   254,   251,   238,   257,
     254,   256,   255,   254,   254,   254,   257,     5,   254,   246,
     716,   254,   257,    11,    12,    13,    14,    15,   254,    17,
     249,   254,   254,   254,   378,   255,   248,   256,   311,   252,
     254,    29,   248,   248,   248,  1855,   255,   642,   248,   322,
     323,   324,   249,  1863,   251,   404,   254,   255,   331,   255,
     404,   251,   555,   251,   247,   465,   601,   224,   255,   255,
     254,   255,   249,   256,   255,   254,   248,   241,   242,   256,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     453,  1036,   258,  1364,    86,   254,   255,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   314,  1934,   715,   255,  1937,   110,   248,
     294,   254,   255,     5,   254,   254,   409,  1947,  1948,    11,
      12,    13,    14,    15,   249,    17,   254,   255,     5,     6,
     423,   256,     9,    10,   318,   319,   254,    29,   254,   249,
     433,   248,  1972,   223,     6,   438,   256,   254,    86,   333,
     254,   444,   249,   446,   255,   249,   663,   450,    96,   256,
     673,     5,   256,   248,   584,   249,   586,   587,   588,  1071,
    1072,     7,   256,   249,   112,    13,    14,    15,   116,    17,
     256,    18,   249,   254,   255,     5,     6,   700,     7,   256,
     249,    82,   485,     5,   378,    86,    87,   256,     7,    11,
      12,    13,    14,    15,   249,    17,   719,   249,    13,    14,
      15,   256,    17,   246,   256,   399,   989,    29,     7,   592,
     404,     7,   406,   736,     5,   117,   118,   119,   120,     7,
      11,    12,    13,    14,    15,   254,    17,   610,     7,   258,
     186,    18,   606,   607,   854,  1200,   254,   255,    29,   613,
     249,    88,   254,   255,   249,  1210,     7,   256,    96,     7,
       5,   256,  1543,  1096,  1545,     7,    11,    12,    13,    14,
      15,     5,    17,   255,   256,  1108,     7,    11,    12,    13,
      14,    15,    96,    17,    29,   255,   256,     7,   795,   796,
     797,   798,     7,   131,   131,    29,   480,   246,   112,     7,
     138,   138,   139,    13,    14,    15,   599,    17,   601,   493,
     494,    88,   254,     7,   734,  1169,   258,   255,   132,   739,
       7,   158,   506,   254,   161,   162,     7,   258,   254,   513,
     514,   515,   258,   255,   256,   519,   520,    13,    14,    15,
     138,    17,   248,   141,   528,   248,   223,    68,   721,   722,
     680,   248,     8,   151,   152,   153,   233,   687,     5,   236,
       7,   138,  1216,   255,   255,    86,   248,   254,   254,   183,
     663,   258,    19,    20,    21,    96,    97,   256,   257,   886,
     247,   158,   159,   255,   105,   128,   107,   680,   254,    36,
    1218,     7,   258,    96,   687,   579,   580,     6,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,  1783,  1784,   923,   255,   255,   248,
     713,   248,   606,   607,   248,  1279,   939,   611,   612,   613,
     614,   239,   240,   241,   242,   138,   620,   245,   622,     7,
     651,   255,   254,   255,     7,  1000,  1001,  1002,  1003,   254,
     255,   255,   256,   248,    18,   254,   255,   255,   248,  1014,
     254,   255,   254,   255,     7,   978,   254,   255,   679,   680,
     254,   255,   683,   254,   255,   659,   687,   990,   255,     7,
     993,   256,   185,   248,   187,   696,   254,   255,   255,   256,
     248,  1004,  1005,  1006,  1007,   255,   256,     5,  1011,  1548,
    1549,  1550,   795,   796,   797,   798,   209,   248,   801,   254,
     255,   248,   188,   189,   190,   191,   255,   256,  1073,  1074,
     254,   255,    86,   248,    88,   248,  1807,   254,   712,  1036,
     237,   238,   239,   240,   255,    99,   255,   256,   255,   256,
    1095,   254,   189,   754,   239,   240,   241,   248,   112,   256,
     245,   248,   255,     5,   738,   248,   251,   741,   742,   979,
     980,   981,   982,   248,   128,   248,  1339,   256,  1523,   225,
     226,   227,   228,   229,   248,   231,   232,   233,   234,     5,
    1135,   237,   238,   239,   240,   241,   255,   256,   248,   245,
     255,   256,   224,   886,   248,   251,   255,   256,   248,   255,
     255,   256,   255,   256,  1117,  1118,   255,   256,   901,   902,
     255,   256,   905,   906,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   254,   255,
     923,   255,   256,   254,  1350,   255,   256,   255,   256,  1059,
     255,   256,  1923,   248,   937,   248,  1479,  1480,  1481,   248,
    1483,     8,    89,    90,    91,    92,    93,    94,   255,   256,
     844,   248,     7,   847,   248,  1381,   248,  1180,  1501,  1182,
     256,  1387,   248,  1389,   255,   256,  1189,   255,   256,  1186,
      96,   248,    98,    99,   100,   101,   102,   103,   104,   248,
     874,   255,   248,  1200,   254,   988,   989,   255,   256,     3,
       4,     5,   254,  1210,   254,  1260,  1422,  1000,  1001,  1002,
    1003,  1266,  1428,    13,    14,    15,   254,    17,   254,   255,
     254,  1014,   255,   256,   255,   936,    30,    31,    32,    33,
      34,   249,  1096,   256,  1107,     7,  1109,   249,   922,   255,
     256,   255,   256,  1036,  1108,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    98,   138,    80,   249,   141,  1808,
     616,   617,    86,  1136,   108,   109,   110,   249,   151,   152,
     224,  1064,   155,   156,   224,    99,   224,     5,   254,     5,
    1073,  1074,   254,     5,   254,     5,    86,     5,   254,   254,
    1083,   254,   224,   249,     5,     5,    96,   254,  1091,  1092,
       5,     7,  1095,   254,     5,   254,  1361,   254,     5,   254,
     994,     5,  1105,  1106,     5,  1370,   203,  1110,   255,   254,
     254,   254,  1115,  1656,  1337,  1658,   254,   249,     5,   248,
     255,     7,   132,   133,   134,   135,   136,   137,   128,   255,
       7,     5,  1135,    81,     7,    83,    84,     7,    86,     7,
    1143,  1144,   237,   238,   239,   240,   241,  1150,    96,  1152,
     245,   255,     7,  1156,   254,     7,   251,     7,     7,   248,
     248,     7,   255,  1706,  1167,   113,   114,   115,     7,  1712,
     225,   226,   227,   228,   229,  1440,   231,   232,   233,   234,
     128,     7,   237,   238,   239,   240,   241,     7,   224,     7,
     245,     5,     7,   254,     7,     7,   251,  1200,     7,     7,
       7,   255,  1096,     7,     7,     7,     7,  1210,   255,     5,
     256,  1434,     7,   254,  1108,     8,  1439,     5,     5,     5,
    1443,   255,   254,  1446,   254,   254,  1491,    81,  1451,    83,
      84,    85,   249,   181,  1128,     7,  1130,  1780,  1132,     7,
    1463,     5,     7,   224,   251,   255,   237,   238,   239,   240,
     241,   242,     7,  1476,   245,  1478,     5,  1260,   255,     7,
       7,     7,     7,  1266,     7,     7,  1160,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   254,  1551,  1510,  1511,   256,
    1513,   249,     7,   233,     6,  1512,     7,     7,  1841,   254,
     248,     5,   249,    66,   248,   248,  1523,   255,  1791,   225,
     226,   227,   228,   229,  1852,   231,   232,   233,   234,   248,
       3,   237,   238,   239,   240,   241,   248,     5,     7,   245,
     254,   248,     5,   256,   248,   251,  1339,   249,   248,   225,
     226,   227,   228,   229,   252,   231,   232,   233,   234,   248,
     256,   237,   238,   239,   240,   241,   254,  1900,  1361,   245,
     254,   254,   254,   254,   254,   251,   254,  1370,   248,   254,
       5,     5,  1502,   248,  1504,  1505,   225,   226,   227,   228,
     229,   245,   231,   232,   233,   234,   233,     3,   237,   238,
     239,   240,   241,   255,   254,   248,   245,   248,     7,     7,
     248,   255,   251,   248,   248,  1479,  1480,  1481,   248,  1483,
     225,   226,   227,   228,   229,   248,   231,   232,   233,   234,
     254,   248,   237,   238,   239,   240,   241,  1501,   252,   248,
     245,  1995,     7,   254,     5,     5,   251,  1440,   248,  1662,
     231,   232,   233,   234,  1338,  1668,   237,   238,   239,   240,
     241,   248,  1675,     5,   245,   254,   248,     5,   248,   248,
     251,     5,     3,     4,     5,   248,   248,   248,  1691,   248,
     248,  1365,   248,   248,   121,   122,   123,   124,   125,   126,
     127,   128,   248,    24,    25,    26,    27,   254,  1491,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   254,   225,   226,   227,   228,   229,
    1523,   231,   232,   233,   234,   254,   254,   237,   238,   239,
     240,   241,  1535,   249,   256,   245,   249,   255,     5,   248,
     248,   251,   249,  1437,   249,     5,     5,  1441,  1551,     5,
    1444,  1445,  1555,     7,  1557,  1449,     5,   254,  1452,  1453,
    1454,  1455,     5,     5,  1458,  1459,  1460,     5,  1462,     5,
       5,     5,  1466,  1467,     5,     3,     3,  1471,  1472,     5,
       5,   248,  1656,     7,  1658,  1479,  1480,  1481,  1482,  1483,
       7,     5,  1815,     5,  1488,     5,     5,  1820,     5,  1822,
       5,     5,     5,     5,     5,  1870,  1829,  1501,   255,     5,
       5,     5,  1695,  1696,     5,     5,     5,     5,     5,  1702,
       3,     5,   248,  1888,     7,   254,     7,   255,   251,   256,
       7,     7,  1706,   231,   232,   233,   234,     7,  1712,   237,
     238,   239,   240,   241,   242,  1868,     7,   245,     7,     7,
     225,   226,   227,   228,   229,     7,   231,   232,   233,   234,
    1790,     7,   237,   238,   239,   240,   241,     7,     7,     7,
     245,     7,     7,     7,     7,     7,   251,   256,     3,    62,
     254,   249,   248,     7,     7,    68,     7,     7,     5,   254,
    1913,     7,     7,     7,  1777,     7,  1779,   238,    81,     7,
      83,     5,   243,     5,  1969,   246,  1780,    11,    12,    13,
      14,    15,    95,    17,   255,     7,    99,     7,     7,     7,
       7,     7,     7,     7,  1618,    29,     7,  1621,   111,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     7,
    1634,   237,   238,   239,   240,   241,   242,   130,     7,   245,
       7,     7,     7,     7,     7,     7,     7,     5,     5,    63,
     256,   248,  1656,  1657,  1658,     7,   248,  1841,   248,     7,
       5,   225,   226,   227,   228,   229,     5,   231,   232,   233,
     234,     7,     7,   237,   238,   239,   240,   241,  1791,     7,
       7,   245,     7,     7,     7,     7,  1690,   251,   249,   182,
    1694,   184,   249,  1697,  1698,   249,   256,     3,     4,     5,
     256,   256,  1706,     7,     7,   256,   256,   256,  1712,   256,
     249,     7,     7,   256,   256,   255,  1900,   249,   249,  1723,
    1724,  1725,  1726,  1727,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     7,  1870,   112,     7,
     256,   256,     7,     7,   256,     7,   256,   256,   256,   248,
     255,   249,   256,   256,   256,  1888,  1780,   225,   226,   227,
     228,   229,   256,   231,   232,   233,   234,   254,   254,   237,
     238,   239,   240,   241,     3,   256,   256,   245,  1802,   256,
     255,   254,   254,   251,     7,   256,     7,     7,  1812,  1813,
       7,   249,  1816,     7,  1818,   121,   256,   256,   255,     7,
       5,     5,  1826,  1827,     5,   254,   254,   225,   226,   227,
     228,   229,     5,   231,   232,   233,   234,  1841,  1842,   237,
     238,   239,   240,   241,   254,   254,   254,   245,   254,   254,
       7,     7,     7,   251,     5,     5,  1969,     5,   225,   226,
     227,   228,   229,  1867,   231,   232,   233,   234,     5,     5,
     237,   238,   239,   240,   241,     7,   255,   254,   245,   225,
     226,   227,   228,   229,   251,   231,   232,   233,   234,  1893,
     249,   237,   238,   239,   240,   241,  1900,     5,  1902,   245,
     225,   226,   227,   228,   229,   251,   231,   232,   233,   234,
     256,   254,   237,   238,   239,   240,   241,   249,   249,     5,
     245,  1925,     5,     5,   254,   231,   251,     7,     7,   249,
     249,   237,   238,   249,     7,   256,     7,   243,   256,   256,
     246,   256,     7,   249,   250,   251,   252,     7,   254,     7,
    1954,   256,   249,  1957,   256,   249,   256,   256,     3,     4,
       5,   249,   249,   256,   256,   254,   256,   249,   249,   249,
     256,   255,   249,     7,  1978,   249,  1980,   255,     7,   255,
       7,     7,     7,     7,  1988,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     3,     4,     5,
       6,     5,     7,     9,     7,     5,     7,   133,     7,     7,
       7,     7,     7,     7,     7,     7,   255,   255,    24,    25,
      26,    27,    28,   254,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,   251,     7,     9,   121,     7,     7,     7,
       5,   111,   254,    69,    81,     7,    83,    84,    85,     7,
      24,    25,    26,    27,    28,   256,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     3,     4,     5,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   256,   249,    16,   256,   256,   249,   256,
     256,   254,    24,    25,    26,    27,   249,   249,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     7,     5,   256,   254,     7,     7,     7,
     254,     7,     7,     3,     4,     5,   231,   248,     7,     7,
       7,     5,   237,   238,     5,     5,   249,    81,   243,    83,
     256,   246,    86,   254,     5,   249,   251,   252,   249,   254,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     5,   222,   121,   122,   123,
     124,   125,   126,   127,   128,     5,   249,   255,     7,     4,
       7,     7,   238,     7,   255,   255,     7,   243,   255,     7,
     246,     7,     7,   254,   254,   251,     7,     7,   254,   227,
     228,   229,     7,   231,   232,   233,   234,     7,     7,   237,
     238,   239,   240,   241,     7,     7,     7,   245,   222,   254,
     254,     7,   255,   251,     7,   254,   256,   249,     5,     7,
     249,     7,     7,   254,   238,     7,    13,    14,    15,   243,
      17,     7,   246,    62,     7,     7,     7,   130,     5,     7,
     254,     0,   204,   255,     0,   207,  1193,  1062,   805,   225,
     226,   227,   228,   229,  1063,   231,   232,   233,   234,   650,
    1641,   237,   238,   239,   240,   241,     3,     4,     5,   245,
     933,  1710,  1325,   574,  1497,   251,   238,   122,   696,   591,
     256,   243,   227,    -1,   246,    -1,    -1,    24,    25,    26,
      27,   255,   254,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,   243,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   254,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,   154,    -1,    -1,
     157,    -1,    -1,   160,    -1,    -1,   163,    -1,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    -1,     7,    -1,   184,    -1,    -1,
      -1,    -1,   189,    -1,    -1,   192,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,
      -1,    -1,    -1,   140,    -1,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,   154,   255,    -1,
     157,    -1,    -1,   160,    -1,    -1,   163,    -1,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    -1,    -1,    -1,   184,    -1,    -1,
      -1,   238,   189,     5,    -1,   192,   243,    -1,    -1,   246,
      -1,    13,    14,    15,    -1,    17,    -1,   254,    -1,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,   247,    -1,    -1,   140,   251,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,    -1,    -1,   154,    -1,
      -1,   157,    -1,    -1,   160,    -1,    -1,   163,   255,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    -1,    -1,    -1,   184,    -1,
      -1,    -1,    -1,   189,     5,    -1,   192,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,   225,   226,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   140,   251,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      -1,    -1,   154,    -1,    -1,   157,    -1,    -1,   160,   255,
      -1,   163,     7,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,    -1,
      -1,    -1,   184,    -1,    -1,     5,    -1,   189,    -1,    -1,
     192,    -1,    -1,    13,    14,    15,    -1,    17,    -1,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,   140,
     256,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,    -1,    -1,   154,    -1,    -1,   157,    -1,    -1,   160,
      -1,    -1,   163,   255,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
      -1,    -1,    -1,   184,    -1,    -1,     5,    -1,   189,    -1,
      -1,   192,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
     140,   256,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,    -1,    -1,   154,    -1,    -1,   157,    -1,    -1,
     160,    -1,    -1,   163,   255,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,    -1,    -1,    -1,   184,    -1,    -1,     5,    -1,   189,
      -1,    -1,   192,    -1,    -1,    13,    14,    15,    -1,    17,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
      -1,   140,    -1,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,    -1,    -1,   154,    -1,    -1,   157,    -1,
      -1,   160,    -1,    -1,   163,   255,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,    -1,    -1,    -1,   184,    -1,    -1,     5,    -1,
     189,    -1,    -1,   192,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,
      -1,    -1,   140,   256,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,    -1,    -1,   154,    -1,    -1,   157,
      -1,    -1,   160,    -1,    -1,   163,   255,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,    -1,    -1,    -1,   184,    -1,    -1,     5,
      -1,   189,    -1,    -1,   192,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,   225,   226,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,
      -1,    -1,    -1,   140,   256,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,   154,    -1,    -1,
     157,    -1,    -1,   160,    -1,    -1,   163,   255,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    -1,    -1,    -1,   184,    -1,    -1,
       5,    -1,   189,    -1,    -1,   192,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,   225,   226,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,   140,   256,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,    -1,    -1,   154,    -1,
      -1,   157,    -1,    -1,   160,    -1,    -1,   163,   255,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    -1,    -1,    -1,   184,    -1,
      -1,     5,    -1,   189,    -1,    -1,   192,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,   225,   226,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,    -1,   140,   256,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,    -1,    -1,   154,
      -1,    -1,   157,     7,    -1,   160,    -1,    -1,   163,   255,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,    -1,    -1,    -1,   184,
      -1,    -1,     5,    -1,   189,    -1,    -1,   192,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,   225,   226,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,    -1,   140,   256,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,    -1,    -1,
     154,    -1,    -1,   157,     7,    -1,   160,    -1,    -1,   163,
     255,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    -1,    -1,    -1,
     184,     7,    -1,     5,    -1,   189,    -1,    -1,   192,    -1,
      -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
       7,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,   247,    -1,    -1,    -1,   251,    -1,   140,    -1,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,    -1,
      -1,   154,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,
     163,   255,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,    -1,    -1,
      -1,   184,    -1,    -1,    -1,    -1,   189,    -1,    -1,   192,
      -1,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      -1,    -1,   154,    -1,    -1,   157,     8,    -1,   160,    -1,
      -1,   163,   255,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,    -1,
      -1,    -1,   184,    -1,    -1,    -1,    -1,   189,    -1,    -1,
     192,    -1,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,   225,   226,
     227,   228,   229,   255,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,     3,     4,     5,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
       4,     5,    -1,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
     242,    -1,    -1,   245,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     8,   121,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,   228,   229,   230,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,   242,
     238,    -1,   245,    -1,    -1,   243,    -1,    -1,   246,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,   243,    -1,    -1,
     246,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     8,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,    -1,    -1,   238,    -1,    -1,     8,   255,   243,
      -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,
     163,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,     8,
      -1,   245,    -1,    -1,    -1,    -1,   238,   251,    -1,    -1,
     193,   243,   256,    -1,   246,    -1,    -1,    -1,    -1,    -1,
       8,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,   247,    -1,    -1,    -1,   251,   238,    -1,    -1,
      -1,    -1,   243,    -1,    -1,   246,   225,   226,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,   225,   226,   227,
     228,   229,   251,   231,   232,   233,   234,   256,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,   238,
      -1,    -1,    -1,   251,   243,    -1,    -1,   246,   256,    -1,
      -1,    -1,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,   225,   226,   227,   228,   229,   251,   231,
     232,   233,   234,   256,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,   225,   226,   227,   228,   229,   251,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,   225,   226,   227,   228,   229,
     251,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,   225,   226,   227,   228,
     229,   251,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,   225,   226,   227,
     228,   229,   251,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,     5,    -1,    -1,   245,    -1,    -1,
      11,    12,    -1,   251,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,   225,   226,   227,   228,   229,    29,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,   225,   226,   227,   228,   229,   251,
     231,   232,   233,   234,   256,    -1,   237,   238,   239,   240,
     241,    62,    -1,    -1,   245,    -1,    -1,    68,    -1,    -1,
     251,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
     111,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,   130,
     256,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,
      -1,    -1,   256,    -1,   225,   226,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   182,    -1,   184,   245,   225,   226,   227,   228,   229,
     251,   231,   232,   233,   234,   256,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,   225,   226,   227,   228,
     229,   251,   231,   232,   233,   234,   256,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,   225,   226,   227,
     228,   229,   251,   231,   232,   233,   234,   256,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,   225,   226,
     227,   228,   229,   251,   231,   232,   233,   234,   256,    -1,
     237,   238,   239,   240,   241,    -1,    -1,    -1,   245,   225,
     226,   227,   228,   229,   251,   231,   232,   233,   234,   256,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
     225,   226,   227,   228,   229,   251,   231,   232,   233,   234,
     256,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,   225,   226,   227,   228,   229,   251,   231,   232,   233,
     234,   256,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,   225,   226,   227,   228,   229,   251,   231,   232,
     233,   234,   256,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,   225,   226,   227,   228,   229,   251,   231,
     232,   233,   234,   256,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,   225,   226,   227,   228,   229,   251,
     231,   232,   233,   234,   256,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,   225,   226,   227,   228,   229,
     251,   231,   232,   233,   234,   256,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,   225,   226,   227,   228,
     229,   251,   231,   232,   233,   234,   256,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,    -1,   255,   225,   226,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   251,    -1,    -1,    -1,   255,   225,   226,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
     255,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,
      -1,   255,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,
      -1,    -1,   255,   225,   226,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,
      -1,    -1,    -1,   255,   225,   226,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,   255,   225,   226,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,    -1,   255,   225,   226,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,    -1,   255,   225,   226,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   251,    -1,    -1,    -1,   255,   225,   226,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,
     249,    -1,   251,   225,   226,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,    -1,    -1,    -1,   249,    -1,   251,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   249,    -1,   251,   225,   226,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,    -1,
     251,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,    -1,    -1,    -1,   249,    -1,   251,   225,   226,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,
      -1,    -1,   249,    -1,   251,   225,   226,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,
      -1,   251,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,   249,    -1,   251,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,
     249,    -1,   251,   225,   226,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,    -1,    -1,    -1,   249,    -1,   251,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   249,    -1,   251,   225,   226,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,    -1,
     251,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,    -1,    -1,    -1,   249,    -1,   251,   225,   226,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,
      -1,    -1,   249,    -1,   251,   225,   226,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,
      -1,   251,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,   249,    -1,   251,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,
     249,    -1,   251,   225,   226,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,    -1,   247,    -1,    -1,    -1,   251,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   249,    -1,   251,   225,   226,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,    -1,
     251,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,    -1,    -1,    -1,   249,    -1,   251,   225,   226,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,
      -1,    -1,   249,    -1,   251,   225,   226,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,
      -1,   251,   225,   226,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,   249,    -1,   251,   225,
     226,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,   245,
      -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,
     249,    -1,   251,   225,   226,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
      -1,    -1,    -1,   245,    -1,    -1,    -1,   249,    -1,   251,
     225,   226,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,    -1,
     245,    -1,    -1,    -1,   249,    -1,   251,   225,   226,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   249,    -1,   251,   225,   226,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,    -1,
     251,   225,   226,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,    -1,    -1,   245,    -1,
     228,   229,   249,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   251,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,    -1,    -1,   245,    -1,   247,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,    -1,    -1,   245,   227,   228,
     229,   230,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,   242,    -1,    -1,   245
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
#line 373 "GetDP.y"
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
#line 407 "GetDP.y"
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
#line 450 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 473 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 488 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 490 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 492 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 494 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 496 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 498 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 500 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 502 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 504 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 506 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 508 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 510 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 512 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 514 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 516 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 518 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 520 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 522 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 524 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 526 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 528 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 536 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 553 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 560 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 562 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 567 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 569 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 576 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 586 "GetDP.y"
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
#line 596 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 603 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 613 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 618 "GetDP.y"
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
#line 630 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 639 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 650 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 655 "GetDP.y"
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
#line 692 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 695 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 707 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 709 "GetDP.y"
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
#line 725 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 728 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 731 "GetDP.y"
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
#line 782 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 795 "GetDP.y"
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
#line 819 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 826 "GetDP.y"
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
#line 839 "GetDP.y"
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
#line 857 "GetDP.y"
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
#line 880 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 884 "GetDP.y"
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
#line 896 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 905 "GetDP.y"
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
#line 919 "GetDP.y"
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
#line 953 "GetDP.y"
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
#line 977 "GetDP.y"
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
#line 987 "GetDP.y"
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
#line 1009 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 1014 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 1015 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 1022 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1042 "GetDP.y"
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
#line 1062 "GetDP.y"
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
#line 1115 "GetDP.y"
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
#line 1135 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1141 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1147 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1150 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1157 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1168 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1171 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1177 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1181 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1193 "GetDP.y"
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
#line 1206 "GetDP.y"
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
#line 1220 "GetDP.y"
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
#line 1235 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1241 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1247 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1253 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1259 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1265 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1271 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1277 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1283 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1289 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1295 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1301 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1307 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1313 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1319 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1325 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1331 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1338 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1346 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1359 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1365 "GetDP.y"
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
#line 1439 "GetDP.y"
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
#line 1473 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1482 "GetDP.y"
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
#line 1494 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1496 "GetDP.y"
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
#line 1507 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1509 "GetDP.y"
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
#line 1523 "GetDP.y"
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
#line 1535 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 146:
#line 1541 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1547 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 148:
#line 1549 "GetDP.y"
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
#line 1578 "GetDP.y"
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
#line 1602 "GetDP.y"
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
#line 1615 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1621 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1628 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1634 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1641 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1648 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1656 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1663 "GetDP.y"
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
#line 1680 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 160:
#line 1681 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 161:
#line 1682 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 162:
#line 1687 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 163:
#line 1688 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 164:
#line 1694 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 165:
#line 1697 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 166:
#line 1700 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 167:
#line 1716 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 168:
#line 1721 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 169:
#line 1728 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 171:
#line 1737 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 172:
#line 1742 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 173:
#line 1749 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 174:
#line 1752 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 175:
#line 1759 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 177:
#line 1769 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 178:
#line 1772 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 179:
#line 1775 "GetDP.y"
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
#line 1813 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 181:
#line 1819 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 182:
#line 1826 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 184:
#line 1839 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 185:
#line 1846 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 186:
#line 1849 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 187:
#line 1856 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 188:
#line 1859 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 189:
#line 1866 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 191:
#line 1878 "GetDP.y"
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
#line 1888 "GetDP.y"
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
#line 1898 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 194:
#line 1905 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 195:
#line 1908 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 196:
#line 1915 "GetDP.y"
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
#line 1931 "GetDP.y"
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
#line 1979 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1982 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1985 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1988 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1991 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 204:
#line 2002 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 207:
#line 2013 "GetDP.y"
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
#line 2038 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2052 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2058 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2065 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2074 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2077 "GetDP.y"
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
#line 2101 "GetDP.y"
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
#line 2116 "GetDP.y"
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
#line 2136 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 219:
#line 2145 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 221:
#line 2159 "GetDP.y"
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
#line 2169 "GetDP.y"
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
#line 4783 "GetDP.y"
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
#line 4803 "GetDP.y"
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
#line 4824 "GetDP.y"
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
#line 4836 "GetDP.y"
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
#line 4856 "GetDP.y"
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
#line 4873 "GetDP.y"
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
#line 4892 "GetDP.y"
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
#line 4914 "GetDP.y"
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
#line 4948 "GetDP.y"
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
#line 4961 "GetDP.y"
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
#line 4975 "GetDP.y"
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
#line 4988 "GetDP.y"
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
#line 5000 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 445:
#line 5009 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 447:
#line 5018 "GetDP.y"
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
#line 5029 "GetDP.y"
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
#line 5041 "GetDP.y"
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
#line 5051 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 451:
#line 5059 "GetDP.y"
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
#line 5072 "GetDP.y"
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
#line 5085 "GetDP.y"
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
#line 5099 "GetDP.y"
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
#line 5109 "GetDP.y"
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
#line 5119 "GetDP.y"
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
#line 5133 "GetDP.y"
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
#line 5147 "GetDP.y"
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
#line 5166 "GetDP.y"
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
#line 5184 "GetDP.y"
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
#line 5195 "GetDP.y"
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
#line 5210 "GetDP.y"
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
#line 5225 "GetDP.y"
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
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 465:
#line 5255 "GetDP.y"
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
#line 5270 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 467:
#line 5281 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 468:
#line 5286 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 469:
#line 5296 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 471:
#line 5306 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 472:
#line 5309 "GetDP.y"
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
#line 5319 "GetDP.y"
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
#line 5335 "GetDP.y"
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
#line 5351 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 477:
#line 5355 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5359 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 479:
#line 5363 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 480:
#line 5368 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 481:
#line 5379 "GetDP.y"
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
#line 5396 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 484:
#line 5400 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 485:
#line 5404 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 486:
#line 5408 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5412 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5417 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 489:
#line 5428 "GetDP.y"
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
#line 5443 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 492:
#line 5447 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 493:
#line 5451 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 494:
#line 5455 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 5459 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 496:
#line 5470 "GetDP.y"
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
#line 5488 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 499:
#line 5492 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 500:
#line 5496 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 501:
#line 5500 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 5505 "GetDP.y"
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
#line 5515 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 504:
#line 5521 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 505:
#line 5527 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 506:
#line 5537 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 507:
#line 5540 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 508:
#line 5545 "GetDP.y"
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
#line 5563 "GetDP.y"
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
#line 5573 "GetDP.y"
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
#line 5602 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 513:
#line 5605 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 514:
#line 5608 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 515:
#line 5616 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 516:
#line 5633 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 518:
#line 5645 "GetDP.y"
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
#line 5668 "GetDP.y"
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
#line 5682 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 523:
#line 5689 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 524:
#line 5697 "GetDP.y"
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
#line 5743 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 526:
#line 5748 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 527:
#line 5754 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 528:
#line 5757 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 529:
#line 5760 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5762 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 531:
#line 5768 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 533:
#line 5779 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 534:
#line 5782 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 535:
#line 5788 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 536:
#line 5793 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 537:
#line 5799 "GetDP.y"
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
#line 5813 "GetDP.y"
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
#line 5827 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 541:
#line 5834 "GetDP.y"
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
#line 5862 "GetDP.y"
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
#line 5872 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 544:
#line 5873 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 545:
#line 5879 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 546:
#line 5888 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 547:
#line 5905 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 549:
#line 5917 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 552:
#line 5926 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 554:
#line 5938 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 555:
#line 5945 "GetDP.y"
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
#line 5957 "GetDP.y"
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
#line 5968 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 558:
#line 5973 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 559:
#line 5979 "GetDP.y"
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
#line 5996 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 561:
#line 6006 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 562:
#line 6009 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 563:
#line 6013 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 564:
#line 6026 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 565:
#line 6030 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 566:
#line 6036 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 567:
#line 6042 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 568:
#line 6048 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 569:
#line 6055 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 570:
#line 6060 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 571:
#line 6065 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 572:
#line 6070 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 573:
#line 6079 "GetDP.y"
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
#line 6091 "GetDP.y"
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
#line 6114 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 576:
#line 6115 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 577:
#line 6116 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 578:
#line 6117 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 579:
#line 6123 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 580:
#line 6125 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 581:
#line 6131 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 582:
#line 6137 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 583:
#line 6144 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 584:
#line 6153 "GetDP.y"
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
#line 6175 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6183 "GetDP.y"
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
#line 6194 "GetDP.y"
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
#line 6208 "GetDP.y"
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
#line 6229 "GetDP.y"
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
#line 6256 "GetDP.y"
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
#line 6287 "GetDP.y"
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
#line 6307 "GetDP.y"
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
#line 6336 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 595:
#line 6343 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 596:
#line 6350 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 597:
#line 6357 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 598:
#line 6361 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 599:
#line 6365 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 600:
#line 6369 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 6373 "GetDP.y"
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
#line 6383 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 603:
#line 6388 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 604:
#line 6393 "GetDP.y"
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
#line 6413 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 606:
#line 6420 "GetDP.y"
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
#line 6429 "GetDP.y"
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
#line 6438 "GetDP.y"
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
#line 6447 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 610:
#line 6454 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 611:
#line 6462 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 612:
#line 6466 "GetDP.y"
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
#line 6475 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 614:
#line 6479 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 615:
#line 6483 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 616:
#line 6491 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 617:
#line 6497 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 618:
#line 6502 "GetDP.y"
{ 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;
    break;}
case 619:
#line 6509 "GetDP.y"
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
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &_value) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &_value) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 635:
#line 6718 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 636:
#line 6723 "GetDP.y"
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
case 637:
#line 6735 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 638:
#line 6745 "GetDP.y"
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
case 640:
#line 6764 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6770 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6776 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 643:
#line 6787 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 644:
#line 6788 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 645:
#line 6789 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 646:
#line 6790 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 647:
#line 6791 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 648:
#line 6792 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 649:
#line 6793 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 650:
#line 6794 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 651:
#line 6795 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 652:
#line 6796 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 653:
#line 6797 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 654:
#line 6798 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 655:
#line 6799 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 656:
#line 6800 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 657:
#line 6801 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 658:
#line 6802 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 659:
#line 6803 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 660:
#line 6804 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 661:
#line 6805 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 662:
#line 6806 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 663:
#line 6807 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 664:
#line 6811 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 665:
#line 6812 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 666:
#line 6813 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 667:
#line 6814 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 668:
#line 6815 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 669:
#line 6816 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 670:
#line 6817 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 671:
#line 6818 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 672:
#line 6819 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 673:
#line 6820 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 674:
#line 6821 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 675:
#line 6822 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 676:
#line 6823 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 677:
#line 6824 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 678:
#line 6825 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 679:
#line 6826 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 680:
#line 6827 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 681:
#line 6828 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 682:
#line 6829 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 683:
#line 6830 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 684:
#line 6831 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 685:
#line 6832 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 686:
#line 6833 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 687:
#line 6834 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 688:
#line 6835 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 689:
#line 6836 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 690:
#line 6837 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 691:
#line 6838 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 692:
#line 6839 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 693:
#line 6840 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6841 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 695:
#line 6842 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6843 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 697:
#line 6844 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 698:
#line 6845 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 699:
#line 6846 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 700:
#line 6847 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 701:
#line 6848 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 702:
#line 6849 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 703:
#line 6850 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 704:
#line 6855 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 705:
#line 6856 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 706:
#line 6857 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 707:
#line 6858 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 708:
#line 6859 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 709:
#line 6860 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 710:
#line 6861 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 711:
#line 6880 "GetDP.y"
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
case 712:
#line 6898 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 713:
#line 6901 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 714:
#line 6907 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 715:
#line 6910 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 716:
#line 6917 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 717:
#line 6923 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 718:
#line 6926 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 719:
#line 6929 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 720:
#line 6941 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 721:
#line 6947 "GetDP.y"
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
case 722:
#line 6958 "GetDP.y"
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
case 723:
#line 6974 "GetDP.y"
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
case 724:
#line 6996 "GetDP.y"
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
case 725:
#line 7011 "GetDP.y"
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
case 726:
#line 7049 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 727:
#line 7057 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 728:
#line 7069 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 729:
#line 7077 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 730:
#line 7089 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 731:
#line 7091 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 732:
#line 7098 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 733:
#line 7101 "GetDP.y"
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
case 734:
#line 7116 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 735:
#line 7121 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 736:
#line 7126 "GetDP.y"
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
case 737:
#line 7145 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 738:
#line 7163 "GetDP.y"
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
#line 7174 "GetDP.y"



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

