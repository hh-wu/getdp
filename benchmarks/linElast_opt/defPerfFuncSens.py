""" 
    Author: Erin Kuci
    
    Analytic derivative of performance functions.
"""
from tool import *

def volumeSens(x,data,parameters):
    #return data['ElementVolume'][0] #ve
    return np.ones(len(x))

def massSens(x,data,parameters):
    return np.array(data['ElementMass'][0])


