#ifndef _GSL_NEWT_H_
#define _GSL_NEWT_H_

void newt(double x[], int n, int *check, void (*func)(int, double [], double []));

#endif
