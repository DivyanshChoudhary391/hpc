# include <iostream>
using namespace std;

void take_input(int arr[]){
    for(int i=0;i<5;i++){
        cout<<"enter the values to be entered";
        cin>>arr[i];
    }

    
}

void display_output(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}



int main(){
    int arr[5];
    take_input(arr);

    display_output(arr);
    
}