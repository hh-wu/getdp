// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "GeoData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "Cal_AssembleTerm.h"
#include "Get_DofOfElement.h"
#include "Get_Geometry.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

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
				  struct Dof              * DofForNoDof_P)
{
  struct FemGlobalTermActive  * FI ;
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

  double  E_D [NBR_MAX_HARMONIC][NBR_MAX_HARMONIC] ;
  struct Dof * Dof;
  struct Value t_Value;
  gMatrix * Jac;
  struct QuantityStorage    * QuantityStorage_P;

  FI = EquationTerm_P->Case.GlobalTerm.Active ;

  Element.Num = NO_ELEMENT ;

  switch (EquationTerm_P->Case.GlobalTerm.Term.TypeTimeDerivative) {
  case NODT_          : Function_AssembleTerm = Cal_AssembleTerm_NoDt      			   ; break ;
  case DTDOF_         : Function_AssembleTerm = Cal_AssembleTerm_DtDof     			   ; break ;
  case DT_            : Function_AssembleTerm = Cal_AssembleTerm_Dt        			   ; break ;
  case DTDTDOF_       : Function_AssembleTerm = Cal_AssembleTerm_DtDtDof   			   ; break ;
  case DTDT_          : Function_AssembleTerm = Cal_AssembleTerm_DtDt      			   ; break ;
  case DTDTDTDOF_     : Function_AssembleTerm = Cal_AssembleTerm_DtDtDtDof         ; break ;
  case DTDTDTDTDOF_   : Function_AssembleTerm = Cal_AssembleTerm_DtDtDtDtDof       ; break ;
  case DTDTDTDTDTDOF_ : Function_AssembleTerm = Cal_AssembleTerm_DtDtDtDtDtDof     ; break ;
  case NEVERDT_       : Function_AssembleTerm = Cal_AssembleTerm_NeverDt   			   ; break ;
  case JACNL_         : Function_AssembleTerm = Cal_AssembleTerm_JacNL     			   ; break ;
  case DTDOFJACNL_    : Function_AssembleTerm = Cal_AssembleTerm_DtDofJacNL			   ; break ;
  default 						:  Message::Error("Unknown type of operator for Global term"); return;
  }

  //+++ Num_Region, QuantityStorage_P0: not used any more
  QuantityStorageEqu_P = FI->QuantityStorageEqu_P;
  QuantityStorageDof_P = FI->QuantityStorageDof_P;
  if (!QuantityStorageDof_P) {
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
    if(Message::GetVerbosity() == 10)
      Message::Info("MHJacNL in Global term");
    if (QuantityStorageEqu_P != QuantityStorageDof_P){
      Message::Error("Global term with MHJacNL is not symmetric ?!");
      return;
    }

    QuantityStorage_P = QuantityStorageEqu_P ;

    if (List_Nbr(WholeQuantity_L) == 4){
      if (i_WQ != 1 ||
	  EquationTerm_P->Case.GlobalTerm.Term.DofIndexInWholeQuantity != 2 ||
	  (WholeQuantity_P0 + 3)->Type != WQ_BINARYOPERATOR ||
	  (WholeQuantity_P0 + 3)->Case.Operator.TypeOperator != OP_TIME){
	Message::Error("Not allowed expression in Global term with MHJacNL (case 1)");
        return;
      }
      Factor = 1.;
    }
    else if (List_Nbr(WholeQuantity_L) == 6){
      if ((WholeQuantity_P0 + 0)->Type != WQ_CONSTANT ||
	  i_WQ != 2 ||
	  (WholeQuantity_P0 + 3)->Type != WQ_BINARYOPERATOR ||
	  (WholeQuantity_P0 + 3)->Case.Operator.TypeOperator != OP_TIME ||
	  EquationTerm_P->Case.GlobalTerm.Term.DofIndexInWholeQuantity != 3 ||
	  (WholeQuantity_P0 + 5)->Type != WQ_BINARYOPERATOR ||
	  (WholeQuantity_P0 + 5)->Case.Operator.TypeOperator != OP_TIME){
	Message::Error("Not allowed expression in Global term with MHJacNL (case 2)");
        return;
      }
      Factor = WholeQuantity_P0->Case.Constant ;
    }
    else {
      Message::Error("Not allowed expression in Global term with MHJacNL (%d terms) ",
                     List_Nbr(WholeQuantity_L));
      return;
    }

    if (EquationTerm_P->Case.GlobalTerm.Term.TypeTimeDerivative != JACNL_){
      Message::Error("MHJacNL can only be used with JACNL") ;
      return;
    }

    Expression_P = (struct Expression *)List_Pointer
      (Problem_S.Expression, (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.Index) ;

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
			    Current.u, Current.v, Current.w, &t_Value, 1); //To generalize: Function in MHJacNL has 1 argument (e.g. Resistance[{Iz}])

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
}

#undef OFFSET

void  Cal_GlobalTermOfFemEquation_old(int  Num_Region,
				      struct EquationTerm     * EquationTerm_P,
				      struct QuantityStorage  * QuantityStorage_P0,
				      struct QuantityStorage  * QuantityStorageNoDof,
				      struct Dof              * DofForNoDof_P)
{
  struct QuantityStorage  * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  struct Value              vBFxDof [1] ;
  struct Element  Element ;

  int     k ;
  double  Coefficient [NBR_MAX_HARMONIC] ;

  void (*Function_AssembleTerm)(struct Dof * Equ, struct Dof * Dof, double Val[]) = 0;

  Element.Num = NO_ELEMENT ;

  switch (EquationTerm_P->Case.GlobalTerm.Term.TypeTimeDerivative) {
  case NODT_         : Function_AssembleTerm = Cal_AssembleTerm_NoDt          ; break ;
  case DTDOF_        : Function_AssembleTerm = Cal_AssembleTerm_DtDof         ; break ;
  case DT_           : Function_AssembleTerm = Cal_AssembleTerm_Dt            ; break ;
  case DTDTDOF_      : Function_AssembleTerm = Cal_AssembleTerm_DtDtDof       ; break ;
  case DTDT_         : Function_AssembleTerm = Cal_AssembleTerm_DtDt          ; break ;
  case DTDTDTDOF_    : Function_AssembleTerm = Cal_AssembleTerm_DtDtDtDof     ; break ; 
	case DTDTDTDTDOF_  : Function_AssembleTerm = Cal_AssembleTerm_DtDtDtDtDof   ; break ; 
	case DTDTDTDTDTDOF_: Function_AssembleTerm = Cal_AssembleTerm_DtDtDtDtDtDof ; break ; 
	case NEVERDT_      : Function_AssembleTerm = Cal_AssembleTerm_NeverDt       ; break ;
  case JACNL_        : Function_AssembleTerm = Cal_AssembleTerm_JacNL         ; break ;
  case DTDOFJACNL_   : Function_AssembleTerm = Cal_AssembleTerm_DtDofJacNL    ; break ;
  default : Message::Error("Unknown type of operator for Global term")        ; return ;
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
}
