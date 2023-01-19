#Write a Python function that checks whether a passed string is
#palindrome or not

s=input("Enter a string :")
print(s)
#s[:]=s[-1::-1]
if s[:]==s[::-1]:
    print("String is palindrome")
else:
    print("String is not palindrome")
print("------------------------------")
'''
s=input("Enter a string :")
print(s)
s2=''
for i in range(len(s)-1,-1,-1):
    s2=s2+s[i]
if s==s2:
    print("String is palindrome")
else:
    print("String is not palindrome")
    '''
print("-----------------------------")
'''
def palin(s):
    if s[:]==s[::-1]:
        print("string is palindrome")
        return True
    else:
        print("not a palindrome")
        return False
s=input("Enter a string :")
palin(s)    
'''
