/* $Id: Pos_Interactive.c,v 1.10 2000-10-21 12:17:27 geuzaine Exp $ */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> /* unlink */

#include "Treatment_Formulation.h"
#include "Pos_Formulation.h"
#include "Pos_Interactive.h"
#include "Data_Passive.h"
#include "CurrentData.h"

extern int     ErrorLevel ;
extern int     InteractiveLevel, InteractiveCompute ; 
extern int     InteractiveExit, InteractiveInterrupt ;
extern struct  PostProcessing InteractivePostProcessing_S ;
extern struct  PostSubOperation InteractivePostSubOperation_S ;
extern FILE   *yyin;

int   yyparse(void) ;
char *readline(char *prompt);
void  add_history(char *line);

/* ------------------------------------------------------------------------ */
/*  P o s _ I n t e r a c t i v e                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Interactive(struct Formulation *Formulation_P,
		      struct PostProcessing *PostProcessing_P){
  char *myptr;

  PostStream = stdout;
  InteractiveLevel = 1;
  InteractivePostProcessing_S = *PostProcessing_P;

  while (1) {

    /* read input char until CR, LF, EOF, ^D */
    myptr = readline (GETDP_PROMPT_STRING);

    /* exit interactive if EOF, ^D, quit, q or exit */
    if(!myptr || !strcmp(myptr,"quit") || !strcmp(myptr,"q") ||
       !strcmp(myptr,"exit")) break;


    /* if there is something in the line */
    if(strlen(myptr)){

      /* add the command in the stack */
      add_history(myptr);

      /* write it in the tmp file */
      yyin = fopen(GETDP_TMP_FILENAME,"w");
      fprintf(yyin,"%s;\n",myptr);
      fclose(yyin);

      /* parse the tmp file */
      InteractiveCompute = InteractiveExit = ErrorLevel = 0;
      yyin = fopen(GETDP_TMP_FILENAME,"r");
      while(!feof(yyin)){
	yyparse();
      }
      fclose(yyin);
      
      /* exit if Exit token read */
      if(InteractiveExit) break;

      /* compute something */
      if(!ErrorLevel && InteractiveCompute){
	InteractiveInterrupt = 0;
	Pos_Formulation(Formulation_P, PostProcessing_P,
			&InteractivePostSubOperation_S);
      }
    }

  }

  InteractiveLevel = 0;

  /* delete the tmp file */
  unlink(GETDP_TMP_FILENAME);

}

/* ------------------------------------------------------------------------ */
/*  I n t e r a c t i v e                                                   */
/* ------------------------------------------------------------------------ */

void  Interactive(void){
  char *myptr;

  InteractiveLevel = 1;

  while (1) {

    /* read input char until CR, LF, EOF, ^D */
    myptr = readline (GETDP_PROMPT_STRING);

    /* exit interactive if EOF, ^D, quit, q or exit */
    if(!myptr || !strcmp(myptr,"quit") || !strcmp(myptr,"q") ||
       !strcmp(myptr,"exit")){
      unlink(GETDP_TMP_FILENAME);
      exit(1) ;
    }

    /* if there is something in the line */
    if(strlen(myptr)){

      /* add the command in the stack */
      add_history(myptr);

      /* write it in the tmp file */
      yyin = fopen(GETDP_TMP_FILENAME,"w");
      fprintf(yyin,"%s;\n",myptr);
      fclose(yyin);

      /* parse the tmp file */
      InteractiveCompute = InteractiveExit = ErrorLevel = 0;
      yyin = fopen(GETDP_TMP_FILENAME,"r");
      while(!feof(yyin)){
	yyparse();
      }
      fclose(yyin);
      
      /* exit if Exit token read */
      if(InteractiveExit) break;

      /* compute something ... */
    }

  }

  InteractiveLevel = 0;

  /* delete the tmp file */
  unlink(GETDP_TMP_FILENAME);

}

/* ------------------------------------------------------------------------ */
/*  H e l p                                                                 */
/* ------------------------------------------------------------------------ */

#include <ctype.h>

#define GET(first,topic)			\
  if(!first && !isspace(i = getc(stdin)))	\
    ungetc(i, stdin) ;				\
  if(first)                                     \
    first = 0 ;                                 \
  if(isspace(i = getc(stdin)))			\
    return ;					\
  else{						\
    ungetc(i, stdin) ;				\
    scanf("%s", topic) ;			\
  }

static int first ;

void Help_File(void) { printf("%s\n", i_file); }
void Help_Gmsh(void) { printf("%s\n", i_gmsh); }
void Help_Gnuplot(void) { printf("%s\n", i_gmsh); }
void Help_Table(void) { printf("%s\n", i_gmsh); }
void Help_TimeTable(void) { printf("%s\n", i_timetable); }
void Help_Depth(void) { printf("%s\n", i_depth); }
void Help_Skin(void) { printf("%s\n", i_skin); }
void Help_Smoothing(void) { printf("%s\n", i_smoothing); }
void Help_HarmonicToTime(void) { printf("%s\n", i_harmonictotime); }
void Help_Dimension(void) { printf("%s\n", i_dimension); }
void Help_TimeStep(void) { printf("%s\n", i_timestep); }
void Help_Adapt(void) { printf("%s\n", i_adapt); }
void Help_Sort(void) { printf("%s\n", i_sort); }
void Help_Target(void) { printf("%s\n", i_target); }
void Help_Value(void) { printf("%s\n", i_value); }
void Help_Iso(void) { printf("%s\n", i_iso); }
void Help_Quit(void) { printf("%s\n", i_quit); }
void Help_Format(void) { 
  int i ;
  char topic[200] ;  
  printf("%s", i_format); 
  while(1){
    printf(" \n"
	   " Available formats include:\n"
	   "    gmsh       gnuplot      table     timetable\n"
	   " \n"
	   "Option for Format: ");
    GET(first, topic) ;
    if     (!strcmp(topic, "gmsh")) Help_Gmsh();
    else if(!strcmp(topic, "gnuplot")) Help_Gnuplot();
    else if(!strcmp(topic, "table")) Help_Table();
    else if(!strcmp(topic, "timetable")) Help_TimeTable();
    else printf("Sorry, no help for Format option '%s'\n", topic);
  }
}
void Help_Print(void){
  int i ;
  char topic[200] ;
  printf("%s", i_print);
  while(1){
    printf(" \n"
	   " OPTIONS available for print include:\n"
	   "    file            depth      skin      smoothing\n"
	   "    harmonictotime  dimension  timestep  adapt\n"
	   "    sort            target     value     iso\n"
	   " \n"
	   "Option for Print: ");
    GET(first, topic) ;
    if     (!strcmp(topic, "file")) Help_File();
    else if(!strcmp(topic, "format")) Help_Format();
    else if(!strcmp(topic, "depth")) Help_Depth();
    else if(!strcmp(topic, "skin")) Help_Skin();
    else if(!strcmp(topic, "smoothing")) Help_Smoothing();
    else if(!strcmp(topic, "harmonictotime")) Help_HarmonicToTime();
    else if(!strcmp(topic, "dimension")) Help_Dimension();
    else if(!strcmp(topic, "timestep")) Help_TimeStep();
    else if(!strcmp(topic, "adapt")) Help_Adapt();
    else if(!strcmp(topic, "sort")) Help_Sort();
    else if(!strcmp(topic, "target")) Help_Target();
    else if(!strcmp(topic, "value")) Help_Value();
    else if(!strcmp(topic, "iso")) Help_Iso();
    else printf("Sorry, no help for Print option '%s'\n", topic);
  }
}

void Help(char *start){
  int  i ;
  char topic[200] ;

  first = 1 ;

  if(!start){
    printf(" Operations available for interactive PostOperation:\n"
	   "    print      quit\n"
	   " \n"
	   "PostOperation: ");
    GET(first, topic) ;
  }
  else
    strncpy(topic, start, 200) ;

  if     (!strcmp(topic, "print")) Help_Print();
  else if(!strcmp(topic, "quit")) Help_Quit();
  else if(!strcmp(topic, "file")) Help_File();
  else if(!strcmp(topic, "format")) Help_Format();
  else if(!strcmp(topic, "gmsh")) Help_Gmsh();
  else if(!strcmp(topic, "gnuplot")) Help_Gnuplot();
  else if(!strcmp(topic, "table")) Help_Table();
  else if(!strcmp(topic, "timetable")) Help_TimeTable();
  else if(!strcmp(topic, "depth")) Help_Depth();
  else if(!strcmp(topic, "skin")) Help_Skin();
  else if(!strcmp(topic, "smoothing")) Help_Smoothing();
  else if(!strcmp(topic, "harmonictotime")) Help_HarmonicToTime();
  else if(!strcmp(topic, "dimension")) Help_Dimension();
  else if(!strcmp(topic, "timestep")) Help_TimeStep();
  else if(!strcmp(topic, "adapt")) Help_Adapt();
  else if(!strcmp(topic, "sort")) Help_Sort();
  else if(!strcmp(topic, "target")) Help_Target();
  else if(!strcmp(topic, "value")) Help_Value();
  else if(!strcmp(topic, "iso")) Help_Iso();
  else printf("Sorry, no help for '%s'\n", topic);

}
