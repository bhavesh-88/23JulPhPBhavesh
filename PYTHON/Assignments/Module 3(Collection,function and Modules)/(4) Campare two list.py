list1=[1,4,3,5,8]
list2=[4,1,5,3,8]

print(list1)
print(list2)
a=set(list1)
b=set(list2)

print(a)
print(b)

if a==b:
    print("list are equal")
else:
    print("list not equal")

print("-----------------------------------------")
#list1=list(input("Enter list elements"))
#list1=int(list(input("Enter list elements")))
#print(list1)
list1=[1,4,3,5,8]
list2=[4,1,5,3,8]
list3=[8,4,3,5,8]

list1.sort()
list2.sort()
list3.sort()

if list1==list2:
    print("list are equal")
else:
    print("list are not equal")
if list1==list3:
    print("list are equal")
else:
    print("list are not equal")

