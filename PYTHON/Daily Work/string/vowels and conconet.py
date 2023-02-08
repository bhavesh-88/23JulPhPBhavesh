s=str(input("Enter your name :"))
v=0
c=0
for i in s:
    if(s[i]=='a'or s[i]=='e'or s[i]=='i'or s[i]=='o'or s[i]=='u'or s[i]=='A'or s[i]=='E'or s[i]=='I'or s[i]=='O'or s[i]=='U'):
        v=v+1
   # if i in ('a','e','i','o','u','A','E','I','O','U'):
    #    v=v+1
    elif(s[i]>='A' or s[i]<='Z' and s[i]>='a' or s[i]<='z'):
        c=c+1
print("Total vowels ; ",v)
print("Total conconet :",c)

        
