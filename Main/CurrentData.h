#ifndef _CURRENT_DATA_H_
#define _CURRENT_DATA_H_

#include "Data_Active.h"
#include "DofData.h"

/* General data */

extern struct Problem          Problem_S ;
extern struct PostProcessing   PostProcessing_S ;

extern int   Flag_PRE, Flag_PAR, Flag_CAL, Flag_POS, Flag_IPOS ;
extern int   Flag_XDATA ;
extern int   Flag_CHECK, Flag_RESTART ;
extern int   Flag_LOG, Flag_VERBOSE ;
extern int   Flag_BIN, Flag_PROGRESS ;

extern char *Name_Resolution, *Name_PostProcessing, *Name_PostOperation ;
extern char *Name_MshFile, * Name_ResFile ;

extern struct Expression  *Problem_Expression0 ;
extern int                 TreatmentStatus ;
extern List_T             *PreResolutionIndex_L ;

extern FILE  *LogStream, *PrintStream, *PostStream ;

struct PreResolutionInfo {
  int  Index, Type ;
} ;

/* Type PreResolution */

#define PR_CONSTRAINT           1
#define PR_GLOBALBASISFUNCTION  2


/* Current values */

extern struct CurrentData  Current ;

#endif
