// GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#ifndef _PRO_PARSER_H_
#define _PRO_PARSER_H_

#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <string>
#include "ListUtils.h"

struct Constant {
  char *Name;
  int Type;
  union {
    double Float;
    List_T *ListOfFloat;
    char *Char;
  } Value;
};

#define VAR_FLOAT         1
#define VAR_LISTOFFLOAT   2
#define VAR_CHAR          3

extern FILE *getdp_yyin;
extern char getdp_yyname[256];
extern char getdp_yyincludename[256];
extern long int getdp_yylinenum;
extern int getdp_yycolnum;
extern int getdp_yyincludenum;
extern int getdp_yyerrorlevel;
extern std::map<std::string, double> CommandLineNumbers;
extern std::map<std::string, std::string> CommandLineStrings;

int getdp_yyparse();
void getdp_yyrestart(FILE*);
void Free_ParserVariables();
char *strSave(const char *string);
void cStyleComments();
void cxxStyleComments();
void parseString(char endchar);
void skipUntil(const char *skip, const char *until);
void Print_Constants();

#endif
