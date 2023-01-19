#Write a Python program to add 'ing' at the end of a given string (length
#should be at least 3). If the given string already ends with 'ing' then add
#'ly' instead if the string length of the given string is less than 3, leave it
#unchanged.
s=input("Enter a string :")
if (len(s)>3):
    if s[-3:]=='ing':
        s=s+'ly'
    else:
        s=s+'ing'
print(s)
print("-------------------------")
def add(s):
    length=len(s)
    if length>=3:
        if s[-3:]=='ing':
            s=s+'ly'
        else:
            s=s+'ing'
    return s    
print(add('abc'))
print(add('string'))
    
