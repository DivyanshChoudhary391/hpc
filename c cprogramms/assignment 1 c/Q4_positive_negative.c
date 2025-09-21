# include <stdio.h>

int main(){
    int num;
    printf("enter the number which you want to check for the sign\n");
    scanf("%d",&num);
    if(num>=0){
        printf("The number is positive\n");
        if(num%2==0){
            printf("Number is even also\n");
        }
        else{
            printf("Number is odd\n");
        }
    }
    else {
        printf("The number is negative");
    }


    return 0;
}