/* $Id: Message.h,v 1.12 2001-05-18 12:26:27 dular Exp $ */
#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <stdarg.h>

/* Message levels */ 

#define DIRECT       0
#define ERROR        1
#define GERROR       ERROR
#define BIGERROR     2
#define WARNING      3
#define OPERATION    4
#define INFO         5
#define INFO1        6
#define INFO2        7
#define INFO3        8
#define BIGINFO      9
#define SPARSKIT     10
#define PETSC        11
#define ITER         12
#define DEBUG        13
#define DEBUG2       14
#define LOADING      15
#define RESOURCES    16
#define SUMMARY      17
#define CHECK        18

#define WHITE_INDENT  12
#define WHITE_STR     "            "
#define ERROR_STR     "Error     : "
#define WARNING_STR   "Warning   : "
#define SPARSKIT_STR  "Solver    : "
#define PETSC_STR     "PETSc     : "
#define OPERATION_STR "Operation : "
#define INFO_STR      "Info      : "
#define BIGINFO_STR   "Info      : "
#define LOADING_STR   "Loading   : "
#define RESOURCES_STR "Resources : "
#define SUMMARY_STR   "Resources : "

void Info(int level, char *arg0);
void Signal(int signum);
void Msg(int level, char *fmt, ...);
void Progress(int current, int final, char *label);
void Debug(void);

/* Socket message protocol */

#define GETDP_END                 -1
#define GETDP_INFO                 1
#define GETDP_PROGRESS             2
#define GETDP_RESOLUTION_NAME      3
#define GETDP_POSTOPERATION_NAME   4
#define GETDP_LOAD_VIEW            5

#endif
