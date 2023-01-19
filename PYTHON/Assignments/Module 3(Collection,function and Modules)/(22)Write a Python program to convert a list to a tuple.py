#Write a Python program to convert a list to a tuple

l=["hi",23,"&%","hello","black","white"]
t=tuple(l)
print("List :",l)
print("Tuple :",t)
print("----------------------------------")
'''
l=["hi",23,"&%","hello","black","white"]
t=(*l,)
print("List :",l)
print("Tuple :",t)
print("-----------------------------------")

l=["hi",23,"&%","hello","black","white"]
t=tuple(i for i in l)
print("List :",l)
print("Tuple :",t)
'''
