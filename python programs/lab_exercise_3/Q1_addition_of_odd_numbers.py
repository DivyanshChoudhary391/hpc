# Q1: Write a python program to add all the odd numbers from 0 to 20.

i1=range(0,20)
sum=0

for i in range(0,21):
    if(i%2!=0):
        sum+=i

print(f"the sum of all odd numbers from 0 to 20 are{sum}")    
