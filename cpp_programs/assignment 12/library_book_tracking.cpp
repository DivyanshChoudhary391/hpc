// Case Study 4: Library Book Tracking (Static Data Member)
//  A library maintains the total number of books issued and returned.
//  Define a class Library with a static data member totalBooks.
//  Add functions:
// o issueBook() → decreases totalBooks
// o returnBook() → increases totalBooks
// o showTotalBooks() → displays the current count
//  Demonstrate issuing and returning books using multiple objects, and show that the
// static member is shared across all objects.

# include <bits/stdc++.h>
using namespace std;

class Library{
    static int total_number_of_books;
    string name_of_student; 

    public:
    Library(string n){
    name_of_student=n; // name of the person whom the book got issued 
    }



    void issueBook(){
        --total_number_of_books;
        cout<<name_of_student<<" issued a book"<<endl;
        cout<<"number of books are after issuing "<<total_number_of_books<<endl;
    }
    void returnBook(){
        ++total_number_of_books;
        cout<<name_of_student<<"returned a book"<<endl;
        cout<<"number of books after returning are "<<total_number_of_books<<endl;
    }
    void static showBook(){
        cout<<"the current number of books are "<<total_number_of_books<<endl;
    }

};

int Library::total_number_of_books=100;// defining the initial number of books to be 100 and  

int main(){
    Library l1("amogh");
    l1.issueBook();
    l1.returnBook();
    l1.showBook();

    Library l2("areeb");
    l2.issueBook();
    l2.returnBook();
    l2.showBook();

    Library::showBook();
    


    return 0;
}