#include <stdio.h>

int main() {
    int n;     // The number input by the user
    int i;     // Loop counter for checking divisors
    int count = 0; // Flag to track if a divisor is found (0 = not composite, 1 = composite)

    // --- Input ---
    printf("Enter a number: ");
    scanf("%d", &n);

    // --- Special Case Check (0 and 1) ---
    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0; // Exit program
    } 
    
    // --- Composite Check (Numbers >= 2) ---
    else {
        // We only need to check for divisors from 2 up to half of the number (n/2).
        // If a number has a divisor greater than n/2, it must also have one smaller than n/2.
        for (i = 2; i <= n / 2; i++) {
            
            // Check if 'i' divides 'n' evenly
            if (n % i == 0) {
                count = 1; // Divisor found, so it is composite
                break;     // No need to check further, we found a divisor
            }
        }

        // --- Output Result ---
        if (count == 1) {
            printf("%d is a Composite number.\n", n);
        } else {
            // If no divisors were found (count remains 0), the number is Prime
            printf("%d is a Prime number.\n", n);
        }
    }

    return 0;
}