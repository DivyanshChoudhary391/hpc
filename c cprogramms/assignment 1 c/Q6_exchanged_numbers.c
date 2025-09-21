// 6. Write a program, which takes two integer numbers as input and it shows their
// exchanged value. (Don’t use third variable)

# include <stdio.h>

int main(){
    int num1,num2;
    printf("enter the two integer numbers which you want to change the values\n");
    scanf("%d %d",&num1,&num2);

    printf("%d %d before swapping \n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("%d %d after swapping \n",num1,num2);
    
    return 0;
}