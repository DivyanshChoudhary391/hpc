// Q1. Write a C program to read 5 integers into an array and display
// them.
# include <stdio.h>

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter the number at %d index",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;


}