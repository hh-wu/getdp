/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

#ifndef _INIT_PROBLEM_H_
#define _INIT_PROBLEM_H_

#include "Data_Passive.h"
#include "Data_GeoData.h"

/* Init_Problem */
/* ------------ */

int   Get_Options(int argc, char *argv[], int *supargc, char **supargv, 
		  char *Name_ProFile, char *Name_Generic, char *Name_Path) ;

void  Init_ProblemStructure (void) ;
void  Init_GlobalVariables (void) ;

void  Read_ProblemStructure (char * NameFilePro) ;

void  SolvingAnalyse(void) ;

void  Treatment_Resolution(int ResolutionIndex,
			   int * Nbr_DefineSystem, int * Nbr_OtherSystem,
			   struct Resolution   ** Resolution_P,
			   struct DefineSystem ** DefineSystem_P0,
			   struct DofData      ** DofData_P0,
			   List_T              ** DofData_L,
			   List_T              *  GeoData_L,
			   struct GeoData      ** GeoData_P0) ;

void  Init_HarInDofData(struct DefineSystem * DefineSystem_P,
			struct DofData * DofData_P) ;
void  Init_PartInDofData(struct DofData * DofData_P, int NbrPart) ;
void  Init_DofDataInDefineQuantity(struct DefineSystem *DefineSystem_P,
				   struct DofData      *DofData_P0,
				   struct Formulation  *Formulation_P) ;
void  Init_DofDataInFunctionSpace(int Nbr_DefineSystem,
				  struct DofData *DofData_P0) ;

void Treatment_Preprocessing(int Nbr_DefineSystem,
                             struct DofData        * DofData_P0,
                             struct DefineSystem   * DefineSystem_P0,
			     struct GeoData        * GeoData_P0) ;

void  Treatment_Operation(struct Resolution  * Resolution_P,
                          List_T             * Operation_L, 
                          struct DofData     * DofData_P0,
                          struct GeoData     * GeoData_P0,
                          struct Resolution  * Resolution2_P,
                          struct DofData     * DofData2_P0) ;

void  Init_OperationOnSystem(char                * Name,
			     struct Resolution   * Resolution_P,
			     struct Operation    * Operation_P ,
			     struct DofData      * DofData_P0,
			     struct GeoData      * GeoData_P0,
			     struct DefineSystem ** DefineSystem_P,
			     struct DofData      ** DofData_P,  
			     int Flag_Jac,
			     struct Resolution   * Resolution2_P) ;

void  Generate_System(struct DefineSystem * DefineSystem_P,
		      struct DofData * DofData_P, 
		      struct DofData * DofData_P0, 
		      int Flag_Jac, int Separate) ;

void  Update_System(struct DefineSystem * DefineSystem_P,
		    struct DofData * DofData_P, 
		    struct DofData * DofData_P0,
		    int TimeFunctionIndex) ;

void  UpdateConstraint_System(struct DefineSystem * DefineSystem_P,
			      struct DofData * DofData_P, 
			      struct DofData * DofData_P0,
			      int GroupIndex, int Type_Constraint) ;

double  * Get_TimeFunctionValues(struct DofData * DofData_P) ;

void  Treatment_PostOperation(struct Resolution     * Resolution_P,
			      struct DofData        * DofData_P0,
			      struct DefineSystem   * DefineSystem_P0,
			      struct GeoData        * GeoData_P0,
			      struct PostProcessing * PostProcessing_P,
			      struct PostOperation  * PostOperation_P) ;

void  Pos_Interactive(struct Formulation *Formulation_P,
		      struct PostProcessing *PostProcessing_P);

void  Operation_IterativeTimeReduction(struct Resolution  * Resolution_P,
				       struct Operation   * Operation_P, 
				       struct DofData     * DofData_P0,
				       struct GeoData     * GeoData_P0) ;
void  Cal_CompareGlobalQuantity(struct Operation * Operation_P,
				int Type_Analyse, int * Type_ChangeOfState,
				int * FlagIndex, int Flag_First) ;

void  Operation_ChangeOfCoordinates(struct Resolution  * Resolution_P,
				    struct Operation   * Operation_P, 
				    struct DofData     * DofData_P0,
				    struct GeoData     * GeoData_P0) ;

void  Operation_ChangeOfCoordinates2(struct Resolution  * Resolution_P,
				     struct Operation   * Operation_P, 
				     struct DofData     * DofData_P0,
				     struct GeoData     * GeoData_P0) ;

void  Operation_DeformeMesh(struct Resolution  * Resolution_P,
			    struct Operation   * Operation_P, 
			    struct DofData     * DofData_P0,
			    struct GeoData     * GeoData_P0) ;
#endif


