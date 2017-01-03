// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributed by Bertrand Thierry

#include <map>
#include <string>
#include <vector>
#include "ProData.h"
#include "DofData.h"
#include "Message.h"
#include "GetDPConfig.h"

#if defined(HAVE_HPDDM) && defined(HAVE_PETSC)

#undef NONE

#define MPI_DOUBLE_COMPLEX MPIU_C_DOUBLE_COMPLEX

#include <HPDDM.hpp>

//typedef std::complex<double> K;
typedef double K;

void Operation_HPDDMSolve(struct Operation *Operation_P,
                          struct DofData *DofData_P)
{
  HPDDM::MatrixCSR<K> *m = new HPDDM::MatrixCSR<K>(); // TODO!
  std::vector<K> f(DofData_P->NbrDof, 0.), sol(DofData_P->NbrDof, 0.);
  int it = HPDDM::IterativeMethod::solve(m, &f[0], &sol[0],
                                         10000, MPI_COMM_SELF);
  printf("it = %d\n", it);
  for(int i = 0; i < DofData_P->NbrDof; i++)
    printf("sol[%d] = %g\n", i, sol[i]);
}

#else

void Operation_HPDDMSolve(struct Operation *Operation_P,
                          struct DofData *DofData_P)
{
  Message::Error("This version of GetDP is not compiled with HPDDM support");
}

#endif
