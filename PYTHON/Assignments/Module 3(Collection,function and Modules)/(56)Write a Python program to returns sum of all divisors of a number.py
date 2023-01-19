#Write a Python program to returns sum of all divisors of a number

n=int(input("Enter the number : "))
count=0
l=[]
for i in range(1,n):
    if n%i==0:
        print(i,end=" ")
        count=count+1
        l.append(i)
print("")        
print("total",count,"divisor")
print("Sum of total divisor :",sum(l))
print("----------------------------------------")
