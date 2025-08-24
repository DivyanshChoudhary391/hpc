# include <stdio.h>

int main(){
    int num;
    printf("enter the number which u want to reverse");
    int reverse=0;
    scanf("%d",&num);
    int rem=0;
    
    while(num>0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;


        
    }
    printf("%d",reverse);


    return 0;
}