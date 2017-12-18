from subprocess import Popen,PIPE,STDOUT
import sys
import os
import time
from ast import literal_eval as literal_eval

print("The update Python function is not implemented yet!")

keys = Theta_Previous.keys()
nkeys = len(keys)
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

filename = None
ssh = None
ncpus = 16
nodes = ["localhost" for x in range(ncpus)]

print("Python: updating internal variables for {0} Gauss points on {1} CPUs".format(nkeys, ncpus))
queue = sorted(set(keys))
cpus = ['' for cpu in range(ncpus)]
print('Printing the queue...')
print(queue)
while len(queue):
    for i, cpu in enumerate(cpus):
        if cpu:
            cpus[i].poll()
        if not cpu or cpu.returncode != None:
            key = queue.pop()
            print('Calculations for the key ', key)
            print('Printing the Previous temperature', Theta_Previous[key])
            print('Printing the Current temperature', Theta_Current[key])
            args = [];
            args.extend(['python', 'smp_updateInternalVariables_perGaussPoint.py', str(key)])
            args.extend([ str(Theta_Previous[key]), str(F_f_Previous[key]), str(F_p_Previous[key]),
                          str(F_pg_Previous[key]), str(F_tot_Current[key]), str(Theta_Current[key]) ] )
            cpus[i] = Popen(args, stderr=STDOUT, stdout=PIPE)
            iv_info = cpus[i].communicate()[0],cpus[i].returncode
            print('Printing the length of the queue', len(queue))
            print('Printing iv_info', iv_info)
            print('Printing F_tot_Current[key]', F_tot_Current[key])
            if(1):
                iv_updated = literal_eval(iv_info[0])
                F_f_Current[key] = iv_updated[0]
                F_p_Current[key] = iv_updated[1]
                F_pg_Current[key] = iv_updated[2]
            else:
                F_f_Current[key] = [[1.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 1.0]]
                F_p_Current[key] = [[1.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 1.0]]
                F_pg_Current[key] = [[1.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 1.0]]
                
        else:
            dummy_variable = 0
        if(len(queue) == 0):
            break
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
