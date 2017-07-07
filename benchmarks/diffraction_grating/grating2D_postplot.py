### ////////////////////////////////
### // Author : Guillaume Demesy  //
### ////////////////////////////////
import subprocess
import numpy as np
import scipy as sc
import matplotlib
matplotlib.use('Agg')
import pylab as pl
pi=np.pi
pl.rc('font', family='serif',size=20)
pl.rc('legend',fontsize=20)
# pl.rc('text', usetex=True)
# pl.rc('figure', **{'autolayout': True})
#### scaling the problem (*10^12)
nm	     = 1.e3
epsilon0 = 8.854187817e-3*nm
mu0      = 400.*pi*nm
cel      = 1.0/(np.sqrt(epsilon0 * mu0))
####
nb_orders  = int(int(subprocess.check_output("ls ./run_results/efficiency_r_* | grep -c efficiency_r_", shell=True))/2)
nb_rods    = int(int(subprocess.check_output("ls ./run_results/absorption-Q_rod_* | grep -c absorption-Q_rod_", shell=True))-1)
zerotol = 0.001
if len(np.loadtxt('./run_results/efficiency_r_0.txt').shape)==2:
    tab_lambdas = cel/nm/np.loadtxt('./run_results/efficiency_r_0.txt')[:,0]
    nb_lambdas  = tab_lambdas.shape[0]
    R = np.zeros((nb_lambdas,2*nb_orders+1),dtype=complex)
    T = np.zeros((nb_lambdas,2*nb_orders+1),dtype=complex)
    A_rods = np.zeros((nb_lambdas,nb_rods))
    for k in range(-nb_orders,nb_orders+1,1):
        R[:,k+nb_orders] = np.loadtxt('./run_results/efficiency_r_%d.txt'%(k))[:,1]+1j*np.loadtxt('./run_results/efficiency_r_%d.txt'%(k))[:,2]
        T[:,k+nb_orders] = np.loadtxt('./run_results/efficiency_t_%d.txt'%(k))[:,1]+1j*np.loadtxt('./run_results/efficiency_t_%d.txt'%(k))[:,2]
    Rtot = np.real(R.sum(axis=1))
    Ttot = np.real(T.sum(axis=1))

    R0 = R[:,nb_orders+1]
    T0 = T[:,nb_orders+1]
    A  = np.loadtxt('./run_results/absorption-Q_tot.txt')[:,1]

    for k in range(nb_rods):
        A_rods[:,k] = np.loadtxt('./run_results/absorption-Q_rod_%d.txt'%(k+1))[:,1]
    A_rod_out = np.loadtxt('./run_results/absorption-Q_rod_out.txt')[:,1]
    A_layer_cov = np.loadtxt('./run_results/absorption-Q_layer_cov.txt')[:,1]
    A_layer_dep = np.loadtxt('./run_results/absorption-Q_layer_dep.txt')[:,1]
    A_sub       = np.loadtxt('./run_results/absorption-Q_sub.txt')[:,1]

    pl.savez('last_run_RTA.npz',R0=R0,T0=T0,A=A)

    pl.figure(figsize=(12,8));ax = pl.subplot(111)
    ax.plot(tab_lambdas,Rtot,'g',label='$R_{tot}$') #R_0
    ax.plot(tab_lambdas,Ttot,'b',label='$T_{tot}$') #T_0
    ax.plot(tab_lambdas, A  ,'r',label='$A$')
    ax.plot(tab_lambdas, Rtot+Ttot+A,'k',label='$R_{tot}+T_{tot}+A$')
    ax.set_ylim([-0.07,1.07])
    ax.set_xlim([tab_lambdas.min(),tab_lambdas.max()])
    ax.grid()
    box = ax.get_position()
    ax.set_position([box.x0, box.y0, box.width * 0.8, box.height])
    ax.legend(loc='center left', bbox_to_anchor=(1, 0.5),fontsize=16)
    pl.savefig('energy_balance_global.pdf')

    pl.figure(figsize=(12,8));ax = pl.subplot(111)
    absorption_list=[A_rod_out,A_layer_cov,A_layer_dep,A_sub]
    absorption_list_label=['$A_{rod_{out}}$','$A_{layer_{cov}}$','$A_{layer_{dep}}$','$A_{sub}$']
    count=0
    for abso in absorption_list:
        if not np.all(np.isclose(abso.real,np.zeros_like(abso),atol=zerotol)):count+=1
    for k in range(nb_rods):
        abso=A_rods[:,k]
        if not np.all(np.isclose(abso.real,np.zeros_like(abso),atol=zerotol)):count+=1
    for k in range(-nb_orders,nb_orders+1,1):
        refl=R[:,k+nb_orders]
        tran=T[:,k+nb_orders]
        if not np.all(np.isclose(refl.real,np.zeros_like(refl),atol=zerotol)):count+=1
        if not np.all(np.isclose(tran.real,np.zeros_like(tran),atol=zerotol)):count+=1
    color=iter(pl.cm.rainbow(np.linspace(0,1,count)))
    ka=0
    for abso in absorption_list:
        if not np.all(np.isclose(abso.real,np.zeros_like(abso),atol=zerotol)):            
            ax.plot(tab_lambdas,abso,c=next(color),label=absorption_list_label[ka])
        ka+=1
    for k in range(nb_rods):
        abso=A_rods[:,k]
        if not np.all(np.isclose(abso.real,np.zeros_like(abso),atol=zerotol)):
            ax.plot(tab_lambdas,abso, c=next(color),label='$A_{rod_{%g}}$'%(k+1))
    for k in range(-nb_orders,nb_orders+1,1):
        refl=R[:,k+nb_orders]
        if not np.all(np.isclose(refl.real,np.zeros_like(refl),atol=zerotol)):
            if(k==0):ax.plot(tab_lambdas,refl.real,lw=3,c=next(color), label='$R_{%g}$'%(k))
            else:ax.plot(tab_lambdas,refl.real,lw=1,c=next(color), label='$R_{%g}$'%(k))
    for k in range(-nb_orders,nb_orders+1,1):
        tran=T[:,k+nb_orders]
        if not np.all(np.isclose(tran.real,np.zeros_like(tran),atol=zerotol)):
            if(k==0):ax.plot(tab_lambdas,tran.real ,lw=3, c=next(color),label='$T_{%g}$'%(k))
            else:ax.plot(tab_lambdas,tran.real ,lw=1, c=next(color),label='$T_{%g}$'%(k))
    pl.title('details : diffraction orders (>%.0fpercent for clarity)'%(zerotol*100.))
    ax.set_ylim([-0.07,1.07])
    ax.set_xlim([tab_lambdas.min(),tab_lambdas.max()])
    ax.grid()
    box = ax.get_position()
    ax.set_position([box.x0, box.y0, box.width * 0.8, box.height])
    ax.legend(loc='center left', bbox_to_anchor=(1, 0.5),fontsize=12)
    pl.savefig('energy_balance_detailed.pdf')
    pl.show()
elif len(np.loadtxt('./run_results/efficiency_r_0.txt').shape)==1:
    lambdas=cel/nm/np.loadtxt('./run_results/efficiency_r_0.txt')[0]
    R = np.zeros(2*nb_orders+1,dtype=complex)
    T = np.zeros(2*nb_orders+1,dtype=complex)
    angle_r = np.zeros(2*nb_orders+1)
    angle_t = np.zeros(2*nb_orders+1)
    orders  = range(-nb_orders,nb_orders+1)
    A_rods = np.zeros(nb_rods)
    for k in range(-nb_orders,nb_orders+1,1):
        R[k+nb_orders] = np.loadtxt('./run_results/efficiency_r_%d.txt'%(k))[1]+1j*np.loadtxt('./run_results/efficiency_r_%d.txt'%(k))[2]
        T[k+nb_orders] = np.loadtxt('./run_results/efficiency_t_%d.txt'%(k))[1]+1j*np.loadtxt('./run_results/efficiency_t_%d.txt'%(k))[2]
        angle_r[k+nb_orders] = np.loadtxt('./run_results/order_r_angle_%d.txt'%(k))[8]
        angle_t[k+nb_orders] = np.loadtxt('./run_results/order_t_angle_%d.txt'%(k))[8]
    Rtot = np.real(R.sum())
    Ttot = np.real(T.sum())
    R0 = R[nb_orders+1]
    T0 = T[nb_orders+1]
    A  = np.loadtxt('./run_results/absorption-Q_tot.txt')[1]
    for k in range(nb_rods):
        A_rods[k] = np.loadtxt('./run_results/absorption-Q_rod_%d.txt'%(k+1))[1]
    A_rod_out = np.loadtxt('./run_results/absorption-Q_rod_out.txt')[1]
    A_layer_cov = np.loadtxt('./run_results/absorption-Q_layer_cov.txt')[1]
    A_layer_dep = np.loadtxt('./run_results/absorption-Q_layer_dep.txt')[1]
    A_sub       = np.loadtxt('./run_results/absorption-Q_sub.txt')[1]
    absorption_list=[A_rod_out,A_layer_cov,A_layer_dep,A_sub]
    absorption_list_label=['$A_{rod_{out}}$','$A_{layer_{cov}}$','$A_{layer_{dep}}$','$A_{sub}$']
    ka=0
    kb=0
    hist_labels=[]
    hist_values=[]
    hist_colors=[]
    for abso in absorption_list:
        if not np.isclose(abso.real,0):
            ka+=1;hist_labels.append(absorption_list_label[kb])
            hist_values.append(abso)
            hist_colors.append('r')
        kb+=1
    for k in range(nb_rods):
        abso=A_rods[k]
        if not np.isclose(abso.real,0):
            ka+=1
            hist_labels.append('$A_{rod_{%g}}$'%(k+1))
            hist_values.append(abso)
            hist_colors.append('r')
    for k in range(-nb_orders,nb_orders+1,1):
        refl=R[k+nb_orders]
        tran=T[k+nb_orders]
        if not np.isclose(refl.real,np.zeros_like(refl),atol=zerotol):
            ka+=1
            hist_labels.append('$R_{%g}$'%(k))
            hist_values.append(refl)
            hist_colors.append('g')
    for k in range(-nb_orders,nb_orders+1,1):
        tran=T[k+nb_orders]
        if not np.isclose(tran.real,np.zeros_like(tran),atol=zerotol):
            ka+=1
            hist_labels.append('$T_{%g}$'%(k))
            hist_values.append(tran)
            hist_colors.append('b')
    ka+=1
    hist_labels.append('total')
    hist_values.append(sum(hist_values))
    hist_colors.append('b')
    x_disp = np.arange(ka)
    fig, ax = pl.subplots(figsize=(1.8*ka,8))
    rects=ax.bar(x_disp,np.real(np.array(hist_values)),align='center',color=hist_colors)
    ax.bar(ka-1,sum(absorption_list)+sum(A_rods.real)+sum(R.real),align='center',color='g')
    ax.bar(ka-1,sum(absorption_list)+sum(A_rods),align='center',color='r')
    pl.xticks(x_disp, hist_labels)
    for rect in rects:
        height = rect.get_height()
        ax.text(rect.get_x() + rect.get_width()/2., height+0.01,'%.5f'%(height),ha='center', va='bottom', fontsize=20)
    pl.grid()
    pl.ylim([0,1.05])
    # pl.title('energy balance')
    pl.savefig('energy_balance_hist.pdf',bbox_inches='tight')
    pl.show()
