#include <stdio.h>
#include "ProData.h"

void Operation_IterativeLinearSolver(struct Resolution  *Resolution_P,
                                     struct Operation   *Operation_P,
                                     struct DofData     *DofData_P0,
                                     struct GeoData     *GeoData_P0)
{

  printf("HELLO! %s\n", Operation_P->Case.IterativeLinearSolver.Type);

}
