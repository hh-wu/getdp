#from multiprocessing import Pool, Process

print("Python: initializing tables of internal variables.");

if (input[0] == 0):
    
    # Python: initialization of the prev. dictionnaries at "t == t_0"
    #================================================================
    Theta_Previous = {}
    F_f_Previous = {}
    F_p_Previous = {}
    F_pg_Previous = {}
    Flag_PlasticStep_Previous = {}
    F_tot_Current = {}
    Theta_Current = {}
    TimeStep_Previous = 1

    # Python: initialization of the prev. dictionnaries at "t == t_0"
    #================================================================
    Theta_2X_Previous = {}
    F_f_2X_Previous = {}
    F_p_2X_Previous = {}
    F_pg_2X_Previous = {}
    Flag_PlasticStep_2X_Previous = {}
    TimeStep_2X_Previous = 1
    
    # Python: initialization of current the dictionnaries at at "t == t_0"
    #====================================================================
    F_f_Current = {}
    F_p_Current = {}
    F_pg_Current = {}
    Flag_PlasticStep_Current = {}
    Error_NR_List = {}

    TimeStep_Current = 1

    
elif(input[0] == 1):
    # Python: initialization of prev. the dictionnaries at at "t != t_0"
    #===================================================================
    print("Python: done swaping maps after time step has converged...");
    print("Python: TIMESTEP = ", TimeStep_Current+1);
    Theta_Previous = Theta_Current
    F_f_Previous = F_f_Current
    F_p_Previous = F_p_Current
    F_pg_Previous = F_pg_Current
    Flag_PlasticStep_Previous = Flag_PlasticStep_Current
    TimeStep_Previous = TimeStep_Current
    
    # Python: initialization of prev. the dictionnaries at at "t != t_0"
    #===================================================================
    Theta_2X_Previous = Theta_Previous
    F_f_2X_Previous = F_f_Previous
    F_p_2X_Previous = F_p_Previous
    F_pg_2X_Previous = F_pg_Previous
    Flag_PlasticStep_2X_Previous = Flag_PlasticStep_Previous
    TimeStep_2X_Previous = TimeStep_Previous

    
    # Python: initialization of current the dictionnaries at at "t != t_0"
    #====================================================================
    Theta_Current = {} 
    F_f_Current = {}
    F_p_Current = {}
    F_pg_Current = {}
    Flag_PlasticStep_Current = {}
else:
    # Python: initialization of prev. the dictionnaries at at "t != t_0"
    #===================================================================
    print("Python: done swaping maps after time step has not converged...");
    print("Python: TIMESTEP = ", TimeStep_Current+1);
    if (not (TimeStep_Current == 1)):
        Theta_Previous = Theta_2X_Previous
        F_f_Previous = F_f_2X_Previous
        F_p_Previous = F_p_2X_Previous
        F_pg_Previous = F_pg_2X_Previous
        Flag_PlasticStep_Previous = Flag_PlasticStep_2X_Previous
        TimeStep_Previous = TimeStep_2X_Previous

    # Python: initialization of current the dictionnaries at at "t != t_0"
    #====================================================================
    Theta_Current = {} 
    F_f_Current = {}
    F_p_Current = {}
    F_pg_Current = {}
    Flag_PlasticStep_Current = {}
