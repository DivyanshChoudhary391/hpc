// Write a C++ program to find
// Area of square,rectangle,circle and triangle using Function Overloading.

# include <iostream>
using namespace std;

float area(float r){
    //for circle
    return (3.14*r*r);

}
int area(int l,int b){
    //for rectangle
    return (l*b);
}
int area(int side){
    //for square
    return (side*side);
}
float area(float b, float h){
    //for trianle 
    return(0.5*b*h);
}

int main(){
    int square_side;
    int rect_length;
    int rect_breadth;
    float circle_radius;
    float triangle_h;
    float triangle_b;

    cout<<"enter the square side"<<endl;
    cin>>square_side;
    cout<<"enter the rectangle length"<<endl;
    cin>>rect_length;
    cout<<"enter the rectangle breadth"<<endl;
    cin>>rect_breadth;
    cout<<"enter the circle radius"<<endl;
    cin>>circle_radius;
    cout<<"enter the triangle height"<<endl;
    cin>>triangle_h;
    cout<<"enter the triangle base"<<endl;
    cin>>triangle_b;

    cout<<"area of circle is "<<area(circle_radius)<<endl;
    cout<<"area of rectangle is"<<area(rect_length,rect_breadth)<<endl;
    cout<<"area of square is "<<area(square_side)<<endl;
    cout<<"area of triangle is "<<area(triangle_b,triangle_h)<<endl;

    cout<<endl;


    return 0;
}