key = (input[0], input[1]) # element num, quadrature point index

field = input[2]

if field == 0:
    output = [ hx_table[key], hy_table[key], 0. ];
elif field == 1:
    output = [ dhdbxx_table[key], dhdbxy_table[key], 0.,
               dhdbyx_table[key], dhdbyy_table[key], 0.,
               0.,                0.,                0.]
elif field == 2:
    #output = [MagneticEnergy_table[key]];
    output = [0., 0., MagneticEnergy_table[key]];
elif field == 3:
    #output = [JouleLosses_table[key]];
    output = [0., 0., JouleLosses_table[key]];
