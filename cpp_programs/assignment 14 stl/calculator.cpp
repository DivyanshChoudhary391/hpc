// Create a class template Calculator<T>
// with functions add(), subtract(), multiply(), and divide().


# include <bits/stdc++.h>
using namespace std;

template <class T>
class Calculator{
    T number1,number2;
    public:

    Calculator(T n1,T n2){
        number1=n1;
        number2=n2;

    }

    void add(){
        cout<<"the summation of two numbers is "<<number1+number2<<endl;
        
    } 
    void subtract(){
        cout<<"the subtraction of two numbers is "<<number1-number2<<endl;
    }  
    void multiplication(){
        cout<<"the multiplication of two numbers is "<<number1*number2<<endl;
    } 
    void division(){
        if(number2!=0){
            cout<<"the division of two numbers is "<<number1/number2<<endl;
        }
        else{
            cout<<"cannot divide by zero"<<endl;
        }
    }


    
};

int main(){
    Calculator <int>c1(3,4);
    Calculator <float>c2(4.5,5.9);
    Calculator <int>c3(9,0);
    Calculator <char>c4('a','b');

    c1.add();
    c1.subtract();
    c1.multiplication();
    c1.division();

    cout<<"-----------------------------------------"<<endl;
    
    c2.add();
    c2.subtract();
    c2.multiplication();
    c2.division();
    cout<<"-----------------------------------------"<<endl;
    
    c3.add();
    c3.subtract();
    c3.multiplication();
    c3.division();
    
    cout<<"-----------------------------------------"<<endl;
    c4.add();
    c4.subtract();
    c4.multiplication();
    c4.division();








    return 0;
}