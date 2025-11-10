#include <stdio.h>
#include <math.h> // Required for the sqrt() function

int main() {
    float a, b, c, s, area, perimeter;

    // Prompt user to enter three sides
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // --- 1. Check for a valid triangle ---
    // The sum of any two sides must be greater than the third side.
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        
        // Calculate the perimeter
        perimeter = a + b + c;
        
        // Calculate the semi-perimeter (s)
        s = perimeter / 2.0;
        
        // Calculate the area using Heron's formula: area = sqrt(s * (s-a) * (s-b) * (s-c))
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        // --- 2. Check for an Equable Triangle ---
        // An equable triangle has Area == Perimeter.
        // Due to floating-point imprecision, a small tolerance (0.0001) is used
        // to check if the absolute difference between area and perimeter is close to zero.
        if (fabs(area - perimeter) < 0.0001) {
            printf("The triangle is an Equable Triangle.\n");
            // Optional: Print calculated values for verification
            // printf("Perimeter: %.4f, Area: %.4f\n", perimeter, area); 
        } else {
            printf("The triangle is NOT an Equable Triangle.\n");
            // Optional: Print calculated values for verification
            // printf("Perimeter: %.4f, Area: %.4f\n", perimeter, area);
        }
    } else {
        // Output if the sides do not form a valid triangle
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}