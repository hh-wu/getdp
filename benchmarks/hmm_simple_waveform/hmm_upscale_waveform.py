import math

#TS = math.fmod(input[2], num_TS)
TS = (input[2] % (num_TS + 1) ) + 1


key = (input[0], input[1], TS) # element num, quadrature point index and time instant

field = input[3]

if field == 0:
    output = [ hx_table[key], hy_table[key], hz_table[key] ];
elif field == 1:
    output = [ dhdbxx_table[key], dhdbxy_table[key], dhdbxz_table[key],
               dhdbyx_table[key], dhdbyy_table[key], dhdbyz_table[key],
               dhdbzx_table[key], dhdbzy_table[key], dhdbzz_table[key]]
elif field == 2:
    output = MagneticEnergy_table[key];
elif field == 3:
    output = JouleLosses_table[key];
