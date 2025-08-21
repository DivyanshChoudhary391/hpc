# include <stdio.h>

int fact(num){
    if(num==0 || num==1){
        return 1;
    }
    else 
        return num*fact(num-1);

}

int main(){
    int num;
    printf("enter the number for which you want factorial \n");
    scanf("%d",&num);
    int factorial=fact(num);
    printf("the factorial of %d is %d",num,factorial);

    return 0;

}