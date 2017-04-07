# coding: utf-8
# http://projecteuler.net/problem=32
# 2016-12-02 17:22:55
# 2017-04-07 19:44:20

import string

x = set() # [(multiplicand, multiplier, product),...] set of tuple
y = set() # [product,...]                             set of num

def judge(multiplicand, multiplier, product):
    together = "{0}{1}{2}".format(multiplicand, multiplier, product)
    
    for digit in string.digits[1:]:
        if together.find(digit) == -1:
            return False
        else:
            together = together.replace(digit, "", 1)
    
    return len(together) == 0

# _ * ____ = ____
for multiplicand in range(1, 10):
    for multiplier in range(1234, 9877):
        product = multiplicand * multiplier
        
        if judge(multiplicand, multiplier, product):
            x.add((multiplicand, multiplier, product))
            y.add(product)

# __ * ___ = ____
for multiplicand in range(12, 99):
    for multiplier in range(123, 988):
        product = multiplicand * multiplier
        
        if judge(multiplicand, multiplier, product):
            x.add((multiplicand, multiplier, product))
            y.add(product)

for elm in x:
    print elm

# --- output ---
#(4, 1963, 7852)
#(28, 157, 4396)
#(18, 297, 5346)
#(39, 186, 7254)
#(4, 1738, 6952)
#(27, 198, 5346)
#(12, 483, 5796)
#(42, 138, 5796)
#(48, 159, 7632)

print sum(y)

# --- output ---
# 45228