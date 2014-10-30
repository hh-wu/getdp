key = (input[0], input[1]) # element num, quadrature point index

output = [ dhdbxx_table[key], dhdbxy_table[key], 0.,
           dhdbyx_table[key], dhdbyy_table[key], 0.,
           0.,                0.,                0.]
