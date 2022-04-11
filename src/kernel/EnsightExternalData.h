#pragma once

#include "PostExternalData.h"
#include <list>

class EnsightExternalData : public PostExternalData {
private:
  std::map<int, std::string> ToEnsightElementType = {
    {POINT_ELEMENT, "point"},
    {LINE, "bar2"},
    {LINE_2, "bar3"},
    {TRIANGLE, "tria3"},
    {TRIANGLE_2, "tria6"},
    {QUADRANGLE, "quad4"},
    {QUADRANGLE_2, "quad8"},
    {TETRAHEDRON, "tetra4"},
    {TETRAHEDRON_2, "tetra10"},
    {PYRAMID, "pyramid5"},
    {PYRAMID_2, "pyramid13"},
    {PRISM, "penta6"},
    {PRISM_2, "penta15"},
    {HEXAHEDRON, "hexa8"},
    {HEXAHEDRON_2, "hexa20"}// not sure
    //,{not supported by GetDP, "nsided"},
    //{not supported by GetDP, "nfaced"}
  };
  std::map<int, std::string> ToEnsightValueType = {
    {SCALAR, "scalar"},
    {VECTOR, "vector"},
    {TENSOR, "tensor asymn"},
    {TENSOR_SYM, "tensor symn"},
    {TENSOR_DIAG, "tensor asymn"}};

  std::vector<elementsInPart> parts;//stores the parts for the current variable field, used to write current geo file

  struct variableData {
    char *name;
    int value_type;
    int data_size;
  };
  std::vector<variableData> variables;

public:
  EnsightExternalData();
  ~EnsightExternalData();

  void write(std::string fname) override;

  void writeCaseFile(std::string fname);
  void writeVariableASCII(std::string fname);
  void writeVariableBinary(std::string fname);
  void writeGeometryASCII(std::string fname);
  void writeGeometryBinary(std::string fname);
  
  void groupParts();
  void groupElementTypes(elementsInPart &el_part);
  void addGeometry();

  void WriteStringToFile(const char *cstring, FILE *file);
  void WriteIntToFile(const int i, FILE *file);
  void WriteFloatToFile(const float i, FILE *file);
};
