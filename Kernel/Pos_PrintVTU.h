// GetDP - Copyright (C) 1997-2021 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#pragma once

#include <vector>
#include "ProData.h"
#include "Pos_Element.h"

void  Pos_PrintVTU(struct PostProcessing    *      PostProcessing_P,
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
public:
	VTUData();
	
	void addElement(PostElement* PE);
	
	void write(FILE* pstream);
	
	std::map<int, int> node_map; //map to store new node ids
	std::vector<std::vector<double>> node_coordinates;
	
	std::vector<PointDataSet> point_data;
	std::vector<VTKElement> elements;
};

