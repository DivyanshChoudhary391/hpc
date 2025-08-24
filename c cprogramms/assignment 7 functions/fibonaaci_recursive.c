# include <stdio.h>

int fib(int terms){
    if(terms==0){
        return 0;

    }
    if(terms==1){
        return 1;

    }
    return (fib(terms-1)+fib(terms-2));
    

}

int main(){
    printf("enter the range(left and right)  for which you want to print the fibonaaci series");
    int left,right;
    scanf("%d",&left);
    scanf("%d",&right);

    fibonaaci_print(left, right);

    





    return 0;
}