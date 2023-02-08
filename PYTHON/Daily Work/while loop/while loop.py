#while loop

n=int(input("enter number"))
sum=0
while n>0:
    sum=sum+n
    n=n-1
print("sum: ",sum)

#fibonacci series
#01 1 2 3 5 8 13
n=int(input("enter number"))
a,b=0,1
print(a,end=" ")
while b<n:
    print(b,end=" ")
    a,b=b,a+b

