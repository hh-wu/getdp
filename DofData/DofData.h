/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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

#ifndef _DOFDATA_H_
#define _DOFDATA_H_

#include "List.h"
#include "Tree.h"

#include "LinAlg.h"
#include "Graph.h"

#include "Data_DofData.h"

void  Dof_InitDofData(struct DofData * DofData_P, int Num,
		      int ResolutionIndex, int SystemIndex,
		      char * Name_SolverDataFile) ;

void  Dof_SetCurrentDofData(struct DofData * DofData_P) ;

void  Dof_OpenFile(int Type, char * Name, char * Mode) ;
void  Dof_CloseFile(int Type) ;
void  Dof_FlushFile(int Type) ;

void  Dof_WriteFilePRE0(int Num_Resolution, char * Name_Resolution, int Nbr_DofData) ;
void  Dof_ReadFilePRE0(int * Num_Resolution, int * Nbr_DofData) ;
void  Dof_WriteFilePRE(struct DofData * DofData_P) ;
void  Dof_WriteDofPRE(void * a, void * b) ;
void  Dof_ReadFilePRE(struct DofData * DofData_P) ;

void  Dof_WriteFileRES0(char * Name_File, int Format) ;
void  Dof_ReadFileRES0(void) ;
void  Dof_WriteFileRES(char * Name_File, struct DofData * DofData_P, int Format, 
		       double Val_Time, int Val_TimeStep) ;
void  Dof_ReadFileRES(List_T * DofData_L, struct DofData * Read_DofData_P, 
		      int Read_DofData, double *Time, double *TimeStep) ;
void  Dof_WriteFileRES_ExtendMH(char * Name_File, struct DofData * DofData_P, int Format,
				int NbrH);
void  Dof_WriteFileRES_MHtoTime(char * Name_File, struct DofData * DofData_P, 
				int Format, List_T * Time_L);

void  Dof_TransferDofTreeToList(struct DofData * DofData_P) ;
void  Dof_InitDofType(struct DofData * DofData_P) ;
void  Dof_DeleteDofTree(struct DofData * DofData_P) ;

void  Dof_AddFunctionSpaceIndex(int Index_FunctionSpace) ;
void  Dof_AddTimeFunctionIndex(int Index_TimeFunction) ;
void  Dof_AddPulsation(struct DofData * DofData_P, double Val_Pulsation) ;

void  Dof_DefineAssignFixedDof(int D1, int D2, int NbrHar, double * Val, int Index_TimeFunction) ;
void  Dof_DefineInitFixedDof(int D1, int D2, int NbrHar, double * Val) ;
void  Dof_DefineAssignSolveDof(int D1, int D2, int NbrHar, int Index_TimeFunction) ;
void  Dof_DefineInitSolveDof(int D1, int D2, int NbrHar) ;
void  Dof_DefineLinkDof(int D1, int D2, int NbrHar, double Value[], int D2_Link) ;
void  Dof_DefineLinkCplxDof(int D1, int D2, int NbrHar, double Value[], int D2_Link) ;
void  Dof_DefineUnknownDof(int D1, int D2, int NbrHar) ;
void  Dof_DefineAssociateDof(int E1, int E2, int D1, int D2, int NbrHar) ;
void  Dof_DefineUnknownDofFromSolveOrInitDof(struct DofData ** DofData_P) ;

void  Dof_NumberUnknownDof(void) ;

void  Dof_UpdateLinkDof(struct Dof *Dof_P, int NbrHar, double Value[], int D2_Link) ;

void  Dof_AssembleInMat(struct Dof * Equ_P, struct Dof * Dof_P, int NbrHar, double * Val,
			gMatrix * Mat, gVector * Vec) ;
void  Dof_AssembleInVec(struct Dof * Equ_P, struct Dof * Dof_P, int NbrHar, double * Val,
			struct Solution * OtherSolution, gVector * Vec0, gVector * Vec) ;

void  Dof_TransferSolutionToConstraint(struct DofData * DofData_P) ;
void  Dof_TransferDof(struct DofData * DofData1_P, struct DofData ** DofData2_P);

struct  Dof * Dof_GetDofStruct(struct DofData * DofData_P, int D1, int D2, int D3) ;
gScalar Dof_GetDofValue(struct DofData * DofData_P, struct Dof * Dof_P) ;
gScalar Dof_GetDofValueDt(struct DofData * DofData_P, struct Dof * Dof_P) ;
void    Dof_GetRealDofValue(struct DofData * DofData_P, struct Dof * Dof_P, double *d) ;
void    Dof_GetComplexDofValue(struct DofData * DofData_P, struct Dof * Dof_P, 
			       double *d1, double *d2) ;

void Dof_InitDofForNoDof(struct Dof * DofForNoDof, int NbrHar) ;

void Print_DofNumber(struct Dof *Dof_P) ;

#endif
