#Write a Python program to convert a tuple to a string.

t=("Hello","What","is","your","Name")
s=" "
for i in t:
    s=s+i

print("Tuple :",t)
print("String :",s)
print("-------------------------------")
'''
t=("Hello","What","is","your","Name")
s=" "
s=s.join(t)

print("Tuple :",t)
print("String :",s)

'''
