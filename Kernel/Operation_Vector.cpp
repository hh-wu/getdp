// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <map>
#include <string>
#include <vector>
#include "ProData.h"
#include "ProParser.h"
#include "DofData.h"
#include "Message.h"

/* TODO:

      Copy[ x() , y() ];
      Copy[ "x" , "y" ];
      Copy[ "x" , y() ];
      Copy[ x() , "y" ];
      AXPY[ a, x() , y() ]; // urgent
      AXPY[ a , "x", "y" ];// urgent
      Norm2[ x(), $nrm2 ]; // urgent
      Norm2[ "x", $nrm2 ];
      Dot[ "x", "y", $dot ];
      Dot[ x(), y(), $dot ]; // urgent

+

1) clarify "from" and "to" in Operation_P->Case.Copy
2) change "Operation_CopyVector" -> "Operation_CopySystemVector"

*/

void Operation_CopyVector(struct Operation *Operation_P,
                          struct DofData *DofData_P)
{
  // this global map is never freed for now
  static std::map<std::string, gVector> vectorMap;

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
      std::map<std::string, gVector>::iterator it =
        vectorMap.find(Operation_P->Case.Copy.from);
      if(it != vectorMap.end())
        from = &it->second;
      else
        Message::Error("Non-existant vector `%s' to copy from",
                       Operation_P->Case.Copy.from);
    }
  }

  if(Operation_P->Case.Copy.to){
    if(Operation_P->Case.Copy.useList){
      to = &tmp;
    }
    else{
      std::map<std::string, gVector>::iterator it =
        vectorMap.find(Operation_P->Case.Copy.to);
      if(it != vectorMap.end())
        to = &it->second;
      else{
        gVector n;
        LinAlg_CreateVector(&n, &DofData_P->Solver, DofData_P->NbrDof) ;
        vectorMap[Operation_P->Case.Copy.to] = n;
        to = &vectorMap[Operation_P->Case.Copy.to];
      }
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
