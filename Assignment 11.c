#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time, amount, compoundInterest;
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;


    printf("\nFinal Amount = %.2lf", amount);
    printf("\nCompound Interest = %.2lf\n", compoundInterest);

    return 0;
}
