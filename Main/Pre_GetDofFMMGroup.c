#define RCSID "$Id: Pre_GetDofFMMGroup.c,v 1.7 2006-02-25 15:00:24 geuzaine Exp $"
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
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Get_DofOfElement.h"
#include "CurrentData.h"
#include "Tools.h"
#include "F_FMM.h"


void  Pre_GetDofFMMGroup (struct Formulation * Formulation_P,
			 struct QuantityStorage *QuantityStorage_P0){
  
  struct QuantityStorage *QuantityStorageEqu_P, *QuantityStorageDof_P;
  struct EquationTerm    *EquationTerm_P0, *EquationTerm_P ;
  struct Element           Element ;
  struct FMMData *FMMData_P0, *FMMData_P ;
  struct FMMGroup FMMGroup_S ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;

  int Nbr_Equ, Nbr_Dof, Nbr_EquationTerm ;
  int Nbr_GroupObs, Nbr_GroupSrc, Nbr_ElmsInGroup,  *ElmtsGr ;
  int i_Group, iEqu, jDof, i_Element, i_EquTerm ;
  int FMMObservation, FMMSource, DifBasisFunctionForEquDof ;

  List_T *NumDofi, *NumEqui ;

 
  GetDP_Begin("Pre_GetDofFMMGroup");

  Nbr_EquationTerm = List_Nbr(Formulation_P->Equation) ;
  EquationTerm_P0 = (struct EquationTerm*)List_Pointer(Formulation_P->Equation, 0) ;

  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;

  for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {
    EquationTerm_P = EquationTerm_P0 + i_EquTerm ;
    if ( (EquationTerm_P->Case.LocalTerm.FMMObservation >= 0) &&
	 (EquationTerm_P->Case.LocalTerm.FMMSource >= 0)){
      FMMObservation = EquationTerm_P->Case.LocalTerm.FMMObservation ;
      FMMSource = EquationTerm_P->Case.LocalTerm.FMMSource ;
      DifBasisFunctionForEquDof = 1 ;

      QuantityStorageDof_P = QuantityStorage_P0 + 
	EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof ;
      QuantityStorageEqu_P = QuantityStorage_P0 + 
	EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ;
      
      FMMmat_P = FMMmat_P0 + EquationTerm_P->Case.LocalTerm.iFMMEqu ;

      FMMmat_P->EquTermIndex = i_EquTerm ;
      
      FMMmat_P->FunctionSpaceIndexDof = 
	QuantityStorageDof_P->DefineQuantity->FunctionSpaceIndex ;
      FMMmat_P->FunctionSpaceIndexEqu = 
	QuantityStorageEqu_P->DefineQuantity->FunctionSpaceIndex ;
      FMMmat_P->TypeTimeDerivative = 
	EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative ;
    
      if (FMMmat_P->TypeTimeDerivative != NODT_ && Current.NbrHar == 2 )
	FMMmat_P->Pulsation = Current.DofData->Val_Pulsation[0] ;

      if (QuantityStorageEqu_P->DefineQuantity->FunctionSpaceIndex 
	  == QuantityStorageDof_P->DefineQuantity->FunctionSpaceIndex)
	DifBasisFunctionForEquDof = 0 ;

      List_Read(Problem_S.FMMGroup, FMMObservation, &FMMGroup_S ) ;   
      Nbr_GroupObs = Nbr_GroupSrc = List_Nbr(FMMGroup_S.List ) ;
      FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List,0);

     if (FMMmat_P->NumEqu == NULL)
	FMMmat_P->NumEqu = List_Create(Nbr_GroupObs, 1, sizeof(List_T*)) ;

      for ( i_Group = 0 ; i_Group < Nbr_GroupObs ; i_Group++ ) {
	FMMData_P =  FMMData_P0 + i_Group ;
	Element.FMMGroup = i_Group ;
	Nbr_ElmsInGroup = List_Nbr(FMMData_P->Element);
	ElmtsGr = (int*)(FMMData_P->Element->array) ;
	NumEqui = List_Create(Nbr_ElmsInGroup,  2, sizeof(int)) ;

	for (i_Element = 0 ; i_Element < Nbr_ElmsInGroup ; i_Element++) {
	  Element.GeoElement = Geo_GetGeoElementOfNum(ElmtsGr[i_Element]) ;
	  Element.Num    = Element.GeoElement->Num ;
	  Element.Type   = Element.GeoElement->Type ;
	  Current.Region = Element.Region = Element.GeoElement->Region ;
	  
	  if (QuantityStorageEqu_P->NumLastElementForFunctionSpace != Element.Num) {		
	    QuantityStorageEqu_P->NumLastElementForFunctionSpace = Element.Num ;
	    
	    switch (QuantityStorageEqu_P->DefineQuantity->Type) {
	    case LOCALQUANTITY :
	      Get_DofOfElement
		(&Element, QuantityStorageEqu_P->FunctionSpace, QuantityStorageEqu_P,
		 QuantityStorageEqu_P->DefineQuantity->IndexInFunctionSpace) ;
	      break ;
	    case INTEGRALQUANTITY :
	      QuantityStorageEqu_P->NbrElementaryBasisFunction = 0 ;
	      break ;
	    default :
	      Msg(ERROR, "Bad kind of Quantity in Formulation '%s'",
		  Formulation_P->Name);
	      break;
	    }
	  }
	  
	  Nbr_Equ = QuantityStorageEqu_P->NbrElementaryBasisFunction ;
	  
	  for (iEqu = 0; iEqu < Nbr_Equ; iEqu++)
	    if (QuantityStorageEqu_P->BasisFunction[iEqu].Dof->Type == DOF_UNKNOWN)
	      if ( List_PQuery( NumEqui,
				&QuantityStorageEqu_P->BasisFunction[iEqu].Dof->
				Case.Unknown.NumDof, fcmp_int) == NULL )
		List_Add ( NumEqui, &QuantityStorageEqu_P->BasisFunction[iEqu].Dof->
			   Case.Unknown.NumDof ) ;	     
	  List_Sort(NumEqui, fcmp_int ) ;	
	  
	}/* Loop on Elements in Group Observation */
		  
	List_Add( FMMmat_P->NumEqu, &NumEqui );
      }/* Loop in Group Observation */


      if ((FMMSource != FMMObservation) || DifBasisFunctionForEquDof ){
	Msg(INFO, "NON SYMMETRIC Galerkin Term %d TypeTimeDerivative %d",
	    i_EquTerm,  FMMmat_P->TypeTimeDerivative) ;

	List_Read(Problem_S.FMMGroup, FMMSource, &FMMGroup_S ) ;   
	Nbr_GroupSrc = List_Nbr(FMMGroup_S.List ) ;
	FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0 );

	if(FMMmat_P->NumDof == NULL)
	  FMMmat_P->NumDof = List_Create(Nbr_GroupSrc, 1, sizeof(List_T*)) ;
	
	for ( i_Group = 0 ; i_Group < Nbr_GroupSrc ; i_Group++ ) {
	  FMMData_P =  FMMData_P0 + i_Group ;
	  Nbr_ElmsInGroup = List_Nbr(FMMData_P->Element);
	  ElmtsGr = (int*)(FMMData_P->Element->array) ;
	  NumDofi = List_Create(Nbr_ElmsInGroup,  2, sizeof(int)) ;
	  
	  for (i_Element = 0 ; i_Element < Nbr_ElmsInGroup ; i_Element++) {
	    Element.GeoElement = Geo_GetGeoElementOfNum(ElmtsGr[i_Element]) ;
	    Element.Num    = Element.GeoElement->Num ;
	    Element.Type   = Element.GeoElement->Type ;
	    Element.FMMGroup = Element.GeoElement->FMMGroup ;
	    
	    if (i_Group != Element.GeoElement->FMMGroup) 
	      Msg(ERROR,"Wrong Element in FMMGroup i_Group %d FMMElmGroup %d Element %d ",
		  i_Group, Element.FMMGroup, Element.Num ) ;
	    
	    Current.Region = Element.Region = Element.GeoElement->Region ;
	 
	    
	    if (QuantityStorageDof_P->NumLastElementForFunctionSpace != Element.Num) {		
	      QuantityStorageDof_P->NumLastElementForFunctionSpace = Element.Num ;
	      Get_DofOfElement (&Element,
				QuantityStorageDof_P->FunctionSpace,
				QuantityStorageDof_P, NULL);
	    }

	    Nbr_Dof = QuantityStorageDof_P->NbrElementaryBasisFunction ;
	  
	    for (jDof = 0; jDof < Nbr_Dof; jDof++)
	      if (QuantityStorageDof_P->BasisFunction[jDof].Dof->Type == DOF_UNKNOWN)
		if ( List_PQuery( NumDofi,
				  &QuantityStorageDof_P->BasisFunction[jDof].Dof->
				  Case.Unknown.NumDof, fcmp_int) == NULL )
		  List_Add ( NumDofi, &QuantityStorageDof_P->BasisFunction[jDof].Dof->
			     Case.Unknown.NumDof ) ;
	      
	    List_Sort(NumDofi, fcmp_int ) ;
	    
	  }/* Loop on Elements in Group Source */
	  
	  List_Add( FMMmat_P->NumDof, &NumDofi );
	}/* Loop in Group Source */
	
      }/* FMMObservation != FMMSource || DifBasisForEquDof*/  
      else{
	Msg(INFO, "SYMMETRIC Galerkin Term %d TypeTimeDerivative %d", 
	    i_EquTerm, FMMmat_P->TypeTimeDerivative ) ;
	(FMMmat_P->NumDof) =  (FMMmat_P->NumEqu) ;
      }

     
    }/* Galerkin + IntegralQuantity */
    
  }/* Loop on Equation Terms */ 
  
  GetDP_End ;
}
