// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <stdio.h>
#include <stdlib.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "SolvingOperations.h"
#include "Message.h"

extern struct CurrentData Current ;

void Operation_Debug(struct Operation *Operation_P,
                     struct DofData *DofData_P)
{
  Message::Info(0, "Current step %g, time %g", Current.TimeStep, Current.Time);

  // print summary of all solutions currently in DofData
  Message::Info(0, "DofData %d", DofData_P->Num);
  Message::Info(0, "   %d harmonics", DofData_P->NbrHar);
  Message::Info(0, "   %d Dofs (all %d)", DofData_P->NbrDof, DofData_P->NbrAnyDof);
  Message::Info(0, "   Init: %d %d %d %d %d %d %d", DofData_P->Flag_Init[0],
                DofData_P->Flag_Init[1], DofData_P->Flag_Init[2], DofData_P->Flag_Init[3],
                DofData_P->Flag_Init[4], DofData_P->Flag_Init[5], DofData_P->Flag_Init[6]);
  Message::Info(0, "   %d solutions", List_Nbr(DofData_P->Solutions));
  for(int i = 0; i < List_Nbr(DofData_P->Solutions); i++){
    struct Solution *s = (struct Solution*)List_Pointer(DofData_P->Solutions, i);
    Message::Info(0, "   %d: step %d time %g", i, s->TimeStep, s->Time);
  }
  if(DofData_P->CurrentSolution){
    struct Solution *s = DofData_P->CurrentSolution;
    Message::Info(0, "Current solution: step %d time %g", s->TimeStep, s->Time);
  }

  // print current run-time variables
  std::map<std::string, Value> &var = Get_AllValueSaved();
  Message::Info(0, "%d runtime variables", (int)var.size());
  for(std::map<std::string, Value>::iterator it = var.begin(); it != var.end(); it++){
    std::string v = Print_Value_ToString(&it->second);
    Message::Info(0, "   $%s = %s", it->first.c_str(), v.c_str());
  }

}
