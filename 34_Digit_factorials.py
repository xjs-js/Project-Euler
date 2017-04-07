# -*- coding: utf-8 -*-
"""
Created on Fri Apr 07 19:54:41 2017

@author: js
"""

def factorial(n):
    if n == 0:
        return 1
    else:
        return n*factorial(n-1)
        
def judge(n):
    s = str(n)
    
    return n == sum([factorial(int(digit)) for digit in s])
        

relt = 0

for num in range(10, 150000):
    if judge(num):
        print num
        relt += num

print "sum = {0}".format(relt)
