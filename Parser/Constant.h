#ifndef _CONSTANT_H_
#define _CONSTANT_H_

struct Constant {
  char   * Name ;
  int    Type ;
  union {
    double  Float ;
    List_T  * ListOfFloat ;
    char    * Char ;
  }  Value ;
} ;

#define VAR_FLOAT         1
#define VAR_LISTOFFLOAT   2
#define VAR_CHAR          3

#endif
