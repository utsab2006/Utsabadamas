#include <stdio.h>

int main() {
    int a, b, c, greatest;

    // Prompt user to enter three numbers
    printf("Enter three numbers (e.g., a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // --- 1. Check for equal numbers ---
    if (a == b && b == c) {
        printf("Numbers are equal.\n");
        return 0; // Exit program if all are equal
    }

    // --- 2. Find the Greatest Number ---

    // Assume 'a' is the greatest initially
    greatest = a;

    // Check if 'b' is greater than current 'greatest'
    if (b > greatest) {
        greatest = b;
    }

    // Check if 'c' is greater than current 'greatest'
    if (c > greatest) {
        greatest = c;
    }

    // Print the greatest number
    printf("The greatest number is: %d\n", greatest);


    // --- 3. Check for Positive, Negative, or Mixed Numbers ---

    // Case: All Positive
    if (a > 0 && b > 0 && c > 0) {
        printf("All numbers are positive.\n");
    }
    // Case: All Negative
    else if (a < 0 && b < 0 && c < 0) {
        printf("All numbers are negative.\n");
    }
    // Case: Mixed (some positive, some negative, or including zero)
    else {
        printf("The numbers are mixed (positive, negative, and/or zero).\n");
    }

    return 0;
}