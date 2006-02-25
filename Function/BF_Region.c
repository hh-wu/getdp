#define RCSID "$Id: BF_Region.c,v 1.15 2006-02-25 15:00:23 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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

#include "GetDP.h"
#include "BF_Function.h"
#include "Get_DofOfElement.h"
#include "CurrentData.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"

void  BF_SubFunction(struct Element * Element, int NumExpression,
		     int Dim, double s[] ) ;

/* ------------------------------------------------------------------------ */
/*  B F _ R e g i o n                                                       */
/* ------------------------------------------------------------------------ */

void  BF_Region(struct Element * Element, int NumRegion, 
		double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_Region");

  *s = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 1, s) ;

  GetDP_End ;
}

void  BF_dRegion(struct Element * Element, int NumRegion, 
		 double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_dRegion");

  *s = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 1, s) ;
  else
    *s = 0. ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ R e g i o n X ,  Y ,  Z                                           */
/* ------------------------------------------------------------------------ */

void  BF_RegionX(struct Element * Element, int NumRegion, 
		 double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_RegionX");

  s[1] = s[2] = 0. ;  s[0] = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 3, s) ;

  GetDP_End ;
}

void  BF_RegionY(struct Element * Element, int NumRegion, 
		 double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_RegionY");

  s[0] = s[2] = 0. ;  s[1] = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 3, s) ;

  GetDP_End ;
}

void  BF_RegionZ(struct Element * Element, int NumRegion, 
		 double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_RegionZ");

  s[0] = s[1] = 0. ;  s[2] = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 3, s) ;

  GetDP_End ;
}


void  BF_dRegionX(struct Element * Element, int NumRegion, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_dRegionX");

  s[1] = s[2] = 0. ;  s[0] = 1. ; /* Patrick (a finaliser) */

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 3, s) ;
  else
    s[0] = 0. ;

  GetDP_End ;
}

void  BF_dRegionY(struct Element * Element, int NumRegion, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_dRegionY");

  s[0] = s[2] = 0. ;  s[1] = 1. ; /* Patrick (a finaliser) */

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 3, s) ;
  else
    s[1] = 0. ;

  GetDP_End ;
}

void  BF_dRegionZ(struct Element * Element, int NumRegion, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_dRegionZ");

  /* Patrick (a finaliser)
  s[0] = s[1] = 0. ;  s[2] = 1. ;
  */
  s[0] = s[2] = 0. ;  s[1] = -1. ;


  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 3, s) ;
  else
    s[1] = 0. ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ Z e r o                                                           */
/* ------------------------------------------------------------------------ */

void  BF_Zero(struct Element * Element, int Num,
	      double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_Zero");

  s[0] = s[1] = s[2] = 0. ;

  GetDP_End ;
}

void  BF_One(struct Element * Element, int Num,
	     double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_One");

  s[0] = 1. ; s[1] = s[2] = 0. ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ G l o b a l                                                       */
/* ------------------------------------------------------------------------ */

void  BF_Global(struct Element * Element, int NumGlobal, 
		double u, double v, double w,  double *s ) {

  struct Value  Value ;
  struct GlobalBasisFunction  * GlobalBasisFunction_P ;
  struct QuantityStorage  * QuantityStorage_P ;
  int Save_NbrHar;
  
  void  BF_InitGlobal(struct GlobalBasisFunction * GlobalBasisFunction_P) ;

  GetDP_Begin("BF_Global");

  GlobalBasisFunction_P = Element->GlobalBasisFunction[NumGlobal-1] ;

  if (!GlobalBasisFunction_P->QuantityStorage)
    BF_InitGlobal(GlobalBasisFunction_P) ;  /* Init QuantityStorage */

  QuantityStorage_P = GlobalBasisFunction_P->QuantityStorage ;
  
  if (QuantityStorage_P->NumLastElementForFunctionSpace != Element->Num) {
    QuantityStorage_P->NumLastElementForFunctionSpace = Element->Num ;

    Get_DofOfElement
      (Element, QuantityStorage_P->FunctionSpace, QuantityStorage_P,
       QuantityStorage_P->DefineQuantity->IndexInFunctionSpace) ;
  }

  Save_NbrHar = Current.NbrHar;
  Current.NbrHar = 1; /* for real basis function */
  Pos_FemInterpolation
    (Element,
     NULL,
     GlobalBasisFunction_P->QuantityStorage,
     QUANTITY_SIMPLE, NOOP, -1, 0,
     u, v, w, 0., 0., 0.,  Value.Val, &Value.Type, 0) ;
  Current.NbrHar = Save_NbrHar;

  switch (Value.Type) {
  case SCALAR :
    s[0] = Value.Val[0] ;
    break ;
  case VECTOR :
    s[0] = Value.Val[0] ;  s[1] = Value.Val[1] ;  s[2] = Value.Val[2] ;
    break ;
  default :
    Msg(ERROR, "Bad type of value for Global BasisFunction") ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ d G l o b a l                                                     */
/* ------------------------------------------------------------------------ */

void  BF_dGlobal(struct Element * Element, int NumGlobal, 
		 double u, double v, double w,  double *s ) {

  struct Value  Value ;

  struct GlobalBasisFunction  * GlobalBasisFunction_P ;
  struct QuantityStorage  * QuantityStorage_P ;
  int Save_NbrHar;

  void  BF_InitGlobal(struct GlobalBasisFunction * GlobalBasisFunction_P) ;

  GetDP_Begin("BF_dGlobal");

  GlobalBasisFunction_P = Element->GlobalBasisFunction[NumGlobal-1] ;

  if (!GlobalBasisFunction_P->QuantityStorage)
    BF_InitGlobal(GlobalBasisFunction_P) ;  /* Init QuantityStorage */

  QuantityStorage_P = GlobalBasisFunction_P->QuantityStorage ;
  
  if (QuantityStorage_P->NumLastElementForFunctionSpace != Element->Num) {
    QuantityStorage_P->NumLastElementForFunctionSpace = Element->Num ;

    Get_DofOfElement
      (Element, QuantityStorage_P->FunctionSpace, QuantityStorage_P,
       QuantityStorage_P->DefineQuantity->IndexInFunctionSpace) ;
  }

  Save_NbrHar = Current.NbrHar;
  Current.NbrHar = 1; /* for real basis function */
  Pos_FemInterpolation
    (Element,
     NULL,
     GlobalBasisFunction_P->QuantityStorage,
     QUANTITY_SIMPLE, EXTDER, -1, 0,
     u, v, w, 0., 0., 0.,  Value.Val, &Value.Type, 0) ;
  Current.NbrHar = Save_NbrHar;

  switch (Value.Type) {
  case SCALAR :
    s[0] = Value.Val[0] ;
    break ;
  case VECTOR :
    s[0] = Value.Val[0] ;  s[1] = Value.Val[1] ;  s[2] = Value.Val[2] ;
    break ;
  default :
    Msg(ERROR, "Bad type of value for Global BasisFunction") ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ I n i t G l o b a l                                               */
/* ------------------------------------------------------------------------ */

void  BF_InitGlobal(struct GlobalBasisFunction * GlobalBasisFunction_P) {

  struct QuantityStorage  * QuantityStorage_P ;
  struct Formulation      * Formulation_P ;

  GetDP_Begin("BF_InitGlobal");

  QuantityStorage_P =
    GlobalBasisFunction_P->QuantityStorage = 
    (struct QuantityStorage *)Malloc(sizeof(struct QuantityStorage)) ;

  QuantityStorage_P->NumLastElementForFunctionSpace = 0 ;

  Formulation_P = (struct Formulation*)
    List_Pointer(Problem_S.Formulation,
		 GlobalBasisFunction_P->FormulationIndex) ;
  QuantityStorage_P->DefineQuantity = (struct DefineQuantity*)
    List_Pointer(Formulation_P->DefineQuantity,
		 GlobalBasisFunction_P->DefineQuantityIndex) ;
  QuantityStorage_P->FunctionSpace = (struct FunctionSpace*)
    List_Pointer(Problem_S.FunctionSpace,
		 QuantityStorage_P->DefineQuantity->FunctionSpaceIndex) ;
  QuantityStorage_P->TypeQuantity = QuantityStorage_P->FunctionSpace->Type ;

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  B F _ S u b F u n c t i o n                                             */
/* ------------------------------------------------------------------------ */

void  BF_SubFunction(struct Element * Element, int NumExpression,
		     int Dim, double s[] ) {

  struct Value  Value ;

  GetDP_Begin("BF_SubFunction");

  Get_ValueOfExpressionByIndex(NumExpression, NULL, 0., 0., 0., &Value) ;

  switch (Dim) {
  case 1 :
    *s *= Value.Val[0] ;
    break ;
  case 3 :
    s[0] *= Value.Val[0] ;
    s[1] *= Value.Val[0] ;
    s[2] *= Value.Val[0] ;
    break ;
  }

  GetDP_End ;
}
