#include <iostream>
using namespace std;

int sumNatural(int n) {
    return n * (n + 1) / 2; // formula
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of first " << n << " natural numbers = " << sumNatural(n) << endl;
    return 0;
}
