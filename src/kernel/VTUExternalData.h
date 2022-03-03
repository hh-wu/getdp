#pragma once

#include "PostExternalData.h"

class VTUExternalData: public PostExternalData
{
private:
	int current_appended_offset;
	const int header_size = sizeof(int); // we will use only integers for headers in vtu
	std::vector<char*> data_arrays;
	std::vector<int> data_sizes;
	std::string format;
	
	void writeDataArray();
	
	template <typename T>
	void writeDataArray(FILE* pstream, std::vector<T> data, std::string name, int nr_components);
   
   std::map<int, int> ToVTKElementType = {
  {LINE, 3},
  {TRIANGLE, 5},
  {QUADRANGLE, 9},
  {TETRAHEDRON, 10},
  {HEXAHEDRON, 12},
  {PRISM, 13},
  {PYRAMID, 14}};
   
public:
    VTUExternalData();
    ~VTUExternalData();

	void write(std::string fname) override;

};
