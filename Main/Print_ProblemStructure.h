/* $Id: Print_ProblemStructure.h,v 1.1 2001-07-29 09:38:53 geuzaine Exp $ */
#ifndef _PRINT_PROBLEM_STRUCTURE_H_
#define _PRINT_PROBLEM_STRUCTURE_H_


void  Print_ProblemStructure(struct Problem  * Problem) ;
int   Print_Object(int ichoice, struct Problem * Problem) ;

void  Print_Group         (struct Problem  * Problem) ;
void  Print_Expression    (struct Problem  * Problem) ;
void  Print_Constraint    (struct Problem  * Problem) ;
void  Print_Jacobian      (struct Problem  * Problem) ;
void  Print_Integration   (struct Problem  * Problem) ;
void  Print_FunctionSpace (struct Problem  * Problem) ;
void  Print_Formulation   (struct Problem  * Problem) ;
void  Print_Resolution    (struct Problem  * Problem) ;
void  Print_PostProcessing(struct Problem  * Problem) ;
void  Print_PostOperation (struct Problem  * Problem) ;

char * Print_PostSubOperation(struct Problem *Problem,
			      struct PostProcessing *PP,
			      struct PostSubOperation *PSO) ;

void  Print_ListResolution    (int choice, struct Problem  * Problem) ;
void  Print_ListPostOperation (int choice, struct Problem  * Problem) ;
void  Print_ListPostProcessing(int choice, struct Problem  * Problem) ;

#endif
