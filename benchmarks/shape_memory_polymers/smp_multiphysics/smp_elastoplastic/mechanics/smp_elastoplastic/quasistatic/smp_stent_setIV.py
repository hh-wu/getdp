from numpy import matrix as mat

key = (input[0], input[1]) # element num, quadrature point index

if (input[2] == 0):

    # the temperature Theta_{i-1}
    #============================
    Theta_Previous[key] = input[3]
    
    # the frozen deformation gradient F_f_Previous_{i-1}
    #===================================================
    F_f_Previous[key] = [ [input[4], input[5],  input[6] ],
                          [input[7], input[8],  input[9] ],
                          [input[10], input[11], input[12] ] ] 
    
    # the frozen permanent gradient F_p_Previous_{i-1}
    #=================================================
    F_pg_Previous[key] = [ [input[13], input[14], input[15] ],
                           [input[16], input[17], input[18] ],
                           [input[19], input[20], input[21] ] ] 
    
    # the glassy plastic deformation gradient F_pg_Previous_{i-1}
    #============================================================
    F_p_Previous[key] = [ [input[22], input[23], input[24] ],
                          [input[25], input[26], input[27] ],
                          [input[28], input[29], input[30] ] ]
else:
    #from numpy import matrix as mat
    
    key = (input[0], input[1]) # element num, quadrature point index
    
    # the frozen deformation gradient F_tot_Current{i-1}
    #===================================================
    F_tot_Current[key] = [ [input[3], input[4],  input[5] ],
                           [input[6], input[7],  input[8] ],
                           [input[9], input[10], input[11] ] ]
    
    # the temperature Theta_{i-1}
    #============================
    Theta_Current[key] = input[12]
    TimeStep_Current = input[13]
