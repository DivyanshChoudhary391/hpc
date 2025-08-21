# include <stdio.h>

int max(int arr[]){
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;
}

int min(int arr[]){
    int mini=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }

    }
    return mini;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int maximum=max(arr);
    int minimum=min(arr);

    printf("the maximum of number of this array is %d",maximum);
    printf("the minimum of number of this array is %d",minimum);
    
}