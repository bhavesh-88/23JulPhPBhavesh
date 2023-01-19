#Write a Python function to calculate the factorial of a number (a
#nonnegative integer)

def fact(n):
    f=1
    if n<0:
        print("Sorry, Factorial does not exit for nagative number")
    elif n==0:
        print("The Factorial of 0 is 1")
    else:
        for i in range(1,n+1):
            f=f*i
        print("The Factorial of",n,"is :",f)    
n=int(input("Enter number :"))
fact(n)
print("-----------------------------------------------------")
'''
def fact(n):
    if n==0:
        return 1
    else:
        return n*fact(n-1)
n=int(input("Enter number :"))
fact(n)
print(fact(n))
'''
