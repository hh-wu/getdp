#!/usr/bin/env python

# This script shows how to call getdp/gmsh from python with direct access to the
# onelab database. (The same basic principle can be used to create a python-based
# optimizer driving onelab clients.)

# You should run the script by opening it with Gmsh: either interactively (with
# 'File->Open') or in batch mode (with 'gmsh driver.py -')

# import the onelab python module
import onelab

# create a new onelab client
c = onelab.client(__file__)

# get Gmsh and GetDP locations from Gmsh options
mygmsh = c.getString('General.ExecutableFileName')
mygetdp = ''
for s in range(9):
   n = c.getString('Solver.Name' + str(s))
   if(n == 'GetDP'):
      mygetdp = c.getString('Solver.Executable' + str(s))
      break
if(not len(mygetdp)):
   c.sendError('This appears to be the first time you are trying to run GetDP')
   c.sendError('Please run a GetDP model interactively once with Gmsh to ' +
               'initialize the solver location')
   exit(0)

c.sendInfo('Will use gmsh={0} and getdp={1}'.format(mygmsh, mygetdp))

# create a onelab variable for the model name
machine = c.defineString('Machine model', value='pmsm')

# we're done if we don't do the actual calculation
if c.action == 'check' :
   exit(0)

# get model file names with correct path
machine_geo = c.getPath(machine + '.geo')
machine_msh = c.getPath(machine + '.msh')
machine_pro = c.getPath(machine + '.pro')

# change the angle of the rotor and compute the torque for each one
angles = [0, 10, 20, 30]
for angle in angles:
   c.setNumber('Input/21Start rotor angle [deg]', value=angle)
   
   # run gmsh as a subclient
   c.runSubClient('myGmsh', mygmsh + ' ' + machine_geo + ' -2 -v 2')
   
   # run getdp as a subclient
   c.runSubClient('myGetDP',  mygetdp + ' ' + machine_pro +
                  ' -msh ' + machine_msh +
                  ' -setnumber Flag_PrintFields 0 -solve Analysis -v 2')
   
   # retrieve the torque
   torque = c.getNumber('Output - Mechanics/0Torque [Nm]/rotor')

   c.sendInfo('Torque={0} for angle={1}'.format(torque, angle))
   
