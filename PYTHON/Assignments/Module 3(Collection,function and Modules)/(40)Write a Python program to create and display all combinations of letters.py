#Write a Python program to create and display all combinations of letters,
#selecting each letter from a different key in a dictionary.
#Sample data: {'1': ['a','b'], '2': ['c','d']}
'''
print("----------------------------")
d={'1':['a','b'],'2':['c','d']}
l=list(d.values())
print(l)
for i in l[0]:
    for j in range(1,len(l)):
        for x in l[1]:
            s=i+x
            print(s)
            
print("-------------------------------")
'''
'''
d={'A':['a','b','c'],'B':['d','e','f']}
l=list(d.values())
print(l)
for i in l[1:]:
    for j in l[0]:
        for x in i:
            print(j+x)
  '''          
d={'A':['a','b','c'],'B':['d','e','f']}
l=list(d.values())
print(l)
for i in l[0]:
    for j in l[1]:
          print(i+j)
