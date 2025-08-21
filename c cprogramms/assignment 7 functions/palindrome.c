# include <stdio.h>

int palindrome(int num){

    
    int sum=0;
    int rem=0;
    while(num!=0){
        rem=num%10;
        sum=rem+sum*10;
        num=num/10;
        

    }
    printf("%d",sum);

    return sum;

}
int main(){
    int num;
    printf("enter the number which you want to check for palindrome \n");
    scanf("%d",&num);

    int pali= palindrome(num);
    
    if(pali== num){
        printf("the number is palindrome ");
    }
    else
        printf("number is not palindome");



}