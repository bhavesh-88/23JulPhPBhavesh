#Swap two variable using third variable
a=int(input("Enter First number a: "))
b=int(input("Enter second number b: "))

print("Value before swapping")
print("A=",a,"B=",b)

temp=a
a=b
b=temp

print("Value after swapping")
print("A=",a,"B=",b)

print("---------------------------------------")
#Swap two variable without third variable
a=int(input("Enter First number a: "))
b=int(input("Enter second number b: "))

print("Value before swapping")
print("A=",a,"B=",b)

a,b=b,a

print("Value after swapping")
print("A=",a,"B=",b)
