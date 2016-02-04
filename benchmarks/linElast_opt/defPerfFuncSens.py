""" 
    Author: Erin Kuci
    
    Analytic derivative of performance functions.
"""
from tool import *

def volumeSens(x,data,parameters):
    return data['ElementVolume'][0] #ve
    #return np.ones(len(x))

def massSens(x,data,parameters):
    return np.array(data['ElementMass'][0])

def sensBeta(x,data,parameters):
    return np.zeros(len(x))

def sensEigBeta(x,data,parameters):
    dd = np.copy(data['d_eig_TO'][0])
    m2 = np.copy(data['mass_eig'][0])
    w2 = np.copy(data['eig2'][0])
    l_dd = len(dd); l_x = len(x)
    aa = np.ones([l_dd,l_x])
    for k in range(l_dd):
        for l in range(l_x):
            aa[k,l] = -dd[k,l]/(m2[k]*w2[k]**2.0)
    return aa

def minEigSens(x,data,parameters):
    w2 = data['eig2'][0];
    m2 = data['mass_eig'][0]
    print m2
    # get min w2
    w2_min_ind = np.argmin(w2)
    w2_min = w2[w2_min_ind]
    print('sens:w2:{}-index min(w2):{}-min(w2):{}'.format(w2,w2_min_ind,w2_min))
    aa = data['d_eig_TO'][0][w2_min_ind]/m2[w2_min_ind]
    return aa

def sensInvEig(x,data,parameters):
    dd = np.copy(data['d_eig_TO'][0])
    m2 = np.copy(data['mass_eig'][0])
    w2 = np.copy(data['eig2'][0])
    l_dd = len(dd); l_x = len(x)
    w2_min_ind = np.argmin(w2)
    print('sens:{}'.format(w2[w2_min_ind]))
    aa = -dd[w2_min_ind]/(m2[w2_min_ind]*(w2[w2_min_ind]**2.0))
    return aa

def minEig0Sens(x,data,parameters):
    m2 = data['mass_eig'][0]
    d_eig =data['d_eig_TO'][0][0]
    aa = d_eig/m2[0]
    return aa



