#include <stdio.h>
#include <limits.h> // Used for INT_MAX

int main() {
    int n, temp_n, digit;
    int min_digit;

    // --- Input ---
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the absolute value of n in temp_n for digit extraction.
    // This allows the program to correctly handle negative inputs.
    temp_n = n;
    if (temp_n < 0) {
        temp_n = -temp_n;
    }
    
    // Handle the case where the input is 0 (smallest digit is 0)
    if (temp_n == 0) {
        printf("Smallest digit = 0\n");
        return 0;
    }

    // Initialize min_digit to the largest possible value (9 is sufficient for digits)
    min_digit = 9; 

    // --- Digit Extraction and Comparison Loop ---
    
    // The loop continues until temp_n becomes 0 (all digits have been extracted)
    while (temp_n > 0) {
        
        // 1. Extract the last digit using modulo 10
        digit = temp_n % 10;
        
        // 2. Compare the extracted digit with the current minimum
        if (digit < min_digit) {
            min_digit = digit; // Update the minimum digit
        }
        
        // 3. Move to the next digit by performing integer division by 10
        temp_n = temp_n / 10;
    }

    // --- Output ---
    printf("Smallest digit = %d\n", min_digit);

    return 0;
}