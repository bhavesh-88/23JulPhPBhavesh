#Write a Python program to convert a list of tuples into a dictionary.

l=[("suraj",1),("bhavesh",2),("rajveer",3),("rasik",4)]
print("list : ",l)
print(type(l))
print(type(l[0]))
d={}
for a,b in l:
    d.setdefault(a,[]).append(b)
print("Convert list to dictionary")
print(d)
print(type(d))
print("-----------------------------------------------------")
l=[("suraj",1),("suraj",2),("suraj",3),("rasik",4),("rajveer",3),("rasik",4)]
print("list : ",l)
print(type(l))
print(type(l[0]))
d={}
for a,b in l:
    d.setdefault(a,[]).append(b)
print("Convert to dictionary")
print(d)
print("-----------------------------------------------------")
l=[("suraj",1),("bhavesh",1),("roshan",1),("rasik",4),("rajveer",3),("rasik",9)]
print("list : ",l)
print(type(l))
print(type(l[0]))
d={}
for a,b in l:
    d.setdefault(a,[]).append(b)
print("Convert to dictionary")
print(d)
print("----------------------------------------------------------------")
l=[("Red",1),("black",2),("white",3),("pink",4),("yellow",5)]
print("list : ",l)
print(type(l))
print(type(l[0]))
d=dict(l)
print("Convert to dictionary")
print(d)      

