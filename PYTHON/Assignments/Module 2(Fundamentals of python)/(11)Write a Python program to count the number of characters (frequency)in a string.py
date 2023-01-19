#Write a Python program to count the number of characters (character
#frequency) in a string
#s=input("Enter the string : ")
#count=0
#word=1
#for i in range(0,len(s)):
#    if(s[i]!=' '):
#        count=count+1
#    elif(s[i]==' '):
#        word=word+1

#print("Total number of characters in a string:",count)
#print("Total Word in a string:",word)
print("---------------------------------------------------------")
#s=input("Enter string : ")
#ch=0
#for i in s:
#    if i.isalpha():
#        ch=ch+1

#print("Total number of characters in a string:",ch)
print("----------------------------------------------------")

def char(s):
    d={}
    for i in s:
        k=d.keys()
        if i not in k:
            d[i]=1
        else:
            d[i]+=1
    return d
s=input("Enter string : ")    
print(char(s))
print("-----------------------------------------------")
s=input("Enter the string : ")
d={}
for i in s:
    if i in d:
        d[i]+=1
    else:
        d[i]=1
print("Count all characters in the stringn :\n"+str(d))
    
