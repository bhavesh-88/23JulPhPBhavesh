for i in range(1,5):
    for j in range(1,i+1):
        print("*",end="")
    print()    
print("----------------------")

for i in range(4,0,-1):
    for j in range(1,i+1):
        print("*",end="")
    print()    

print("----------------------")
for i in range(1,5):
    for k in range(1,5-i):
        print(" ",end="")
    for j in range(1,i+1):
        print("*",end="")
    print()    

print("----------------------")
for i in range(4,0,-1):
    for k in range(1,5-i):
        print(" ",end="")
    for j in range(1,i+1):
        print("*",end="")
    print()    

print("----------------------")
for i in range(1,5):
    for k in range(1,5-i):
        print(" ",end="")
    for j in range(1,(2*i-1)+1):
        print("*",end="")
    print()    

print("----------------------")
for i in range(4,0,-1):
    for k in range(1,5-i):
        print(" ",end="")
    for j in range(1,(2*i-1)+1):
        print("*",end="")
    print()    
