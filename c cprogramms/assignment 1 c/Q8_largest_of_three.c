// 8. Write a program, which will find out the largest of three inputs given by the user ,
// only use if and else if ladder .
# include <stdio.h>

int main(){
    printf("enter the three numbers which you want to compare\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>=c){
            printf("%d is the largest of three ",a);
        }
        else if(a<=c){
            printf("%d is the largest",c);

        }
    }
    else{
        if(b>=c){
            printf("%d is the largest of three",b);
        }
        if(c>=b){
            printf("%d is the largest",c);

        }
    }

    return 0;
}