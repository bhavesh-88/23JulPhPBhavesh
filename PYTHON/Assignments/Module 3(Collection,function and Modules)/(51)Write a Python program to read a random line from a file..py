#Write a Python program to read a random line from a file.

import random
def randomline(file):
    line=open(file).read().splitlines()
    return random.choice(line)

print(randomline("file.txt"))
    
