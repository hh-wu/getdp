
#include <iostream>
#include "Pos_PrintVTU.h"
#include "Pos_Formulation.h"
#include "Message.h"
#include "Get_DofOfElement.h"
#include "GeoData.h"
#include "ExtendedGroup.h"
#include "Get_Geometry.h"
#include "Cal_PostQuantity.h"


extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int    Flag_BIN, Flag_GMSH_VERSION;

extern FILE   *PostStream ;

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t V T U                                       */
/* ------------------------------------------------------------------------ */

void  Pos_PrintVTU(struct PostProcessing    *      PostProcessing_P,
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


vtu_data.write(PostStream);


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
	std::string format = "ascii";

    fprintf(pstream, "<VTKFile type=\"UnstructuredGrid\" version=\"0.1\" byte_order=\"LittleEndian\">\n");
    fprintf(pstream, "  <UnstructuredGrid>\n");
    fprintf(pstream, "    <Piece NumberOfPoints=\"%zu\" NumberOfCells=\"%zu\">\n", node_map.size(), elements.size());
	// mesh nodes
    fprintf(pstream, "      <Points>\n");
    fprintf(pstream, "        <DataArray type=\"Float32\" NumberOfComponents=\"3\" format=\"%s\">\n", format.c_str());
	for (size_t i = 0; i < node_coordinates.size(); i++)
	{
		fprintf(pstream, "        %.16g %.16g %.16g \n", node_coordinates[i][0], node_coordinates[i][1], node_coordinates[i][2]);
	}
    fprintf(pstream, "        </DataArray>\n");
    fprintf(pstream, "      </Points>\n");
	
    fprintf(pstream, "      <Cells>\n");
	
	// element nodes
    fprintf(pstream, "        <DataArray type=\"Int32\" Name=\"connectivity\" format=\"%s\">\n", format.c_str());
	int inner_count = 0;
	for (size_t i = 0; i < elements.size(); i++)
	{
		fprintf(pstream, "        ");
		for (size_t j = 0; j < elements[i].nodes.size(); j++)
		{
			fprintf(pstream, " %i ", elements[i].nodes[j]);
		}
		fprintf(pstream, " \n");
	}
    fprintf(pstream, "        </DataArray>\n");

	// element offsets
    fprintf(pstream, "        <DataArray type=\"Int32\" Name=\"offsets\" format=\"%s\">\n      ", format.c_str());
	inner_count = 0;
	size_t offset = 0;
	for (size_t i = 0; i < elements.size(); i++)
	{
		if (inner_count == 7)
		{
			fprintf(pstream, " \n        ");
            inner_count = 0;
		}
		offset += elements[i].nodes.size();
		fprintf(pstream, " %zu ", offset);
		inner_count++;
	}
	fprintf(pstream, "\n        </DataArray>\n");
	
	// element types
    fprintf(pstream, "        <DataArray type=\"Int32\" Name=\"types\" format=\"%s\">\n      ", format.c_str());
	inner_count = 0;
	for (size_t i = 0; i < elements.size(); i++)
	{
		if (inner_count == 7)
		{
			fprintf(pstream, " \n        ");
            inner_count = 0;
		}
		fprintf(pstream, " %i ", elements[i].type);
		inner_count++;
	}
    fprintf(pstream, "\n        </DataArray>\n");
	
    fprintf(pstream, "      </Cells>\n");
	
	
	// nodal result data
    fprintf(pstream, "      <PointData>\n");
	inner_count = 0;
	for(size_t iData = 0; iData < point_data.size(); iData++)
	{
		
        fprintf(pstream, "        <DataArray type=\"Float32\" Name=\"%s\" format=\"%s\" NumberOfComponents=\"%i\">\n      ", point_data[iData].name, format.c_str(), point_data[iData].data_size);
		//loop over all points
		for(size_t iPoint = 0; iPoint < node_map.size(); iPoint++)
		{
			// for each geometrical point there can be multiple values (vector/tensor...)
	        for(int iVal = 0; iVal < point_data[iData].data_size; iVal++)
		    {
			    if (inner_count == 7)
		        {
					fprintf(pstream, " \n        ");
				    inner_count = 0;
		    	}
				fprintf(pstream, " %.16g ", point_data[iData].data[iPoint][iVal]);
		        inner_count++;
		    }	
		}

        fprintf(pstream, "\n        </DataArray>\n");
	}
    fprintf(pstream, "      </PointData>\n");
		
    fprintf(pstream, "    </Piece>\n");
    fprintf(pstream, "  </UnstructuredGrid>\n");
    fprintf(pstream, "</VTKFile>\n");

  //  fprintf(pstream, " %.i %.16g \n", PE->NumNodes[iNode],  PE->Value[iNode].Val[0]);

}
