// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "MainLegacy.h"
#include <stdio.h>

int main(int argc, char **argv)
{
#if 1
  MainLegacy(argc, argv);
#else // debug memory leaks
  for(int i = 0; i < 100; i++){
    printf("solving problem %d\n", i);
    MainLegacy(argc, argv);
  }
#endif
}
