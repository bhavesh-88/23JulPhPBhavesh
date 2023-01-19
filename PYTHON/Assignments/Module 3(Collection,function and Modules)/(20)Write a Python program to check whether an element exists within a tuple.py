#Write a Python program to check whether an element exists within a
#tuple.

t=("hi","hello",2,455,"%","df34","world")

print("tuple :",t)
print("hi" in t)
print(5 in t)
print("-------------------------------------")
'''
t=("hi","hello",2,455,"%","df34","world")
n=input("Enter the element if check to exit in a tuple :")
res=False
for i in t:
    if n==i:
        res=True

print("tuple contain this element ?",res)
'''
