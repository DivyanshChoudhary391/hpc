//  Perform addition operation on Complex data using class and object. The program should ask for real and imaginary part of two Complex numbers, and display the real and imaginary parts of their sum.. c3=add(c1,c2)

#include <iostream>
using namespace std;

class Complex{
    private:
    float real;
    float imag;

    public:

    //constructor
    Complex(float r1=5,float r2=10){
        real=r1;
        imag=r2;
        
    }

    void display(){ // to display the value of Complex number 
        cout<<"Complex number is "<<real<<"+"<<imag<<"i"<<endl;

    }

    friend Complex addition(Complex obj_formal_1,Complex obj_formal_2);

};

Complex addition(Complex c1,Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;

    return temp;

}

int main(){
    Complex c1;
    Complex c2(3,4);

    c1.display();
    c2.display();

    Complex sum= addition(c1,c2);
    sum.display();
    // cout<<"the sum of two Complex numbers is:"<<sum.display();

    return 0;
}