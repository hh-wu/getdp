#ifndef _COMPAT_H_
#define _COMPAT_H_


/*
  Macros for indicating code that should be compiled with a C
  interface, rather than a C++ interface. This just hides the ugly
  extern "C" {} wrappers.  */

#if defined(__cplusplus)
#define EXTERN_C_BEGIN extern "C" {
#define EXTERN_C_END }
#else
#define EXTERN_C_BEGIN 
#define EXTERN_C_END 
#endif

#endif

