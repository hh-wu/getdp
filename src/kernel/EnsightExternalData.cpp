
#include "EnsightExternalData.h"
#include <string.h>
#include "Message.h"
#include "OS.h"
#include <cstring>
#include <algorithm>

extern char *Name_Path;

EnsightExternalData::EnsightExternalData() {}

EnsightExternalData::~EnsightExternalData() {}

void EnsightExternalData::write(std::string filename)
{
  writeCaseFile();
  writeBinary(filename);
  //writeASCII(filename);
}

// binary
void EnsightExternalData::writeBinary(std::string filename)
{
  FILE *fd = nullptr;
  bool binary = true;
  std::string current_filename;
  char charBuffer[512];

  groupParts();
  for(size_t i = 0; i < parts.size(); i++) { groupElementTypes(parts[i]); }

  for(size_t time_step = 0; time_step < data_sets.size(); time_step++) {
    // write .geo file
    snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05lld.geo", "resFile", 0,
             time_step);
    current_filename = Fix_RelativePath(charBuffer, Name_Path);

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

    std::map<int, int> NodeIdToOrder;
    int node_count = 0; // nodes are named sequentially

    for(size_t i = 0; i < parts.size(); i++) {
      std::string namePart = "part_" + std::to_string(i);

      WriteStringToFile("part", fd);
      WriteIntToFile(parts[i].part, fd);
      WriteStringToFile(namePart.c_str(), fd);
      WriteStringToFile("coordinates", fd);
      WriteIntToFile(parts[i].nodes.size(), fd);

      for(auto node : parts[i].nodes) {
        // node id;
        NodeIdToOrder[node] = ++node_count;
        WriteIntToFile(NodeIdToOrder[node], fd);
      }
      // write cordinates
      for(auto node : parts[i].nodes)
        WriteFloatToFile(node_coordinates[node][0], fd);
      for(auto node : parts[i].nodes)
        WriteFloatToFile(node_coordinates[node][1], fd);
      for(auto node : parts[i].nodes)
        WriteFloatToFile(node_coordinates[node][2], fd);

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
    // write values for variable file , i.e field file

    snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05lld_n.%s", "resFile", 0,
             time_step, data_sets[time_step].point_data[0].name);
    current_filename = Fix_RelativePath(charBuffer, Name_Path);

    if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
      Message::Error("Unable to open file '%s', error %s",
                     current_filename.c_str(), strerror(errno));
      return;
    }
    WriteStringToFile(data_sets[time_step].point_data[0].name, fd);
    for(size_t i = 0; i < parts.size(); i++) {
      WriteStringToFile("part", fd);
      WriteIntToFile(parts[i].part, fd);
      WriteStringToFile("coordinates", fd);

      for(size_t iData = 0; iData < data_sets[time_step].point_data.size();
          iData++) {
        for(size_t iPoint = 0; iPoint < node_map.size(); iPoint++) {
          for(int iVal = 0;
              iVal < data_sets[time_step].point_data[iData].data_size; iVal++) {
            WriteFloatToFile(
              data_sets[time_step].point_data[iData].data[iPoint][iVal], fd);
          }
        }
      }
    }
  }
}

// ascii
void EnsightExternalData::writeASCII(std::string filename)
{
  FILE *fd = nullptr;
  bool binary = false;
  std::string current_filename;
  char charBuffer[512];

  groupParts();
  for(size_t i = 0; i < parts.size(); i++) { groupElementTypes(parts[i]); }

  for(size_t time_step = 0; time_step < data_sets.size(); time_step++) {
    // write .geo file
    snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05lld.geo", "resFile", 0,
             time_step);
    current_filename = Fix_RelativePath(charBuffer, Name_Path);

    if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
      Message::Error("Unable to open file '%s', error %s",
                     current_filename.c_str(), strerror(errno));
      return;
    }

    fprintf(fd, "Written by GetDP Ensight writer\n");
    fprintf(fd, "No title specified\n");
    fprintf(fd, "node id given\n");
    fprintf(fd, "element id given\n");

    std::map<int, int> NodeIdToOrder;
    int node_count = 0; // nodes are named sequentially in the same geo file

    for(size_t i = 0; i < parts.size(); i++) {
      fprintf(fd, "part\n");
      fprintf(fd, "%d\n", parts[i].part);
      fprintf(fd, "coordinates\n");
      fprintf(fd, "%lld\n", parts[i].nodes.size());
      for(auto node : parts[i].nodes) {
        NodeIdToOrder[node] =
          ++node_count; // for each part, node starts at value 0 and we want
                        // univoque nodeIdToOrder for each part
        // node id
        fprintf(fd, "%d\n", NodeIdToOrder[node]);
      }

      for(auto node : parts[i].nodes)
        fprintf(fd, "%.10e\n", node_coordinates[node][0]);
      for(auto node : parts[i].nodes)
        fprintf(fd, "%.10e\n", node_coordinates[node][1]);
      for(auto node : parts[i].nodes)
        fprintf(fd, "%.10e\n", node_coordinates[node][2]);

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

    // write values for variable file , i.e field file

    snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05lld_n.%s", "resFile", 0,
             time_step, data_sets[time_step].point_data[0].name);
    current_filename = Fix_RelativePath(charBuffer, Name_Path);

    if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
      Message::Error("Unable to open file '%s', error %s",
                     current_filename.c_str(), strerror(errno));
      return;
    }
    fprintf(fd, data_sets[time_step].point_data[0].name);
    fprintf(fd, "\n");
    for(size_t i = 0; i < parts.size(); i++) {
      fprintf(fd, "part\n");
      fprintf(fd, "%d\n", parts[i].part);
      fprintf(fd, "coordinates\n");

      for(size_t iData = 0; iData < data_sets[time_step].point_data.size();
          iData++) {
        //Message::Info("point_data.name %s",
                      data_sets[time_step].point_data[0].name);

        for(size_t iPoint = 0; iPoint < node_map.size(); iPoint++) {
          for(int iVal = 0;
              iVal < data_sets[time_step].point_data[iData].data_size; iVal++) {
            fprintf(fd, "%.10e\n",
                    data_sets[time_step].point_data[iData].data[iPoint][iVal]);
          }
        }
      }
    }
  }
  
  
}
// write .case file
void EnsightExternalData::writeCaseFile() {

  FILE *fd = nullptr;
  bool binary = false;
  std::string current_filename;
  char charBuffer[512];
  
  snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%s", "resFile", 0, "case");
  current_filename = Fix_RelativePath(charBuffer, Name_Path);
  ;
  if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
    Message::Error("Unable to open file '%s', error %s",
                   current_filename.c_str(), strerror(errno));
    return;
  }
  fprintf(fd, "FORMAT\ntype: ensight gold \n \n \nGEOMETRY \nmodel: 1 "
              "resFile.0.*****.geo \n \nVARIABLE\n");
  fprintf(fd, "%s per node: 1 ",
          ToEnsightValueType[data_sets[0].point_data[0].value_type].c_str());
  fprintf(fd, "%s resFile.0.*****_n.%s\n\n", data_sets[0].point_data[0].name,
          data_sets[0].point_data[0].name);
  fprintf(fd, "TIME \ntime set: 1 \nnumber of steps: %lld\n", data_sets.size());
  fprintf(fd, "filename start number: 00000 \nfilename increment: 00001\n");
  fprintf(fd, "time values:\n");
  for(size_t time_step = 0; time_step < data_sets.size(); time_step++) {
    fprintf(fd, "%f ", data_sets[time_step].time_value);
  }
}


void EnsightExternalData::groupParts()
{
  for(auto part_item : region_elements) {
    elementsInPart elementPart;
    elementPart.part = part_item.first;
    //Message::Info("part %d", elementPart.part);
    //Message::Info("part_item.second .size %lld", part_item.second.size());
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
void EnsightExternalData::groupElementTypes(elementsInPart &el_part)
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