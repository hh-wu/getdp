#ifndef _UTILS_H_
#define _UTILS_H_

#include "GetDP.h"
#include "Data_Numeric.h"

extern int Verbose, NbCpu, RankCpu;

// prototypes

int Cmp(char *str1, char *str2, int min);
double GetNum(int argc, char *argv[], int *i);
char *GetString(int argc, char *argv[], int *i);

#endif
