/* $Id: CurrentData.h,v 1.6 2000-09-07 18:47:25 geuzaine Exp $ */
#ifndef _CURRENT_DATA_H_
#define _CURRENT_DATA_H_

#include "Data_Active.h"
#include "DofData.h"
#include "Magic.h"

/* General data */

extern struct Problem          Problem_S ;

extern int    Flag_PRE, Flag_PAR, Flag_CAL, Flag_POS, Flag_IPOS ;
extern int    Flag_XDATA ;
extern int    Flag_CHECK, Flag_RESTART ;
extern int    Flag_LOG, Flag_VERBOSE ;
extern int    Flag_BIN, Flag_PROGRESS, Flag_SPLIT ;
extern double Flag_DEGREE ;

extern char  Name_Generic[MAX_FILE_NAME_LENGTH] ;
extern char *Name_Resolution ;
extern char *Name_PostProcessing[NBR_MAX_POS], *Name_PostOperation[NBR_MAX_POS] ;
extern char *Name_MshFile, *Name_ResFile[NBR_MAX_RES], *Name_AdaptFile ;

extern struct Expression  *Problem_Expression0 ;
extern int                 TreatmentStatus ;
extern List_T             *GeoData_L , *PreResolutionIndex_L ;

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
