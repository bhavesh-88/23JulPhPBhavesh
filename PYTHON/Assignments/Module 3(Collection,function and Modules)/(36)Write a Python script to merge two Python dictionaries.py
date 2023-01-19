#Write a Python script to merge two Python dictionaries

d1={"Mon":1,"Tue":2,"Wed":3}
d2={"Thus":4,"Fri":5,"Sat":6,"Sun":7}
print(d1)
print(d2)
d1.update(d2)
print("merge dict : ",d1)
print("----------------------------------")
print(d1|d2)
print("-------------------------------------")
print({**d1,**d2})
print("--------------------------------------")
d3=d1.copy()
d3.update(d2)
print(d3)
