#Write a Python function that takes two lists and returns true
#if they have at least one common member.

a=[1,2,3,4,5]
b=[6,7,8,9,1]
print("list1 :",a)
print("list2 :",b)
result=False
for i in a:
    for j in b:
        if i==j:
            result=True
            
print(result)            
print("--------------------------")
'''
a=(input('list1 :'))
b=(input('list2 :'))
c=[]
for i in a:
    for j in b:
        if i==j:
            c.append(i)
print("common elements")            
print(c)
'''
print("------------------------------")
def comman(list1,list2):
    result=False    
    for i in list1:
        for j in list2:
            if i==j:
                result=True
                return result
#a=[1,2,3,4,5]
#b=[5,6,7,8]
a=[x for x in input("Enter list1 : ").split()]
b=[x for x in input("Enter list1 : ").split()]
print(comman(a,b))
                


            



