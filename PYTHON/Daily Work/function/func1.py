'''
userdefined function
function: it is a set instruction that perform a specific task
'''
#function with no argument and no return value
#()=perameter
 #arguments
def printline():
    print("*"*50)

printline()
print("welcome to user defined function in python")
printline()

#function with argument and without return value
def add(a,b):
    print("Addition : ",a+b)

x=int(input("Enter value :"))
y=int(input("Enter value :"))
add(x,y)
printline()
#function with argument and  with return value
def sub(a,b):
    return a-b
printline()
x=int(input("Enter value :"))
y=int(input("Enter value :"))
#ans=sub(x,y)
print("substraction :",sub(x,y))







