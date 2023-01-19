#Write a Python program to find the second smallest number in a list.

#l=[2,34,56,876,12,567,33,235,785,332,234,567]
#print(l)
l=[]
n=int(input("enter the number of elements"))
for i in range(1,n+1):
    ele=int(input("Enter elements"))
    l.append(ele)
lenght=len(l)
l.sort()
print(l)
print("Largest number in the list :",l[lenght-1])
print("Smallest number in the list :",l[0])
print("Second Largest number in the list :",l[lenght-2])
print("Second Smallest number in the list :",l[1])

