# -*- coding: utf-8 -*-
"""
Created on Sat Apr 08 22:01:07 2017

@author: js
"""

def isPalindrome(s):
    return s == s[::-1]


relt = 0

for i in range(1, 1000000+1):
    if isPalindrome(str(i)) and isPalindrome(bin(i)[2:]):
        relt += i
        
print relt # 872187