#define RCSID "$Id: Cal_GlobalTermOfFemEquation.c,v 1.9 2004-01-19 16:51:16 geuzaine Exp $"
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
 */

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

#define OFFSET (iHar < NbrHar-OffSet)? 0 : iHar-NbrHar+OffSet+2-iHar%2

void MH_Get_InitData(int Case, int NbrPoints, int *NbrPointsX_P,
		     double ***H_P, double ****HH_P, double **t_P, double **w_P);

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

  void (*Function_AssembleTerm)(struct Dof * Equ, struct Dof * Dof, double Val[])=0 ;

  List_T * WholeQuantity_L;
  struct WholeQuantity   *WholeQuantity_P0 ;
  int i_WQ ;
  struct Expression * Expression_P;
  int NbrPointsX ;
  double **H, ***HH, *time, *weight, Factor=1., plus, plus0;

  double one=1.0 ;
  int j=0,iPul, ZeroHarmonic, DcHarmonic;
  int     NbrHar, iTime, iHar, jHar, OffSet=0 ;
  double  Val_Dof [NBR_MAX_HARMONIC] ;

  double  E_MH [NBR_MAX_HARMONIC][NBR_MAX_HARMONIC] ;
  double  E_D [NBR_MAX_HARMONIC][NBR_MAX_HARMONIC] ;
  struct Dof * Dof;
  struct Value t_Value;
  gMatrix * Jac;
  struct QuantityStorage    * QuantityStorage_P;


  GetDP_Begin("Cal_GlobalTermOfFemEquation");

  Element.Num = NO_ELEMENT ;

  switch (EquationTerm_P->Case.GlobalTerm.Term.TypeTimeDerivative) {
  case NODT_   : Function_AssembleTerm = Cal_AssembleTerm_NoDt    ; break ;
  case DTDOF_  :
  case DT_     : Function_AssembleTerm = Cal_AssembleTerm_DtDof   ; break ;
  case DTDTDOF_:
  case DTDT_   : Function_AssembleTerm = Cal_AssembleTerm_DtDtDof ; break ;
  case NEVERDT_: Function_AssembleTerm = Cal_AssembleTerm_NeverDt ; break ;
  case JACNL_  : Function_AssembleTerm = Cal_AssembleTerm_JacNL   ; break ;
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

  /* search for MHJacNL-term(s) */ 
  WholeQuantity_L = EquationTerm_P->Case.GlobalTerm.Term.WholeQuantity ;
  WholeQuantity_P0 = (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) ;
  i_WQ = 0 ; while ( i_WQ < List_Nbr(WholeQuantity_L) &&
		     (WholeQuantity_P0 + i_WQ)->Type != WQ_MHJACNL) i_WQ++ ;

  if (i_WQ < List_Nbr(WholeQuantity_L) ) {

    Msg(INFO,"MHJacNL term");
    if (QuantityStorageEqu_P != QuantityStorageDof_P)
      Msg(ERROR, "Global term with MHJacNL is not symmtric ?!");

    QuantityStorage_P = QuantityStorageEqu_P ;

    if (List_Nbr(WholeQuantity_L) == 3){
      if (i_WQ != 0 || 
	  EquationTerm_P->Case.GlobalTerm.Term.DofIndexInWholeQuantity != 1 ||
	  (WholeQuantity_P0 + 2)->Type != WQ_BINARYOPERATOR ||
	  (WholeQuantity_P0 + 2)->Case.Operator.TypeOperator != OP_TIME)
	Msg(ERROR, "Not allowed expression in Global term with MHJacNL (case 1)");
      Factor = 1.; 
    }
    else if (List_Nbr(WholeQuantity_L) == 5){
      if ((WholeQuantity_P0 + 0)->Type != WQ_CONSTANT ||
	  i_WQ != 1 || 
	  (WholeQuantity_P0 + 2)->Type != WQ_BINARYOPERATOR ||
	  (WholeQuantity_P0 + 2)->Case.Operator.TypeOperator != OP_TIME ||
	  EquationTerm_P->Case.GlobalTerm.Term.DofIndexInWholeQuantity != 3 ||
	  (WholeQuantity_P0 + 4)->Type != WQ_BINARYOPERATOR ||
	  (WholeQuantity_P0 + 4)->Case.Operator.TypeOperator != OP_TIME)
	Msg(ERROR, "Not allowed expression in Global term with MHJacNL (case 2)");
      Factor = WholeQuantity_P0->Case.Constant ;
      /* printf(" Factor = %e \n" , FI->MHJacNL_Factor); */
    }
    else {
      Msg(ERROR, "Not allowed expression in Global term with MHJacNL (%d terms) ", 
	  List_Nbr(WholeQuantity_L));
    }
    
    if (EquationTerm_P->Case.GlobalTerm.Term.TypeTimeDerivative != JACNL_)
      Msg(ERROR, "MHJacNL can only be used with JACNL") ;
    
    Expression_P = Problem_Expression0 + (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.Index ;

    MH_Get_InitData(2, (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.NbrPoints,
		    &NbrPointsX, &H, &HH,
		    &time, &weight) ;

    NbrHar = Current.NbrHar ;

    /* special treatment of DC-term and associated dummy sinus-term */
    DcHarmonic = NbrHar;
    ZeroHarmonic = 0;
    for (iPul = 0 ; iPul < NbrHar/2 ; iPul++) 
      if (!Current.DofData->Val_Pulsation[iPul]){
	DcHarmonic = 2*iPul ;
	ZeroHarmonic = 2*iPul+1 ;
	break;
      }
    
    /* resetting elementary matrix */
    for (iHar = 0 ; iHar < NbrHar ; iHar++)
      for (jHar = OFFSET ; jHar <= iHar ; jHar++)
	E_MH[iHar][jHar] = 0. ;

    for (k = 0 ; k < Current.NbrHar ; k+=2) 
      Dof_GetComplexDofValue
	(QuantityStorage_P->FunctionSpace->DofData,
	 QuantityStorage_P->BasisFunction[j].Dof + k/2*gCOMPLEX_INCREMENT,
	 &Val_Dof[k], &Val_Dof[k+1]) ;

    /* time integration over fundamental period */
    for (iHar = 0 ; iHar < NbrHar ; iHar++)
      for (jHar = OFFSET ; jHar <= iHar ; jHar++)
	E_D[iHar][jHar] = 0. ;

    Current.NbrHar = 1;  /* evaluation in time domain */

    for (iTime = 0 ; iTime < NbrPointsX ; iTime++) {  
      
      t_Value.Type = SCALAR; 
      t_Value.Val[0] = 0; 
      for (iHar = 0 ; iHar < NbrHar ; iHar++)
	t_Value.Val[0] += H[iTime][iHar] * Val_Dof[iHar] ;
      
      Get_ValueOfExpression(Expression_P, QuantityStorage_P0, 
			    Current.u, Current.v, Current.w, &t_Value);
      
      for (iHar = 0 ; iHar < NbrHar ; iHar++)
	for (jHar = OFFSET  ; jHar <= iHar ; jHar++)
	  E_D[iHar][jHar] += HH[iTime][iHar][jHar] * t_Value.Val[0] ;
      

    }    /* for i_IntPoint ... */
                
    Current.NbrHar = NbrHar ;

    Jac = &Current.DofData->Jac;

    Dof = QuantityStorage_P->BasisFunction[0].Dof ;    

    for (iHar = 0 ; iHar < NbrHar ; iHar++)
      for (jHar = OFFSET ; jHar <= iHar ; jHar++){
	plus = plus0 = Factor * E_D[iHar][jHar] ;
	if(jHar==DcHarmonic && iHar!=DcHarmonic) { plus0 *= 1. ; plus *= 2. ;}
	Dof_AssembleInMat(Dof+iHar, Dof+jHar, 1, &plus, Jac, NULL) ;
	if(iHar != jHar)
	  Dof_AssembleInMat(Dof+jHar, Dof+iHar, 1, &plus0, Jac, NULL) ;
      }
      
    /* dummy 1's on the diagonal for sinus-term of dc-component */
    
    if (ZeroHarmonic) {
      Dof = QuantityStorage_P->BasisFunction[0].Dof + ZeroHarmonic ;
      Dof_AssembleInMat(Dof, Dof, 1, &one, Jac, NULL) ;
    }

  }
  else {

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
    
  }

    GetDP_End ;
}

#undef OFFSET

void  Cal_GlobalTermOfFemEquation_old(int  Num_Region,
				      struct EquationTerm     * EquationTerm_P,
				      struct QuantityStorage  * QuantityStorage_P0,
				      struct QuantityStorage  * QuantityStorageNoDof,
				      struct Dof              * DofForNoDof_P) {

  struct QuantityStorage  * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  struct Value              vBFxDof [1] ;
  struct Element  Element ;

  int     k ;
  double  Coefficient [NBR_MAX_HARMONIC] ;

  void (*Function_AssembleTerm)(struct Dof * Equ, struct Dof * Dof, double Val[]) = 0;

  GetDP_Begin("Cal_GlobalTermOfFemEquation");

  Element.Num = NO_ELEMENT ;

  switch (EquationTerm_P->Case.GlobalTerm.Term.TypeTimeDerivative) {
  case NODT_   : Function_AssembleTerm = Cal_AssembleTerm_NoDt    ; break ;
  case DTDOF_  :
  case DT_     : Function_AssembleTerm = Cal_AssembleTerm_DtDof   ; break ;
  case DTDTDOF_:
  case DTDT_   : Function_AssembleTerm = Cal_AssembleTerm_DtDtDof ; break ;
  case NEVERDT_: Function_AssembleTerm = Cal_AssembleTerm_NeverDt ; break ;
  case JACNL_  : Function_AssembleTerm = Cal_AssembleTerm_JacNL   ; break ;
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
