# Q9: If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits without using any loop. (Hint: Use the modulus operator ‘%’) 

num=(input("please enter a 5 digit number \n"))
if(len(num)==5):
    sum=int(num[0])+int(num[1])+int(num[2])+int(num[3])+int(num[4])
print(f"sum of digits of {num} is {sum}")