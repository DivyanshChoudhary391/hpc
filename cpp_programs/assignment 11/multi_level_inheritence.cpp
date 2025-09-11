// WAP to implement a C++ program to find out the student details using multilevel inheritance.
#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll_number;
    int standard;

public:
    Student(string n, int r, int s) {
        name = n;
        roll_number = r;
        standard = s;
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Class: " << standard << endl;
    }
};

class Accounts : public Student {
protected:
    int fee_left;
    int last_deposit;

public:
    Accounts(string n, int r, int s, int fee, int deposit)
        : Student(n, r, s) {   // call Student constructor
        fee_left = fee;
        last_deposit = deposit;
    }

    void display() {
        Student::display();   // also show student data
        cout << "\n--- Accounts Details ---\n";
        cout << "Fee Left: " << fee_left << endl;
        cout << "Last Deposit: " << last_deposit << endl;
    }
};

class Marks : public Accounts {
    int maths_marks;
    int physics_marks;
    int chem_marks;

public:
    Marks(string n, int r, int s, int fee, int deposit,
          int m, int p, int c)
        : Accounts(n, r, s, fee, deposit) {   // call Accounts constructor
        maths_marks = m;
        physics_marks = p;
        chem_marks = c;
    }

    void display() {
        Accounts::display();   // also show student + accounts
        cout << "\n--- Marks Details ---\n";
        cout << "Maths: " << maths_marks << endl;
        cout << "Physics: " << physics_marks << endl;
        cout << "Chemistry: " << chem_marks << endl;
    }
};

int main() {
    // Create object and initialize everything via constructor
    Marks m1("Aman", 101, 12, 2000, 5000, 85, 90, 78);

    // Display all details
    m1.display();

    return 0;
}
    