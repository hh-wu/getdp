// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _OS_H_
#define _OS_H_

#include <string>
#include <stdio.h>

FILE *FOpen(const char *f, const char *mode);
void GetResources(double *s, long *mem);
double GetTotalRam();
double GetTimeOfDay();
void IncreaseStackSize();
void SleepSeconds(double s);
int BlockingSystemCall(const char *command);
int RemoveFile(const std::string &fileName);
int RenameFile(const std::string &oldName, const std::string &newName);
int StatusFile(const std::string &fileName);
int CreateDir(const std::string &dirName);
int CreateDirs(const std::string &dirName);
std::string GetFullPath(const std::string &fileName);
std::string GetDirName(const std::string &fileName);
std::string GetBaseName(const std::string &fileName);

#endif
