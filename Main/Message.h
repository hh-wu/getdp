#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <stdarg.h>
                           /* output if verbosity */ 
#define DIRECT       0      /*   >= 2              */
#define ERROR        1      /*   >= 0 (always)     */
#define WARNING      2      /*   >= 0 (always)     */
#define OPERATION    3      /*   >= 2              */
#define INFO         4      /*   >= 3              */
#define INFO1        5      /*   >= 3              */
#define INFO2        6      /*   >= 3              */
#define INFO3        7      /*   >= 3              */
#define BIGINFO      8      /*   >= 1              */
#define SPARSKIT     9      /*   >= 3              */
#define PETSC        10     /*   >= 3              */
#define ITER         11     /*   >= 4              */
#define DEBUG        12     /*   == 99             */
#define LOADING      13     /*   >= 2              */
#define RESOURCES    14     /*   >= 4              */
#define SUMMARY      15     /*   >= 1              */
#define CHECK        16     /*   >= 0 (always)     */

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
