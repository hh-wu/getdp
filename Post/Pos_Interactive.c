/* $Id: Pos_Interactive.c,v 1.4 2000-10-17 21:38:53 geuzaine Exp $ */
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

#include <ctype.h>

#define GET(topic)				\
  if(isspace(i = getc(stdin)))			\
    return ;					\
  else{						\
    ungetc(i, stdin) ;				\
    scanf("%s", topic) ;			\
  }

#define GETSUB(topic)				\
  if(!isspace(i = getc(stdin)))			\
    ungetc(i, stdin) ;				\
  GET(topic) ;
    
void Pos_InteractiveHelp(char *start){
  char topic[200], subtopic[200] ;
  int  i ;

  if(!start){
    printf("%s", i_getdp);
    printf("PostOperation: ") ;
    GET(topic) ;
  }
  else
    strncpy(topic, start, 200) ;

  if(!strcmp(topic, "plot")){
    printf("%s", i_plot);
    while(1){
      printf("Option for Plot: ");
      GETSUB(subtopic) ;
      if     (!strcmp(subtopic, "file")) printf("%s", i_file);
      else if(!strcmp(subtopic, "depth")) printf("%s", i_depth);
      else if(!strcmp(subtopic, "skin")) printf("%s", i_skin);
      else if(!strcmp(subtopic, "smoothing")) printf("%s", i_smoothing);
      else if(!strcmp(subtopic, "harmonictotime")) printf("%s", i_harmonictotime);
      else if(!strcmp(subtopic, "dimension")) printf("%s", i_dimension);
      else if(!strcmp(subtopic, "timestep")) printf("%s", i_timestep);
      else if(!strcmp(subtopic, "adapt")) printf("%s", i_adapt);
      else if(!strcmp(subtopic, "sort")) printf("%s", i_sort);
      else if(!strcmp(subtopic, "target")) printf("%s", i_target);
      else if(!strcmp(subtopic, "value")) printf("%s", i_value);
      else if(!strcmp(subtopic, "iso")) printf("%s", i_iso);
      else printf("Sorry, no help for Plot option '%s'\n", subtopic);
    }
  }
  else if(!strcmp(topic, "print")){
    printf("%s", i_print);
    while(1){
      printf("Option for Print: ");
      GETSUB(subtopic) ;
      if     (!strcmp(subtopic, "file")) printf("%s", i_file);
      else if(!strcmp(subtopic, "timestep")) printf("%s", i_timestep);
      else printf("Sorry, no help for Print option '%s'\n", subtopic);
    }
  }
  else if(!strcmp(topic, "quit")) printf("%s", i_quit);
  else if(!strcmp(topic, "file")) printf("%s", i_file);
  else if(!strcmp(topic, "depth")) printf("%s", i_depth);
  else if(!strcmp(topic, "skin")) printf("%s", i_skin);
  else if(!strcmp(topic, "smoothing")) printf("%s", i_smoothing);
  else if(!strcmp(topic, "harmonictotime")) printf("%s", i_harmonictotime);
  else if(!strcmp(topic, "dimension")) printf("%s", i_dimension);
  else if(!strcmp(topic, "timestep")) printf("%s", i_timestep);
  else if(!strcmp(topic, "adapt")) printf("%s", i_adapt);
  else if(!strcmp(topic, "sort")) printf("%s", i_sort);
  else if(!strcmp(topic, "target")) printf("%s", i_target);
  else if(!strcmp(topic, "value")) printf("%s", i_value);
  else if(!strcmp(topic, "iso")) printf("%s", i_iso);
  else printf("Sorry, no help for '%s'\n", topic);

}
