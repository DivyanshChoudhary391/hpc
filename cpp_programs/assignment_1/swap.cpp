// Write a C++ program to input two numbers and swap the two numbers

# include <iostream>

using namespace std;

void swap(int *n1,int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

int main(){
    int n1,n2;
    cout<<"enter the first number "<<endl;
    cin>>n1;
    cout<<"enter the second number "<<endl;
    cin>>n2;

    cout<<"before swapping "<<n1<<" "<<n2<<endl;
    swap(&n1,&n2);
    cout<<"after swapping "<<n1<<" "<<n2<<endl;
    
    return 0;
}