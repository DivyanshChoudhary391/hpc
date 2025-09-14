// Case Study 6: Bank Account Operations (Operator Overloading)
// A banking software system wants to make account transactions easier using operator
// overloading.
// Requirements
// 1. Define a class BankAccount with attributes:
// o accountNumber (int)
// o balance (double)
// 2. Overload the following operators:
// o + → to deposit an amount to the account.
// o - → to withdraw an amount from the account.
// o &lt;&lt; (stream insertion) → to display account details.
// 3. In main(), create an object of BankAccount and perform deposit and withdrawal
// operations using the overloaded operators.

#include <bits/stdc++.h>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    // constructor
    BankAccount(int accNo, double bal = 0.0) {
        accountNumber = accNo;
        balance = bal;
    }

    // overload + operator (deposit money)
    BankAccount operator+(double amount) {
        balance += amount;
        return *this; // return updated object
    }

    // overload - operator (withdraw money)
    BankAccount operator-(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds! Withdrawal not allowed." << endl;
        }
        return *this; // return updated object
    }

    // normal display function (instead of operator<<)
    void display() const {
        cout << "Account Number: " << accountNumber 
             << " | Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, 5000);  // account with initial balance 5000

    cout << "Initial Account Details: ";
    acc1.display();

    acc1 = acc1 + 2000;  // deposit
    cout << "After deposit: ";
    acc1.display();

    acc1 = acc1 - 3000;  // withdraw
    cout << "After withdrawal: ";
    acc1.display();

    acc1 = acc1 - 6000;  // trying to withdraw more than balance
    cout << "After failed withdrawal: ";
    acc1.display();

    return 0;
}
