#Write a Python program to create a dictionary from a string.
#Note: Track the count of the letters from the string.

s=input("Enter a string :")
d={}
for ch in s:
    if ch in d:
        d[ch]+=1
    else:
        d[ch]=1
print(d)        
#for key in d:
#    print(key,":",d[key])
print("")    
print("-----------------------------")
'''
s=input("Enter a string :")
d={}
for ch in s:
    d[ch]=d.get(ch,0)+1
print(d)    '''
print("-----------------------------")
'''
s=input("Enter a string :")
d={}
for ch in s:
    keys=d.keys()
    if ch in keys:
        d[ch]+=1
    else:
        d[ch]=1
print(d)
print("------------------------------")

'''


