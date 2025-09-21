// 7. Write a menu driven program in which use can take choice as.
// Addition Subtraction Multiplication Divide Modulo
// After taking the choice from user it should do the desired operation. In case of
// division of dividend is zero, program should display a warning that cannot divide.

# include <stdio.h>

int menu(int num1, int num2, int choice) {
    switch(choice) {
        case 1: // Addition
            return num1 + num2;

        case 2: // Subtraction
            return num1 - num2;

        case 3: // Multiplication
            return num1 * num2;

        case 4: // Division
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Division by zero not possible\n");
                return 0;
            }

        case 5: // Modulo
            if (num2 != 0) {
                return num1 % num2;
            } else {
                printf("Modulo by zero not possible\n");
                return 0;
            }

        default:
            printf("Invalid choice\n");
            return 0;
    }
}

int main() {
    int num1, num2, choice;

    while (1) {   // infinite loop until user exits
        printf("\n---- Menu ----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {   // Exit condition
            printf("Exiting program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        int result = menu(num1, num2, choice);

        printf("The result is: %d\n", result);
    }

    return 0;
}
