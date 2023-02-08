#file management
#notpad
#by default .txt file mange
#w+=write and read
#r+-read and write
#a-append
file=open("tops2.txt","w+")
file.write("this is w+ mode example :")
print("current possition",file.tell())
#file.seek(0)
file.seek(11)
print(file.read())
file.close()
print("--------------------------------------------------")

#file must be exits
#file=open("tops1.txt","r+")
#print(file.read())
#file.close()

#print("-----------------------------------------------")


