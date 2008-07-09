// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _OS_H_
#define _OS_H_

double GetTimeInSeconds();
void SleepInSeconds(double s);
void GetResources(double *s, long *mem);
void CheckResources();
double Cpu();
int GetProcessId();
int UnlinkFile(const char *name);
int StatFile(const char *filename);
int KillProcess(int pid);
int SystemCall(const char *command);

#endif
