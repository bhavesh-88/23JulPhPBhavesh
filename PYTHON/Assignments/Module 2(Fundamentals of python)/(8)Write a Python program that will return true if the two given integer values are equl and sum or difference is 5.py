#Write a Python program that will return true if the two given integer
#values are equal or their sum or difference is 5.

a=int(input("Enter first value"))
b=int(input("Enter second value"))
if(a==b or a+b ==5 or a-b==5):
    print(True)
else:
    print(False)
print("----------------------")
a=int(input("Enter first value"))
b=int(input("Enter second value"))

def True_false(a,b):
    if(a==b or a+b ==5 or a-b==5):
        return True
    else:
        return False
#print(True_false(2,5))
print(True_false(a,b))
