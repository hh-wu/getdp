// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego
//

#include <map>
#include <math.h>
#include "ProData.h"
#include "ProDefine.h"
#include "GeoData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "Cal_IntegralQuantity.h"
#include "Cal_AnalyticIntegration.h"
#include "Cal_AssembleTerm.h"
#include "Cal_GalerkinTermOfFemEquation.h"
#include "Get_DofOfElement.h"
#include "Get_ElementSource.h"
#include "Get_Geometry.h"
#include "Get_FunctionValue.h"
#include "Pos_Search.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

std::map<int, bool> assDiag_done;


/* ------------------------------------------------------------------------ */
/*  C a l _ I n i t G a l e r k i n T e r m O f F e m E q u a t i o n       */
/* ------------------------------------------------------------------------ */

void Cal_InitGalerkinTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				       struct QuantityStorage  * QuantityStorage_P0,
				       struct QuantityStorage  * QuantityStorageNoDof,
				       struct Dof              * DofForNoDof_P)
{
  struct FemLocalTermActive  * FI ;
  //extern int MH_Moving_Matrix_simple, MH_Moving_Matrix_probe, MH_Moving_Matrix_separate;
  extern int MHMoving_assemblyType ;

  FI = EquationTerm_P->Case.LocalTerm.Active ;

  FI->QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ;

  Get_InitFunctionValue(EquationTerm_P->Case.LocalTerm.Term.TypeOperatorEqu,
			FI->QuantityStorageEqu_P, &FI->Type_FormEqu) ;

  if (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof >= 0) {
    FI->QuantityStorageDof_P = QuantityStorage_P0 +
      EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof ;
    FI->Type_DefineQuantityDof = FI->QuantityStorageDof_P->DefineQuantity->Type ;
  }
  else {
    FI->QuantityStorageDof_P = QuantityStorageNoDof ;
    FI->Type_DefineQuantityDof = NODOF ;
    FI->DofForNoDof_P = DofForNoDof_P ;
    Dof_InitDofForNoDof(DofForNoDof_P, Current.NbrHar) ;
    QuantityStorageNoDof->BasisFunction[0].Dof = DofForNoDof_P ;
  }

  assDiag_done.clear();

  // check for potentially symmetrical elementary matrix
  FI->SymmetricalMatrix =
    (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ==
     EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof) &&
    (EquationTerm_P->Case.LocalTerm.Term.TypeOperatorEqu ==
     EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof) ;

  if(FI->SymmetricalMatrix){
    // nonsymmetric if we play with test functions
    if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ != CWQ_NONE){
      FI->SymmetricalMatrix = 0 ;
    }
    else{
      for(int i = 0; i < List_Nbr(EquationTerm_P->Case.LocalTerm.Term.WholeQuantity); i++){
        struct WholeQuantity *WholeQuantity_P = (struct WholeQuantity*)List_Pointer
          (EquationTerm_P->Case.LocalTerm.Term.WholeQuantity, i) ;
        // be on the safe side if we have a (noncommutative) vector product;
        // FIXME: we should only do this id one of the arguments is a Dof
        if(WholeQuantity_P->Type == WQ_BINARYOPERATOR &&
           WholeQuantity_P->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
          FI->SymmetricalMatrix = 0 ;
        // FIXME: we should detect nonsymmetric tensors
      }
    }
  }

  if (FI->SymmetricalMatrix) {
    FI->Type_FormDof = FI->Type_FormEqu ;
  }
  else {
    switch (FI->Type_DefineQuantityDof) {
    case LOCALQUANTITY :
      Get_InitFunctionValue(EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof,
			    FI->QuantityStorageDof_P, &FI->Type_FormDof) ;
      break ;
    case INTEGRALQUANTITY :
      if(EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof != NOOP){
	Message::Error("No operator can act on an Integral Quantity");
      }
      FI->Type_FormDof = VECTOR ; /* we don't know the type a priori */
      FI->IntegralQuantityActive.IntegrationCase_L =
	((struct IntegrationMethod *)
	 List_Pointer(Problem_S.IntegrationMethod,
		      FI->QuantityStorageDof_P->DefineQuantity->
		      IntegralQuantity.IntegrationMethodIndex)) ->IntegrationCase ;
      FI->IntegralQuantityActive.CriterionIndex =
	((struct IntegrationMethod *)
	 List_Pointer(Problem_S.IntegrationMethod,
		      FI->QuantityStorageDof_P->DefineQuantity->
		      IntegralQuantity.IntegrationMethodIndex)) ->CriterionIndex ;
      FI->IntegralQuantityActive.JacobianCase_L =
	((struct JacobianMethod *)
	 List_Pointer(Problem_S.JacobianMethod,
		      FI->QuantityStorageDof_P->DefineQuantity->
		      IntegralQuantity.JacobianMethodIndex)) ->JacobianCase ;
      break ;
    case NODOF :
      FI->Type_FormDof = SCALAR ;
      break ;
    }
  }

  FI->Type_ValueDof = Get_ValueFromForm(FI->Type_FormDof);

  /*  G e t   I n t e g r a t i o n   M e t h o d   */
  /*  --------------------------------------------  */

  if(EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex < 0){
    Message::Error("Integration method missing in equation term");
    FI->IntegrationCase_L = 0;
  }
  else{
    FI->IntegrationCase_L =
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
                    EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))
      ->IntegrationCase ;

    FI->CriterionIndex =
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
                    EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))
      ->CriterionIndex ;
  }

  /*  G e t   J a c o b i a n   M e t h o d   */
  /*  --------------------------------------  */

  if(EquationTerm_P->Case.LocalTerm.JacobianMethodIndex < 0){
    Message::Error("Jacobian method missing in equation term");
    FI->JacobianCase_L = 0;
  }
  else{
    FI->JacobianCase_L =
      ((struct JacobianMethod *)
       List_Pointer(Problem_S.JacobianMethod,
                    EquationTerm_P->Case.LocalTerm.JacobianMethodIndex))
      ->JacobianCase ;

    FI->JacobianCase_P0 =
      (FI->NbrJacobianCase = List_Nbr(FI->JacobianCase_L)) ?
      (struct JacobianCase*)List_Pointer(FI->JacobianCase_L, 0) : NULL ;
  }

  FI->Flag_ChangeCoord =
    ( FI->SymmetricalMatrix ||
      !(
        ( (FI->Type_FormEqu == FORM0 || FI->Type_FormEqu == FORM0P) &&
          (FI->Type_FormDof == FORM3 || FI->Type_FormDof == FORM3P) ) ||
        /*
          ( (FI->Type_FormEqu == FORM1 || FI->Type_FormEqu == FORM1P)  &&
          (FI->Type_FormDof == FORM2 || FI->Type_FormDof == FORM2P) ) ||
          ( (FI->Type_FormEqu == FORM2 || FI->Type_FormEqu == FORM2P)  &&
          (FI->Type_FormDof == FORM1 || FI->Type_FormDof == FORM1P) ) ||
        */
        ( (FI->Type_FormEqu == FORM3 || FI->Type_FormEqu == FORM3P) &&
          (FI->Type_FormDof == FORM0 || FI->Type_FormDof == FORM0P) )
        )
      )
    ||  /* For operators on VECTOR's (To be extended) */
    (FI->Type_FormEqu == VECTOR || FI->Type_FormDof == VECTOR)
    ||
    (FI->Type_DefineQuantityDof == INTEGRALQUANTITY) ;

  if (FI->Flag_ChangeCoord){
    FI->Flag_InvJac = ( (FI->Type_FormEqu == FORM1) ||
                        (!FI->SymmetricalMatrix && (FI->Type_FormDof == FORM1)) ||
                        /* For operators on VECTOR's (To be extended) */
                        (FI->Type_FormEqu == VECTOR || FI->Type_FormDof == VECTOR) ||
                        (EquationTerm_P->Case.LocalTerm.Term.QuantityIndexPost == 1) ) ;
  }

  /*  G e t   C h a n g e O f C o o r d i n a t e s   */
  /*  ----------------------------------------------  */

  FI->xChangeOfCoordinatesEqu =
    (void (*)())Get_ChangeOfCoordinates(FI->Flag_ChangeCoord, FI->Type_FormEqu) ;

  if (!FI->SymmetricalMatrix)
    FI->xChangeOfCoordinatesDof =
      (void (*)())Get_ChangeOfCoordinates(FI->Flag_ChangeCoord, FI->Type_FormDof) ;
  else
    FI->xChangeOfCoordinatesDof =
      (void (*)())Get_ChangeOfCoordinates(0, FI->Type_FormDof) ; /* Used only for transfer */


  /*  G e t   C a l _ P r o d u c t x  */
  /*  -------------------------------- */

  switch (FI->Type_FormEqu) {
  case FORM1   : case FORM1S :
  case FORM2   : case FORM2P : case FORM2S :
  case VECTOR  :
    FI->Cal_Productx = (double (*)())Cal_Product123 ; break ;
  case FORM1P  :
  case VECTORP :
    FI->Cal_Productx = (double (*)())Cal_Product3 ; break ;
  case FORM0   :
  case FORM3   :  case FORM3P :
  case SCALAR  :
    FI->Cal_Productx = (double (*)())Cal_Product1 ; break ;
  default      :
    Message::Error("Unknown type of Form (%d)", FI->Type_FormEqu);
    FI->Cal_Productx = (double (*)())Cal_Product123 ; break ;
  }

  /*  G e t   F u n c t i o n _ A s s e m b l e T e r m  */
  /*  -------------------------------------------------  */

  switch (EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative) {
  case NODT_          : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_NoDt         ; break;
  case DT_            : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_Dt           ; break;
  case DTDOF_         : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDof        ; break;
  case DTDT_          : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDt         ; break;
  case DTDTDOF_       : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDtDof      ; break;
  case DTDTDTDOF_     : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDtDtDof    ; break;
  case DTDTDTDTDOF_   : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDtDtDtDof  ; break;
  case DTDTDTDTDTDOF_ : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDtDtDtDtDof; break;
  case JACNL_         : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_JacNL        ; break;
  case DTDOFJACNL_    : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDofJacNL   ; break;
  case NEVERDT_       : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_NeverDt      ; break;
  case DTNL_          : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtNL         ; break;
  default             :
    Message::Error("Unknown type of Operator for Galerkin term (%d)",
                   EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative);
    FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_NoDt   ; break;
  }


  if(MHMoving_assemblyType)
    FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_MHMoving;

  /*
  if (MH_Moving_Matrix_simple) {
    FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_MH_Moving_simple ;
  }
  if (MH_Moving_Matrix_probe) {
    FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_MH_Moving_probe ;
  }
  if (MH_Moving_Matrix_separate) {
    FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_MH_Moving_separate ;
  }
*/

  /*  initialisation of MHJacNL-term (nonlinear multi-harmonics) if necessary */
  Cal_InitGalerkinTermOfFemEquation_MHJacNL(EquationTerm_P);

  /* Full_Matrix */
  if (EquationTerm_P->Case.LocalTerm.Full_Matrix) {
    FI->Full_Matrix = 1;
    FI->FirstElements = List_Create(20, 10, sizeof(struct FirstElement)) ;
  }
}


/* ------------------------------------------------------------------------ */
/*  C a l _ E n d G a l e r k i n T e r m O f F e m E q u a t i o n         */
/* ------------------------------------------------------------------------ */

void Cal_EndGalerkinTermOfFemEquation()
{
  assDiag_done.clear();
}


/* ------------------------------------------------------------------------ */
/*  C a l _ a p p l y M e t r i c T e n s o r                               */
/* ------------------------------------------------------------------------ */

void Cal_applyMetricTensor(struct EquationTerm       * EquationTerm_P,
                           struct FemLocalTermActive * FI,
                           struct QuantityStorage    * QuantityStorage_P0,
                           int                         Nbr_Dof,
                           struct Value                vBFxDof[])
{
  int           j;
  int           mi;
  struct Value  S;
  struct Value  detS;

  mi = EquationTerm_P->Case.LocalTerm.ExpressionIndexForMetricTensor;
  if(mi == -1) return;
  Get_ValueOfExpression
    ((struct Expression*)List_Pointer(Problem_S.Expression, mi),
     QuantityStorage_P0, Current.u, Current.v, Current.w, &S) ;

  if(S.Type == SCALAR) {
    S.Type = TENSOR_DIAG;
    S.Val[1] = S.Val[0];
    S.Val[2] = S.Val[0];
  }
  if(S.Type != TENSOR_SYM && S.Type != TENSOR && S.Type != TENSOR_DIAG) {
    Message::Error("Cannot interpret field type %s as metric tensor",
                   Get_StringForDefine(Field_Type, S.Type));
    return;
  }

  Cal_DetValue(&S, &detS);
  detS.Val[0] = sqrt(fabs(detS.Val[0]));

  switch (FI->Type_FormDof) {
  case FORM1 : case FORM1S : case FORM1P :
    Cal_InvertValue(&S, &S);
    for (j = 0 ; j < Nbr_Dof ; j++) {
      Cal_ProductValue(&S, &vBFxDof[j], &vBFxDof[j]);
      Cal_ProductValue(&detS, &vBFxDof[j], &vBFxDof[j]);
    }
    break;
  case FORM2 : case FORM2S : case FORM2P :
    Cal_InvertValue(&detS, &detS);
    for (j = 0 ; j < Nbr_Dof ; j++) {
      Cal_ProductValue(&S, &vBFxDof[j], &vBFxDof[j]);
      Cal_ProductValue(&detS, &vBFxDof[j], &vBFxDof[j]);
    }
    break;
  case FORM3 : case FORM3S : case FORM3P :
    Cal_InvertValue(&detS, &detS);
    for (j = 0 ; j < Nbr_Dof ; j++) {
      Cal_ProductValue(&detS, &vBFxDof[j], &vBFxDof[j]);
    }
    break;
  case FORM0 : case FORM0S : case FORM0P :
    for (j = 0 ; j < Nbr_Dof ; j++) {
      Cal_ProductValue(&detS, &vBFxDof[j], &vBFxDof[j]);
    }
    break;
  default:
    Message::Error("Cannot use metric tensor with field type %s",
                   Get_StringForDefine(Field_Type, FI->Type_FormDof));
    break;
  }
}


/* ------------------------------------------------------------------------ */
/*  C a l _ v B F x D o f                                                   */
/* ------------------------------------------------------------------------ */

void Cal_vBFxDof(struct EquationTerm       * EquationTerm_P,
		 struct FemLocalTermActive * FI,
		 struct QuantityStorage    * QuantityStorage_P0,
		 struct QuantityStorage    * QuantityStorageDof_P,
		 int                         Nbr_Dof,
		 void (*xFunctionBFDof[NBR_MAX_BASISFUNCTIONS])
		 (struct Element * Element, int NumEntity,
		  double u, double v, double w, double Value[]),
		 double vBFxEqu[][MAX_DIM],
		 struct Value vBFxDof[])
{
  double         vBFuDof[NBR_MAX_BASISFUNCTIONS] [MAX_DIM] ;
  double         u, v, w ;
  struct Value   CoefPhys ;
  struct Element *E ;
  int  i, j ;

  if(EquationTerm_P->Case.LocalTerm.Term.DofInTrace){
    E = Current.Element->ElementTrace ;
    Current.x = Current.y = Current.z = 0. ;
    for (i = 0 ; i < Current.Element->GeoElement->NbrNodes ; i++) {
      Current.x += Current.Element->x[i] * Current.Element->n[i] ;
      Current.y += Current.Element->y[i] * Current.Element->n[i] ;
      Current.z += Current.Element->z[i] * Current.Element->n[i] ;
    }
    xyz2uvwInAnElement(E, Current.x, Current.y, Current.z,
		       &Current.ut, &Current.vt, &Current.wt) ;
    u = Current.ut ;
    v = Current.vt ;
    w = Current.wt ;
  }
  else{
    E = Current.Element ;
    u = Current.u ;
    v = Current.v ;
    w = Current.w ;
  }

  // initialize vBFxDof to zero; this allows to perform e.g. [0, {d u}] without
  // having to explicitly use [Vector[0,0,0], {d u}] ; if this is too slow, we
  // should check vBFxDof[j].Type against FI->Type_FormEqu before calling
  // FI->Cal_Productx to report errors
  for (j = 0 ; j < Nbr_Dof ; j++)
    Cal_ZeroValue(&vBFxDof[j]);

  // shape functions, integral quantity or dummy

  if (!FI->SymmetricalMatrix) {

    switch (FI->Type_DefineQuantityDof) {
    case LOCALQUANTITY :
      for (j = 0 ; j < Nbr_Dof ; j++) {
	xFunctionBFDof[j]
	  (E,
	   QuantityStorageDof_P->BasisFunction[j].NumEntityInElement+1,
	   u, v, w, vBFuDof[j]) ;
	((void (*)(struct Element*, double*, double*))
	 FI->xChangeOfCoordinatesDof) (E, vBFuDof[j], vBFxDof[j].Val) ;
	vBFxDof[j].Type = FI->Type_ValueDof ;
	if(Current.NbrHar > 1) Cal_SetHarmonicValue(&vBFxDof[j]) ;


	/* temp (rather add QuantityStorage_P to CurrentData) */
	Current.NumEntities[j] =
	  QuantityStorageDof_P->BasisFunction[j].CodeEntity;
      }
      break ;
    case INTEGRALQUANTITY :
      if (FI->IntegralQuantityActive.IntegrationCase_P->Type == ANALYTIC)
	Cal_AnalyticIntegralQuantity (Current.Element,
				      QuantityStorageDof_P, Nbr_Dof,
				      (void (**)())xFunctionBFDof, vBFxDof) ;

      else
	Cal_NumericalIntegralQuantity (Current.Element,
				       &FI->IntegralQuantityActive,
				       QuantityStorage_P0, QuantityStorageDof_P,
				       FI->Type_DefineQuantityDof, Nbr_Dof,
				       (void (**)())xFunctionBFDof, vBFxDof) ;
      FI->Type_ValueDof = FI->Type_FormDof = vBFxDof[0].Type; /* now this type is correct */
      break ;
    case NODOF :  /* Supprimer le DofForNoDof_P de la structure dans Data_Active.h */
      /*      QuantityStorageDof_P->BasisFunction[0].Dof = FI->DofForNoDof_P ; */
      break ;
    }
  }
  else {
    for (j = 0 ; j < Nbr_Dof ; j++){
      ((void (*)(struct Element*, double*, double*))
       FI->xChangeOfCoordinatesDof) (Current.Element, vBFxEqu[j], vBFxDof[j].Val) ;
      vBFxDof[j].Type = FI->Type_ValueDof ;
      if(Current.NbrHar > 1) Cal_SetHarmonicValue(&vBFxDof[j]) ;
    }
  }

  /* Compute remaining factors in the term */

  if (EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity ==
      CWQ_DOF) {
  }
  else if (EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity ==
	   CWQ_EXP_TIME_DOF) {
    Get_ValueOfExpression
      ((struct Expression*)List_Pointer
       (Problem_S.Expression,
	EquationTerm_P->Case.LocalTerm.Term.ExpressionIndexForCanonical),
       QuantityStorage_P0, Current.u, Current.v, Current.w,
       &CoefPhys) ;
    for (j = 0 ; j < Nbr_Dof ; j++)
      Cal_ProductValue(&CoefPhys, &vBFxDof[j], &vBFxDof[j]) ;
  }
  else
    Cal_WholeQuantity
      (Current.Element, QuantityStorage_P0,
       EquationTerm_P->Case.LocalTerm.Term.WholeQuantity,
       Current.u, Current.v, Current.w,
       EquationTerm_P->Case.LocalTerm.Term.DofIndexInWholeQuantity,
       Nbr_Dof, vBFxDof) ;

  /* Compute using metric tensor if defined */
  Cal_applyMetricTensor(EquationTerm_P, FI, QuantityStorage_P0,
                        Nbr_Dof, vBFxDof);

}

/* ------------------------------------------------------------------------ */
/*  C a l _ T e r m O f F e m E q u a t i o n                               */
/* ------------------------------------------------------------------------ */

void  Cal_GalerkinTermOfFemEquation(struct Element          * Element,
				    struct EquationTerm     * EquationTerm_P,
				    struct QuantityStorage  * QuantityStorage_P0)
{
  struct FemLocalTermActive * FI ;
  struct QuantityStorage    * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  struct IntegrationCase    * IntegrationCase_P ;
  struct Quadrature         * Quadrature_P ;
  struct Value                vBFxDof [NBR_MAX_BASISFUNCTIONS], CoefPhys ;
  struct Value                CanonicExpression_Equ, V1, V2;

  int     Nbr_Equ, Nbr_Dof = 0;
  int     i, j, k, Type_Dimension, Nbr_IntPoints, i_IntPoint ;
  int     NextElement ;

  double  weight, Factor = 1. ;
  double  vBFuEqu [NBR_MAX_BASISFUNCTIONS] [MAX_DIM] ;
  double  vBFxEqu [NBR_MAX_BASISFUNCTIONS] [MAX_DIM] ;
  double  Ek [NBR_MAX_BASISFUNCTIONS] [NBR_MAX_BASISFUNCTIONS] [NBR_MAX_HARMONIC] ;

  void (*xFunctionBFEqu[NBR_MAX_BASISFUNCTIONS])
    (struct Element * Element, int NumEntity,
     double u, double v, double w, double Value[] ) ;
  void (*xFunctionBFDof[NBR_MAX_BASISFUNCTIONS])
    (struct Element * Element, int NumEntity,
     double u, double v, double w, double Value[] ) ;
  double (*Get_Jacobian)(struct Element*, MATRIX3x3*) ;
  void (*Get_IntPoint)(int,int,double*,double*,double*,double*);

  extern int Flag_RHS;

  Current.flagAssDiag = 0; /*+++prov*/

  FI = EquationTerm_P->Case.LocalTerm.Active ;

  /* treatment of MHJacNL-term in separate routine */
  if (FI->MHJacNL) {
    /* if only the RHS of the system is to be calculated
       (in case of adaptive relaxation of the Newton-Raphson scheme)
       the (expensive and redundant) calculation of this term can be skipped */
    if (!Flag_RHS)
      Cal_GalerkinTermOfFemEquation_MHJacNL(Element, EquationTerm_P, QuantityStorage_P0) ;
    return;
  }

  QuantityStorageEqu_P = FI->QuantityStorageEqu_P ;
  QuantityStorageDof_P = FI->QuantityStorageDof_P ;

  /* skip computation completely if term does not contribute to RHS. This is OK,
     but the speed-up is not the best, due to the time-consuming--but
     necessary-- initializations that still need to be done before arriving at
     this point in the assembly process. For best performance use
     GenerateRHSGroup instead of GenerateRHS, and include any RHS-contributions
     (elements containing fixed dofs or non-dof expressions) in the given
     groups  */
  if(Current.DofData->Flag_RHS){
    if(FI->Type_DefineQuantityDof == LOCALQUANTITY){
      bool skip = true;
      int Nbr_Dof = FI->SymmetricalMatrix ? QuantityStorageEqu_P->NbrElementaryBasisFunction :
        QuantityStorageDof_P->NbrElementaryBasisFunction;
      for (int j = 0 ; j < Nbr_Dof ; j++){
        Dof *Dof_P = QuantityStorageDof_P->BasisFunction[j].Dof;
        if(Dof_P->Type != DOF_UNKNOWN){
          skip = false;
          break;
        }
      }
      if(skip) return;
    }
  }

  /*  ----------------------------------------------------------------------  */
  /*  G e t   F u n c t i o n V a l u e  f o r  t e s t  f u n c t i o n s    */
  /*  ----------------------------------------------------------------------  */

  if (!(Nbr_Equ = QuantityStorageEqu_P->NbrElementaryBasisFunction)) {
    return ;
  }

  if(Nbr_Equ > NBR_MAX_BASISFUNCTIONS)
    Message::Fatal("Number of basis functions (%d) exceeds NBR_MAX_BASISFUNCTIONS: "
                   "please recompile after changing Interface/ProData.h", Nbr_Equ);

  Get_FunctionValue(Nbr_Equ, (void (**)())xFunctionBFEqu,
		    EquationTerm_P->Case.LocalTerm.Term.TypeOperatorEqu,
		    QuantityStorageEqu_P, &FI->Type_FormEqu) ;

  /*  ----------------------------------------------------------------------  */
  /*  G e t   F u n c t i o n V a l u e  f o r  s h a p e  f u n c t i o n s  */
  /*  ----------------------------------------------------------------------  */

  if (FI->SymmetricalMatrix){
    Nbr_Dof = Nbr_Equ ;
  }
  else{
    switch (FI->Type_DefineQuantityDof) {
    case LOCALQUANTITY :
      Nbr_Dof = QuantityStorageDof_P->NbrElementaryBasisFunction ;
      Get_FunctionValue(Nbr_Dof, (void (**)())xFunctionBFDof,
			EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof,
			QuantityStorageDof_P, &FI->Type_FormDof) ;
      break ;
    case INTEGRALQUANTITY :
      Get_InitElementSource(Element,
			    QuantityStorageDof_P->DefineQuantity->IntegralQuantity.InIndex) ;
      break ;
    case NODOF :
      Nbr_Dof = 1 ;
      break ;
    }
  }

  /*  -------------------------------------------------------------------  */
  /*  G e t   I n t e g r a t i o n   M e t h o d                          */
  /*  -------------------------------------------------------------------  */

  IntegrationCase_P =
    Get_IntegrationCase(Element, FI->IntegrationCase_L, FI->CriterionIndex);

  /*  -------------------------------------------------------------------  */
  /*  G e t   J a c o b i a n   M e t h o d                                */
  /*  -------------------------------------------------------------------  */

  i = 0 ;
  while ((i < FI->NbrJacobianCase) &&
	 ((j = (FI->JacobianCase_P0 + i)->RegionIndex) >= 0) &&
	 !List_Search
	 (((struct Group *)List_Pointer(Problem_S.Group, j))
	  ->InitialList, &Element->Region, fcmp_int) )  i++ ;

  if (i == FI->NbrJacobianCase){
    Message::Error("Undefined Jacobian in Region %d", Element->Region);
    return;
  }

  Element->JacobianCase = FI->JacobianCase_P0 + i ;

  Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
    Get_JacobianFunction(Element->JacobianCase->TypeJacobian,
			 Element->Type, &Type_Dimension) ;

  if (FI->Flag_ChangeCoord)
    Get_NodesCoordinatesOfElement(Element) ;

  if (Element->JacobianCase->CoefficientIndex < 0){
    FI->CoefJac = 1.;
  }
  else{
    Get_ValueOfExpressionByIndex(Element->JacobianCase->CoefficientIndex,
                                 NULL, 0., 0., 0., &CoefPhys) ;
    FI->CoefJac = CoefPhys.Val[0];
  }

  /*  ------------------------------------------------------------------------  */
  /*  ------------------------------------------------------------------------  */
  /*  C o m p u t a t i o n   o f   E l e m e n t a r y   m a t r i x           */
  /*  ------------------------------------------------------------------------  */
  /*  ------------------------------------------------------------------------  */


  /* Loop on source elements (> 1 only if integral quantity) */

  while (1) {

    if (FI->Type_DefineQuantityDof == INTEGRALQUANTITY) {

      NextElement = Get_NextElementSource(Element->ElementSource) ;

      if (NextElement) {
	/* Get DOF of source element */

	Get_DofOfElement(Element->ElementSource,
			 QuantityStorageDof_P->FunctionSpace,
			 QuantityStorageDof_P, NULL) ;

	/* Get function value for shape function */

	Get_NodesCoordinatesOfElement(Element->ElementSource) ;
	Nbr_Dof = QuantityStorageDof_P->NbrElementaryBasisFunction ;
	Get_FunctionValue
	  (Nbr_Dof, (void (**)())xFunctionBFDof,
	   QuantityStorageDof_P->DefineQuantity->IntegralQuantity.TypeOperatorDof,
	   QuantityStorageDof_P, &FI->IntegralQuantityActive.Type_FormDof) ;

	/* Initialize Integral Quantity (integration & jacobian) */

	Cal_InitIntegralQuantity(Element, &FI->IntegralQuantityActive,
				   QuantityStorageDof_P);
      }
      else {
	break ;
      } /* if NextElement */
    } /* if INTEGRALQUANTITY */


    if (FI->SymmetricalMatrix)
      for (i = 0 ; i < Nbr_Equ ; i++)  for (j = 0 ; j <= i      ; j++)
	for (k = 0 ; k < Current.NbrHar ; k++)  Ek[i][j][k] = 0. ;
    else
      for (i = 0 ; i < Nbr_Equ ; i++)  for (j = 0 ; j < Nbr_Dof ; j++)
	for (k = 0 ; k < Current.NbrHar ; k++)  Ek[i][j][k] = 0. ;


    switch (IntegrationCase_P->Type) {

      /*  -------------------------------------  */
      /*  Q U A D R A T U R E                    */
      /*  -------------------------------------  */

    case GAUSS :
    case GAUSSLEGENDRE :

      Quadrature_P = (struct Quadrature*)
	List_PQuery(IntegrationCase_P->Case, &Element->Type, fcmp_int);

      if(!Quadrature_P)
	Message::Error
	  ("Unknown type of Element (%s) for Integration method (%s)",
	   Get_StringForDefine(Element_Type, Element->Type),
	   ((struct IntegrationMethod *)
	    List_Pointer(Problem_S.IntegrationMethod,
			 EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))->Name);

      Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
      Get_IntPoint  = (void(*)(int,int,double*,double*,double*,double*))
	Quadrature_P->Function ;


      for (i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {

        Current.QuadraturePointIndex = i_IntPoint;

	Get_IntPoint(Nbr_IntPoints, i_IntPoint,
		     &Current.u, &Current.v, &Current.w, &weight) ;

	if (FI->Flag_ChangeCoord) {
	  Get_BFGeoElement(Element, Current.u, Current.v, Current.w) ;

	  Element->DetJac = Get_Jacobian(Element, &Element->Jac) ;

	  if (FI->Flag_InvJac)
	    Get_InverseMatrix(Type_Dimension, Element->Type, Element->DetJac,
			      &Element->Jac, &Element->InvJac) ;
	}

	/* Test Functions */

	if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ == CWQ_EXP_TIME_DOF)
	  Get_ValueOfExpressionByIndex
	    (EquationTerm_P->Case.LocalTerm.Term.ExpressionIndexForCanonical_Equ,
	     QuantityStorage_P0, Current.u, Current.v, Current.w, &CanonicExpression_Equ) ;

	for (i = 0 ; i < Nbr_Equ ; i++) {
	  xFunctionBFEqu[i]
	    (Element,
	     QuantityStorageEqu_P->BasisFunction[i].NumEntityInElement+1,
	     Current.u, Current.v, Current.w, vBFuEqu[i]) ;
	  ((void (*)(struct Element*, double*, double*))
	   FI->xChangeOfCoordinatesEqu) (Element, vBFuEqu[i], vBFxEqu[i]) ;


	  if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ != CWQ_NONE){
	    V1.Type = Get_ValueFromForm(FI->Type_FormEqu);
	    V1.Val[0]         = vBFxEqu[i][0] ;
	    V1.Val[1]         = vBFxEqu[i][1] ;
	    V1.Val[2]         = vBFxEqu[i][2] ;
	    V1.Val[MAX_DIM]   = 0;
	    V1.Val[MAX_DIM+1] = 0;
	    V1.Val[MAX_DIM+2] = 0;

	    if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ ==
	       CWQ_EXP_TIME_DOF){
	      switch(EquationTerm_P->Case.LocalTerm.Term.OperatorTypeForCanonical_Equ){
	      case OP_TIME :
		Cal_ProductValue (&CanonicExpression_Equ,&V1,&V2);
		break;
	      case OP_CROSSPRODUCT :
		Cal_CrossProductValue (&CanonicExpression_Equ,&V1,&V2);
		break;
	      default :
		Message::Error("Unknown operation in Equation");
                break;
	      }
	    }
	    else if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ ==
		    CWQ_FCT_DOF){
	      ((void(*)(struct Function*, struct Value*, struct Value*))
	       EquationTerm_P->Case.LocalTerm.Term.BuiltInFunction_Equ)
		(NULL, &V1, &V2) ;
	    }
	    vBFxEqu[i][0] = V2.Val[0];
	    vBFxEqu[i][1] = V2.Val[1];
	    vBFxEqu[i][2] = V2.Val[2];
	  }

	} /* for Nbr_Equ */


	/* Shape Functions (+ surrounding expression) */

	Current.Element = Element ;
	Cal_vBFxDof(EquationTerm_P, FI,
		    QuantityStorage_P0, QuantityStorageDof_P,
		    Nbr_Dof, xFunctionBFDof, vBFxEqu, vBFxDof);

	Factor = FI->CoefJac *
          ((FI->Flag_ChangeCoord) ? weight * fabs(Element->DetJac) : weight) ;

	/* Product and assembly in elementary submatrix             (k?-1.:1.)*   */
	if (FI->SymmetricalMatrix)
	  for (i = 0 ; i < Nbr_Equ ; i++)  for (j = 0 ; j <= i ; j++)
            for (k = 0 ; k < Current.NbrHar ; k++)
	      Ek[i][j][k] += Factor *
		((double (*)(double*, double*))
		 FI->Cal_Productx) (vBFxEqu[i], &(vBFxDof[j].Val[MAX_DIM*k])) ;
	else
	  for (i = 0 ; i < Nbr_Equ ; i++)  for (j = 0 ; j < Nbr_Dof ; j++)
	    for (k = 0 ; k < Current.NbrHar ; k++)
	      Ek[i][j][k] += Factor *
		((double (*)(double*, double*))
		 FI->Cal_Productx) (vBFxEqu[i], &(vBFxDof[j].Val[MAX_DIM*k]));

      }  /* for i_IntPoint ... */
      break ; /* case GAUSS */


      /*  -------------------------------------  */
      /*  A N A L Y T I C                        */
      /*  -------------------------------------  */

    case ANALYTIC :

      if (EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity ==
	  CWQ_DOF) {
	Factor = 1. ;
      }
      if (EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity ==
	  CWQ_EXP_TIME_DOF) {
	if (EquationTerm_P->Case.LocalTerm.Term.ExpressionIndexForCanonical >= 0) {
	  Get_ValueOfExpression
	    ((struct Expression *)List_Pointer
	     (Problem_S.Expression,
	      EquationTerm_P->Case.LocalTerm.Term.ExpressionIndexForCanonical),
	     QuantityStorage_P0, 0., 0., 0., &CoefPhys) ;
	  Factor = CoefPhys.Val[0] ;
	}
      }
      else {
	Message::Error("Bad expression for full analytic integration");
      }

      if (FI->SymmetricalMatrix) {
	for (i = 0 ; i < Nbr_Equ ; i++)  for (j = 0 ; j <= i ; j++)
	  Ek[i][j][0] = Factor *
	    Cal_AnalyticIntegration
	    (Element, (void (*)())xFunctionBFEqu[i], (void (*)())xFunctionBFEqu[j], i, j,
	     FI->Cal_Productx) ;
      }
      else {
	switch (FI->Type_DefineQuantityDof) {
	case LOCALQUANTITY :
	  for (i = 0 ; i < Nbr_Equ ; i++)  for (j = 0 ; j < Nbr_Dof ; j++)
	    Ek[i][j][0] = Factor *
	      Cal_AnalyticIntegration
	      (Element, (void (*)())xFunctionBFEqu[i], (void (*)())xFunctionBFDof[j], i, j,
	       FI->Cal_Productx) ;
	  break;
	default :
	  Message::Error("Exterior analytical integration not implemented");
	  break;
	}
      }

      break ; /* case ANALYTIC */

    default :
      Message::Error
	("Unknown type of Integration method (%s)",
	 ((struct IntegrationMethod *)
	  List_Pointer(Problem_S.IntegrationMethod,
		       EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))->Name);
      break;

    }

    /* Complete elementary matrix if symmetrical */
    /* ----------------------------------------- */

    if (FI->SymmetricalMatrix)
      for (i = 1 ; i < Nbr_Equ ; i++)
	for (j = 0 ; j < i ; j++)
	  for (k = 0 ; k < Current.NbrHar ; k++)
	    Ek[j][i][k] = Ek[i][j][k] ;

    if(Message::GetVerbosity() == 10) {
      printf("Galerkin = ") ;
      for (j = 0 ; j < Nbr_Dof ; j++)
	Print_DofNumber(QuantityStorageDof_P->BasisFunction[j].Dof) ;
      printf("\n") ;
      for (i = 0 ; i < Nbr_Equ ; i++) {
	Print_DofNumber(QuantityStorageEqu_P->BasisFunction[i].Dof) ;
	printf("[ ") ;
	for (j = 0 ; j < Nbr_Dof ; j++) {
	  printf("(") ;
	  for(k = 0 ; k < Current.NbrHar ; k++) printf("% .5e ", Ek[i][j][k]) ;
	  printf(")") ;
	}
	printf("]\n") ;
      }
    }

    /* Assembly in global matrix */
    /* ------------------------- */
    if (!Current.flagAssDiag) /*+++prov*/
    for (i = 0 ; i < Nbr_Equ ; i++)
      for (j = 0 ; j < Nbr_Dof ; j++)
	((void (*)(struct Dof*, struct Dof*, double*))
	 FI->Function_AssembleTerm)
	  (QuantityStorageEqu_P->BasisFunction[i].Dof,
	   QuantityStorageDof_P->BasisFunction[j].Dof,  Ek[i][j]) ;
    else if (Current.flagAssDiag == 1) {
      for (i = 0 ; i < Nbr_Equ ; i++) {
	/*      for (j = 0 ; j < Nbr_Dof ; j++)*/
	j = i;
	((void (*)(struct Dof*, struct Dof*, double*))
	 FI->Function_AssembleTerm)
	  (QuantityStorageEqu_P->BasisFunction[i].Dof,
	   QuantityStorageDof_P->BasisFunction[j].Dof,  Ek[i][j]) ;
      }
    }
    else if (Current.flagAssDiag == 2) {
      for (i = 0 ; i < Nbr_Equ ; i++) {
	/*      for (j = 0 ; j < Nbr_Dof ; j++)*/
	j = i;
        if (QuantityStorageEqu_P->BasisFunction[i].Dof->Type == DOF_UNKNOWN
            &&
            assDiag_done.find
            (QuantityStorageEqu_P->BasisFunction[i].Dof->Case.Unknown.NumDof-1)
            == assDiag_done.end()) {
          assDiag_done
            [QuantityStorageEqu_P->BasisFunction[i].Dof->Case.Unknown.NumDof-1] = true;
          Ek[i][j][0] = 1.;
          for (k = 1 ; k < Current.NbrHar ; k++)  Ek[i][j][k] = 0. ;
          ((void (*)(struct Dof*, struct Dof*, double*))
           FI->Function_AssembleTerm)
            (QuantityStorageEqu_P->BasisFunction[i].Dof,
             QuantityStorageDof_P->BasisFunction[j].Dof,  Ek[i][j]) ;
        }
      }
    }


    /* Exit while(1) directly if not integral quantity */

    if (FI->Type_DefineQuantityDof != INTEGRALQUANTITY)  break ;

  }  /* while (1) ... */

  Current.flagAssDiag = 0; /*+++prov*/

}
