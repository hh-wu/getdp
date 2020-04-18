// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef POS_FORMAT_H
#define POS_FORMAT_H

#include "ProData.h"
#include "ListUtils.h"

void  Format_PostFormat(struct PostSubOperation * PSO_P) ;

void  Format_PostHeader(struct PostSubOperation * PSO_P, int NbTimeStep,
                        int Order, char *Name1, char *Name2) ;

void  Format_PostFooter(struct PostSubOperation * PSO_P, int Store) ;

void  Format_PostElement(struct PostSubOperation * PSO_P, int Contour, int Store,
			 double Time, int TimeStep, int NbTimeStep,
			 int NbrHarmonics, int HarmonicToTime,
			 double *Dummy, struct PostElement *PE);

void  Format_PostValue(struct PostQuantity  *PQ_P,
                       struct PostSubOperation *PSO_P,
                       int Format, char * Comma, int Group_FunctionType,
		       int iTime, double Time, int NbrTimeStep,
                       int iRegion, int numRegion, int NbrRegion,
		       int NbrHarmonics, int HarmonicToTime, int FourierTransform,
                       int Flag_NoNewLine,
		       struct Value * Value) ;

void Pos_FourierTransform(int NbrTimeStep, int NbrRegion,
                          double *Times, struct Value *TmpValues, int Size,
                          int TypeOutput, int Nb_Freq_Select_0,
                          int *NbrFreq, double **Frequencies, struct Value **OutValues);

#endif
