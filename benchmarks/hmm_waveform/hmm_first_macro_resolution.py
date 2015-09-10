print("Python: initializing the time table");

import math

# fill the time table
#====================
key_mod     = input[1]
currentTime = input[0]
set_TS = input[3]

# Refill the time table for the current time window
#==================================================
if (set_TS == 0):
    key         = key_mod
    time_table[key] = round((currentTime+5e-13),10)
elif ( (set_TS)):
    if (len(time_table) == 0): 
        #print 'printing ref_TS'
        #print ref_TS
        time_table[1] = round((currentTime+5e-13),10)
        ref_TS = key_mod
    else:
        key         = (key_mod % ref_TS) + 1
        #print 'printing key_mod, ref_TS  and  key'
        #print key_mod
        #print ref_TS
        #print key
        time_table[key] = round((currentTime+5e-13),10)
    
dt_Macro    = input[2]
print 'Printing the time table for the time window' + str(num_tw)
print time_table
