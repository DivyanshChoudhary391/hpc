// Write a C++ program that takes marks (0–100) as input and prints the based on the following conditions:
// 90–100 → Grade A
// 75–89 → Grade B
// 50–74 → Grade C
// Below 50 → Fail


#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid input!" << endl;
    }
    else if (marks >= 90 && marks <= 100) {
        cout << "Grade A" << endl;
    }
    else if (marks >= 75 && marks <= 89) {
        cout << "Grade B" << endl;
    }
    else if (marks >= 50 && marks <= 74) {
        cout << "Grade C" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
}
