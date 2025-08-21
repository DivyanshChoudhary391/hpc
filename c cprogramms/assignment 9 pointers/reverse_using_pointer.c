# include <stdio.h>
# include <conio.h>

void reverse(int arr[],int *p){
    for(int i=0;i<10;i++){
        printf("the values stored in this array are %u\n",*(p+i));
    }
    
}

int main(){
    int *p;
    int arr[10]={1,2,3,4,5,6,7,8,9.10};
    *p= &arr;

    reverse(arr,p);


}