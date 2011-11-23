// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <math.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "ProDefine.h"
#include "F.h"
#include "Message.h"
#include "Cal_Value.h"

extern struct CurrentData Current ;

void F_Printf(F_ARG)
{
  V = A ;  /* Attention: ne sert a rien!?! */
  Print_Value(A) ;
  printf("\n") ;
}

void F_Rand(F_ARG)
{
  int     k;

  if(A->Type != SCALAR)
    Message::Error("Non scalar argument for function 'Rand");

  V->Val[0] = A->Val[0] * (double)rand() / (double)RAND_MAX;

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }

  V->Type = SCALAR ;
}

void F_CompElementNum (F_ARG)
{
  if(!Current.Element || !Current.ElementSource)
    Message::Error("Uninitialized Element in 'F_CompElementNum'");

  V->Type = SCALAR ;
  V->Val[0] = (Current.Element->Num == Current.ElementSource->Num) ;
}

void F_VirtualWork (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double s[3] = {0.,0.,0.};

  Current.flagAssDiag = 1; /*+++prov*/

  int numNode = Current.NumEntity;

  int i = 0 ;
  while (i < Current.Element->GeoElement->NbrNodes && 
         Current.Element->GeoElement->NumNodes[i] != numNode)  i++;

  if (i < Current.Element->GeoElement->NbrNodes ) {    

    for(int j = 0; j < 3; j++) {
      squF[j]   = A->Val[j] * A->Val[j] ;
      squF[j+3] = A->Val[j] * A->Val[(j<2)?j+1:0] ;
    }

    //Get_BFGeoElement(Current.Element, Current.u, Current.v, Current.w);
    DetJac  = Current.Element->DetJac ;
    Jac     = Current.Element->Jac ;
    
    DetJac_dx[0] = 
      Current.Element->dndu[i][0] * ( Jac.c22 * Jac.c33 - Jac.c23 * Jac.c32 )
      - Current.Element->dndu[i][1] * ( Jac.c12 * Jac.c33 - Jac.c13 * Jac.c32 )
      + Current.Element->dndu[i][2] * ( Jac.c12 * Jac.c23 - Jac.c22 * Jac.c13 );
    
    DetJac_dx[1] = 
      - Current.Element->dndu[i][0] * ( Jac.c21 * Jac.c33 - Jac.c23 * Jac.c31 )
      + Current.Element->dndu[i][1] * ( Jac.c11 * Jac.c33 - Jac.c13 * Jac.c31 )
      - Current.Element->dndu[i][2] * ( Jac.c11 * Jac.c23 - Jac.c13 * Jac.c21 );
    
    DetJac_dx[2] = 
      Current.Element->dndu[i][0] * ( Jac.c21 * Jac.c32 - Jac.c22 * Jac.c31 )
      - Current.Element->dndu[i][1] * ( Jac.c11 * Jac.c32 - Jac.c12 * Jac.c31 )
      + Current.Element->dndu[i][2] * ( Jac.c11 * Jac.c22 - Jac.c12 * Jac.c21 );
    
    if(DetJac != 0){
      s[0] = ( DetJac_dx[0] * ( - squF[0] + squF[1] + squF[2] )
               -  2 * DetJac_dx[1] * squF[3]
               -  2 * DetJac_dx[2] * squF[5])/DetJac ;
      
      s[1] = ( DetJac_dx[1] * ( squF[0] - squF[1] + squF[2] )
               -  2 * DetJac_dx[0] * squF[3]
               -  2 * DetJac_dx[2] * squF[4])/DetJac ;
      
      s[2] =  ( DetJac_dx[2] * ( squF[0] + squF[1] - squF[2] ) 
                -  2 * DetJac_dx[0] * squF[5]
                -  2 * DetJac_dx[1] * squF[4])/DetJac ;
    }
    else {
      Message::Warning("Zero determinant in 'F_VirtualWork'") ;
    }
  }
  
  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_AssDiag(F_ARG)
{
  int  k ;

  Current.flagAssDiag = 2; /*+++prov*/

  V->Val[0] = 1.;

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }

  V->Type = SCALAR ;
}
