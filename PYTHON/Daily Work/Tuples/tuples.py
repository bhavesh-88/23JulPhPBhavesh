#Tuples
t=(1,2,1.1,"tops",True,1,10)
print(t)
print(t.count(1))
print(t.index(1.1))

for i in t:
    print(i)

print(1 in t)
print(len(t))
print("-----------")
t=(1,2,1.1,"tops",[1,3,5],True,1,10)
print(t[4])
t[4].append(10)
print(t[4])
