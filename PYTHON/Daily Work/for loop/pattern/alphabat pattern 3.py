print(1)
count=0
for i in range(5):
    for j in range(5):
        print(chr(65+count),end=" ")
        count+=1
    print()    
print("-------------------------------------------------")        
print(2)
count=0
for i in range(5):
    for j in range(i+1):
        print(chr(65+count),end=" ")
        count+=1
    print()    
        
print("-------------------------------------------")
print(3)
for i in range(5):
    for j in range(5):
        print(chr(65+i),end="")
    print()    
print("-------------------------------------------------")        
print(4)
count=0
for i in range(5):
    for j in range(5):
        print(chr(65+j),end=" ")
    print()    
        
print("-------------------------------------------")

print(4)
count=0
for i in range(5):
    for j in range(i+1):
        print(chr(65+j),end=" ")
    print()    
        
print("-------------------------------------------")
