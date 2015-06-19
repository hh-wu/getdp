print("Python: initializing HMM tables");

if (input[0] == 0): # sorting the material law
    (dhdbxx_table.keys()).sort()
    (dhdbxy_table.keys()).sort()
    (dhdbxz_table.keys()).sort()
    (dhdbyx_table.keys()).sort()
    (dhdbyy_table.keys()).sort()
    (dhdbyz_table.keys()).sort()
    (dhdbzx_table.keys()).sort()
    (dhdbzy_table.keys()).sort()
    (dhdbzz_table.keys()).sort()
    (dhdbxx_old_table.keys()).sort()

elif (input[0] == 1): # sorting the downscaled quantities
    (bx_table.keys()).sort()
    (by_table.keys()).sort()
    (bz_table.keys()).sort()
    (bx_old_table.keys()).sort()
    (by_old_table.keys()).sort()
    (bz_old_table.keys()).sort()
    
