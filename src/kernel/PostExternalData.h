#pragma once

#include <vector>
#include "ProData.h"
#include "Pos_Element.h"
#include <iostream>
#include <unordered_map>

class PointDataSet
{
public:
	PointDataSet(char* n);
    void setValueType(int vt);
	void addData(int i, std::vector<double> d);
	char* name;
	int value_type;
	int data_size;
	
	std::unordered_map<int, std::vector<double>> data;
};

	
struct PostExternalElement
{
	int type;
	int index;
    int region;
	std::vector<int> nodes;
    std::vector<std::vector<double> > nodes_coordinates;
};

struct TimeStepData
{
	int time_step;
	double time_value;
    int freq_step;
    double freq_value;
	std::vector<PointDataSet> point_data;
};

class PostExternalData
{
public:
   enum WriteType
   {
      ASCII,
      BINARY
   };
   
   WriteType wtype;
   
	// unordered map showed about 15% better performance in tests than map
	std::unordered_map<int, int> node_map; //map to store new node ids
	std::vector<std::vector<double>> node_coordinates;
	std::map<int, std::vector<int>> region_elements; // contains map to index in elements vector
    
	std::vector<TimeStepData> data_sets;
	std::vector<PostExternalElement> elements;

    PostExternalData();
    virtual ~PostExternalData();
	
	void addElement(PostElement* PE);
	
	virtual void write(std::string fname) = 0;

};
