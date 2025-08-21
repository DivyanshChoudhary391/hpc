# include <stdio.h>

int swap(int *n1,int *n2){
    int temp;
    temp= *n1;
    *n1=*n2;
    *n2=temp;
    printf("%d %d%d",n1,n2,temp);
    
    return 0;
}

int main(){
    int *n1;
    int *n2;
    printf("enter two integer numbers ");
    scanf("%d %d",&n1,&n2);

    printf("n1 and n2 before swapping is %d %d \n",*n1,*n2);
    swap(n1,n2);
    printf("n1 and n2 after swapping is %d %d \n",*n1,*n2);

    return 0;
}