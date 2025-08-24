# include <stdio.h>
int main(){
    int num;
    printf("enter the number for which you want the multiplication table\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d * %d is %d\n",num,i,num*i);
    }
    return 0;
}