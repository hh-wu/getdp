// GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#ifndef _OS_H_
#define _OS_H_

#include <string>
#include <stdio.h>

FILE *FOpen(const char *f, const char *mode);
void GetResources(double *s, long *mem);
void IncreaseStackSize();
int BlockingSystemCall(const char *command);
int RemoveFile(const std::string &fileName);
int CreateDir(const std::string &dirName);
int CreateDirs(const std::string &dirName);

#endif
