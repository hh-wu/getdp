#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Data_Active.h"
#include "BF_Function.h"
#include "Quadrature.h"
#include "Data_Define.h"


/* --------------------------------------------------------------------------- */
/*  G e t   S t r i n g ,   D e f i n e ,   F u n c t i o n ,   P o i n t e r  */
/* --------------------------------------------------------------------------- */

int  Get_DefineForString(struct StringXDefine SXD[], char * string,
			 int * FlagError) {
  int  i = 0, define ;
  while ((SXD[i].string != NULL) && (strcmp(SXD[i].string, string)))  i++ ;
  define = SXD[i].define ;
  *FlagError = (SXD[i].string == NULL)? 1 : 0 ;
  return define ;
}

int  Get_Define1NbrForString(struct StringXDefine1Nbr SXD[], char * string,
			     int * FlagError, int * Nbr1) {
  int  i = 0, define ;
  while ((SXD[i].string != NULL) && (strcmp(SXD[i].string, string)))  i++ ;
  define = SXD[i].define ; *Nbr1 = SXD[i].Nbr1 ;
  *FlagError = (SXD[i].string == NULL)? 1 : 0 ;
  return define ;
}


void Get_PointerForString(struct StringXPointer SXF[], char * string,
			  int * FlagError, void **Pointer) {
  int  i = 0 ;
  while ((SXF[i].string != NULL) && (strcmp(SXF[i].string, string)))  i++ ;
  *Pointer = SXF[i].Pointer ;
  *FlagError = (SXF[i].string == NULL)? 1 : 0 ;
}

void Get_3Function2NbrForString(struct StringX3Function2Nbr SXF[], char * string,
				int * FlagError, void (**Function1)(),
				void (**Function2)(), void (**Function3)(),
				double * Nbr1, int * Nbr2) {
  int  i = 0 ;
  while ((SXF[i].string != NULL) && (strcmp(SXF[i].string, string)))  i++ ;
  *Function1 = SXF[i].Function1 ; *Function2 = SXF[i].Function2 ;
  *Function3 = SXF[i].Function3 ; *Nbr1 = SXF[i].Nbr1 ; *Nbr2 = SXF[i].Nbr2 ;
  *FlagError = (SXF[i].string == NULL)? 1 : 0 ;
}


void Get_Function2NbrForString(struct StringXFunction2Nbr SXF[], char * string,
			       int * FlagError, void (**Function)(),
			       int * Nbr1, int * Nbr2) {
  int  i = 0 ;
  while ((SXF[i].string != NULL) && (strcmp(SXF[i].string, string)))  i++ ;
  *Function = SXF[i].Function  ;
  *Nbr1 = SXF[i].Nbr1 ; *Nbr2 = SXF[i].Nbr2 ; 
  *FlagError = (SXF[i].string == NULL)? 1 : 0 ;
}

void Get_FunctionForFunction(struct FunctionXFunction  FXF[], void (*Function1)(),
			     int * FlagError, void (**Function2)() ) {			     
  int  i = 0 ;
  while ((FXF[i].Function1 != NULL) && (FXF[i].Function1 != Function1))  i++ ;
  *Function2 = FXF[i].Function2  ;
  *FlagError = (FXF[i].Function1 == NULL)? 1 : 0 ;
}

void Get_FunctionForDefine(struct DefineXFunction DXF[], int define,
			   int * FlagError, void (**Function)()) {
  int  i = 0 ;
  while ((DXF[i].define != 0) && (DXF[i].define != define))  i++ ;
  *Function = DXF[i].Function ;
  *FlagError = (DXF[i].define == 0)? 1 : 0 ;
}



char  * Get_StringForDefine(struct StringXDefine SXD[], int define) {
  int  i = 0 ;  char * string ;
  while ((SXD[i].string != NULL) && (SXD[i].define != define))  i++ ;
  if (SXD[i].string != NULL)  string = SXD[i].string ;  else  string = "?" ;
  return string ;
}

char  * Get_StringForDefine1Nbr(struct StringXDefine1Nbr SXD[], int define) {
  int  i = 0 ;  char * string ;
  while ((SXD[i].string != NULL) && (SXD[i].define != define))  i++ ;
  if (SXD[i].string != NULL)  string = SXD[i].string ;  else  string = "?" ;
  return string ;
}


char * Get_StringForPointer(struct StringXPointer SXF[], void * Pointer) {
  int  i = 0 ;  char * string ;
  while ((SXF[i].string != NULL) && (SXF[i].Pointer != Pointer))  i++ ;
  if (SXF[i].string != NULL)  string = SXF[i].string ;  else  string = "?" ;
  return string ;
}


char * Get_StringFor3Function2Nbr(struct StringX3Function2Nbr SXF[], void (*Function1)()) {
  int  i = 0 ;  char * string ;
  while ((SXF[i].string != NULL) && (SXF[i].Function1 != Function1))  i++ ;
  if (SXF[i].string != NULL)  string = SXF[i].string ;  else  string = "?" ;
  return string ;
}


char * Get_StringForFunction2Nbr
  (struct StringXFunction2Nbr SXF[], void (*Function)()) {
  int  i = 0 ;  char * string ;
  while ((SXF[i].string != NULL) && (SXF[i].Function != Function))  i++ ;
  if (SXF[i].string != NULL)  string = SXF[i].string ;  else  string = "?" ;
  return string ;
}


/* ------------------------------------------------------------------------
    Get_Valid_XXX
   ------------------------------------------------------------------------ */

static char Valid[5000];

#define GET_VALID				\
  int  i = 0;					\
  strcpy(Valid,"\nValid Choices are: ");	\
  while (V[i].string != NULL){    		\
    if(i) strcat(Valid,", ");			\
    if(!(i%4)) strcat(Valid,"\n   ");		\
    strcat(Valid, V[i].string);			\
    i++ ;					\
  }						\
  return Valid ;

char*  Get_Valid_SXD   (struct StringXDefine V[])        { GET_VALID }
char*  Get_Valid_SXD1N (struct StringXDefine1Nbr V[])    { GET_VALID }
char*  Get_Valid_SXP   (struct StringXPointer V[])       { GET_VALID }
char*  Get_Valid_SX3F2N(struct StringX3Function2Nbr V[]) { GET_VALID }
char*  Get_Valid_SXF2N (struct StringXFunction2Nbr V[])  { GET_VALID }

#undef GET_VALID
