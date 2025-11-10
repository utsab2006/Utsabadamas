#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;        // Get last digit
        rev = rev * 10 + rem;  // Add digit to reverse
        num = num / 10;        // Remove last digit
    }

    printf("Reverse of the number is %d", rev);

    return 0;
}