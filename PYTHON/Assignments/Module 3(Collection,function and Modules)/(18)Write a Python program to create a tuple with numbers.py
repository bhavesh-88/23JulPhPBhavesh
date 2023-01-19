#Write a Python program to create a tuple with numbers

t=(10,20,30,40,50)
print(t)

t=()
n=int(input("Enter the total number"))
for i in range(1,n+1):
    value=int(input("enter element :"))
    t=t+(value,)
print("tuple :",t)    
