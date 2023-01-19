#Write a Python program to find the highest 3 values in a dictionary
'''
d={'a':12,'b':34,'c':78,'d':40,'f':60,'g':66,'h':35,'i':25}
l=sorted(d,key=d.get,reverse=True)
M=max(d,key=d.get)
m=min(d,key=d.get)
A=max(d.values())
a=min(d.values())
print(d)
print(M)
print(A)
print(m)
print(a)
print(l)
for i in range(3):
    print(l[i])
    '''
print("--------------------------------------------------")
from collections import Counter

d={'a':12,'b':34,'c':78,'d':40,'f':60,'g':66,'h':35,'i':25}
k=Counter(d)
m=k.most_common(3)
print("keys : values")
for i in m:
    print(i[0],":",i[1])
print("--------------------------------------------------")
'''
from heapq import nlargest

d={'a':12,'b':34,'c':78,'d':40,'f':60,'g':66,'h':35,'i':25}
n=nlargest(3,d,key=d.get)
print(n)
print("------------------------------------------------")
d={'a':12,'b':34,'c':78,'d':40,'f':60,'g':66,'h':35,'i':25}
s=sorted(d,key=d.get,reverse=True)[:3]
print(s)

'''
