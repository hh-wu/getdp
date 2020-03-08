// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

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
  if (SXD[i].string != NULL)  string = SXD[i].string ;  else  string = "None" ;

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

/* ------------------------------------------------------------------------
    Gmsh/GetDP element types
   ------------------------------------------------------------------------ */

int Gmsh2GetDP(int Type)
{
  switch(Type){
  case 15 : return POINT;

  case 1  : return LINE;
  case 2  : return TRIANGLE;
  case 3  : return QUADRANGLE;
  case 4  : return TETRAHEDRON;
  case 5  : return HEXAHEDRON;
  case 6  : return PRISM;
  case 7  : return PYRAMID;

  case 8  : return LINE_2;
  case 9  : return TRIANGLE_2;
  case 10 : return QUADRANGLE_2;
  case 11 : return TETRAHEDRON_2;
  case 12 : return HEXAHEDRON_2;
  case 13 : return PRISM_2;
  case 14 : return PYRAMID_2;

  case 16 : return QUADRANGLE_2_8N;
  case 17 : return HEXAHEDRON_2_20N;
  case 18 : return PRISM_2_15N;
  case 19 : return PYRAMID_2_13N;

  case 26 : return LINE_3;
  case 21 : return TRIANGLE_3;
  case 36 : return QUADRANGLE_3;
  case 29 : return TETRAHEDRON_3;
  case 92 : return HEXAHEDRON_3;
  case 90 : return PRISM_3;
  case 118 : return PYRAMID_3;

  case 27 : return LINE_4;
  case 23 : return TRIANGLE_4;
  case 37 : return QUADRANGLE_4;
  case 30 : return TETRAHEDRON_4;
  case 93 : return HEXAHEDRON_4;
  case 91 : return PRISM_4;
  //case 119 : return PYRAMID_4;

  default :
    Message::Error("Unknown Gmsh element type %d", Type);
    return -1;
  }
}

int GetDP2Gmsh(int Type)
{
  switch(Type){
  case POINT         : return 15;

  case LINE          : return 1;
  case TRIANGLE      : return 2;
  case QUADRANGLE    : return 3;
  case TETRAHEDRON   : return 4;
  case HEXAHEDRON    : return 5;
  case PRISM         : return 6;
  case PYRAMID       : return 7;

  case LINE_2        : return 8;
  case TRIANGLE_2    : return 9;
  case QUADRANGLE_2  : return 10;
  case TETRAHEDRON_2 : return 11;
  case HEXAHEDRON_2  : return 12;
  case PRISM_2       : return 13;
  case PYRAMID_2     : return 14;

  case QUADRANGLE_2_8N: return 16;
  case HEXAHEDRON_2_20N : return 17;
  case PRISM_2_15N   : return 18;
  case PYRAMID_2_13N : return 19;

  case LINE_3        : return 26;
  case TRIANGLE_3    : return 21;
  case QUADRANGLE_3  : return 36;
  case TETRAHEDRON_3 : return 29;
  case HEXAHEDRON_3  : return 92;
  case PRISM_3       : return 90;
  case PYRAMID_3     : return 118;

  case LINE_4        : return 27;
  case TRIANGLE_4    : return 23;
  case QUADRANGLE_4  : return 37;
  case TETRAHEDRON_4 : return 30;
  case HEXAHEDRON_4  : return 93;
  case PRISM_4       : return 91;
  //case PYRAMID_4     : return 119;

  default :
    Message::Error("Unknown GetDP element type %d", Type);
    return -1;
  }
}
