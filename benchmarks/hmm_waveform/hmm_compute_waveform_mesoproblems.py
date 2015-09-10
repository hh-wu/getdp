import subprocess
import sys
import os
import time
import socket
import math

nbr_subproblems = input[0]
flag_dynamic = input[1]
freq = input[2]
nb_steps = input[3]
postpro_cuts = input[4]
t_0 = input[5]
t_end = input[6]
dt_Macro = input[7]
Flag_WR_meso = input[8]
Flag_meso_comp = input[9]

time_table_keys = time_table.keys()
keys = bx_table.keys()
keys.sort()

#===============================================================
len_time = len(time_table)
len_tables = len(bx_table)
num_mesoproblems = len_tables/len_time
keys_new = []
for i in range(0, num_mesoproblems):
    keys_new.append(((keys[(i)*len_time])[0],(keys[(i)*len_time])[1]))
keys_new.sort()
#===============================================================

#nkeys = len(keys)
nkeys = len(keys_new)
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

if os.path.isfile(file_dir + "nodes_pbs.txt"):
    filename = file_dir + "nodes_pbs"
    ssh = "pbsdsh"
elif os.path.isfile(file_dir + "nodes_slurm.txt"):
    filename = file_dir + "nodes_slurm"
    ssh = "srun"
elif os.path.isfile(file_dir + "nodes_ssh.txt"):
    filename = file_dir + "nodes_ssh"
    ssh = "ssh"
else:
    filename = None
    ssh = None

if filename:
    f = open(filename + ".txt")
    nodes = f.readlines()
    ncpus = len(nodes)
    f.close()
else:
    ncpus = 16
    nodes = ["localhost" for x in range(ncpus)]
    f = open(file_dir + "getdp.sh", "w")
    f.write("#!/bin/sh\n{0} $*\n".format(sys.argv[0])) # same getdp as for macro computation
    f.close()
    os.chmod(file_dir + "getdp.sh", 0755)

print("Python: running {0} meso calculations on {1} CPUs".format(nkeys, ncpus))
queue = set(keys_new)
#queue = set(keys)
cpus = ['' for cpu in range(ncpus)]
while len(queue):
    for i, cpu in enumerate(cpus):
        # check if cpu is busy
        if cpu:
            cpus[i].poll()
        # if not busy, launch new calculation
        if not cpu or cpu.returncode != None:
            key = queue.pop()
            args = [];
            if ssh:
                node = nodes[i].strip()
                args.extend([ssh])
                if "pbsdsh" in ssh:
                    args.extend(["-n", str(i), "--"])
                elif "srun" in ssh:
                    args.extend(["-N", "1", "-n", "1", "-w", node])
                else:
                    args.extend([node])
#=========================================================================================                    
            if (Flag_WR_meso != 0): # mesoscale computations
                #=============================================
                # Build lists of downscaled quantities per key
                #=============================================
                if (Flag_meso_comp == 0):
                    first_index = 0
                if (Flag_meso_comp != 0):
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
                for j in range(first_index,len_time): #only difference from line "132" is 'j = 0:len_time'
                    #print key[0]
                    #print key[1]
                    #print time_table[j+1]
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
                #==================================================================
                print 'Done solving for mesoscale problems ' + str(key[0])
                args.extend([file_dir + "getdp.sh", file_dir + "smc_meso_waveform", 
                             "-bin", "-v", "2" if Flag_meso_comp != 0 else "2", "-v2", "-solve", "a_NR", 
                             #"-pos", "mean_1 mean_2 mean_3",
                             "-pos", "mean_1",
                             "" if Flag_meso_comp != 0 else "mean_2", 
                             "" if Flag_meso_comp != 0 else "mean_3", 
                             "mean_4" if nbr_subproblems == 4 else "",
                             "map_field_1",
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
                             "-setnumber", "Flag_WR_meso", str(Flag_WR_meso)])
                cpus[i] = subprocess.Popen(args)
            elif(Flag_WR_meso == 0): # mesoscale evaluations
                #=============================================
                # Build lists of downscaled quantities per key
                #=============================================
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
                for j in range(0,len_time):
                    getdp_list_key = (key[0], key[1], time_table[j+1])
                    list_time += " " + str(time_table[j+1])
                    list_bx += " " + str(bx_table[getdp_list_key])
                    list_by += " " + str(by_table[getdp_list_key])
                    list_bz += " " + str(bz_table[getdp_list_key])
                #==================================================================
                print 'Done projecting for mesoscale problems ' + str(key[0])
                file_name = "res_meso/a_pert_Prob1_Elenum%g.pos" % (key[0])
                args.extend([file_dir + "getdp.sh", file_dir + "smc_meso_waveform",
                             "-bin", "-v", "2", "-v2", "-solve", "a_NR_WR", 
                             "-pos", "mean_WR", "map_field_WR",
                             "-setnumber", "Flag_Dynamic", str(flag_dynamic),
                             "-setnumber", "Freq", str(freq),
                             "-setnumber", "t_0", str(t_0),
                             "-setnumber", "t_end", str(t_end),
                             "-setnumber", "dt_Macro", str(dt_Macro),
                             "-setnumber", "NbSteps", str(nb_steps),
                             "-setlist", "TIMEVEC "  + str(len_time), str(list_time),
                             "-setlist", "BX " + str(len_time), str(list_bx),
                             "-setlist", "BY " + str(len_time), str(list_by),
                             "-setlist", "BZ " + str(len_time), str(list_bz),                        
                             "-setnumber", "ELENUM", str(key[0]),
                             "-setnumber", "QPINDEX", str(key[1]),
                             "-gmshread", file_name,
                             "-setnumber", "Flag_WR_meso", str(Flag_WR_meso)])
                cpus[i] = subprocess.Popen(args)
                
#=========================================================================================
        if len(queue) == 0:
            break
    # little sleep so we do not use 100% CPU just for polling
    time.sleep(0.001) 

# wait for last jobs to finish (simply poll() and don't use wait() synchronously
# to avoid having zombie processes triggering the clusters' warning systems)
done = False
while not done:
    done = True
    for i, cpu in enumerate(cpus):
        if cpu and cpu.returncode == None:
            done = False
            cpus[i].poll()
    # little sleep so we do not use 100% CPU just for polling
    time.sleep(0.001)

Dir_Meso = file_dir + "res_meso/" 
#Dir_Meso = file_dir + "../../../../project/results/res_meso/"

if (Flag_meso_comp == 0):
    
    # 1. Material law and other quantities maps per element and GP
    #=============================================================
    h_1      = {}
    h_2      = {}
    h_3      = {}
    h_4      = {}
    b_1      = {}
    b_2      = {}
    b_3      = {}
    b_4      = {}
    jl       = {}
    me       = {}

    for key in keys_new: # keys_new is the number of problems
        f_h = open(Dir_Meso + "h" + str(1) + "_new_" + str(key[0]) + ".txt", "w")
        f = open(Dir_Meso + "h" + str(1) + "_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        for j in g:
            line = j.split()
            aaaa = round((float(line[0]) + 5e-13), 11)
            aaa = (aaaa/dt_Macro)
            #aaa = (float(line[0])/dt_Macro)
            if ( ( ( math.ceil(aaa) - aaa) < 5e-13) or ( ( aaa - math.floor(aaa) ) < 5e-13) ):
                f_h.write(j)
        f.close()
        f_h.close()

        f_b = open(Dir_Meso + "b" + str(1) + "_new_" + str(key[0]) + ".txt", "w")
        f = open(Dir_Meso + "b" + str(1) + "_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        for j in g:
            line = j.split()
            aaaa = round((float(line[0]) + 5e-13), 11)
            aaa = (aaaa/dt_Macro)
            if ( ( ( math.ceil(aaa) - aaa) < 5e-13) or ( ( aaa - math.floor(aaa) ) < 5e-13) ):
                f_b.write(j)
        f.close()
        f_b.close()

        f_JL = open(Dir_Meso + "JouleLosses" + "_new_" + str(key[0]) + ".txt", "w")
        f = open(Dir_Meso + "JouleLosses" + "_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        for j in g:
            line = j.split()
            aaaa = round((float(line[0]) + 5e-13), 11)
            aaa = (aaaa/dt_Macro)
            if ( ( ( math.ceil(aaa) - aaa) < 5e-13) or ( ( aaa - math.floor(aaa) ) < 5e-13) ):
                f_JL.write(j)
        f.close()
        f_JL.close()

        f_ME = open(Dir_Meso + "MagneticEnergy" + "_new_" + str(key[0]) + ".txt", "w")
        f = open(Dir_Meso + "JouleLosses" + "_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        for j in g:
            line = j.split()
            aaaa = round((float(line[0]) + 5e-13), 11)
            aaa = (aaaa/dt_Macro)
            if ( ( ( math.ceil(aaa) - aaa) < 5e-13) or ( ( aaa - math.floor(aaa) ) < 5e-13) ):
                f_ME.write(j)
        f.close()
        f_ME.close()

            

    for key in keys_new: # keys_new is the number of problems
        for i in range(nbr_subproblems):
            # Magnetic field map
            #===================
            if (i == 0):
                f = open(Dir_Meso + "h" + str(1) + "_new_" + str(key[0]) + ".txt", "r")
            elif(i != 0):
                f = open(Dir_Meso + "h" + str(i + 1) + "_" + str(key[0]) + ".txt", "r")
            g = f.readlines()
            #print 'printing the lenght of G'
            #print len(g)
            #print g
            #print 'printing the time table'
            #print time_table
            #print key[0]
            #print key[1]
            #print time_table[l_1]
            l_1 = 0
            l_2 = 0
            l_3 = 0
            l_4 = 0
            for j in g:
                line = j.split()
                #print "printing line"
                #print line
                aaa = (float(line[0])/dt_Macro)
                if (i == 0):
                    if (l_1 != 0):
                        #print key[0]
                        #print key[1]
                        #print time_table[l_1]
                        new_key = (key[0], key[1], time_table[l_1])
                        #print 'printing key'
                        #print key
                        h_1[new_key] = line[1 : len(line)]
                    l_1 += 1
                elif(i == 1):
                    if (l_2 != 0):
                        new_key = (key[0], key[1], time_table[l_2])
                        h_2[new_key] = line[1 : len(line)]
                    l_2 += 1
                elif(i == 2):
                    if (l_3 != 0):
                        new_key = (key[0], key[1], time_table[l_3])
                        h_3[new_key] = line[1 : len(line)]
                    l_3 += 1
                elif(i == 3):
                    if (l_4 != 0):
                        new_key = (key[0], key[1], time_table[k+1])
                        h_4[new_key] = line[1 : len(line)]
                    l_4 += 1
                else:
                    print "Reading the mesoproblem denoted " + str(i) + " Abort..."
                    sys.exit(0)
            f.close()
            
            # magnetic induction map
            #=======================
            if (i == 0):
                f = open(Dir_Meso + "b" + str(1) + "_new_" + str(key[0]) + ".txt", "r")
            elif(i != 0):
                f = open(Dir_Meso + "b" + str(i + 1) + "_" + str(key[0]) + ".txt", "r")
            g = f.readlines()
            l_1 = 0
            l_2 = 0
            l_3 = 0
            l_4 = 0
            for j in g:
                line = j.split()
                aaa = (float(line[0])/dt_Macro)
                if (i == 0):
                    if (l_1 != 0):
                        new_key = (key[0], key[1], time_table[l_1])
                        b_1[new_key] = line[1 : len(line)]
                    l_1 += 1
                elif(i == 1):
                    if (l_2 != 0):
                        new_key = (key[0], key[1], time_table[l_2])
                        b_2[new_key] = line[1 : len(line)]
                    l_2 += 1
                elif(i == 2):
                    if (l_3 != 0):
                        new_key = (key[0], key[1], time_table[l_3])
                        b_3[new_key] = line[1 : len(line)]
                    l_3 += 1
                elif(i == 3):
                    if (l_4 != 0):
                        new_key = (key[0], key[1], time_table[l_4])
                        b_4[new_key] = line[1 : len(line)]
                    l_4 += 1
                else:
                    print "Reading the mesoproblem denoted " + str(i) + " Abort..."
                    sys.exit(0)
                    
            f.close()
                
            # Joule losses map
            #=================
            f = open(Dir_Meso + "JouleLosses_new_" + str(key[0]) + ".txt", "r")
            g = f.readlines()
            l_1 = 0
            for j in g:
                line = j.split()
                if (l_1 != 0):
                    new_key = (key[0], key[1], time_table[l_1])
                    jl[new_key] = line[1 : len(line)]
                l_1 += 1
            f.close()
            
            # Magnetic energy map
            #====================
            f = open(Dir_Meso + "MagneticEnergy_new_" + str(key[0]) + ".txt", "r")
            g = f.readlines()
            l_1 = 0
            for j in g:
                line = j.split()
                if (l_1 != 0):
                    new_key = (key[0], key[1], time_table[l_1])
                    me[new_key] = line[1 : len(line)]
                l_1 += 1
            f.close()
            
    for key in keys:
        hx_table[key] = float(h_1[key][0])
        hy_table[key] = float(h_1[key][1])
        hz_table[key] = float(h_1[key][2])
        dhdbxx_table[key] = (float(h_2[key][0]) - float(h_1[key][0])) / (float(b_2[key][0]) - float(b_1[key][0]))
        dhdbxy_table[key] = (float(h_2[key][1]) - float(h_1[key][1])) / (float(b_2[key][0]) - float(b_1[key][0]))
        dhdbyx_table[key] = (float(h_3[key][0]) - float(h_1[key][0])) / (float(b_3[key][1]) - float(b_1[key][1]))
        dhdbyy_table[key] = (float(h_3[key][1]) - float(h_1[key][1])) / (float(b_3[key][1]) - float(b_1[key][1]))
        
        if nbr_subproblems == 4: # perturbation along z in 3D case
            dhdbxz_table[key] = (float(h_2[key][2]) - float(h_1[key][2])) / (float(b_2[key][0]) - float(b_1[key][0]))
            dhdbyz_table[key] = (float(h_3[key][2]) - float(h_1[key][2])) / (float(b_3[key][1]) - float(b_1[key][1]))
            dhdbzx_table[key] = (float(h_4[key][0]) - float(h_1[key][0])) / (float(b_4[key][2]) - float(b_1[key][2]))
            dhdbzy_table[key] = (float(h_4[key][1]) - float(h_1[key][1])) / (float(b_4[key][2]) - float(b_1[key][2]))
            dhdbzz_table[key] = (float(h_4[key][2]) - float(h_1[key][2])) / (float(b_4[key][2]) - float(b_1[key][2]))
        else:
            dhdbxz_table[key] = 0.0
            dhdbyz_table[key] = 0.0
            dhdbzx_table[key] = 0.0
            dhdbzy_table[key] = 0.0
            dhdbzz_table[key] = 0.0
            
        JouleLosses_table[key] = float(jl[key][0])
        MagneticEnergy_table[key] = float(me[key][0])
