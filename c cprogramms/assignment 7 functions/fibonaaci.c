#include <stdio.h>

void fib(int num){
    int first=0;
    int second=1;
    printf("%d %d", first,second);
    int next=second;

    while(second<num){

        next =first +second;
        printf("%d",next);
        printf("\t");
        // next=second;
        first=second;
        second= next;
        
    }
}

int main(){
    int num;
    printf("enter the nth term till which you want to have the fibonaaci series \n");
    scanf("%d",&num);

    fib(num);
    return 0;

    
}