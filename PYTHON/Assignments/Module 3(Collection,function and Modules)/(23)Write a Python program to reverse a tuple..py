#Write a Python program to reverse a tuple.

t=("a","b","c","d","e","f","g","h")
print("Tuple :",t)
T=tuple(reversed(t))
print("Reversed tuple :",T)
print("----------------------------")
t=("A","B","C","D","E","F","G","H")
print("Tuple :",t)
T=t[::-1]
print("Reversed tuple :",T)
