#define RCSID "$Id: Pos_Interactive.c,v 1.18 2001-07-26 07:07:50 geuzaine Exp $"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> /* unlink */

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Pos_Formulation.h"
#include "Pos_Interactive.h"
#include "Data_Passive.h"
#include "CurrentData.h"

extern int     ErrorLevel ;
extern int     InteractiveLevel, InteractiveCompute ; 
extern int     InteractiveInterrupt ;
extern struct  PostProcessing InteractivePostProcessing_S ;
extern struct  PostSubOperation InteractivePostSubOperation_S ;
extern FILE   *yyin;

int   yyparse(void) ;
char *readline(char *prompt);
void  add_history(char *line);
void  FinalizeAndExit(void);

/* ------------------------------------------------------------------------ */
/*  P o s _ I n t e r a c t i v e                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Interactive(struct Formulation *Formulation_P,
		      struct PostProcessing *PostProcessing_P){
  char *myptr;

  GetDP_Begin("Pos_Interactive");

  PostStream = stdout;
  InteractiveLevel = 1;
  InteractivePostProcessing_S = *PostProcessing_P;

  while (1) {

    /* read input char until CR, LF, EOF, ^D */
    myptr = readline (GETDP_PROMPT_STRING);

    /* exit interactive if EOF, ^D, quit */
    if(!myptr || 
       !strcmp(myptr,"Quit") || !strcmp(myptr,"quit") || !strcmp(myptr,"q") ||
       !strcmp(myptr,"exit") || !strcmp(myptr,"Exit")) 
      break;

    /* if there is something in the line */
    if(strlen(myptr)){

      /* add the command in the stack */
      add_history(myptr);

      if(myptr[0] == '!'){ /* system call preceded by '!' */
	
	system(&myptr[1]);

      }
      else{ /* getdp command */

	/* write it in the tmp file */
	yyin = fopen(GETDP_TMP_FILENAME,"w");
	fprintf(yyin,"%s;\n",myptr);
	fclose(yyin);
	
	/* parse the tmp file */
	InteractiveCompute = ErrorLevel = 0;
	yyin = fopen(GETDP_TMP_FILENAME,"r");
	while(!feof(yyin)){
	  yyparse();
	}
	fclose(yyin);
	
      }

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

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  I n t e r a c t i v e                                                   */
/* ------------------------------------------------------------------------ */

void  Interactive(void){
  char *myptr;

  GetDP_Begin("Interactive");

  InteractiveLevel = 1;

  while (1) {

    /* read input char until CR, LF, EOF, ^D */
    myptr = readline (GETDP_PROMPT_STRING);

    /* exit interactive if EOF, ^D, quit */
    if(!myptr || 
       !strcmp(myptr,"Quit") || !strcmp(myptr,"quit") || !strcmp(myptr,"q") ||
       !strcmp(myptr,"exit") || !strcmp(myptr,"Exit")) {
      unlink(GETDP_TMP_FILENAME);
      FinalizeAndExit() ;
    }

    /* if there is something in the line */
    if(strlen(myptr)){

      /* add the command in the stack */
      add_history(myptr);

      if(myptr[0] == '!'){ /* system call preceded by '!' */
	
	system(&myptr[1]);

      }
      else{ /* getdp command */

	/* write it in the tmp file */
	yyin = fopen(GETDP_TMP_FILENAME,"w");
	fprintf(yyin,"%s;\n",myptr);
	fclose(yyin);
	
	/* parse the tmp file */
	InteractiveCompute = ErrorLevel = 0;
	yyin = fopen(GETDP_TMP_FILENAME,"r");
	while(!feof(yyin)){
	  yyparse();
	}
	fclose(yyin);

      }

    }

  }

  InteractiveLevel = 0;

  /* delete the tmp file */
  unlink(GETDP_TMP_FILENAME);

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  H e l p                                                                 */
/* ------------------------------------------------------------------------ */

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
  char topic[128] ;  
  printf("%s", i_format); 
  while(1){
    printf(" \n"
	   " Available formats include:\n"
	   "    gmsh       gnuplot      table     timetable\n"
	   " \n"
	   "Option for Format: ");
    fgets(topic,128,stdin) ;
    if     (!strcmp(topic, "gmsh\n")) Help_Gmsh();
    else if(!strcmp(topic, "gnuplot\n")) Help_Gnuplot();
    else if(!strcmp(topic, "table\n")) Help_Table();
    else if(!strcmp(topic, "timetable\n")) Help_TimeTable();
    else if(!strlen(topic) || !strcmp(topic, "\n")) break;
    else{
      topic[strlen(topic)-1] = '\0';
      printf("Sorry, no help for Format option '%s'\n", topic);
    }
  }
}
void Help_Print(void){
  char topic[128] ;
  printf("%s", i_print);
  while(1){
    printf(" \n"
	   " OPTIONS available for print include:\n"
	   "    file            depth      skin      smoothing\n"
	   "    harmonictotime  dimension  timestep  adapt\n"
	   "    sort            target     value     iso\n"
	   " \n"
	   "Option for Print: ");
    fgets(topic,128,stdin) ;
    if     (!strcmp(topic, "file\n")) Help_File();
    else if(!strcmp(topic, "format\n")) Help_Format();
    else if(!strcmp(topic, "depth\n")) Help_Depth();
    else if(!strcmp(topic, "skin\n")) Help_Skin();
    else if(!strcmp(topic, "smoothing\n")) Help_Smoothing();
    else if(!strcmp(topic, "harmonictotime\n")) Help_HarmonicToTime();
    else if(!strcmp(topic, "dimension\n")) Help_Dimension();
    else if(!strcmp(topic, "timestep\n")) Help_TimeStep();
    else if(!strcmp(topic, "adapt\n")) Help_Adapt();
    else if(!strcmp(topic, "sort\n")) Help_Sort();
    else if(!strcmp(topic, "target\n")) Help_Target();
    else if(!strcmp(topic, "value\n")) Help_Value();
    else if(!strcmp(topic, "iso\n")) Help_Iso();
    else if(!strlen(topic) || !strcmp(topic, "\n")) break;
    else{
      topic[strlen(topic)-1] = '\0';
      printf("Sorry, no help for Print option '%s'\n", topic);
    }
  }
}

void Help(char *start){
  char topic[128] ;

  if(!start){
    printf(" Operations available for interactive PostOperation:\n"
	   "    print      quit\n"
	   " \n"
	   "PostOperation: ");
    fgets(topic,128,stdin) ;
  }
  else{
    strncpy(topic,start,127) ;
    strcat(topic,"\n") ;
  }

  if     (!strcmp(topic, "print\n")) Help_Print();
  else if(!strcmp(topic, "quit\n")) Help_Quit();
  else if(!strcmp(topic, "file\n")) Help_File();
  else if(!strcmp(topic, "format\n")) Help_Format();
  else if(!strcmp(topic, "gmsh\n")) Help_Gmsh();
  else if(!strcmp(topic, "gnuplot\n")) Help_Gnuplot();
  else if(!strcmp(topic, "table\n")) Help_Table();
  else if(!strcmp(topic, "timetable\n")) Help_TimeTable();
  else if(!strcmp(topic, "depth\n")) Help_Depth();
  else if(!strcmp(topic, "skin\n")) Help_Skin();
  else if(!strcmp(topic, "smoothing\n")) Help_Smoothing();
  else if(!strcmp(topic, "harmonictotime\n")) Help_HarmonicToTime();
  else if(!strcmp(topic, "dimension\n")) Help_Dimension();
  else if(!strcmp(topic, "timestep\n")) Help_TimeStep();
  else if(!strcmp(topic, "adapt\n")) Help_Adapt();
  else if(!strcmp(topic, "sort\n")) Help_Sort();
  else if(!strcmp(topic, "target\n")) Help_Target();
  else if(!strcmp(topic, "value\n")) Help_Value();
  else if(!strcmp(topic, "iso\n")) Help_Iso();
  else if(!strlen(topic) || !strcmp(topic, "\n")){
  }
  else{
    topic[strlen(topic)-1] = '\0';
    printf("Sorry, no help for '%s'\n", topic);
  }
}
