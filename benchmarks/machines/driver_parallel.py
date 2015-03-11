#!/usr/bin/env python

# This script shows how to call getdp/gmsh from python with direct access to the
# onelab database. (The same basic principle can be used to create a python-based
# optimizer driving onelab clients.)

# You should run the script by opening it with Gmsh: either interactively (with
# 'File->Open') or in batch mode (with 'gmsh driver_parallel.py -')

# import the onelab python module
import onelab

# create a new onelab client
c = onelab.client()

# create a onelab variable for the model name
machine = c.defineString('Machine model', value='pmsm')

# we're done if we don't do the actual calculation
if c.action == 'check' :
   exit(0)

angles = [0, 10, 20, 30] # range(0,21)

# change the angle of the rotor and mesh for each one in //
for angle in angles:
   tag = 'angle' + str(angle)
   msh = machine + '_' + tag + '.msh'
   c.setNumber(tag + '/Input/21Start rotor angle [deg]', value=angle)
   # run gmsh as a non-blocking subclient
   c.runNonBlockingSubClient('myGmsh', 'gmsh -setstring ResId ' + tag + '/ ' + 
                             machine + '.geo -2 -v 2 -o ' + msh)
   
c.waitOnSubClients()

# change the angle of the rotor and compute the torque for each one in //
for angle in angles:
   tag = 'angle' + str(angle)
   msh = machine + '_' + tag + '.msh'
   # run getdp as a non-blocking subclient
   c.runNonBlockingSubClient('myGetDP', 'getdp -setstring ResId ' + tag + '/ ' + 
                             '-setnumber Flag_PrintFields 0 ' +
                             machine + ' -msh ' + msh + ' -solve Analysis -v 2')

c.waitOnSubClients()

for angle in angles:
   tag = 'angle' + str(angle)
   # retrieve the torque
   torque = c.getNumber('Output - Mechanics/' + tag + '/0Torque [Nm]/rotor')
   print('Torque={0} for angle={1}'.format(torque, angle))
   
