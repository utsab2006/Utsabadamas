#include <stdio.h>

int main() {
    int num, originalNum, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;   // Store the original number

    while(num != 0) {
        rem = num % 10;        // Get last digit
        rev = rev * 10 + rem;  // Form reverse number
        num = num / 10;        // Remove last digit
    }

    if(originalNum == rev)
        printf("%d is a Palindrome number.", originalNum);
    else
        printf("%d is not a Palindrome number.", originalNum);

    return 0;
}