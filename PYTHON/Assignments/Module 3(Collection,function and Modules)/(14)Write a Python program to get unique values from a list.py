#Write a Python program to get unique values from a list

l=[]
l2=[]
n=int(input("enter the number of elements"))
for i in range(1,n+1):
    ele=int(input("Enter elements"))
    l.append(ele)
print(l)
for i in l:
    if i not in l2:
        l2.append(i)
print("unique value from list1 is :",l2)        
print("-------------------------------------------")
'''
l=[]
n=int(input("enter the number of elements"))
for i in range(1,n+1):
    ele=int(input("Enter elements"))
    l.append(ele)
print(l)
l=set(l)
newlist=list(l)
print("unique value from list :",newlist)        
'''
