/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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

#ifndef _SOLVER_F_H_
#define _SOLVER_F_H_

#include "Compat.h"

#if defined(HAVE_UNDERSCORE)
#define etime_      etime
#define ilut_       ilut
#define ilutp_      ilutp
#define ilud_       ilud
#define iludp_      iludp
#define iluk_       iluk
#define ilu0_       ilu0
#define milu0_      milu0
#define cmkreord_   cmkreord
#define sortcol_    sortcol
#define skit_       skit
#define psplot_     psplot
#define cg_         cg       
#define cgnr_       cgnr     
#define bcg_        bcg      
#define dbcg_       dbcg     
#define bcgstab_    bcgstab  
#define tfqmr_      tfqmr    
#define fom_        fom      
#define gmres_      gmres    
#define fgmres_     fgmres   
#define dqgmres_    dqgmres  
#define amux_       amux
#define atmux_      atmux
#define lusol_      lusol
#define lutsol_     lutsol
#define csrcoo_     csrcoo
#define ma28ad_     ma28ad
#define ma28cd_     ma28cd
#define dnrm2_      dnrm2
#define flu_        flu
#define pgmres_     pgmres
#define getdia_     getdia
#define amudia_     amudia
#define diamua_     diamua
#define rnrms_      rnrms
#define cnrms_      cnrms


#endif


/* Prototypes */

/* ca merde avec les compilateurs c++ sans le extern C */

EXTERN_C_BEGIN

void  ilut_     (int*,double*,int*,int*,int*,double*,
		 scalar*,int*,int*,int*,double*,int*,int*);

void  ilutp_    (int*,double*,int*,int*,int*,double*,
		 double*,int*,scalar*,int*,
		 int*,int*,double*,int*,int*,int*);

void  ilud_     (int*,double*,int*,int*,double*,
		 double*,scalar*,int*,
		 int*,int*,double*,int*,int*);

void  iludp_    (int*,double*,int*,int*,double*,
		 double*,double*,
		 int*,scalar*,int*,int*,int*,
		 double*,int*,int*,int*);

void  iluk_     (int*,double*,int*,int*,int*,
		 scalar*,int*,int*,
		 int*,int*,double*,int*,int*);

void  ilu0_     (int*,double*,int*,int*,scalar*,int*,int*,int*,int*);

void  milu0_    (int*,double*,int*,int*,scalar*,int*,int*,int*,int*);

void  cmkreord_ (int*,double*,int*,int*,double*,int*,int*,int*,
		 int*,int*,int*,int*,int*,int*);

void  sortcol_  (int*,double*,int*,int*,int*,double*);

void  skit_     (int*,double*,int*,int*,int*,int*,int*);

void  psplot_   (int*,int*,int*,int*,int*);

void  cg_       (int*,double*,double*,int*,double*,double*);
void  cgnr_     (int*,double*,double*,int*,double*,double*);
void  bcg_      (int*,double*,double*,int*,double*,double*);
void  dbcg_     (int*,double*,double*,int*,double*,double*);
void  bcgstab_  (int*,double*,double*,int*,double*,double*);
void  tfqmr_    (int*,double*,double*,int*,double*,double*);
void  fom_      (int*,double*,double*,int*,double*,double*);
void  gmres_    (int*,double*,double*,int*,double*,double*);
void  fgmres_   (int*,double*,double*,int*,double*,double*);
void  dqgmres_  (int*,double*,double*,int*,double*,double*);

void  amux_     (int*,double*,double*,double*,int*,int*);
void  atmux_    (int*,double*,double*,double*,int*,int*);
void  lusol_    (int*,double*,double*,scalar*,int*,int*);
void  lutsol_   (int*,double*,double*,scalar*,int*,int*);

void  csrcoo_   (int*,int*,int*,double*,int*,int*,int*,double*,int*,int*,int*);

void  ma28ad_   (int*,int*,double*,int*,int*,int*,int*,double*,int*,int*,double*,int*);
void  ma28cd_   (int*,double*,int*,int*,int*,double*,double*,int*);

double dnrm2_   (int*,double*,int*);

void  flu_      (int*,double*,double*,double*,int*,int*,double*,double*,double*,double*,double*);

void  pgmres_   (int*,int*,double*,double*,double*,double*,
		 int*,int*,double*,int*,int*,
		 scalar*,int*,int*,int*);

void getdia_    (int*,int*,int*,double*,int*,int*,int*,double*,int*,int*);

void diamua_    (int*,int*,double*,int*,int*,double*,double*,int*,int*);
void amudia_    (int*,int*,double*,int*,int*,double*,double*,int*,int*);
void rnrms_     (int*,int*,double*,int*,int*,double*);
void cnrms_     (int*,int*,double*,int*,int*,double*);


EXTERN_C_END



#endif


