#Write a Python script to sort (ascending and descending) a dictionary by
#value.

d={"black":1,"yellow":5,"green":3,"white":2,"blue":4}
print(d)
print(d.keys())
print(d.values())
asc=sorted([(key,value)for(value,key) in d.items()])
print("sorting in acending order :",asc)
desc=sorted([(key,value)for(value,key) in d.items()],reverse=True)
print("sorting in decending order :",desc)
print("----------------------------------------------------")
'''
import operator
d={"blue":4,"black":1,"yellow":5,"green":3,"white":2}
print(d)
print(d.keys())
print(d.values())
#by key than itemgetter(0)
asc=sorted(d.items(),key=operator.itemgetter(1))
print("sorting in acending orrder :",asc)
desc=sorted(d.items(),key=operator.itemgetter(1),reverse=True)
print("sorting in decending orrder :",desc)
'''
print("-----------------------------------------------------")
'''
d={1:"black",2:"white",3:"green",4:"blue",5:"yellow"}
print(d)
print(d.keys())
print(d.values())
'''
