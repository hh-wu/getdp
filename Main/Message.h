/* $Id: Message.h,v 1.8 2001-03-16 13:07:13 geuzaine Exp $ */
#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <stdarg.h>

/*      Message level            displayed if '-v' */ 
#define DIRECT       0      /*   >= 2              */
#define ERROR        1      /*   >= 0 (always)     */
#define BIGERROR     2      /*   >= 0 (always)     */
#define WARNING      3      /*   >= 0 (always)     */
#define OPERATION    4      /*   >= 2              */
#define INFO         5      /*   >= 3              */
#define INFO1        6      /*   >= 3              */
#define INFO2        7      /*   >= 3              */
#define INFO3        8      /*   >= 3              */
#define BIGINFO      9      /*   >= 1              */
#define SPARSKIT     10     /*   >= 3              */
#define PETSC        11     /*   >= 3              */
#define ITER         12     /*   >= 4              */
#define DEBUG        13     /*   == 99             */
#define LOADING      14     /*   >= 2              */
#define RESOURCES    15     /*   >= 4              */
#define SUMMARY      16     /*   >= 1              */
#define CHECK        17     /*   >= 0 (always)     */

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

#endif
