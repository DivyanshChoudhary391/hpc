# include <stdio.h>

int main(){

    int num;
    printf("enter the number for which you want the factorial\n");
    scanf("%d",&num);

    int prod=1;
    
    for(int i=1;i<=num;i++){
        prod=prod*i;
    }
    printf("the factorial of %d is %d ",num,prod);

    return 0;
}