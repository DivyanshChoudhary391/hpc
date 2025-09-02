# include <iostream>
using namespace std;

void take_input(int arr[]){
    for(int i=0;i<5;i++){
        cout<<"enter the values to be entered";
        cin>>arr[i];
    }

    
}

int sums(int arr[]){
    int sum=0;

    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[5];
    take_input(arr);

    int summation =sums(arr);
    cout<<summation;

    return 0;
    
}