// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "BF.h"
#include "Get_DofOfElement.h"
#include "Pos_FemInterpolation.h"
#include "Cal_Quantity.h"
#include "MallocUtils.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  B F _ S u b F u n c t i o n                                             */
/* ------------------------------------------------------------------------ */

void BF_SubFunction(struct Element * Element, int NumExpression,
		    int Dim, double s[])
{
  struct Value  Value ;

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
}

/* ------------------------------------------------------------------------ */
/*  B F _ R e g i o n                                                       */
/* ------------------------------------------------------------------------ */

void BF_Region(struct Element * Element, int NumRegion, 
	       double u, double v, double w, double *s)
{
  *s = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 1, s) ;
}

void BF_dRegion(struct Element * Element, int NumRegion, 
		double u, double v, double w, double *s)
{
  *s = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 1, s) ;
  else
    *s = 0. ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ R e g i o n X ,  Y ,  Z                                           */
/* ------------------------------------------------------------------------ */

void BF_RegionX(struct Element * Element, int NumRegion, 
		double u, double v, double w, double s[])
{
  s[1] = s[2] = 0. ;  s[0] = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 3, s) ;
}

void BF_RegionY(struct Element * Element, int NumRegion, 
		double u, double v, double w, double s[])
{

  s[0] = s[2] = 0. ;  s[1] = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 3, s) ;
}

void  BF_RegionZ(struct Element * Element, int NumRegion, 
		 double u, double v, double w, double s[])
{
  s[0] = s[1] = 0. ;  s[2] = 1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[0][NumRegion-1], 3, s) ;
}

void  BF_dRegionX(struct Element * Element, int NumRegion, 
		  double u, double v, double w, double s[])
{
  s[1] = s[2] = 0. ;  s[0] = 1. ; /* Patrick (a finaliser) */

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 3, s) ;
  else
    s[0] = 0. ;
}

void BF_dRegionY(struct Element * Element, int NumRegion, 
		 double u, double v, double w, double s[])
{
  s[0] = s[2] = 0. ;  s[1] = 1. ; /* Patrick (a finaliser) */

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 3, s) ;
  else
    s[1] = 0. ;
}

void BF_dRegionZ(struct Element * Element, int NumRegion, 
		 double u, double v, double w, double s[])
{
  /* Patrick (a finaliser)
  s[0] = s[1] = 0. ;  s[2] = 1. ;
  */
  s[0] = s[2] = 0. ;  s[1] = -1. ;

  if (Element->NumSubFunction[0][NumRegion-1] >= 0)
    BF_SubFunction(Element, Element->NumSubFunction[2][NumRegion-1], 3, s) ;
  else
    s[1] = 0. ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ Z e r o                                                           */
/* ------------------------------------------------------------------------ */

void BF_Zero(struct Element * Element, int Num,
	     double u, double v, double w, double *s)
{
  s[0] = s[1] = s[2] = 0. ;
}

void BF_One(struct Element * Element, int Num,
	    double u, double v, double w, double *s)
{
  s[0] = 1. ; s[1] = s[2] = 0. ;
}

void BF_OneZ(struct Element * Element, int Num,
	    double u, double v, double w, double *s)
{
  s[0] = s[1] = 0. ; s[2] = 1. ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ I n i t G l o b a l                                               */
/* ------------------------------------------------------------------------ */

void  BF_InitGlobal(struct GlobalBasisFunction * GlobalBasisFunction_P)
{
  struct QuantityStorage  * QuantityStorage_P ;
  struct Formulation      * Formulation_P ;

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
}

/* ------------------------------------------------------------------------ */
/*  B F _ G l o b a l ,  B F _ d G l o b a l ,  B F _ d I n v G l o b a l   */
/* ------------------------------------------------------------------------ */

void  BF_Global_OP(struct Element * Element, int NumGlobal, 
                   double u, double v, double w, double *s, int type_OP)
{
  struct Value  Value ;
  struct GlobalBasisFunction  * GlobalBasisFunction_P ;
  struct QuantityStorage  * QuantityStorage_P ;
  int Save_NbrHar;
  
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
     QUANTITY_SIMPLE, type_OP, -1, 0,
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
    Message::Error("Bad type of value for Global BasisFunction") ;
  }
}

/* ------------------------------------------------------------------------ */

void  BF_Global(struct Element * Element, int NumGlobal, 
		double u, double v, double w, double *s)
{
  BF_Global_OP(Element, NumGlobal, u, v, w, s, NOOP);
}

void  BF_dGlobal(struct Element * Element, int NumGlobal, 
		 double u, double v, double w,  double *s )
{
  BF_Global_OP(Element, NumGlobal, u, v, w, s, EXTDER);
}

void  BF_dInvGlobal(struct Element * Element, int NumGlobal, 
                    double u, double v, double w,  double *s )
{
  BF_Global_OP(Element, NumGlobal, u, v, w, s, EXTDERINV);
}
