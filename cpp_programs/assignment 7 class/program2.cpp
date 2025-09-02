    // 2. Create a class student which contains id,name, dat members and methods setdata() to get these attributes by passing the
    // arguments and  putdata() to display these details.

    # include <iostream>
    using namespace std;

    class student{
        private:
        int id;
        string name;

        public:
        void set_data(int idsss,string names){
            id=idsss;
            name=names;
        }
        void put_data(){
            cout<<"the name is "<<name<<endl;
            cout<<"the ID is "<<id<<endl;

        }

    };

    int main(){
        student student1, student2;

        student1.set_data(401,"divyansh choudhary");
        student1.put_data();
        student2.set_data(405,"aryan khan");
        student2.put_data();



        return 0;
    }