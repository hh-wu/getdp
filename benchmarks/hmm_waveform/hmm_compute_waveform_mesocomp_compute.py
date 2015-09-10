# Build lists of downscaled quantities per key
#=============================================
if (Flag_meso_comp == 0):
    first_index = 0
else:
    first_index = 1
list_time = '0'
list_ax = '0'
list_ay = '0'
list_az = '0'
list_bx = '0'
list_by = '0'
list_bz = '0'
list_dtax = '0'
list_dtay = '0'
list_dtaz = '0'
list_dtbx = '0'
list_dtby = '0'
list_dtbz = '0'
for j in range(first_index,len_time): 
    getdp_list_key = (key[0], key[1], time_table[j+1])
    list_time += " " + str(time_table[j+1])
    list_ax += " " + str(ax_table[getdp_list_key])
    list_ay += " " + str(ay_table[getdp_list_key])
    list_az += " " + str(az_table[getdp_list_key])
    list_bx += " " + str(bx_table[getdp_list_key])
    list_by += " " + str(by_table[getdp_list_key])
    list_bz += " " + str(bz_table[getdp_list_key])
    list_dtax += " " + str(dtax_table[getdp_list_key])
    list_dtay += " " + str(dtay_table[getdp_list_key])
    list_dtaz += " " + str(dtaz_table[getdp_list_key])
    list_dtbx += " " + str(dtbx_table[getdp_list_key])
    list_dtby += " " + str(dtby_table[getdp_list_key])
    list_dtbz += " " + str(dtbz_table[getdp_list_key])

print 'Done solving for mesoscale problems ' + str(key[0])
#file_name = ""
#if (which_time_window != 1):
file_name      = "res_meso/az_pert_Prob_Elenum%g_TW%g_Init.pos" % (key[0], (which_time_window - 1) ) # used with GmshRead
args.extend([file_dir + "getdp.sh", file_dir + "smc_meso_waveform", 
            "-bin", "-v", "2", "-solve", "a_NR", 
            "-pos", "mean map_field map_field_Init ",
            "-setnumber", "Flag_Dynamic", str(flag_dynamic),
            "-setnumber", "Freq", str(freq),
            "-setnumber", "t_0", str(t_0),
            "-setnumber", "t_end", str(t_end),
            "-setnumber", "dt_Macro", str(dt_Macro),
            "-setnumber", "NbSteps", str(nb_steps),
            "-setlist", "TIMEVEC "  + str(len_time), str(list_time),
            "-setlist", "AX " + str(len_time), str(list_ax),
            "-setlist", "AY " + str(len_time), str(list_ay),
            "-setlist", "AZ " + str(len_time), str(list_az),
            "-setlist", "BX " + str(len_time), str(list_bx),
            "-setlist", "BY " + str(len_time), str(list_by),
            "-setlist", "BZ " + str(len_time), str(list_bz),
            "-setlist", "DTAX " + str(len_time), str(list_dtax),
            "-setlist", "DTAY " + str(len_time), str(list_dtay),
            "-setlist", "DTAZ " + str(len_time), str(list_dtaz),
            "-setlist", "DTBX " + str(len_time), str(list_dtbx),
            "-setlist", "DTBY " + str(len_time), str(list_dtby),
            "-setlist", "DTBZ " + str(len_time), str(list_dtbz),                         
            "-setnumber", "ELENUM", str(key[0]),
            "-setnumber", "QPINDEX", str(key[1]),
            "-setnumber", "Flag_meso_comp", str(Flag_meso_comp),
            "-gmshread", file_name,
            "-setnumber", "which_time_window", str(which_time_window),
            "-setnumber", "which_wr_iteration", str(which_wr_iteration),
            "-setnumber", "Flag_WR_meso", str(Flag_WR_meso)])
cpus[i] = subprocess.Popen(args)
