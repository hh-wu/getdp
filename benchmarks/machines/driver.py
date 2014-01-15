#!/usr/bin/env python

# This script shows how to call getdp/gmsh from python with direct access to the
# onelab database. (The same basic principle can be used to create a python-based
# optimizer driving onelab clients.)

# You should run the script by opening it with Gmsh: either interactively (with
# 'File->Open') or in batch mode (with 'gmsh driver.py -')

# import the onelab python module
import onelab

# create a new onelab client
c = onelab.client()

# create a onelab variable for the model name
machine = c.defineString('Machine model', value='pmsm')

# we're done if we don't do the actual calculation
if c.action == 'check' :
   exit(0)

# change the angle of the rotor and compute the torque for each one
for angle in [0, 10, 20]:
   c.setNumber('Input/21Start rotor angle [deg]', value=angle)
   
   # run gmsh as a subclient
   c.run('Gmsh', 'gmsh ' + machine + '.geo -2 -v 2')
   
   # run getdp as a subclient
   c.run('GetDP', 'getdp ' + machine + ' -msh ' + machine + '.msh' + ' -solve Analysis -v 2')
   
   # retrieve the torque
   torque = c.getNumber('Output - Mechanics/0Torque [Nm]/rotor')

   print('Torque={0} for angle={1}'.format(torque, angle))
   
