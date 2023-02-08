print(1)
num=int(input("Enter  the number of rowa"))
k=0
for i in range(0,num):
    for j in range(0,num):
        k=k+1    
        print(k,end=" ")
    print()
print("------------------------")
print(2)
n=int(input("Enter  the number of rowa"))
k=0
for i in range(0,n):
    k=k+i
m=n+k
for i in range(0,n):
    for j in range(0,i+1):
        print(m,end=" ")
        m=m-1
    print()
print("------------------------")
print(3)
n=int(input("Enter  the number of rowa"))
k=0
for i in range(0,n):
    k=k+i
m=n+k
for i in range(0,n):
    for j in range(0,n):
        print(m,end=" ")
    print()
print("------------------------")


print(3)
num=int(input("Enter  the number of rowa"))
for i in range(0,num):
    #k=i+i
    k=i+1
    dec=num-1
    for j in range(0,i+1):
        print(k,end=" ")
        k=k+dec
        dec=dec-1
    print()
print("------------------------")


