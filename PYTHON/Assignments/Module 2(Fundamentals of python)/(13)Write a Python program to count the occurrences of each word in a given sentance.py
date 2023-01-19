#Write a Python program to count the occurrences of each word in a
#given sentence
s=input("Enter a string :")
print(s)
n=input("Enter the word you will count :")
s=s.split()
print(s)
count=0
for i in s:
    if n==i:
        count= count+1
print("Count of word is ",count)        
print("----------------------------------------")
s=input("Enter a string :")
print(s)
s=s.split()
print(s)
d=dict()
for i in s:
    if i in d:
        d[i]=d[i]+1
    else:
        d[i]=1
print(d)
print("---------------------------------------")
def word(s):
    d=dict()
    s=s.split()
    for i in s:
        if i in d:
            d[i]=d[i]+1
        else:
            d[i]=1
    return d
s=input("Enter a string :")
print(word(s))
