// Q2. Write a C program to find the sum of all elements in an array of
// 10 integers.

# include <stdio.h> 

int main(){
    int arr[10];
    int result=0;
    for(int i=0;i<10;i++){
        printf("enter the %d th number",i);
        scanf("%d",&arr[i]);
        result=result+arr[i];
    }

    printf("the sum of those 10 numbers is %d",result);

    return 0;
}