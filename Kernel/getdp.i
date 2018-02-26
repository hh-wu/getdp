%module getdp
%{
  #include "getdp.h"
%}

%include std_string.i
%include std_vector.i

namespace std {
  %template(DoubleVector) vector<double>;
  %template(StringVector) vector<string>;
}

%include "getdp.h"
