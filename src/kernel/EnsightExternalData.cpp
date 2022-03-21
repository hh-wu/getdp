
#include "EnsightExternalData.h"
#include <string.h>
#include "Message.h"
#include "OS.h"
#include <cstring>
#include <algorithm>

EnsightExternalData::EnsightExternalData() {}

EnsightExternalData::~EnsightExternalData() {}

void EnsightExternalData::write(std::string filename)
{
  writeBinary(filename);
  // writeASCII(filename);
}

// binary
void EnsightExternalData::writeBinary(std::string filename)
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
  int node_count = 0; // nodes are named sequentially
  for(size_t i = 0; i < parts.size(); i++) {
    WriteStringToFile("part", fd);
    WriteIntToFile(parts[i].part, fd);
    std::string namePart = "part_" + std::to_string(i);
    WriteStringToFile(namePart.c_str(), fd);
    WriteStringToFile("coordinates", fd);
    WriteIntToFile(parts[i].nodes.size(), fd);

    for(auto node : parts[i].nodes) {
      // fprintf(fd, "#node id");

      // NodeIdToOrder[node] = NodeIdToOrder.size() + 1;
      NodeIdToOrder[node] = ++node_count;
      WriteIntToFile(NodeIdToOrder[node], fd);
    }
    // cordinates
    for(auto node : parts[i].nodes)
      WriteFloatToFile(node_coordinates[node][0], fd);
    for(auto node : parts[i].nodes)
      WriteFloatToFile(node_coordinates[node][1], fd);
    for(auto node : parts[i].nodes)
      WriteFloatToFile(node_coordinates[node][2], fd);

    groupElementType(parts[i]);
    for(auto elementGroup : parts[i].type_el_Part) {
      WriteStringToFile(ToEnsightElementType[elementGroup.first].c_str(), fd);
      // number of elements
      WriteIntToFile(elementGroup.second.size(), fd);

      int element_id_offset =
        0; // this works if elements are stored sequentially by regions
      while(elements[element_id_offset].region != parts[i].part) {
        element_id_offset++;
      }
      // print elements id
      for(auto el_index : elementGroup.second) {
        WriteIntToFile(elements[el_index + element_id_offset].index, fd);
      }
      // print nodes of elements
      for(auto el_index : elementGroup.second) {
        for(auto n : elements[el_index + element_id_offset].nodes) {
          WriteIntToFile(NodeIdToOrder[n], fd);
        }
      }
    }
  }
}

// ascii
void EnsightExternalData::writeASCII(std::string filename)
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
  int node_count = 0; // nodes are named sequentially
  for(size_t i = 0; i < parts.size(); i++) {
    fprintf(fd, "part\n");
    fprintf(fd, "%d\n", parts[i].part);
    fprintf(fd, "coordinates\n");
    // fprintf(fd, "nn ");
    fprintf(fd, "%lld\n", parts[i].nodes.size());
    for(auto node : parts[i].nodes) {
      // for each part, node starts at value 0 and we want univoque
      // nodeIdToOrder for each part, so: fprintf(fd, "node_count  =  %d\n",
      // node_count);
      NodeIdToOrder[node] = ++node_count;
      // fprintf(fd, "node id =  %d\n", node);
      fprintf(fd, "%d\n", NodeIdToOrder[node]);
    }

    for(auto node : parts[i].nodes)
      fprintf(fd, "%.10e\n", node_coordinates[node][0]);
    for(auto node : parts[i].nodes)
      fprintf(fd, "%.10e\n", node_coordinates[node][1]);
    for(auto node : parts[i].nodes)
      fprintf(fd, "%.10e\n", node_coordinates[node][2]);

    groupElementType(parts[i]);
    for(auto elementGroup : parts[i].type_el_Part) {
      // print element type
      fprintf(fd, "%s\n", ToEnsightElementType[elementGroup.first].c_str());
      // print number of elements of this type
      fprintf(fd, "%lld\n", elementGroup.second.size());

      int element_id_offset =
        0; // this works if elements are stores sequentially by regions
      while(elements[element_id_offset].region != parts[i].part) {
        element_id_offset++;
      }
      // print elements id
      for(auto el_index : elementGroup.second) {
        // fprintf(fd, "el_index %d\n", el_index);
        fprintf(fd, "%d\n", elements[el_index + element_id_offset].index);
      }
      // print nodes of elements
      for(auto el_index : elementGroup.second) {
        for(auto n : elements[el_index + element_id_offset].nodes) {
          fprintf(fd, "%d ", NodeIdToOrder[n]);
        }
        fprintf(fd, "\n");
      }
    }
  }
}

void EnsightExternalData::groupParts()
{
  for(auto part_item : region_elements) {
    elementsInPart elementPart;
    elementPart.part = part_item.first;
    Message::Info("part %d", elementPart.part);
    for(auto el_index : part_item.second) {
      elementPart.elements.push_back(elements[el_index]);
      for(auto n : elements[el_index].nodes) {
        if(std::find(elementPart.nodes.begin(), elementPart.nodes.end(), n) ==
           elementPart.nodes.end()) {
          elementPart.nodes.push_back(n);
        }
      }
    }
    parts.push_back(elementPart);
  }
}

void EnsightExternalData::groupElementType(elementsInPart &el_part)
{
  for(size_t i = 0; i < el_part.elements.size(); i++) {
    if(!el_part.type_el_Part.count(el_part.elements[i].type)) {
      el_part.type_el_Part[el_part.elements[i].type] = std::vector<int>();
    }
    // to give an id sequentially
    el_part.type_el_Part[el_part.elements[i].type].push_back(i);
  }
}

// functions to write in binary
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