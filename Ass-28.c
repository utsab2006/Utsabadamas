#include <stdio.h>
int main() {
    float basic, hra, ta, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

   
    hra = 0.20 * basic;    
    ta  = 0.10 * basic;     
    da  = 0.05 * basic;    
    gross = basic + hra + ta + da;

    printf("HRA = %.2f\n", hra);
    printf("TA = %.2f\n", ta);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
