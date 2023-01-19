#Write a Python function to check whether a number is in a given range

def number(st,end,key):
    a=set()
    for i in range(st,end+1):
        a.add(i)
    print("Set is :",a)
    if key in a:
        print(key,"is persent in the set")
    else:
        print(key,"is not persent in the set")
a=int(input("Enter the start point"))
b=int(input("Enter the end point"))        
n=int(input("Enter the element"))
number(a,b,n)
print("----------------------------------")
'''
def Range(n):
    if n in range(1,100):
        print(n,"is persent in the range")
    else:
        print("not persent in the range")
n=int(input("Enter the element"))
Range(n)
        
'''
