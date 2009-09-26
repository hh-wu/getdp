// GetDP - Copyright (C) 1997-2009 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _CAL_ASSEMBLE_TERM_H_
#define _CAL_ASSEMBLE_TERM_H_

#include "ProData.h"

void Cal_AssembleTerm_NoDt(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_Dt(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtNL(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_DtDt(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_JacNL(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_NeverDt(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_MH_Moving_simple(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_MH_Moving_separate(struct Dof * Equ, struct Dof * Dof, double Val[]);
void Cal_AssembleTerm_MH_Moving_probe(struct Dof * Equ, struct Dof * Dof, double Val[]);

#endif
