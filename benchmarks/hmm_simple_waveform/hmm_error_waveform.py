# Compute the difference between two successive WR iterations

import os

tolerance =  input[0]
WR_iteration =  input[1]


if (WR_iteration > 1):
    key = bx_table.keys()
    key.sort()
    for k in key:
        delta_bx[k] = abs(bx_table[k] - bx_old_table[k])
        delta_by[k] = abs(by_table[k] - by_old_table[k])
        delta_bz[k] = abs(bz_table[k] - bz_old_table[k])
        
        delta_dtax[k] = abs(dtax_table[k] - dtax_old_table[k])
        delta_dtay[k] = abs(dtay_table[k] - dtay_old_table[k])
        delta_dtaz[k] = abs(dtaz_table[k] - dtaz_old_table[k])
        
        delta_dtbx[k] = abs(dtbx_table[k] - dtbx_old_table[k])
        delta_dtby[k] = abs(dtby_table[k] - dtby_old_table[k])
        delta_dtbz[k] = abs(dtbz_table[k] - dtbz_old_table[k])
    
        # Compute the L^{inf}(0, T; L^{inf}(Omega) ) norm
        #================================================
    max_bx = max(delta_bx.values())
    max_by = max(delta_by.values())
    max_bz = max(delta_bz.values())
    
    max_dtax = max(delta_dtax.values())
    max_dtay = max(delta_dtay.values())
    max_dtaz = max(delta_dtaz.values())
    
    max_dtbx = max(delta_dtbx.values())
    max_dtby = max(delta_dtby.values())
    max_dtbz = max(delta_dtbz.values())
    
    max_values = [max_bx, max_by, max_bz]
    #max_values = [max_dtax, max_dtay, max_dtaz]
    #max_values = [max_dtbx, max_dtby, max_dtbz]
    #max_values = [max_bx, max_by, max_bz, max_dtax, max_dtay, max_dtaz, max_dtbx, max_dtby, max_dtbz]
    max_values.sort()
    
    L_inf_norm = max_values[len(max_values)-1]
    
    print 'The computed L_Inf_norm value is ' + str(L_inf_norm) + ' and the tolerance is ' + str(tolerance)

file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"
if (WR_iteration == 0):
    f = open(file_dir + "Waveform_Relaxation_Error.txt", "w")
    f.write("WR iteration " + str(0) + "\n")
    output = (True)
if (WR_iteration == 1):
    f = open(file_dir + "Waveform_Relaxation_Error.txt", "a")
    f.write("WR iteration " + str(1) + "\n")
    output = (True)
elif (WR_iteration > 1):
    f = open(file_dir + "Waveform_Relaxation_Error.txt", "a")
    f.write(str(WR_iteration) + "\t" + str(L_inf_norm) + "\n")
    output = (L_inf_norm > tolerance)


#output = (L_inf_norm > tolerance)
#output = (True)

