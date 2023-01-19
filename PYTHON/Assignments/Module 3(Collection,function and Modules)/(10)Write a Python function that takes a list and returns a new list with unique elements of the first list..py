#Write a Python function that takes a list and
#returns a new list with unique elements of the first list.

def uniquelist(l):
    a=[]
    for i in l:
        if i not in a:
            a.append(i)
    return a
print(uniquelist([1,1,1,3,4,6,9,45,54]))
print("-------------------------------")
'''
l=[1,2,2,3,4,5,6,5,5,3,2,4,76]
l2=[]
for i in l:
    if i not in l2:
        l2.append(i)
print(l2)        
'''
