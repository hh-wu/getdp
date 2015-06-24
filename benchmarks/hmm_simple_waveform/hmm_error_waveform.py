# Compute the difference between two successive WR iterations

import os

tolerance =  input[0]
WR_iteration =  input[1]
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

if (WR_iteration == 1):
    key = bx_table.keys()
    key.sort()
    for k in key:
        delta_bx[k] = abs(bx_table[k])
        delta_by[k] = abs(by_table[k])
        delta_bz[k] = abs(bz_table[k])
        
        delta_dtax[k] = abs(dtax_table[k])
        delta_dtay[k] = abs(dtay_table[k])
        delta_dtaz[k] = abs(dtaz_table[k])
        
        delta_dtbx[k] = abs(dtbx_table[k])
        delta_dtby[k] = abs(dtby_table[k])
        delta_dtbz[k] = abs(dtbz_table[k])
        
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
if (WR_iteration > 0):
    # Compute the L^{inf}(0, T; L^{inf}(Omega) ) norm
    #================================================
    max_bx = max(bx_table.values())
    max_by = max(by_table.values())
    max_bz = max(bz_table.values())
    
    max_dtax = max(dtax_table.values())
    max_dtay = max(dtay_table.values())
    max_dtaz = max(dtaz_table.values())
    
    max_dtbx = max(dtbx_table.values())
    max_dtby = max(dtby_table.values())
    max_dtbz = max(dtbz_table.values())

    max_delta_bx = max(delta_bx.values())
    max_delta_by = max(delta_by.values())
    max_delta_bz = max(delta_bz.values())
    
    max_delta_dtax = max(delta_dtax.values())
    max_delta_dtay = max(delta_dtay.values())
    max_delta_dtaz = max(delta_dtaz.values())
    
    max_delta_dtbx = max(delta_dtbx.values())
    max_delta_dtby = max(delta_dtby.values())
    max_delta_dtbz = max(delta_dtbz.values())

    max_max_b = [max_delta_bx, max_delta_by, max_delta_bz]
    max_max_dta = [max_delta_dtax, max_delta_dtay, max_delta_dtaz]
    max_max_dtb = [max_delta_dtbx, max_delta_dtby, max_delta_dtbz]

    if (WR_iteration == 1):
        WR_Abs_L_inf_b_0   = max(max_max_b)
        WR_Abs_L_inf_dta_0 = max(max_max_dta)
        WR_Abs_L_inf_dtb_0 = max(max_max_dtb)
    WR_Abs_L_inf_b   = max(max_max_b)
    WR_Abs_L_inf_dta = max(max_max_dta)
    WR_Abs_L_inf_dtb = max(max_max_dtb)

    WR_Rel_L_inf_b   = WR_Abs_L_inf_b/WR_Abs_L_inf_b_0
    WR_Rel_L_inf_dta = WR_Abs_L_inf_dta/WR_Abs_L_inf_dta_0
    WR_Rel_L_inf_dtb = WR_Abs_L_inf_dtb/WR_Abs_L_inf_dtb_0

    print 'Tolerance = ' + str(tolerance)
    print 'W_Rel_L_inf_norm_b = '   + str(WR_Rel_L_inf_b) 
    print 'W_Rel_L_inf_norm_dta = ' + str(WR_Rel_L_inf_dta) 
    print 'W_Rel_L_inf_norm_dtb = ' + str(WR_Rel_L_inf_dtb) 

    if (WR_iteration == 0):
        f = open(file_dir + "WR_Rel_L_inf_b.txt", "w")
        f.write("WR iteration " + str(WR_Rel_L_inf_b) + "\n")
        f = open(file_dir + "WR_Rel_L_inf_dta.txt", "w")
        f.write("WR iteration " + str(WR_Rel_L_inf_dta) + "\n")
        f = open(file_dir + "WR_Rel_L_inf_dtb.txt", "w")
        f.write("WR iteration " + str(WR_Rel_L_inf_dtb) + "\n")
        output = (True)
    if (WR_iteration != 0):
        f = open(file_dir + "WR_Rel_L_inf_b.txt", "a")
        f.write("WR iteration " + str(WR_Rel_L_inf_b) + "\n")
        f = open(file_dir + "WR_Rel_L_inf_dta.txt", "a")
        f.write("WR iteration " + str(WR_Rel_L_inf_dta) + "\n")
        f = open(file_dir + "WR_Rel_L_inf_dtb.txt", "a")
        f.write("WR iteration " + str(WR_Rel_L_inf_dtb) + "\n")
        output = ((WR_Rel_L_inf_b > tolerance) or (WR_Rel_L_inf_dta > tolerance) or (WR_Rel_L_inf_dtb > tolerance))
