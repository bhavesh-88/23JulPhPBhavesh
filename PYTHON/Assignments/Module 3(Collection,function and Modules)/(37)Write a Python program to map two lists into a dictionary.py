#Write a Python program to map two lists into a dictionary

l1=[1,2,3,4,5]
l2=["one","two","Three","Four","Five"]
print(l1)
print(l2)
d=dict(zip(l1, l2))
print(d)
print("--------------------------------")
'''
keys=[]
values=[]
n=int(input("Enter number of elements of dict"))
print("for keys")
for i in range(1,n+1):
    ele=int(input("Enter elements of dict"))
    keys.append(ele)
print("for values")
for i in range(1,n+1):
    ele=int(input("Enter elements of dict"))
    values.append(ele)
d=dict(zip(keys,values))
print("dict :",d)
'''
