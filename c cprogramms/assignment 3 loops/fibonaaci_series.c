# include <stdio.h>

int main(){
    int num;
    printf("enter the number of terms you want in the fibonaaci series\n");
    scanf("%d",&num);

    int first=0;
    int second=1;
    printf("%d %d ",first,second);
    int next=first+second;

    for(int i=1;i<=num-2;i++){
        next=first+second;
        printf("%d  ",next);
        first=second;
        second=next;
        
    }

    return 0;
}