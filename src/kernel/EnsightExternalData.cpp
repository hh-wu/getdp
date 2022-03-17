
#include "EnsightExternalData.h"
#include <string.h>
#include "Message.h"
#include "OS.h"
#include <cstring>	
#include <algorithm>

EnsightExternalData::EnsightExternalData()
{
}

EnsightExternalData::~EnsightExternalData()
{

}
//binary
void EnsightExternalData::write(std::string filename)
{
  FILE *fd = nullptr;
  bool binary = true;
  std::string current_filename;
  current_filename = filename;

  if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
    Message::Error("Unable to open file '%s', error %s",
                   current_filename.c_str(), strerror(errno));
    return;
  }
  WriteStringToFile("C Binary", fd);
  WriteStringToFile("Written by GetDP", fd);
  WriteStringToFile("description line 1", fd);
  WriteStringToFile("node id given", fd);
  WriteStringToFile("element id given", fd);
  groupParts();

  std::map<int, int> NodeIdToOrder;
  for(size_t i = 0; i < parts.size(); i++) {
    WriteStringToFile("part", fd);
    WriteIntToFile(parts[i].part, fd);
    std::string namePart = "part_" + std::to_string(i);
    WriteStringToFile(namePart.c_str(), fd);
    WriteStringToFile("coordinates", fd);
    WriteIntToFile(parts[i].nodes.size(), fd);

    for(auto node : parts[i].nodes) {
      // fprintf(fd, "#node id");
      NodeIdToOrder[node] = NodeIdToOrder.size();
      WriteIntToFile(NodeIdToOrder[node], fd);
      
    }
    //cordinates
    for(size_t k = 0; k < 3; k++) {
      for(size_t j = 0; j < parts[i].nodes.size(); j++) {
        // fprintf(fd, "%lld ", k);
        WriteFloatToFile(parts[i].nodes_coordinates[j][k], fd); 
      }
    }
    groupElementByType(parts[i]);

    for(size_t j = 0; j < parts[i].groupedElements.size(); j++) {
      // fprintf(fd, "#element type\n");
      WriteStringToFile(
        ToEnsightElementType[parts[i].groupedElements[j].elementType].c_str(),
        fd);
      // fprintf(fd, "#number of elements ");
      WriteIntToFile(parts[i].groupedElements[j].elements.size(), fd);
      

      for(size_t k = 0; k < parts[i].groupedElements[j].elements.size(); k++) {
        // fprintf(fd, "#element ");
        WriteIntToFile(parts[i].groupedElements[j].elements[k].index, fd);
       
      }

      for(size_t k = 0; k < parts[i].groupedElements[j].elements.size(); k++) {
        for(size_t m = 0;
            m < parts[i].groupedElements[j].elements[k].nodes.size(); m++) {
          WriteIntToFile(
            NodeIdToOrder[
                parts[i].groupedElements[j].elements[k].nodes[m]
            ]
              , fd);
        }
      }
    }
  }
 }
//ascii
void EnsightExternalData::writeAA(std::string filename)
{
  FILE *fd = nullptr;
  bool binary = true;
  std::string current_filename;
  current_filename = filename;

  if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
    Message::Error("Unable to open file '%s', error %s",
                   current_filename.c_str(), strerror(errno));
    return;
  }
  fprintf(fd, "Written by GetDP Ensight writer\n");
  fprintf(fd, "No title specified\n");
  fprintf(fd, "node id given\n");
  fprintf(fd, "element id given\n");
  groupParts();
  std::map<int, int> NodeIdToOrder;
  for(size_t i = 0; i < parts.size(); i++) {
    fprintf(fd, "part\n");
    fprintf(fd, "%d\n", parts[i].part);
    fprintf(fd, "coordinates\n");
    //fprintf(fd, "nn ");
    fprintf(fd, "%lld\n", parts[i].nodes.size());
    for (auto node : parts[i].nodes) {
      //fprintf(fd, "#node ");
      NodeIdToOrder[node] = NodeIdToOrder.size() + 1;
      fprintf(fd, "%d\n", 
          //NodeIdToOrder[
          node
      //]
      );
    }
    for(size_t k = 0; k < 3; k++) {
      for(size_t j = 0; j < parts[i].nodes.size(); j++) {
        //fprintf(fd, "%lld ", k);
        fprintf(fd, "%.10e\n",
                parts[i].nodes_coordinates[j][k]);
      }
    }

    groupElementByType(parts[i]);

    for(size_t j = 0; j < parts[i].groupedElements.size(); j++) {
      //fprintf(fd, "#element type\n");
      fprintf(fd, "%s\n",
        ToEnsightElementType[parts[i].groupedElements[j].elementType].c_str());
      //fprintf(fd, "#number of elements ");
      fprintf(
        fd, "%lld\n",
        parts[i].groupedElements[j].elements.size());

      for(size_t k = 0; k < parts[i].groupedElements[j].elements.size(); k++) {
        //fprintf(fd, "#element ");
        fprintf(fd, "%d\n", parts[i].groupedElements[j].elements[k].index);
      }

      for(size_t k = 0; k < parts[i].groupedElements[j].elements.size(); k++) {
        for(size_t m = 0;
            m < parts[i].groupedElements[j].elements[k].nodes.size(); m++) {
          fprintf(fd, "%d ",
                  //NodeIdToOrder[
                      parts[i].groupedElements[j].elements[k].nodes[m]
                  //]
          );

        }
        fprintf(fd, "maps to ");
        for(size_t m = 0;
            m < parts[i].groupedElements[j].elements[k].nodes.size(); m++) {
          fprintf(fd, "%d ",
                   NodeIdToOrder[
                  parts[i].groupedElements[j].elements[k].nodes[m]
                  ]
          );
        }
        fprintf(fd, "\n");
        /*fprintf(fd, "# element %d nodes\n",
                parts[i].groupedElements[j].elements[k].index);*/
      }
    }    
  }
}

void EnsightExternalData::groupElementByType(
  elementsInPart& el_part)
{
  elementsByType elementGroup;
  for(size_t i = 0; i < el_part.elements.size(); i++) {
    Message::Info("element ID %d", el_part.elements[i].index);
    if(!foundElementType(el_part.elements[i].type, el_part.groupedElements)) {
     
      std::vector<PostExternalElement> elementsAux;
      elementsAux.push_back(el_part.elements[i]);
   
      elementGroup.elementType = el_part.elements[i].type;
      elementGroup.countElement = 1;
      elementGroup.elements = elementsAux;

      el_part.groupedElements.push_back(elementGroup); 
    }
    else {
      
      for(size_t j = 0; j < el_part.groupedElements.size(); j++) {
        
        if(el_part.groupedElements[j].elementType == elements[i].type) {
       
          el_part.groupedElements[j].countElement++;
          
          el_part.groupedElements[j].elements.push_back(elements[i]);
          
        }
      }
    }
  }
  Message::Info("size  %lld", el_part.groupedElements.size());
}

bool EnsightExternalData::foundElementType(
  int type,
  std::vector<elementsByType> groupedElements)
{
    // if groupedElements is empty
  if(groupedElements.empty()) { 
      return false;}
  // if the element type is not present in groupedElements
  else {
    for(size_t i = 0; i < groupedElements.size(); i++) { 
      if(groupedElements[i].elementType == type) {
       
          return true; }
    }
  }
  return false;
}
void EnsightExternalData::groupParts() {
  for(size_t i = 0; i < elements.size(); i++) 
  { 
      if(!foundPart(elements[i].region, parts)) {
          std::vector<PostExternalElement> elementsAux;
          elementsAux.push_back(elements[i]);

          elementsInPart elementPart;
          std::vector<elementsByType> groupedElements;
          

          elementPart.part = elements[i].region;
          elementPart.elements = elementsAux;
          elementPart.groupedElements = groupedElements;

          parts.push_back(elementPart);
      }
      else {
        for(size_t j = 0; j < parts.size(); j++) {
          if(parts[j].part == elements[i].region) {
            parts[j].elements.push_back(elements[i]);
            //fill nodes
            for(size_t k = 0; k < elements[i].nodes.size(); k++) {
                if (std::find(parts[j].nodes.begin(), parts[j].nodes.end(),
                           elements[i].nodes[k]) == parts[j].nodes.end()) {
                parts[j].nodes.push_back(elements[i].nodes[k]); 
              }
              
            }  
          }
        }
        for(size_t j = 0; j < parts.size(); j++) {
          // eliminate nodes duplicates
          /*for(size_t m = 0; m < parts.size(); m++) {
            parts[m].nodes.sort();
            parts[m].nodes.unique();
          }*/
          // fill node coordinates
          for(size_t k = 0; k < elements[i].nodes.size(); k++) {
            parts[j].nodes_coordinates.push_back(
              elements[i].nodes_coordinates[k]);
          }
        } 
      }
  }
  
  
}
bool EnsightExternalData::foundPart(int part, std::vector<elementsInPart> parts)
{
  // if groupedElements is empty
  if(parts.empty()) { return false; }
  // if the element type is not present in groupedElements
  else {
    for(size_t i = 0; i < parts.size(); i++) {
      if(parts[i].part == part) { return true; }
    }
  }
  return false;
}



void EnsightExternalData::WriteStringToFile(const char *cstring, FILE *file)
{
  char cbuffer[81];

  unsigned long cstringLength = static_cast<unsigned long>(strlen(cstring));
  // auto ts = vtkMath::Min(cstringLength, 80ul);
  memcpy(cbuffer, cstring, (80ul <= cstringLength ? 80ul : cstringLength));
  // memcpy(cbuffer, cstring, vtkMath::Min(cstringLength, 80ul));
  for(int i = cstringLength; i < 81; ++i) { cbuffer[i] = '\0'; }

  // Write a constant 80 bytes to the file.
  fwrite(cbuffer, sizeof(char), 80, file);
}
void EnsightExternalData::WriteIntToFile(const int i, FILE *file)
{
  fwrite(&i, sizeof(int), 1, file);
}

void EnsightExternalData::WriteFloatToFile(const float i, FILE *file)
{
  fwrite(&i, sizeof(float), 1, file);
}