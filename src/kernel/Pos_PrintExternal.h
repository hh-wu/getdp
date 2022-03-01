// GetDP - Copyright (C) 1997-2021 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#pragma once

#include <vector>
#include "ProData.h"
#include "Pos_Element.h"
#include <iostream>

void  Pos_PrintExternal(struct PostProcessing    *      PostProcessing_P,
			int                       Order,
			struct DefineQuantity    *DefineQuantity_P0,
			struct QuantityStorage   *QuantityStorage_P0,
			struct PostSubOperation  *PSO_P);

class PointDataSet
{
public:
	PointDataSet(char* n);
    void setValueType(int vt);
	void addData(int i, std::vector<double> d);
	char* name;
	int value_type;
	int data_size;
	
	std::map<int, std::vector<double>> data;
};

struct VTKElement
{
	int type;
	std::vector<int> nodes;
};

class VTUData
{
private:
	int current_appended_offset;
	const int header_size = sizeof(int);
	std::vector<char*> data_arrays;
	std::vector<int> data_sizes;
	std::string format;
public:
   enum WriteType
   {
      ASCII,
      APPENDED
   };
   
   WriteType wtype;

   VTUData();
	
	void addElement(PostElement* PE);
	
	void write(FILE* pstream);
	
	void writeDataArray();
	
	std::map<int, int> node_map; //map to store new node ids
	std::vector<std::vector<double>> node_coordinates;
	
	std::vector<PointDataSet> point_data;
	std::vector<VTKElement> elements;
	
template <typename T>
void writeDataArray(FILE* pstream, std::vector<T> data, std::string name, int nr_components);

};

