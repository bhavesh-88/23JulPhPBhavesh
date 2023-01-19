t=("bhavesh",True,3.3,2,'&',2)
print(t)
print(type(t))

t2=()
t2=tuple(input("Enter element").split())
print(t2)

t3=input("Enter element")
T3=tuple(i for i in t3.split())
print(T3)

values=input("Enter element")
list=values.split(",")
tuple=tuple(list)
print("list : ",list)
print("tuple :",tuple)

l=[]
n=int(input("enter the number of elements"))
for i in range(1,n+1):
    ele=int(input("Enter elements"))
    l.append(ele)
print(l)
t=tuple(l)
print(t)


