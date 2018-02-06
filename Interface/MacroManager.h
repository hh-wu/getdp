// GetDP - Copyright (C) 1997-2015 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _MACRO_MANAGER_H_
#define _MACRO_MANAGER_H_

class mystack;
class mymap;

#include <string>

// Singleton, one macro manager for all parsers.

class MacroManager
{
 private:
  mymap *_macros;
  mystack *_calls;
  MacroManager();
  static MacroManager *_instance;
 public :
  static MacroManager *Instance();
  void clear();
  // macro in a file that is (being) parsed
  int createMacro(const std::string &name, FILE *f,
                  const std::string &filename, long int lineno);
  int leaveMacro(FILE **f, std::string &filename, long int &lineno);
  int enterMacro(const std::string &name, FILE **f,
                 std::string &filename, long int &lineno) const;

  // explicit macro as a string
  int createStringMacro(const std::string &name, const std::string &value);
  int enterStringMacro(const std::string &name) const;
};

#endif
