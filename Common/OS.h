// GetDP - Copyright (C) 1997-2013 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#ifndef _OS_H_
#define _OS_H_

#include <string>

void GetResources(double *s, long *mem);
void IncreaseStackSize();
int BlockingSystemCall(const char *command);
int RemoveFile(const std::string &fileName);

#endif
