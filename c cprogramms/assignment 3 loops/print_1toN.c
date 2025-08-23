# include <stdio.h>
// wap to print 1 to N using for loop 
int main(){
    int n;
    printf("enter the number till which you want to print ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        printf("%d \n",i);
    }
}