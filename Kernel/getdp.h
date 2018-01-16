// GetDP - Copyright (C) 1997-2018 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GETDP_H_
#define _GETDP_H_

#include <string>
#include <vector>

int getdp(const std::vector<std::string> &args, void *ptr=NULL);
void getdpClearNumbers();
void getdpSetNumber(const std::string &name, double value);
void getdpSetNumber(const std::string &name, const std::vector<double> &value);
std::vector<double> &getdpGetNumber(const std::string &name);
void getdpClearStrings();
void getdpSetString(const std::string &name, const std::string &value);
void getdpSetString(const std::string &name, const std::vector<std::string> &value);
std::vector<std::string> &getdpGetString(const std::string &name);

#endif
