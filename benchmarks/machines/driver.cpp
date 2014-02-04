// This example shows how to call getdp/gmsh from a C++ code with direct access
// to the onelab database. (The same basic principle can be used to create a
// C++-based optimizer driving onelab clients.)
//
// 1) compile with "g++ driver.cpp -o driver.exe" (You need two additional
//    header files: onelab.h and GmshSocket.h from the Gmsh/GetDP source code)
// 2) Run the code by opening it with Gmsh: either interactively (with
//    'File->Open') or in batch mode (with 'gmsh driver.exe -')

#include <stdio.h>
#include "onelab.h"

std::string defineString(onelab::client *c, const std::string &name,
                         const std::string &value)
{
  std::vector<onelab::string> ns;
  c->get(ns, name);
  if(ns.empty()){ // define new parameter
    onelab::string n(name, value);
    c->set(n);
    return value;
  }
  // return value from server
  return ns[0].getValue();
}

int main(int argc, char **argv)
{
  if(argc < 2){
    printf("Usage: %s -onelab address\n", argv[0]);
    exit(0);
  }

  std::string name, address;
  for(int i = 0; i < argc; i++){
    if(std::string(argv[i]) == "-onelab" && i + 2 < argc){
      name = std::string(argv[i + 1]);
      address = std::string(argv[i + 2]);
    }
  }

  if(name.empty() || address.empty()) return 1;

  // create a new onelab client
  onelab::remoteNetworkClient *c = new onelab::remoteNetworkClient(name, address);

  // create a onelab variable for the model name
  std::string machine = defineString(c, "Machine model", "pmsm");

  std::string action;
  std::vector<onelab::string> ns;
  c->get(ns, name + "/Action");
  if(ns.size()) action = ns[0].getValue();

  // we're done if we don't do the actual calculation
  if(action != "compute"){
    delete c;
    return 0;
  }

  // change the angle of the rotor and compute the torque for each one
  for(double angle = 0; angle <= 30; angle += 10){
    onelab::number n("Input/21Start rotor angle [deg]", angle);
    c->set(n);

    // run gmsh as a subclient
    c->runSubClient("myGmsh", std::string("gmsh ") + machine + ".geo -2 -v 2");

    // run getdp as a subclient
    c->runSubClient("myGetDP", std::string("getdp ") + machine +
                    " -setnumber Flag_PrintFields 0 -msh " +
                    machine + ".msh" + " -solve Analysis -v 2");

    // retrieve the torque
    std::vector<onelab::number> ns;
    c->get(ns, "Output - Mechanics/0Torque [Nm]/rotor");
    double torque = 0;
    if(ns.size()) torque = ns[0].getValue();

    printf("Torque=%g for angle=%g\n", torque, angle);
  }

  delete c;

  return 0;
}
