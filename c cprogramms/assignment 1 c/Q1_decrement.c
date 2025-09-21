//wap to generate the output 10,20 and 19 
// generate 19 after using decrement operator on 20

# include <stdio.h>

int main(){
    int num;
    printf("enter the number which you want to decrement \n");
    scanf("%d",&num);
    const int n1=10;
    printf("%d %d %d",n1,num,num--);

    return 0;

}