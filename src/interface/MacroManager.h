// GetDP - Copyright (C) 1997-2015 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef MACRO_MANAGER_H
#define MACRO_MANAGER_H

#include <string>

// Singleton, one macro manager for all parsers.

class MacroManagerStack;
class MacroManagerMap;

class MacroManager
{
 private:
  MacroManagerMap *_macros;
  MacroManagerStack *_calls;
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
