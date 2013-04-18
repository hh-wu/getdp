// GetDP - Copyright (C) 1997-2013 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include <stdio.h>
#include "MainLegacy.h"
#include "GetDP.h"

int main(int argc, char **argv)
{
#if 1
  MainLegacy(argc, argv);
#endif

#if 0 // debug memory leaks
  for(int i = 0; i < 100; i++){
    printf("solving problem %d\n", i);
    MainLegacy(argc, argv);
  }
#endif

#if 0 // test simple standalone interface
  std::vector<std::string> args;
  args.push_back("getdp");
  args.push_back("demos/magnet");
  GetDP(args);

  args.clear();
  args.push_back("getdp");
  args.push_back("demos/magnet");
  args.push_back("-solve");
  args.push_back("MagSta_a");
  args.push_back("-pos");
  args.push_back("a");
  GetDP(args);

  args.clear();
  args.push_back("getdp");
  args.push_back("demos/magnet");
  args.push_back("-solve");
  args.push_back("MagSta_phi");
  args.push_back("-pos");
  args.push_back("phi");
  GetDP(args);
#endif
}
