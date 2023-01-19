#Write a Python program to count the number of strings where the string length
#is 2 or more and the first and last character are same from a given
#list of strings.

list1=['abc','aba','pathan','121','','333','a12']
count=0
print(list1)
for i in list1:
    if len(i)>2 and i[0]==i[-1]:
        print("The given words are : ",i)
        count=count+1
print("no of words you want: ",count)
