import random
# split return type list
data=open("data.txt","w")
for i in range(10):
    num=random.randint(1,100)
    data.write(str(num)+",")
data.close()

data=open("data.txt","r")
even=open("even.txt","w")
odd=open("odd.txt","w")
prime=open("prime.txt","w")
#print(data.read().split(",")[:-1])
l=data.read().split(",")[:-1]
for i in l:
    if int(i)%2==0:
        even.write(i+",")
    else:
        odd.write(i+",")
    if int(i)%2!=0:
        for j in range(3,int(int(i)/2)+1,2):
            if int(i)%j==0:
                break
        else:
            prime.write(i+",")    
data.close()
even.close()
odd.close()

print("data file content")
data=open("data.txt","r")
print(data.read())
data.close()

print("even file content")
even=open("even.txt","r")
print(even.read())
even.close()

print("odd file content")
odd=open("odd.txt","r")
print(odd.read())
odd.close()

print("prime file content")
prime=open("prime.txt","r")
print(prime.read())
prime.close()

