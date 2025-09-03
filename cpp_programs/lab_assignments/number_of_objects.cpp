// wap to count the number of objects in a porgram in cpp
# include <iostream>
using namespace std;

class number{
    private:
    static int num;
    // int id=0;

    
    public:
    number(){
        num++;
        
    }
    void print(){
        cout<<num;

    }
    
};

int number:: num;


int main(){
    number n1;
    number n2;
    number n3;

    n1.print();
    cout<<endl;

    n2.print();
    cout<<endl;

    n3.print();
    cout<<endl;



    return 0;
}