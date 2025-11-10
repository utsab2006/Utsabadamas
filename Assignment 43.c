#include <stdio.h>

int main() {
    int n;    // Stores the two-digit number input by the user
    int a;    // Stores the tens digit (Digit_1)
    int b;    // Stores the units digit (Digit_2)
    int sum;  // Stores the final result

    // Prompt user for input
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    // Basic validation to ensure it's roughly a two-digit number
    if (n < 10 || n > 99) {
        printf("Warning: The entered number is not a standard two-digit number (10-99).\n");
    }

    // --- 1. Extract the digits ---
    
    // 'a' is the tens digit (using integer division by 10)
    // Example: 56 / 10 = 5
    a = n / 10;
    
    // 'b' is the units digit (using the modulo operator to get the remainder)
    // Example: 56 % 10 = 6
    b = n % 10;

    // --- 2. Calculate the required sum ---
    // sum = (sum of digits) + (product of digits)
    sum = (a + b) + (a * b);

    // --- 3. Output the result ---
    printf("Result = %d\n", sum);

    return 0;
}