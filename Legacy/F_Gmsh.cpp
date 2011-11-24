// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <math.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Message.h"

#if defined(HAVE_GMSH)

#include <gmsh/Gmsh.h>
#include <gmsh/PView.h>

void F_View(F_ARG)
{
  printf("HEY! I have %d views\n", PView::list.size());
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

#else

void F_View(F_ARG)
{
  Message::Error("You need to compile GetDP with Gmsh support to use 'View'");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

#endif
