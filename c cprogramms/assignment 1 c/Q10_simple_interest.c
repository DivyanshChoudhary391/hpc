// 10. Write a program which take three inputs one as principal and second rate, third as
// time and calculate the simple interest.

#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Taking inputs
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Printing result
    printf("Simple Interest = %f\n", simpleInterest);

    return 0;
}
