#ifndef _UTILS_H_
#define _UTILS_H_

#include <complex>

extern std::complex<double> I;

int Cmp(char *str1, char *str2, int min);
double GetNum(int argc, char *argv[], int *i);

extern int Verbose;
extern int NBRCPU, RANKCPU;

#endif
