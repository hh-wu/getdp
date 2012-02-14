#include <stdio.h>
#include "ProData.h"
#include "DofData.h"
#include "SolvingOperations.h"

extern struct CurrentData Current ;
extern int Flag_IterativeLoopConverged;

void Operation_TimeLoopAdaptive(Resolution  *Resolution_P,
                                Operation   *Operation_P,
                                DofData     *DofData_P0,
                                GeoData     *GeoData_P0)
{
  printf("AdaptiveLoop parameters: Tstart=%g Tend=%g DtMin=%g DtMax=%g MaxOrder=%g\n",
         Operation_P->Case.TimeLoopAdaptive.Time0,
         Operation_P->Case.TimeLoopAdaptive.TimeMax,
         Operation_P->Case.TimeLoopAdaptive.DTimeMin,
         Operation_P->Case.TimeLoopAdaptive.DTimeMax,
         Operation_P->Case.TimeLoopAdaptive.MaxOrder);

  for(int i = 0; i < List_Nbr(Operation_P->Case.TimeLoopAdaptive.DefineSystemIndices); i++){
    int j;
    List_Read(Operation_P->Case.TimeLoopAdaptive.DefineSystemIndices, i, &j);
    DefineSystem *sys = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem, j) ;
    printf("   system: %s\n", sys->Name);
    DofData *dofs = DofData_P0 + j;

    // get current solution from dofdata and allocate what's needed
    // dofs->CurrentSolution;
  }

  Current.Time = Operation_P->Case.TimeLoopAdaptive.Time0 ;

  while (Current.Time < Operation_P->Case.TimeLoopAdaptive.TimeMax * 0.999999) {

    int Save_TypeTime  = Current.TypeTime ;
    int Save_DTime     = Current.DTime ;
    Current.TypeTime = TIME_THETA ; // or sth else

    Current.TimeStep += 1. ;
    Current.DTime = 0.2222 ;

    while(1){ // loop
      Flag_IterativeLoopConverged = 1;

      printf("Performing GetDP operations for predictor:\n");

      printf("Performing GetDP operations for corrector:\n");

      Current.Time += Current.DTime ;
      double Save_Time = Current.Time ;
      Treatment_Operation(Resolution_P,
                          Operation_P->Case.TimeLoopAdaptive.Operation,
                          DofData_P0, GeoData_P0, NULL, NULL) ;
      Current.Time = Save_Time;

      // check convergence and error; change dt and go back if necessary
      bool ok = true;
      if(ok){
        break;
      }
      else{
        Current.Time -= Current.DTime ;
        Current.DTime = 0.111 ;
        // ...
      }
    }

    // if we're happy, perform operations at the end of the step
    printf("Performing GetDP operations at the end of step:\n");
    double Save_Time = Current.Time ;
    Treatment_Operation(Resolution_P,
                        Operation_P->Case.TimeLoopAdaptive.OperationEnd,
                        DofData_P0, GeoData_P0, NULL, NULL) ;
    Current.Time = Save_Time;

    Current.TypeTime = Save_TypeTime ;
    Current.DTime = Save_DTime ;
  }
}
