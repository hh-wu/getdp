// GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include <stdlib.h>
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
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
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

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_VirtualWork'");

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

void F_NodeForceDensity (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double Grad_n[3], s11, s12, s13, s21, s22, s23, s31, s32, s33 ;
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_NodeForceDensity'");

  Current.flagAssDiag = 1; /*+++prov*/

  int numNode = Current.NumEntity;

  int i = 0 ;
  while (i < Current.Element->GeoElement->NbrNodes &&
         Current.Element->GeoElement->NumNodes[i] != numNode)  i++;

  if (i < Current.Element->GeoElement->NbrNodes ) {
    s11 = A->Val[0] ;
    s12 = A->Val[1] ;
    s13 = A->Val[2] ;
    s21 = s12;
    s22 = A->Val[3] ;
    s23 = A->Val[4] ;
    s31 = s13;
    s32 = s23;
    s33 = A->Val[5] ;

    DetJac  = Current.Element->DetJac ;
    Jac     = Current.Element->Jac ;

    Grad_n[0] =
      Current.Element->dndu[i][0] * Jac.c11 +
      Current.Element->dndu[i][1] * Jac.c12 +
      Current.Element->dndu[i][2] * Jac.c13 ;
    Grad_n[1] =
      Current.Element->dndu[i][0] * Jac.c21 +
      Current.Element->dndu[i][1] * Jac.c22 +
      Current.Element->dndu[i][2] * Jac.c23 ;
    Grad_n[2] =
      Current.Element->dndu[i][0] * Jac.c31 +
      Current.Element->dndu[i][1] * Jac.c32 +
      Current.Element->dndu[i][2] * Jac.c33 ;

    if(DetJac != 0){
      s[0] = ( Grad_n[0] * s11 + Grad_n[1] * s12 + Grad_n[2] * s13 ) / DetJac ;
      s[1] = ( Grad_n[0] * s21 + Grad_n[1] * s22 + Grad_n[2] * s23 ) / DetJac ;
      s[2] = ( Grad_n[0] * s31 + Grad_n[1] * s32 + Grad_n[2] * s33 ) / DetJac ;
    }
    else {
      Message::Warning("Zero determinant in 'F_NodeForceDensity'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


// Blex added 25/04/14
void F_dWedu (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dWedu'");

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
      Message::Warning("Zero determinant in 'F_dWedu'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dWedudu (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dWedudu'");

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
      s[0] = ( squF[0] * ( - DetJac_dx[0] * DetJac_dx[0] + DetJac_dx[1] * DetJac_dx[1] + DetJac_dx[2] * DetJac_dx[2] )
               -  2 * DetJac_dx[0] * DetJac_dx[1] * squF[3]
               -  2 * DetJac_dx[0] * DetJac_dx[2] * squF[5])/(DetJac * DetJac) ;

      s[1] = ( squF[1] * ( DetJac_dx[0] * DetJac_dx[0] - DetJac_dx[1] * DetJac_dx[1] + DetJac_dx[2] * DetJac_dx[2] )
               -  2 * DetJac_dx[1] * DetJac_dx[0] * squF[3]
               -  2 * DetJac_dx[1] * DetJac_dx[2] * squF[4])/(DetJac * DetJac) ;

      s[2] = ( squF[2] * ( DetJac_dx[0] * DetJac_dx[0] + DetJac_dx[1] * DetJac_dx[1] - DetJac_dx[2] * DetJac_dx[2] )
               -  2 * DetJac_dx[2] * DetJac_dx[0] * squF[5]
               -  2 * DetJac_dx[2] * DetJac_dx[1] * squF[4])/(DetJac * DetJac) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dWedudu'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dWedvdu (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dWedvdu'");

  Current.flagAssDiag = 1; /*+++prov*/

  int numNode = Current.NumEntity;

  int i = 0 ;
  while (i < Current.Element->GeoElement->NbrNodes &&
         Current.Element->GeoElement->NumNodes[i] != numNode)  i++;

  if (i < Current.Element->GeoElement->NbrNodes ) {

    for(int j = 0; j < 3; j++) {
      squF[j]   = A->Val[j] ;
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
      s[0] = ( squF[0] * ( - DetJac_dx[0] * DetJac_dx[0] - DetJac_dx[1] * DetJac_dx[1] - DetJac_dx[2] * DetJac_dx[2] ))/(DetJac * DetJac) ;

      s[1] = ( squF[1] * ( - DetJac_dx[0] * DetJac_dx[0] - DetJac_dx[1] * DetJac_dx[1] - DetJac_dx[2] * DetJac_dx[2] ))/(DetJac * DetJac) ;

      s[2] = ( squF[2] * ( - DetJac_dx[0] * DetJac_dx[0] - DetJac_dx[1] * DetJac_dx[1] - DetJac_dx[2] * DetJac_dx[2] ))/(DetJac * DetJac) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dWedvdu'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}
// End Blex added

void F_AssDiag(F_ARG)
{
  int  k ;

  if (Fct->NbrParameters == 1)
    Current.flagAssDiag = Fct->Para[0];
  else
    Current.flagAssDiag = 2; /*+++prov*/

  V->Val[0] = 1.;

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }

  V->Type = SCALAR ;
}
