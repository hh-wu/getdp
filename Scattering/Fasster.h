#ifndef _FASTER_H_
#define _FASTER_H_

#ifdef USE_FASSTER

#include <Python.h>
#define PY_ARRAY_UNIQUE_SYMBOL mathToolkitTensor
#include <arrayobject.h>
#include "tensor.h"

#endif // USE_FASSTER

void Fasster_Initialize();
void Fasster_Finalize();
void Fasster_InitializeScatterer(int nbpatch, char *moduleName, char *className);

#endif
