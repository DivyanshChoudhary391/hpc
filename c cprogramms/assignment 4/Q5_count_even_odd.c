// Q5. Write a C program to count how many even and odd numbers are present in an array.
#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];     

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output results
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}
