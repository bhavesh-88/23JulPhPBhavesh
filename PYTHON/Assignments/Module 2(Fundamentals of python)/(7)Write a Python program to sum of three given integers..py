#Write a Python program to sum of three given integers. However, if
#two values are equal sum will be zero.
a=int(input("Enter First number"))
b=int(input("Enter Second number"))
c=int(input("Enter third number"))

if(a==b or b==c or c==a):
    print("Sum will be Zero")
else:
    sum=a+b+c
    print("Sum =",sum)
print("--------------------------------------------------")
def Sum(a,b,c):
    if a==y or y==z or x==z:
        sum=0
    else:
        sum=a+b+c
    return sum
x=int(input("Enter First number"))
y=int(input("Enter Second number"))
z=int(input("Enter third number"))

print(Sum(x,y,z))
