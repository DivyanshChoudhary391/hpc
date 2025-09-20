#  Q7: write a Python program to find the largest number among the three input numbers

a=int(input("enter the first number \n"))
b=int(input("enter the second number \n"))
c=int(input("enter the third number \n"))

list1=[]
list1.append(a)
list1.append(b)
list1.append(c)

print(max(list1))

if(a>b):
    if(a>c):
        print(f"{a} is the largest")
    else:
        print(f"{c} is the largest")
else:
    if(b>c):
        print(f"{b} is the largest")
    else:
        print(f"{c} is the largest")            