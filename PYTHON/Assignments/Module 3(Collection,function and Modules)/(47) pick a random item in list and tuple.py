#How can you pick a random item from a list or tuple?

import random
l=[1,"A",2,"B",3,"C",4,"D",5,"E",6,"F",7,"G"]
print("list :",l)
print("Random item in list :",random.choice(l))
print("Random item in list :",random.sample(l,14))

i=random.randrange(len(l))
b=l[i]
print("Random item in list :",b)
j=random.randint(0,len(l)-1)
a=l[j]
print("Random item in list :",a)
k=int(random.random()*len(l))
o=l[k]
print("Random item in list :",o)

print("------------------------------------")
t=[1,"a",2,"b",3,"c",4,"d",5,"e",6,"f",7,"g"]
print("tuple :",t)
print("Random item in tuple :",random.choice(t))
print("Random item in tuple :",random.sample(t,14))

i=random.randrange(len(t))
print("Random item in tuple :",i)
j=random.randint(0,len(t)-1)
print("Random item in tuple :",j)
