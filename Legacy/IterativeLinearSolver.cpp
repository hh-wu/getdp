#include <stdio.h>
#include "ProData.h"
#include "SolvingOperations.h"

void Operation_IterativeLinearSolver(struct Resolution  *Resolution_P,
                                     struct Operation   *Operation_P,
                                     struct DofData     *DofData_P0,
                                     struct GeoData     *GeoData_P0)
{

  printf("HELLO! %s\n", Operation_P->Case.IterativeLinearSolver.Type);

  for(int i = 0; i < 10; i++){
    printf("Performing GetDP operations for Ax -- ITER %d...\n", i);

    Treatment_Operation(Resolution_P,
                        Operation_P->Case.IterativeLinearSolver.Operations_Ax,
                        DofData_P0, GeoData_P0, NULL, NULL) ;
  }

}
