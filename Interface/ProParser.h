// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _PRO_PARSER_H_
#define _PRO_PARSER_H_

#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <vector>
#include <string>
#include "ListUtils.h"

struct Constant {
  char *Name;
  int Type;
  union {
    double Float;
    char *Char;
    List_T *List;
  } Value;
};

#define VAR_FLOAT         1
#define VAR_LISTOFFLOAT   2
#define VAR_CHAR          3
#define VAR_LISTOFCHAR    4

extern FILE *getdp_yyin;
extern std::string getdp_yyname;
extern char getdp_yyincludename[256];
extern long int getdp_yylinenum;
extern int getdp_yycolnum;
extern int getdp_yyincludenum;
extern int level_include;
extern int getdp_yyerrorlevel;
extern std::map<std::string, std::vector<double> > CommandLineNumbers;
extern std::map<std::string, std::vector<std::string> > CommandLineStrings;
extern std::map<std::string, std::vector<double> > GetDPNumbers;
extern std::map<std::string, std::vector<std::string> > GetDPStrings;

int getdp_yyparse();
void getdp_yyrestart(FILE*);
void Free_ParserVariables();
char *strSave(const char *string);
void cStyleComments();
void cxxStyleComments();
void parseString(char endchar);
void skipUntil(const char *skip, const char *until);
void skipUntil_test(const char *skip, const char *until,
                    const char *until2, int l_until2_sub, int *type_until2);
void Print_Constants();
int  Print_ListOfDouble(char *format, List_T *list, char *buffer);
Constant *Get_ParserConstant(char *name);

#endif
