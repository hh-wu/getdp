#!/usr/bin/python
from os import system
from sys import argv

fname = 'time_%s_%s.txt'%(argv[1], argv[2])
system('gdate +%H.%M.%S.%N >> '+ fname)
