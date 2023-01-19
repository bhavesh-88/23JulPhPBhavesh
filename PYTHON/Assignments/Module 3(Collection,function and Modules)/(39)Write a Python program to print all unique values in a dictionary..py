#Write a Python program to print all unique values in a dictionary.

d={'A':23,'B':12,'25':12,'C':56,'D':45,'F':23,'G':56,'H':100,'I':45}
print("original dict : ",d)
value=set(d.values())
#value=(set(i for dic in d for i in dic.value()))
print(value)
print("---------------------------------------------")
d=[{'A':23,'B':12},{'25':12,'C':56},{'D':45,'F':23},{'G':56,'H':100,'I':45}]
l=[]
print(d)
for i in d:
    l.extend(list(i.values()))
l=list(set(l))    
print("unique value in list :",l)
print("---------------------------------------------------------------")
'''
d=[{'A':23,'B':12},{'25':12,'C':56},{'D':45,'F':23},{'G':56,'H':100,'I':45}]
s=set()
for i in d:
    for val in i.values():
        s.add(val)
print(s)        
'''
