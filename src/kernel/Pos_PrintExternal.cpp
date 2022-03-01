#include <sstream>
#include <iostream>
#include "Pos_PrintExternal.h"
#include "Pos_Formulation.h"
#include "Message.h"
#include "Get_DofOfElement.h"
#include "GeoData.h"
#include "ExtendedGroup.h"
#include "Get_Geometry.h"
#include "Cal_PostQuantity.h"
#include <type_traits>

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int    Flag_BIN, Flag_GMSH_VERSION;

extern FILE   *PostStream ;

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t V T U                                       */
/* ------------------------------------------------------------------------ */

void  Pos_PrintExternal(struct PostProcessing    *      PostProcessing_P,
			int                       Order,
			struct DefineQuantity    *DefineQuantity_P0,
			struct QuantityStorage   *QuantityStorage_P0,
			struct PostSubOperation  *PSO_P)
{  

    int NbrTimeStep = Pos_InitTimeSteps(PSO_P);				
				
    VTUData vtu_data;

    struct Group * Group_P = (struct Group *)List_Pointer(Problem_S.Group, PSO_P->Case.OnRegion.RegionIndex);
    List_T  * Region_L = Group_P->InitialList ;

	struct Element Element;
    Get_InitDofOfElement(&Element) ;

	for(int iGeo = 0 ; iGeo < Geo_GetNbrGeoElements() ; iGeo++) 
	{
		List_T  * PostElement_L = List_Create(10, 10, sizeof(struct PostElement *)) ;

        Element.GeoElement = Geo_GetGeoElement(iGeo) ;
        if ((Group_P->Type != ELEMENTLIST  &&
             List_Search(Region_L, &Element.GeoElement->Region, fcmp_int))
             ||
           (Group_P->Type == ELEMENTLIST  &&
            Check_IsEntityInExtendedGroup(Group_P, Element.GeoElement->Num, 0)) ) 
		{
			Fill_PostElement(Element.GeoElement, PostElement_L, iGeo,
			 PSO_P->Depth, PSO_P->Skin,
			 0, 0, PSO_P->Gauss) ;
        }

        /* Loop on PostElements */

        for(int iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++) 
		{
			struct PostElement  * PE = *(struct PostElement **)List_Pointer(PostElement_L, iPost) ;
			vtu_data.addElement(PE);
			Destroy_PostElement(PE) ;
		}
		
	}

	struct PostQuantity * PostQuantity_P;
    for(int ipq = 0; ipq < List_Nbr(PSO_P->PointQuantities);  ipq++)
	{
	    PostQuantity_P = (struct PostQuantity *)List_Pointer(PostProcessing_P->PostQuantity,
					    *(int*)List_Pointer(PSO_P->PointQuantities, ipq) );
	    PointDataSet pd_set(PostQuantity_P->Name);

		for(int iGeo = 0 ; iGeo < Geo_GetNbrGeoElements() ; iGeo++) 
		{
			List_T  * PostElement_L = List_Create(10, 10, sizeof(struct PostElement *)) ;

			Element.GeoElement = Geo_GetGeoElement(iGeo) ;
			if ((Group_P->Type != ELEMENTLIST  &&
				 List_Search(Region_L, &Element.GeoElement->Region, fcmp_int))
				 ||
			   (Group_P->Type == ELEMENTLIST  &&
				Check_IsEntityInExtendedGroup(Group_P, Element.GeoElement->Num, 0)) ) 
			{
				Fill_PostElement(Element.GeoElement, PostElement_L, iGeo,
				 PSO_P->Depth, PSO_P->Skin,
				 0, 0, PSO_P->Gauss) ;
			}

			for(int iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++) 
			{
				struct PostElement  * PE = *(struct PostElement **)List_Pointer(PostElement_L, iPost) ;

				Element.Num = Element.GeoElement->Num ;
				Element.Type = Element.GeoElement->Type ;
				Current.Region = Element.Region = Element.GeoElement->Region ;
				Get_NodesCoordinatesOfElement(&Element) ;

				int iTime = 0;
				Pos_InitAllSolutions(PSO_P->TimeStep_L, iTime) ;

				for(int iNode = 0 ; iNode < PE->NbrNodes ; iNode++)
				{
					Current.x = PE->x[iNode] ;
					Current.y = PE->y[iNode] ;
					Current.z = PE->z[iNode] ;
					Cal_PostQuantity(PostQuantity_P, DefineQuantity_P0, QuantityStorage_P0,
					   NULL, &Element,
					   PE->u[iNode], PE->v[iNode], PE->w[iNode], &PE->Value[iNode]);
					   
					pd_set.setValueType(PE->Value[0].Type);

					std::vector<double> data_point;
					for(int k = 0; k < pd_set.data_size; k++)
					{
						data_point.push_back(PE->Value[iNode].Val[k]);
					}
					pd_set.addData(vtu_data.node_map[PE->NumNodes[iNode]], data_point);

				}
				
				Destroy_PostElement(PE) ;
			}



		List_Delete(PostElement_L);
		} /* for iGeo */
		vtu_data.point_data.push_back(pd_set);

	}

FILE* mesh_file_stream;
std::string fn ="D:/test/myvtu.vtu";
fopen_s(&mesh_file_stream, "D:/test/myvtu.vtu", "wb");
// vtu_data.write(PostStream);
vtu_data.write(mesh_file_stream);
fclose(mesh_file_stream);

/*
	for (int iTime = 0 ; iTime < NbrTimeStep ; iTime++) 
	{
        int  TimeStepIndex, Num_Solution;
        List_Read(PSO_P->TimeStep_L, iTime, &TimeStepIndex);
	   
	    for(int k = 0 ; k < Current.NbrSystem ; k++)
		   
        if( (Num_Solution = std::min(List_Nbr((Current.DofData_P0+k)->Solutions)-1, TimeStepIndex)) >=0 )
          (Current.DofData_P0+k)->CurrentSolution = (struct Solution*)List_Pointer((Current.DofData_P0+k)->Solutions, Num_Solution) ;

        if(TimeStepIndex >= 0 && TimeStepIndex < List_Nbr(Current.DofData->Solutions))
		{
            Solution *Solution_P = ((struct Solution*)List_Pointer(Current.DofData->Solutions, TimeStepIndex));
            Current.TimeStep = Solution_P->TimeStep ;
			Current.Time = Solution_P->Time ;
			Current.TimeImag = Solution_P->TimeImag ;
        }
        else
		{ // Warning: this can be wrong
            Current.TimeStep = TimeStepIndex;
            if(Current.DofData->CurrentSolution)
			{
                Current.Time = Current.DofData->CurrentSolution->Time;
                Current.TimeImag = Current.DofData->CurrentSolution->TimeImag;
			}
		}
		std::cout << Current.Time << std::endl;
	}
		*/		
			 
}



PointDataSet::PointDataSet(char* n): name(n) 
{
	value_type = -1; // -1 means not set
}

void PointDataSet::setValueType(int vt)
{
	if (vt != -1)
	switch(vt)
	{
		case SCALAR      : data_size = 1 ; break ;
		case VECTOR      : data_size = 3 ; break ;
		case TENSOR_DIAG : data_size = 3 ; break ;
		case TENSOR_SYM  : data_size = 6 ; break ;
		case TENSOR      : data_size = 9 ; break ;
		default: Message::Error("Unsupported value type for %s", name);
    }
	value_type = vt;
}


void PointDataSet::addData(int i, std::vector<double> d)
{
	data[i] = d;
}
	

// Class VTUData definition

VTUData::VTUData()
{
	wtype = APPENDED;
	current_appended_offset = 0;
	if (wtype == ASCII)
		format = "ascii";
	else if (wtype == APPENDED)
		format = "appended";
}

void VTUData::addElement(PostElement  * PE)
{
	struct Element e;
	e.GeoElement = Geo_GetGeoElement(PE->Index);
	e.Num = e.GeoElement->Num;
	e.Type = e.GeoElement->Type;
	Current.Region = e.Region = e.GeoElement->Region;
	Get_NodesCoordinatesOfElement(&e);

	VTKElement vtk_el;
	switch(e.Type)
	{
		case LINE            : vtk_el.type = 3 ; break ;
		case TRIANGLE        : vtk_el.type = 5 ; break ;
		case QUADRANGLE      : vtk_el.type = 9 ; break ;
		case TETRAHEDRON     : vtk_el.type = 10 ; break ;
		case HEXAHEDRON      : vtk_el.type = 12 ; break ;
		case PRISM           : vtk_el.type = 13 ; break ;
		case PYRAMID         : vtk_el.type = 14 ; break ;
		default: Message::Error("Unsupported element type %i", e.Type); return;
	}
					
	for(int iNode = 0; iNode < e.GeoElement->NbrNodes; iNode++)
	{
		if (node_map.count(PE->NumNodes[iNode]) == 0)
		{
			node_map[PE->NumNodes[iNode]] = node_map.size();
			node_coordinates.push_back(std::vector<double>({PE->x[iNode], PE->y[iNode], PE->z[iNode]}));
		}
		vtk_el.nodes.push_back(node_map[PE->NumNodes[iNode]] );
	}
	elements.push_back(vtk_el);
		
}

void VTUData::write(FILE* pstream)
{
	if(!pstream) return;
	int appended_offset = 0;

    fprintf(pstream, "<VTKFile type=\"UnstructuredGrid\" version=\"1.0\" byte_order=\"LittleEndian\">\n");
    fprintf(pstream, "  <UnstructuredGrid>\n");
    fprintf(pstream, "    <Piece NumberOfPoints=\"%zu\" NumberOfCells=\"%zu\">\n", node_map.size(), elements.size());
	
	
	// nodal result data
    fprintf(pstream, "      <PointData>\n");
	int inner_count = 0;
	for(size_t iData = 0; iData < point_data.size(); iData++)
	{
		std::vector<float> data_vec;
		for(size_t iPoint = 0; iPoint < node_map.size(); iPoint++)
		{
			for(int iVal = 0; iVal < point_data[iData].data_size; iVal++)
				data_vec.push_back(point_data[iData].data[iPoint][iVal]);	
		}
		writeDataArray(pstream, data_vec, point_data[iData].name, point_data[iData].data_size);
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
			data_vec.push_back(elements[i].type);
		}
		writeDataArray(pstream, data_vec, "types", 1);
	}
	
    fprintf(pstream, "      </Cells>\n");
		
    fprintf(pstream, "    </Piece>\n");
    fprintf(pstream, "  </UnstructuredGrid>\n");

    if (wtype == APPENDED)
	{
		fprintf(pstream, "  <AppendedData encoding = \"raw\">\n");
        fprintf(pstream, "   _");
		for (int i = 0; i< data_arrays.size(); i++)
		{
		    fwrite(&data_arrays[i][0], sizeof(char), data_sizes[i], pstream);
			
				FILE* file_stream;

				std::string fname = "d:/test/array_" + std::to_string(i) +".bin";
				fopen_s(&file_stream, fname.c_str(), "wb");
				int sz;
				memcpy(&sz, &data_arrays[i][0], header_size);

				std::cout << "at read data " <<  i << " size" << sz  << " " << header_size<< std::endl;

				fwrite(&data_arrays[i][0], sizeof(char), data_sizes[i], file_stream);
				fclose(file_stream);
	
	
		}
        fprintf(pstream, "  </AppendedData>\n");
	}

    fprintf(pstream, "</VTKFile>\n");
}


template <typename T>
void VTUData::writeDataArray(FILE* pstream, std::vector<T> data, std::string name, int nr_components)
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
	else if (format == "appended")
	{
		fprintf(pstream, " offset = \"%zu\">\n      ", current_appended_offset);
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
	else if (wtype == APPENDED)
	{
		char data_array[data.size() * sizeof(T) + header_size];
		uint32_t data_size = data.size() * sizeof(T);
		memcpy(&data_array[0], &data_size, header_size);
		for (size_t iData = 0; iData < data.size(); iData++)
		{
			memcpy(&data_array[sizeof(T) * iData + header_size], &data[iData], sizeof(T));
		}	
		data_arrays.push_back(data_array);
		data_sizes.push_back(data.size() * sizeof(T) + header_size);
		int sz;
		memcpy(&sz, &data_array[0], header_size);

		std::cout << "at write data " <<  name << " size" << sz  << " " << std::endl;
		for (int i = 0; i < data_arrays.size(); i++)
		{
			int sz1;
			memcpy(&sz1, data_arrays.data()[i], header_size);

			std::cout << "recheck sizes during  " <<  name << " size  " << i << " " <<  sz1  << " " << std::endl;
		}

	}
	fprintf(pstream, "\n        </DataArray>\n");
}


template  void VTUData::writeDataArray<int>(FILE*, std::vector<int>, std::string, int);
template  void VTUData::writeDataArray<float>(FILE*, std::vector<float>, std::string, int);
template  void VTUData::writeDataArray<uint8_t>(FILE*, std::vector<uint8_t>, std::string, int);
