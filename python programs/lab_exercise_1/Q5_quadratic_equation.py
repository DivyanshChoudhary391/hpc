# Q5: Write a Python Program to Solve the quadratic equation ax**2 + bx + c = 0
# # Coeffients a, b and c are provided by the user

# [Hint: import complex math module - import cmath]

from  math import *

a=int(input("enter the first coefficient a\n"))
b=int(input("enter the second coefficient b\n"))
c=int(input("enter the third coefficient c\n"))

discriminant=b*b-4*a*c

deno=2*a

if(discriminant>0):
    print(-b+sqrt(discriminant)/deno)
    print(+b+sqrt(discriminant)/deno)

elif(discriminant==0):  
    print(-b/deno)
    print(+b/deno)

else:
    real_roots=-b/deno
    imag=sqrt(-discriminant)/deno
    print(complex(real_roots,imag))
    print(complex(real_roots,-imag))