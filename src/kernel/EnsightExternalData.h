#pragma once

#include "PostExternalData.h"

class EnsightExternalData: public PostExternalData
{
private:
		
   
public:
    EnsightExternalData();
    ~EnsightExternalData();

	void write(std::string fname) override;

};
