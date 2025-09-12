//  Q2. Write a program with a base class circle having a virtual function area().
//  Derive class cylinder  from it and override area() to calculate their respective areas.
//  Demonstrate runtime polymorphism by using a circle* pointer.



# include <bits/stdc++.h>
using namespace std;

class circle{
    protected:
    float radius;
    public:
    
    circle(float r=10){
        radius=r;

    }

    virtual void area(){
        float circle_area=3.14*radius*radius;
        cout<<"area of circle is "<<circle_area<<endl;

    };
        
};


class cylinder : public circle{
    int height;
    public:
    cylinder(float r, float h):height(h),circle(r){
        
    }


    void area(){
        int area=2*(3.14*radius*height+3.14*radius*radius);
        cout<<"area of cylinder is "<<area;
    }

    

};


int main(){
    circle *c;  //base class pointer
    circle ci(10);
    cylinder cy(4,6);
    c=&ci;
    c->area();
    c=&cy;
    c->area();
    return 0;
}