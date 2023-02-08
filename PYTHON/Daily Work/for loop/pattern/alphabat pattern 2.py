print(1)
string="bhavesh"
length=len(string)

for i in range(0,length):                        
    for j in range(i):                         
        print(" ",end=" ")                     
    for j in range(0,length-i):                 
        print(string[j],end=" ")                    
    print()

print("------------------------------------------------------------")

print(2)
string="bhavesh"
length=len(string)

for i in range(0,length):
    for j in range(i):
        print(" ",end=" ")
    for j in range(0,length-i):
        print(string[i],end=" ")
    print()

print("------------------------------------------------------------")
print(3)
string="bhavesh"
length=len(string)

for i in range(0,length):
    for j in range(i):
        print(" ",end="")
    for j in range(0,length-i):
        print(string[j],end=" ")
    print()

print("------------------------------------------------------------")
print(4)
string="bhavesh"
length=len(string)

for i in range(0,length):
    for j in range(i):
        print(" ",end="")
    for j in range(0,length-i):
        print(string[i],end=" ")
    print()

print("------------------------------------------------------------")

print(5)
k=ord("A")
for i in range(1,5):
    for j in range(1,i+1):
        print(chr(k),end="")
    print()

print("------------------------------------------------------------")

