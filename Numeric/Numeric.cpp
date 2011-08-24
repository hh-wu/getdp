// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <math.h>
#include "GetDPConfig.h"
#include "Message.h"

#if defined(HAVE_GSL)

#include <gsl/gsl_version.h>
#include <gsl/gsl_errno.h>

void new_handler(const char *reason, const char *file, int line,
                 int gsl_errno)
{
  Message::Error("GSL: %s (%s, line %d)", reason, file, line);
}

int check_gsl()
{
  // check version
  int major, minor;
  if(!sscanf(gsl_version, "%d.%d", &major, &minor)){
    Message::Fatal("Cannot retrieve GSL version");
    return 0;
  }
  if(major < 1 || (major == 1 && minor < 2)) {
    Message::Error("Your GSL version (%d.%d.X) has a bug in the singular value "
                   "decomposition code. Please upgrade to version 1.2 or above. "
                   "You can download the GSL from http://sources.redhat.com/gsl/",
                   major, minor);
    return 0;
  }
  // set new error handler
  gsl_set_error_handler(&new_handler);
  return 1;
}

#else

int check_gsl()
{
  return 1;
}

#endif
