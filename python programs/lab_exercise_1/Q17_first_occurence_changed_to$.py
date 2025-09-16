# Q17: a Python program to get a string from a given string where all occurrences of its first char have been changed to '$', except the first char itself.
# Sample String : 'restart'
# Expected Result : 'resta$t'

string1=input("please enter the string which you want to do the operation\n")
char1=string1[0]
result=char1


for i in string1[1:]:
    if(i == char1):
        result+='$'
    else:
        result+=i    
        

print(result)