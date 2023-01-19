#Write a Python program to calculate surface volume and area of a
#cylinder

#surface area= 2 pi r h+ 2 pi r2
#volume=pi r2 h
h=float(int("Enter height of a cylinder :" ))
r=float(int("Enter radius of a cylinder :" ))
pi=3.14
volume=pi*r*r*h

area=((2*pi*r)*h+(2*pi*r*r))
area=2*pi*r(r+h)
print("surface volume is :",volume)
print("Area is : ",area)
