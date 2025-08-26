#include <stdio.h>
#include <math.h>

int main() {
    float num;
    int floorVal, ceilVal;

    printf("Enter a number (positive or negative): ");
    scanf("%f", &num);

    floorVal = floor(num);
    ceilVal = ceil(num);

    printf("Number entered: %.2f\n", num);
    printf("Floor value: %d\n", floorVal);
    printf("Ceiling value: %d\n", ceilVal);

    return 0;
}

