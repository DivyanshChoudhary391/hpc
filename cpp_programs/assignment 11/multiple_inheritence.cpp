# include <bits/stdc++.h>
using namespace std;

// program to get sports academic and result marks

class academic{
    protected:
    int n1;
    int n2; 
    int id;
    
    public:

    academic(int m1=10,int m2=20,int m3=1001){
        n1=m1;
        n2=m2;
        id=m3;

    }
};

class sports{
    protected:
    int sports_marks;

    public:
    sports(int sm=30){
        sports_marks=sm; 
    }


};

class  total_marks :public academic, public sports{
    int result = n1+n2+sports_marks;
    

    public:

    void display(){
        cout<<"Id of that student is "<<id<<endl;
        cout<<"result of summation of academic marks and sports marks is "<<result<<endl;
        
    }


};

int main(){
    
    academic a1(1,2,10004);

    
    sports s1(50);

    total_marks t1;
    
    t1.display();

    return 0;
}
