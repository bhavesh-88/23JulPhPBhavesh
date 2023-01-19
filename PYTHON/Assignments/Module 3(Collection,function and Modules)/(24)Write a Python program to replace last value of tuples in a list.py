#Write a Python program to replace last value of tuples in a list

l=[("Red","White","Black"),(10,"white",20),(10,20,30)]
print("list :",l)
print([i[:-1]+(40,) for i in l])
print(type(l))
print("------------------------------------------------")
