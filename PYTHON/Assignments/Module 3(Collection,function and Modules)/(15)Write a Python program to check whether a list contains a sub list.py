#Write a Python program to check whether a list contains a sub list

l=[3,4,5,6,7,6,8,7]
sub=[4,5,10]
res=False
c=0
for i in sub:
    if i in l:
        c=c+1
if (c==len(sub)):
        res=True
print("is sublist present in list",str(res))    
print("-------------------------------------")
'''
l=[3,4,5,6,7,6,8,7]
sub=[4,5]
res=False
c=[]
print(l)
print("sublist :",sub)
for i in sub:
    if i in l:
        c.append(i)
if (c==sub):
    res=True
print("is sublist present in list :",str(res))    
'''

