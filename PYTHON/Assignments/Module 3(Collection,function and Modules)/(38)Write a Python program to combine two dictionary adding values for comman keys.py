#Write a Python program to combine two dictionary adding values for
#common keys.
'''
d1={'a':100,'b':200,'c':300,'d':400}
d2={'a':300,'b':200,'c':400,'e':500}
d={}
print(d1)
print(d2)
for i,j in d1.items():
    for x,y in d2.items():
        if i==x:
            d[i]=(j+y)
print(d)
'''
print("-------------------------------")
from collections import Counter
d1={'a':100,'b':200,'c':300,'d':400}
d2={'a':300,'b':200,'c':400,'e':500}
d=Counter(d1)+Counter(d2)
print(d1)
print(d2)
print(d)
