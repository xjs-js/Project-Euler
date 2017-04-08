# -*- coding: utf-8 -*-
"""
Created on Sat Apr 08 21:49:43 2017

@author: js
"""

M = 10000000000
relt = 0

for i in range(1, 1000+1):
    relt = (relt + i ** i) % M

print relt # 9110846700

