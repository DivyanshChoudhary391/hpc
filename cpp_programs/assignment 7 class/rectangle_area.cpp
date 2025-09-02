//this is question number 5 of assignment 

# include <iostream>
using namespace std;

class rectangle{
    private:
    int length,breadth;

    public:
    rectangle(){
        length=2;
        breadth=3;
    }
    rectangle(int l,int b){
        length=l;
        breadth=b;
        // rectangle(int length, int breadth) : length(length), breadth(breadth) {}
        // this is also the correct and professional way of definging class members using a intializer list

        //if the name of parameters and the member functions are same what else could be used is 

        // this->length = length;
        // this->breadth = breadth;
    };

    int area(){
        return length*breadth;
    }

};


int main(){
    rectangle r1;
    rectangle r2(9,10);

    cout<<"the output from non parameterized function is "<<r1.area()<< endl;
    cout<<"the output from parameterized function is "<<r2.area()<< endl;





    return 0;


}