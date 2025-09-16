# Q18: Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string.
# Sample String : 'abc', 'xyz' 
# Expected Result : 'xyc abz'

string1=input("enter the first string\n")
string2=input("enter the second string\n")
string3=(string2[0:2]+string1[2:]+" "+string1[0:2]+string2[2:])
print(string3)