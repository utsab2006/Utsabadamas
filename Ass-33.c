#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  

   
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d (!%d) = %llu\n", n, n, factorial);
    }

    return 0;
}
