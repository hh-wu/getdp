#define RCSID "$Id: Numeric.c,v 1.1 2003-03-17 23:03:22 geuzaine Exp $"

#include "GetDP.h"
#include "Numeric.h"

/* Check GSL version. We need at least 1.2, since all versions <=
   1.1.1 have a buggy SVD routine (infinite loop fixed on Sun Jun 16
   11:45:29 2002 in GSL's cvs tree). We check this at run time since
   GetDP could be distributed with the gsl dynamically linked. */

#if defined(HAVE_GSL)

#include <gsl/gsl_version.h>
#include <gsl/gsl_errno.h>

void new_handler(const char *reason, const char *file, int line,
                 int gsl_errno){
  Msg(ERROR, "GSL: %s (%s, line %d)", reason, file, line);
}

int check_gsl(){
  /* check version */
  int major, minor;
  sscanf(gsl_version, "%d.%d", &major, &minor);
  if(major < 1 || (major == 1 && minor < 2)) {
    Msg(DIRECT, ERROR_STR "Your GSL version (%d.%d.X) has a bug in the singular value",
        major, minor);
    Msg(DIRECT, ERROR_STR "decomposition code. Please upgrade to version 1.2 or above.");
    Msg(ERROR, "You can download the GSL from http://sources.redhat.com/gsl/");
    return 0;
  }
  /* set new error handler */
  gsl_set_error_handler(&new_handler);
  return 1;
}

#else

int check_gsl(){
  return 1;
}

#endif
