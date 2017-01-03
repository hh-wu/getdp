// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Message.h"

extern struct CurrentData Current ;

// This file defines a simple interface to Octave.
//
// * To configure GetDP with Octave support, point cmake to Octave's library and
//   include directories, e.g.:
//
//   cmake -DCMAKE_PREFIX_PATH="/opt/local/include/octave-3.6.4;
//                              /opt/local/lib/octave/3.6.4" ..
//
// * The Octave interpreter will be initialized when GetDP is started; you can
//   then use the Octave[argument_list]{string} function in the same way as
//   other GetDP functions:
//
//   - `argument_list' contains standard GetDP arguments, e.g. X[], Norm[{d a}],
//     etc. These arguments will be stored in Octave as input{0}, input{1},
//     etc., which you can then access as normal Octave variables
//
//   - `string' contains either the Octave expression that you want to
//     evaluate. Due to conflicts in the GetDP syntax, to use a string variable,
//     you need to use Str[string_variable]
//
// * Since the Octave interpreter lives for the whole duration of the GetDP run,
//   you can make quite efficient Octave calculations by precomputing things
//   outside the finite element assembly loop. The easiest way to to this is to
//   evaluate the Octave code you need to precompute using
//
//     Evaluate[ my_octave_precomputation[] ]
//
//   in the Operation field of a Resolution before Generate[] is called.

// TODO: also add a way to evaluate a single Octave function, without
// parsing the expression. Example:
//
//  octave_idx_type n = 2;
//  octave_value_list in;
//  for (octave_idx_type i = 0; i < n; i++)
//    in(i) = octave_value (5 * (i + 2));
//  octave_value_list out = feval("gcd", in, 1);
//  if (!error_state && out.length () > 0)
//    Message::Info("res = %d", out(0).int_value());
//  else
//    Message::Error("Octave error");

#if defined(HAVE_OCTAVE)

#undef HAVE_ARPACK
#include <octave/oct.h>
#include <octave/parse.h>

void F_Octave(F_ARG)
{
  if(!Fct->String){
    Message::Error("Missing Octave expression: use Octave[arguments]{\"expression\"}");
    for (int k = 0; k < Current.NbrHar; k++)
      V->Val[MAX_DIM * k] = 0. ;
    V->Type = SCALAR;
    return;
  }

  // we could do this more efficiently by directly storing the values in octave
  // (instead of parsing)
  std::string expr;
  for(int i = 0; i < Fct->NbrArguments; i++){
    char tmp[256];
    if((A + i)->Type == SCALAR){
      if(Current.NbrHar == 2)
        sprintf(tmp, "input{%d} = %.16g+%.16gi;", i + 1,
                (A + i)->Val[0], (A + i)->Val[MAX_DIM]);
      else
        sprintf(tmp, "input{%d} = %.16g;", i + 1, (A + i)->Val[0]);
    }
    else{
      Message::Error("Non-scalar Octave arguments not coded yet");
    }
    expr += tmp;
  }
  expr += Fct->String;

  int status;
  octave_value out;

  // FIXME: it seems like we cannot evaluate several octave statements at
  // once !?!?
  //out = eval_string(expr.c_str(), false, status);
  //if(status) Message::Error("Octave evaluation error");

  // FIXME: this will break when semi-colons are present in expressions for
  // something else than statement boundaries
  std::string::size_type first = 0;
  while(1){
    std::string::size_type last = expr.find_first_of(";", first);
    std::string str = expr.substr(first, last - first + 1);
    if(str.size()){
      //Message::Info("Evaluating %s", str.c_str());
      out = eval_string(str.c_str(), false, status);
      if(status) Message::Error("Octave evaluation error");
    }
    if(last == std::string::npos) break;
    first = last + 1;
  }

  for (int k = 0; k < Current.NbrHar; k++)
    for (int j = 0; j < 9; j++)
      V->Val[MAX_DIM * k + j] = 0. ;

  if(out.is_real_scalar()){
    V->Val[0] = out.double_value();
    V->Type = SCALAR;
  }
  else if(out.is_complex_scalar()){
    V->Val[0] = out.complex_value().real();
    V->Val[MAX_DIM] = out.complex_value().imag();
    V->Type = SCALAR;
  }
  else if(out.is_real_matrix() ||
          out.is_complex_matrix()){
    Message::Error("Octave matrix output not coded yet");
    V->Type = VECTOR ;
  }
}

#else

void F_Octave(F_ARG)
{
  Message::Error("You need to compile GetDP with Octave support to use Octave functions");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

#endif
