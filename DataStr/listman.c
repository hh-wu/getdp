/* Original author: Marc UME */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

#include "ualloc.h"
#include "listman.h"
#include "Message.h"

static char *startptr;


List_T *List_Create(int n, int incr, int size)
{
  List_T *liste;

  if (n <= 0)  n = 1 ;
  if (incr <= 0) incr = 1;

  liste = (List_T *)Malloc(sizeof(List_T));

  liste->nmax    = 0;
  liste->incr    = incr;
  liste->size    = size;
  liste->n       = 0;
  liste->isorder = 0;
  liste->array   = NULL;

  List_Realloc(liste,n);
  return(liste);
}

void List_Delete(List_T *liste)
{
  Free(liste->array);
  Free(liste);
}

void List_Realloc(List_T *liste,int n)
{
  if (n <= 0) return;

  if (liste->array == NULL) {
    liste->nmax = ((n - 1) / liste->incr + 1) * liste->incr;
    liste->array = (char *)Malloc(liste->nmax * liste->size);
  }
  else
    if (n > liste->nmax) {
      liste->nmax = ((n - 1) / liste->incr + 1) * liste->incr;
      liste->array = (char *)Realloc(liste->array,
			 liste->nmax * liste->size);
    }
}

void List_Add(List_T *liste, void *data)
{
  liste->n++;

  List_Realloc(liste,liste->n);
  liste->isorder = 0;
  memcpy(&liste->array[(liste->n - 1) * liste->size],data,liste->size);
}

int List_Nbr(List_T *liste)
{
  return (liste)? liste->n : 0 ;
}

void List_Insert(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  if (List_Search(liste,data,fcmp) == 0)
    List_Add(liste,data);
}

int List_Replace(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  void *ptr;

  if (liste->isorder != 1) List_Tri(liste,fcmp);
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

void List_Read(List_T *liste, int index, void *data)
{
  if ((index < 0) || (index >= liste->n))
    Msg(ERROR, "Wrong List Index in List_Read");
  memcpy(data,&liste->array[index * liste->size],liste->size);
}

void List_Write(List_T *liste, int index, void *data)
{
  if ((index < 0) || (index >= liste->n))
    Msg(ERROR, "Wrong List Index in List_Write");
  liste->isorder = 0;
  memcpy(&liste->array[index * liste->size],data,liste->size);
}

void List_Put(List_T *liste, int index, void *data)
{
  if (index < 0)
    Msg(ERROR, "Wrong List Index in List_Put");

  if (index >= liste->n) {
    liste->n = index + 1;
    List_Realloc(liste,liste->n);
    List_Write(liste,index,data);
  } else {
    List_Write(liste,index,data);
  }
}

void List_Pop(List_T *liste)
{
  liste->n -- ;
}

void *List_Pointer(List_T *liste, int index)
{
  if ((index < 0) || (index >= liste->n))
    Msg(ERROR, "Wrong List Index in List_Pointer");

  liste->isorder = 0; /* getdp: a examiner... */
  return(&liste->array[index * liste->size]);
}

void *List_Pointer_NoChange(List_T *liste, int index)
{
  if ((index < 0) || (index >= liste->n))
    Msg(ERROR, "Wrong List Index in List_Pointer_NoChange");

  return(&liste->array[index * liste->size]);
}

void List_Tri(List_T *liste, int (*fcmp)(const void *a, const void *b))
{
  qsort(liste->array,liste->n,liste->size,fcmp);
}

int List_Search(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  void *ptr;

  if (liste->isorder != 1) { List_Tri(liste,fcmp) ; liste->isorder = 1 ; }
  ptr = (void *) bsearch(data,liste->array,liste->n,liste->size,fcmp);
  if (ptr == NULL) return(0);
  return (1);
}

int List_ISearch(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  void *ptr;

  if (liste->isorder != 1) List_Tri(liste,fcmp);
  liste->isorder = 1;
  ptr = (void *) bsearch(data,liste->array,liste->n,liste->size,fcmp);
  if (ptr == NULL) return(-1);
  return (((long)ptr - (long)liste->array) / liste->size);
}

int  List_ISearchSeq(List_T *liste, void * data,
                     int (*fcmp)(const void *a, const void *b)) {
  int i ;

  if (!liste)  return -1 ;
  i = 0 ;
  while ((i < List_Nbr(liste)) &&
         fcmp(data, (void *)List_Pointer(liste, i)) )  i++ ;
  if (i == List_Nbr(liste))  i = -1 ;
  return i ;
}

int  List_ISearchSeqPartial(List_T *liste, void * data, int i_Start,
			    int (*fcmp)(const void *a, const void *b)) {
  int i ;

  if (!liste)  return -1 ;
  i = i_Start ;
  while ((i < List_Nbr(liste)) &&
         fcmp(data, (void *)List_Pointer(liste, i)) )  i++ ;
  if (i == List_Nbr(liste))  i = -1 ;
  return i ;
}

int List_Query(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  void *ptr;

  if (liste->isorder != 1) List_Tri(liste,fcmp);
  liste->isorder = 1;
  ptr = (void *) bsearch(data,liste->array,liste->n,liste->size,fcmp);
  if (ptr == NULL) return(0);

  memcpy(data,ptr,liste->size);
  return (1);
}

void *lolofind(void *data, void *array, int n, int size,
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

int List_LQuery(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b), int first)
{
  char *ptr;
  
  if (first == 1) { 
    ptr = (char *) lolofind(data,liste->array,liste->n,liste->size,fcmp);
  }
  else {
    if (startptr != NULL)
      ptr = (char *) lolofind(data,startptr,liste->n,liste->size,fcmp);
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

void *List_PQuery(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  void *ptr;

  if (liste->isorder != 1) List_Tri(liste,fcmp);
  liste->isorder = 1;
  ptr = (void *) bsearch(data,liste->array,liste->n,liste->size,fcmp);
  return(ptr);
}

int List_Suppress(List_T *liste, void *data,
		 int (*fcmp)(const void *a, const void *b))
{
  char *ptr;
  int len;
  
  ptr = (char*)List_PQuery(liste,data,fcmp) ;
  if (ptr == NULL) return(0);
  
  liste->n--;
  len = liste->n - (((long)ptr - (long)liste->array) / liste->size);
  if (len > 0) memmove(ptr, ptr + liste->size, len * liste->size);
  return(1);
}

void List_Invert(List_T *a , List_T *b)
{
  int i,N;
  N = List_Nbr(a);
  for(i=0;i<N;i++){
    List_Add(b,List_Pointer(a,N-i-1));
  }
}

void List_Reset(List_T *liste)
{
  liste->n = 0;
}

void List_Action(List_T *liste, void (*action)(void *data, void *dummy))
{
  int i,dummy;

  for(i=0 ; i<List_Nbr(liste) ; i++){
    (*action)(List_Pointer_NoChange(liste,i),&dummy);
  }

}

void List_Action_Inverse(List_T *liste, void (*action)(void *data, void *dummy))
{
  int i,dummy;

  for(i=List_Nbr(liste) ; i>0 ; i--){
    (*action)(List_Pointer_NoChange(liste,i-1),&dummy);
  }

}

List_T *List_Copy(List_T *src)
{
  List_T *dest;

  dest = (List_T *)Malloc(sizeof(List_T));

  dest->nmax    = src->nmax   ;
  dest->incr    = src->incr   ;
  dest->size    = src->size   ;
  dest->n       = src->n      ;
  dest->isorder = src->isorder;
  dest->array   = (char *)Malloc(src->nmax * src->size);

  memcpy(dest->array, src->array, src->nmax * src->size);

  return(dest);
}
