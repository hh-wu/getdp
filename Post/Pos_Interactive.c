#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> /* unlink */

#include "Treatment_Formulation.h"
#include "Pos_Formulation.h"
#include "Data_Passive.h"
#include "CurrentData.h"

extern int     ErrorLevel ;
extern int     InteractiveLevel, InteractiveCompute ; 
extern int     InteractiveExit, InteractiveInterrupt ;
extern struct  PostSubOperation InteractivePostSubOperation_S ;
extern FILE   *yyin;


int   yyparse(void) ;
char *readline(char *prompt);
void  add_history(char *line);

void  Pos_Interactive(struct Formulation *Formulation_P){
  char *myptr;

  PostStream = stdout;
  InteractiveLevel = 1;

  while (1) {

    /* read input char until CR, LF, EOF, ^D */
    myptr = readline (GETDP_PROMPT_STRING);

    /* exit interactive if if EOF, ^D or q */
    if(!myptr || !strcmp(myptr,"q")) break;


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
	Pos_Formulation(Formulation_P, &InteractivePostSubOperation_S);
      }
    }

  }

  InteractiveLevel = 0;

  /* delete the tmp file */
  unlink(GETDP_TMP_FILENAME);

}


void Pos_InteractiveHelp(void){
  char topic[200] ;
  
  printf("Choose Help Topic: [Plot Print] ");
  scanf("%s", topic);

  if     (!strcmp(topic, "Plot")){
    printf("Plot[ PostQuantity , \n"
	   "      OnRegion Region | \n"
	   "      OnGrid   Region | \n"
           "      OnGrid  {x,y,z} | \n"
           "      OnGrid  {{x1,y1,z1}{x2,y2,z2}} {nb} | \n"
           "      OnGrid  {{x1,y1,z1}{x2,y2,z2}{x3,y3,z3}} {nb1,nb2}] |\n"
	   "      OnCut   {{x1,y1,z1}{x2,y2,z2}} |\n"
	   "      OnCut   {{x1,y1,z1}{x2,y2,z2}{x3,y3,z3}} , \n"
           "      File \"string\" | TimeStep list | HarmonicToTime num | ... ]\n"
	   );
  }
  else if(!strcmp(topic, "Print")){
    printf("Print[ PostQuantity , OnRegion Region ]\n");
  }
  else {
    printf("Unknown Topic\n");
  }

}
