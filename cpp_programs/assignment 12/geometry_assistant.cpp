// Case Study 5: Geometry Assistant – Perimeter Calculation Using Friend Function
// A math learning application needs a feature to calculate the perimeter of different geometrical
// figures.
// To implement this, you are asked to design separate classes for Rectangle, Circle, and
// Triangle.
// Since perimeter calculation often requires access to the figure’s private data (like side
// lengths, radius, etc.), a friend function will be used.
// Requirements:
// 1. Create the following classes:
// o Rectangle → with private members length and breadth.
// o Circle → with private member radius.
// o Triangle → with private members a, b, c (sides).
// 2. Define a friend function calculatePerimeter() that can access the private members of
// each class and compute their perimeters.

#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // declare friend
    friend void calculatePerimeter(const Rectangle&);
};

class Circle {
    int radius;

public:
    Circle(int r) {
        radius = r;
    }

    // declare friend
    friend void calculatePerimeter(const Circle&);
};

class Triangle {
    int side1;
    int side2;
    int side3;

public:
    Triangle(int s1, int s2, int s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // declare friend
    friend void calculatePerimeter(const Triangle&);
};

// Friend function overloads
void calculatePerimeter(const Rectangle& r) {
    cout << "Perimeter of Rectangle: " << 2 * (r.length + r.breadth) << endl;
}

void calculatePerimeter(const Circle& c) {
    cout << "Perimeter of Circle: " << 2 * 3.14 * c.radius << endl;
}

void calculatePerimeter(const Triangle& t) {
    cout << "Perimeter of Triangle: " << t.side1 + t.side2 + t.side3 << endl;
}

int main() {
    Rectangle rect(10, 5);
    Circle cir(7);
    Triangle tri(3, 4, 5);

    calculatePerimeter(rect);
    calculatePerimeter(cir);
    calculatePerimeter(tri);

    return 0;
}
