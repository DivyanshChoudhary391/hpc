//

# include <iostream>
using namespace std;

class student{
    private:
    int id;
    char *name;

    public:
    student(){
        id=10;
        name="divyansh";
    }
    student(int ids,char *names){
        id=ids;
        *name=names;
    }
    student(const student &obj){
        id=obj.id;
        *name=obj.*name;
        
    }

    void print_students(){
        cout<<"id is "<<id<<endl;
        cout<<"name is "<<*name<<endl;


    }


};

int main(){
    student s1;
    student s2(101,"shivang");
    student s3(s2);

    s1.print_students();
    s2.print_students();
    s3.print_students();

    

}
