# include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the number which you want to check for prime"<<endl;
    cin>>num;
    int flag=0;

    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<"Number is not prime";
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"the number is prime";
    }





    return 0;

}
