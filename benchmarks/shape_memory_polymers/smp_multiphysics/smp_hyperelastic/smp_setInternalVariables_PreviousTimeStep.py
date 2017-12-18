from numpy import matrix as mat

key = (input[0], input[1]) # element num, quadrature point index

# the temperature Theta_{i-1}
#============================
Theta_Previous[key] = input[2]

# the frozen deformation gradient F_f_Previous_{i-1}
#===================================================
F_f_Previous[key] = [ [input[3], input[4],  input[5] ],
                      [input[6], input[7],  input[8] ],
                      [input[9], input[10], input[11] ] ] 

# the frozen permanent gradient F_p_Previous_{i-1}
#=================================================
F_p_Previous[key] = [ [input[12], input[13], input[14] ],
                      [input[15], input[16], input[17] ],
                      [input[18], input[19], input[20] ] ] 

# the glassy plastic deformation gradient F_pg_Previous_{i-1}
#============================================================
F_pg_Previous[key] = [ [input[21], input[22], input[23] ],
                       [input[24], input[25], input[26] ],
                       [input[27], input[28], input[29] ] ] 
