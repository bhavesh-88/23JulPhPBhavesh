#Write a Python script to concatenate following dictionaries to create a
#new one.

d1={1:"red"}
d2={2:"white"}
d3={3:"brown"}
d={}
for i in (d1,d2,d3):
    d.update(i)
print(d)
