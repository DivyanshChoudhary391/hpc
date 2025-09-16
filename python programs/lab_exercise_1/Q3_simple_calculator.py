# Write a Python Program to make a simple calculator that can add, subtract, multiply and divide 

num1=float(input("please enter the first number\n"))
num2=float(input("please enter the second number\n"))
operation=int(input("please enter 1 for addition 2 for subtraction 3 for multiply and 4 for division "))

if(operation ==1):
    print (num1+num2)
elif(operation==2):
    print(num1-num2)
elif(operation==3):
    print(num1*num2)
if(num2!=0):
    if(operation==4):
        print(num1/num2)
else:
    print("cannot divide by zero") 


