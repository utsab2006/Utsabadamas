#include <stdio.h>

int main() {
    int num, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);
    lastDigit = num - (num / 10) * 10;

    printf("Last digit of %d is %d\n", num, lastDigit);

    return 0;
}
