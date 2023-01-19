#Write a Python program to test whether a passed letter is a vowel or
#not.
l = input("Enter the character: ")
if l.lower() in ('a', 'e', 'i', 'o', 'u'):
  print("Vowel")
elif l.upper() in ('A', 'E', 'I', 'O', 'U'):
  print("Vowel")
else:
  print("Consonant")

print("-------------------------------------------")
ch = input("Enter the character : ")
if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U'):
  print("Vowel")
else:
  print("Consonant")

  
