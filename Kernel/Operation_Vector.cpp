// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <map>
#include <string>
#include <vector>
#include "ProData.h"
#include "ProParser.h"
#include "DofData.h"
#include "Message.h"
#include "Cal_Quantity.h"

/* TODO:

      Copy[ x() , y() ];
      Copy[ "x" , "y" ];
      Copy[ "x" , y() ];
      Copy[ x() , "y" ];
      AXPY[ a, x() , y() ]; // urgent
      AXPY[ a , "x", "y" ];// -> what is done now: z=a*x+b*y
      Norm2[ x(), $nrm2 ]; // urgent
      Norm2[ "x", $nrm2 ];
      Dot[ "x", "y", $dot ];
      Dot[ x(), y(), $dot ]; // urgent

+

1) clarify "from" and "to" in Operation_P->Case.Copy
2) change "Operation_CopyVector" -> "Operation_CopySystemVector"

*/

// Should preferably be implemented in an object-oriented way
#define VV_INITIALIZE 0
#define VV_GET_IF_EXISTS 1
#define VV_GET_AND_ADD_IF_NOT_EXIST 2
#define VV_ERASE_IF_EXISTS 3
#define VV_CLEAR_ALL 4
int manageVectorMap(int action, char *name, gVector **vector,
                          struct DofData *DofData_P)
{
  // Global map that is never freed
  static std::map<std::string, gVector> vectorMap;

  if(action == VV_INITIALIZE){ /* Nothing to do*/ }
  else if(action == VV_GET_IF_EXISTS)
  {
    std::map<std::string, gVector>::iterator it = vectorMap.find(name);
    if(it != vectorMap.end())
      *vector = &it->second;
    else
      return 1;
  }
  else if(action == VV_GET_AND_ADD_IF_NOT_EXIST)
  {
    std::map<std::string, gVector>::iterator it = vectorMap.find(name);
    if(it != vectorMap.end()){
      *vector = &it->second;
    }
    else{
      gVector n;
      LinAlg_CreateVector(&n, &DofData_P->Solver, DofData_P->NbrDof) ;
      vectorMap[name] = n;
      *vector = &vectorMap[name];
    }
  }
  else if(action == VV_ERASE_IF_EXISTS)
  {
    std::map<std::string, gVector>::iterator it = vectorMap.find(name);
    if(it != vectorMap.end())
    {
      LinAlg_DestroyVector(&it->second);
      vectorMap.erase(name);
    }
    else
      return 1;
  }
  else if(action == VV_CLEAR_ALL)
  {
    for(std::map<std::string, gVector>::iterator it = vectorMap.begin();
        it != vectorMap.end(); it++)
    {
      LinAlg_DestroyVector(&it->second);
    }
    vectorMap.clear();
  }
  else
  {
    Message::Error("Non valid action for manageVectorMap");
  }
  return 0;
}

void Operation_CopyVector(struct Operation *Operation_P,
                          struct DofData *DofData_P)
{
  // this global map is never freed for now
  manageVectorMap(VV_INITIALIZE, NULL, NULL, DofData_P);

  gVector *from = 0, *to = 0, tmp;

  if(Operation_P->Case.Copy.useList)
    LinAlg_CreateVector(&tmp, &DofData_P->Solver, DofData_P->NbrDof) ;

  if(Operation_P->Type == OPERATION_COPYSOLUTION){
    if(DofData_P->CurrentSolution){
      if(Operation_P->Case.Copy.from)
        to = &DofData_P->CurrentSolution->x;
      else
        from = &DofData_P->CurrentSolution->x;
    }
    else
      Message::Error("No current solution available to copy");
  }
  else if(Operation_P->Type == OPERATION_COPYRHS){
    if(Operation_P->Case.Copy.from)
      to = &DofData_P->b;
    else
      from = &DofData_P->b;
  }
  else if(Operation_P->Type == OPERATION_COPYRESIDUAL){
    if(Operation_P->Case.Copy.from)
      to = &DofData_P->res;
    else
      from = &DofData_P->res;
  }
  else if(Operation_P->Type == OPERATION_COPYINCREMENT){
    if(Operation_P->Case.Copy.from)
      to = &DofData_P->dx;
    else
      from = &DofData_P->dx;
  }
  else{
    Message::Error("Copy operation not implemented yet");
  }

  if(Operation_P->Case.Copy.from){
    if(Operation_P->Case.Copy.useList){
      Constant *c = Get_ParserConstant(Operation_P->Case.Copy.from);
      if(c && c->Type == VAR_LISTOFFLOAT){
        if(List_Nbr(c->Value.List) == DofData_P->NbrDof){
          for(int i = 0; i < List_Nbr(c->Value.List); i++){
            double d; List_Read(c->Value.List, i, &d);
            LinAlg_SetDoubleInVector(d, &tmp, i);
          }
          LinAlg_AssembleVector(&tmp);
          from = &tmp;
        }
        else if(List_Nbr(c->Value.List) == 2 * DofData_P->NbrDof){
          for(int i = 0, j = 0; i < List_Nbr(c->Value.List); i += 2, j++){
            double d1; List_Read(c->Value.List, i, &d1);
            double d2; List_Read(c->Value.List, i + 1, &d2);
            LinAlg_SetComplexInVector(d1, d2, &tmp, j, j);
          }
          LinAlg_AssembleVector(&tmp);
          from = &tmp;
        }
        else{
          Message::Error("Incompatible sizes for vector copy");
        }
      }
      else if(GetDPNumbers.count(Operation_P->Case.Copy.from)){
        std::vector<double> &v = GetDPNumbers[Operation_P->Case.Copy.from];
        if((int)v.size() == DofData_P->NbrDof){
          for(unsigned int i = 0; i < v.size(); i++){
            LinAlg_SetDoubleInVector(v[i], &tmp, i);
          }
          LinAlg_AssembleVector(&tmp);
          from = &tmp;
        }
        else if((int)v.size() == 2 * DofData_P->NbrDof){
          for(unsigned int i = 0; i < v.size(); i += 2){
            LinAlg_SetComplexInVector(v[i], v[i+1], &tmp, i/2, i/2);
          }
          LinAlg_AssembleVector(&tmp);
          from = &tmp;
        }
        else{
          Message::Error("Incompatible sizes for vector copy");
        }
      }
      else{
        Message::Error("Non-existant list `%s()' to copy from",
                       Operation_P->Case.Copy.from);
      }
    }
    else{
      if(manageVectorMap(VV_GET_IF_EXISTS, Operation_P->Case.Copy.from, &from, DofData_P))
        Message::Error("Non-existant vector `%s' to copy from",
                       Operation_P->Case.Copy.from);
    }
  }

  if(Operation_P->Case.Copy.to){
    if(Operation_P->Case.Copy.useList){
      to = &tmp;
    }
    else{
      manageVectorMap(VV_GET_AND_ADD_IF_NOT_EXIST, Operation_P->Case.Copy.to, &to, DofData_P);
    }
  }

  if(from && to){
    int n1, n2;
    LinAlg_GetVectorSize(from, &n1);
    LinAlg_GetVectorSize(to, &n2);
    if(n1 == n2)
      LinAlg_CopyVector(from, to);
    else
      Message::Error("Incompatible sizes for vector copy (%d != %d)",
                     n1, n2);
  }
  else{
    Message::Error("Missing vector for copy");
  }

  if(Operation_P->Case.Copy.useList){
    if(Operation_P->Case.Copy.to){
      // create list directly in GetDPNumbers: using parser constants here is
      // useless since we can never access it
      std::vector<double> v;
      for(int i = 0; i < DofData_P->NbrDof; i++){
        gScalar s;
        LinAlg_GetScalarInVector(&s, to, i);
        if(gSCALAR_SIZE == 2){
          double d1, d2; LinAlg_GetComplexInScalar(&d1, &d2, &s);
          v.push_back(d1); v.push_back(d2);
        }
        else{
          double d; LinAlg_GetDoubleInScalar(&d, &s);
          v.push_back(d);
        }
      }
      GetDPNumbers[Operation_P->Case.Copy.to] = v;
    }
    LinAlg_DestroyVector(&tmp) ;
  }
}

void Operation_AddVector(struct Operation *Operation_P,
                          struct DofData *DofData_P)
{
  struct Value Value;
  Get_ValueOfExpressionByIndex(Operation_P->Case.AddVector.alphaIndex,
              NULL, 0., 0., 0., &Value);
  double alpha = Value.Val[0];
  Get_ValueOfExpressionByIndex(Operation_P->Case.AddVector.betaIndex,
              NULL, 0., 0., 0., &Value);
  double beta = Value.Val[0];

  gVector *v1, *v2, *v3;
  // Checking if v1 and v2 exist. If not: error.
  if(manageVectorMap(VV_GET_IF_EXISTS, Operation_P->Case.AddVector.v1, &v1, DofData_P))
    Message::Error("Non-existant vector `%s'",
                    Operation_P->Case.AddVector.v1);
  if(manageVectorMap(VV_GET_IF_EXISTS, Operation_P->Case.AddVector.v2, &v2, DofData_P))
    Message::Error("Non-existant vector `%s'",
                    Operation_P->Case.AddVector.v2);
  // Checking if v3 exists. If not: create it.
  manageVectorMap(VV_GET_AND_ADD_IF_NOT_EXIST, Operation_P->Case.AddVector.v3, &v3, DofData_P);
  // Check the sizes and perform the operation if OK
  int n1, n2, n3;
  LinAlg_GetVectorSize(v1, &n1);
  LinAlg_GetVectorSize(v2, &n2);
  LinAlg_GetVectorSize(v3, &n3);
  if(n1 == n2 && n1 == n3)
    LinAlg_AddProdVectorDoubleProdVectorDouble(alpha, v1, beta, v2, v3);
  else
    Message::Error("Incompatible sizes for vector manipulation (%d, %d and %d)",
                   n1, n2, n3);
  /* DEBUG (to check the operation is ok)
  PetscScalar *a, *b, *c;
  VecGetArray(v1->V, &a);   VecGetArray(v2->V, &b);  VecGetArray(v3->V, &c);
  for(int i=100; i<110; i++)
  {
    Message::Warning("%g\t%g\t%g", real(a[i]), real(b[i]), real(c[i]));
  }
  // */
}

void Operation_ClearVectors( struct Operation *Operation_P,
                            struct DofData *DofData_P)
{
  if (List_Nbr(Operation_P->Case.ClearVectors.Names)==0)
  {
    Message::Info("ClearVectors: Clear All Vectors");
    manageVectorMap(VV_CLEAR_ALL, NULL, NULL, DofData_P);
  }

  for(int i = 0; i < List_Nbr(Operation_P->Case.ClearVectors.Names); i++){
    char *s;
    List_Read(Operation_P->Case.ClearVectors.Names, i, &s);

    if(manageVectorMap(VV_ERASE_IF_EXISTS,s, NULL, DofData_P))
      Message::Info("ClearVectors: Unknown Vector %s",  s);
    else
      Message::Info("ClearVectors: Clear Vector %s",  s);
  }
}
