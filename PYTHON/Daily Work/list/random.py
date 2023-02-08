import random
#print(random.randint(1,10))

#l=[1,2,"tops",True,3,7,8,"pythan",10]
#print(random.choice(l))

l=[]
lucky=[]

for i in range(1,101):
    l.append(i)

for i in range(10):
    num=random.choice(l)
    lucky.append(num)
    l.remove(num)
print(l)
#print(lucky)
#sorting
#lucky.sort()
lucky.sort(reverse=True)
print(lucky)
