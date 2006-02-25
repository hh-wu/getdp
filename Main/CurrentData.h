/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

#ifndef _CURRENT_DATA_H_
#define _CURRENT_DATA_H_

#include "Data_Active.h"
#include "DofData.h"
#include "Magic.h"

/* General data */

extern struct Problem          Problem_S ;

extern int    Flag_PRE, Flag_PAR, Flag_CAL, Flag_POS, Flag_IPOS ;
extern int    Flag_XDATA, Flag_LRES, Flag_LPOS ;
extern int    Flag_CHECK, Flag_RESTART ;
extern int    Flag_LOG, Flag_VERBOSE ;
extern int    Flag_BIN, Flag_PROGRESS, Flag_SPLIT, Flag_FMM, Flag_DTA ;
extern int    Flag_BIN, Flag_PROGRESS, Flag_SPLIT, Flag_SOCKET ;
extern double Flag_ORDER ;

extern char  Name_Generic[MAX_FILE_NAME_LENGTH], Name_Path[MAX_FILE_NAME_LENGTH] ;
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
