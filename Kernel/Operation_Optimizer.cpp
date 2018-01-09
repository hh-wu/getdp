// GetDP - Copyright (C) 1997-2018 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributed by Erin Kuci

#include <map>
#include <string>
#include <vector>
#include "ProData.h"
#include "ProParser.h"
#include "Cal_Quantity.h"
#include "Message.h"
#include "GetDPConfig.h"

#if defined(HAVE_MMA) && defined(HAVE_PETSC)

void Operation_OptimizerInitialize(struct Operation *Operation_P)
{
  printf("Opti init:\n");

  printf(" - algorithm: %s\n", Operation_P->Case.OptimizerInitialize.algorithm);

  List_T *lb = Operation_P->Case.OptimizerInitialize.currentPointLowerBounds;
  printf(" - lower bounds: ");
  for(int i = 0; i < List_Nbr(lb); i++){
    double d;
    List_Read(lb, i, &d);
    printf("%g ", d);
  }
  printf("\n");

  List_T *ub = Operation_P->Case.OptimizerInitialize.currentPointUpperBounds;
  printf(" - upper bounds: ");
  for(int i = 0; i < List_Nbr(ub); i++){
    double d;
    List_Read(ub, i, &d);
    printf("%g ", d);
  }
  printf("\n");
}

static void debugInput(const std::string &type, const std::string &name)
{
  std::map<std::string, std::map<int, std::vector<double> > >::iterator itv =
    GetDPNumbersMap.find(name);
  if(itv != GetDPNumbersMap.end()){
    printf(" - table %s:\n", type.c_str());
    for(std::map<int, std::vector<double> >::iterator it = itv->second.begin();
        it != itv->second.end(); it++){
      printf("  ele %d: ", it->first);
      for(unsigned int i = 0; i < it->second.size(); i++)
        printf("%g ", it->second[i]);
      printf("\n");
    }
  }
  else{
    std::map<std::string, std::vector<double> >::iterator its =
      GetDPNumbers.find(name);
    if(its != GetDPNumbers.end()){
      printf(" - scalar variable %s: ", type.c_str());
      for(unsigned int i = 0; i < its->second.size(); i++)
        printf("%g ", its->second[i]);
      printf("\n");
    }
    else{
      Message::Warning("Unknown %s: %s", type.c_str(), name.c_str());
    }
  }
}

void Operation_OptimizerUpdate(struct Operation *Operation_P)
{
  printf("Opti update:\n");

  debugInput("currentPoint", Operation_P->Case.OptimizerUpdate.currentPoint);
  debugInput("objective", Operation_P->Case.OptimizerUpdate.objective);
  debugInput("constraints", Operation_P->Case.OptimizerUpdate.constraints);
  debugInput("objectiveSensitivity", Operation_P->Case.OptimizerUpdate.objectiveSensitivity);
  debugInput("constraintsSensitivity", Operation_P->Case.OptimizerUpdate.constraintsSensitivity);

  Value v;
  v.Type = SCALAR;
  v.Val[0] = 1e-12;
  Cal_StoreInVariable(&v, Operation_P->Case.OptimizerUpdate.residual);
}

#else

void Operation_OptimizerInitialize(struct Operation *Operation_P)
{
  Message::Error("This version of GetDP is not compiled with MMA support");
}

void Operation_OptimizerUpdate(struct Operation *Operation_P)
{
  Message::Error("This version of GetDP is not compiled with MMA support");
}

#endif
