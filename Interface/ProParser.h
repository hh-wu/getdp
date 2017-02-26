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
#include "Message.h"

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

struct TwoChar { char *char1, *char2; };

// classes for Struct
class Struct {
public:
  Struct() {}
  Struct(int index,
         std::map<std::string, std::vector<double> > fopt,
         std::map<std::string, std::vector<std::string> > copt) :
    _index(index), _fopt(fopt), _copt(copt) {}
  ~Struct() {}

  void append(std::map<std::string, std::vector<double> > fopt,
              std::map<std::string, std::vector<std::string> > copt) {
    this->_fopt.insert(fopt.begin(), fopt.end());
    this->_copt.insert(copt.begin(), copt.end());
  }

  void print(const std::string & struct_name, const std::string & struct_namespace)
  {
    Message::Check("Struct ");
    if (struct_namespace.size()) Message::Check("%s::", struct_namespace.c_str());
    Message::Check("%s [", struct_name.c_str());
    Message::Check(" %d", this->_index);
    for (std::map<std::string, std::vector<double> >::iterator
           it_attrib = this->_fopt.begin();
         it_attrib != this->_fopt.end(); ++it_attrib )
      Message::Check(", %s %g", it_attrib->first.c_str(), it_attrib->second[0]);
    for (std::map<std::string, std::vector<std::string> >::iterator
           it_attrib = this->_copt.begin();
         it_attrib != this->_copt.end(); ++it_attrib )
      Message::Check(", %s \"%s\"",
                     it_attrib->first.c_str(), it_attrib->second[0].c_str());
    Message::Check(" ];\n");
  }

public:
  int _index;
  std::map<std::string, std::vector<double> > _fopt;
  std::map<std::string, std::vector<std::string> > _copt;
};


template <class K, class T>
class Map {
public:
  Map() {}
  ~Map() {}

  T * Find(K key) {
    typename std::map<K, T>::iterator it;
    if ( (it = _map.find(key)) != _map.end() ) return &it->second;
    else return NULL;
  }

  inline T & operator[] (K key) { return _map[key]; }
  inline std::map<K, T> & get() { return _map; }
  inline int count (std::string key) { return _map.count(key); }

public:
  std::map<K, T> _map;
};


typedef std::map<std::string, Struct> Map_string_Struct;

class Structs : public Map<std::string, Struct> {
public:
  Structs() { _new_index = 1; }
  ~Structs() {}

  int get_key_struct_from_index(int index, const std::string * & key_struct) {
    Map_string_Struct::iterator it_st;
    for (it_st = this->get().begin(); it_st != this->get().end(); ++it_st )
      if (it_st->second._index == index) break;
    if (it_st != this->get().end()) {
      key_struct = &it_st->first;
      return 0;
    }
    else return 2;
  }

  void print(const std::string & struct_namespace) {
    for (Map_string_Struct::iterator it_st = this->get().begin();
         it_st != this->get().end(); ++it_st )
      it_st->second.print(it_st->first, struct_namespace);
  }

public:
  int _new_index;
};


typedef std::map<std::string, Structs> Map_string_Structs;

class NameSpaces : public Map<std::string, Structs> {
public:
  NameSpaces() {}
  ~NameSpaces() {}

  int get_key_struct_from_index(int index, const std::string * & key_struct,
                                std::string & key_namespace) {
    if (this->count(key_namespace))
      return (*this)[key_namespace].get_key_struct_from_index(index, key_struct);
    else return 1;
  }

  void print() {
    for (Map_string_Structs::iterator it_ns = this->get().begin();
         it_ns != this->get().end(); ++it_ns )
      it_ns->second.print(it_ns->first);
  }
};


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
char *strEmpty();
void cStyleComments();
void cxxStyleComments();
void parseString(char endchar);
void skipUntil(const char *skip, const char *until);
void skipUntil_test(const char *skip, const char *until,
                    const char *until2, int l_until2_sub, int *type_until2);
void Print_Constants();
void Print_Struct();
int  Print_ListOfDouble(char *format, List_T *list, char *buffer);
Constant *Get_ParserConstant(char *name);

#endif
