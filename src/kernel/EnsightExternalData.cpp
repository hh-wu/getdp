
#include "EnsightExternalData.h"
#include <string.h>
#include "Message.h"
#include "OS.h"
#include <cstring>
#include <algorithm>

extern char *Name_Path;

extern struct EnsightCase Ensight_Case;

EnsightExternalData::EnsightExternalData() {}

EnsightExternalData::~EnsightExternalData() {}

// Use always with LastTimeStep option!!!
//Example 			PrintExternal[ PointData {<post-quantity-id>}, OnElementsOf Region[{ <group-id>}], File "<folder-id>",Format ENSIGHT ,LastTimeStepOnly];

void EnsightExternalData::write(std::string filename)
{
  groupParts();
  for(size_t i = 0; i < parts.size(); i++) { groupElementTypes(parts[i]); }
  addGeometry(); // This has to be done before any WriteGeometry because it
                 // stores geo data of each Print. Needed for the General .geo
                 // file.
  writeVariableBinary(filename);
  writeGeometryBinary(filename);
  
  //uncomment to get the Ensight ASCII format. Usefull for debugging. 
 /* writeVariableASCII(filename);
  writeGeometryASCII(filename);*/

  //< File "case" >  should be in posoperation line to write the case file.
  //char charBuffer[512];
  //snprintf(charBuffer, sizeof(charBuffer), "%s", "case");
  //std::string current_filename = Fix_RelativePath(charBuffer, Name_Path);
  //if(filename == current_filename) { writeCaseFile(); }
  writeCaseFile(filename);
}
void EnsightExternalData::addGeometry() {
  // add geometries for global .geo file
  bool step_stored = false;
  for(auto step : Ensight_Case.time_values) {
    if(data_sets[0].freq_value != 0) {
      if(step == data_sets[0].freq_value) { step_stored = true; }
    }
    else {
      if(step == data_sets[0].time_value) { step_stored = true; }
    }
  }
  // you should never simulate at freqency zero, in that case you would me more
  // interested in time
  if(!step_stored) {
    if(data_sets[0].freq_value != 0) {
      Ensight_Case.time_values.push_back(data_sets[0].freq_value);
    }
    else {
      Ensight_Case.time_values.push_back(data_sets[0].time_value);
    }
  }
}
  // binary
void EnsightExternalData::writeGeometryBinary(std::string fname)
{
  FILE *fd = nullptr;
  bool binary = true;
  std::string current_filename;
  char charBuffer[512];

  int step_for_naming;

  // ugly thing for counting freqStep
  if(data_sets[0].freq_value != 0) {
    step_for_naming = 0;
    for(auto step : Ensight_Case.time_values) {
      step_for_naming++;
      if(step == data_sets[0].freq_value) { break; }
    }
    step_for_naming--;
  }
  else {
    step_for_naming = data_sets[0].time_step - 1;
  }

  snprintf(charBuffer, sizeof(charBuffer), "%sGlobal.%d.%05d.geo", "resFile", 0,
           step_for_naming);
  current_filename = Fix_RelativePath(charBuffer, Name_Path);
  current_filename = fname + charBuffer;
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
  int node_count = 0; // nodes are named sequentially in the same geo file
  int node_offset = 0; // used for referencing nodes of elements

  for(size_t i = 0; i < Ensight_Case.parts.size(); i++) {
    std::string namePart = "part_" + std::to_string(i);

    WriteStringToFile("part", fd);
    WriteIntToFile(Ensight_Case.parts[i].part, fd);
    WriteStringToFile(namePart.c_str(), fd);
    WriteStringToFile("coordinates", fd);
    WriteIntToFile(Ensight_Case.parts[i].nodes.size(), fd);

    for(auto node : Ensight_Case.parts[i].nodes) {
      NodeIdToOrder[node] =
        ++node_count; // for each part, node starts at value 0 and we want
                      // univoque nodeIdToOrder for each part
      // node id
      WriteIntToFile(NodeIdToOrder[node], fd);
    }
    for(auto node : Ensight_Case.parts[i].nodes)
      WriteFloatToFile(Ensight_Case.parts[i].nodes_coordinates[node][0], fd);
    for(auto node : Ensight_Case.parts[i].nodes)
      WriteFloatToFile(Ensight_Case.parts[i].nodes_coordinates[node][1], fd);
    for(auto node : Ensight_Case.parts[i].nodes)
      WriteFloatToFile(Ensight_Case.parts[i].nodes_coordinates[node][2], fd);

    for(auto elementGroup : Ensight_Case.parts[i].type_el_Part) {
      // element type
      WriteStringToFile(ToEnsightElementType[elementGroup.first].c_str(), fd);
      // number of elements
      WriteIntToFile(elementGroup.second.size(), fd);

      int element_id_offset =
        0; // this works if elements are stores sequentially by regions
      while(Ensight_Case.parts[i].elements[element_id_offset].region !=
            Ensight_Case.parts[i].part) {
        element_id_offset++;
      }
      // print elements id
      for(auto el_index : elementGroup.second) {
        WriteIntToFile(
          Ensight_Case.parts[i].elements[el_index + element_id_offset].index,
          fd);
      }
      // print nodes of elements
      for(auto el_index : elementGroup.second) {
        for(auto n : Ensight_Case.parts[i]
                       .elements[el_index + element_id_offset]
                       .nodes) {
          WriteIntToFile(NodeIdToOrder[n] - node_offset, fd);
        }
      }
    }
    node_offset = node_count;
  }
}
// binary
void EnsightExternalData::writeVariableBinary(std::string fname)
{
  FILE *fd = nullptr;
  bool binary = true;
  std::string current_filename;
  char charBuffer[512];
  size_t last_time_step = 0;//Use always with LastTimeStep option!!!
  int step_for_naming;
    // ugly thing for counting freqStep
  if(data_sets[0].freq_value != 0) {
    step_for_naming = 0;
    for(auto step : Ensight_Case.time_values) {
      step_for_naming++;
      if(step == data_sets[0].freq_value) { break; }
    }
    step_for_naming--;
  }
  else {
    step_for_naming = data_sets[0].time_step - 1;
  }


  //UNCOMMENT THIS FOR DEBUGGING, THIS WRITES A .GEO FILE ONLY FOR THE CURRENT POSTOPERATION
  //int step_for_naming;

  //snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05d.geo", "resFile", 0,
  //         step_for_naming);
  //current_filename = Fix_RelativePath(charBuffer, Name_Path);
  //current_filename = fname + charBuffer;
  //if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
  //  Message::Error("Unable to open file '%s', error %s",
  //                 current_filename.c_str(), strerror(errno));
  //  return;
  //}

  //WriteStringToFile("C Binary", fd);
  //WriteStringToFile("Written by GetDP", fd);
  //WriteStringToFile("description line 1", fd);
  //WriteStringToFile("node id given", fd);
  //WriteStringToFile("element id given", fd);

  //std::map<int, int> NodeIdToOrder;
  //int node_count = 0; // nodes are named sequentially
  //int node_offset = 0; // used for referencing nodes of elements

  //for(size_t i = 0; i < parts.size(); i++) {
  //  std::string namePart = "part_" + std::to_string(i);

  //  WriteStringToFile("part", fd);
  //  WriteIntToFile(parts[i].part, fd);
  //  WriteStringToFile(namePart.c_str(), fd);
  //  WriteStringToFile("coordinates", fd);
  //  WriteIntToFile(parts[i].nodes.size(), fd);

  //  for(auto node : parts[i].nodes) {
  //    // node id;
  //    NodeIdToOrder[node] = ++node_count;

  //    WriteIntToFile(NodeIdToOrder[node], fd);
  //  }
  //  // write cordinates
  //  for(auto node : parts[i].nodes)
  //    WriteFloatToFile(node_coordinates[node][0], fd);
  //  for(auto node : parts[i].nodes)
  //    WriteFloatToFile(node_coordinates[node][1], fd);
  //  for(auto node : parts[i].nodes)
  //    WriteFloatToFile(node_coordinates[node][2], fd);

  //  for(auto elementGroup : parts[i].type_el_Part) {
  //    WriteStringToFile(ToEnsightElementType[elementGroup.first].c_str(), fd);
  //    // number of elements
  //    WriteIntToFile(elementGroup.second.size(), fd);

  //    int element_id_offset =
  //      0; // this works if elements are stored sequentially by regions
  //    while(elements[element_id_offset].region != parts[i].part) {
  //      element_id_offset++;
  //    }
  //    // print elements id
  //    for(auto el_index : elementGroup.second) {
  //      WriteIntToFile(elements[el_index + element_id_offset].index, fd);
  //    }
  //    // print nodes of elements
  //    for(auto el_index : elementGroup.second) {
  //      for(auto n : elements[el_index + element_id_offset].nodes) {
  //        WriteIntToFile(NodeIdToOrder[n] - node_offset, fd);
  //      }
  //    }
  //  }
  //  node_offset = node_count;
  //}


  // write values for variable file , i.e field file

  snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05d_n.%s", "resFile", 0,
           step_for_naming,
           data_sets[last_time_step].point_data[0].name);
  current_filename = Fix_RelativePath(charBuffer, Name_Path);
  current_filename = fname + charBuffer;
  if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
    Message::Error("Unable to open file '%s', error %s",
                   current_filename.c_str(), strerror(errno));
    return;
  }

  WriteStringToFile(data_sets[last_time_step].point_data[0].name, fd);

  for(size_t i = 0; i < parts.size(); i++) {
    WriteStringToFile("part", fd);
    WriteIntToFile(parts[i].part, fd);
    WriteStringToFile("coordinates", fd);
    size_t offset = (i == 0) ? 0 : parts[i - 1].nodes.size();

    for(size_t iData = 0; iData < data_sets[last_time_step].point_data.size();
        iData++) {
      for(int iVal = 0;
          iVal < data_sets[last_time_step].point_data[iData].data_size;
          iVal++) {
        for(size_t iPoint = offset; iPoint < (offset + parts[i].nodes.size());
            iPoint++) { // node_map.size()

          WriteFloatToFile(
            data_sets[last_time_step].point_data[iData].data[iPoint][iVal], fd);
        }
      }
    }
  }
  bool name_in_case = false;
  for(auto name : Ensight_Case.postNames) {
    if(name == data_sets[0].point_data[0].name) { name_in_case = true; }
  }
  if(!name_in_case) {
    Ensight_Case.postNames.push_back(data_sets[0].point_data[0].name);
    Ensight_Case.valueTypes.push_back(data_sets[0].point_data[0].value_type);
  }

 
}
// ascii
void EnsightExternalData::writeGeometryASCII(std::string fname)
{
  FILE *fd = nullptr;
  bool binary = false;
  std::string current_filename;
  char charBuffer[512];

  int step_for_naming;

  // ugly thing for counting freqStep
  if(data_sets[0].freq_value != 0) {
    step_for_naming = 0;
    for(auto step : Ensight_Case.time_values) {
      step_for_naming++;
      if(step == data_sets[0].freq_value) { break; }
    }
    step_for_naming--;
  }
  else {
    step_for_naming = data_sets[0].time_step - 1;
  }

  snprintf(charBuffer, sizeof(charBuffer), "%sGlobal.%d.%05d.geoASCII",
           "resFile", 0, step_for_naming);
  current_filename = Fix_RelativePath(charBuffer, Name_Path);
  current_filename = fname + charBuffer;
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
  int node_offset = 0; // used for referencing nodes of elements

  for(size_t i = 0; i < Ensight_Case.parts.size(); i++) {
    fprintf(fd, "part\n");
    fprintf(fd, "%d\n", Ensight_Case.parts[i].part);
    fprintf(fd, "coordinates\n");
    fprintf(fd, "%lld\n", Ensight_Case.parts[i].nodes.size());
    for(auto node : Ensight_Case.parts[i].nodes) {
      NodeIdToOrder[node] =
        ++node_count; // for each part, node should not start at value 0. We
                      // want univoque nodeIdToOrder for each part
      // node id
      fprintf(fd, "%d\n", NodeIdToOrder[node]);
    }

    for(auto node : Ensight_Case.parts[i].nodes)
      fprintf(fd, "%.10e\n", Ensight_Case.parts[i].nodes_coordinates[node][0]);
    for(auto node : Ensight_Case.parts[i].nodes)
      fprintf(fd, "%.10e\n", Ensight_Case.parts[i].nodes_coordinates[node][1]);
    for(auto node : Ensight_Case.parts[i].nodes)
      fprintf(fd, "%.10e\n", Ensight_Case.parts[i].nodes_coordinates[node][2]);

    for(auto elementGroup : Ensight_Case.parts[i].type_el_Part) {
      // print element type
      fprintf(fd, "%s\n", ToEnsightElementType[elementGroup.first].c_str());
      // print number of elements of this type
      fprintf(fd, "%lld\n", elementGroup.second.size());

      int element_id_offset = 0; // this works if elements are stores
                                 // sequentially by regions, and they are
      while(Ensight_Case.parts[i].elements[element_id_offset].region !=
            Ensight_Case.parts[i].part) {
        element_id_offset++;
      }
      // print elements id
      for(auto el_index : elementGroup.second) {
        fprintf(
          fd, "%d\n",
          Ensight_Case.parts[i].elements[el_index + element_id_offset].index);
      }
      // print nodes of elements
      for(auto el_index : elementGroup.second) {
        for(auto n : Ensight_Case.parts[i]
                       .elements[el_index + element_id_offset]
                       .nodes) {
          fprintf(fd, "%d ", NodeIdToOrder[n] - node_offset);
        }
        fprintf(fd, "\n");
      }
    }
    node_offset = node_count;
  }
}
// ascii
void EnsightExternalData::writeVariableASCII(std::string fname)
{
  FILE *fd = nullptr;
  bool binary = false;
  std::string current_filename;
  char charBuffer[512];
  size_t last_time_step = 0;
  int step_for_naming;
      // ugly thing for counting freqStep
  if(data_sets[0].freq_value != 0) {
    step_for_naming = 0;
    for(auto step : Ensight_Case.time_values) {
      step_for_naming++;
      if(step == data_sets[0].freq_value) { break; }
    }
    step_for_naming--;
  }
  else {
    step_for_naming = data_sets[0].time_step - 1;
  }

  // write .geo file

  // UNCOMMENT THIS FOR DEBUGGING, THIS WRITES A .GEO FILE ONLY FOR THE CURRENT
  // POSTOPERATION
  
  //snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05d.geoASCII", "resFile", 0,
  //         data_sets[0].time_step - 1); // last time step data_sets.size()
  //current_filename = Fix_RelativePath(charBuffer, Name_Path);
  //current_filename = fname + charBuffer;
  //if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
  //  Message::Error("Unable to open file '%s', error %s",
  //                 current_filename.c_str(), strerror(errno));
  //  return;
  //}

  //fprintf(fd, "Written by GetDP Ensight writer\n");
  //fprintf(fd, "No title specified\n");
  //fprintf(fd, "node id given\n");
  //fprintf(fd, "element id given\n");

  //std::map<int, int> NodeIdToOrder;
  //int node_count = 0; // nodes are named sequentially in the same geo file
  //int node_offset = 0; // used for referencing nodes of elements
  //for(size_t i = 0; i < parts.size(); i++) {
  //  fprintf(fd, "part\n");
  //  fprintf(fd, "%d\n", parts[i].part);
  //  fprintf(fd, "coordinates\n");
  //  fprintf(fd, "%lld\n", parts[i].nodes.size());

  //  for(auto node : parts[i].nodes) {
  //    NodeIdToOrder[node] =
  //      ++node_count; // for each part, node should not start at value 0. We
  //                    // want univoque nodeIdToOrder for each part
  //    // node id
  //    fprintf(fd, "%d\n", NodeIdToOrder[node]

  //    );
  //  }

  //  for(auto node : parts[i].nodes)
  //    fprintf(fd, "%.10e\n", node_coordinates[node][0]);
  //  for(auto node : parts[i].nodes)
  //    fprintf(fd, "%.10e\n", node_coordinates[node][1]);
  //  for(auto node : parts[i].nodes)
  //    fprintf(fd, "%.10e\n", node_coordinates[node][2]);

  //  for(auto elementGroup : parts[i].type_el_Part) {
  //    // print element type
  //    fprintf(fd, "%s\n", ToEnsightElementType[elementGroup.first].c_str());
  //    // print number of elements of this type
  //    fprintf(fd, "%lld\n", elementGroup.second.size());

  //    int element_id_offset =
  //      0; // this works if elements are stores sequentially by regions
  //    while(elements[element_id_offset].region != parts[i].part) {
  //      element_id_offset++;
  //    }
  //    // print elements id
  //    for(auto el_index : elementGroup.second) {
  //      // fprintf(fd, "el_index %d\n", el_index);
  //      fprintf(fd, "%d\n", elements[el_index + element_id_offset].index);
  //    }
  //    // print nodes of elements
  //    for(auto el_index : elementGroup.second) {
  //      for(auto n : elements[el_index + element_id_offset].nodes) {
  //        fprintf(fd, "%d ", NodeIdToOrder[n] - node_offset);
  //      }
  //      fprintf(fd, "\n");
  //    }
  //  }
  //  node_offset = node_count;
  //}

  // write values for variable file , i.e field file

  snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%05lld_n.%sASCII", "resFile",
           0, last_time_step, data_sets[last_time_step].point_data[0].name);
  current_filename = Fix_RelativePath(charBuffer, Name_Path);
  current_filename = fname + charBuffer;
  if(!(fd = FOpen(current_filename.c_str(), binary ? "wb" : "w"))) {
    Message::Error("Unable to open file '%s', error %s",
                   current_filename.c_str(), strerror(errno));
    return;
  }
  fprintf(fd, data_sets[last_time_step].point_data[0].name);
  fprintf(fd, "\n");
  for(size_t i = 0; i < parts.size(); i++) {
    fprintf(fd, "part\n");
    fprintf(fd, "%d\n", parts[i].part);
    fprintf(fd, "coordinates\n");
    size_t offset = (i == 0) ? 0 : parts[i - 1].nodes.size();

    for(size_t iData = 0; iData < data_sets[last_time_step].point_data.size();
        iData++) {
      for(auto kv : data_sets[last_time_step].point_data[iData].data) {}
      for(int iVal = 0;
          iVal < data_sets[last_time_step].point_data[iData].data_size;
          iVal++) {
        for(size_t iPoint = offset; iPoint < (offset + parts[i].nodes.size());
            iPoint++) { // node_map.size()
          fprintf(
            fd, "%.10e\n",
            data_sets[last_time_step].point_data[iData].data[iPoint][iVal]);
        }
      }
    }
  }
}
// write .case file
void EnsightExternalData::writeCaseFile(std::string fname)
{
  FILE *fd = nullptr;
  std::string current_filename;
  char charBuffer[512];

  snprintf(charBuffer, sizeof(charBuffer), "%s.%d.%s",  "resFile", 0,
           "case");
  current_filename = Fix_RelativePath(charBuffer, Name_Path);

  current_filename = fname + charBuffer;

  remove(current_filename.c_str());

  if(!(fd = FOpen(current_filename.c_str(), "w"))) {
    Message::Error("Unable to open file '%s', error %s",
                   current_filename.c_str(), strerror(errno));
    return;
  }
  fprintf(fd, "FORMAT\ntype: ensight gold \n \n \nGEOMETRY \nmodel: 1 "
              "resFileGlobal.0.*****.geo \n \nVARIABLE\n");
  for(size_t var = 0; var < Ensight_Case.postNames.size(); var++) {
    fprintf(fd, "%s per node: 1 ",
            ToEnsightValueType[Ensight_Case.valueTypes[var]].c_str());
    fprintf(fd, "%s resFile.0.*****_n.%s\n\n", Ensight_Case.postNames[var],
            Ensight_Case.postNames[var]);
  }

  fprintf(fd, "\nTIME \ntime set: 1 \nnumber of steps: %lld\n",
          Ensight_Case.time_values.size());
  fprintf(fd, "filename start number: 00000 \nfilename increment: 00001\n");
  fprintf(fd, "time values:\n");
  for(size_t time_step = 0; time_step < Ensight_Case.time_values.size();
      time_step++) {
    fprintf(fd, "%f ", Ensight_Case.time_values[time_step]);
  }
}

void EnsightExternalData::groupParts()
{
  for(auto part_item : region_elements) {
    elementsInPart elementPart;
    elementPart.part = part_item.first;
    for(auto el_index : part_item.second) {
      PostExternalElementCopy elementCopy;
      elementCopy.index = elements[el_index].index;
      elementCopy.nodes = elements[el_index].nodes;
      elementCopy.nodes_coordinates = elements[el_index].nodes_coordinates;
      elementCopy.region = elements[el_index].region;
      elementCopy.type = elements[el_index].type;

      elementPart.nodes_coordinates = node_coordinates;
      elementPart.elements.push_back(elementCopy);
      for(auto n : elements[el_index].nodes) {
        if(std::find(elementPart.nodes.begin(), elementPart.nodes.end(), n) ==
           elementPart.nodes.end()) {
          elementPart.nodes.push_back(n);
        }
      }
    }
    parts.push_back(elementPart);
    bool is_new_part = true;
    for(size_t j = 0; j < Ensight_Case.parts.size(); j++) {
      if(elementPart.part == Ensight_Case.parts[j].part) {
        is_new_part = false;
      }
    }
    if(is_new_part) {
      Ensight_Case.parts.push_back(elementPart);
      groupElementTypes(Ensight_Case.parts.back());
    }
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
  for(size_t j = 0; j < Ensight_Case.parts.size(); j++) {
    if(el_part.part == Ensight_Case.parts[j].part) {
      Ensight_Case.parts[j].type_el_Part = el_part.type_el_Part;
    }
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