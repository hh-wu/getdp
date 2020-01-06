// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.
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

#define MUMPSSUB // direct mumps solver for subdomain solves
#define DMUMPS // direct mumps solver for the coarse solves
#define HPDDM_NUMBERING 'C' // 0-based numering
#define HPDDM_NO_REGEX
#undef NONE
#include <HPDDM.hpp>

typedef std::complex<double> K;
//typedef double K;

void Operation_HPDDMSolve(struct Operation *Operation_P,
                          struct DofData *DofData_P)
{
  // in: idom (will always be == MPI_COMM_RANK currently, but it would be nice
  //     to generalize)
  // in: D~{idom}() list of neighbors -> o
  // in: A~{idom} system for idom (i.e. access to 1 formualation & dofdata -> local dof keys)
  //     as well as RHS b~{idom}: thsea are both in "unassembled form", i.e. the local
  //     subdomain contributions, with homogeneous Neumann BCs
  // in: Optional: B~{idom} same as A~{idom} but with optimized BCs
  // in: mapping of indices from common Dofs between A~{idom} and neighbors A~{D~{idom}()}

  // TODO BT: get info from getdp list D~{idom}()
  std::vector<int> o(1);
  if(Message::GetCommRank() == 1)
    o.push_back(2);
  else
    o.push_back(1);

  // TODO CG: contruct mapping and store somewhere
  std::vector<std::vector<int> > mapping(o.size());

  // For PETSc ; more interfaces will follow :-)
  Mat PetscA = DofData_P->A.M;
  Vec PetscB = DofData_P->b.V;
  PetscInt n;
  const PetscInt* ia;
  const PetscInt* ja;
  PetscScalar* array;
  PetscBool done;
  MatGetRowIJ(PetscA, 0, PETSC_FALSE, PETSC_FALSE, &n, &ia, &ja, &done);
  K *b = new K[n];
  K *sol = new K[n];
  int *ic = new int[n + 1];
  MatSeqAIJGetArray(PetscA, &array);
  std::copy_n(ia, n + 1, ic);
  K *c = new K[ia[n]];
  int *jc = new int[ia[n]];
  std::copy_n(array, ia[n], c);
  std::copy_n(ja, ia[n], jc);
  MatSeqAIJRestoreArray(PetscA, &array);
  MatRestoreRowIJ(PetscA, 0, PETSC_FALSE, PETSC_FALSE, &n, &ia, &ja, &done);
  VecGetArray(PetscB, &array);
  std::copy_n(array, n, b);
  VecRestoreArray(PetscB, &array);
  // last arg is for HPDDM to own the pointers -> should be false, which would
  // allow to not copy PETSc data
  HPDDM::MatrixCSR<K> *A = new HPDDM::MatrixCSR<K>(n, n, ic[n], c, ic, jc, false, true);

  // Schwarz
  HpSchwarz<K> *S = new HpSchwarz<K>();
  S->Subdomain::initialize(A, o, mapping); // add communication (last arg)
  S->callNumfact(); // if B~{idom} provided, add it here
  int mu = 1; // #rhs
  int it = HPDDM::IterativeMethod::solve(*S, b, sol, mu, S->getCommunicator());

  // TODO: FETI et BDDM
}

#else

void Operation_HPDDMSolve(struct Operation *Operation_P,
                          struct DofData *DofData_P)
{
  Message::Error("This version of GetDP is not compiled with HPDDM support");
}

#endif
