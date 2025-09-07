// Implement unary operators using operator overloading and member functions
#include <bits/stdc++.h>
using namespace std;

class Pair {
private:
    int a, b;

public:
    // Parameterised constructor (default values = 0)
    Pair(int x = 0, int y = 0) {
        a = x;
        b = y;
    }

    // Overloading the prefix ++ operator
    Pair operator++() {
        Pair temp;         // create a new object
        temp.a = ++a;      // increment both
        temp.b = ++b;
        return temp;       // return the new object
    }

    // Overloading the prefix -- operator
    Pair operator--() {
        Pair temp;
        temp.a = --a;      // decrement both
        temp.b = --b;
        return temp;
    }

    // Display function
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

// Driver code
int main() {
    Pair p1(5, 10);

    cout << "Before increment: ";
    p1.display();

    // Using the pre-increment operator
    Pair p2 = ++p1;
    cout << "After pre increment (new object): ";
    p2.display();

    cout << "Original object after increment: ";
    p1.display();

    // Using the pre-decrement operator
    Pair p3 = --p1;
    cout << "After pre decrement (new object): ";
    p3.display();

    cout << "Original object after decrement: ";
    p1.display();

    return 0;
}
