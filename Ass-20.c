#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("%d is a Whole Number.\n", num);
    }
    else {
        printf("%d is NOT a Whole Number.\n", num);
    }

    return 0;
}