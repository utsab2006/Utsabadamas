#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int n, temp_n, num_digits = 0;
    int digit, sum_of_powers = 0;
    int automorphic_check_n;

    // --- Input ---
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store the original number for later checks
    temp_n = n;
    automorphic_check_n = n;

    // --- 1. Narcissistic Number Check (Armstrong) ---

    // A. Count the number of digits
    for (temp_n = n; temp_n > 0; temp_n /= 10) {
        num_digits++;
    }

    // Reset temp_n for the power calculation loop
    temp_n = n;

    // B. Calculate the sum of (digit ^ num_digits)
    for (temp_n = n; temp_n > 0; temp_n /= 10) {
        digit = temp_n % 10;
        // The cast to int is necessary as pow() returns a double
        sum_of_powers += (int)pow(digit, num_digits);
    }

    // C. Check if it's Narcissistic
    if (sum_of_powers == n) {
        printf("%d is a Narcissistic Number.\n", n);
    }
    else {
        // --- 2. Automorphic Number Check ---

        // Calculate the square of the number (using long long for safety)
        long long square = (long long)n * n;
        
        // Calculate the power of 10 needed to isolate the last 'num_digits' digits
        // For a 2-digit number (e.g., 25), power_of_10 is 100.
        int power_of_10 = 1;
        for (int i = 0; i < num_digits; i++) {
            power_of_10 *= 10;
        }

        // Get the last 'num_digits' from the square
        long long last_digits_of_square = square % power_of_10;

        // Check if the number is Automorphic
        if (last_digits_of_square == n) {
            printf("%d is an Automorphic Number.\n", n);
        }
        else {
            // --- 3. Neither ---
            printf("%d is Neither Narcissistic nor Automorphic.\n", n);
        }
    }

    return 0;
}