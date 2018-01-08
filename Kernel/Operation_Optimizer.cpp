// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributed by Erin Kuci

#include <map>
#include <string>
#include <vector>
#include "ProData.h"
#include "DofData.h"
#include "Message.h"
#include "GetDPConfig.h"

#if defined(HAVE_MMA) && defined(HAVE_PETSC)

void Operation_OptimizerInitialize(struct Operation *Operation_P)
{
  printf("opti init\n");
}

void Operation_OptimizerUpdate(struct Operation *Operation_P)
{
  printf("opti update\n");
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
