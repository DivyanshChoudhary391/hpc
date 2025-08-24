#include <stdio.h>

void fib(int num){
    int first=0;
    int second=1;
    printf("%d  %d ", first,second);
    int next=first +second;

    while(next<=num){

        printf("%d  ",next);
        first=second;
        second= next;
        next =first +second;
        
    }
}

int main(){
    int num;
    printf("enter the number till which you want to have the fibonaaci series \n");
    scanf("%d",&num);

    fib(num);
    return 0;

    
}