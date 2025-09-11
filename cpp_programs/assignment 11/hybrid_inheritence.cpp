#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int roll_number;

public:
    void get_data() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_number;
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
    }
};

// Academics inherits Student (virtually)
class Academics : virtual public Student {
protected:
    int maths, physics;

public:
    void get_academics() {
        cout << "Enter marks in Maths: ";
        cin >> maths;
        cout << "Enter marks in Physics: ";
        cin >> physics;
    }

    void display_academics() {
        cout << "\n--- Academic Marks ---\n";
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};

// Sports also inherits Student (virtually)
class Sports : virtual public Student {
protected:
    int sports_score;

public:
    void get_sports() {
        cout << "Enter sports score: ";
        cin >> sports_score;
    }

    void display_sports() {
        cout << "\n--- Sports Score ---\n";
        cout << "Sports: " << sports_score << endl;
    }
};

// Result inherits from both Academics and Sports
class Result : public Academics, public Sports {
    int total;

public:
    void calculate() {
        total = maths + physics + sports_score;
    }

    void display_result() {
        // avoid ambiguity → use Student::display()
        Student::display();
        display_academics();
        display_sports();
        cout << "\nTotal (Academics + Sports): " << total << endl;
    }
};

int main() {
    Result r1;

    // Input details
    r1.get_data();        // from Student
    r1.get_academics();   // from Academics
    r1.get_sports();      // from Sports
    r1.calculate();

    // Display final result
    r1.display_result();

    return 0;
}
