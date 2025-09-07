// Implement unary operators using operator overloading
#include <iostream>
using namespace std;

class unary {
private:
    int n1;
    int n2;

public:
    // Constructor (default + parameterized)
    unary(int x = 1, int y = 2) {
        n1 = x;
        n2 = y;
    }

    // Display function
    void display() {
        cout << "First number: " << n1 << endl;
        cout << "Second number: " << n2 << endl;
    }

    // Member function for overloading prefix ++
    unary operator++() {
        ++n1;
        ++n2;
        return *this; // return updated object
    }

    // Member function for overloading prefix --
    unary operator--() {
        --n1;
        --n2;
        return *this;
    }
};

int main() {
    unary u1(5, 10);

    cout << "Original values:" << endl;
    u1.display();

    cout << "\nAfter prefix ++ :" << endl;
    ++u1; // calls operator++()
    u1.display();

    cout << "\nAfter prefix -- :" << endl;
    --u1; // calls operator--()
    u1.display();

    return 0;
}
