// Write a program to execute with user defined functions
// 1. string length
// 2. string copy
// 3. string concat
// 4. string compare
#include <iostream>
#include <cstring> // for strlen, strcpy, strcat, strcmp
using namespace std;

int main() {
    char str1[100], str2[100], result[200];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // 1. String Length
    cout << "\nLength of string 1 = " << strlen(str1);
    cout << "\nLength of string 2 = " << strlen(str2);

    // 2. String Copy
    strcpy(result, str1);
    cout << "\n\nCopied string = " << result;

    // 3. String Concatenation
    strcat(result, str2);
    cout << "\nConcatenated string = " << result;

    // 4. String Compare
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        cout << "\nStrings are equal.";
    else if (cmp > 0)
        cout << "\nString 1 is greater.";
    else
        cout << "\nString 2 is greater.";

    cout << endl;
    return 0;
}
