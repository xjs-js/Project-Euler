# -*- coding: utf-8 -*-
"""
Created on Sat Apr 08 22:12:33 2017

@author: js
"""

# prime sieve begin
prime = [1] * 1000001

prime[0] = 0
prime[1] = 0
prime[2] = 1

for i in range(2, 1000001):
    base = i
    while i <= 1000000 and i + base <= 1000000:
        i = i + base
        prime[i] = 0
# prime sieve end

def rotate(n):
    """rotate n (x times), x = len(str(n))-1, ensure all is prime
    
    for example:
        n = 12345, x = 5-1 = 4
        
    """
    tmp = n
    
    for i in range(len(str(n))):

        if not prime[int(tmp)]:
            return False
            
        tmp = str(tmp)[1:] + str(tmp)[0]

    return True
        
print sum([1 for i in range(1, 1000000+1) if rotate(i)])
