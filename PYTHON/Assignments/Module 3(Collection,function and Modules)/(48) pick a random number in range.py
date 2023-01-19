#How can you pick a random item from a range?

import random

print(random.random())
print("Random number is the range : ",random.choice([1,2,3,4,5,6,7,8,9]))
print("Random number is the range : ",random.randint(1,100))
#randerange(start,stop,step)
print("Random number is the range : ",random.randrange(0,100,2))
l=[]
for i in range(0,10):
    l.append(random.randint(10,21))

print(l)    
#without duplicate value list
n=random.sample(range(0,20),10)
print(n)
