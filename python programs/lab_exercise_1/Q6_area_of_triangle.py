# Q6: Write a Python Program to find the area of triangle
# # Three sides of the triangle a, b and c are provided by the user
from math import *

a=float(input("enter the first side of traiangle a\n"))
b=float(input("enter the second side of traiangle b\n"))
c=float(input("enter the third side of traiangle c\n"))

s=(a+b+c)/2

area=sqrt(s*(s-a)*(s-b)*(s-c))
print(f"area of triangle is {area}")