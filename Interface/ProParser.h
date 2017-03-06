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
  Struct(int tag,
         std::map<std::string, std::vector<double> > & fopt,
         std::map<std::string, std::vector<std::string> > & copt,
         int member_ValMax) :
    _tag(tag), _member_ValMax(member_ValMax), _fopt(fopt), _copt(copt) {}
  ~Struct() {}

  int append(int tag,
             std::map<std::string, std::vector<double> > & fopt,
             std::map<std::string, std::vector<std::string> > & copt,
             int member_ValMax)
  {
    _fopt.insert(fopt.begin(), fopt.end());
    _copt.insert(copt.begin(), copt.end());
    _member_ValMax = member_ValMax;
    if (tag >= 0) _tag = tag;
    return _tag;
  }

  inline int getTag() const { return _tag; }

  int getMember (std::string & key_member, double & out) const
  {
    std::map<std::string, std::vector<double> >::const_iterator
      it = _fopt.find(key_member);
    if (it != _fopt.end()) {
      out = it->second[0]; return 0;
    }
    else {
      out = 0.; return 1; // Error: Unknown member of Struct
    }
  }

  int getMember (std::string & key_member, const std::string * & out) const
  {
    std::map<std::string, std::vector<std::string> >::const_iterator
      it = _copt.find(key_member);
    if (it != _copt.end()) {
      out = &it->second[0]; return 0;
    }
    else {
      out = NULL; return 1; // Error: Unknown member of Struct
    }
  }

  int getMember_ValMax () const { return _member_ValMax; }

  void sprint(std::string & str,
              const std::string & struct_name, const std::string & struct_namespace)
    const
  {
    str += "Struct ";
    if (struct_namespace.size()) str += struct_namespace + "::";
    str += struct_name + " [ ";
    bool flag_comma = false;
    for (std::map<std::string, std::vector<double> >::const_iterator
           it_attrib = _fopt.begin();
         it_attrib != _fopt.end(); ++it_attrib ) {
      if (!flag_comma && it_attrib != _fopt.begin()) flag_comma = true;
      if (flag_comma) str += ", ";
      str += it_attrib->first + " ";
      char tmp[32]; sprintf(tmp, "%g", it_attrib->second[0]); str += tmp;
    }
    for (std::map<std::string, std::vector<std::string> >::const_iterator
           it_attrib = _copt.begin();
         it_attrib != _copt.end(); ++it_attrib ) {
      if (!flag_comma && it_attrib != _copt.begin()) flag_comma = true;
      if (flag_comma) str += ", ";
      str += it_attrib->first + " \"" + it_attrib->second[0] + "\"";
    }
    str += " ];\n";
  }

private:
  int _tag, _member_ValMax;
  std::map<std::string, std::vector<double> > _fopt;
  std::map<std::string, std::vector<std::string> > _copt;
};


template <class K, class T>
class Map {
public:
  Map() {}
  ~Map() {}

  T * Find(K key)
  {
    typename std::map<K, T>::iterator it;
    if ( (it = _map.find(key)) != _map.end() ) return &it->second;
    else return NULL;
  }

  const T * Find(K key) const
  {
    typename std::map<K, T>::const_iterator it;
    if ( (it = _map.find(key)) != _map.end() ) return &it->second;
    else return NULL;
  }

  inline T & operator[] (K key) { return _map[key]; }
  inline std::map<K, T> & get() { return _map; }
  inline const std::map<K, T> & get() const { return _map; }
  inline int count (const std::string key) const { return _map.count(key); }
  inline int size () const { return _map.size(); }

public:
  std::map<K, T> _map;
};


typedef std::map<std::string, Struct> Map_string_Struct;

class Structs : public Map<std::string, Struct> {
public:
  Structs() { _max_tag = 0; }
  ~Structs() {}

  int defStruct(std::string & struct_name,
                std::map<std::string, std::vector<double> > & fopt,
                std::map<std::string, std::vector<std::string> > & copt,
                int member_ValMax, bool append = false)
  {
    int tag;
    std::map<std::string, std::vector<double> >::const_iterator it = fopt.find("Tag");
    if (it != fopt.end()) {
      tag = (int)it->second[0]; // Tag forced
      _max_tag = std::max(_max_tag, tag);
    }
    else {
      tag = (!append)? ++_max_tag : -1; // Tag auto
      if (!append) fopt["Tag"].push_back((double)tag);
    }
    if (!append)
      (*this)[struct_name] = Struct(tag, fopt, copt, member_ValMax);
    else
      (*this)[struct_name].append(tag, fopt, copt, member_ValMax);
    return tag;
  }

  int get_key_struct_from_tag(int tag, const std::string * & key_struct) const
  {
    Map_string_Struct::const_iterator it_st;
    for (it_st = this->get().begin(); it_st != this->get().end(); ++it_st )
      if (it_st->second.getTag() == tag) break;
    if (it_st == this->get().end()) return 2; // 2: Error: Unknown Struct
    key_struct = &it_st->first;
    return 0; // 0: no error
  }

  void sprint(std::string & str, const std::string & struct_namespace) const
  {
    for (Map_string_Struct::const_iterator it_st = this->get().begin();
         it_st != this->get().end(); ++it_st )
      it_st->second.sprint(str, it_st->first, struct_namespace);
  }

private:
  int _max_tag;
};


typedef std::map<std::string, Structs> Map_string_Structs;

class NameSpaces : public Map<std::string, Structs> {
public:
  NameSpaces() {}
  ~NameSpaces() {}

  int defStruct(std::string & key_namespace, std::string & key_name,
                std::map<std::string, std::vector<double> > & fopt,
                std::map<std::string, std::vector<std::string> > & copt,
                int & tag_out, int member_ValMax, bool append = false)
  {
    Structs * structs_P = &(*this)[key_namespace];
    if (!append && structs_P->count(key_name)) {
      tag_out = (*structs_P)[key_name].getTag();
      return 1; // 1: Error: Redefinition of Struct
    }
    tag_out = structs_P->defStruct(key_name, fopt, copt, member_ValMax, append);
    return 0; // 0: no error
  }

  int getTag(std::string & key_namespace, std::string & key_name,
             double & out) const
  {
    const Structs * structs_P = this->Find(key_namespace);
    const Struct * struct_P = (structs_P)? structs_P->Find(key_name) : NULL;
    if (structs_P && struct_P) {
      out = (double)struct_P->getTag();
    }
    else  {
      out = 0.; return 1; // 1: Error: Unknown Struct
    }
    return 0; // 0: no error
  }

  int getMember(std::string & key_namespace, std::string & key_name,
                std::string & key_member, double & out) const {

    const Structs * structs_P = this->Find(key_namespace);
    const Struct * struct_P = (structs_P)? structs_P->Find(key_name) : NULL;
    if (structs_P && struct_P) {
      if (struct_P->getMember(key_member, out)) {
        out = 0.; return 2; // 2: Error: Unknown member of Struct
      }
    }
    else  {
      out = 0.; return 1; // 1: Error: Unknown Struct
    }
    return 0; // 0: no error
  }

  int getMember(std::string & key_namespace, std::string & key_name,
                std::string & key_member, const std::string * & out) const
  {

    const Structs * structs_P = this->Find(key_namespace);
    const Struct * struct_P = (structs_P)? structs_P->Find(key_name) : NULL;
    if (structs_P && struct_P) {
      if (struct_P->getMember(key_member, out)) {
        out = NULL; return 2; // 2: Error: Unknown member of Struct
      }
    }
    else  {
      out = NULL; return 1; // 1: Error: Unknown Struct
    }
    return 0; // 0: no error
  }

  int get_key_struct_from_tag(std::string & key_namespace,
                              int tag, const std::string * & key_struct) const
  {
    const Structs * structs_P = this->Find(key_namespace);
    if (structs_P != NULL)
      return structs_P->get_key_struct_from_tag(tag, key_struct);
    else return 1; // 1: Error: Unknown NameSpace
  }

  int getMember_ValMax(std::string & key_namespace, std::string & key_name)
  {
    const Structs * structs_P = this->Find(key_namespace);
    const Struct * struct_P = (structs_P)? structs_P->Find(key_name) : NULL;
    return (structs_P && struct_P)? struct_P->getMember_ValMax() : -1;
  }

  void sprint(std::string & str) const
  {
    for (Map_string_Structs::const_iterator it_ns = this->get().begin();
         it_ns != this->get().end(); ++it_ns )
      it_ns->second.sprint(str, it_ns->first);
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
