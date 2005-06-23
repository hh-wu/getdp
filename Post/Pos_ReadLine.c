#define RCSID "$Id: Pos_ReadLine.c,v 1.17 2005-06-23 01:45:07 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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

#include "GetDP.h"

/* Had to isolate these functions in a separate file to avoid
   namespace clashes */

#if !defined(HAVE_READLINE)

void Pos_SaveHistory(FILE *fp){ ; }
void Pos_UsingHistory(){ 
  Msg(WARNING, "Interactive mode not available (please recompile with readline support)");
}
void Pos_AddHistory(char *str) { ; }
char *Pos_Readline(char *str){ return NULL; }

#else

#include <readline/readline.h>
#include <readline/history.h>

void Pos_SaveHistory(FILE *fp){ 
  HISTORY_STATE *state;
  int i;

  if(!fp) return;
  if(!(state = history_get_history_state())) return;

  for(i = 0; i < state->length; i++){
    if(state->entries[i])
      fprintf(fp, "%s\n", state->entries[i]->line);
  }
}

void Pos_UsingHistory(){ 
  using_history();
}
void Pos_AddHistory(char *str) {
  add_history(str);
}
char *Pos_Readline(char *str){ 
  return readline(str);
}

#endif
