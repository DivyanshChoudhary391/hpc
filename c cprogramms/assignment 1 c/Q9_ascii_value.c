// 9. Write a program to print the ASCII value of a character.

# include <stdio.h>

int main(){
    char ch;
    printf("enter the character for which you want to print the ascii value\n");
    scanf("%c",&ch);

    printf("%d",(int)ch);

    return 0;
}