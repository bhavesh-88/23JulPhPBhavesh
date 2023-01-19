#Write a Python function to check whether a number is perfect or not.
'''
n=int(input("Enter the number : "))
count=0
s=0
l=[]
for i in range(1,n+1):
    if n%i==0:
        print(i,end=" ")
        s=s+i
        count=count+1
        l.append(i)
print("")
if s/2==n:
    print("this is perfect number")
else:
    print("this is the not a perfect number")
        
print("total",count,"divisor")
print("Sum of total divisor :",sum(l))
'''
print("--------------------------------------")

def perfect(n):
    s=0
    for i in range(1,n):
        if n%i==0:
            print(i,end=" ")
            s=s+i
    return s
    print("\n")
n=int(input("Enter the number : "))
if n==perfect(n):
    print("this is perfect number")
else:
    print("this is the not a perfect number")

