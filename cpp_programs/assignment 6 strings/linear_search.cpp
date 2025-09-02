#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;  // return index if found
    }
    return -1;  // return -1 if not found
}

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int pos = linear_search(arr, n, key);

    if (pos == -1)
        cout << "\nElement not found in the array." << endl;
    else
        cout << "\nElement found at position (index) " << pos << endl;

    return 0;
}
