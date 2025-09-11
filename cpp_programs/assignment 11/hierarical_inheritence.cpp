# include <bits/stdc++.h>
using namespace std;

class polygon{
    protected:
    int length;
    int base;
    int height;

    public:
    polygon(int length1=10, int base1=50 ,int height1=40){
        length=length1;
        base=base1;
        height= height1;

    }
};

class rectangle : public polygon{

    public:
    int area_R(){
        return length*base;

    }
};

class triangle : public polygon{
    public:
    float area_t(){
        return (0.5*base*height);

    }
};

int main(){

    polygon p1(100,200,300);

    rectangle r1;

    int area_r=r1.area_R();
    cout<<"area of that rectangle is "<< area_r<<endl;

    triangle t1;
    int area_t=t1.area_t();
    cout<<"area of that triangle is "<<area_t<<endl; 

    return 0;
}