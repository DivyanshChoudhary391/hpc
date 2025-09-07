// Write a C++ program to read 3 integers and check whether it is using an if-else statement for the greatest of three numbers  .

# include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"enter the first number "<<endl;
    cin>>n1;
    cout<<"enter the second number "<<endl;
    cin>>n2;
    cout<<"enter the third number "<<endl;
    cin>>n3;

    if(n1>n2){
        if(n1>n3){
            cout<<n1<<" is largest"<<endl;

        }
        else{ 
        cout<<n3<<" is largest"<<endl;}
    }
    else if(n1<n2){
        if(n2>n3){
            cout<<n2<<" is largest"<<endl;
        }
        else{
        cout<<n3<<" is largset"<<endl;}
    }
    else{
        cout<<n1<<" is largest"<<endl;// if all values are equal
    }

    return 0;
}