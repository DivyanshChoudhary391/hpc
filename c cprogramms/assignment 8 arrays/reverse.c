# include <stdio.h>
void print_reverse(int arr []){
    for(int i=0;i<10;i++){
        printf("%d",arr[9-i]);
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    print_reverse(arr);
}   