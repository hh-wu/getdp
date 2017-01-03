// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

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

int Operation_BroadcastFields(struct Resolution  *Resolution_P,
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
                              struct Resolution  *Resolution2_P,
                              struct DofData     *DofData2_P0,
                              int                *Flag_Break) ;

void  Operation_IterativeTimeReduction(struct Resolution  * Resolution_P,
				       struct Operation   * Operation_P,
				       struct DofData     * DofData_P0,
				       struct GeoData     * GeoData_P0);

void Operation_Update(struct DefineSystem * DefineSystem_P,
                      struct DofData * DofData_P,
                      struct DofData * DofData_P0,
                      int TimeFunctionIndex);

void  Operation_ChangeOfCoordinates(struct Resolution  * Resolution_P,
				    struct Operation   * Operation_P,
				    struct DofData     * DofData_P0,
				    struct GeoData     * GeoData_P0);

void  Operation_DeformeMesh(struct Resolution  * Resolution_P,
                            struct Operation   * Operation_P,
                            struct DofData     * DofData_P0,
                            struct GeoData     * GeoData_P0);

void Operation_PostOperation(struct Resolution  *Resolution_P,
                             struct DofData     *DofData_P0,
                             struct GeoData     *GeoData_P0,
                             List_T      *PostOperations);

void Operation_CopyVector(struct Operation *Operation_P,
                          struct DofData   *DofData_P);

void Operation_HPDDMSolve(struct Operation *Operation_P,
                          struct DofData   *DofData_P);

void Operation_Debug(struct Operation *Operation_P,
                     struct DofData   *DofData_P);

void InitLEPostOperation(Resolution  *Resolution_P,
                         DofData     *DofData_P0,
                         GeoData     *GeoData_P0,
                         List_T      *PostOp_L,
                         List_T      *LEPostOpNames_L,
                         List_T      *PostOpSolPredicted_L);

void ClearLEPostOperation(Resolution  *Resolution_P,
                          DofData     *DofData_P0,
                          GeoData     *GeoData_P0,
                          List_T      *LEPostOp_L,
                          List_T      *LEPostOpNames_L,
                          List_T      *PostOpSolPredicted_L,
                          bool        Delete_LEPostOp_L);

void Cal_SolutionErrorRatio(gVector *dx,
                            gVector *x,
                            double reltol,
                            double abstol,
                            int NormType,
                            double *ErrorRatio) ;

void Cal_SolutionError(gVector *dx, gVector *x, int diff, double *MeanError);

void Free_UnusedSolutions(struct DofData * DofData_P);

void Free_UnusedPOresults();

void Free_AllPOresults();

#endif
