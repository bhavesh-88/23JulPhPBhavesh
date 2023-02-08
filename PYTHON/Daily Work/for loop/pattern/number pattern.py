print(1)

for i in range(1,5):
    for j in range(1,5):
        if(j%2==0):        
            print("0",end="")
        else:
            print("1",end="")
    print()
print("------------------------")
print(2)

for i in range(1,5):
    for j in range(1,i+1):
        if(j%2==0):        
            print("0",end="")
        else:
            print("1",end="")
    print()
print("------------------------")
print(3)

k=0
for i in range(1,5):
    for j in range(1,5):
        if j<=i:
            k=k+1
            print(k,end=" ")
    print()

print("-----------------------")    
print(4)

k=0
for i in range(1,5):
    for j in range(1,i+1):      
        k=k+1
        print(k,end=" ")
    print()

print("-----------------------")    
print(5)

k=0
for i in range(1,5):
    for j in range(1,5):      
        k=k+1
        print(k,end=" ")
    print()

print("-----------------------")    

print(6)
for i in range(1,5):
    for j in range(1,i+1):      
        print(i,end=" ")
    print()

print("-----------------------")    

print(7)
for i in range(1,5):
    for j in range(1,i+1):      
        print(j,end=" ")
    print()

print("-----------------------")    

print(8)
for i in range(5,0,-1):
    for j in range(1,i+1):      
        print(i,end=" ")
    print()

print("-----------------------")    

print(9)
for i in range(5,0,-1):
    for j in range(1,i+1):      
        print(j,end=" ")
    print()

print("-----------------------")
