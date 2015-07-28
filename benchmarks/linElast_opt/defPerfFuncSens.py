""" 
    Author: Erin Kuci
    
    Analytic derivative of performance functions.
"""
from tool import *

def volumeSens(x,data,parameters):
    result = np.zeros(len(x))
    
    if(parameters['unitElemVol']):
        result = [1.0]*n
    else:
        result = data['VolumeElemDomain'][0]

    return result






