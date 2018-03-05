Dir_Meso = file_dir + "res_meso/" 
#Dir_Meso = file_dir + "../../../../project/results/res_meso/"

if (Flag_WR_meso == True):
    
    # 1. Global quantities maps per element and GP
    #=============================================================
    jl       = {}
    mp       = {}
    me       = {}

    for key in keys_new: # keys_new is the number of problems
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

        f_MP = open(Dir_Meso + "MagneticPower" + "_new_" + str(key[0]) + ".txt", "w")
        f = open(Dir_Meso + "MagneticPower" + "_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        for j in g:
            line = j.split()
            aaaa = round((float(line[0]) + 5e-13), 11)
            aaa = (aaaa/dt_Macro)
            if ( ( ( math.ceil(aaa) - aaa) < 5e-13) or ( ( aaa - math.floor(aaa) ) < 5e-13) ):
                f_MP.write(j)
        f.close()
        f_MP.close()

        f_ME = open(Dir_Meso + "MagneticEnergy" + "_new_" + str(key[0]) + ".txt", "w")
        f = open(Dir_Meso + "MagneticEnergy" + "_" + str(key[0]) + ".txt", "r")
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
            
        # Magnetic power map
        #====================
        f = open(Dir_Meso + "MagneticPower_new_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        l_1 = 0
        for j in g:
            line = j.split()
            if (l_1 != 0):
                new_key = (key[0], key[1], time_table[l_1])
                mp[new_key] = line[1 : len(line)]
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
        JouleLosses_table[key] = float(jl[key][0])
        MagneticPower_table[key] = float(mp[key][0])
        MagneticEnergy_table[key] = float(me[key][0])

if (Flag_WR_meso == False):
    
    # 1. Material law and other quantities maps per element and GP
    #=============================================================
    h        = {}
    dhdb     = {}

    for key in keys_new: # keys_new is the number of problems
        
        # material law - dhdb
        #====================
        f = open(Dir_Meso + "h_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        for j in g:
            line = j.split()
            new_key = (key[0], key[1], which_time)
            h[new_key] = line[1 : len(line)]
            hx_table[new_key] = float(h[new_key][0])
            hy_table[new_key] = float(h[new_key][1])
            hz_table[new_key] = float(h[new_key][2])
        f.close()

        f = open(Dir_Meso + "dhdb_" + str(key[0]) + ".txt", "r")
        g = f.readlines()
        for j in g:
            line = j.split()
            new_key = (key[0], key[1], which_time)
            dhdb[new_key] = line[1 : len(line)]
            dhdbxx_table[new_key] = float(dhdb[new_key][0])
            dhdbxy_table[new_key] = float(dhdb[new_key][1])
            dhdbxz_table[new_key] = float(dhdb[new_key][2])
            
            dhdbyx_table[new_key] = float(dhdb[new_key][3])
            dhdbyy_table[new_key] = float(dhdb[new_key][4])
            dhdbyz_table[new_key] = float(dhdb[new_key][5])
            
            dhdbzx_table[new_key] = float(dhdb[new_key][6])
            dhdbzy_table[new_key] = float(dhdb[new_key][7])
            dhdbzz_table[new_key] = float(dhdb[new_key][8])
        f.close()
