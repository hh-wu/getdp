// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributed by Matti Pellikka <matti.pellikka@tut.fi>.

#include <math.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Cal_Value.h"
#include "Message.h"

//
// Differential geometry operations on 3-dimensional manifold
//
//  The user has the responsibility that the input values are in fact
//  coefficients of k-vector fields or differential k-forms on
//  3-dimensional manifold in appropiate context
//

// Hodge operator of a k-form:
//   Arguments:
//      k-form coefficient vector
//      metric tensor coefficient matrix
//
//   Parameters:
//      degree k of the form
//
//   Output:
//      (3-k)-form coefficient vector
//
void  F_Hodge(F_ARG)
{
  int k;
  struct Value  detS;
  struct Value *S;

  k = Fct->Para[0];
  S = A+1;

  if( (A->Type != SCALAR && A->Type != VECTOR) ||
      (S->Type != TENSOR_DIAG &&
       S->Type != TENSOR_SYM &&
       S->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'Hodge'");

  Cal_DetValue(S, &detS);
  detS.Val[0] = sqrt(fabs(detS.Val[0]));

  switch(k) {
  case 0:
    Cal_ProductValue(&detS, A, V);
    break;
  case 1:
    Cal_InvertValue(S, S);
    Cal_ProductValue(S, A, V);
    Cal_ProductValue(&detS, V, V);
    break;
  case 2:
    Cal_InvertValue(&detS, &detS);
    Cal_ProductValue(S, A, V);
    Cal_ProductValue(&detS, V, V);
    break;
  case 3:
    Cal_InvertValue(&detS, &detS);
    Cal_ProductValue(&detS, A, V);
    break;
  default:
    Message::Error("Invalid parameter for function 'Hodge'");
    break;
  }
}

// Inner product of k-forms:
//   Arguments:
//      k-form coefficient vector
//      k-form coefficient vector
//      metric tensor coefficient matrix
//
//   Parameters:
//      degree k of the forms
//
//   Output:
//      scalar
//
void  F_InnerProduct(F_ARG)
{
  int k;
  struct Value  detS;
  struct Value *S;
  struct Value *V1;
  struct Value *V2;

  k = Fct->Para[0];

  V1 = A;
  V2 = A+1;
  S = A+2;

  if( (V1->Type != SCALAR && V1->Type != VECTOR) ||
      (V2->Type != SCALAR && V2->Type != VECTOR) ||
      (V2->Type != V1->Type) ||
      (S->Type != TENSOR_DIAG &&
       S->Type != TENSOR_SYM &&
       S->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'InnerProduct'");

  switch(k) {
  case 0:
    Cal_CopyValue(V2, V);
    break;
  case 1:
    Cal_InvertValue(S, S);
    Cal_ProductValue(S, V2, V);
    break;
  case 2:
    Cal_InvertValue(&detS, &detS);
    Cal_ProductValue(S, V2, V);
    Cal_ProductValue(&detS, V, V);
    break;
  case 3:
    Cal_InvertValue(&detS, &detS);
    Cal_ProductValue(&detS, V2, V);
    break;
  default:
    Message::Error("Invalid parameter for function 'InnerProduct'");
    break;
  }
  Cal_ProductValue(V1, V, V);
}

// Sharp operator of a k-form:
//   Arguments:
//      k-form coefficient vector
//      metric tensor coefficient matrix
//
//   Parameters:
//      degree k of the form
//
//   Output:
//      k-vector coefficient vector
//
void  F_Sharp(F_ARG)
{
  if( (A->Type != SCALAR && A->Type != VECTOR) ||
      ((A+1)->Type != TENSOR_DIAG &&
       (A+1)->Type != TENSOR_SYM &&
       (A+1)->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'Sharp'");

  if( Fct->Para[0] > 3 || Fct->Para[0] < 0 )
    Message::Error("Invalid parameter for function 'Sharp'");

  Cal_InvertValue(A+1, A+1);
  F_Flat(Fct, A, V);
}

// Flat operator of a k-vector:
//   Arguments:
//      k-vector coefficient vector
//      metric tensor coefficient matrix
//
//   Parameters:
//      degree k of the vector
//
//   Output:
//      k-form coefficient vector
//
void  F_Flat(F_ARG)
{
  int k;
  struct Value  detS;
  struct Value *S;

  k = Fct->Para[0];
  S = A+1;

  if( (A->Type != SCALAR && A->Type != VECTOR) ||
      (S->Type != TENSOR_DIAG &&
       S->Type != TENSOR_SYM &&
       S->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'Flat'");

  Cal_DetValue(S, &detS);
  detS.Val[0] = sqrt(fabs(detS.Val[0]));

  switch(k) {
  case 0:
    Cal_CopyValue(A, V);
    break;
  case 1:
    Cal_ProductValue(S, A, V);
    break;
  case 2:
    Cal_InvertValue(S, S);
    Cal_ProductValue(S, A, V);
    Cal_ProductValue(&detS, V, V);
    break;
  case 3:
    Cal_ProductValue(&detS, A, V);
    break;
  default:
    Message::Error("Invalid parameter for function 'Flat'");
    break;
  }
}

// Wedge product of k-forms or k-vectors:
//   Arguments:
//      k1-form or k1-vector coefficient vector
//      k2-form or k2-vector coefficient vector
//
//   Parameters:
//      degree k1 of the first argument
//      degree k2 of the second argument
//
//   Output:
//      (k1+k2)-form or (k1+k2)-vector coefficient vector
//
void  F_WedgeProduct(F_ARG)
{
  int k1,k2;
  struct Value *V1;
  struct Value *V2;

  k1 = Fct->Para[0];
  k2 = Fct->Para[0];

  V1 = A;
  V2 = A+1;

  if( (V1->Type != SCALAR && V1->Type != VECTOR) ||
      (V2->Type != SCALAR && V2->Type != VECTOR) )
    Message::Error("Wrong type of arguments for function 'WedgeProduct'");
  if(k1 < 0 || k1 > 3 || k2 < 0 || k2 > 3)
    Message::Error("Invalid parameter for function 'WedgeProduct'");

  if( k1 == 0 || k2 == 0 || (k1 == 1 && k2 == 2) || (k1 == 2 && k2 == 1) )
    Cal_ProductValue(V1, V2, V);
  else if( k1 == 1 && k2 == 1 )
    Cal_CrossProductValue(V1, V2, V);
  else if( k1 + k2 > 3 )
    Cal_ZeroValue(V);
  else
    Message::Error("Missing implementation in 'WedgeProduct'");
}

void  F_TensorProduct(F_ARG)
{
  Message::Error("'TensorProduct' not implemented");
}

// Interior product of a 1-vector and a k-form:
//   Arguments:
//      1-vector coefficient vector
//      k-form coefficient vector
//
//   Parameters:
//      degree k of the k-form
//
//   Output:
//      (k-1)-form coefficient vector
//
void  F_InteriorProduct(F_ARG)
{
  int k;
  struct Value *V1;
  struct Value *V2;

  k = Fct->Para[0];

  V1 = A;
  V2 = A+1;

  if( V1->Type != VECTOR ||
      (V2->Type != SCALAR && V2->Type != VECTOR) )
    Message::Error("Wrong type of arguments for function 'InteriorProduct'");

  switch(k) {
  case 1:
  case 3:
    Cal_ProductValue(V1, V2, V);
    break;
  case 2:
    Cal_CrossProductValue(V1, V2, V);
    break;
  default:
    Message::Error("Invalid parameter for function 'InteriorProduct'");
    break;
  }
}

// Pullback of a k-form:
//   Arguments:
//      k-form coefficient vector
//      Jacobian matrix of the transition map between charts of a manifold
//
//   Parameters:
//      degree k of the form
//
//   Output:
//      k-form coefficient vector
//
void  F_PullBack(F_ARG)
{
  if( (A->Type != SCALAR && A->Type != VECTOR) ||
      ((A+1)->Type != TENSOR_DIAG &&
       (A+1)->Type != TENSOR_SYM &&
       (A+1)->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'PullBack'");

  if( Fct->Para[0] < 0 || Fct->Para[0] > 3 )
    Message::Error("Invalid parameter for function 'PullBack'");

  Cal_TransposeValue(A+1, A+1);
  F_PushForward(Fct, A, V);
}

// Pullback of a metric tensor:
//   Arguments:
//      metric tensor coefficient matrix
//      Jacobian matrix of the transition map between charts of a manifold
//
//   Parameters:
//      none
//
//   Output:
//      metric tensor coefficient matrix
//
void  F_PullBackMetric(F_ARG)
{
  struct Value *S;
  struct Value *J;

  J = A+1;
  S = A;

  if( (S->Type != TENSOR_DIAG &&
       S->Type != TENSOR_SYM &&
       S->Type != TENSOR) ||
      (J->Type != TENSOR_DIAG &&
       J->Type != TENSOR_SYM &&
       J->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'PullBackMetric'");

  Cal_ProductValue(S, J, V);
  Cal_TransposeValue(J, J);
  Cal_ProductValue(J, V, V);
}

// Inverse pullback of a k-form:
//   Arguments:
//      k-form coefficient vector
//      Jacobian matrix of the transition map between charts of a manifold
//
//   Parameters:
//      degree k of the form
//
//   Output:
//      k-form coefficient vector
//
void  F_InvPullBack(F_ARG)
{
  if( (A->Type != SCALAR && A->Type != VECTOR) ||
      ((A+1)->Type != TENSOR_DIAG &&
       (A+1)->Type != TENSOR_SYM &&
       (A+1)->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'InvPullBack'");

  if( Fct->Para[0] < 0 || Fct->Para[0] > 3 )
    Message::Error("Invalid parameter for function 'InvPullBack'");

  Cal_InvertValue(A+1, A+1);
  Cal_TransposeValue(A+1, A+1);
  F_PushForward(Fct, A, V);
}

// Pushforward of a k-vector:
//   Arguments:
//      k-vector coefficient vector
//      Jacobian matrix of the transition map between charts of a manifold
//
//   Parameters:
//      degree k of the k-vector
//
//   Output:
//      k-vector coefficient vector
//
void  F_PushForward(F_ARG)
{
  int k;
  struct Value *J;
  struct Value  detJ;

  k = Fct->Para[0];
  J = A+1;

  if( (A->Type != SCALAR && A->Type != VECTOR) ||
      (J->Type != TENSOR_DIAG &&
       J->Type != TENSOR_SYM &&
       J->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'PushForward'");

  switch(k) {
  case 0:
    Cal_CopyValue(A, V);
    break;
  case 1:
    Cal_ProductValue(J, A, V);
    break;
  case 2:
    Cal_InvertValue(J, J);
    Cal_TransposeValue(J, J);
    Cal_DetValue(J, &detJ);
    Cal_ProductValue(J, A, V);
    Cal_ProductValue(&detJ, V, V);
    break;
  case 3:
    Cal_DetValue(J, &detJ);
    Cal_ProductValue(&detJ, A, V);
    break;
  default:
    Message::Error("Invalid parameter for function 'PushForward'");
    break;
  }
}

// Inverse pushforward of a k-vector:
//   Arguments:
//      k-vector coefficient vector
//      Jacobian matrix of the transition map between charts of a manifold
//
//   Parameters:
//      degree k of the k-vector
//
//   Output:
//      k-vector coefficient vector
//
void  F_InvPushForward(F_ARG)
{
  if( (A->Type != SCALAR && A->Type != VECTOR) ||
      ((A+1)->Type != TENSOR_DIAG &&
       (A+1)->Type != TENSOR_SYM &&
       (A+1)->Type != TENSOR))
    Message::Error("Wrong type of arguments for function 'InvPushForward'");

  if( Fct->Para[0] < 0 || Fct->Para[0] > 3 )
    Message::Error("Invalid parameter for function 'InvPushForward'");

  Cal_InvertValue(A+1, A+1);
  F_PushForward(Fct, A, V);
}
