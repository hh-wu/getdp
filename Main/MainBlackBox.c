#define RCSID "$Id: MainBlackBox.c,v 1.13 2005-06-23 01:45:01 geuzaine Exp $"
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

/* 
   To create a special version of GetDP with a non-readable built-in formulation:
   1) suppress all formulation lines commented with '//'
   2) suppress all new line chars (emacs: M-% ^Q^J  )
   3) copy the long resulting char line in BlackBoxProString[]
   4) define the program and resolution names
   5) rebuild with 'make blackbox'
*/

#include "GetDP.h"

#define NAME_PROGRAM     "box-v2"
#define NAME_TMPFILE     "box-v2.tmp"
#define NAME_VERSION     "1.0"
#define NAME_RESOLUTION  "Res1"

char BlackBoxProString[] = 
"" ;


int  main(int argc, char *argv[]) {
  FILE  *file ;
  char  *Name_TmpFile, buf[262144], str[MAX_STRING_LENGTH] ;

  GetDP_Begin("main");

  if(argc != 3 && argc != 5) {
    fprintf(stderr, 
	    "This is %s (version %s), copyright (c) ELAP-ULg\n"
	    "Resolution: %s file.msh file.grp\n"
	    "Post-Processing: %s file.msh file.grp file.pos name\n",
	    NAME_PROGRAM, NAME_VERSION, argv[0], argv[0]);
    GetDP_Exit(1);
  }

  Init_GlobalVariables();

  Name_Resolution = NAME_RESOLUTION ;
  Name_MshFile    = argv[1];
  Name_TmpFile    = NAME_TMPFILE ;

  if(argc==3){
    Flag_PRE = 1 ; Flag_CAL = 1 ; Flag_POS = 0 ; 
  }
  if(argc==5){
    Flag_PRE = 0 ; Flag_CAL = 0 ; Flag_POS = 1 ; 
    Name_PostOperation[0] = argv[4]; 
  }
  Flag_VERBOSE = 2 ;

  signal(SIGINT,  Signal); 
  signal(SIGQUIT, Signal);
  signal(SIGABRT, Signal);
  signal(SIGFPE,  Signal); 

  file = fopen(argv[2], "r");
  if(!file) Msg(ERROR, "Unable to open file '%s'", argv[2]);
  do { 
    fgets(str, MAX_STRING_LENGTH, file) ; 
    if (feof(file)) break ;
    strcat(buf, str);
  } while (1) ;
  fclose(file);

  strcat(buf, BlackBoxProString) ;

  if(argc==5){
    file = fopen(argv[3], "r");
    if(!file) Msg(ERROR, "Unable to open file '%s'", argv[3]);
    do { 
      fgets(str, MAX_STRING_LENGTH, file) ; 
      if (feof(file)) break ;
      strcat(buf, str);
    } while (1) ;
    fclose(file);
  }
  
  file = fopen(Name_TmpFile, "w");
  if(!file) Msg(ERROR, "Unable to open file '%s'", Name_TmpFile);
  fprintf(file, buf);
  fclose(file);

  Init_ProblemStructure();
  strcpy(Name_Generic, Name_TmpFile);
  strcpy(Name_Path, "");

  Read_ProblemStructure(Name_TmpFile);
  unlink(Name_TmpFile);
  
  if (Problem_S.Expression) 
    Problem_Expression0 = (struct Expression*)List_Pointer(Problem_S.Expression, 0) ;

  LinAlg_InitializeSolver(NULL, NULL, &Current.NbrCpu, &Current.RankCpu) ;
  SolvingAnalyse() ;
  LinAlg_FinalizeSolver() ;

  Msg(DIRECT, "E n d");

  GetDP_Return(0) ;
}

#undef NAME_PROGRAM
#undef NAME_TMPFILE
#undef NAME_VERSION
#undef NAME_RESOLUTION

