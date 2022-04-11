#include <sstream>
#include <iostream>
#include "Pos_PrintExternal.h"
#include "Pos_Formulation.h"
#include "Message.h"
#include "Get_DofOfElement.h"
#include "DofData.h"
#include "GeoData.h"
#include "ExtendedGroup.h"
#include "Get_Geometry.h"
#include "Cal_PostQuantity.h"
#include <type_traits>
#include "VTUExternalData.h"
#include "EnsightExternalData.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;
extern char *Name_Path;
/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t V T U                                       */
/* ------------------------------------------------------------------------ */

void  Pos_PrintExternal(struct PostProcessing    *      PostProcessing_P,
			int                       Order,
			struct DefineQuantity    *DefineQuantity_P0,
			struct QuantityStorage   *QuantityStorage_P0,
			struct PostSubOperation  *PSO_P)
{  				
    PostExternalData* post_data;
    
	if (PSO_P->Format == FORMAT_VTU)
		post_data = new VTUExternalData();
	else if (PSO_P->Format == FORMAT_ENSIGHT)
		post_data = new EnsightExternalData();
	else
	{
		Message::Error("Unknown format ", PSO_P->Format);  // is this needed? Should be checked at parsing?!
		return;
	}
	
	if (PSO_P->Binary == 1)
		post_data->wtype = PostExternalData::WriteType::BINARY;
	else
		post_data->wtype = PostExternalData::WriteType::ASCII;

	
    // Fill post_data with elements and nodes
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

        for(int iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++) 
		{
			struct PostElement  * PE = *(struct PostElement **)List_Pointer(PostElement_L, iPost) ;
			post_data->addElement(PE);
			Destroy_PostElement(PE) ;
		}
		
	}

    // outer time loop
	struct PostQuantity * PostQuantity_P;
    
	for(int iTime = 0; iTime < Pos_InitTimeSteps(PSO_P); iTime++) 
	{
        Pos_InitAllSolutions(PSO_P->TimeStep_L, iTime);

		TimeStepData tdata;
		tdata.time_step = Current.TimeStep;
		tdata.time_value = Current.Time;
        tdata.freq_value = Current.Frequency;

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

					for(int iNode = 0 ; iNode < PE->NbrNodes ; iNode++)
					{
						Current.x = PE->x[iNode] ;
						Current.y = PE->y[iNode] ;
						Current.z = PE->z[iNode] ;
						Cal_PostQuantity(PostQuantity_P, DefineQuantity_P0, QuantityStorage_P0,
						   NULL, &Element,
						   PE->u[iNode], PE->v[iNode], PE->w[iNode], &PE->Value[iNode]);

						pd_set.setValueType(PE->Value[0].Type);
						std::vector<double> data_point(PE->Value[iNode].Val, PE->Value[iNode].Val + pd_set.data_size);
						pd_set.addData(post_data->node_map[PE->NumNodes[iNode]], data_point);

					}

					Destroy_PostElement(PE) ;
				}

			List_Delete(PostElement_L);
			} /* for iGeo */
			
			tdata.point_data.push_back(pd_set);
		}
		post_data->data_sets.push_back(tdata);
	}

	std::string filename = Fix_RelativePath(PSO_P->FileOut, Name_Path);
	post_data->write(filename);

    delete post_data;

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



