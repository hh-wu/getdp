/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to "getdp@geuz.org".
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

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
