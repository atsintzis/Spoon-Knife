#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Nov 16 14:12:05 2018

@author: at7677ts
"""

from scipy import *
from matplotlib.pyplot import *

def f(x):
    return 2*x + 1
z = []
for x in range(10):
    if f(x) > pi:
        z.append(x)
    else:
        z.append(-1)
print(z)

# I just wanted to check that this works
# What about this??
