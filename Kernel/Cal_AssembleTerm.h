// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef CAL_ASSEMBLE_TERM_H
#define CAL_ASSEMBLE_TERM_H

#include "ProData.h"

void Cal_AssembleTerm_NoDt(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_Dt(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtNL(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDtDtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDtDtDtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]);
// nleigchange
void Cal_AssembleTerm_NLEig1Dof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_NLEig2Dof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_NLEig3Dof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_NLEig4Dof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_NLEig5Dof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_NLEig6Dof(struct Dof * Equ, struct Dof * Dof, double Val[]);

void Cal_AssembleTerm_DtDt(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_JacNL(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDofJacNL(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_NeverDt(struct Dof * Equ, struct Dof * Dof, double Val[]);

void Cal_AssembleTerm_MHMoving(struct Dof * Equ, struct Dof * Dof, double Val[]);

//void Cal_AssembleTerm_MH_Moving_simple(struct Dof * Equ, struct Dof * Dof, double Val[]);
//void Cal_AssembleTerm_MH_Moving_separate(struct Dof * Equ, struct Dof * Dof, double Val[]);
//void Cal_AssembleTerm_MH_Moving_probe(struct Dof * Equ, struct Dof * Dof, double Val[]);

#endif
