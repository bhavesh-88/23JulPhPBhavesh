#Write a Python function to get the largest number, smallest num and
#sum of all from a list.
'''
l=[13,45,67,34,78,9,1]
print(l)
print("largest number in list :",max(l))
print("Smallest number in list :",min(l))
print("Sum of Total number in list :",sum(l))
print("---------------------------------------------")
'''
l=[]
total=0
n=int(input("Enter the numebr of elemets in list"))
for i in range(1,n+1):
    ele=int(input("Enter elements"))
    l.append(ele)

print(l)
for i in l:
    total=total+i
print("largest number in list :",max(l))
print("Smallest number in list :",min(l))
print("Sum of Total number in list :",total)
