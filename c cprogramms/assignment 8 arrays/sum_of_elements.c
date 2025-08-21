// wap to get the sum of array elements
# include <stdio.h>

void display(int arrs[]){
    int length = 10;
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+arrs[i];
        // printf("%d",arrs[i]);
    }
    printf("the sum of these array elemets is %d ",sum);
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    display(arr);

}