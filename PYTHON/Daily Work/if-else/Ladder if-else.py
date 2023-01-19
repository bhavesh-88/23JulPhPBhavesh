rno=int(input("Enter number : "))
sname=input("Enter a name : ")
s1=int(input("Enter marks of subject 1: "))
s2=int(input("Enter marks of subject 2: "))
s3=int(input("Enter marks of subject 3: "))

Total=s1+s2+s3
per=Total/3
print("Student name : ",sname)
print("Roll number : ",rno)
print("Total number : ",Total)
print("percentage : ",per)
        
if per>=70:
    print("Distinction")
elif per>=60:
    print("First class")
elif per>=50:
    print("Second class")
elif per>=40:
    print("Pass class")
else:
    print("Fail")
    
