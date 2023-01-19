#Write a Python program to remove duplicates from a list.

list1=[1,2,45,78,57,78,'abc','edf','abc',1,2]
uniqlist=[]
print(list1)
for i in list1:
    if i not in uniqlist:
        uniqlist.append(i)
print(uniqlist)        
print("------------------------------------------")
'''
list1=[1,2,45,78,57,78,'abc','edf','abc',1,2]
list1set=set(list1)
unique_list=list(list1set)

print(unique_list)
        
'''
