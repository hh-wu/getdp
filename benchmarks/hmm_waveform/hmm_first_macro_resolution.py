print("Python: initializing the time table");

import math

# fill the time table
key_mod     = input[1]
currentTime = input[0]
set_TS = input[3]

# Refill the time table for the current time window
#==================================================
if (set_TS == 0):
    key         = key_mod
    time_table[key] = round(currentTime+5e-14,7)
elif ( (set_TS)):
    if (len(time_table) == 0): 
        print 'printing ref_TS'
        print ref_TS
        time_table[1] = round(currentTime+5e-14,7)
        ref_TS = key_mod
    else:
        key         = (key_mod % ref_TS) + 1
        print 'printing key_mod, ref_TS  and  key'
        print key_mod
        print ref_TS
        print key
        time_table[key] = round(currentTime+5e-14,7)
    
dt_Macro    = input[2]
print 'Inno Inno Inno Inno Inno'
print time_table
