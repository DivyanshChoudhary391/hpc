// 1. Create a class person which  has member variables as Name, Age, and Address.  
// There are two member functions in this class showData ( ), getData ( ), though which one  can collect the
// information and show it to user.

# include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    string address;



    void get_data(){
        cout<<"enter the name"<<endl;
        getline(cin,name);
        cout<<"enter the address"<<endl;
        getline(cin,address);
        cout<<"enter the age"<<endl;
        cin>>age;

    }

    void show_data(){
        cout<<"name is "<<name<<endl;
        cout<<"age is"<<age<<endl;
        cout<<"address is "<<address<<endl;

    }

};
int main(){
    person person1;

    person1.get_data();
    person1.show_data();


    return 0;
}