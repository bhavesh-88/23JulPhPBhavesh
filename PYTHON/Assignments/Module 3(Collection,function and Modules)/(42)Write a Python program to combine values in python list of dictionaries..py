#Write a Python program to combine values in python list of dictionaries.
#Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount':
#300}, o {'item': 'item1', 'amount': 750}]

'''
l=[{'item':'item1','amount':300},{'item':'item2','amount':400},{'item':'item1','amount':750},{'item':'item2','amount':1000}]
l2=[]
for i in l2:
    l2.append(tuple(i.values()))
d={}
for j in l2:
    if j[0] in d:
        d[j[0]] +=j[1]
    else:
        d[j[0]] =j[1]
print(d)
'''
print("------------------------------------------------------")
from collections import Counter
l=[{'item':'item1','amount':300},{'item':'item2','amount':400},{
    'item':'item1','amount':750},{'item':'item2','amount':1000}]
d=Counter()
for i in l:
    d[i['item']]+=i['amount']
print(d)    
