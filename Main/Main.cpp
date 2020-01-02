// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <stdio.h>
#include "MainKernel.h"
#include "Message.h"
#include "GetDPConfig.h"
#include "ProData.h"
#include "getdp.h"

int main(int argc, char **argv)
{
#if defined(HAVE_KERNEL)
  Message::SetExitOnError(1);
  MainKernel(argc, argv);
#else
  Init_ProblemStructure();
  Read_ProblemPreamble();
  if(argc > 1)
    Read_ProblemStructure(argv[1]);
  Finalize_ProblemStructure();
  Print_ProblemStructure();
#endif

#if 0 // debug memory leaks
  for(int i = 0; i < 100; i++){
    printf("solving problem %d\n", i);
    MainKernel(argc, argv);
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
