// $Id: Fasster.cpp,v 1.1 2002-05-24 20:38:39 geuzaine Exp $

#include "Fasster.h"
#include "Utils.h"
#include "Tools.h"
#include "Scatterer.h"

void Fasster_Initilialize(){
  static int init=0;
  if(!init){
    init = 1;
    Py_Initialize();
    import_array();
    if(PyErr_Occurred() != NULL) {
      PyErr_Print();
      exit(1);
    }
  }
}

void Fasster_Finalize(){
  Py_Finalize();
}

#define MAXPATCH
static PyObject *dfduFaster[MAXPATCH];
static PyObject *dfdvFaster[MAXPATCH];
static PyObject *dfdfduduFaster[MAXPATCH];
static PyObject *dfdfdvdvFaster[MAXPATCH];
static PyObject *dfdfdudvFaster[MAXPATCH];
static PyObject *pouFaster[MAXPATCH];
static PyObject *inverseFaster[MAXPATCH];

void Fasster_InitializeScatterer(int nbpatch, char *moduleName, char *className){
  PyObject *theModule,*theClass, *body, *patch;

  theModule = PyImport_ImportModule(moduleName);
  theClass = PyObject_GetAttrString(theModule,className);
  body = PyObject_CallFunction(theClass,NULL);

  if (!body) {
    PyErr_Print();
    Msg(ERROR, "Cannot create body instance");
  }

  for(i=0; i<nbpatch; i++){
    patch = PySequence_GetItem(body,i);
    dfduFaster[i] = PyObject_GetAttrString(patch,"dfdu");
    dfdvFaster[i] = PyObject_GetAttrString(patch,"dfdv");
    dfdfduduFaster[i] = PyObject_GetAttrString(patch,"dfdfdudu");
    dfdfdvdvFaster[i] = PyObject_GetAttrString(patch,"dfdfdvdv");
    dfdfdudvFaster[i] = PyObject_GetAttrString(patch,"dfdfdudv");
    pouFaster[i] = PyObject_GetAttrString(patch,"pou");
    inverseFaster[i] = PyObject_GetAttrString(patch,"inverse");
  }

}

void Fasster_Call(PyObject *fct, int n, double* u, int m, double *v){
  PyObject *value;

  // create the tensors
  tensor2D u(5,5),v(5,5);
  
  // same as "value = function(u,v)"
  value = PyObject_CallFunction(fct,"OO",u.getPythonTensor(),v.getPythonTensor());

  // Ok, so now, value is a pointer to a Python object containing the result of 
  // our calculation.  Not only does the tensor constructor take the
  // size of the tensor to create (as shown above), but it can also a pointer
  // to a Python object and make a tensor out of that.
  tensor3D result(value);
  
  // Which we can use either as a Python object
  PyObject_Print(result.getPythonTensor(),stdout,0);

  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      for(int k=0;k<3;k++)
	result.getValue(i,j,k);
  
}
