#pragma once

#include "PostExternalData.h"
#include <list>

class EnsightExternalData : public PostExternalData {
private:
  std::map<int, std::string> ToEnsightElementType = {{16, "tetra4"},
                                                     {4, "tria3"}};
  std::map<int, std::string> ToEnsightValueType = {
    {SCALAR, "scalar"},
    {VECTOR, "vector"},
    {TENSOR, "tensor asymn"},
    {TENSOR_SYM, "tensor symn"},
    {TENSOR_DIAG, "tensor asymn"}};
  struct elementsInPart {
    int part;
    std::vector<PostExternalElement> elements;
    std::vector<int> nodes;
    std::map<int, std::vector<int> >
      type_el_Part; // stores element type as key and vector element references
                    // with this type as value
  };

  std::vector<elementsInPart> parts;

public:
  EnsightExternalData();
  ~EnsightExternalData();

  void write(std::string fname) override;
  void writeCaseFile();
  void writeASCII(std::string fname);
  void writeBinary(std::string fname);

  void groupParts();
  void groupElementTypes(elementsInPart &el_part);

  void WriteStringToFile(const char *cstring, FILE *file);
  void WriteIntToFile(const int i, FILE *file);
  void WriteFloatToFile(const float i, FILE *file);
};
