// Write a program in C++ having class student with members as
// Int id;
// Char * name;
// Implement this class using copy constructor, destructor , parameterized
// constructor and default constructor.

# include <iostream>
# include <cstring>
using namespace std;

class student{
    private:
    int id;
    char *name;

    public:
    //default constructor
    student(){
        id=1;
        name= new char[strlen("divyansh")+1];
        strcpy(name,"divyansh");

    }

    //parameterized constructor
    student(int identity,const char *names){
        id=identity;
        name= new char[strlen(names)+1];
        strcpy(name,names);
        

    }
    //copy constructor
    student(const student &obj){
        id=obj.id;
        name= new char [strlen(obj.name)+1];
        strcpy(name,obj.name);

    }
    ~student(){
        delete [] name;
        cout<<"destructor is called for student with id"<<id<<endl;
    }

    void display(){
        cout<<this->id<<"is the id "<<endl;
        cout<< this->name<<"this is the name";
        
    }
};

int main(){
    student s1;
    student s2(100,"hellllllo");
    student s3=s1;

    s1.display();
    s2.display();
    s3.display();

    


    return 0;

}