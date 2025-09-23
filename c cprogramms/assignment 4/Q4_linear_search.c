// Q4. Write a C program to search for an element in an array (Linear
// Search).

#include <stdio.h>

int main() {
    int n, key, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break; // stop after first occurrence
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
