Time = round(input[2]+5e-13, 11) 


#key = (input[0], input[1], input[2]) # element num, quadrature point index
key = (input[0], input[1], Time) # element num, quadrature point index

field = input[3]

if field == 0:
    output = [ hx_table[key], hy_table[key], hz_table[key] ];
elif field == 1:
    output = [ dhdbxx_table[key], dhdbxy_table[key], dhdbxz_table[key],
               dhdbyx_table[key], dhdbyy_table[key], dhdbyz_table[key],
               dhdbzx_table[key], dhdbzy_table[key], dhdbzz_table[key]]
elif field == 2:
    output = MagneticPower_table[key];
elif field == 3:
    output = MagneticEnergy_table[key];
elif field == 4:
    output = JouleLosses_table[key];
