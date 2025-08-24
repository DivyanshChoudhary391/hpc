# include <stdio.h>

int main(){
    int num;
    printf("enter the number which you want to check for palindrome\n  ");

   

     int reverse=0;
    scanf("%d",&num);
    int rem=0;
    int original=num;
    
    while(num>0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;


        
    }
    if(original== reverse){
        printf("the number is palindrome ");

    }
    else{
        printf("the number is not palindrome");
    }
}