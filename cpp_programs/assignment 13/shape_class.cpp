// Q1. Basic Virtual Function Example
//  Write a program with a base class Shape having a virtual function area().
//  Derive classes Rectangle and Circle from it and override area() to calculate their respective areas.
//  Demonstrate runtime polymorphism by using a Shape* pointer.


#include <iostream>
using namespace std;

class shape{

    public:
    void virtual area()=0;

};

class rectangle : public shape{
    int length;
    int breadth;
    public:
    rectangle(int l=3,int b=4):length(l),breadth(b){

    }



    void area(){
        cout<<"area of that rectangle is "<<length * breadth<<endl;
    }
};

class circle : public shape{
    float radius;
    public:

    circle(int r=5):radius(r){

    }



    void area(){
        cout<<"area of that circle is "<<3.14*radius*radius<<endl;
    }
};


int main(){

    //as we have the shape  class as abstract class we will not make the objects of it
    rectangle r1(8,9);
    circle c1(100);

    // most important step in the runtime polymorphism is 
    shape *s; //base class pointer


    // r1.area();
    // c1.area();

    s=&r1;
    s->area();
    s->area();
    s=&c1;
    s->area();
    

    return 0;






}