#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Taking input in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display result
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

