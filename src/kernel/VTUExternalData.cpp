
#include "VTUExternalData.h"
#include "Message.h"
#include "OS.h"
#include <cstring>	

// Class VTUExternalData definition

VTUExternalData::VTUExternalData()
{
	current_appended_offset = 0;
	if (wtype == ASCII)
		format = "ascii";
	else if (wtype == BINARY) // in VTK there is binary and appended. For option binary we use appended
		format = "appended";
}

VTUExternalData::~VTUExternalData()
{
	for (auto vec : data_arrays)
		delete [] vec;
}

void VTUExternalData::write(std::string filename)
{
	FILE* pstream;
	bool binary = true;
	std::string current_filename;
	for (size_t time_step = 0; time_step < data_sets.size(); time_step++)
	{
		// clean up data in case of multiple time steps
		current_appended_offset = 0;
		for (auto vec : data_arrays)
			delete [] vec;
		data_arrays.clear();
		data_sizes.clear();
		
		// append time step to the end of vtu file name
		if (data_sets.size() ==1)
			current_filename = filename;
		else
			current_filename = filename + "." + std::to_string(time_step);
		
		if(!(pstream = FOpen(current_filename.c_str(), binary ? "wb" : "w")))
		{
			Message::Error("Unable to open file '%s', error %s", current_filename.c_str(), strerror(errno));
			return;
		}
		
		fprintf(pstream, "<VTKFile type=\"UnstructuredGrid\" version=\"1.0\" byte_order=\"LittleEndian\">\n");
		fprintf(pstream, "  <UnstructuredGrid>\n");
		fprintf(pstream, "    <Piece NumberOfPoints=\"%zu\" NumberOfCells=\"%zu\">\n", node_map.size(), elements.size());
		
		// nodal result data
		fprintf(pstream, "      <PointData>\n");
		for(size_t iData = 0; iData < data_sets[time_step].point_data.size(); iData++)
		{
			std::vector<float> data_vec;
			for(size_t iPoint = 0; iPoint < node_map.size(); iPoint++)
			{
				for(int iVal = 0; iVal < data_sets[time_step].point_data[iData].data_size; iVal++)
					data_vec.push_back(data_sets[time_step].point_data[iData].data[iPoint][iVal]);	
			}
			writeDataArray(pstream, data_vec, data_sets[time_step].point_data[iData].name, data_sets[time_step].point_data[iData].data_size);
		}
		fprintf(pstream, "      </PointData>\n");

		// mesh nodes
		fprintf(pstream, "      <Points>\n");
		{
			std::vector<float> data_vec;
			for (size_t i = 0; i < node_coordinates.size(); i++)
				data_vec.insert(data_vec.end(), node_coordinates[i].begin(), node_coordinates[i].end());
			writeDataArray(pstream, data_vec, "Points", 3);
		}

		fprintf(pstream, "      </Points>\n");

		fprintf(pstream, "      <Cells>\n");
		
		{
			std::vector<int> data_vec;
			for (size_t i = 0; i < elements.size(); i++)
				data_vec.insert(data_vec.end(), elements[i].nodes.begin(), elements[i].nodes.end());
			writeDataArray(pstream, data_vec, "connectivity", 1);

		}

		{
			std::vector<int> data_vec;
			int offset = 0;
			for (size_t i = 0; i < elements.size(); i++)
			{
				offset += elements[i].nodes.size();
				data_vec.push_back(offset);
			}
			writeDataArray(pstream, data_vec, "offsets", 1);
		}

		{
			std::vector<uint8_t> data_vec;
			for (size_t i = 0; i < elements.size(); i++)
			{
				uint8_t t = ToVTKElementType[elements[i].type];
				if (t == 0) 
				{
					Message::Error("Unsupported element type %i", t); 
					return;
				}
				data_vec.push_back(t);
			}
			writeDataArray(pstream, data_vec, "types", 1);
		}
		
		fprintf(pstream, "      </Cells>\n");

		fprintf(pstream, "    </Piece>\n");
		fprintf(pstream, "  </UnstructuredGrid>\n");

		if (wtype == BINARY)
		{
			fprintf(pstream, "  <AppendedData encoding = \"raw\">\n");
			fprintf(pstream, "   _");
			for (size_t i = 0; i< data_arrays.size(); i++)
			{
				fwrite(&data_arrays[i][0], sizeof(char), data_sizes[i], pstream);	
			}
			fprintf(pstream, "  </AppendedData>\n");
		}

		fprintf(pstream, "</VTKFile>\n");
		fclose(pstream);
	}
}


template <typename T>
void VTUExternalData::writeDataArray(FILE* pstream, std::vector<T> data, std::string name, int nr_components)
{
	std::string string_formatter;
	std::string vtk_data_type;
	if (std::is_same<T, int32_t>::value)
	{
		string_formatter = " %i ";
		vtk_data_type = "Int32";	
	}
	else if (std::is_same<T, float>::value)
	{
		string_formatter = " %.16g ";
		vtk_data_type = "Float32";	
	}
	else if (std::is_same<T, uint8_t>::value)
	{
		string_formatter = " %i ";
		vtk_data_type = "UInt8";
	}

	fprintf(pstream, "        <DataArray type=\"%s\" Name=\"%s\" format=\"%s\" NumberOfComponents=\"%i\"", vtk_data_type.c_str(), name.c_str(), format.c_str(), nr_components);
	if (wtype == ASCII)
		fprintf(pstream, ">\n      ");
	else if (wtype == BINARY)
	{
		fprintf(pstream, " offset = \"%i\">\n      ", current_appended_offset);
		current_appended_offset += data.size() * sizeof(T) + header_size;
	}
	
	if (wtype == ASCII)
	{	
		uint8_t data_in_row = 0;
		for (size_t iData = 0; iData < data.size(); iData++)
		{
			if (data_in_row == 7)
			{
				fprintf(pstream, " \n        ");
				data_in_row = 0;
			}
			fprintf(pstream, string_formatter.c_str(), data[iData]);
			data_in_row++;
		}	
	}	
	else if (wtype == BINARY)
	{
	
		char* data_array = new char [data.size() * sizeof(T) + header_size];
		uint32_t data_size = data.size() * sizeof(T);
		memcpy(&data_array[0], &data_size, header_size);
		memcpy(&data_array[header_size], data.data(), data.size() * sizeof(T));
		data_arrays.push_back(data_array);
		data_sizes.push_back(data.size() * sizeof(T) + header_size);
	}
	fprintf(pstream, "\n        </DataArray>\n");
}


template  void VTUExternalData::writeDataArray<int>(FILE*, std::vector<int>, std::string, int);
template  void VTUExternalData::writeDataArray<float>(FILE*, std::vector<float>, std::string, int);
template  void VTUExternalData::writeDataArray<uint8_t>(FILE*, std::vector<uint8_t>, std::string, int);