#Write a Python program to get a single string from two given strings,
#separated by a space and swap the first two characters of each string.
str1=input("Enter string 1 :")
str2=input("Enter string 2 :")
newstr1=str2[0:2]+str1[2:]
newstr2=str1[0:2]+str2[2:]
newstring=newstr1+','+newstr2
#print("newstring : ",newstr1,"",newstr2)
print("newstring : ",newstring)
