/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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
 */

#ifndef _DATA_DEFINE_E_H_
#define _DATA_DEFINE_E_H_

struct StringXDefine {
  char *string ; 
  int define ;
} ;

struct StringXDefine1Nbr {
  char *string ; 
  int define, Nbr1 ;
} ;

struct StringXPointer {
  char *string ; 
  void *Pointer ;
} ;

struct StringX3Function2Nbr {
  char *string ;
  void (*Function1)() ; 
  void (*Function2)() ; 
  void (*Function3)() ;
  double Nbr1 ;
  int Nbr2 ;
} ;

struct DefineXFunction {
  int  define ;  
  void (*Function)() ;
} ;

struct StringXFunction2Nbr {
  char *string ;  
  void (*Function)() ;  
  int   Nbr1, Nbr2 ;
} ;

struct FunctionXFunction {
  void (*Function1)() ; 
  void (*Function2)() ; 
} ;

extern struct StringXDefine  Mesh_Format[] ;
extern struct StringXDefine  Field_Type[] ;
extern struct StringXDefine  FunctionForGroup_Type[] ;
extern struct StringXDefine  FunctionForGroup_SuppList[] ;
extern struct StringXDefine1Nbr  Jacobian_Type[] ;
extern struct StringXDefine  Integration_Type[] ;
extern struct StringXDefine  Integration_SubType[] ;
extern struct StringXDefine  Element_Type[] ;
extern struct StringXDefine  GlobalQuantity_Type[] ;
extern struct StringXDefine  Constraint_Type[] ;
extern struct StringXDefine  Formulation_Type[] ;
extern struct StringXDefine  DefineQuantity_Type[] ;
extern struct StringXDefine  Operator_Type[] ;
extern struct StringXDefine  QuantityFromFS_Type[] ;
extern struct StringXDefine  DefineSystem_Type[] ;
extern struct StringXDefine  Operation_Type[] ;
extern struct StringXDefine  ChangeOfState_Type[] ;
extern struct StringXDefine  PostQuantityTerm_EvaluationType[];
extern struct StringXDefine  PostSubOperation_CombinationType[];
extern struct StringXDefine  PostSubOperation_Format[];
extern struct StringXDefine  PostSubOperation_FormatTag[];
extern struct StringXDefine  PostSubOperation_AdaptationType[];
extern struct StringXDefine  PostSubOperation_SortType[] ;

extern struct StringXPointer Current_Value[] ;

extern struct DefineXFunction  FunctionForGauss[] ;
extern struct DefineXFunction  FunctionForGaussLegendre[] ;
extern struct DefineXFunction  FunctionForSingularGauss[] ;

extern struct StringX3Function2Nbr BF_Function[] ;
extern struct StringXFunction2Nbr  F_Function[] ;
extern struct FunctionXFunction    GF_Function[] ;
extern struct FunctionXFunction    FMMProd_Function2D[] ;
extern struct FunctionXFunction    FMMProd_Function3D[] ;


char *Get_StringForDefine(struct StringXDefine SXD[], int define) ;
int   Get_DefineForString(struct StringXDefine SXD[], char * string,
			  int * FlagError) ;

char *Get_StringForDefine1Nbr(struct StringXDefine1Nbr SXD[], int define) ;
int   Get_Define1NbrForString(struct StringXDefine1Nbr SXD[], char * string,
			      int * FlagError, int * Nbr1) ;

char *Get_StringForPointer(struct StringXPointer SXF[], void * Pointer) ;
void  Get_PointerForString(struct StringXPointer SXF[], char * string,
			   int * FlagError, void **Pointer) ;

char *Get_StringFor3Function2Nbr(struct StringX3Function2Nbr SXF[], 
				 void (*Function1)()) ;
void  Get_3Function2NbrForString(struct StringX3Function2Nbr SXF[], char * string,
				 int * FlagError,
				 void (**Function1)(), 
				 void (**Function2)(), 
				 void (**Function3)(),
				 double * Nbr1, int * Nbr2) ;

void Get_FunctionForDefine(struct DefineXFunction DXF[], int define,
			   int * FlagError, void (**Function)()) ;

void Get_Function2NbrForString(struct StringXFunction2Nbr SXF[], char * string,
			       int * FlagError, 
			       void (**Function)(), 
			       int * Nbr1, int * Nbr2) ;

void  Get_FunctionForFunction(struct FunctionXFunction  FXF[], void (*Function1)(),
			      int * FlagError, void (**Function2)() ) ;	     

char *Get_StringForFunction2Nbr(struct StringXFunction2Nbr SXF[], void (*Function)()) ;


char*  Get_Valid_SXD   (struct StringXDefine        V[]);
char*  Get_Valid_SXD1N (struct StringXDefine1Nbr    V[]);
char*  Get_Valid_SXP   (struct StringXPointer       V[]);
char*  Get_Valid_SX3F2N(struct StringX3Function2Nbr V[]);
char*  Get_Valid_SXF2N (struct StringXFunction2Nbr  V[]);

#endif
