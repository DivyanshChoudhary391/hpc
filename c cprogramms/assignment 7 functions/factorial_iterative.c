# include <stdio.h>
// # include <conio.h>

// int factorial(int n);
int factorial(int n){
    int prod=1;

    // using for  loop for iteration
    for(int i =1;i<=n;i++){
        prod=prod*i;

    }
    return prod;
}

int main(){
    int num,fact;
    printf("enter the number for which u want to find factorial\n");
    scanf("%d", &num);
    fact=factorial(num);
    printf("the factorial of %d is %d" ,num ,fact);
    return 0;
}