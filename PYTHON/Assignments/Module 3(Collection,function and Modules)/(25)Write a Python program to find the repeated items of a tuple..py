#Write a Python program to find the repeated items of a tuple.

t=(1,2,3,4,5,6,1,1,1,1,3,4,8,9,0)
print("Tuple : ",t)
#print("Enter the items you will count : ",t.count(1))
l=int(input("Enter element items you will count :"))
count=t.count(l)
print(l,"appears",count,"times in tuple")
print("--------------------------------------------")
'''
t=(1,2,3,4,5,6,1,1,1,1,3,4,8,9,0)
print("Tuple :",t)
l=list(t)
l2=int(input("Enter element you will count :"))
for i in range(len(l)):
    l[i]=int(l[i])
count=t.count(l2)
print(l2,"appears",count,"times in tuple")
'''
