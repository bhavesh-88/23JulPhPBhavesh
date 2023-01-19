#Write a python program to sum of the first n positive integers
n=int(input("Enter number : "))
sum=0
i=1
while (i<=n):
   sum=sum+i
   i=i+1
print("The sum of the first",n,"positive integers",sum)   

print("-------------------------------------------")
n = int(input("Enter a positive integer: "))
 
total = n * (n+1) / 2
 
print("The sum of the first",n,"positive integers",total)
