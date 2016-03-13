// GetDP - Copyright (C) 1997-2016 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GETDP_H_
#define _GETDP_H_

#include <string>
#include <vector>

int GetDP(const std::vector<std::string> &args, void *ptr=NULL);
void GetDPClearNumbers();
void GetDPSetNumber(const std::string &name, const std::vector<double> &value);
void GetDPGetNumber(const std::string &name, std::vector<double> &value);
void GetDPClearStrings();
void GetDPSetString(const std::string &name, const std::vector<std::string> &value);
void GetDPGetString(const std::string &name, std::vector<std::string> &value);

#endif
