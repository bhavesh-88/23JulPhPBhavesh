#Write a Python program to check multiple keys exists in a dictionary

student={"name":"Roshan","class":5,"Roll no":101,"Subject":"Computer"}
print(student)
print(student.keys() >={"class","name"})
print(student.keys() >={"class","roshan"})
print(student.keys() >={"class","Subject"})
