s=input("Enter string : ")
ch=0
w=1
sp=0
n=0
spc=0
for i in s:
    if i.isalpha():
        ch=ch+1
    elif i.isspace():
        w=w+1
        sp=sp+1
    elif i.isnumeric():
        n=n+1
    else:
        spc=spc+1   

print("Total character : ",ch)

print("Total word : ",w)

print("Total space : ",sp)

print("Total numeric : ",n)

print("total special character : ",spc)


