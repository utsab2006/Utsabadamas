#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    // Using the switch case based on the boolean result of (age >= 18)
    // If age >= 18 is true, (age >= 18) evaluates to 1
    // If age >= 18 is false, (age >= 18) evaluates to 0
    switch (age >= 18) {
        case 1:
            printf("You are eligible\n");
            break;

        case 0:
            printf("You are not eligible\n");
            break;
            
        default: // This case is technically unreachable for the boolean check
            printf("Invalid Input\n");
            break;
    }

    return 0;
}