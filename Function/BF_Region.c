#define RCSID "$Id: BF_Region.c,v 1.5 2000-10-30 01:29:46 geuzaine Exp $"
#include <stdio.h>

#include "GetDP.h"
#include "BF_Function.h"
#include "Get_DofOfElement.h"
#include "CurrentData.h"
#include "Treatment_Formulation.h"

/* ------------------------------------------------------------------------ */
/*  B F _ R e g i o n                                                       */
/* ------------------------------------------------------------------------ */

void  BF_Region(struct Element * Element, int NumRegion, 
		double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_Region");

  *s = 1. ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ R e g i o n X ,  Y ,  Z                                           */
/* ------------------------------------------------------------------------ */

void  BF_RegionX(struct Element * Element, int NumRegion, 
		 double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_RegionX");

  s[1] = s[2] = 0. ;  s[0] = 1. ;

  GetDP_End ;
}

void  BF_RegionY(struct Element * Element, int NumRegion, 
		 double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_RegionY");

  s[0] = s[2] = 0. ;  s[1] = 1. ;

  GetDP_End ;
}

void  BF_RegionZ(struct Element * Element, int NumRegion, 
		 double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_RegionZ");

  s[0] = s[1] = 0. ;  s[2] = 1. ;

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

  Pos_FemInterpolation
    (Element,
     NULL,
     GlobalBasisFunction_P->QuantityStorage,
     QUANTITY_SIMPLE, NOOP, 0,
     u, v, w, 0., 0., 0.,  Value.Val, &Value.Type, 0) ;

  switch (Value.Type) {
  case SCALAR :
    s[0] = Value.Val[0] ;
    break ;
  case VECTOR :
    s[0] = Value.Val[0] ;  s[1] = Value.Val[1] ;  s[2] = Value.Val[2] ;
    break ;
  default :
    Msg(ERROR, "Bad Type for Global Basis Function") ;
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

  Pos_FemInterpolation
    (Element,
     NULL,
     GlobalBasisFunction_P->QuantityStorage,
     QUANTITY_SIMPLE, EXTDER, 0,
     u, v, w, 0., 0., 0.,  Value.Val, &Value.Type, 0) ;

  switch (Value.Type) {
  case SCALAR :
    s[0] = Value.Val[0] ;
    break ;
  case VECTOR :
    s[0] = Value.Val[0] ;  s[1] = Value.Val[1] ;  s[2] = Value.Val[2] ;
    break ;
  default :
    Msg(ERROR, "Bad Type for Global Basis Function") ;
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
