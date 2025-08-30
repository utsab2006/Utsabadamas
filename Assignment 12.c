#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate/100), time);

    compoundInterest = amount - principal;

    printf("Compound Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
