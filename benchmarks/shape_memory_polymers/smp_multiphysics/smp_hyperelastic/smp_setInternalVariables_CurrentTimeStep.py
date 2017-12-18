#from numpy import matrix as mat

key = (input[0], input[1]) # element num, quadrature point index

# the frozen deformation gradient F_tot_Current{i-1}
#===================================================
F_tot_Current[key] = [ [input[2], input[3],  input[4] ],
                       [input[5], input[6],  input[7] ],
                       [input[8], input[9], input[10] ] ]

# the temperature Theta_{i-1}
#============================
Theta_Current[key] = input[11]
