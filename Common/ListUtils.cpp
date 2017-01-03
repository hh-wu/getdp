// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Marc Ume
//

#include "GetDPConfig.h"
#if !defined(HAVE_NO_STDINT_H)
#include <stdint.h>
#elif defined(HAVE_NO_INTPTR_T)
typedef unsigned long intptr_t;
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include "MallocUtils.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "Message.h"

#if !defined(HAVE_GMSH)

int fcmp_int(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int fcmp_absint(const void *a, const void *b)
{
  return (abs(*(int *)a) - abs(*(int *)b));
}

int fcmp_double(const void *a, const void *b)
{
  double cmp;

  cmp = *(double *)a - *(double *)b;
  if(cmp > 1.e-16)
    return 1;
  else if(cmp < -1.e-16)
    return -1;
  else
    return 0;
}

List_T *List_Create(int n, int incr, int size)
{
  List_T *liste;

  if(n <= 0)
    n = 1;
  if(incr <= 0)
    incr = 1;

  liste = (List_T *) Malloc(sizeof(List_T));

  liste->nmax = 0;
  liste->incr = incr;
  liste->size = size;
  liste->n = 0;
  liste->isorder = 0;
  liste->array = NULL;

  List_Realloc(liste, n);
  return (liste);
}

void List_Delete(List_T * liste)
{
  if(!liste)
    return;
  Free(liste->array);
  Free(liste);
}

void List_Realloc(List_T * liste, int n)
{
  if(n <= 0)
    return;

  if(liste->array == NULL) {
    // This does not permit to allocate lists smaller that liste->incr:
    //liste->nmax = ((n - 1) / liste->incr + 1) * liste->incr;
    // So this is much better
    liste->nmax = n;
    liste->array = (char *)Malloc(liste->nmax * liste->size);
  }
  else if(n > liste->nmax) {
    liste->nmax = ((n - 1) / liste->incr + 1) * liste->incr;
    liste->array = (char *)Realloc(liste->array, liste->nmax * liste->size);
  }
}

void List_Add(List_T * liste, void *data)
{
  liste->n++;

  List_Realloc(liste, liste->n);
  liste->isorder = 0;
  memcpy(&liste->array[(liste->n - 1) * liste->size], data, liste->size);
}

int List_Nbr(List_T * liste)
{
  return (liste) ? liste->n : 0;
}

void List_Read(List_T * liste, int index, void *data)
{
  if((index < 0) || (index >= liste->n))
    Message::Fatal("Wrong list index (read)");
  memcpy(data, &liste->array[index * liste->size], liste->size);
}

void List_Write(List_T * liste, int index, void *data)
{
  if((index < 0) || (index >= liste->n))
    Message::Error("Wrong list index (write)");
  else {
    liste->isorder = 0;
    memcpy(&liste->array[index * liste->size], data, liste->size);
  }
}

void List_Put(List_T * liste, int index, void *data)
{
  if(index < 0)
    Message::Error("Wrong list index (put)");
  else {
    if(index >= liste->n) {
      liste->n = index + 1;
      List_Realloc(liste, liste->n);
      List_Write(liste, index, data);
    }
    else {
      List_Write(liste, index, data);
    }
  }
}

void List_Pop(List_T * liste)
{
  if(liste->n > 0)
    liste->n--;
}

void *List_Pointer(List_T * liste, int index)
{
  if((index < 0) || (index >= liste->n))
    Message::Fatal("Wrong list index (pointer)");

  liste->isorder = 0;
  return (&liste->array[index * liste->size]);
}

void *List_Pointer_NoChange(List_T * liste, int index)
{
  if((index < 0) || (index >= liste->n))
    Message::Fatal("Wrong list index (pointer)");

  return (&liste->array[index * liste->size]);
}

void *List_Pointer_Fast(List_T * liste, int index)
{
  return (&liste->array[index * liste->size]);
}

void *List_Pointer_Test(List_T * liste, int index)
{
  if(!liste || (index < 0) || (index >= liste->n))
    return NULL;

  liste->isorder = 0;
  return (&liste->array[index * liste->size]);
}

void List_Sort(List_T * liste, int (*fcmp) (const void *a, const void *b))
{
  if(!liste) return;
  qsort(liste->array, liste->n, liste->size, fcmp);
}

int List_Search(List_T * liste, void *data,
                int (*fcmp) (const void *a, const void *b))
{
  void *ptr;

  if(liste->isorder != 1) {
    List_Sort(liste, fcmp);
    liste->isorder = 1;
  }
  ptr = (void *)bsearch(data, liste->array, liste->n, liste->size, fcmp);
  if(ptr == NULL)
    return (0);
  return (1);
}

int List_ISearchSeq(List_T * liste, void *data,
                    int (*fcmp) (const void *a, const void *b))
{
  int i;

  if(!liste)
    return -1;
  i = 0;
  while((i < List_Nbr(liste)) && fcmp(data, (void *)List_Pointer(liste, i)))
    i++;
  if(i == List_Nbr(liste))
    i = -1;
  return i;
}

void *List_PQuery(List_T * liste, void *data,
                  int (*fcmp) (const void *a, const void *b))
{
  void *ptr;

  if(liste->isorder != 1)
    List_Sort(liste, fcmp);
  liste->isorder = 1;
  ptr = (void *)bsearch(data, liste->array, liste->n, liste->size, fcmp);
  return (ptr);
}

int List_PSuppress(List_T * liste, int index)
{
  char *ptr;
  int len;

  ptr = (char *)List_Pointer_NoChange(liste, index);
  if(ptr == NULL)
    return (0);

  liste->n--;
  len = liste->n - (((intptr_t)ptr - (intptr_t)liste->array) / liste->size);
  if(len > 0)
    memmove(ptr, ptr + liste->size, len * liste->size);
  return (1);
}

void List_Invert(List_T * a, List_T * b)
{
  int i, N;
  N = List_Nbr(a);
  for(i = 0; i < N; i++) {
    List_Add(b, List_Pointer(a, N - i - 1));
  }
}

void List_Reset(List_T * liste)
{
  if(!liste)
    return;
  liste->n = 0;
}

void List_Action(List_T * liste, void (*action) (void *data, void *dummy))
{
  int i, dummy;

  for(i = 0; i < List_Nbr(liste); i++)
    (*action) (List_Pointer_NoChange(liste, i), &dummy);
}

void List_Copy(List_T * a, List_T * b)
{
  int i, N;
  N = List_Nbr(a);
  for(i = 0; i < N; i++) {
    List_Add(b, List_Pointer(a, i));
  }
}

List_T *ListOfDouble2ListOfInt(List_T *dList)
{
  int n = List_Nbr(dList);
  List_T *iList = List_Create(n, n, sizeof(int));
  for(int i = 0; i < n; i++){
    double d;
    List_Read(dList, i, &d);
    int j = (int)d;
    List_Add(iList, &j);
  }
  return iList;
}

int List_Suppress(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  char *ptr;
  int len;

  ptr = (char*)List_PQuery(liste,data,fcmp) ;
  if (ptr == NULL) return(0);

  liste->n--;
  len = liste->n - (((intptr_t)ptr - (intptr_t)liste->array) / liste->size);
  if (len > 0) memmove(ptr, ptr + liste->size, len * liste->size);
  return(1);
}


#endif

// These are not defined in Gmsh:

static int safe_fwrite(const void *ptr, size_t size, size_t nmemb, FILE * stream)
{
  size_t result = fwrite(ptr, size, nmemb, stream);

  if(result < nmemb) {
    Message::Error(strerror(errno));
    if(fflush(stream) < 0)
      Message::Error("EOF reached");
    if(fclose(stream) < 0)
      Message::Error(strerror(errno));
    return 1;
  }
  return 0;
}

void List_WriteToFile(List_T * liste, FILE * file, int format)
{
  int i, n;

  if(!(n = List_Nbr(liste)))
    return;

  switch (format) {
  case LIST_FORMAT_ASCII:
    if(liste->size == sizeof(double))
      for(i = 0; i < n; i++)
        fprintf(file, " %.16g", *((double *)&liste->array[i * liste->size]));
    else if(liste->size == sizeof(float))
      for(i = 0; i < n; i++)
        fprintf(file, " %.16g", *((float *)&liste->array[i * liste->size]));
    else if(liste->size == sizeof(int))
      for(i = 0; i < n; i++)
        fprintf(file, " %d", *((int *)&liste->array[i * liste->size]));
    else if(liste->size == sizeof(char))
      for(i = 0; i < n; i++)
        fputc(*((char *)&liste->array[i * liste->size]), file);
    else
      Message::Error("Bad type of data to write list to file (size = %d)",
                     liste->size);
    break;
  case LIST_FORMAT_BINARY:
    safe_fwrite(liste->array, liste->size, n, file);
    break;
  default:
    Message::Error("Unknown list format");
    break;
  }
}

int List_Query(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  void *ptr;

  if (liste->isorder != 1) List_Sort(liste,fcmp);
  liste->isorder = 1;
  ptr = (void *) bsearch(data,liste->array,liste->n,liste->size,fcmp);
  if (ptr == NULL) return(0);

  memcpy(data,ptr,liste->size);
  return (1);
}

void List_Insert(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  if (List_Search(liste,data,fcmp) == 0)
    List_Add(liste,data);
}

List_T *List_Copy(List_T *src)
{
  List_T *dest = (List_T *)Malloc(sizeof(List_T));
  dest->nmax = src->nmax;
  dest->incr = src->incr;
  dest->size = src->size;
  dest->n = src->n;
  dest->isorder = src->isorder;
  dest->array = (char *)Malloc(src->nmax * src->size);
  memcpy(dest->array, src->array, src->nmax * src->size);
  return dest;
}

int List_ISearch(List_T * liste, void *data,
                 int (*fcmp) (const void *a, const void *b))
{
  void *ptr;

  if (!liste)  return -1 ;
  if(liste->isorder != 1)
    List_Sort(liste, fcmp);
  liste->isorder = 1;
  ptr = (void *)bsearch(data, liste->array, liste->n, liste->size, fcmp);
  if(ptr == NULL)
    return (-1);
  return (((intptr_t)ptr - (intptr_t)liste->array) / liste->size);
}

int List_ISearchSeqPartial(List_T *liste, void * data, int i_Start,
                           int (*fcmp)(const void *a, const void *b))
{
  int i ;

  if (!liste)  return -1 ;
  i = i_Start ;
  while ((i < List_Nbr(liste)) &&
         fcmp(data, (void *)List_Pointer(liste, i)) )  i++ ;
  if (i == List_Nbr(liste))  i = -1 ;
  return i ;
}

int List_Replace(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  void *ptr;

  if (liste->isorder != 1) List_Sort(liste,fcmp);
  liste->isorder = 1;
  ptr = (void *) bsearch(data,liste->array,liste->n,liste->size,fcmp);
  if (ptr == NULL) {
    List_Add(liste,data);
    return(0);
  }
  else {
    memcpy(ptr,data,liste->size);
    return (1);
  }
}

static void *lolofind(void *data, void *array, int n, int size,
		      int (*fcmp)(const void *a, const void *b) )
{
  char *ptr;
  int i;

  ptr = (char*)array;
  for (i = 0; i < n; i++) {
    if (fcmp(ptr,data) == 0) break;
    ptr += size;
  }
  if (i < n) return(ptr);
  return(NULL);
}

static char *startptr = NULL;

int List_LQuery(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b), int first)
{
  char *ptr;

  if (first == 1) {
    ptr = (char *) lolofind(data,liste->array,liste->n,liste->size,fcmp);
  }
  else {
    if (startptr != NULL)
      ptr = (char *) lolofind(data,startptr,
			      liste->n - (startptr-liste->array)/liste->size,
			      liste->size,fcmp);
    else
      return(0);
  }

  if (ptr == NULL) return(0);

  startptr =  ptr + liste->size;
  if ( startptr >= ( liste->array + liste->n * liste->size))
    startptr = NULL;
  memcpy(data,ptr,liste->size);
  return (1);
}
