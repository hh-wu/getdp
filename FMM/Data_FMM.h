/* $Id: Data_FMM.h,v 1.1 2003-03-17 16:13:07 sabarieg Exp $ */
#ifndef _DATA_FMM_H_
#define _DATA_FMM_H_ 

#include "List.h"

#define NBR_MAX_DIR 1500 /* Watch out: It could cause OUT OF MEMORY! */
#define NBR_MAX_EXP 100


struct FMMData {
  int      Group ;
  double   Xgc, Ygc, Zgc ;
  double   Rmax ;
  List_T  *Element ;
};


struct FMMGroup {
  int      InIndex ;
  List_T   *List ;
};


#endif















