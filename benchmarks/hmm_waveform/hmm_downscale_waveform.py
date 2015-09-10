Time = round(input[2]+5e-13, 11) 


#key = (input[0], input[1], input[2]) # element num, quadrature point index
key = (input[0], input[1], Time) # element num, quadrature point index

ax_table[key] = input[3]
ay_table[key] = input[4]
az_table[key] = input[5]

bx_table[key] = input[6]
by_table[key] = input[7]
bz_table[key] = input[8]

dtax_table[key] = input[9]
dtay_table[key] = input[10]
dtaz_table[key] = input[11]

dtbx_table[key] = input[12]
dtby_table[key] = input[13]
dtbz_table[key] = input[14]


#key = (input[0], input[1]) # element num, quadrature point index
#
#ax_table[key] = input[2]
#ay_table[key] = input[3]
#az_table[key] = input[4]
#
#bx_table[key] = input[5]
#by_table[key] = input[6]
#bz_table[key] = input[7]
#
#dtax_table[key] = input[8]
#dtay_table[key] = input[9]
#dtaz_table[key] = input[10]
#
#dtbx_table[key] = input[11]
#dtby_table[key] = input[12]
#dtbz_table[key] = input[13]
