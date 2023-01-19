#Write a Python program to get a string made of the first 2 and
#the last 2 chars from a given a string. If the string length isless than 2,
#return instead of the empty string.
def string(s):
    if len(s)< 2:
        return ''
    
    return s[0:2]+s[-2:]
    #else:
     #   print(s[0:2]+s[-2:])
s=input("Enter a string")
string(s)
        
