#ifndef _SAFE_IO_H_

#include <stdarg.h>
#include <stdio.h>

int safe_fprintf(FILE *stream, char *fmt, ...);
int safe_fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);

#endif
