// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdio.h>
#include <stdlib.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "SolvingOperations.h"
#include "Message.h"

extern struct CurrentData Current ;

void Operation_Debug(struct Operation *Operation_P,
                     struct DofData *DofData_P)
{
  Message::Info(3, "Current step %g, time %g", Current.TimeStep, Current.Time);

  // print summary of all solutions currently in DofData
  Message::Info(3, "DofData %d", DofData_P->Num);
  Message::Info(3, "   %d harmonics", DofData_P->NbrHar);
  Message::Info(3, "   %d Dofs (all %d)", DofData_P->NbrDof, DofData_P->NbrAnyDof);
  Message::Info(3, "   Init: %d %d %d %d %d %d %d", DofData_P->Flag_Init[0],
                DofData_P->Flag_Init[1], DofData_P->Flag_Init[2], DofData_P->Flag_Init[3],
                DofData_P->Flag_Init[4], DofData_P->Flag_Init[5], DofData_P->Flag_Init[6]);
  Message::Info(3, "   %d solutions", List_Nbr(DofData_P->Solutions));
  for(int i = 0; i < List_Nbr(DofData_P->Solutions); i++){
    struct Solution *s = (struct Solution*)List_Pointer(DofData_P->Solutions, i);
    Message::Info(3, "   %d: step %d time %g", i, s->TimeStep, s->Time);
  }
  if(DofData_P->CurrentSolution){
    struct Solution *s = DofData_P->CurrentSolution;
    Message::Info(3, "Current solution: step %d time %g", s->TimeStep, s->Time);
  }

  // print current run-time variables
  std::map<std::string, Value> &var = Get_AllValueSaved();
  Message::Info(3, "%d runtime variables", (int)var.size());
  for(std::map<std::string, Value>::iterator it = var.begin(); it != var.end(); it++){
    Message::Info(3, "   $%s", it->first.c_str());
  }

}
