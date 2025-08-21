// wap to read 5 integers into array and display them
# include <stdio.h>

void display(int arrs[]){
    int length = 5;
    for(int i=0;i<length;i++){
        printf("%d",arrs[i]);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    display(arr);

}