// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GETDP_H_
#define _GETDP_H_

#include <string>
#include <vector>

int GetDP(const std::vector<std::string> &args, void *ptr=NULL);
void GetDPClearNumbers();
void GetDPSetNumber(const std::string &name, double value);
void GetDPSetNumber(const std::string &name, const std::vector<double> &value);
std::vector<double> &GetDPGetNumber(const std::string &name);
void GetDPClearStrings();
void GetDPSetString(const std::string &name, const std::string &value);
void GetDPSetString(const std::string &name, const std::vector<std::string> &value);
std::vector<std::string> &GetDPGetString(const std::string &name);

#endif
