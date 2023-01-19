#How will you create a dictionary using tuples in python

t=(("red",1),("white",2),("brown",3),("black",4),("blue",5))
print("Tuple : ",t)
print(type(t))
d=dict(t)
#d=dict((a,b) for a,b in t)
print("convert tuple to dictionary :",d)
print(type(d))
print("--------------------------------------------")
'''
t1=("red","black","brown","green","blue")
t2=(1,2,3,4,5)
print("The tuples keys :",t2)
print("The tuples values : ",t1)
if len(t1)==len(t2):
    d=dict(zip(t2,t1))

print("Dictionary :",d)
    
'''
