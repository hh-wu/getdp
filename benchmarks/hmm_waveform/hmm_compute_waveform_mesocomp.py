#The files that manages mesoscale computations and projections
#=============================================================
print("Python: running {0} meso calculations on {1} CPUs".format(nkeys, ncpus))
queue = set(keys_new)
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
            #=======================================================
            # Mesoscale computations and projections
            #=======================================================    
            if (Flag_WR_meso == True): # mesoscale computations
                execfile('hmm_compute_waveform_mesocomp_compute.py')
                time.sleep(0.01)
            elif(Flag_WR_meso == False): # mesoscale projections
                execfile('hmm_compute_waveform_mesocomp_project.py')
            #=======================================================
            #=======================================================
        if len(queue) == 0:
            break
    # little sleep so we do not use 100% CPU just for polling
    
    #time.sleep(0.001) 
    time.sleep(0.01) 
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
    #time.sleep(0.001)
    time.sleep(0.1)
