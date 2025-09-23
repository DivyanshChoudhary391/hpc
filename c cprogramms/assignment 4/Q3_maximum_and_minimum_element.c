// Q3. Write a C program to find the maximum and minimum elements in an array.
#include <stdio.h>

int main() {
    int arr[10];

    // Input numbers
    for (int i = 0; i < 10; i++) {
        printf("Enter the %dth number: ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize min and max with first element
    int maximum = arr[0];
    int minimum = arr[0];

    // Check rest of the array
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    printf("Maximum of the array is %d\n", maximum);
    printf("Minimum of the array is %d\n", minimum);

    return 0;
}
