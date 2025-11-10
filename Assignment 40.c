#include <stdio.h>

int main() {
    float w, charge;

    printf("Enter weight of parcel (in kg): ");
    scanf("%f", &w);

    if (w <= 10)
        charge = w * 30;
    else if (w <= 30)
        charge = 10 * 30 + (w - 10) * 20;
    else
        charge = 10 * 30 + 20 * 20 + (w - 30) * 15;

    printf("Total charge = Rs %.2f\n", charge);

    return 0;
}