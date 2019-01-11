// GetDP - Copyright (C) 1997-2015 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <stdio.h>
#include <map>
#include <stack>
#include <string>
#include "MacroManager.h"

extern std::string getdp_yystring;

class File_Position
{
 public:
  long int lineno;
  fpos_t position;
  FILE *file;
  std::string filename;
};

class MacroManagerStack
{
 public:
  std::stack<File_Position> s;
};

class MacroManagerMap
{
 public:
  std::map<std::string, File_Position> inFile;
  std::map<std::string, std::string> inString;
};

MacroManager *MacroManager::_instance = 0;

MacroManager::MacroManager()
{
  _macros = new MacroManagerMap;
  _calls = new MacroManagerStack;
}

MacroManager *MacroManager::Instance()
{
  if(!_instance) {
    _instance = new MacroManager;
  }
  return _instance;
}

void MacroManager::clear()
{
  _macros->inFile.clear();
  _macros->inString.clear();
}

int MacroManager::enterMacro(const std::string &name, FILE **f,
                             std::string &filename, long int &lno) const
{
  if(_macros->inFile.find(name) == _macros->inFile.end())
    return 0;
  File_Position fpold;
  fpold.lineno = lno;
  fpold.filename = filename;
  fpold.file = *f;
  fgetpos(fpold.file, &fpold.position);
  _calls->s.push(fpold);
  File_Position fp = (_macros->inFile)[name];
  fsetpos(fp.file, &fp.position);
  *f = fp.file;
  filename = fp.filename;
  lno = fp.lineno;
  return 1;
}

int MacroManager::leaveMacro(FILE **f, std::string &filename, long int &lno)
{
  if(!_calls->s.size())
    return 0;
  File_Position fp;
  fp = _calls->s.top();
  _calls->s.pop();
  fsetpos(fp.file, &fp.position);
  *f = fp.file;
  filename = fp.filename;
  //  lno = fp.lineno;
  // To fix: bad line number after leaving macro if not -1
  lno = fp.lineno - 1;
  return 1;
}

int MacroManager::createMacro(const std::string &name, FILE *f,
                              const std::string &filename, long int lno)
{
  if(_macros->inFile.find(name) != _macros->inFile.end())
    return 0;
  File_Position fp;
  fp.file = f;
  fp.filename = filename;
  fp.lineno = lno;
  fgetpos(fp.file, &fp.position);
  (_macros->inFile)[name] = fp;
  return 1;
}

int MacroManager::createStringMacro(const std::string &name,
                                    const std::string &value)
{
  if(_macros->inString.find(name) != _macros->inString.end())
    return 0;
  (_macros->inString)[name] = value;
  return 1;
}

int MacroManager::enterStringMacro(const std::string &name) const
{
  if(_macros->inString.find(name) == _macros->inString.end())
    return 0;
  getdp_yystring = (_macros->inString)[name];
  return 1;
}
