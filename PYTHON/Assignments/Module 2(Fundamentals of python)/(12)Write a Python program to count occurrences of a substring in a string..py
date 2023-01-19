#Write a Python program to count occurrences of a substring in a string.
string = "Python is programming language"
substring = "is"

count = string.count(substring)
print("The count is:", count)

print("------------------")


string=input("Enter String : ")
substring=input("Enter substing : ")
if substring in string:
    print(string.count(substring))
else:
    print("Substring is not available")
