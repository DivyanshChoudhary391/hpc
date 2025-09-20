#  Q8: Write a Python program to check if the input year is a leap year or not.

year=int(input("please enter the year for which you want to check for leap year"))

if(year%4==0):
    if(year%100==0):
        if(year%400==0):
            print(f"{year} is not a leap year")
        else:
            print(f"{year} is  a leap year")
    
    else:
        print(f"{year}  is a leap year")
else:
    print(f"{year} is not a leap year")