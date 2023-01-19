#Write a Python program to unzip a list of tuples into individual lists.

l=[(1,2,3),("white","black","red"),("colour","colour","colour")]
print("List : ",l)
print("unzip the list ")
print(list(zip(*l)))
print("---------------------------------------------")
l=[(1, 'white', 'colour'), (2, 'black', 'colour'), (3, 'red', 'colour')]
print("List is :",l)
l1=[[i for i,j,k in l],[j for i,j,k in l],[k for i,j,k in l]]
print("unzip the list :",l1)    
print("---------------------------------------------")
'''
l=[(1, 'white', 'colour'), (2, 'black', 'colour'), (3, 'red', 'colour')]
print("List is :",l)
a=[]
b=[]
c=[]
d=[]
for i in l:
    a.append(i[0])
    b.append(i[1])
    c.append(i[2])
d.append(tuple(a))
d.append(tuple(b))    
d.append(tuple(c))    
print("unzip the list :",d)

'''
