def oddeven(a):
    if a%2==0:
        print(a," is even")
    else:
        print(a," is odd")

def maxoftwo(a,b):
    if a>b:
        print(a," is max")
    else:
        print(b," is max")

def maxofthree(a,b,c):
    if a>b:
        if a>c:
            print(a," is max")
        else:
             print(c," is max")
    elif b>c:
        print(b," is max")
    else:
        print(c," is max")

def fibonacci(n):
    a,b=0,1
    print(a,end=" ")
    while b<n:
        print(b,end=" ")
        a,b=b,a+b
    print()

def prime(a):
    if a%2!=0:
        for i in range(3,int(a/2)+1,2):
            if a%i==0:
                print(a," is not prime")
        else:
            print(a," is nor prime")

def pattern(n):
    for i in range(1,n+1):
        print(" "*(n-1),"*"*i)













        
