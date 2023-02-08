import udf

while True:
    print("1. oddeven")
    print("2. Maxoftwo")
    print("3. Maxofthree")
    print("4. fibonacci")
    print("5. prime")
    print("6. pattern")
    print("7. Exit")
    print("--------------------------------")

    choice=int(input("Enter your choice : "))

    if choice==1:
        a=int(input("Enter value "))
        udf.oddeven(a)
        print("*"*20)
    elif choice==2:
        a=int(input("Enter value "))
        b=int(input("Enter value "))
        udf.maxoftwo(a,b)
        print("*"*20)
    elif choice==3:
        a=int(input("Enter value "))
        b=int(input("Enter value "))
        c=int(input("Enter value "))
        udf.maxofthree(a,b,c)
        print("*"*20)
    elif choice==4:
        a=int(input("Enter value "))
        udf.fibonacci(a)
        print("*"*20)
    elif choice==5:
        a=int(input("Enter value "))
        udf.prime(a)
        print("*"*20)
    elif choice==6:
        udf.pattern(a)
        print("*"*20)
    else:
        print("thank you")
        break
