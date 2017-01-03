// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Message.h"

extern struct CurrentData Current ;
extern char *Name_Path ;

// This file defines a simple interface to Python.
//
// * The Python interpreter will be initialized when GetDP is started; you can
//   then use the Python[argument_list]{string} function in the same way as
//   other GetDP functions:
//
//   - `argument_list' contains standard GetDP arguments, e.g. X[], Norm[{d a}],
//     etc. These arguments will be stored in Python as a list variable named
//     `input', which you can then access as a normal Python list
//
//   - `string' contains either the Python expression that you want to evaluate,
//     or the name of a Python script file (if `string' ends with `.py'). Due to
//     conflicts in the GetDP syntax, to use a string variable, you need to use
//     Str[string_variable]
//
//   - you should save the value you want to return to GetDP in a list named
//     `output'
//
// * Since the Python interpreter lives for the whole duration of the GetDP run,
//   you can make quite efficient Python calculations by precomputing things
//   outside the finite element assembly loop. The easiest way to to this is to
//   evaluate the Python code you need to precompute using
//
//     Evaluate[ my_python_precomputation[] ]
//
//   in the Operation field of a Resolution before Generate[] is called.

#if defined(HAVE_PYTHON)

#include <Python.h>

void F_Python(F_ARG)
{
  if(!Fct->String){
    Message::Error("Missing Python expression: use Python[arguments]{\"expression\"}");
    for (int k = 0; k < Current.NbrHar; k++)
      V->Val[MAX_DIM * k] = 0. ;
    V->Type = SCALAR;
    return;
  }

  // we could do this more efficiently by directly storing the values in python
  // (instead of parsing)
  std::string expr = "input = [";
  for(int i = 0; i < Fct->NbrArguments; i++){
    char tmp[256];
    if((A + i)->Type == SCALAR){
      if(Current.NbrHar == 2)
        sprintf(tmp, "%.16g+%.16gj",
                (A + i)->Val[0], (A + i)->Val[MAX_DIM]);
      else
        sprintf(tmp, "%.16g", (A + i)->Val[0]);
    }
    else if((A + i)->Type == VECTOR){
      strcpy(tmp, "[");
      char tmp2[256];
      for(int j = 0; j < 3; j++){
        if(Current.NbrHar == 2)
          sprintf(tmp2, "%.16g+%.16gj",
                  (A + i)->Val[j], (A + i)->Val[MAX_DIM + j]);
        else
          sprintf(tmp2, "%.16g", (A + i)->Val[j]);
        if(j != 2) strcat(tmp2, ",");
        strcat(tmp, tmp2);
      }
      strcat(tmp, "]");
    }
    else{
      Message::Error("Unsupported Python argument (should be scalar or vector");
    }
    if(i) expr += ",";
    expr += tmp;
  }
  expr += std::string("];");

  std::string str(Fct->String);
  if(str.size() > 3 && str.substr(str.size() - 3) == ".py"){
    PyRun_SimpleString(expr.c_str());
    std::string file = std::string(Name_Path) + str;
    FILE *fp = fopen(file.c_str(), "r");
    if(fp){
      PyRun_SimpleFile(fp, file.c_str());
      fclose(fp);
    }
    else{
      Message::Error("Could not open file `%s'", file.c_str());
    }
  }
  else{
    expr += std::string(Fct->String);
    PyRun_SimpleString(expr.c_str());
  }

  for (int k = 0; k < Current.NbrHar; k++)
    for (int j = 0; j < 9; j++)
      V->Val[MAX_DIM * k + j] = 0. ;
  V->Type = SCALAR;

  PyObject* dict = PyModule_GetDict(PyImport_AddModule("__main__"));
  if(dict){
    PyObject* out = PyDict_GetItemString(dict, "output");
    if(out){
      if(PyList_Check(out)){
        Py_ssize_t size = PyList_Size(out);
        if(size == 1 || size == 3 || size == 9){
          for(int i = 0; i < size; i++){
            PyObject *item = PyList_GetItem(out, i);
            if(PyComplex_Check(item)){
              double re = PyComplex_RealAsDouble(out);
              double im = PyComplex_ImagAsDouble(out);
              V->Val[i] = re;
              V->Val[MAX_DIM + i] = im;
            }
            else if(PyNumber_Check(item)){
              V->Val[i] = PyFloat_AsDouble(item);
            }
            else{
              Message::Error("Unknown type of Python output list item");
            }
          }
          V->Type = (size == 1) ? SCALAR : (size == 3) ? VECTOR : TENSOR;
        }
        else{
          Message::Error("Wrong number of components in Python output list "
                         "(%d != 1, 3 or 9)", size);
        }
      }
      else if(PyComplex_Check(out)){
        double re = PyComplex_RealAsDouble(out);
        double im = PyComplex_ImagAsDouble(out);
        V->Val[0] = re;
        V->Val[MAX_DIM] = im;
      }
      else if(PyNumber_Check(out)){
        V->Val[0] = PyFloat_AsDouble(out);
      }
      else{
        Message::Error("Unknown type of Python output value");
      }
    }
  }
}

#else

void F_Python(F_ARG)
{
  Message::Error("You need to compile GetDP with Python support to use Python functions");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

#endif
