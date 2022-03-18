#pragma once

#include "PostExternalData.h"
#include <list>

class EnsightExternalData: public PostExternalData
{
 

private:
  std::map<int, std::string> ToEnsightElementType = {{16, "tetra4"},
                                                     {4, "tria3"}};
  struct elementsByType {
    int elementType;
    int countElement;
    std::vector<PostExternalElement> elements;
  };
  struct elementsInPart {
    int part;
    std::vector<PostExternalElement> elements;
    std::vector<int> nodes;
    std::vector<std::vector<double> > nodes_coordinates;
    std::vector<elementsByType> groupedElements;
  };
  std::vector<elementsInPart> parts;
  
 
   
public:
    EnsightExternalData();
    ~EnsightExternalData();

	void writeASCII(std::string fname);
	void writeBinary(std::string fname);
    void write(std::string fname) override;
    void WriteStringToFile(const char *cstring, FILE *file);
    void WriteIntToFile(const int i, FILE *file);
    void WriteFloatToFile(const float i, FILE *file);
    std::string GetElementType(int elementType);
    //void groupElementByType();
    void groupElementByType(elementsInPart& el_part);
    bool foundElementType(int elementType,
                          std::vector<elementsByType> groupedElements);
    void groupParts();
    bool foundPart(int part, std::vector<elementsInPart> parts);
};
