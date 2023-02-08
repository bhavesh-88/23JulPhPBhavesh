print(1)
for i in range(1,6):
    for j in range(1,6):
        print("*",end=" ")
    print()
    
print("------------------------------------------------------")
print(2)
for i in range(1,5):
    for j in range(1,5):
        if(j<=i):
            print("*",end="")
    print()

print("------------------------------------------------------------")
print(3)
for i in range(1,5):
    for j in range(1,5):
        if(j>=5-i):
            print("*",end="")
        else:
            print(" ",end="")
    print()

print("------------------------------------------------------------")
print(3)
for i in range(1,5):
    for j in range(1,5):
        if(j<=5-i):
            print("*",end="")
        else:
            print(" ",end="")
    print()

print("--------------------------------------------")    
print(4)
for i in range(1,5):
    for j in range(1,5):
        if(j>=i):
            print("*",end="")
        else:
            print(" ",end="")
    print()

print("--------------------------------------------")    
print(5)
for i in range(1,5):
    for j in range(1,8):
        if(j>=5-i and j<=3+i):
            print("*",end="")
        else:
            print(" ",end="")
    print()

print("--------------------------------------------")    
print(6)
for i in range(1,5):
    for j in range(1,8):
        if(j>=i and j<=8-i):
            print("*",end="")
        else:
            print(" ",end="")
    print()

print("--------------------------------------------")    
print(7)
for i in range(1,5):
    for j in range(1,5):
        if(j>=5-i):
            print("* ",end="")
        else:
            print(" ",end="")
    print()

print("------------------------------------------------------------")
print(8)
for i in range(1,5):
    for j in range(1,8):
        if j<=5-i or j>=3+i:
            print("*",end="")
        else:
            print(" ",end="")
    print()

print("------------------------------------------------------------")
print(9)
for i in range(1,6):
    for j in range(1,6):
        if(i==2 and j==2):
            print("@",end="")
        else:    
            print("*",end="")
    print()

print("----------------------------------------------------")
print(10)
for i in range(1,5):
    for j in range(1,i+1):
        print("*",end="")
    print()

print("------------------------------------------------------------")

