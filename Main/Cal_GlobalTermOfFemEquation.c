#define RCSID "$Id: Cal_GlobalTermOfFemEquation.c,v 1.6 2001-03-03 19:21:20 geuzaine Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Get_DofOfElement.h"
#include "Get_Geometry.h"
#include "GeoData.h"
#include "CurrentData.h"
#include "Tools.h"

/* ------------------------------------------------------------------------ */
/*  C a l _ G l o b a l T e r m O f F e m F o r m u l a t i o n             */
/* ------------------------------------------------------------------------ */

void  Cal_GlobalTermOfFemEquation(int  Num_Region,
				  struct EquationTerm     * EquationTerm_P,
				  struct QuantityStorage  * QuantityStorage_P0,
				  struct QuantityStorage  * QuantityStorageNoDof,
				  struct Dof              * DofForNoDof_P) {

  struct QuantityStorage  * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  struct Value              vBFxDof [1] ;
  struct Element  Element ;

  int     k ;
  double  Coefficient [NBR_MAX_HARMONIC] ;

  void (*Function_AssembleTerm)(struct Dof * Equ, struct Dof * Dof, double Val[]) ;

  GetDP_Begin("Cal_GlobalTermOfFemEquation");

  Element.Num = NO_ELEMENT ;

  switch (EquationTerm_P->Case.GlobalTerm.Term.TypeTimeDerivative) {
  case NODT_   : Function_AssembleTerm = Cal_AssembleTerm_NoDt    ; break ;
  case DTDOF_  :
  case DT_     : Function_AssembleTerm = Cal_AssembleTerm_DtDof   ; break ;
  case DTDTDOF_:
  case DTDT_   : Function_AssembleTerm = Cal_AssembleTerm_DtDtDof ; break ;
  case NEVERDT_: Function_AssembleTerm = Cal_AssembleTerm_NeverDt ; break ;
  default      : Msg(ERROR, "Unknown type of operator for Global term")    ; break ;
  }

  QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexEqu ;

  if (EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof >= 0) {
    QuantityStorageDof_P = QuantityStorage_P0 +
      EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof ;
  }
  else {
    QuantityStorageDof_P = QuantityStorageNoDof ;
    Dof_InitDofForNoDof(DofForNoDof_P, Current.NbrHar) ;
    QuantityStorageDof_P->BasisFunction[0].Dof = DofForNoDof_P ;
  }

  vBFxDof[0].Type = SCALAR ;  vBFxDof[0].Val[0] = 1. ;
  if(Current.NbrHar > 1) Cal_SetHarmonicValue(&vBFxDof[0]) ;

  Cal_WholeQuantity
    (Current.Element = &Element, QuantityStorage_P0,
     EquationTerm_P->Case.GlobalTerm.Term.WholeQuantity,
     Current.u = 0., Current.v = 0., Current.w = 0.,
     EquationTerm_P->Case.GlobalTerm.Term.DofIndexInWholeQuantity,
     1, vBFxDof) ;

  for (k = 0 ; k < Current.NbrHar ; k++)
    Coefficient[k] = vBFxDof[0].Val[MAX_DIM*k] ;

  Function_AssembleTerm
    (QuantityStorageEqu_P->BasisFunction[0].Dof,
     QuantityStorageDof_P->BasisFunction[0].Dof, Coefficient) ;

  GetDP_End ;
}
