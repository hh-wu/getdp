// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ProData.h"
#include "DofData.h"
#include "GeoData.h"
#include "Pos_Search.h"
#include "SolvingOperations.h"
#include "Cal_Quantity.h"
#include "ExtendedGroup.h"
#include "BF.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ C h a n g e O f C o o r d i n a t e s               */
/* ------------------------------------------------------------------------ */

void  Operation_ChangeOfCoordinates(struct Resolution  * Resolution_P,
				    struct Operation   * Operation_P,
				    struct DofData     * DofData_P0,
				    struct GeoData     * GeoData_P0)
{
  int  i, Nbr_Node, Num_Node, ThisIsTheNode ;
  double x=0., y=0., z=0.;
  struct Value  Value, Value1, Value2 ;
  struct Group  * Group_P ;

  // Note: Current.{u,v,w} is not defined, so we cannot interpolate expressions
  // in the reference element. We thus set Current.Element=0 and rely on
  // Current.{x,y,z}.
  struct Element *old = Current.Element;
  Current.Element = 0;

  Group_P = (struct Group *)
    List_Pointer(Problem_S.Group,
		 Operation_P->Case.ChangeOfCoordinates.GroupIndex) ;
  if (!Group_P->ExtendedList)  Generate_ExtendedGroup(Group_P) ;
  if (Group_P->FunctionType != NODESOF)
    Message::Error("ChangeOfCoordinates: Group must be of NodesOf function type") ;

  Nbr_Node = List_Nbr(Group_P->ExtendedList) ;

  for (i=0 ; i < Nbr_Node ; i++) {
    List_Read(Group_P->ExtendedList, i, &Num_Node) ;

    if (!Group_P->InitialSuppList ||
	! List_Search(Group_P->ExtendedSuppList, &Num_Node, fcmp_int)) {

      Geo_GetNodesCoordinates(1, &Num_Node, &Current.x, &Current.y, &Current.z) ;

      if (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 >= 0 &&
	  Num_Node == Operation_P->Case.ChangeOfCoordinates.NumNode) {
	x = Current.x ;
	y = Current.y ;
	z = Current.z ;
	Get_ValueOfExpressionByIndex
	  (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2,
	   NULL, 0., 0., 0., &Value1) ;
	ThisIsTheNode = 1 ;
      } else ThisIsTheNode = 0 ;

      Get_ValueOfExpressionByIndex
	(Operation_P->Case.ChangeOfCoordinates.ExpressionIndex,
	 NULL, 0., 0., 0., &Value) ;

      if (ThisIsTheNode) {
	Current.x = Value.Val[0] ;
	Current.y = Value.Val[1] ;
	Current.z = Value.Val[2] ;
	Get_ValueOfExpressionByIndex
	  (Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2,
	   NULL, 0., 0., 0., &Value2) ;
	Message::Debug("before x %e  y %e  z %e  ||| after x %e  y %e  z %e\n",
	       x, y, z, Value.Val[0], Value.Val[1], Value.Val[2]);
	Message::Debug("  before %e  after %e", Value1.Val[0], Value2.Val[0]) ;
      }

      Geo_SetNodesCoordinates(1, &Num_Node,
			      &Value.Val[0], &Value.Val[1], &Value.Val[2]) ;
    }

  }

  Current.Element = old;

  Free_SearchGrid(&Current.GeoData->Grid);
}

/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ D e f o r m e M e s h                               */
/* ------------------------------------------------------------------------ */

void  Operation_DeformeMesh(struct Resolution  * Resolution_P,
                            struct Operation   * Operation_P,
                            struct DofData     * DofData_P0,
                            struct GeoData     * GeoData_P0)
{
  int  i, Num_Node, NumBF_X=-1, NumBF_Y=-1, NumBF_Z=-1 ;
  double Value, un_x = 0., un_y = 0., un_z = 0. ;

  struct DefineSystem * DS ;
  struct Formulation  * FO ;
  struct DefineQuantity  * DQ_P ;
  struct FunctionSpace   * FunctionSpace_P ;
  struct DofData     * DofData_P ;
  struct Group  * Group_P ;

  Group_P = (Operation_P->Case.DeformeMesh.GroupIndex >=0)?
    (struct Group *)List_Pointer(Problem_S.Group, Operation_P->Case.DeformeMesh.GroupIndex)
    : NULL;
  if (Group_P && Group_P->FunctionType != NODESOF)
    Message::Error("DeformeMesh: Group must be of NodesOf function type") ;

  DS = (struct DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
					  Operation_P->DefineSystemIndex) ;

  if( List_Nbr(DS->FormulationIndex) > 1 )
    Message::Error("DeformeMesh: Only one formulation must be associated to the system %s",
                   DS->Name) ;

  FO = (struct Formulation *) List_Pointer(Problem_S.Formulation,
					   *((int *)List_Pointer(DS->FormulationIndex, 0))) ;

  if((i = List_ISearchSeq(FO->DefineQuantity, Operation_P->Case.DeformeMesh.Quantity,
			  fcmp_DefineQuantity_Name)) < 0)
    Message::Error("Unknown Quantity '%s' in Formulation %s",
                   Operation_P->Case.DeformeMesh.Quantity, FO->Name ) ;
  DQ_P = (struct DefineQuantity *) List_Pointer(FO->DefineQuantity, i) ;


  DofData_P = DofData_P0 + Operation_P->DefineSystemIndex ;

  FunctionSpace_P = (struct FunctionSpace*)List_Pointer(Problem_S.FunctionSpace,
                                                        DQ_P->FunctionSpaceIndex) ;

  for(i = 0 ; i < List_Nbr(FunctionSpace_P->BasisFunction); i++){
    if( (void(*)())((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction,
							i))->Function == (void(*)())BF_NodeX )
      NumBF_X = ((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction, i))->Num;

    if( (void(*)())((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction,
							i))->Function == (void(*)())BF_NodeY )
      NumBF_Y = ((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction, i))->Num;

    if( (void(*)())((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction,
							i))->Function == (void(*)())BF_NodeZ )
      NumBF_Z = ((struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction, i))->Num;
  }


  for(i = 0 ; i < List_Nbr(FunctionSpace_P->DofData->DofList) ; i++){
    if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->NumType == NumBF_X ||
        ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->NumType == NumBF_Y ||
        ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->NumType == NumBF_Z ){

      Num_Node = ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i ))->Entity ;

      if (!Group_P || Check_IsEntityInExtendedGroup(Group_P, Num_Node, 0)) {
        Dof_GetRealDofValue
          (FunctionSpace_P->DofData,
           ((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i )) , &Value) ;

        /* Reference mesh */
        Geo_SetCurrentGeoData(Current.GeoData =
                              GeoData_P0 + Operation_P->Case.DeformeMesh.GeoDataIndex) ;
        Geo_GetNodesCoordinates(1, &Num_Node, &un_x, &un_y, &un_z) ;

        /* Mesh associated to the electromechanical system */
        if( GeoData_P0 + DofData_P->GeoDataIndex !=
            GeoData_P0 + Operation_P->Case.DeformeMesh.GeoDataIndex )
          Geo_SetCurrentGeoData(Current.GeoData = GeoData_P0 + DofData_P->GeoDataIndex) ;

        if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i))->NumType == NumBF_X){
          un_x +=  Operation_P->Case.DeformeMesh.Factor * Value ;
          Geo_SetNodesCoordinatesX(1, &Num_Node, &un_x) ;
        }

        if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i))->NumType == NumBF_Y){
          un_y +=  Operation_P->Case.DeformeMesh.Factor * Value ;
          Geo_SetNodesCoordinatesY(1, &Num_Node, &un_y) ;
        }

        if (((struct Dof*)List_Pointer(FunctionSpace_P->DofData->DofList, i))->NumType == NumBF_Z){
          un_z +=  Operation_P->Case.DeformeMesh.Factor * Value ;
          Geo_SetNodesCoordinatesZ(1, &Num_Node, &un_z) ;
        }
      }

    }

  }

  Current.GeoData = GeoData_P0 + Operation_P->Case.DeformeMesh.GeoDataIndex;
  Free_SearchGrid(&Current.GeoData->Grid);
}
