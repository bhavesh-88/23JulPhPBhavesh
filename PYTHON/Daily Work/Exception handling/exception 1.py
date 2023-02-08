print("start code")

try:
    a=int(input("Enter value "))
    b=int(input("Enter value "))
    c=a/b
    print("division : ",c)
except:
    print("Exception caught")
print("end code")
print("-----------------------------------------")
print("start code")

try:
    a=int(input("Enter value "))
    b=int(input("Enter value "))
    c=a/b
    print("division : ",c)
    l=[1,2,3,4,5]
    index=int(input("Enter index number :"))
    print(l[index])
except ZeroDivisionError as e:
    print("Exception caught",e)
except ValueError as e:
    print("Exception caught",e)
except IndexError as e:
    print("Exception caught",e)
print("end code")
print("----------------------------------------")
print("start code")

try:
    a=int(input("Enter value "))
    b=int(input("Enter value "))
    c=a/b
    print("division : ",c)
    l=[1,2,3,4,5]
    index=int(input("Enter index number :"))
    print(l[index])
except Exception as e:
    print("Exception caught",e)
finally:
    print("finally called")
print("end code")
