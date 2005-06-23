#define RCSID "$Id: Cal_deRhamTermOfFemEquation.c,v 1.17 2005-06-23 01:45:01 geuzaine Exp $"
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

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Get_DofOfElement.h"
#include "Get_Geometry.h"
#include "Get_Cells.h"
#include "Pos_Search.h" /* xyz2uvw */
#include "Numeric.h"
#include "Data_DefineE.h"
#include "GeoData.h"
#include "CurrentData.h"
#include "Tools.h"

/* ------------------------------------------------------------------------ */
/*  C a l _ I n i t D e R h a m T e r m O f F e m E q u a t i o n           */
/* ------------------------------------------------------------------------ */

void  Cal_InitdeRhamTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				      struct QuantityStorage  * QuantityStorage_P0,
				      struct QuantityStorage  * QuantityStorageNoDof,
				      struct Dof              * DofForNoDof_P) {
  struct FemLocalTermActive  * FI ;

  GetDP_Begin("Cal_InitdeRhamTermOfFemEquation");

  FI = EquationTerm_P->Case.LocalTerm.Active ;

  FI->QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ;

  if(EquationTerm_P->Case.LocalTerm.Term.TypeOperatorEqu != NOOP)
    Msg(ERROR, "An aperator cannot act on the \"test function\" in a de Rham Map");

  FI->Type_FormEqu = -1 ;

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


  FI->SymmetricalMatrix = 0 ;

  switch (FI->Type_DefineQuantityDof) {
  case LOCALQUANTITY :
    Get_InitFunctionValue(EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof,
			  FI->QuantityStorageDof_P, &FI->Type_FormDof) ;
    break ;
  case INTEGRALQUANTITY :
    if(EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof != NOOP){
      Msg(ERROR, "A differential operator cannot act on an Integral Quantity");
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

  FI->Type_ValueDof = Get_ValueFromForm(FI->Type_FormDof);

  /*  G e t   I n t e g r a t i o n   M e t h o d   */
  /*  --------------------------------------------  */
  
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
  
  FI->JacobianCase_L =
    ((struct JacobianMethod *)
     List_Pointer(Problem_S.JacobianMethod,
		  EquationTerm_P->Case.LocalTerm.JacobianMethodIndex))
      ->JacobianCase ;

  FI->JacobianCase_P0 =
    (FI->NbrJacobianCase = List_Nbr(FI->JacobianCase_L)) ?
    (struct JacobianCase*)List_Pointer(FI->JacobianCase_L, 0) : NULL ;

  FI->Flag_ChangeCoord = 1 ;
  FI->Flag_InvJac = 
    (FI->Type_FormDof == FORM1) ||
    (EquationTerm_P->Case.LocalTerm.Term.QuantityIndexPost == 1) ;
  
  /*  G e t   C h a n g e O f C o o r d i n a t e s   */
  /*  ----------------------------------------------  */
  
  FI->xChangeOfCoordinatesEqu = NULL ;

  FI->xChangeOfCoordinatesDof =
    (void (*)())Get_ChangeOfCoordinates(FI->Flag_ChangeCoord, FI->Type_FormDof) ;

  FI->Cal_Productx = NULL ;

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
  default      : Msg(ERROR, "Unknown type of operator for de Rham (%d)", 
		     EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative);
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  C a l _ D e R h a m T e r m O f F e m E q u a t i o n                   */
/* ------------------------------------------------------------------------ */


void  Cal_deRhamTermOfFemEquation(struct Element          * Element,
				  struct EquationTerm     * EquationTerm_P,
				  struct QuantityStorage  * QuantityStorage_P0) {

  struct Element              Cells[NBR_MAX_DERHAM_CELLS];
  struct FemLocalTermActive * FI ;
  struct QuantityStorage    * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  struct IntegrationCase    * IntegrationCase_P ;
  struct Quadrature         * Quadrature_P ;
  struct Value                vBFxDof[NBR_MAX_BASISFUNCTIONS] ;
  struct Value                Cell_Vector[NBR_MAX_DERHAM_CELLS];
  struct Value                Cell_Value[NBR_MAX_BASISFUNCTIONS][NBR_MAX_DERHAM_CELLS];
  struct Group              * Group_P ;

  double  u, v, w, weight, Factor ;
  double  u2, v2, w2, x2, y2, z2 ;
  double  Ek [NBR_MAX_BASISFUNCTIONS] [NBR_MAX_BASISFUNCTIONS] [NBR_MAX_HARMONIC] ;   

  int     Nbr_Equ, Nbr_Dof = 0 ;
  int     i, j, k, n, ii, Nbr_IntPoints, i_IntPoint, i_Cell ;
  int     Type_Dimension, Cell_Type_Dimension ;
  int     Nbr_Cells, Cell_RelativeJacobianType ;
  int     Nbr_Ent1 = 0, Nbr_Ent2 = 0, *Dk = NULL ;
  int     Product ; 

  void (*xFunctionBFDof[NBR_MAX_BASISFUNCTIONS])
    (struct Element * Element, int NumEntity, 
     double u, double v, double w, double Value[] ) ;
  double (*Get_Jacobian)(struct Element*, MATRIX3x3*) ;
  double (*Cell_Get_Jacobian)(struct Element*, MATRIX3x3*) = 0;
  void (*Get_IntPoint)(int,int,double*,double*,double*,double*);

  GetDP_Begin("Cal_deRhamTermOfFemEquation");

  FI = EquationTerm_P->Case.LocalTerm.Active ;

  QuantityStorageEqu_P = FI->QuantityStorageEqu_P ;
  QuantityStorageDof_P = FI->QuantityStorageDof_P ;


  /*  ----------------------------------------------------------------------  */
  /*  E q u a t i o n s   t o   b u i l d ?                                   */
  /*  ----------------------------------------------------------------------  */
  
  /* Msg(INFO, "de Rham for Element %d", Element->Num); */

  if (!(Nbr_Equ = QuantityStorageEqu_P->NbrElementaryBasisFunction)) {
    if(Flag_VERBOSE > 2) 
      Msg(WARNING, "No equation to build in Element %d (de Rham)", Element->Num);
    GetDP_End ;
  }

  /*  ----------------------------------------------------------------------  */
  /*  G e t   F u n c t i o n V a l u e  f o r  s h a p e  f u n c t i o n s  */
  /*  ----------------------------------------------------------------------  */

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
  
  /*  -------------------------------------------------------------------  */
  /*  G e t   I n t e g r a t i o n   M e t h o d                          */
  /*  -------------------------------------------------------------------  */

  IntegrationCase_P = Get_IntegrationCase(Element, 
					  FI->IntegrationCase_L, 
					  FI->CriterionIndex);
 
  /*  -------------------------------------------------------------------  */
  /*  G e t   D e R h a m   S u p p o r t                                  */
  /*  -------------------------------------------------------------------  */

  Get_NodesCoordinatesOfElement(Element) ;

  Group_P = (struct Group*) List_Pointer(Problem_S.Group, 
					 EquationTerm_P->Case.LocalTerm.InIndex) ;

  Get_deRhamCells(Element, QuantityStorageEqu_P, Group_P, &Nbr_Cells,
		  Cells, Cell_Vector, &Cell_RelativeJacobianType);

  /* All the cells created from one element are supposed to be of the same type */
  
  /*  -------------------------------------------------------------------  */
  /*  G e t   J a c o b i a n   M e t h o d   f o r   E l e m e n t        */
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

  /*  -------------------------------------------------------------------  */
  /*  G e t   J a c o b i a n   M e t h o d   f o r   C e l l s            */
  /*  -------------------------------------------------------------------  */

  if(Cells[0].Type != POINT){
    Cell_Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
      Get_JacobianFunction(Element->JacobianCase->TypeJacobian + 
			   Cell_RelativeJacobianType,
			   Cells[0].Type, &Cell_Type_Dimension) ;
  }
  
  /*  ------------------------------------------------------------------------  */
  /*  C o m p u t a t i o n   o f   E l e m e n t a r y   S u b m a t r i x     */
  /*  ------------------------------------------------------------------------  */
  
  /* Loop on source elements (> 1 only if integral quantity) */
  
  while (1) {
    
    if (FI->Type_DefineQuantityDof == INTEGRALQUANTITY) {
      
      if ( Get_NextElementSource(Element->ElementSource) ) {
	
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
      }
      
    }

    /* Elementary Submatrix initialization */

    for (i = 0 ; i < Nbr_Equ ; i++)
      for (j = 0 ; j < Nbr_Dof ; j++)
	for (k = 0 ; k < Current.NbrHar ; k++)
	  Ek[i][j][k] = 0. ;

    /* Cell Value initialization */
    
    for(i_Cell = 0 ; i_Cell < Nbr_Cells ; i_Cell ++)
      for (j = 0 ; j < Nbr_Dof ; j++)
	Cal_ZeroValue(&Cell_Value[i_Cell][j]);


    /* 
       printf("Nb Equ= %d  nbdof=%d cells =%d", Nbr_Equ , Nbr_Dof, Nbr_Cells); 
       */

    
    /*  -------------------------------------  */
    /*  P o i n t   c o l l o c a t i o n      */
    /*  -------------------------------------  */
    
    if(Cells[0].Type == POINT){
    
      for(i_Cell = 0 ; i_Cell < Nbr_Cells ; i_Cell ++) {

	Current.Element = Element ;	 
	Current.u = Cells[i_Cell].x[0] ;
	Current.v = Cells[i_Cell].y[0] ;
	Current.w = Cells[i_Cell].z[0] ;

	Get_BFGeoElement(Element, Current.u, Current.v, Current.w) ;
	Element->DetJac = Get_Jacobian(Element, &Element->Jac) ;

	if (FI->Flag_InvJac)
	  Get_InverseMatrix(Type_Dimension, Element->Type, Element->DetJac,
			    &Element->Jac, &Element->InvJac) ;

	/* Shape Functions (+ surrounding expression) */

	Cal_vBFxDof(EquationTerm_P, FI, 
		    QuantityStorage_P0, QuantityStorageDof_P,
		    Nbr_Dof, xFunctionBFDof, NULL, Cell_Value[i_Cell]);
      }
    }

    /*  -------------------------------------  */
    /*  I n t e g r a t i o n                  */
    /*  -------------------------------------  */
    
    else {

      switch (IntegrationCase_P->Type) {
	
      case GAUSS :  
      case GAUSSLEGENDRE :  
	
	Quadrature_P = (struct Quadrature*)
	  List_PQuery(IntegrationCase_P->Case, &Cells[0].Type, fcmp_int);
	
	if(!Quadrature_P)
	  Msg(ERROR, "Unknown type of Element (%s) for Integration method (%s)",
	      Get_StringForDefine(Element_Type, Cells[0].Type),
	      ((struct IntegrationMethod *)
	       List_Pointer(Problem_S.IntegrationMethod,
			    EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))->Name);
	
	Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
	Get_IntPoint  = (void(*)(int,int,double*,double*,double*,double*))
	  Quadrature_P->Function ;    
		
	for(i_Cell = 0 ; i_Cell < Nbr_Cells ; i_Cell ++) {
	  
	  for (i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {
	    
	    /* u,v,w in the Cell */
	    
	    Get_IntPoint(Nbr_IntPoints, i_IntPoint, &u, &v, &w, &weight) ;
	    
	    Get_BFGeoElement(&Cells[i_Cell], u, v, w) ;
	    
	    Cells[i_Cell].DetJac = Cell_Get_Jacobian(&Cells[i_Cell], &Cells[i_Cell].Jac) ;
	    
	    /* back to u,v,w in the original element. This is quite
               inefficient (approximatively 3 jacobian inversions
               instead of 1 if the transformation was defined in the
               reverse order... -> to change ! */
	    
	    x2 = y2 = z2 = 0. ;
	    for (i = 0 ; i < Cells[i_Cell].GeoElement->NbrNodes ; i++) {
	      x2 += Cells[i_Cell].x[i] * Cells[i_Cell].n[i];
	      y2 += Cells[i_Cell].y[i] * Cells[i_Cell].n[i];
	      z2 += Cells[i_Cell].z[i] * Cells[i_Cell].n[i];
	    }
	    xyz2uvwInAnElement (Element, x2, y2, z2, &u2, &v2, &w2, Get_Jacobian, Type_Dimension) ;
	    
	    Current.Element = Element ;
	    Current.u = u2 ;
	    Current.v = v2 ;
	    Current.w = w2 ;

	    /* 
	       Msg(INFO, "Elm=%d  uvw=%g %g %g  xyz=%g %g %g",
	       Current.Element->Num, Current.u, Current.v, Current.w, x2, y2, z2);
	    */

	    /* Shape Functions (+ surrounding expression) */
	    
	    Cal_vBFxDof(EquationTerm_P, FI, 
			QuantityStorage_P0, QuantityStorageDof_P,
			Nbr_Dof, xFunctionBFDof, NULL, vBFxDof);
	    
	    Factor = (FI->Flag_ChangeCoord) ? weight * fabs(Cells[i_Cell].DetJac) : weight ;
	    
	    /* Scalar product (by the tangent or normal to the cell). This is 
	       definitely a hack and should be completely changed */
	    
	    switch(FI->Type_FormDof){
	    case FORM0 :
	    case FORM3 :
	    case SCALAR :
	      break ;
	    case FORM1 :
	    case FORM2 :
	    case VECTOR :
	      for(j = 0 ; j < Nbr_Dof ; j++)
		Cal_ProductValue(&Cell_Vector[i_Cell], &vBFxDof[j], &vBFxDof[j]) ;
	      break;
	    default :
	      Msg(ERROR, "Unknown type of Dof (%s) for scalar product in deRham Map",
		  Get_StringForDefine(Field_Type, FI->Type_FormDof));
	      break;
	    }
	    
	    for (j = 0 ; j < Nbr_Dof ; j++)
	      for (k = 0 ; k < Current.NbrHar ; k++)	  
		Cell_Value[i_Cell][j].Val[MAX_DIM*k] += Factor * vBFxDof[j].Val[MAX_DIM*k];
	    
	    
	  }  /* for i_IntPoint ... */            
	  
	} /* for i_Cell */
	
	break ; /* case GAUSS */
	
      default :
	Msg(ERROR, "Unknown type of Integration method (%s)",
	    ((struct IntegrationMethod *)
	     List_Pointer(Problem_S.IntegrationMethod,
			  EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))->Name);
	break;
	
      } /* switch integration method */

    } /* if point, else */


    /* Discrete derivative if any */

    switch (Group_P->FunctionType) {
      
    case BOUNDARYOFDUALNODESOF : 
      Product = 1 ;
      Dk = Geo_GetIM_Den_Xp(Element->Type, &Nbr_Ent1, &Nbr_Ent2); break;
      break ;

    case BOUNDARYOFDUALEDGESOF : 
      Product = 1 ;
      Dk = Geo_GetIM_Dfe_Xp(Element->Type, &Nbr_Ent1, &Nbr_Ent2); break;
      break;
      
    default :
      Product = 0 ; 
      break ;
    }

    /*
      if(Nbr_Cells != Nbr_Ent1 || Nbr_Equ != Nbr_Ent2)
      Msg(ERROR, "Error in deRham Map: wrong discrete derivative");
    */
    
    
    if(Flag_VERBOSE == 10) {
      printf("H D      = ") ;
      for (j = 0 ; j < Nbr_Dof ; j++)
	Print_DofNumber(QuantityStorageDof_P->BasisFunction[j].Dof) ; 
      printf("\n") ;
      for (i = 0 ; i < Nbr_Equ ; i++) { 
	Print_DofNumber(QuantityStorageEqu_P->BasisFunction[i].Dof) ; 
	printf("[ ") ;
	for (j = 0 ; j < Nbr_Dof ; j++) 
	  printf("% .5e ", Cell_Value[i][j].Val[0]) ;
	printf("]\n") ;
      }
    }

    /* D^T (H D) if product ; H otherwise */

    if(Product){
      for (i = 0 ; i < Nbr_Equ ; i++)
	for (j = 0 ; j < Nbr_Dof ; j++)
	  for (n = 0 ; n < Nbr_Cells ; n++)
	    if((ii = Dk [ n*Nbr_Ent1 + QuantityStorageEqu_P->BasisFunction[i].NumEntityInElement ])){
	      for (k = 0 ; k < Current.NbrHar ; k++)
		Ek[i][j][k] += ii * Cell_Value[n][j].Val[MAX_DIM*k] ;
	    }
      
      if(Flag_VERBOSE == 10) {
	printf("D^T H D  = ") ;
	for (j = 0 ; j < Nbr_Dof ; j++)
	  Print_DofNumber(QuantityStorageDof_P->BasisFunction[j].Dof) ; 
	printf("\n") ;
	for (i = 0 ; i < Nbr_Equ ; i++) { 
	  Print_DofNumber(QuantityStorageEqu_P->BasisFunction[i].Dof) ; 
	  printf("[ ") ;
	  for (j = 0 ; j < Nbr_Dof ; j++) 
	    printf("% .5e ", Ek[i][j][0]) ;
	  printf("]\n") ;
	}
      }

    }
    else{ /* ok, this is stupid */
      for (i = 0 ; i < Nbr_Equ ; i++)
	for (j = 0 ; j < Nbr_Dof ; j++)
	  for (k = 0 ; k < Current.NbrHar ; k++)
	    Ek[i][j][k] = Cell_Value[i][j].Val[MAX_DIM*k] ;
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

