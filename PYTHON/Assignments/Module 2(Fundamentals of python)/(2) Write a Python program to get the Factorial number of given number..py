n=int(input("Enter any number"))
f=1
if n< 0:
   print("Sorry, factorial does not exist for negative numbers")
elif n== 0:
   print("The factorial of 0 is 1")
else:
    for i in range(1,n+1):
        f=f*i
print(" The factrial of",n,"is",f)    

#n=int(input("Enter any number"))
#f=1 
#while (n>0):
 #   f=f*n
  #  n=n-1
#print("The factrial of",n,"is",f)    
