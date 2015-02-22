// GetDP - Copyright (C) 1997-2015 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include <stdlib.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "GeoData.h"
#include "DofData.h"
#include "Get_Geometry.h"
#include "Get_DofOfElement.h"
#include "Message.h"
#include "Gauss.h"

#if defined(HAVE_GMSH)
#include <gmsh/fullMatrix.h>
#endif

extern struct CurrentData Current ;

void Treatment_ConstraintByLocalProjection(struct Element *Element,
                                           struct FunctionSpace *FunctionSpace_P,
                                           struct QuantityStorage *QuantityStorage_P)
{
  int Nbr_Equ = QuantityStorage_P->NbrElementaryBasisFunction ;
  int i_Constraint = -1;

  for(int i = 0; i < Nbr_Equ; i++){
    if((QuantityStorage_P->BasisFunction[i].Constraint == ASSIGN_LOCALPROJ ||
        QuantityStorage_P->BasisFunction[i].Constraint == INIT_LOCALPROJ) &&
       QuantityStorage_P->BasisFunction[i].Constraint_Index >=0){
      if(i_Constraint >= 0 &&
         i_Constraint != QuantityStorage_P->BasisFunction[i].Constraint_Index){
        Message::Error("More than one constraint per element for local projection");
        return;
      }
      i_Constraint = QuantityStorage_P->BasisFunction[i].Constraint_Index;
    }
  }
  if(i_Constraint < 0) return;

#if defined(HAVE_GMSH)

  struct ConstraintInFS *Constraint_P =
    (struct ConstraintInFS*)List_Pointer(FunctionSpace_P->Constraint, i_Constraint) ;
  struct ConstraintPerRegion *ConstraintPerRegion_P =
    Constraint_P->ConstraintPerRegion ;

  void (*Mapping)(struct Element * Element, double vBFu[], double vBFx[]) =
    (void (*)(struct Element * Element, double vBFu[], double vBFx[]))
    Get_ChangeOfCoordinates(1, QuantityStorage_P->TypeQuantity) ;
  double (*Jacobian)(struct Element*, MATRIX3x3*) =
    (double (*)(struct Element*, MATRIX3x3*))
    Get_JacobianFunctionAuto(Element->Type, Current.GeoData->Dimension);
  int Nbr_IntPoints = 0;
  void (*Integration)(int,int,double*,double*,double*,double*) =
    (void (*)(int,int,double*,double*,double*,double*))
    Get_IntegrationFunctionAuto(Element->Type, 1, &Nbr_IntPoints);

  Current.Element = Element;

  double vBFu[NBR_MAX_BASISFUNCTIONS][MAX_DIM] ;
  double vBFx[NBR_MAX_BASISFUNCTIONS][MAX_DIM] ;

  fullMatrix<double> E;
  fullVector<double> rhs;

  for (int i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {
    double weight;
    Integration(Nbr_IntPoints, i_IntPoint,
                &Current.u, &Current.v, &Current.w, &weight) ;
    Get_BFGeoElement(Element, Current.u, Current.v, Current.w) ;
    Element->DetJac = Jacobian(Element, &Element->Jac) ;
    Get_InverseMatrix(Current.GeoData->Dimension, Element->Type, Element->DetJac,
                      &Element->Jac, &Element->InvJac) ;
    double Factor = weight * fabs(Element->DetJac) ;

    for(int i = 0; i < Nbr_Equ; i++){
      ((void (*)(struct Element * Element, int NumEntity,
                 double u, double v, double w, double Value[]))
       QuantityStorage_P->BasisFunction[i].BasisFunction->Function)
        (Element,
         QuantityStorage_P->BasisFunction[i].NumEntityInElement + 1,
         Current.u, Current.v, Current.w, vBFu[i]) ;
      ((void (*)(struct Element*, double*, double*))
       Mapping) (Element, vBFu[i], vBFx[i]) ;
    }

    for (int i = 0 ; i < Nbr_Equ ; i++)
      for (int j = 0 ; j < Nbr_Equ ; j++)
        E(i, j) += Factor * Cal_Product123(vBFx[i], vBFx[j]) ;

  }

#else
  Message::Error("Local projection constraints require Gmsh");
#endif
}
