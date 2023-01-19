#Write a Python program to get the Fibonacci series of given range
n=int(input("Enter number"))
a,b=0,1
print(a,end=" ")
while b<n:
    print(b,end=" ")
    a,b=b,a+b
print()
print("------------")

n=int(input("Enter number"))
a,b=0,1
c=0
if n<=0:
    print("Please Enter number greater than 0")
else:    
    for i in range(0,n):
        print(c,end=" ")
        a=b
        b=c
        c=a+b
