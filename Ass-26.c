#include <stdio.h>

int main() {
    char operator;
    double a, b;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

 
    printf("Enter two numbers: ");
    scanf("%lf", &a);
    scanf("%lf",&b);

    
    switch (operator) {
        case '+':
            printf("Sum is =%f",a+b);
            break;
        case '-':
            printf("Difference is =%f",a-b);
            break;
        case '*':
            printf("Product is =%f",a*b);
            break;
        case '/':
                printf("Division is=%f",a/b);
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}