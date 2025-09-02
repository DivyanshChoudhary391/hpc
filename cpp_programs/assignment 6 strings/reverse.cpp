#include <iostream>
using namespace std;

void take_input(int arr[], int n) {
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void print_reverse(int arr[], int n) {
    cout << "\nArray elements in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    take_input(arr, n);
    print_reverse(arr, n);

    return 0;
}
