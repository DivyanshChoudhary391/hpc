#include <iostream>
using namespace std;

void take_input(int arr[], int n) {
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int find_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    take_input(arr, n);

    int maximum = find_max(arr, n);
    int minimum = find_min(arr, n);

    cout << "\nMaximum element = " << maximum;
    cout << "\nMinimum element = " << minimum << endl;

    return 0;
}
