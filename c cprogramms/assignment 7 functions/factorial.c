# include <stdio.h>


int fact(int number){
    
    if(number==1 || number==0){
        return 1;

    }
    return number*fact(number-1);
}

int main (){
    int number;
    printf("enter the number\n");
    scanf("%d",&number);

    int factorial;
    
    factorial=fact(number);
    printf("factorial of that number is %d",factorial);

    return 0;
}