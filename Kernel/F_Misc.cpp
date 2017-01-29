// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "ProDefine.h"
#include "F.h"
#include "Message.h"
#include "Cal_Value.h"
#include "Cal_Quantity.h"
#include "OS.h"

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

void F_ElementNum (F_ARG)
{
  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_ElementNum'");

  V->Type = SCALAR ;
  V->Val[0] = Current.Element->Num ;
}

void F_QuadraturePointIndex (F_ARG)
{
  V->Type = SCALAR ;
  V->Val[0] = Current.QuadraturePointIndex ;
}

void F_GetCpuTime (F_ARG)
{
  double s = 0.;
  long mem = 0;
  GetResources(&s, &mem);
  V->Type = SCALAR ;
  V->Val[0] = s ;
}

void F_GetWallClockTime (F_ARG)
{
  V->Type = SCALAR ;
  V->Val[0] = Message::GetWallClockTime() ;
}

void F_GetMemory (F_ARG)
{
  double s = 0.;
  long mem = 0;
  GetResources(&s, &mem);
  double val = mem / 1024. / 1024.;
  V->Type = SCALAR ;
  V->Val[0] = val ;
}

void F_SetNumberRunTime (F_ARG)
{
  double val = A->Val[0];
  int type = A->Type;

  for (int k = 0; k < Current.NbrHar; k++)
    V->Val[MAX_DIM * k] = 0. ;
  V->Type = SCALAR;
  if(type != SCALAR){
    Message::Error("Non scalar argument for function 'SetNumberRunTime'");
    return;
  }
  if(!Fct->String){
    Message::Error("Missing ONELAB variable name: use SetNumberRunTime[value]{\"name\"}");
    return;
  }

  Message::SetOnelabNumber(Fct->String, val);
  V->Val[0] = val ;
}

void F_GetNumberRunTime (F_ARG)
{
  if(Fct->NbrArguments){
    Cal_CopyValue(A, V);
  }
  else{
    for (int k = 0; k < Current.NbrHar; k++)
      V->Val[MAX_DIM * k] = 0. ;
    V->Type = SCALAR;
  }
  if(!Fct->String){
    Message::Error("Missing ONELAB variable name: use GetNumberRunTime[]{\"name\"}");
    return;
  }
  if(Message::UseOnelab())
    V->Val[0] = Message::GetOnelabNumber(Fct->String);
}

void F_SetVariable (F_ARG)
{
  if(!Fct->String){
    Message::Error("Missing runtime variable name: use SetVariableR[...]{$name}");
    return;
  }

  if(Fct->NbrArguments < 1){
    Message::Error("Missing argument in SetVariable[...]{$name}");
    return;
  }

  Cal_CopyValue(A, V);

  char tmp[256];
  strcpy(tmp, Fct->String);
  for(int i = 1; i < Fct->NbrArguments; i++){
    if((A+i)->Type != SCALAR){
      Message::Error("Non-scalar argument in GetVariable");
      return;
    }
    char tmp2[256];
    sprintf(tmp2, "_%g", (A+i)->Val[0]);
    strcat(tmp, tmp2);
  }
  Cal_StoreInVariable(V, tmp);
}

void F_GetVariable (F_ARG)
{
  if(!Fct->String){
    Message::Error("Missing runtime variable name: use GetVariable[...]{$name}");
    return;
  }

  char tmp[256];
  strcpy(tmp, Fct->String);
  for(int i = 0; i < Fct->NbrArguments; i++){
    if((A+i)->Type != SCALAR){
      Message::Error("Non-scalar argument in GetVariable");
      return;
    }
    char tmp2[256];
    sprintf(tmp2, "_%g", (A+i)->Val[0]);
    strcat(tmp, tmp2);
  }

  Cal_GetValueSaved(V, tmp);
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
  double Grad_n[3] ;
  double s11 = 0., s12 = 0., s13 = 0. ;
  double s21 = 0., s22 = 0., s23 = 0. ;
  double s31 = 0., s32 = 0., s33 = 0. ;
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_NodeForceDensity'");

  Current.flagAssDiag = 1; /*+++prov*/

  int numNode = Current.NumEntity;

  int i = 0 ;
  while (i < Current.Element->GeoElement->NbrNodes &&
         Current.Element->GeoElement->NumNodes[i] != numNode)  i++;

  if (i < Current.Element->GeoElement->NbrNodes ) {
    if(A->Type == TENSOR_SYM){
      s11 = A->Val[0] ;
      s12 = A->Val[1] ;
      s13 = A->Val[2] ;
      s21 = s12;
      s22 = A->Val[3] ;
      s23 = A->Val[4] ;
      s31 = s13;
      s32 = s23;
      s33 = A->Val[5] ;
    }
    else if(A->Type == TENSOR){
      s11 = A->Val[0] ;
      s12 = A->Val[1] ;
      s13 = A->Val[2] ;
      s21 = A->Val[3] ;
      s22 = A->Val[4] ;
      s23 = A->Val[5] ;
      s31 = A->Val[6] ;
      s32 = A->Val[7] ;
      s33 = A->Val[8] ;
    }
    else{
      Message::Error("Unknown tensor type in 'F_NodeForceDensity'") ;
    }

    DetJac  = Current.Element->DetJac ;
    Jac     = Current.Element->Jac ;

    Grad_n[0] =
      Current.Element->dndu[i][0] * ( Jac.c22 * Jac.c33 - Jac.c23 * Jac.c32 )
      - Current.Element->dndu[i][1] * ( Jac.c12 * Jac.c33 - Jac.c13 * Jac.c32 )
      + Current.Element->dndu[i][2] * ( Jac.c12 * Jac.c23 - Jac.c22 * Jac.c13 );

    Grad_n[1] =
      - Current.Element->dndu[i][0] * ( Jac.c21 * Jac.c33 - Jac.c23 * Jac.c31 )
      + Current.Element->dndu[i][1] * ( Jac.c11 * Jac.c33 - Jac.c13 * Jac.c31 )
      - Current.Element->dndu[i][2] * ( Jac.c11 * Jac.c23 - Jac.c13 * Jac.c21 );

    Grad_n[2] =
      Current.Element->dndu[i][0] * ( Jac.c21 * Jac.c32 - Jac.c22 * Jac.c31 )
      - Current.Element->dndu[i][1] * ( Jac.c11 * Jac.c32 - Jac.c12 * Jac.c31 )
      + Current.Element->dndu[i][2] * ( Jac.c11 * Jac.c22 - Jac.c12 * Jac.c21 );

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

// Blex added 25/04/14 update 06/06/14
void F_Felec (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_Felec'");

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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - 0.5 * ( dsdx[0] * ( squF[0] - squF[1] - squF[2] )
               +  2 * dsdx[1] * squF[3]
               +  2 * dsdx[2] * squF[5]) ;

      s[1] = - 0.5 * ( dsdx[1] * ( - squF[0] + squF[1] - squF[2] )
               +  2 * dsdx[0] * squF[3]
               +  2 * dsdx[2] * squF[4]) ;

      s[2] = - 0.5 * ( dsdx[2] * ( - squF[0] - squF[1] + squF[2] )
               +  2 * dsdx[0] * squF[5]
               +  2 * dsdx[1] * squF[4]) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_Felec'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFxdux (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFxdux'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - squF[0] * dsdx[0] ;

      s[1] = - squF[0] * dsdx[1] ;

      s[2] = - squF[0] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFxdux'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dFydux (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFydux'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - 0.5 * (2 * squF[3] * dsdx[0] + (- squF[0] - squF[1] + squF[2]) * dsdx[1] - 2 * squF[4] * dsdx[2])  ;

      s[1] = - 0.5 * ((squF[0] + squF[1] - squF[2]) * dsdx[0] + 2 * squF[3] * dsdx[1] + 2 * squF[5] * dsdx[2]) ;

      s[2] = - 0.5 * (2 * squF[4] * dsdx[0] - 2 * squF[5] * dsdx[1] + 2 * squF[3] * dsdx[2]) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFydux'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFzdux (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFzdux'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - 0.5 * (2 * squF[5] * dsdx[0] - 2 * squF[4] * dsdx[1] + (-squF[0] + squF[1] - squF[2]) * dsdx[2]) ;

      s[1] = - 0.5 * (2 * squF[4] * dsdx[0] + 2 * squF[5] * dsdx[1] - 2 * squF[3] * dsdx[2]) ;

      s[2] = - 0.5 * ((squF[0] - squF[1] + squF[2]) * dsdx[0] + 2 * squF[3] * dsdx[1] + 2 * squF[5] * dsdx[2]) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFzdux'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFxduy (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFxduy'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - 0.5 * (2 * squF[3] * dsdx[0] + (squF[0] + squF[1] - squF[2]) * dsdx[1] + 2 * squF[4] * dsdx[2]) ;

      s[1] = - 0.5 * ((-squF[0] - squF[1] + squF[2]) * dsdx[0] + 2 * squF[3] * dsdx[1] - 2 * squF[5] * dsdx[2]) ;

      s[2] = - 0.5 * (- 2 * squF[4] * dsdx[0] + 2 * squF[5] * dsdx[1] + 2 * squF[3] * dsdx[2]) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFxduy'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFyduy (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFyduy'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - squF[1] * dsdx[0] ;

      s[1] = - squF[1] * dsdx[1] ;

      s[2] = - squF[1] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFyduy'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFzduy (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFzduy'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - 0.5 * (2 * squF[4] * dsdx[0] + 2 * squF[5] * dsdx[1] - 2 * squF[3] * dsdx[2])  ;

      s[1] = - 0.5 * (-2 * squF[5] * dsdx[0] + 2 * squF[4] * dsdx[1] + (squF[0] - squF[1] - squF[2]) * dsdx[2]) ;

      s[2] = - 0.5 * (2 * squF[3] * dsdx[0] + (-squF[0] + squF[1] + squF[2]) * dsdx[1] + 2 * squF[4] * dsdx[2]) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFzduy'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFxduz (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFxduz'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - 0.5 * (2 * squF[5] * dsdx[0] + 2 * squF[4] * dsdx[1] + (squF[0] - squF[1] + squF[2]) * dsdx[2]) ;

      s[1] = - 0.5 * (-2 * squF[4] * dsdx[0] + 2 * squF[5] * dsdx[1] + 2 * squF[3] * dsdx[2]) ;

      s[2] = - 0.5 * ((-squF[0] + squF[1] - squF[2]) * dsdx[0] - 2 * squF[3] * dsdx[1] + 2 * squF[5] * dsdx[2]) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFxduz'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFyduz (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFyduz'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - 0.5 * (2 * squF[4] * dsdx[0] - 2 * squF[5] * dsdx[1] + 2 * squF[3] * dsdx[2]) ;

      s[1] = - 0.5 * (2 * squF[5] * dsdx[0] + 2 * squF[4] * dsdx[1] + (-squF[0] + squF[1] + squF[2]) * dsdx[2]) ;

      s[2] = - 0.5 * (-2 * squF[3] * dsdx[0] + (squF[0] - squF[1] - squF[2]) * dsdx[1] + 2 * squF[4] * dsdx[2]) ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFyduz'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}


void F_dFzduz (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[6] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFzduz'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - squF[2] * dsdx[0]  ;

      s[1] = - squF[2] * dsdx[1] ;

      s[2] = - squF[2] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFzduz'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}



void F_dFxdv (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[3] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFxdv'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - squF[0] * dsdx[0] - squF[1] * dsdx[1] - squF[2] * dsdx[2]  ;

      s[1] = squF[1] * dsdx[0] - squF[0] * dsdx[1] ;

      s[2] = squF[2] * dsdx[0] - squF[0] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFxdv'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dFydv (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[3] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFydv'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - squF[1] * dsdx[0] + squF[0] * dsdx[1]  ;

      s[1] = - squF[0] * dsdx[0] - squF[1] * dsdx[1] - squF[2] * dsdx[2] ;

      s[2] = squF[2] * dsdx[1] - squF[1] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFydv'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dFzdv (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[3] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dFzdv'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = - squF[2] * dsdx[0] + squF[0] * dsdx[2]  ;

      s[1] = - squF[2] * dsdx[1] + squF[1] * dsdx[2] ;

      s[2] = - squF[0] * dsdx[0] - squF[1] * dsdx[1] - squF[2] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dFzdv'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dWedxdv (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[3] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dWedxdv'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = -squF[0] * dsdx[0] + squF[1] * dsdx[1] + squF[2] * dsdx[2] ;

      s[1] = -squF[1] * dsdx[0] - squF[0] * dsdx[1] ;

      s[2] = -squF[2] * dsdx[0] - squF[0] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dWedxdv'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dWedydv (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[3] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dWedydv'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = -squF[1] * dsdx[0] - squF[0] * dsdx[1] ;

      s[1] = squF[0] * dsdx[0] - squF[1] * dsdx[1] + squF[2] * dsdx[2] ;

      s[2] = -squF[2] * dsdx[1] - squF[1] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dWedydv'") ;
    }
  }

  V->Type = VECTOR ;
  V->Val[0] = s[0] ;
  V->Val[1] = s[1] ;
  V->Val[2] = s[2] ;
}

void F_dWedzdv (F_ARG)
{
  MATRIX3x3 Jac ;
  double DetJac ;
  double DetJac_dx[3], squF[3] ;
  double dsdx[3] ; //Derivative of the base functions with respect to x, y and z
  double s[3] = {0.,0.,0.};

  if(!Current.Element)
    Message::Error("Uninitialized Element in 'F_dWedzdv'");


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
      dsdx[0] = DetJac_dx[0]/DetJac ;
      dsdx[1] = DetJac_dx[1]/DetJac ;
      dsdx[2] = DetJac_dx[2]/DetJac ;

      s[0] = -squF[2] * dsdx[0] - squF[0] * dsdx[2] ;

      s[1] = -squF[2] * dsdx[1] - squF[1] * dsdx[2] ;

      s[2] = squF[0] * dsdx[0] + squF[1] * dsdx[1] - squF[2] * dsdx[2] ;
    }
    else {
      Message::Warning("Zero determinant in 'F_dWedzdv'") ;
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

void F_AtIndex(F_ARG)
{
  int index = 0;
  double ret = 0.;
  if(A->Type != SCALAR){
    Message::Error("Non scalar argument for function 'AtIndex");
  }
  else{
    index = (int)A->Val[0];
    if (index < 0 || index >= Fct->NbrParameters){
      Message::Error("Wrong index in function 'AtIndex': %d not in [0,%d[",
                     index, Fct->NbrParameters);
    }
    else{
      ret = Fct->Para[index];
    }
  }

  V->Type = SCALAR;
  V->Val[0] = ret;
  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
}
