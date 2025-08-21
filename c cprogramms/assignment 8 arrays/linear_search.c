# include <stdio.h>

int linear_search(int arr[],int key){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            // printf("%d",i);
            return i;
        }
    }
    return -1;
}
int main(){

    int key;
    printf("enter the number which u want to find ");
    scanf("%d",&key);
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int index=linear_search(arr,key);
    // printf("%d",key);

    printf("the number is found at index %d",index);

}