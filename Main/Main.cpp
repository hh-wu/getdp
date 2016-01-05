// GetDP - Copyright (C) 1997-2016 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include <stdio.h>
#include "MainLegacy.h"
#include "Message.h"
#include "GetDP.h"

int main(int argc, char **argv)
{
#if 1
  Message::SetExitOnError(true);
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
  args.push_back("benchmarks/machines/pmsm.pro");
  args.push_back("-solve");
  args.push_back("TimeDomain");
  args.push_back("-pos");
  args.push_back("Get_LocalFields");
  for(int i = 1; i < 10; i++)
  GetDP(args);
#endif
}
