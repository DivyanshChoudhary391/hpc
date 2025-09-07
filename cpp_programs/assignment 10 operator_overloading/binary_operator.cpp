#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    // Constructors
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Function to get data from user
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> img;
    }

    // Function to display complex number
    void showData() {
        cout << real;
        if (img >= 0) cout << " + " << img << "i" << endl;
        else cout << " - " << -img << "i" << endl;
    }

  

    // Complex + Complex
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, img + c.img);
    }

    // Complex + int
    Complex operator+(int x) {
        return Complex(real + x, img);
    }

    // Complex - Complex
    Complex operator-(const Complex &c) {
        return Complex(real - c.real, img - c.img);
    }

    // Complex - int
    Complex operator-(int x) {
        return Complex(real - x, img);
    }

    // Friend declaration for non-member functions
    friend Complex operator+(int x, const Complex &c);
    friend Complex operator-(int x, const Complex &c);
};



// int + Complex
Complex operator+(int x, const Complex &c) {
    return Complex(c.real + x, c.img);
}

// int - Complex
Complex operator-(int x, const Complex &c) {
    return Complex(x - c.real, -c.img);
}


int main() {
    Complex c1(3, 4), c2(5, -2), c3;

    cout << "c1: "; c1.showData();
    cout << "c2: "; c2.showData();

    // Member function overloads
    c3 = c1 + c2;   // Complex + Complex
    cout << "c1 + c2 = "; c3.showData();

    c3 = c1 + 5;    // Complex + int
    cout << "c1 + 5 = "; c3.showData();

    c3 = 5 + c1;    // int + Complex
    cout << "5 + c1 = "; c3.showData();

    c3 = c1 - c2;   // Complex - Complex
    cout << "c1 - c2 = "; c3.showData();

    c3 = c1 - 2;    // Complex - int
    cout << "c1 - 2 = "; c3.showData();

    c3 = 10 - c1;   // int - Complex
    cout << "10 - c1 = "; c3.showData();

    return 0;
}
