// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _OS_H_
#define _OS_H_

void GetResources(double *s, long *mem);
void IncreaseStackSize();
int BlockingSystemCall(const char *command);

#endif
