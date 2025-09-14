// Case Study 2: Volume Calculation System
// An engineering design application needs a module that can calculate volumes of different 3D
// shapes.
// You are asked to design a class Volume with overloaded functions compute() to handle
// different cases of volume calculation:
// 1. Volume of a cube → compute(double side)
// 2. Volume of a cuboid → compute(double length, double breadth, double height)
// 3. Volume of a cylinder → compute(double radius, double height)


# include <bits/stdc++.h>
using namespace std;

class volume{

    public:
    void find_volume(double side){
        cout<<"the volume of cube is "<<pow(side,3)<<endl;
    }

    void find_volume(double length, double breadth, double height){
        cout<<"the volume of the cuboid is "<<length*breadth*height<<endl;
    }
    
    void find_volume(double radius,double height){
        cout<<"the volume of cylinder is "<<3.14*radius*radius*height<<endl;
    }

};

int main(){
    volume v1;
    v1.find_volume(3);
    v1.find_volume(3,4,5);
    v1.find_volume(3,4);

    return 0;
}