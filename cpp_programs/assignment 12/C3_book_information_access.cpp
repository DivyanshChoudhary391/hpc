// Case Study 3: Book Information Access (Const Object)
//  A digital library system maintains book information where some details are read-only.
//  Define a class Book with attributes:
// o string title
// o string author
//  Add:
// o getTitle() as a const function (read-only).
// o setTitle() as a modifying function.
//  Create a const object of Book and demonstrate that it can only call getTitle() but not
// setTitle().

# include <bits/stdc++.h>
using namespace std;

class Book{
    string title;
    string author;
    
    public:
    Book(string t,string a){
        title=t;
        author=a;

    }


    void get_title()const {
        cout<<"title of the book is "<<title<<endl;
        cout<<"the author of the book is "<<author<<endl;
    }

    void set_title(string new_title,string new_author){
        title= new_title;
        author= new_author;

    }
};

int main(){
    cout<<"for normal object  --------------------------"<<endl;
    Book b1("Harry Potter and prisoner of askaban","JK Rowling");
    b1.get_title();

    b1.set_title("harry Potter","JK");
    b1.get_title();

    cout<<"for constant object ------------------------"<<endl;
    const Book b2("RD Sharma","Sharma JI");
    b2.get_title();
    // b2.set_title("RS aggarwal","Aggarwal ji");
    // this line would have worked if the object were not constant it won't compile as it is not possible to change a const onject


    

    return 0;
}