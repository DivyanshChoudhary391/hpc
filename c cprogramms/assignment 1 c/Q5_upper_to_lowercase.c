// 5. Write a program to read a character in upper case and then print it in lower case
# include <stdio.h>

int main(){
    char ch;
    printf("please enter the character which you want to make in lowercase\n");
    scanf("%c",&ch);
    printf("the lower case character is %c ",ch+32);

    return 0;
}
