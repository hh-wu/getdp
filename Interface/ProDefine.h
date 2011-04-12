// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _PRO_DEFINE_H_
#define _PRO_DEFINE_H_

#include "ProData.h"

struct StringXDefine {
  const char *string; 
  int define;
};

struct StringXDefine1Nbr {
  const char *string; 
  int define, Nbr1;
};

struct StringXPointer {
  const char *string; 
  void *Pointer;
};

struct StringX3Function2Nbr {
  const char *string;
  void (*Function1)(); 
  void (*Function2)(); 
  void (*Function3)();
  double Nbr1;
  int Nbr2;
};

struct DefineXFunction {
  int  define;  
  void (*Function)();
};

struct StringXFunction2Nbr {
  const char *string;  
  void (*Function)();  
  int   Nbr1, Nbr2;
};

struct FunctionXFunction {
  void (*Function1)(); 
  void (*Function2)(); 
};

extern struct StringXDefine  Mesh_Format[];
extern struct StringXDefine  Field_Type[];
extern struct StringXDefine  FunctionForGroup_Type[];
extern struct StringXDefine  FunctionForGroup_SuppList[];
extern struct StringXDefine1Nbr  Jacobian_Type[];
extern struct StringXDefine  Integration_Type[];
extern struct StringXDefine  Integration_SubType[];
extern struct StringXDefine  Element_Type[];
extern struct StringXDefine  GlobalQuantity_Type[];
extern struct StringXDefine  Constraint_Type[];
extern struct StringXDefine  Formulation_Type[];
extern struct StringXDefine  DefineQuantity_Type[];
extern struct StringXDefine  Operator_Type[];
extern struct StringXDefine  QuantityFromFS_Type[];
extern struct StringXDefine  DefineSystem_Type[];
extern struct StringXDefine  Operation_Type[];
extern struct StringXDefine  ChangeOfState_Type[];
extern struct StringXDefine  PostQuantityTerm_EvaluationType[];
extern struct StringXDefine  PostSubOperation_CombinationType[];
extern struct StringXDefine  PostSubOperation_Format[];
extern struct StringXDefine  PostSubOperation_FormatTag[];
extern struct StringXDefine  PostSubOperation_AdaptationType[];
extern struct StringXDefine  PostSubOperation_SortType[];

extern struct StringXPointer Current_Value[];

extern struct DefineXFunction  FunctionForGauss[];
extern struct DefineXFunction  FunctionForGaussLegendre[];
extern struct DefineXFunction  FunctionForSingularGauss[];

extern struct StringX3Function2Nbr BF_Function[];
extern struct StringXFunction2Nbr  F_Function[];
extern struct FunctionXFunction    GF_Function[];

const char *Get_StringForDefine(struct StringXDefine SXD[], int define);
int Get_DefineForString(struct StringXDefine SXD[], const char *string,
			int *FlagError);

const char *Get_StringForDefine1Nbr(struct StringXDefine1Nbr SXD[], int define);
int Get_Define1NbrForString(struct StringXDefine1Nbr SXD[], const char *string,
			      int *FlagError, int *Nbr1);

const char *Get_StringForPointer(struct StringXPointer SXF[], void *Pointer);
void Get_PointerForString(struct StringXPointer SXF[], const char *string,
			  int *FlagError, void **Pointer);

const char *Get_StringFor3Function2Nbr(struct StringX3Function2Nbr SXF[], 
				       void (*Function1)());
void Get_3Function2NbrForString(struct StringX3Function2Nbr SXF[], const char *string,
				int *FlagError, void (**Function1)(), 
				void (**Function2)(), void (**Function3)(),
				double *Nbr1, int *Nbr2);

void Get_FunctionForDefine(struct DefineXFunction DXF[], int define,
			   int *FlagError, void (**Function)());

void Get_Function2NbrForString(struct StringXFunction2Nbr SXF[], const char *string,
			       int *FlagError, void (**Function)(), 
			       int *Nbr1, int *Nbr2);

void  Get_FunctionForFunction(struct FunctionXFunction  FXF[], void (*Function1)(),
			      int *FlagError, void (**Function2)() );	     

const char *Get_StringForFunction2Nbr(struct StringXFunction2Nbr SXF[], void (*Function)());

char *Get_Valid_SXD(struct StringXDefine V[]);
char *Get_Valid_SXD1N(struct StringXDefine1Nbr V[]);
char *Get_Valid_SXP(struct StringXPointer V[]);
char *Get_Valid_SX3F2N(struct StringX3Function2Nbr V[]);
char *Get_Valid_SXF2N(struct StringXFunction2Nbr V[]);

#endif
