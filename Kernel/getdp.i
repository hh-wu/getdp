%module getdp
%{
  #include "GetDP.h"
%}

%include std_string.i
%include std_vector.i

namespace std {
  %template(DoubleVector) vector<double>;
  %template(StringVector) vector<string>;
}

%include "GetDP.h"
