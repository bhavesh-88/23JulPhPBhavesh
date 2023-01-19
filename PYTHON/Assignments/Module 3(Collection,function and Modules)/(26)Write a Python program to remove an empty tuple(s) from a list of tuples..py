#Write a Python program to remove an empty tuple(s) from a list of tuples.

l=[( ),(1,2),( ),("a","A"),(),("B"," "),("A",1),()]
print("List :",l)
l=[i for i in l if i]
print("Remove empty tuple than list : ",l)
print("---------------------------------------------")
'''
l=[( ),(1,2),( ),("a","A"),(),("B"," "),("A",1),()]
print("List :",l)
for i in l:
    #if (i==0):
    if (len(i)==0):
        l.remove(i)
print("Remove empty tuple than list : ",l)

'''
