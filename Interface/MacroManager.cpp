// GetDP - Copyright (C) 1997-2015 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdio.h>
#include <map>
#include <stack>
#include <string>
#include "MacroManager.h"

class File_Position
{
 public:
  long int lineno;
  fpos_t position;
  FILE *file;
  std::string filename;
};

class mystack
{
 public:
  std::stack<File_Position> s;
};

class mymap
{
 public:
  std::map<std::string, File_Position> m;
};

MacroManager *MacroManager::instance = 0;

MacroManager::MacroManager()
{
  macros = new mymap;
  calls = new mystack;
}

MacroManager *MacroManager::Instance()
{
  if(!instance) {
    instance = new MacroManager;
  }
  return instance;
}

void MacroManager::clear()
{
  macros->m.clear();
}

int MacroManager::enterMacro(const std::string &name, FILE **f,
                             std::string &filename, long int &lno) const
{
  if(macros->m.find(name) == macros->m.end())
    return 0;
  File_Position fpold;
  fpold.lineno = lno;
  fpold.filename = filename;
  fpold.file = *f;
  fgetpos(fpold.file, &fpold.position);
  calls->s.push(fpold);
  File_Position fp = (macros->m)[name];
  fsetpos(fp.file, &fp.position);
  *f = fp.file;
  filename = fp.filename;
  lno = fp.lineno;
  return 1;
}

int MacroManager::leaveMacro(FILE **f, std::string &filename, long int &lno)
{
  if(!calls->s.size())
    return 0;
  File_Position fp;
  fp = calls->s.top();
  calls->s.pop();
  fsetpos(fp.file, &fp.position);
  *f = fp.file;
  filename = fp.filename;
  //  lno = fp.lineno;
  // To fix: bad line number after leaving macro if not -1
  lno = fp.lineno-1;
  return 1;
}

int MacroManager::createMacro(const std::string &name, FILE *f,
                              const std::string &filename, long int lno)
{
  if(macros->m.find(name) != macros->m.end())
    return 0;
  File_Position fp;
  fp.file = f;
  fp.filename = filename;
  fp.lineno = lno;
  fgetpos(fp.file, &fp.position);
  (macros->m)[name] = fp;
  return 1;
}
