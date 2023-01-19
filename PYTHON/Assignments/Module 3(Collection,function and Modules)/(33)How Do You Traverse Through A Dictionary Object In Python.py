#How Do You Traverse Through A Dictionary Object In Python ?

d={"Rajsthan":"jaipur","Gujarat":"Gandhinagar","Bihar":"Patna","Maharashtra":"Mumbai"}
print(d)
key=d.keys()
#using inbulit fun
print(key)
# without inbulit fun
print("given state :\n")
for i in d:
    print(i)
print("given capitals :\n")
for i in d.values():
    print(i)
# iterate throw all key and values
#iterate
for i,j in d.items():
    print(i,":",j)
# without using items
for i in d:
    print(i,"-->",d[i])
# print items in key value pair
keys=d.items()
print(keys)
