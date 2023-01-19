#Write a Python function that takes a list of words
#and returns the length of the longest one.

#s=input("Enter a string :")
#l=s.split()
#largest=len(l[0])
#for i in l:
 #   if len(i)>largest:
  #      largest=len(i)
   #     word=i
#print("Largest word :",word)        
#print("Largest string length : ",largest)
print("-------------------------------------")
def longest_word(string):
    l=string.split()
    longest=len(l[0])
    for i in l:
        if (len(i)>longest):
            longest=len(i)
    print("Longest word is :",i," and length is :",longest)
s=input("Enter a string :")
longest_word(s)    
