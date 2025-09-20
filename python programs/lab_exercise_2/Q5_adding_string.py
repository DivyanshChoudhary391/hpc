#  Q5: Write a Python program to add 'ing' at the end of a given string (length should be at least 3). 
# If the given string is already ends with 'ing' then add 'ly' instead.

string1=input("enter the string for which you want to add ing\n")
string2="ing"
if(len(string1)>=3):
    print(string1.append(string2))
