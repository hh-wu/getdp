#define RCSID "$Id: Par_TermOfFemEquation.c,v 1.9 2003-03-22 03:30:14 geuzaine Exp $"
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
 *   David Colignon
 */

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Get_DofOfElement.h"
#include "CurrentData.h"
#include "Graph.h"

void  Par_TermOfFemEquation (struct Element *Element,
			     struct EquationTerm *EquationTerm_P,
			     struct QuantityStorage *QuantityStorage_P0){
  
  struct QuantityStorage *QuantityStorageEqu_P, *QuantityStorageDof_P;
  int Nbr_Equ, Nbr_Dof = 0, Type_DefineQuantityDof;
  int i, j;
  
  GetDP_Begin("Par_TermOfFemEquation");

  QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu;
  
  if (!(Nbr_Equ = QuantityStorageEqu_P->NbrElementaryBasisFunction)){
    GetDP_End;
  }

  if (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof >= 0) {
    QuantityStorageDof_P = QuantityStorage_P0 +
      EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof;
    Type_DefineQuantityDof = QuantityStorageDof_P->DefineQuantity->Type;
  }
  else{
    GetDP_End;
  }

  switch (Type_DefineQuantityDof) {
  case LOCALQUANTITY:
    Nbr_Dof = QuantityStorageDof_P->NbrElementaryBasisFunction;
    break;
  case INTEGRALQUANTITY:
    Get_InitElementSource (Element,
			   QuantityStorageDof_P->DefineQuantity->IntegralQuantity.InIndex);
    break;
  default:
    Msg (ERROR, "You should never be here!");
  }

  /* Loop on source elements (> 1 only if integral quantity) */

  while (1) {

    if (Type_DefineQuantityDof == INTEGRALQUANTITY) {
      if (Get_NextElementSource (Element->ElementSource)) {
	Get_DofOfElement (Element->ElementSource,
			  QuantityStorageDof_P->FunctionSpace,
			  QuantityStorageDof_P, NULL);
	Nbr_Dof = QuantityStorageDof_P->NbrElementaryBasisFunction;
      }
      else
	break;
    }
    
    /* Il faudrait considerer les harmoniques, et tirer parti de la
       symmetrie...  Il faut voir sous quelle forme stocker le
       masque. Jette un oeil sur Cal_AssembleTerm pour voir comment
       c'est fait dans le cas ou on calcule vraiment le terme */
    
    for (i = 0; i < Nbr_Equ; i++) {
      
      if (QuantityStorageEqu_P->BasisFunction[i].Dof->Type == DOF_UNKNOWN) {

	for (j = 0; j < Nbr_Dof; j++) {
	  
	  if ( j!=i && QuantityStorageDof_P->BasisFunction[j].Dof->Type == DOF_UNKNOWN) {
	    AddEdgeInGraph(&Current.DofData->Graph, 
			   QuantityStorageEqu_P->BasisFunction[i].Dof->Case.Unknown.NumDof, 
			   QuantityStorageDof_P->BasisFunction[j].Dof->Case.Unknown.NumDof);
	    AddEdgeInGraph(&Current.DofData->Graph, 
			   QuantityStorageDof_P->BasisFunction[j].Dof->Case.Unknown.NumDof, 
			   QuantityStorageEqu_P->BasisFunction[i].Dof->Case.Unknown.NumDof);
	  }
	}
      }
      
    }
    
    if (Type_DefineQuantityDof != INTEGRALQUANTITY)
      break;
    
  } /* while (1) ... */
  
  GetDP_End ;
}


