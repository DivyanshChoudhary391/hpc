# Q3: Write a program to display the sum of squares of the first ten even natural numbers

# for i in range(1,21):
#     if(i%2==0):
#         squares=i*i
#         sum=sum+squares

sum=0
j=0
number=2
while(j!=10):
    if(number%2==0):
        j+=1
        squares=number*number
        sum+=squares
    number+=1



print(f"the sum of squares of numbers from first 10 natural numbers is {sum} ")