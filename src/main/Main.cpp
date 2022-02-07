// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <stdio.h>
#include "MainKernel.h"
#include "Message.h"
#include "GetDPConfig.h"
#include "ProData.h"
#include "getdp.h"

#if defined(WIN32) && !defined(__CYGWIN__)

// in order to handle non-ASCII command line arguments on Windows, use wmain()
// instead of main() (we could also use main() and retrieve the "wide" args with
// GetCommandLineW() later on, but this would have side-effects on the flow);
// using wmain() with the mingw compilers requires adding the "-municode" linker
// flag

#include <windows.h>
#include <wchar.h>

static char *toUTF8(wchar_t *src)
{
  if(!src) return nullptr;
  size_t srclen = wcslen(src);
  int len =
    WideCharToMultiByte(CP_UTF8, 0, src, srclen, 0, 0, nullptr, nullptr);
  char *out = new char[len + 1];
  if(out) {
    WideCharToMultiByte(CP_UTF8, 0, src, srclen, out, len, nullptr, nullptr);
    out[len] = '\0';
  }
  return out;
}

int wmain(int argc, wchar_t *wargv[], wchar_t *envp[])
{
  char **argv = new char *[argc + 1];
  for(int i = 0; i < argc; i++) argv[i] = toUTF8(wargv[i]);
  argv[argc] = nullptr;

#else

int main(int argc, char **argv)
{

#endif

#if defined(HAVE_KERNEL)
  Message::SetExitOnError(1);
  return MainKernel(argc, argv);
#else
  Init_ProblemStructure();
  Read_ProblemPreamble();
  if(argc > 1) Read_ProblemStructure(argv[1]);
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

  return 0;
}
