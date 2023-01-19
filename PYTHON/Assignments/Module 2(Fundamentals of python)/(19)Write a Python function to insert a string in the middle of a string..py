#Write a Python function to insert a string in the middle of a string.
def string(s,word):
    l=len(s)//2
    return s[:l] + word + s[l:]
    #print(s[:l] + word + s[l:])
s=input("Enter a string :")
sub=input("Enter a char to middle :")
#print(string('hello','hy'))
print(string(s,sub))
