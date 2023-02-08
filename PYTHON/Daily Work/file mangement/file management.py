#file management
#notpad
#by default .txt file mange
#w-write
#r-read
#a-append
file=open("tops1.txt","w")
file.write("this is file management demo using python")
file.close()

print("file written successfuly")
print("-----------------------------------------------")
#file must be exits
file=open("tops1.txt","r")
print(file.read())
file.close()

print("-----------------------------------------------")
file=open("tops1.txt","a")
file.write("\nnow file this append")
file.close()
print("-----------------------------------------------")
file=open("tops1.txt","r")
print(file.read())
file.close()
