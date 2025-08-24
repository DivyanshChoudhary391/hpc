# include <stdio.h>

int main(){
    printf("enter the number which u want to be checked for prime\n");
    int num;
    scanf("%d",&num);
    int flag=0;

    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=1;
                break;
        }
    }
    if(flag==0){
        printf("the number is prime");
    }
    else{
        printf("the number is not prime");
    }





    return 0;
}