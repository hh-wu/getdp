#define RCSID "$Id: Cal_GalerkinTermOfFemEquation.c,v 1.21 2003-11-20 09:29:36 dular Exp $"
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to "getdp@geuz.org".
 *
 * Contributor(s):
 *   Johan Gyselinck
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Get_DofOfElement.h"
#include "Get_Geometry.h"
#include "Data_DefineE.h"
#include "GeoData.h"
#include "CurrentData.h"
#include "Tools.h"
#include "F_FMM.h"


void  Cal_InitGalerkinTermOfFemEquation_MHJacNL(struct EquationTerm  * EquationTerm_P) ;
void  Cal_GalerkinTermOfFemEquation_MHJacNL(struct Element          * Element,
					    struct EquationTerm     * EquationTerm_P,
					    struct QuantityStorage  * QuantityStorage_P0) ;
  

/* ------------------------------------------------------------------------ */
/*  C a l _ I n i t G a l e r k i n T e r m O f F e m E q u a t i o n       */
/* ------------------------------------------------------------------------ */

void  Cal_InitGalerkinTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
					struct QuantityStorage  * QuantityStorage_P0,
					struct QuantityStorage  * QuantityStorageNoDof,
					struct Dof              * DofForNoDof_P) {
  struct FemLocalTermActive  * FI ;

  extern double ** MH_Moving_Matrix ;

  GetDP_Begin("Cal_InitGalerkinTermOfFemEquation");

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

  /* Warning: not correct if nonsymmetrical tensor in expression */
  FI->SymmetricalMatrix =
    (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ==
     EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof) &&
    (EquationTerm_P->Case.LocalTerm.Term.TypeOperatorEqu ==
     EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof) ;

  if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ != CWQ_NONE)
    FI->SymmetricalMatrix = 0 ;

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
	Msg(ERROR, "No operator can act on an Integral Quantity");
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
  
  if(EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex < 0)
    Msg(ERROR, "Integration method missing in equation term");

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


  /*  G e t   J a c o b i a n   M e t h o d   */
  /*  --------------------------------------  */

  if(EquationTerm_P->Case.LocalTerm.JacobianMethodIndex < 0)
    Msg(ERROR, "Jacobian method missing in equation term");
  
  FI->JacobianCase_L =
    ((struct JacobianMethod *)
     List_Pointer(Problem_S.JacobianMethod,
		  EquationTerm_P->Case.LocalTerm.JacobianMethodIndex))
    ->JacobianCase ;

  FI->JacobianCase_P0 =
    (FI->NbrJacobianCase = List_Nbr(FI->JacobianCase_L)) ?
    (struct JacobianCase*)List_Pointer(FI->JacobianCase_L, 0) : NULL ;

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
    Msg(ERROR, "Unknown type of Form (%d)", FI->Type_FormEqu);
  }

  /*  G e t   F u n c t i o n _ A s s e m b l e T e r m  */
  /*  -------------------------------------------------  */

  switch (EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative) {
  case NODT_   : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_NoDt   ; break;
  case DT_     : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_Dt     ; break;
  case DTDOF_  : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDof  ; break;
  case DTDT_   : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDt   ; break;
  case DTDTDOF_: FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtDtDof; break;
  case JACNL_  : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_JacNL  ; break;
  case NEVERDT_: FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_NeverDt; break;
  case DTNL_   : FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_DtNL   ; break;
  default      : Msg(ERROR, "Unknown type of Operator for Galerkin term (%d)", 
		     EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative);
  }


  if (MH_Moving_Matrix) {
    /* Msg (INFO, "AssembleTerm_MH_Moving") ; */
    FI->Function_AssembleTerm = (void (*)())Cal_AssembleTerm_MH_Moving ; 
  }


  /*  initialisation of MHJacNL-term (nonlinear multi-harmonics) if necessary */
  Cal_InitGalerkinTermOfFemEquation_MHJacNL(EquationTerm_P);

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  C a l _ T e r m O f F e m E q u a t i o n                               */
/* ------------------------------------------------------------------------ */


void  Cal_GalerkinTermOfFemEquation(struct Element          * Element,
				    struct EquationTerm     * EquationTerm_P,
				    struct QuantityStorage  * QuantityStorage_P0) {
  
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
 

  GetDP_Begin("Cal_GalerkinTermOfFemEquation");

  FI = EquationTerm_P->Case.LocalTerm.Active ;


  /* treatment of MHJacNL-term in separate routine */ 
  if (FI->MHJacNL) {  
    /* if only the RHS of the system is to be calculated 
       (in case of adaptive relaxation of the Newton-Raphson scheme)
       the (expensive and redundant) calculation of this term can be skipped */ 
    if (!Flag_RHS)  
      Cal_GalerkinTermOfFemEquation_MHJacNL(Element, EquationTerm_P, QuantityStorage_P0) ;
    GetDP_End ; 
  }

  QuantityStorageEqu_P = FI->QuantityStorageEqu_P ;
  QuantityStorageDof_P = FI->QuantityStorageDof_P ;

  /*  ----------------------------------------------------------------------  */
  /*  G e t   F u n c t i o n V a l u e  f o r  t e s t  f u n c t i o n s    */
  /*  ----------------------------------------------------------------------  */

  if (!(Nbr_Equ = QuantityStorageEqu_P->NbrElementaryBasisFunction)) {
    GetDP_End ;
  }

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

  if (i == FI->NbrJacobianCase)
    Msg(ERROR, "Undefined Jacobian in Region %d", Element->Region);

  Element->JacobianCase = FI->JacobianCase_P0 + i ;

  Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
    Get_JacobianFunction(Element->JacobianCase->TypeJacobian,
			 Element->Type, &Type_Dimension) ;

  if (FI->Flag_ChangeCoord)
    Get_NodesCoordinatesOfElement(Element) ;

  /*  ------------------------------------------------------------------------  */
  /*  ------------------------------------------------------------------------  */
  /*  C o m p u t a t i o n   o f   E l e m e n t a r y   m a t r i x           */
  /*  ------------------------------------------------------------------------  */
  /*  ------------------------------------------------------------------------  */


  /* Loop on source elements (> 1 only if integral quantity) */
  
  while (1) {  

    if (FI->Type_DefineQuantityDof == INTEGRALQUANTITY) {

      if (!Flag_FMM)
	NextElement = Get_NextElementSource(Element->ElementSource) ;
      else{
	NextElement = Get_NextElementSourceNeighbour(Element) ;
      }
      
      if (NextElement) {
	/* Get DOF of source element */
      
	Get_DofOfElement(Element->ElementSource,
			 QuantityStorageDof_P->FunctionSpace,
			 QuantityStorageDof_P, NULL) ;
	
	/* Get function value for shape function */
      
	Get_NodesCoordinatesOfElement(Element->ElementSource) ;
	Nbr_Dof = QuantityStorageDof_P->NbrElementaryBasisFunction ;
	Get_FunctionValue(Nbr_Dof, (void (**)())xFunctionBFDof,
			  QuantityStorageDof_P->DefineQuantity->IntegralQuantity.TypeOperatorDof, 
			  QuantityStorageDof_P, &FI->IntegralQuantityActive.Type_FormDof) ;
	
	/* Initialize Integral Quantity (integration & jacobian) */
	
	Cal_InitIntegralQuantity(Element, &FI->IntegralQuantityActive, 
				   QuantityStorageDof_P);
      }
      else { 
	break ;	  
      }/* if Get_NextElementSource (Neighbour) */
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
	Msg(ERROR, "Unknown type of Element (%s) for Integration method (%s)",
	    Get_StringForDefine(Element_Type, Element->Type),
	    ((struct IntegrationMethod *)
	     List_Pointer(Problem_S.IntegrationMethod,
			  EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))->Name);
      
      Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
      Get_IntPoint  = (void(*)(int,int,double*,double*,double*,double*))
	Quadrature_P->Function ;
           
      
      for (i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {
	
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
	
	if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ != CWQ_NONE)
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
	    
	    switch(EquationTerm_P->Case.LocalTerm.Term.OperatorTypeForCanonical_Equ){
	    case OP_TIME : Cal_ProductValue (&CanonicExpression_Equ,&V1,&V2); break;
	    case OP_CROSSPRODUCT : Cal_CrossProductValue (&CanonicExpression_Equ,&V1,&V2); break;
	    default : Msg(ERROR, "Unknown operation in Equation");
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

	Factor = (FI->Flag_ChangeCoord) ? weight * fabs(Element->DetJac) : weight ;

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
		 FI->Cal_Productx) (vBFxEqu[i], &(vBFxDof[j].Val[MAX_DIM*k])) ;

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
	    (Problem_Expression0 +
	     EquationTerm_P->Case.LocalTerm.Term.ExpressionIndexForCanonical,
	     QuantityStorage_P0, 0., 0., 0., &CoefPhys) ;
	  Factor = CoefPhys.Val[0] ;
	}
      }
      else {
	Msg(ERROR, "Bad expression for full analytic integration");
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
	  Msg(ERROR, "Exterior analytical integration not implemented");
	  break;
	}
      }
      
      break ; /* case ANALYTIC */
      
    default :
      Msg(ERROR, "Unknown type of Integration method (%s)",
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
    
    if(Flag_VERBOSE == 10) {
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
   
    for (i = 0 ; i < Nbr_Equ ; i++)  
      for (j = 0 ; j < Nbr_Dof ; j++)
	((void (*)(struct Dof*, struct Dof*, double*)) 
	 FI->Function_AssembleTerm)
	  (QuantityStorageEqu_P->BasisFunction[i].Dof,
	   QuantityStorageDof_P->BasisFunction[j].Dof,  Ek[i][j]) ;
    
    /* Exit while(1) directly if not integral quantity */

    if (FI->Type_DefineQuantityDof != INTEGRALQUANTITY)  break ;

  }  /* while (1) ... */
   
  GetDP_End ;
}
