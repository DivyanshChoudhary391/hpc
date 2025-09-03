// WAP TO DEMONSTRATE the different types of constructors default parameterized and copy constructor for class rectangle

# include <iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    
    public:
    rectangle(){  // default constructor
        length=4;
        breadth=5;
    }
    rectangle(int l,int b){ //parameterized constructor
        length=l;
        breadth=b;

    }
    reectanle(const rectangle & obj){ //copy constructor 
        length=obj.length;
        breadth=obj.breadth;

    }
    void print_area(){ //to print the area of the rectangle
        
        cout<<(length*breadth)<<endl;

    }
    void print_peri(){
        cout<<2*(length+breadth)<<endl;
    }


};

int main(){
    rectangle r1;
    rectangle r2(13,14);
    rectangle r3(r2);

    r1.print_area();
    r2.print_area();
    r3.print_area();

    r1.print_peri();
    r2.print_peri();
    r3.print_peri();



    return 0;
}
