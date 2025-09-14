// Case Study 1: Smart Calculator (Function Overloading)
// A software company is developing a Smart Calculator that supports different types of
// addition operations.
// You are asked to design a class Calculator with overloaded functions add() to handle different
// cases of addition:
// 1. Add two integers → add(int a, int b)
// 2. Add three integers → add(int a, int b, int c)
// 3. Add two floating-point numbers → add(float x, float y)


# include <bits/stdc++.h>
using namespace std;

class calculator{
    
    public:
    

    int add(int n1,int n2){
        return (n1+n2);
    }
    double add(double n1,double n2){
        return (n1+n2);
    }
    int add(int n1,int n2,int n3){
        return (n1+n2+n3);
    }
};

int main(){
    calculator c1;
    int result1=c1.add(4,5);
    int result2=c1.add(4,5,6);
    double result3=c1.add(4.4,5.5);
    
    cout<<result1<<endl;
    cout<<result2<<endl;
    cout<<result3<<endl;


    return 0;
}