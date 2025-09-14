// Case Study 7: University System (Inheritance)
// A university needs a software module to manage students and teachers. This can be designed
// using inheritance.
// 1. Create a base class Person with attributes:
// o name (string)
// o age (int)
// 2. Derive two classes from Person:
// o Student → with additional attributes rollNumber and course.
// o Teacher → with additional attributes employeeId and subject.
// 3. Both classes should have functions to input details and display details.
// 4. Demonstrate inheritance by creating objects of Student and Teacher and calling their
// respective methods.

#include <bits/stdc++.h>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // clear input buffer
    }

    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
    int rollNumber;
    string course;

public:
    void inputStudent() {
        inputPerson(); // call base class function
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter course: ";
        getline(cin, course);
    }

    void displayStudent() const {
        displayPerson(); // call base class display
        cout << "Roll Number: " << rollNumber
             << ", Course: " << course << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
    int employeeId;
    string subject;

public:
    void inputTeacher() {
        inputPerson(); // call base class function
        cout << "Enter employee ID: ";
        cin >> employeeId;
        cin.ignore();
        cout << "Enter subject: ";
        getline(cin, subject);
    }

    void displayTeacher() const {
        displayPerson(); // call base class display
        cout << "Employee ID: " << employeeId
             << ", Subject: " << subject << endl;
    }
};

int main() {
    cout << "--- Enter Student Details ---" << endl;
    Student s;
    s.inputStudent();

    cout << "\n--- Enter Teacher Details ---" << endl;
    Teacher t;
    t.inputTeacher();

    cout << "\n--- Student Information ---" << endl;
    s.displayStudent();

    cout << "\n--- Teacher Information ---" << endl;
    t.displayTeacher();

    return 0;
}
