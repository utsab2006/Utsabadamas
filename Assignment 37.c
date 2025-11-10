#include <stdio.h>

int main() {
    int num, choice;

    // Menu and input for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Menu display
    printf("\n--- Main Menu ---\n");
    printf("1. Check if number is even or odd\n");
    printf("2. Check if number is a 'buzz number'\n");
    printf("3. Check if number is positive or negative\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Switch statement to handle the choice
    switch (choice) {
        case 1: // Check for even or odd
            if (num % 2 == 0) {
                printf("%d is an even number.\n", num);
            } else {
                printf("%d is an odd number.\n", num);
            }
            break;

        case 2: // Check for a 'buzz number'
            // A buzz number is defined here as a number that is divisible by 7 OR ends with 7.
            if (num % 7 == 0 || num % 10 == 7) {
                printf("%d is a buzz number.\n", num);
            } else {
                printf("%d is not a buzz number.\n", num);
            }
            break;

        case 3: // Check for positive or negative
            if (num > 0) {
                printf("%d is a positive number.\n", num);
            } else if (num < 0) {
                printf("%d is a negative number.\n", num);
            } else {
                printf("The number is zero.\n"); // Handling the zero case
            }
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}