#define RCSID "$Id: Pos_Interactive.c,v 1.28 2006-02-25 03:29:22 geuzaine Exp $"
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

#if !defined(WIN32) || defined(__CYGWIN__)
#include <unistd.h> /* unlink */
#endif

#include "GetDP.h"
#include "Data_Passive.h"
#include "Treatment_Formulation.h"
#include "Pos_Formulation.h"
#include "Print_ProblemStructure.h"
#include "CurrentData.h"

extern int     ErrorLevel ;
extern int     InteractiveLevel, InteractiveCompute ; 
extern int     InteractiveInterrupt ;
extern struct  PostProcessing InteractivePostProcessing_S ;
extern struct  PostSubOperation InteractivePostSubOperation_S ;
extern FILE   *yyin;

int   yyparse(void) ;
void  FinalizeAndExit(void);
void  Help(char *start);

void Pos_SaveHistory(FILE *fp);
void Pos_UsingHistory();
void Pos_AddHistory(char *str);
char *Pos_Readline(char *str);

/* ------------------------------------------------------------------------ */
/*  P o s _ I n t e r a c t i v e                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Interactive(struct Formulation *Formulation_P,
		      struct PostProcessing *PostProcessing_P){
  struct PostOperation *PostOperation_P;
  int   i, j, post=0;
  char *myptr, tmp[1000];

  GetDP_Begin("Pos_Interactive");

  Pos_UsingHistory();

  if(Formulation_P && PostProcessing_P) post = 1;

  InteractiveLevel = 1;

  Msg(INFO, "Entering interactive mode (type 'h' for help)");

  /* add a simple gmsh operation in the stack */
  sprintf(tmp,"!gmsh %s", Name_MshFile);
  Pos_AddHistory(tmp);

  if(post){
    PostStream = stdout;
    InteractivePostProcessing_S = *PostProcessing_P;
    /* add all pertinent PostOperations in the stack */
    for(i=0 ; i<List_Nbr(Problem_S.PostOperation); i++){
      PostOperation_P = (struct PostOperation*)
	List_Pointer(Problem_S.PostOperation, i) ;
      if(PostProcessing_P == (struct PostProcessing *)
	 List_Pointer(Problem_S.PostProcessing, PostOperation_P->PostProcessingIndex)){
	for(j=0 ; j<List_Nbr(PostOperation_P->PostSubOperation) ; j++){
	  myptr = Print_PostSubOperation(&Problem_S,PostProcessing_P,
					 (struct PostSubOperation *)
					 List_Pointer(PostOperation_P->PostSubOperation, j));
	  if(strlen(myptr)) Pos_AddHistory(myptr);
	  Free(myptr);
	}
      }
    }
  }

  while (1) {

    /* read input char until CR, LF, EOF, ^D */
    myptr = Pos_Readline(GETDP_PROMPT_STRING);

    InteractiveCompute = ErrorLevel = 0;

    /* exit interactive if EOF or ^D */
    if(!myptr) break;

    /* if there is something in the line */
    if(strlen(myptr)){

      /* remove ending space and ';' */
      while(myptr[strlen(myptr)-1]==' ') myptr[strlen(myptr)-1]='\0';
      if(myptr[strlen(myptr)-1]==';') myptr[strlen(myptr)-1]='\0';

      /* add the command in the stack */
      Pos_AddHistory(myptr);

      /* parse some simple stuff here (in order not to consume too
         many keywords in GetDP.l) */
      
      if(!strcmp(myptr,"q") || /* exit interactive if q, quit, exit */
	 !strcmp(myptr,"Quit") || !strcmp(myptr,"quit") || 
	 !strcmp(myptr,"Exit") || !strcmp(myptr,"exit")){
	Free(myptr);
	break;
      }
      else if(!strcmp(myptr,"h") || !strcmp(myptr,"help")){ /* simple help */
	Help(NULL);
      }
      else if(!strcmp(myptr,"c") || !strcmp(myptr,"p")){ /* simple check */
	Print_ProblemStructure(&Problem_S);
      }
      else if(strlen(myptr) > 2 && 
	      (!strncmp(myptr,"c ",2) || (!strncmp(myptr,"p ",2)))){ /* simple check */
	Print_Object(atoi(&myptr[2]), &Problem_S);
      }
      else if(myptr[0] == '!'){ /* system call preceded by '!' */
	system(&myptr[1]);
      }
      else if(!strcmp(myptr,"dir") || !strcmp(myptr,"ls")){ /* direct system calls */
	system("ls -al");
      }
      else if(!strcmp(myptr,"l") || /* log */
	      !strcmp(myptr,"log") || !strcmp(myptr,"Log")){	      
	Pos_SaveHistory(stdout);
      }
      else if(strlen(myptr) > 4 &&
	      (!strncmp(myptr,"log ",4) || !strncmp(myptr,"Log ",4))){ /* log to file */
	if(!(yyin = fopen(&myptr[4],"w"))){
	   Msg(WARNING, "Unable to open file '%s'", &myptr[4]);
	}
	else{
	  Pos_SaveHistory(yyin);
	  fclose(yyin);
	}
      }
      else{ /* getdp command */
	/* write it in the tmp file */
	if(!(yyin = fopen(GETDP_TMP_FILENAME,"w")))
	   Msg(ERROR, "Unable to open file '%s'", GETDP_TMP_FILENAME);
	fprintf(yyin,"%s;\n",myptr);
	fclose(yyin);
	/* parse the tmp file */
	yyin = fopen(GETDP_TMP_FILENAME,"r");
	while(!feof(yyin)) yyparse();
	fclose(yyin);
      }

      /* compute something */
      if(post && !ErrorLevel && InteractiveCompute){
	InteractiveInterrupt = 0;
	Pos_Formulation(Formulation_P, PostProcessing_P, &InteractivePostSubOperation_S);
      }

      Free(myptr);
    }

  }

  InteractiveLevel = 0;

  /* delete the tmp file */
#if !defined(WIN32) || defined(__CYGWIN__)
  unlink(GETDP_TMP_FILENAME);
#endif

  if(!post) FinalizeAndExit();

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  H e l p                                                                 */
/* ------------------------------------------------------------------------ */

void Help_Print(void){ 
  printf(" The Print operation has the structure\n"
	 " \n"
	 "    Print[ POST-QUANTITY-TERM, WHERE, OPTIONS ]\n"
	 " \n"
	 " The WHERE argument specifies where the data should be evaluated in the\n"
	 " three-dimensional space, and can be one of the following:\n"
	 " \n"
	 "    OnElementsOf GROUP-DEF\n"
	 "    OnRegion     GROUP-DEF\n"
	 "    OnGlobal\n"
	 "    OnSection    { {EXPR-CST-LIST} {EXPR-CST-LIST} {EXPR-CST-LIST} }\n"
	 "    OnGrid       GROUP-DEF\n"
	 "    OnGrid       {EXPR,EXPR,EXPR} { {EXPR-CST-LIST}, {EXPR-CST-LIST},\n"
	 "                  {EXPR-CST-LIST} }\n"
	 "    OnPoint      {EXPR-CST-LIST}\n"
	 "    OnLine       { {EXPR-CST-LIST} {EXPR-CST-LIST} } {EXPR-CST}\n"
	 "    OnPlane      { {EXPR-CST-LIST} {EXPR-CST-LIST} {EXPR-CST-LIST} }\n"
	 "                  {EXPR-CST,EXPR-CST}\n"
	 "    OnBox        { {EXPR-CST-LIST} {EXPR-CST-LIST} {EXPR-CST-LIST}\n"
	 "                  {EXPR-CST-LIST} } {EXPR-CST,EXPR-CST,EXPR-CST}\n"
	 " \n"
	 " Check the user's manual (section 'Types for PostOperation') for the\n"
	 " detailed description of each operation as well as the list of\n"
	 " available OPTIONS.\n"
	 " \n"
	 " It is possible to interrupt the current Print operation by typing\n"
	 " <Ctrl-C>.\n");
  /*
  char topic[128] ;
  while(1){
    printf(" \n"
	   "Help topics available for Print:\n"
	   "    file\n"
	   " \n"
	   "Help topic: ");
    fgets(topic,128,stdin) ;
    if     (!strcmp(topic, "file\n")) Help_File();
    else if(!strlen(topic) || !strcmp(topic, "\n")) break;
    else{
      topic[strlen(topic)-1] = '\0';
      printf("Sorry, no help for '%s'\n", topic);
    }
  }
  */
}

void Help_Check(void) { 
  printf(" The Check operation permits to interactively check the problem definition\n"
	 " structure. The syntax for the Check operation is\n"
	 " \n"
	 "    Check OBJECT\n"
	 " \n"
	 " where OBJECT is one of the GetDP objects, i.e. Group, Function, Constraint,\n"
	 " Jacobian, Integration, FunctionSpace, Formulation, Resolution,\n"
	 " PostProcessing or PostOperation.\n"
	 " \n"
	 " Shortcuts are also available: 'c 1' is the same as 'Check Group'.\n"
	 );
}

void Help_Log(void) { 
  printf(" The Log operation permits to print the operation history. To print the\n"
	 " history into a file name FILE, type\n"
	 " \n"
	 "    Log FILE\n"
	 " \n"
	 " To print simply print the history on the screen, type\n"
	 " \n"
	 "    Log\n"
	 " \n"
	 " The default Log is also available with the shortcut 'l'.\n");
}

void Help_Cpu(void) { 
  printf(" The Cpu operation prints the current resources consumed by GetDP.\n");
}

void Help_Help(void) { 
  printf(" To access the help on the topic TOPIC, just type\n"
	 " \n"	 
	 "    Help TOPIC\n"
	 " \n"	 
	 " The default help is also available with the shortcut 'h'.\n");
}

void Help_Quit(void) { 
  printf(" The Quit operation terminates the interactive mode.\n"
	 " Synonyms for Quit are 'q', 'quit', 'exit' and 'Exit'.\n");
}

void Help(char *start){
  char topic[128] ;

  if(!start){
    printf(" Welcome to the interactive GetDP mode!\n"
	   " \n"
	   " Just type any operation after the 'getdp>' prompt and press\n"
	   " <return> to execute it. A list of pertinent operations for this\n"
	   " interactive session is already preloaded in the command line\n"
	   " history. You can browse this history by pressing the <up> and\n"
	   " <down> keyboard arrows.\n"
	   " \n"
	   " Editing capabilities similar to those of Emacs are offered while\n"
	   " the command line is entered. A line beginning with a '!' is\n"
	   " treated as a system call.\n"
	   " \n"
	   "Help topics available:\n"
	   "    Print   Check   Log   Cpu   Help   Quit\n"
	   " \n"
	   "Help topic: ");
    fgets(topic,128,stdin) ;
  }
  else{
    strncpy(topic,start,127) ;
    strcat(topic,"\n") ;
  }

  if     (!strcmp(topic, "Print\n")) Help_Print();
  else if(!strcmp(topic, "Check\n")) Help_Check();
  else if(!strcmp(topic, "Log\n"))   Help_Log();
  else if(!strcmp(topic, "Cpu\n"))   Help_Cpu();
  else if(!strcmp(topic, "Help\n"))  Help_Help();
  else if(!strcmp(topic, "Quit\n"))  Help_Quit();
  else if(!strlen(topic) || !strcmp(topic, "\n")){
  }
  else{
    topic[strlen(topic)-1] = '\0';
    printf("Sorry, no help for '%s'\n", topic);
  }
}
