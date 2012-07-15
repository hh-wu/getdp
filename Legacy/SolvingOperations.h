// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _SOLVING_OPERATIONS_H_
#define _SOLVING_OPERATIONS_H_

#include "ProData.h"
#include "LinAlg.h"

void  ReGenerate_System(struct DefineSystem *DefineSystem_P,
                        struct DofData      *DofData_P,
                        struct DofData      *DofData_P0,
                        int                 Flag_Jac);

void  Treatment_Operation(struct Resolution  * Resolution_P,
                          List_T             * Operation_L,
                          struct DofData     * DofData_P0,
                          struct GeoData     * GeoData_P0,
                          struct Resolution  * Resolution2_P,
                          struct DofData     * DofData2_P0);

int Operation_IterativeLinearSolver(struct Resolution  *Resolution_P,
                                    struct Operation   *Operation_P,
                                    struct DofData     *DofData_P0,
                                    struct GeoData     *GeoData_P0) ;

void Operation_TimeLoopAdaptive(struct Resolution  *Resolution_P,
                                struct Operation   *Operation_P,
                                struct DofData     *DofData_P0,
                                struct GeoData     *GeoData_P0,
                                int                *Flag_Break) ;

void Operation_IterativeLoopN(struct Resolution  *Resolution_P,
                              struct Operation   *Operation_P,
                              struct DofData     *DofData_P0,
                              struct GeoData     *GeoData_P0,
                              int                *Flag_Break) ;

void  Operation_IterativeTimeReduction(struct Resolution  * Resolution_P,
				       struct Operation   * Operation_P,
				       struct DofData     * DofData_P0,
				       struct GeoData     * GeoData_P0);

void Operation_Update(struct DefineSystem * DefineSystem_P,
                      struct DofData * DofData_P,
                      struct DofData * DofData_P0,
                      int TimeFunctionIndex);

void Cal_SolutionErrorRatio(gVector *dx,
                            gVector *x,
                            double reltol,
                            double abstol,
                            int NormType,
                            double *ErrorRatio) ;

void Free_UnusedSolutions(struct DofData * DofData_P);

#endif
