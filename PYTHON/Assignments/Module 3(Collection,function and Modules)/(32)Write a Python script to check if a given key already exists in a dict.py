#Write a Python script to check if a given key already exists in a
#dictionary.

d={1:"hello",2:"world",3:10,4:20,5:30}
key=int(input("Enter the keys to check :"))
print(d)
if key in d:
    print("key is already exits and is value = ",d[key])
else:
    print("key is not present in dict")
print("--------------------------------------------------")
'''
def key(x):
     if x in d:
         print("key is already exits and value = ",d[x])
     else:
         print("key is not present in dict")
n=int(input("Enter the keys to check :"))
x(n) 
'''         
