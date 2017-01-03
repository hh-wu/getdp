// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <string.h>
#include "ProData.h"
#include "ProDefine.h"
#include "Message.h"

/* --------------------------------------------------------------------------- */
/*  G e t   S t r i n g ,   D e f i n e ,   F u n c t i o n ,   P o i n t e r  */
/* --------------------------------------------------------------------------- */

int Get_DefineForString(struct StringXDefine SXD[], const char *string,
			 int *FlagError)
{
  int i = 0, define ;

  while ((SXD[i].string != NULL) && (strcmp(SXD[i].string, string)))  i++ ;
  define = SXD[i].define ;
  *FlagError = (SXD[i].string == NULL)? 1 : 0 ;

  return(define) ;
}

int Get_Define1NbrForString(struct StringXDefine1Nbr SXD[], const char *string,
			     int *FlagError, int *Nbr1)
{
  int i = 0, define ;

  while ((SXD[i].string != NULL) && (strcmp(SXD[i].string, string)))  i++ ;
  define = SXD[i].define ; *Nbr1 = SXD[i].Nbr1 ;
  *FlagError = (SXD[i].string == NULL)? 1 : 0 ;

  return(define) ;
}


void Get_PointerForString(struct StringXPointer SXF[], const char *string,
			  int *FlagError, void **Pointer)
{
  int i = 0 ;

  while ((SXF[i].string != NULL) && (strcmp(SXF[i].string, string)))  i++ ;
  *Pointer = SXF[i].Pointer ;
  *FlagError = (SXF[i].string == NULL)? 1 : 0 ;
}

void Get_3Function3NbrForString(struct StringX3Function3Nbr SXF[], const char *string,
				int *FlagError, void (**Function1)(),
				void (**Function2)(), void (**Function3)(),
				double *Nbr1, int *Nbr2, int *Nbr3)
{
  int i = 0 ;

  while ((SXF[i].string != NULL) && (strcmp(SXF[i].string, string)))  i++ ;
  *Function1 = SXF[i].Function1 ; *Function2 = SXF[i].Function2 ;
  *Function3 = SXF[i].Function3 ; *Nbr1 = SXF[i].Nbr1 ; *Nbr2 = SXF[i].Nbr2 ; *Nbr3 = SXF[i].Nbr3 ;
  *FlagError = (SXF[i].string == NULL)? 1 : 0 ;
}


void Get_Function2NbrForString(struct StringXFunction2Nbr SXF[], const char *string,
			       int *FlagError, void (**Function)(),
			       int *Nbr1, int *Nbr2)
{
  int i = 0 ;

  while ((SXF[i].string != NULL) && (strcmp(SXF[i].string, string)))  i++ ;
  *Function = SXF[i].Function  ;
  *Nbr1 = SXF[i].Nbr1 ; *Nbr2 = SXF[i].Nbr2 ;
  *FlagError = (SXF[i].string == NULL)? 1 : 0 ;
}

void Get_FunctionForFunction(struct FunctionXFunction  FXF[], void (*Function1)(),
			     int *FlagError, void (**Function2)() )
{
  int i = 0 ;

  while ((FXF[i].Function1 != NULL) && (FXF[i].Function1 != Function1))  i++ ;
  *Function2 = FXF[i].Function2  ;
  *FlagError = (FXF[i].Function1 == NULL)? 1 : 0 ;
}

void Get_FunctionForDefine(struct DefineXFunction DXF[], int define,
			   int *FlagError, void (**Function)())
{
  int i = 0 ;

  while ((DXF[i].define != 0) && (DXF[i].define != define))  i++ ;
  *Function = DXF[i].Function ;
  *FlagError = (DXF[i].define == 0)? 1 : 0 ;
}

const char *Get_StringForDefine(struct StringXDefine SXD[], int define)
{
  int i = 0 ; const char *string ;

  while ((SXD[i].string != NULL) && (SXD[i].define != define))  i++ ;
  if (SXD[i].string != NULL)  string = SXD[i].string ;  else  string = "?" ;

  return(string) ;
}

const char  *Get_StringForDefine1Nbr(struct StringXDefine1Nbr SXD[], int define)
{
  int i = 0 ; const char *string ;

  while ((SXD[i].string != NULL) && (SXD[i].define != define))  i++ ;
  if (SXD[i].string != NULL)  string = SXD[i].string ;  else  string = "?" ;

  return(string) ;
}


const char *Get_StringForPointer(struct StringXPointer SXF[], void *Pointer)
{
  int i = 0 ; const char *string ;

  while ((SXF[i].string != NULL) && (SXF[i].Pointer != Pointer))  i++ ;
  if (SXF[i].string != NULL)  string = SXF[i].string ;  else  string = "?" ;

  return(string) ;
}


const char *Get_StringFor3Function3Nbr(struct StringX3Function3Nbr SXF[], void (*Function1)())
{
  int i = 0 ; const char *string ;

  while ((SXF[i].string != NULL) && (SXF[i].Function1 != Function1))  i++ ;
  if (SXF[i].string != NULL)  string = SXF[i].string ;  else  string = "?" ;

  return(string) ;
}


const char *Get_StringForFunction2Nbr(struct StringXFunction2Nbr SXF[], void (*Function)())
{
  int i = 0 ; const char *string ;

  while ((SXF[i].string != NULL) && (SXF[i].Function != Function))  i++ ;
  if (SXF[i].string != NULL)  string = SXF[i].string ;  else  string = "?" ;

  return(string) ;
}


/* ------------------------------------------------------------------------
    Get_Valid_XXX
   ------------------------------------------------------------------------ */

static char Valid[5000];

#define GV(value, Get_Valid_X)                                          \
  int i = 0;                                                            \
  Message::Direct("Value '%s' not amongst valid choices:", value);      \
  while (V[i].string != NULL){                                          \
    if(!(i%3)){                                                         \
      if(i) Message::Direct("  %s", Valid);                             \
      strcpy(Valid, V[i].string);                                       \
    }                                                                   \
    else strcat(Valid, V[i].string);                                    \
    strcat(Valid, " ");                                                 \
    i++ ;                                                               \
  }                                                                     \
  Message::Direct("  %s", Valid);

void Get_Valid_SXD   (const char *value, struct StringXDefine V[])
{ GV(value, "Get_Valid_SXD"); }
void Get_Valid_SXD1N (const char *value, struct StringXDefine1Nbr V[])
{ GV(value, "Get_Valid_SXD1N"); }
void Get_Valid_SXP   (const char *value, struct StringXPointer V[])
{ GV(value, "Get_Valid_SXP"); }
void Get_Valid_SX3F3N(const char *value, struct StringX3Function3Nbr V[])
{ GV(value, "Get_Valid_SX3F3N"); }
void Get_Valid_SXF2N (const char *value, struct StringXFunction2Nbr V[])
{ GV(value, "Get_Valid_SXF2N"); }

#undef GV
