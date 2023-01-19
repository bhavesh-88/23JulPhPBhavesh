import random
for i in range(5):
#    random.seed(0)
    print(random.randint(1,100))
print("----------------------------")
random.seed(0)
print(random.randint(1,100))
print("-------------------------")
random.seed(0)
print(random.randint(1,100))
print(random.randint(1,100))
for i in range(5):
    random.seed(12)
    print(random.randint(10,20))
