# include <stdio.h>
 
int main(){
    int num;
    printf("enter the number till which you want the sum ");
    scanf("%d",&num);

    int sum=0;
    while(num!=0){
        sum=sum+num;
        num--;
        
    }
    printf("sum from 1 to N is %d",sum);
}